int sub_807DC()
{
  char v1[4096]; // [sp+10h] [bp-1000h] BYREF

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v1, 0x1000u, 0, "%s error!", "set_working_voltage");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/miner_util/power_api.c",
    143,
    "set_working_voltage",
    19,
    296,
    60,
    v1);
  return -1;
}
