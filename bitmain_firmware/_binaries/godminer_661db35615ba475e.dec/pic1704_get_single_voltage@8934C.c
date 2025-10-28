int __fastcall pic1704_get_single_voltage(int a1, _DWORD *a2)
{
  int v3; // r7
  int v4; // r11
  int v5; // r11
  int v7; // r1
  int v8; // r3
  unsigned int v9; // r12
  int v10; // r1
  unsigned __int8 *v11; // r3
  int v12; // r4
  bool v13; // cc
  __int16 v14; // r7
  __int16 v15; // r0
  __int16 v16; // r2
  __int16 v17; // r5
  __int16 v18; // r0
  __int16 v19; // r2
  __int16 v20; // r7
  unsigned __int8 *v21; // r0
  __int16 v22; // r5
  unsigned __int8 *v23; // lr
  __int16 v24; // t1
  unsigned __int16 v25; // r6
  int v26; // r3
  int v28; // [sp+18h] [bp-1814h] BYREF
  __int16 v29; // [sp+1Ch] [bp-1810h]
  _BYTE v30[7]; // [sp+20h] [bp-180Ch] BYREF
  char s[24]; // [sp+28h] [bp-1804h] BYREF
  _BYTE v32[2016]; // [sp+40h] [bp-17ECh] BYREF
  char v33[4100]; // [sp+828h] [bp-1004h] BYREF

  v28 = 973384277;
  LOBYTE(v3) = 4;
  *(_DWORD *)v30 = 255;
  v29 = 15872;
  *(_DWORD *)&v30[3] = 0;
  while ( 1 )
  {
    pthread_mutex_lock(&i2c_mutex_all);
    v4 = g_bitmain_pic_state[2 * a1];
    if ( pthread_mutex_lock(&stru_197C58) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v33, 0x1000u, 0, s);
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
        v33);
    }
    else
    {
      i2c_write(v4, (int)&v28, 6);
      pthread_mutex_unlock(&stru_197C58);
    }
    usleep(0x2710u);
    v5 = g_bitmain_pic_state[2 * a1];
    if ( pthread_mutex_lock(&stru_197C58) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v33, 0x1000u, 0, s);
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
        v33);
    }
    else
    {
      i2c_read(v5, (int)v30, 7);
      pthread_mutex_unlock(&stru_197C58);
    }
    pthread_mutex_unlock(&i2c_mutex_all);
    if ( v30[1] == 58 && v30[0] == 7 )
      break;
    snprintf(s, 0x800u, "PICCMD %d failed on Chain[%d]!", 58, a1);
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v33, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/drv_pic/pic_1704.c",
      158,
      "pic_process_cmd",
      15,
      116,
      20,
      v33);
    sleep(1u);
    v3 = (unsigned __int8)(v3 - 1);
    if ( !v3 )
      return 0;
  }
  snprintf(s, 0x800u, "PICCMD %d passed on Chain[%d]!", 58, a1);
  V_LOCK();
  logfmt_raw(v33, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/drv_pic/pic_1704.c",
    158,
    "pic_process_cmd",
    15,
    111,
    20,
    v33);
  v7 = v30[2];
  v8 = v30[0];
  if ( v30[2] != 1 || v30[0] <= 3u )
    goto LABEL_12;
  v9 = v30[0] - 2;
  v10 = 0;
  if ( (unsigned __int8)(v30[0] - 2) <= 0x20u )
  {
    LOWORD(v12) = 0;
    v21 = v30;
  }
  else
  {
    v11 = v32;
    LOWORD(v12) = 0;
    do
    {
      v13 = (unsigned int)v30[0] - 33 > v10 + 33;
      v14 = *(v11 - 27);
      v15 = *(v11 - 28);
      v16 = *(v11 - 29) + *(v11 - 30) + *(v11 - 31) + *(v11 - 32);
      v17 = *(v11 - 26);
      __pld(&v32[v10 + 2]);
      v10 += 32;
      v18 = *(v11 - 4)
          + *(v11 - 5)
          + *(v11 - 6)
          + *(v11 - 7)
          + *(v11 - 8)
          + *(v11 - 9)
          + *(v11 - 10)
          + *(v11 - 11)
          + *(v11 - 12)
          + *(v11 - 13)
          + *(v11 - 14)
          + *(v11 - 15)
          + *(v11 - 16)
          + *(v11 - 17)
          + *(v11 - 18)
          + *(v11 - 19)
          + *(v11 - 20)
          + *(v11 - 21)
          + *(v11 - 22)
          + *(v11 - 23)
          + *(v11 - 24)
          + *(v11 - 25)
          + v17
          + v14
          + v15
          + v16;
      v19 = *(v11 - 1);
      v20 = *(v11 - 3) + v18;
      v21 = v11;
      v22 = *(v11 - 2) + v20;
      v11 += 32;
      LOWORD(v12) = v12 + v19 + v22;
    }
    while ( v13 );
  }
  v23 = v21;
  do
  {
    v24 = *v23++;
    v12 = (unsigned __int16)(v12 + v24);
  }
  while ( v9 > &v23[v10] - v21 );
  v25 = __rev16(*(unsigned __int16 *)&v30[v9]);
  snprintf(s, 0x800u, "sum1,sum2 = %d,%d", v12, v25);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v33, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/drv_pic/pic_1704.c",
    158,
    "check_pic_crc",
    13,
    397,
    20,
    v33);
  if ( v25 != v12 )
  {
    v8 = v30[0];
    v7 = v30[2];
LABEL_12:
    snprintf(s, 0x800u, "ret_buff error: buff0 = %d, buff1 = %d, buff2 = %d.", v8, v30[1], v7);
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v33, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/drv_pic/pic_1704.c",
      158,
      "pic1704_get_single_voltage",
      26,
      480,
      20,
      v33);
    return 1;
  }
  v26 = (unsigned __int16)__rev16(*(unsigned __int16 *)&v30[3]);
  *a2 = (unsigned __int16)v26;
  snprintf(s, 0x800u, "Received one voltage response: vol = %d.", v26);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v33, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/drv_pic/pic_1704.c",
    158,
    "pic1704_get_single_voltage",
    26,
    484,
    20,
    v33);
  return 1;
}
