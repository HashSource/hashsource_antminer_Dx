void __noreturn sub_DDF1C()
{
  char v0[4096]; // [sp+10h] [bp-1000h] BYREF

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v0, 0x1000u, 0, "%s, unkown error", "queue_clear");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/common/general/thread_safe_queue.c",
    72,
    "queue_clear",
    11,
    121,
    100,
    v0);
  exit(-1);
}
