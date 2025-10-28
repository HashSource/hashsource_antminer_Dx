char *__fastcall sub_CECE8(int a1)
{
  char *v2; // r6
  int v3; // r11
  _DWORD *v4; // r4
  char *v5; // r8
  _BOOL4 v6; // r5
  int v7; // r8

  v2 = (char *)calloc(1u, 0x60u);
  if ( !a1 )
  {
LABEL_7:
    *(_DWORD *)v2 = 0;
    pthread_mutex_lock((pthread_mutex_t *)0x3C);
    __und(0xFFu);
  }
  v3 = 32 * a1;
  v4 = malloc(0xB8u);
  v5 = (char *)malloc(32 * a1);
  v6 = v5 == 0;
  if ( !v4 )
    v6 = 1;
  if ( v6 )
  {
    free(v4);
    free(v5);
    goto LABEL_7;
  }
  memset(v4, 0, 0xB8u);
  v4[3] = v5;
  v4[4] = &v5[v3];
  v4[2] = -1;
  *v4 = a1;
  v4[6] = &v5[a1];
  v4[1] = v3;
  v4[5] = v5;
  v4[7] = 1;
  v4[8] = 1;
  pthread_mutex_init((pthread_mutex_t *)(v4 + 9), 0);
  pthread_mutex_init((pthread_mutex_t *)(v4 + 15), 0);
  pthread_cond_init((pthread_cond_t *)(v4 + 22), 0);
  pthread_cond_init((pthread_cond_t *)(v4 + 34), 0);
  *(_DWORD *)v2 = v4;
  pthread_mutex_lock((pthread_mutex_t *)(v4 + 15));
  ++v4[8];
  pthread_mutex_unlock((pthread_mutex_t *)(v4 + 15));
  v7 = *(_DWORD *)v2;
  *((_DWORD *)v2 + 2) = v4;
  pthread_mutex_lock((pthread_mutex_t *)(v7 + 36));
  ++*(_DWORD *)(v7 + 28);
  pthread_mutex_unlock((pthread_mutex_t *)(v7 + 36));
  *((_DWORD *)v2 + 1) = v7;
  pthread_mutex_init((pthread_mutex_t *)(v2 + 16), 0);
  pthread_condattr_init((pthread_condattr_t *)v2 + 22);
  pthread_condattr_setclock((pthread_condattr_t *)v2 + 22, 1);
  pthread_cond_init((pthread_cond_t *)(v2 + 40), (const pthread_condattr_t *)v2 + 22);
  *((_DWORD *)v2 + 3) = 0;
  v2[92] = 0;
  return v2;
}
