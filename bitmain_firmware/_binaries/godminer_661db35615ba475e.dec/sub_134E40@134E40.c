int __fastcall sub_134E40(int a1, int a2, _BYTE *a3, unsigned __int8 *a4)
{
  int v5; // lr
  int v7; // r9
  int v8; // r4
  __int16 v9; // r3
  int v10; // r6
  int v11; // r1
  unsigned __int8 *v12; // r1
  _BYTE *v13; // r0
  char v14; // t1
  unsigned __int8 *v15; // r7
  int v16; // r11
  int v17; // r11
  int v18; // r11
  int v19; // r3
  char v21; // [sp+14h] [bp-1818h]
  int v22; // [sp+18h] [bp-1814h]
  char s[2040]; // [sp+28h] [bp-1804h] BYREF
  char v25[4100]; // [sp+828h] [bp-1004h] BYREF

  v5 = BYTE1(a1);
  v7 = (unsigned __int8)a1;
  v8 = BYTE1(a1) + 4;
  a3[1] = -86;
  *a3 = 85;
  a3[2] = v8;
  a3[3] = a1;
  v9 = (unsigned __int8)v8 + (unsigned __int8)a1;
  v10 = HIBYTE(a1);
  if ( a2 )
  {
    if ( BYTE1(a1) )
    {
      v12 = (unsigned __int8 *)(a2 - 1);
      v13 = a3 + 3;
      do
      {
        v14 = *++v12;
        *++v13 = v14;
        v9 += *v12;
      }
      while ( (unsigned __int8 *)(a2 + (unsigned __int8)(v5 - 1)) != v12 );
      v11 = v5 + 5;
    }
    else
    {
      v11 = 5;
      v8 = 4;
    }
    a3[v8] = HIBYTE(v9);
    a3[v11] = v9;
  }
  else
  {
    a3[5] = v8 + a1;
    a3[4] = HIBYTE(v9);
  }
  v15 = a4;
  v22 = (unsigned __int8)(v5 + 6);
  v21 = 4;
  while ( 1 )
  {
    pthread_mutex_lock(&i2c_mutex_all);
    v16 = g_bitmain_pic_state[2 * v10];
    if ( pthread_mutex_lock(&stru_197C58) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v25, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_iic.c",
        164,
        "iic_write",
        9,
        103,
        100,
        v25);
    }
    else
    {
      i2c_write(v16, (int)a3, v22);
      pthread_mutex_unlock(&stru_197C58);
    }
    usleep(0x2710u);
    v17 = g_bitmain_pic_state[2 * v10];
    if ( pthread_mutex_lock(&stru_197C58) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v25, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_iic.c",
        164,
        "iic_read",
        8,
        83,
        100,
        v25);
    }
    else
    {
      i2c_read(v17, (int)v15, 2);
      pthread_mutex_unlock(&stru_197C58);
    }
    pthread_mutex_unlock(&i2c_mutex_all);
    if ( *v15 == v7 )
    {
      v18 = v15[1];
      if ( v18 == 1 )
        break;
    }
    snprintf(s, 0x800u, "PICCMD %d failed on Chain[%d]!", v7, v10);
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v25, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/drv_pic/pic_1704.c",
      158,
      "pic_process_cmd",
      15,
      103,
      20,
      v25);
    sleep(1u);
    v19 = (unsigned __int8)(v21 - 1);
    v21 = v19;
    if ( !v19 )
      return 0;
  }
  snprintf(s, 0x800u, "PICCMD %d passed on Chain[%d]!", v7, v10);
  V_LOCK();
  logfmt_raw(v25, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/drv_pic/pic_1704.c",
    158,
    "pic_process_cmd",
    15,
    98,
    20,
    v25);
  return v18;
}
