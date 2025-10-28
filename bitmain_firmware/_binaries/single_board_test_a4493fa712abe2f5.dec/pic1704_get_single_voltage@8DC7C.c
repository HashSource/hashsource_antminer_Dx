int __fastcall pic1704_get_single_voltage(int a1, _DWORD *a2)
{
  int v3; // r7
  int v4; // r11
  int v5; // r11
  int v7; // r1
  int v8; // r3
  unsigned int v9; // r0
  int v10; // r1
  unsigned __int8 *v11; // r3
  int v12; // r4
  __int16 v13; // r12
  __int16 v14; // r5
  __int16 v15; // r2
  bool v16; // cc
  __int16 v17; // r12
  __int16 v18; // r2
  __int16 v19; // r12
  unsigned __int8 *v20; // r5
  unsigned __int8 *v21; // r6
  __int16 v22; // t1
  unsigned __int16 v23; // r5
  int v24; // r3
  int v26; // [sp+18h] [bp-1814h] BYREF
  __int16 v27; // [sp+1Ch] [bp-1810h]
  _BYTE v28[7]; // [sp+20h] [bp-180Ch] BYREF
  char s[24]; // [sp+28h] [bp-1804h] BYREF
  _BYTE v30[2024]; // [sp+40h] [bp-17ECh] BYREF
  char v31[4100]; // [sp+828h] [bp-1004h] BYREF

  LOBYTE(v3) = 4;
  v26 = 973384277;
  *(_DWORD *)v28 = 255;
  v27 = 15872;
  *(_DWORD *)&v28[3] = 0;
  while ( 1 )
  {
    pthread_mutex_lock(&i2c_mutex_all);
    v4 = g_bitmain_pic_state[2 * a1];
    if ( pthread_mutex_lock(&stru_3B5254) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v31, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c",
        81,
        "iic_write",
        9,
        103,
        100,
        v31);
    }
    else
    {
      i2c_write(v4, (int)&v26, 6);
      pthread_mutex_unlock(&stru_3B5254);
    }
    usleep(0x2710u);
    v5 = g_bitmain_pic_state[2 * a1];
    if ( pthread_mutex_lock(&stru_3B5254) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v31, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c",
        81,
        "iic_read",
        8,
        83,
        100,
        v31);
    }
    else
    {
      i2c_read(v5, (int)v28, 7);
      pthread_mutex_unlock(&stru_3B5254);
    }
    pthread_mutex_unlock(&i2c_mutex_all);
    if ( v28[1] == 58 && v28[0] == 7 )
      break;
    snprintf(s, 0x800u, "PICCMD %d failed on Chain[%d]!", 58, a1);
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v31, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/pic_1704.c",
      75,
      "pic_process_cmd",
      15,
      116,
      20,
      v31);
    sleep(1u);
    v3 = (unsigned __int8)(v3 - 1);
    if ( !v3 )
      return 0;
  }
  snprintf(s, 0x800u, "PICCMD %d passed on Chain[%d]!", 58, a1);
  V_LOCK();
  logfmt_raw(v31, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/pic_1704.c",
    75,
    "pic_process_cmd",
    15,
    111,
    20,
    v31);
  v7 = v28[2];
  v8 = v28[0];
  if ( v28[2] != 1 || v28[0] <= 3u )
    goto LABEL_12;
  v9 = v28[0] - 2;
  v10 = 0;
  if ( (unsigned __int8)(v28[0] - 2) <= 0x20u )
  {
    v20 = v28;
    LOWORD(v12) = 0;
  }
  else
  {
    v11 = v30;
    LOWORD(v12) = 0;
    do
    {
      v13 = *(v11 - 32);
      v14 = *(v11 - 31);
      v15 = *(v11 - 30);
      v16 = (unsigned int)v28[0] - 33 > v10 + 33;
      __pld(&v30[v10 + 2]);
      v10 += 32;
      v17 = *(v11 - 5)
          + *(v11 - 6)
          + *(v11 - 7)
          + *(v11 - 9)
          + *(v11 - 10)
          + *(v11 - 11)
          + *(v11 - 13)
          + *(v11 - 14)
          + *(v11 - 15)
          + *(v11 - 17)
          + *(v11 - 18)
          + *(v11 - 19)
          + *(v11 - 21)
          + *(v11 - 22)
          + *(v11 - 23)
          + *(v11 - 25)
          + *(v11 - 26)
          + *(v11 - 27)
          + *(v11 - 29)
          + v15
          + v14
          + v13
          + *(v11 - 28)
          + *(v11 - 24)
          + *(v11 - 20)
          + *(v11 - 16)
          + *(v11 - 12)
          + *(v11 - 8);
      v18 = *(v11 - 1);
      v19 = *(v11 - 2) + *(v11 - 4) + v17 + *(v11 - 3);
      v20 = v11;
      v11 += 32;
      LOWORD(v12) = v18 + v19 + v12;
    }
    while ( v16 );
  }
  v21 = v20;
  do
  {
    v22 = *v21++;
    v12 = (unsigned __int16)(v22 + v12);
  }
  while ( v9 > &v21[v10] - v20 );
  v23 = __rev16(*(unsigned __int16 *)&v28[v9]);
  snprintf(s, 0x800u, "sum1,sum2 = %d,%d", v12, v23);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v31, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/pic_1704.c",
    75,
    "check_pic_crc",
    13,
    397,
    20,
    v31);
  if ( v23 != v12 )
  {
    v8 = v28[0];
    v7 = v28[2];
LABEL_12:
    snprintf(s, 0x800u, "ret_buff error: buff0 = %d, buff1 = %d, buff2 = %d.", v8, v28[1], v7);
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v31, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/pic_1704.c",
      75,
      "pic1704_get_single_voltage",
      26,
      480,
      20,
      v31);
    return 1;
  }
  v24 = (unsigned __int16)__rev16(*(unsigned __int16 *)&v28[3]);
  *a2 = (unsigned __int16)v24;
  snprintf(s, 0x800u, "Received one voltage response: vol = %d.", v24);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v31, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/pic_1704.c",
    75,
    "pic1704_get_single_voltage",
    26,
    484,
    20,
    v31);
  return 1;
}
