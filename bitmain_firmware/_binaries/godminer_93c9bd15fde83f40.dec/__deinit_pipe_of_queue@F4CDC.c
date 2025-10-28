void __fastcall _deinit_pipe_of_queue(_DWORD *a1)
{
  int v2; // r4
  pthread_mutex_t *v3; // r9
  pthread_mutex_t *v4; // r8
  int v5; // r6
  int v6; // r5
  int v7; // r5
  int v8; // r4
  int v9; // r5
  int v10; // r4
  int v11; // r8
  int v12; // r9

  v2 = *a1;
  v3 = (pthread_mutex_t *)(*a1 + 36);
  v4 = (pthread_mutex_t *)(*a1 + 60);
  pthread_mutex_lock(v3);
  v5 = *(_DWORD *)(v2 + 28) - 1;
  *(_DWORD *)(v2 + 28) = v5;
  pthread_mutex_unlock(v3);
  pthread_mutex_lock(v4);
  v6 = *(_DWORD *)(v2 + 32) - 1;
  *(_DWORD *)(v2 + 32) = v6;
  pthread_mutex_unlock(v4);
  if ( v6 )
  {
    if ( !v5 )
      pthread_cond_broadcast((pthread_cond_t *)(v2 + 88));
  }
  else
  {
    free(*(void **)(v2 + 12));
    *(_DWORD *)(v2 + 12) = 0;
    if ( v5 )
    {
      pthread_cond_broadcast((pthread_cond_t *)(v2 + 136));
    }
    else
    {
      pthread_mutex_destroy(v3);
      pthread_mutex_destroy(v4);
      pthread_cond_destroy((pthread_cond_t *)(v2 + 88));
      pthread_cond_destroy((pthread_cond_t *)(v2 + 136));
      free(*(void **)(v2 + 12));
      free((void *)v2);
    }
  }
  v7 = a1[2];
  pthread_mutex_lock((pthread_mutex_t *)(v7 + 60));
  v8 = *(_DWORD *)(v7 + 32) - 1;
  *(_DWORD *)(v7 + 32) = v8;
  pthread_mutex_unlock((pthread_mutex_t *)(v7 + 60));
  if ( !v8 )
  {
    pthread_mutex_lock((pthread_mutex_t *)(v7 + 36));
    v12 = *(_DWORD *)(v7 + 28);
    pthread_mutex_unlock((pthread_mutex_t *)(v7 + 36));
    if ( v12 )
    {
      pthread_cond_broadcast((pthread_cond_t *)(v7 + 136));
    }
    else
    {
      pthread_mutex_destroy((pthread_mutex_t *)(v7 + 36));
      pthread_mutex_destroy((pthread_mutex_t *)(v7 + 60));
      pthread_cond_destroy((pthread_cond_t *)(v7 + 88));
      pthread_cond_destroy((pthread_cond_t *)(v7 + 136));
      free(*(void **)(v7 + 12));
      free((void *)v7);
    }
  }
  v9 = a1[1];
  pthread_mutex_lock((pthread_mutex_t *)(v9 + 36));
  v10 = *(_DWORD *)(v9 + 28) - 1;
  *(_DWORD *)(v9 + 28) = v10;
  pthread_mutex_unlock((pthread_mutex_t *)(v9 + 36));
  if ( !v10 )
  {
    pthread_mutex_lock((pthread_mutex_t *)(v9 + 60));
    v11 = *(_DWORD *)(v9 + 32);
    pthread_mutex_unlock((pthread_mutex_t *)(v9 + 60));
    if ( v11 )
    {
      pthread_cond_broadcast((pthread_cond_t *)(v9 + 88));
    }
    else
    {
      pthread_mutex_destroy((pthread_mutex_t *)(v9 + 36));
      pthread_mutex_destroy((pthread_mutex_t *)(v9 + 60));
      pthread_cond_destroy((pthread_cond_t *)(v9 + 88));
      pthread_cond_destroy((pthread_cond_t *)(v9 + 136));
      free(*(void **)(v9 + 12));
      free((void *)v9);
    }
  }
}
