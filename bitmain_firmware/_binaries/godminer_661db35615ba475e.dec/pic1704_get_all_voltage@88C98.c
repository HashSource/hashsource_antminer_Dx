int __fastcall pic1704_get_all_voltage(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int v5; // r7
  int v6; // r11
  int v7; // r11
  unsigned int v9; // r12
  unsigned __int16 v10; // r3
  int v14; // [sp+20h] [bp-1814h] BYREF
  _BYTE v15[11]; // [sp+24h] [bp-1810h] BYREF
  char s[2048]; // [sp+30h] [bp-1804h] BYREF
  char v17[4100]; // [sp+830h] [bp-1004h] BYREF

  *(_DWORD *)&v15[4] = 0;
  *(_DWORD *)&v15[7] = 0;
  LOBYTE(v5) = 4;
  v14 = 923052629;
  *(_DWORD *)v15 = 15104;
  while ( 1 )
  {
    pthread_mutex_lock(&i2c_mutex_all);
    v6 = g_bitmain_pic_state[2 * a1];
    if ( pthread_mutex_lock(&stru_197C58) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v17, 0x1000u, 0, s);
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
        v17);
    }
    else
    {
      i2c_write(v6, (int)&v14, 6);
      pthread_mutex_unlock(&stru_197C58);
    }
    usleep(0x2710u);
    v7 = g_bitmain_pic_state[2 * a1];
    if ( pthread_mutex_lock(&stru_197C58) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v17, 0x1000u, 0, s);
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
        v17);
    }
    else
    {
      i2c_read(v7, (int)v15, 11);
      pthread_mutex_unlock(&stru_197C58);
    }
    pthread_mutex_unlock(&i2c_mutex_all);
    if ( v15[1] == 55 && v15[0] == 11 )
      break;
    snprintf(s, 0x800u, "PICCMD %d failed on Chain[%d]!", 55, a1);
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v17, 0x1000u, 0, s);
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
      v17);
    sleep(1u);
    v5 = (unsigned __int8)(v5 - 1);
    if ( !v5 )
      return 0;
  }
  snprintf(s, 0x800u, "PICCMD %d passed on Chain[%d]!", 55, a1);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v17, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/drv_pic/pic_1704.c",
    158,
    "pic_process_cmd",
    15,
    111,
    20,
    v17);
  v9 = *(unsigned __int16 *)&v15[7];
  v10 = __rev16(*(unsigned __int16 *)&v15[5]);
  *a2 = (unsigned __int16)__rev16(*(unsigned __int16 *)&v15[3]);
  LOWORD(v9) = __rev16(v9);
  *a3 = v10;
  *a4 = (unsigned __int16)v9;
  snprintf(s, 0x800u, "Received all voltage response: vol0 = %d, vol1 = %d, vol2 = %d.", *a2, *a3, (unsigned __int16)v9);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v17, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/drv_pic/pic_1704.c",
    158,
    "pic1704_get_all_voltage",
    23,
    511,
    20,
    v17);
  return 1;
}
