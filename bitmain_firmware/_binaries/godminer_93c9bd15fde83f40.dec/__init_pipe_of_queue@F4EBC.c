int __fastcall _init_pipe_of_queue(int *a1, int a2, int a3)
{
  unsigned int v5; // r8
  _DWORD *v7; // r4
  char *v8; // r0
  bool v9; // zf
  char *v10; // r7
  int v11; // r5
  unsigned int v12; // r5
  unsigned int v13; // r5
  int v14; // r5
  int result; // r0

  if ( !a2 )
  {
LABEL_13:
    *a1 = 0;
    pthread_mutex_lock((pthread_mutex_t *)0x3C);
    __und(0);
  }
  v5 = 32 * a2;
  v7 = malloc(0xB8u);
  v8 = (char *)malloc(32 * a2);
  v9 = v8 == 0;
  if ( v8 )
    v9 = v7 == 0;
  v10 = v8;
  if ( v9 )
  {
    free(v7);
    free(v10);
    goto LABEL_13;
  }
  if ( a3 )
  {
    v11 = a2 + a3 * a2;
    if ( v11 < v5 )
      v11 = 32 * a2;
    if ( v11 >= 0 )
    {
      v12 = (v11 - 1) | ((unsigned int)(v11 - 1) >> 1) | (((v11 - 1) | ((unsigned int)(v11 - 1) >> 1)) >> 2);
      v13 = v12 | (v12 >> 4) | ((v12 | (v12 >> 4)) >> 8);
      v11 = (v13 | HIWORD(v13)) + 1;
    }
  }
  else
  {
    v11 = -1;
  }
  memset(v7, 0, 0xB8u);
  v7[4] = &v10[v5];
  v7[7] = 1;
  v7[8] = 1;
  v7[6] = &v10[a2];
  v7[2] = v11;
  *v7 = a2;
  v7[1] = v5;
  v7[3] = v10;
  v7[5] = v10;
  pthread_mutex_init((pthread_mutex_t *)(v7 + 9), 0);
  pthread_mutex_init((pthread_mutex_t *)(v7 + 15), 0);
  pthread_cond_init((pthread_cond_t *)(v7 + 22), 0);
  pthread_cond_init((pthread_cond_t *)(v7 + 34), 0);
  *a1 = (int)v7;
  pthread_mutex_lock((pthread_mutex_t *)(v7 + 15));
  ++v7[8];
  pthread_mutex_unlock((pthread_mutex_t *)(v7 + 15));
  v14 = *a1;
  a1[2] = (int)v7;
  pthread_mutex_lock((pthread_mutex_t *)(v14 + 36));
  ++*(_DWORD *)(v14 + 28);
  result = pthread_mutex_unlock((pthread_mutex_t *)(v14 + 36));
  a1[1] = v14;
  return result;
}
