int __fastcall sub_8A29C(int a1, int a2, _BYTE *a3, unsigned __int8 *a4)
{
  int v5; // r12
  int v7; // lr
  __int16 v8; // r3
  char v9; // r2
  __int16 v10; // r3
  int v11; // r1
  unsigned __int8 *v12; // r2
  _BYTE *v13; // r1
  unsigned __int8 *v14; // r0
  char v15; // t1
  int v16; // r10
  int v17; // r10
  int v18; // r0
  int v19; // r12
  int v20; // r3
  int v22; // r0
  int v23; // r10
  int v24; // r12
  char v25; // [sp+10h] [bp-1824h]
  int v27; // [sp+20h] [bp-1814h]
  char s[2048]; // [sp+30h] [bp-1804h] BYREF
  char v30[4100]; // [sp+830h] [bp-1004h] BYREF

  v5 = BYTE1(a1);
  v7 = BYTE1(a1) + 4;
  *a3 = 85;
  v8 = (unsigned __int8)(v5 + 4);
  a3[1] = -86;
  v9 = v8 + a1;
  a3[2] = v8;
  v10 = v8 + (unsigned __int8)a1;
  a3[3] = a1;
  if ( a2 )
  {
    if ( v5 )
    {
      v12 = (unsigned __int8 *)(a2 - 1);
      v13 = a3 + 3;
      v14 = (unsigned __int8 *)(a2 + (unsigned __int8)(v5 - 1));
      do
      {
        v15 = *++v12;
        *++v13 = v15;
        v10 += *v12;
      }
      while ( v14 != v12 );
      v11 = v5 + 5;
    }
    else
    {
      v11 = 5;
      v7 = 4;
    }
    a3[v7] = HIBYTE(v10);
    a3[v11] = v10;
  }
  else
  {
    a3[5] = v9;
    a3[4] = HIBYTE(v10);
  }
  v27 = (unsigned __int8)(v5 + 6);
  v25 = 4;
  while ( 1 )
  {
    pthread_mutex_lock(&i2c_mutex_all);
    v16 = g_bitmain_pic_state[2 * HIBYTE(a1)];
    if ( pthread_mutex_lock(&stru_197C58) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v30, 0x1000u, 0, s);
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
        v30);
    }
    else
    {
      i2c_write(v16, (int)a3, v27);
      pthread_mutex_unlock(&stru_197C58);
    }
    usleep(0x2710u);
    v17 = g_bitmain_pic_state[2 * HIBYTE(a1)];
    if ( pthread_mutex_lock(&stru_197C58) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v30, 0x1000u, 0, s);
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
        v30);
    }
    else
    {
      i2c_read(v17, (int)a4, BYTE2(a1));
      pthread_mutex_unlock(&stru_197C58);
    }
    pthread_mutex_unlock(&i2c_mutex_all);
    if ( BYTE2(a1) == 2 )
      break;
    if ( BYTE2(a1) > 2u )
    {
      if ( __PAIR64__(a4[1], *a4) == __PAIR64__((unsigned __int8)a1, BYTE2(a1)) )
      {
        snprintf(s, 0x800u, "PICCMD %d passed on Chain[%d]!", (unsigned __int8)a1, HIBYTE(a1));
        V_LOCK();
        logfmt_raw(v30, 0x1000u, 0, s);
        V_UNLOCK();
        v22 = g_zc;
        v23 = 1;
        v24 = 111;
        goto LABEL_29;
      }
      snprintf(s, 0x800u, "PICCMD %d failed on Chain[%d]!", (unsigned __int8)a1, HIBYTE(a1));
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v30, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_197BB8);
      v18 = g_zc;
      v19 = 116;
      goto LABEL_19;
    }
    snprintf(s, 0x800u, "ret_len = %d should never happen!!", BYTE2(a1));
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v30, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/drv_pic/pic_1704.c",
      158,
      "pic_process_cmd",
      15,
      121,
      20,
      v30);
LABEL_20:
    v20 = (unsigned __int8)(v25 - 1);
    v25 = v20;
    if ( !v20 )
      return 0;
  }
  if ( *a4 != (unsigned __int8)a1 || (v23 = a4[1], v23 != 1) )
  {
    snprintf(s, 0x800u, "PICCMD %d failed on Chain[%d]!", (unsigned __int8)a1, HIBYTE(a1));
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v30, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_197BB8);
    v18 = g_zc;
    v19 = 103;
LABEL_19:
    zlog(
      v18,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/drv_pic/pic_1704.c",
      158,
      "pic_process_cmd",
      15,
      v19,
      20,
      v30);
    sleep(1u);
    goto LABEL_20;
  }
  snprintf(s, 0x800u, "PICCMD %d passed on Chain[%d]!", (unsigned __int8)a1, HIBYTE(a1));
  V_LOCK();
  logfmt_raw(v30, 0x1000u, 0, s);
  V_UNLOCK();
  v22 = g_zc;
  v24 = 98;
LABEL_29:
  zlog(
    v22,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/drv_pic/pic_1704.c",
    158,
    "pic_process_cmd",
    15,
    v24,
    20,
    v30);
  return v23;
}
