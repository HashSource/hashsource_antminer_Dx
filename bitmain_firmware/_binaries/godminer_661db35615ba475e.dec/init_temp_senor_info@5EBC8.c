int __fastcall init_temp_senor_info(int a1)
{
  int v2; // r6
  int result; // r0
  int *v4; // r3
  int v5; // r1
  int v6; // r3
  int v7; // r1
  int v8; // r2

  pthread_mutex_lock(&stru_190E30);
  v2 = dword_190E48;
  result = pthread_mutex_unlock(&stru_190E30);
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  if ( v2 > 0 )
  {
    v4 = *(int **)(dword_190E4C[0] + 196);
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
