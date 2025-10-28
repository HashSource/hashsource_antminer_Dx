void __noreturn sub_D1358()
{
  char v0[4100]; // [sp+10h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v0, 0x1000u, 0, "%s, unkown error", "queue_clear");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/common/general/thread_safe_queue.c",
    155,
    "queue_clear",
    11,
    121,
    100,
    v0);
  exit(-1);
}
