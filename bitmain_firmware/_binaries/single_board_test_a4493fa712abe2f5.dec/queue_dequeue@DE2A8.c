void __fastcall queue_dequeue(int a1, char *a2, unsigned int a3)
{
  pthread_mutex_t *mutex; // [sp+14h] [bp-1128h]
  struct __jmp_buf_tag env; // [sp+20h] [bp-111Ch] BYREF
  char v8[4100]; // [sp+138h] [bp-1004h] BYREF

  mutex = (pthread_mutex_t *)(a1 + 16);
  if ( _sigsetjmp(&env, 0) )
  {
    pthread_mutex_unlock(mutex);
    _pthread_unwind_next((__pthread_unwind_buf_t *)&env);
    log_reload();
  }
  else
  {
    _pthread_register_cancel((__pthread_unwind_buf_t *)&env);
    pthread_mutex_lock(mutex);
    while ( *(_DWORD *)(a1 + 12) < a3 )
    {
      if ( *(_BYTE *)(a1 + 92) )
      {
        *(_BYTE *)(a1 + 92) = 0;
        goto LABEL_9;
      }
      pthread_cond_wait((pthread_cond_t *)(a1 + 40), mutex);
    }
    if ( a3 != pipe_pop(*(int **)(a1 + 8), a2, a3) )
    {
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v8, 0x1000u, 0, "%s, unkown error", "queue_dequeue");
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/common/general/thread_safe_queue.c",
        72,
        "queue_dequeue",
        13,
        81,
        100,
        v8);
      exit(-1);
    }
    *(_DWORD *)(a1 + 12) -= a3;
LABEL_9:
    pthread_mutex_unlock(mutex);
    _pthread_unregister_cancel((__pthread_unwind_buf_t *)&env);
  }
}
