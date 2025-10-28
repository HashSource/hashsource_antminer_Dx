int sub_24314()
{
  char v1[4100]; // [sp+10h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v1, 0x1000u, 0, "Unable to set thread to low priority");
  pthread_mutex_unlock(&stru_1A8A24);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/god-miner.c",
           132,
           "set_lowprio",
           11,
           136,
           20,
           v1);
}
