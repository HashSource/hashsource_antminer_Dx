_DWORD *__fastcall pipe_new(_DWORD *a1, int a2)
{
  _DWORD *v2; // r4
  size_t v3; // r7
  char *v6; // r0
  bool v7; // zf
  char *v8; // r8
  int v9; // r5
  unsigned int v10; // r5
  unsigned int v11; // r5
  void *v13; // r0

  v2 = a1;
  if ( a1 )
  {
    v3 = 32 * (_DWORD)a1;
    v2 = malloc(0xB8u);
    v6 = (char *)malloc(v3);
    v7 = v6 == 0;
    if ( v6 )
      v7 = v2 == 0;
    v8 = v6;
    if ( v7 )
    {
      v13 = v2;
      v2 = 0;
      free(v13);
      free(v8);
    }
    else
    {
      if ( a2 )
      {
        v9 = (int)a1 + a2 * (_DWORD)a1;
        if ( v9 < v3 )
          v9 = v3;
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
      memset(v2, 0, 0xB8u);
      v2[4] = &v8[v3];
      v2[7] = 1;
      v2[8] = 1;
      v2[6] = (char *)a1 + (_DWORD)v8;
      *v2 = a1;
      v2[1] = v3;
      v2[2] = v9;
      v2[3] = v8;
      v2[5] = v8;
      pthread_mutex_init((pthread_mutex_t *)(v2 + 9), 0);
      pthread_mutex_init((pthread_mutex_t *)(v2 + 15), 0);
      pthread_cond_init((pthread_cond_t *)(v2 + 22), 0);
      pthread_cond_init((pthread_cond_t *)(v2 + 34), 0);
    }
  }
  return v2;
}
