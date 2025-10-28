int sub_3836C()
{
  char v1[4096]; // [sp+10h] [bp-1000h] BYREF

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v1, 0x1000u, 0, "%s error!", "set_check_asic_voltage");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/miner_util/power_api.c",
    60,
    "set_check_asic_voltage",
    22,
    295,
    60,
    v1);
  return -1;
}
