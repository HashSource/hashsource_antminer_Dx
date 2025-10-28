int __fastcall pic1704_get_single_voltage(int a1, _DWORD *a2)
{
  int v3; // r7
  int v4; // r11
  int v5; // r11
  int v6; // r3
  int v8; // r3
  int v9; // r1
  int v10; // r3
  unsigned int v11; // r12
  int v12; // r1
  unsigned __int8 *v13; // r3
  int v14; // r4
  bool v15; // cc
  __int16 v16; // r7
  __int16 v17; // r0
  __int16 v18; // r2
  __int16 v19; // r5
  __int16 v20; // r0
  __int16 v21; // r2
  __int16 v22; // r7
  unsigned __int8 *v23; // r0
  __int16 v24; // r5
  unsigned __int8 *v25; // lr
  __int16 v26; // t1
  unsigned __int16 v27; // r6
  int v28; // r3
  int v29; // r3
  int v31; // [sp+18h] [bp-1814h] BYREF
  __int16 v32; // [sp+1Ch] [bp-1810h]
  _BYTE v33[7]; // [sp+20h] [bp-180Ch] BYREF
  _DWORD s[6]; // [sp+28h] [bp-1804h] BYREF
  _BYTE v35[2016]; // [sp+40h] [bp-17ECh] BYREF
  char v36[4100]; // [sp+828h] [bp-1004h] BYREF

  v31 = 973384277;
  LOBYTE(v3) = 4;
  *(_DWORD *)v33 = 255;
  v32 = 15872;
  *(_DWORD *)&v33[3] = 0;
  while ( 1 )
  {
    pthread_mutex_lock(&i2c_mutex_all);
    v4 = g_bitmain_pic_state[2 * a1];
    if ( pthread_mutex_lock(&stru_1A8A58) )
    {
      strcpy((char *)s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v36, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_1A8A24);
      LOWORD(v29) = -15496;
      HIWORD(v29) = (unsigned int)"enkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c" >> 16;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_iic.c",
        164,
        v29,
        9,
        103,
        100,
        v36);
    }
    else
    {
      i2c_write(v4, (int)&v31, 6);
      pthread_mutex_unlock(&stru_1A8A58);
    }
    usleep(0x2710u);
    v5 = g_bitmain_pic_state[2 * a1];
    if ( pthread_mutex_lock(&stru_1A8A58) )
    {
      strcpy((char *)s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v36, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_1A8A24);
      LOWORD(v28) = -15484;
      HIWORD(v28) = (unsigned int)"ns/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c" >> 16;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_iic.c",
        164,
        v28,
        8,
        83,
        100,
        v36);
    }
    else
    {
      i2c_read(v5, (int)v33, 7);
      pthread_mutex_unlock(&stru_1A8A58);
    }
    pthread_mutex_unlock(&i2c_mutex_all);
    if ( v33[1] == 58 && v33[0] == 7 )
      break;
    snprintf((char *)s, 0x800u, "PICCMD %d failed on Chain[%d]!", 58, a1);
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v36, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_1A8A24);
    LOWORD(v6) = -15472;
    HIWORD(v6) = (unsigned int)"/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c" >> 16;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/drv_pic/pic_1704.c",
      158,
      v6,
      15,
      116,
      20,
      v36);
    sleep(1u);
    v3 = (unsigned __int8)(v3 - 1);
    if ( !v3 )
      return 0;
  }
  snprintf((char *)s, 0x800u, "PICCMD %d passed on Chain[%d]!");
  V_LOCK();
  logfmt_raw(v36, 0x1000u, 0, s);
  V_UNLOCK();
  LOWORD(v8) = -15472;
  HIWORD(v8) = (unsigned int)"/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c" >> 16;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/drv_pic/pic_1704.c",
    158,
    v8,
    15,
    111,
    20,
    v36);
  v9 = v33[2];
  v10 = v33[0];
  if ( v33[2] != 1 || v33[0] <= 3u )
    goto LABEL_12;
  v11 = v33[0] - 2;
  v12 = 0;
  if ( (unsigned __int8)(v33[0] - 2) <= 0x20u )
  {
    LOWORD(v14) = 0;
    v23 = v33;
  }
  else
  {
    v13 = v35;
    LOWORD(v14) = 0;
    do
    {
      v15 = (unsigned int)v33[0] - 33 > v12 + 33;
      v16 = *(v13 - 27);
      v17 = *(v13 - 28);
      v18 = *(v13 - 29) + *(v13 - 30) + *(v13 - 31) + *(v13 - 32);
      v19 = *(v13 - 26);
      __pld(&v35[v12 + 2]);
      v12 += 32;
      v20 = *(v13 - 4)
          + *(v13 - 5)
          + *(v13 - 6)
          + *(v13 - 7)
          + *(v13 - 8)
          + *(v13 - 9)
          + *(v13 - 10)
          + *(v13 - 11)
          + *(v13 - 12)
          + *(v13 - 13)
          + *(v13 - 14)
          + *(v13 - 15)
          + *(v13 - 16)
          + *(v13 - 17)
          + *(v13 - 18)
          + *(v13 - 19)
          + *(v13 - 20)
          + *(v13 - 21)
          + *(v13 - 22)
          + *(v13 - 23)
          + *(v13 - 24)
          + *(v13 - 25)
          + v19
          + v16
          + v17
          + v18;
      v21 = *(v13 - 1);
      v22 = *(v13 - 3) + v20;
      v23 = v13;
      v24 = *(v13 - 2) + v22;
      v13 += 32;
      LOWORD(v14) = v14 + v21 + v24;
    }
    while ( v15 );
  }
  v25 = v23;
  do
  {
    v26 = *v25++;
    v14 = (unsigned __int16)(v14 + v26);
  }
  while ( v11 > &v25[v12] - v23 );
  v27 = __rev16(*(unsigned __int16 *)&v33[v11]);
  snprintf((char *)s, 0x800u, "sum1,sum2 = %d,%d", v14, v27);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v36, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/drv_pic/pic_1704.c",
    158,
    "check_pic_crc",
    13,
    397,
    20,
    v36);
  if ( v27 != v14 )
  {
    v10 = v33[0];
    v9 = v33[2];
LABEL_12:
    snprintf((char *)s, 0x800u, "ret_buff error: buff0 = %d, buff1 = %d, buff2 = %d.", v10, v33[1], v9);
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v36, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/drv_pic/pic_1704.c",
      158,
      "pic1704_get_single_voltage",
      26,
      480,
      20,
      v36);
    return 1;
  }
  *a2 = (unsigned __int16)__rev16(*(unsigned __int16 *)&v33[3]);
  snprintf((char *)s, 0x800u, "Received one voltage response: vol = %d.");
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v36, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/drv_pic/pic_1704.c",
    158,
    "pic1704_get_single_voltage",
    26,
    484,
    20,
    v36);
  return 1;
}
