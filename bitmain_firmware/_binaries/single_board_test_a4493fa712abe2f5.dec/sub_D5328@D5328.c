int __fastcall sub_D5328(int a1, int a2, _BYTE *a3, unsigned __int8 *a4)
{
  int v6; // r5
  int v7; // r9
  int v8; // r6
  int v9; // r12
  __int16 v10; // r3
  char v11; // r2
  __int16 v12; // r3
  unsigned __int8 *v13; // r0
  _BYTE *v14; // r4
  unsigned __int8 *v15; // r1
  char v16; // t1
  int v17; // r1
  int v18; // r4
  unsigned __int8 *v19; // r7
  int v20; // r11
  int v21; // r11
  int v22; // r11
  _BYTE *v24; // [sp+14h] [bp-1810h]
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  char v26[4100]; // [sp+820h] [bp-1004h] BYREF

  v6 = BYTE1(a1);
  v7 = (unsigned __int8)a1;
  v8 = HIBYTE(a1);
  v9 = BYTE1(a1) + 4;
  *a3 = 85;
  v10 = (unsigned __int8)(BYTE1(a1) + 4);
  a3[1] = -86;
  a3[3] = a1;
  v11 = v10 + a1;
  a3[2] = v10;
  v12 = v10 + (unsigned __int8)a1;
  if ( a2 )
  {
    if ( BYTE1(a1) )
    {
      v13 = (unsigned __int8 *)(a2 - 1);
      v14 = a3 + 3;
      v15 = (unsigned __int8 *)(a2 + (unsigned __int8)(v6 - 1));
      do
      {
        v16 = *++v13;
        *++v14 = v16;
        v12 += *v13;
      }
      while ( v15 != v13 );
      v17 = v6 + 5;
    }
    else
    {
      v17 = 5;
      v9 = 4;
    }
    a3[v9] = HIBYTE(v12);
    a3[v17] = v12;
  }
  else
  {
    a3[5] = v11;
    a3[4] = HIBYTE(v12);
  }
  v24 = a3;
  LOBYTE(v18) = 4;
  v19 = a4;
  while ( 1 )
  {
    pthread_mutex_lock(&i2c_mutex_all);
    v20 = g_bitmain_pic_state[2 * v8];
    if ( pthread_mutex_lock(&stru_3B5254) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v26, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c",
        81,
        "iic_write",
        9,
        103,
        100,
        v26);
    }
    else
    {
      i2c_write(v20, (int)v24, (unsigned __int8)(v6 + 6));
      pthread_mutex_unlock(&stru_3B5254);
    }
    usleep(0x2710u);
    v21 = g_bitmain_pic_state[2 * v8];
    if ( pthread_mutex_lock(&stru_3B5254) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v26, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c",
        81,
        "iic_read",
        8,
        83,
        100,
        v26);
    }
    else
    {
      i2c_read(v21, (int)v19, 2);
      pthread_mutex_unlock(&stru_3B5254);
    }
    pthread_mutex_unlock(&i2c_mutex_all);
    if ( *v19 == v7 )
    {
      v22 = v19[1];
      if ( v22 == 1 )
        break;
    }
    snprintf(s, 0x800u, "PICCMD %d failed on Chain[%d]!", v7, v8);
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v26, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/pic_1704.c",
      75,
      "pic_process_cmd",
      15,
      103,
      20,
      v26);
    sleep(1u);
    v18 = (unsigned __int8)(v18 - 1);
    if ( !v18 )
      return 0;
  }
  snprintf(s, 0x800u, "PICCMD %d passed on Chain[%d]!", v7, v8);
  V_LOCK();
  logfmt_raw(v26, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/pic_1704.c",
    75,
    "pic_process_cmd",
    15,
    98,
    20,
    v26);
  return v22;
}
