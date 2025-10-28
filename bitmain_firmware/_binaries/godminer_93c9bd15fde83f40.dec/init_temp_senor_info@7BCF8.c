int __fastcall init_temp_senor_info(int a1)
{
  int v2; // r5
  int result; // r0
  int *v4; // r3
  int v5; // r1
  int v6; // r3
  int v7; // r1
  int v8; // r2

  pthread_mutex_lock(&stru_1A9B48);
  v2 = dword_1A9B60;
  result = pthread_mutex_unlock(&stru_1A9B48);
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  if ( v2 > 0 )
  {
    v4 = *(int **)(dword_1A9B64[0] + 208);
    v5 = v4[1];
    if ( v5 > 0 )
    {
      v6 = *v4;
      v7 = v6 + 20 * v5;
      do
      {
        v8 = *(_DWORD *)(v6 + 8);
        if ( v8 )
        {
          if ( v8 == 1 )
            ++*(_DWORD *)(a1 + 28);
        }
        else
        {
          ++*(_DWORD *)(a1 + 24);
        }
        v6 += 20;
      }
      while ( v7 != v6 );
    }
  }
  return result;
}
