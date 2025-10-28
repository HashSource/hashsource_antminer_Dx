void __noreturn sub_1FD10()
{
  char v0[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v0, 0x1000u, 0, "%s, unkown error", "queue_try_dequeue");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/common/general/thread_safe_queue.c",
    155,
    "queue_try_dequeue",
    17,
    140,
    100,
    v0);
  exit(-1);
}
