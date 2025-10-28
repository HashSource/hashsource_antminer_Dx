int *__fastcall pool_alive(int *a1)
{
  pthread_mutex_t *v1; // r4
  int v3; // r7
  int *result; // r0
  int v5; // r4
  int v6; // r2
  _DWORD *v7; // r3
  int v8; // r1
  int v9; // r10
  int v10; // r12
  int v11; // r6
  int v12; // r5
  int v13; // r8
  int v14; // lr
  int v15; // r7
  int v16; // r12
  int v17; // t1

  v1 = (pthread_mutex_t *)(a1 + 298);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 298));
  v3 = *((unsigned __int8 *)a1 + 1272);
  *((_BYTE *)a1 + 1272) = 0;
  result = (int *)pthread_mutex_unlock(v1);
  if ( v3 )
  {
    pthread_mutex_lock(&stru_1A9B48);
    v5 = dword_1A9B60;
    result = (int *)pthread_mutex_unlock(&stru_1A9B48);
    if ( v5 > 0 )
    {
      v6 = *a1;
      if ( v5 <= 8 )
      {
        v8 = 0;
      }
      else
      {
        v7 = &unk_1A9BD8;
        v8 = 0;
        do
        {
          v8 += 8;
          v9 = *(v7 - 29) + v6;
          v10 = *(v7 - 28) + v6;
          v11 = *(v7 - 25);
          v12 = *(v7 - 24);
          v13 = *(v7 - 27) + v6;
          v14 = *(v7 - 23);
          v15 = *(v7 - 26) + v6;
          __pld(v7);
          *(_BYTE *)(v9 + 336) = 0;
          *(_BYTE *)(v10 + 336) = 0;
          v16 = *(v7 - 22);
          v7 += 8;
          *(_BYTE *)(v13 + 336) = 0;
          *(_BYTE *)(v15 + 336) = 0;
          *(_BYTE *)(v11 + v6 + 336) = 0;
          *(_BYTE *)(v12 + v6 + 336) = 0;
          *(_BYTE *)(v14 + v6 + 336) = 0;
          *(_BYTE *)(v16 + v6 + 336) = 0;
        }
        while ( v8 != ((v5 - 9) & 0xFFFFFFF8) + 8 );
      }
      result = &dword_1A9B64[v8];
      do
      {
        v17 = *result++;
        ++v8;
        *(_BYTE *)(v17 + v6 + 336) = 0;
      }
      while ( v5 > v8 );
    }
  }
  return result;
}
