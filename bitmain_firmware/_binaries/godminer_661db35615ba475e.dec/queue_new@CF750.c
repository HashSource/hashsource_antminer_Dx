char *__fastcall queue_new(int a1, int a2)
{
  char *v4; // r4
  _DWORD *v5; // r0
  pthread_mutex_t *v6; // r6
  _DWORD *v7; // r5
  int v8; // r6

  v4 = (char *)calloc(1u, 0x60u);
  v5 = pipe_new(a1, a2);
  v6 = (pthread_mutex_t *)(v5 + 15);
  v7 = v5;
  *(_DWORD *)v4 = v5;
  pthread_mutex_lock((pthread_mutex_t *)(v5 + 15));
  ++v7[8];
  pthread_mutex_unlock(v6);
  v8 = *(_DWORD *)v4;
  *((_DWORD *)v4 + 2) = v7;
  pthread_mutex_lock((pthread_mutex_t *)(v8 + 36));
  ++*(_DWORD *)(v8 + 28);
  pthread_mutex_unlock((pthread_mutex_t *)(v8 + 36));
  *((_DWORD *)v4 + 1) = v8;
  pthread_mutex_init((pthread_mutex_t *)(v4 + 16), 0);
  pthread_condattr_init((pthread_condattr_t *)v4 + 22);
  pthread_condattr_setclock((pthread_condattr_t *)v4 + 22, 1);
  pthread_cond_init((pthread_cond_t *)(v4 + 40), (const pthread_condattr_t *)v4 + 22);
  *((_DWORD *)v4 + 3) = 0;
  v4[92] = 0;
  return v4;
}
