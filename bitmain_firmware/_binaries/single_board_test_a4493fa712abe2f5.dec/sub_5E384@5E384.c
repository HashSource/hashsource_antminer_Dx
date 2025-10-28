int sub_5E384()
{
  char v1[4100]; // [sp+10h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v1, 0x1000u, 0, "platform init failed!\n");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/device/platform_device_hal.c",
    74,
    "dev_init_hal_pcba",
    17,
    102,
    100,
    v1);
  return -1;
}
