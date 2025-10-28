int __fastcall sub_135570(int a1, int a2, int a3, _BYTE *a4)
{
  int v5; // r5
  int v6; // r11
  int v7; // r11
  int v8; // r3
  char v10; // [sp+10h] [bp-1814h]
  char v12[2048]; // [sp+20h] [bp-1804h] BYREF
  char v13[4100]; // [sp+820h] [bp-1004h] BYREF

  v5 = HIBYTE(a1);
  *(_DWORD *)a3 = 671394389;
  *(_BYTE *)(a3 + 4) = 0;
  v10 = 4;
  *(_BYTE *)(a3 + 5) = 44;
  while ( 1 )
  {
    pthread_mutex_lock(&i2c_mutex_all);
    v6 = g_bitmain_pic_state[2 * v5];
    if ( pthread_mutex_lock(&stru_197C58) )
    {
      strcpy(v12, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v13, 0x1000u, 0, v12);
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
        v13);
    }
    else
    {
      i2c_write(v6, a3, 6);
      pthread_mutex_unlock(&stru_197C58);
    }
    usleep(0x2710u);
    v7 = g_bitmain_pic_state[2 * v5];
    if ( pthread_mutex_lock(&stru_197C58) )
    {
      strcpy(v12, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v13, 0x1000u, 0, v12);
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
        v13);
    }
    else
    {
      i2c_read(v7, (int)a4, 13);
      pthread_mutex_unlock(&stru_197C58);
    }
    pthread_mutex_unlock(&i2c_mutex_all);
    if ( a4[1] == 40 && *a4 == 13 )
      break;
    snprintf(v12, 0x800u, "PICCMD %d failed on Chain[%d]!", 40, v5);
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v13, 0x1000u, 0, v12);
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
      v13);
    sleep(1u);
    v8 = (unsigned __int8)(v10 - 1);
    v10 = v8;
    if ( !v8 )
      return 0;
  }
  snprintf(v12, 0x800u, "PICCMD %d passed on Chain[%d]!", 40, v5);
  V_LOCK();
  logfmt_raw(v13, 0x1000u, 0, v12);
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
    v13);
  return 1;
}
