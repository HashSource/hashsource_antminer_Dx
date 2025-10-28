int sub_73F9C()
{
  char v1[4100]; // [sp+10h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v1, 0x1000u, 0, "platform init failed!\n");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/platform_device_hal.c",
    157,
    "dev_init_hal_pcba",
    17,
    102,
    100,
    v1);
  return -1;
}
