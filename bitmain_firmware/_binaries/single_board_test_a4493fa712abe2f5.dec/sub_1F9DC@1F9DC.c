void __noreturn sub_1F9DC()
{
  char v0[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v0, 0x1000u, 0, "%s, unkown error", "queue_try_dequeue");
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/common/general/thread_safe_queue.c",
    72,
    "queue_try_dequeue",
    17,
    140,
    100,
    v0);
  exit(-1);
}
