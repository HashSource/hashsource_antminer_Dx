int sub_636C8()
{
  char v1[4100]; // [sp+10h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v1, 0x1000u, 0, "%s error!", "set_working_voltage");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/miner_util/power_api.c",
    143,
    "set_working_voltage",
    19,
    277,
    60,
    v1);
  return -1;
}
