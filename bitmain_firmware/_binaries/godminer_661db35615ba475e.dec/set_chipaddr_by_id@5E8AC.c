int __fastcall set_chipaddr_by_id(unsigned int a1, int a2, int a3)
{
  int v6; // r5
  int fake_regio_runtime; // r0
  int *v8; // r3
  int v9; // r2
  int v10; // t1

  pthread_mutex_lock(&stru_190E30);
  v6 = dword_190E48;
  pthread_mutex_unlock(&stru_190E30);
  if ( v6 <= 0 )
  {
LABEL_6:
    fake_regio_runtime = get_fake_regio_runtime(a1);
    return (*(int (__fastcall **)(int, int, int))(fake_regio_runtime + 132))(fake_regio_runtime, a2, a3);
  }
  fake_regio_runtime = dword_190E4C[0];
  if ( a1 != *(_DWORD *)(dword_190E4C[0] + 120) )
  {
    v8 = dword_190E4C;
    v9 = 0;
    while ( ++v9 != v6 )
    {
      v10 = v8[1];
      ++v8;
      fake_regio_runtime = v10;
      if ( a1 == *(_DWORD *)(v10 + 120) )
        return (*(int (__fastcall **)(int, int, int))(fake_regio_runtime + 132))(fake_regio_runtime, a2, a3);
    }
    goto LABEL_6;
  }
  return (*(int (__fastcall **)(int, int, int))(fake_regio_runtime + 132))(fake_regio_runtime, a2, a3);
}
