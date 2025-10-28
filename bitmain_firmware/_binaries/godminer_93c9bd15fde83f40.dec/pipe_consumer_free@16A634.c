void __fastcall pipe_consumer_free(int a1)
{
  pthread_mutex_t *v1; // r6
  int v3; // r4
  int v4; // r8

  v1 = (pthread_mutex_t *)(a1 + 60);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 60));
  v3 = *(_DWORD *)(a1 + 32) - 1;
  *(_DWORD *)(a1 + 32) = v3;
  pthread_mutex_unlock(v1);
  if ( !v3 )
  {
    pthread_mutex_lock((pthread_mutex_t *)(a1 + 36));
    v4 = *(_DWORD *)(a1 + 28);
    pthread_mutex_unlock((pthread_mutex_t *)(a1 + 36));
    if ( v4 )
    {
      pthread_cond_broadcast((pthread_cond_t *)(a1 + 136));
    }
    else
    {
      pthread_mutex_destroy((pthread_mutex_t *)(a1 + 36));
      pthread_mutex_destroy(v1);
      pthread_cond_destroy((pthread_cond_t *)(a1 + 88));
      pthread_cond_destroy((pthread_cond_t *)(a1 + 136));
      free(*(void **)(a1 + 12));
      free((void *)a1);
    }
  }
}
