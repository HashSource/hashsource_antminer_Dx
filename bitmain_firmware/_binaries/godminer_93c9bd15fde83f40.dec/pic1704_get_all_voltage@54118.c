int __fastcall pic1704_get_all_voltage(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int v5; // r7
  int v6; // r11
  int v7; // r11
  int v8; // r3
  int v10; // r3
  unsigned int v11; // r12
  unsigned __int16 v12; // r3
  int v13; // r3
  int v14; // r3
  int v18; // [sp+20h] [bp-1814h] BYREF
  _BYTE v19[11]; // [sp+24h] [bp-1810h] BYREF
  _DWORD s[512]; // [sp+30h] [bp-1804h] BYREF
  char v21[4100]; // [sp+830h] [bp-1004h] BYREF

  *(_DWORD *)&v19[4] = 0;
  *(_DWORD *)&v19[7] = 0;
  LOBYTE(v5) = 4;
  v18 = 923052629;
  *(_DWORD *)v19 = 15104;
  while ( 1 )
  {
    pthread_mutex_lock(&i2c_mutex_all);
    v6 = g_bitmain_pic_state[2 * a1];
    if ( pthread_mutex_lock(&stru_1A8A58) )
    {
      strcpy((char *)s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v21, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_1A8A24);
      LOWORD(v13) = -15496;
      HIWORD(v13) = (unsigned int)"enkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c" >> 16;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_iic.c",
        164,
        v13,
        9,
        103,
        100,
        v21);
    }
    else
    {
      i2c_write(v6, (int)&v18, 6);
      pthread_mutex_unlock(&stru_1A8A58);
    }
    usleep(0x2710u);
    v7 = g_bitmain_pic_state[2 * a1];
    if ( pthread_mutex_lock(&stru_1A8A58) )
    {
      strcpy((char *)s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v21, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_1A8A24);
      LOWORD(v14) = -15484;
      HIWORD(v14) = (unsigned int)"ns/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c" >> 16;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_iic.c",
        164,
        v14,
        8,
        83,
        100,
        v21);
    }
    else
    {
      i2c_read(v7, (int)v19, 11);
      pthread_mutex_unlock(&stru_1A8A58);
    }
    pthread_mutex_unlock(&i2c_mutex_all);
    if ( v19[1] == 55 && v19[0] == 11 )
      break;
    snprintf((char *)s, 0x800u, "PICCMD %d failed on Chain[%d]!", 55, a1);
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v21, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_1A8A24);
    LOWORD(v8) = -15472;
    HIWORD(v8) = (unsigned int)"/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c" >> 16;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/drv_pic/pic_1704.c",
      158,
      v8,
      15,
      116,
      20,
      v21);
    sleep(1u);
    v5 = (unsigned __int8)(v5 - 1);
    if ( !v5 )
      return 0;
  }
  snprintf((char *)s, 0x800u, "PICCMD %d passed on Chain[%d]!");
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v21, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  LOWORD(v10) = -15472;
  HIWORD(v10) = (unsigned int)"/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c" >> 16;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/drv_pic/pic_1704.c",
    158,
    v10,
    15,
    111,
    20,
    v21);
  v11 = *(unsigned __int16 *)&v19[7];
  v12 = __rev16(*(unsigned __int16 *)&v19[5]);
  *a2 = (unsigned __int16)__rev16(*(unsigned __int16 *)&v19[3]);
  LOWORD(v11) = __rev16(v11);
  *a3 = v12;
  *a4 = (unsigned __int16)v11;
  snprintf(
    (char *)s,
    0x800u,
    "Received all voltage response: vol0 = %d, vol1 = %d, vol2 = %d.",
    *a2,
    *a3,
    (unsigned __int16)v11);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v21, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/drv_pic/pic_1704.c",
    158,
    "pic1704_get_all_voltage",
    23,
    511,
    20,
    v21);
  return 1;
}
