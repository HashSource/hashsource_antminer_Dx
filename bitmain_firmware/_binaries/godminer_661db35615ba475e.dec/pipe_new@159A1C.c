_DWORD *__fastcall pipe_new(int a1, int a2)
{
  _DWORD *v3; // r4
  unsigned int v4; // r7
  char *v6; // r0
  bool v7; // zf
  char *v8; // r8
  int v9; // r5
  unsigned int v10; // r5
  unsigned int v11; // r5
  void *v13; // r0

  if ( !a1 )
    return 0;
  v4 = 32 * a1;
  v3 = malloc(0xB8u);
  v6 = (char *)malloc(32 * a1);
  v7 = v6 == 0;
  if ( v6 )
    v7 = v3 == 0;
  v8 = v6;
  if ( v7 )
  {
    v13 = v3;
    v3 = 0;
    free(v13);
    free(v8);
  }
  else
  {
    if ( a2 )
    {
      v9 = a1 + a2 * a1;
      if ( v9 < v4 )
        v9 = 32 * a1;
      if ( v9 >= 0 )
      {
        v10 = (v9 - 1) | ((unsigned int)(v9 - 1) >> 1) | (((v9 - 1) | ((unsigned int)(v9 - 1) >> 1)) >> 2);
        v11 = v10 | (v10 >> 4) | ((v10 | (v10 >> 4)) >> 8);
        v9 = (v11 | HIWORD(v11)) + 1;
      }
    }
    else
    {
      v9 = -1;
    }
    memset(v3, 0, 0xB8u);
    v3[4] = &v8[v4];
    v3[7] = 1;
    v3[8] = 1;
    v3[6] = &v8[a1];
    *v3 = a1;
    v3[1] = v4;
    v3[2] = v9;
    v3[3] = v8;
    v3[5] = v8;
    pthread_mutex_init((pthread_mutex_t *)(v3 + 9), 0);
    pthread_mutex_init((pthread_mutex_t *)(v3 + 15), 0);
    pthread_cond_init((pthread_cond_t *)(v3 + 22), 0);
    pthread_cond_init((pthread_cond_t *)(v3 + 34), 0);
  }
  return v3;
}
