int __fastcall sub_D3038(int a1, char *a2, int *a3)
{
  pthread_mutex_t *v3; // r6
  int v7; // r12
  int v8; // r0
  int v9; // r4
  struct timespec tp; // [sp+10h] [bp-1008h] BYREF
  char v12[4096]; // [sp+18h] [bp-1000h] BYREF

  v3 = (pthread_mutex_t *)(a1 + 16);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 16));
  clock_gettime(1, &tp);
  v7 = *a3;
  v8 = a3[1] + tp.tv_nsec;
  v9 = 0;
  tp.tv_sec += v8 / 1000000000 + v7;
  tp.tv_nsec = v8 % 1000000000;
  while ( *(_DWORD *)(a1 + 12) <= 8u )
  {
    v9 = pthread_cond_timedwait((pthread_cond_t *)(a1 + 40), v3, &tp);
    if ( v9 == 110 )
      goto LABEL_6;
  }
  if ( pipe_pop(*(int **)(a1 + 8), a2, 9) != 9 )
  {
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "%s, unkown error", "queue_dequeue_for");
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/common/general/thread_safe_queue.c",
      72,
      "queue_dequeue_for",
      17,
      106,
      100,
      v12);
    exit(-1);
  }
  *(_DWORD *)(a1 + 12) -= 9;
LABEL_6:
  pthread_mutex_unlock(v3);
  return v9;
}
