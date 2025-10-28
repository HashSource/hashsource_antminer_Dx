int __fastcall set_inactive_by_id(unsigned int a1)
{
  int v2; // r5
  int fake_regio_runtime; // r0
  int *v4; // r3
  int v5; // r2
  int v6; // t1

  pthread_mutex_lock(&stru_190E30);
  v2 = dword_190E48;
  pthread_mutex_unlock(&stru_190E30);
  if ( v2 <= 0 )
  {
LABEL_6:
    fake_regio_runtime = get_fake_regio_runtime(a1);
    return (*(int (**)(void))(fake_regio_runtime + 136))();
  }
  fake_regio_runtime = dword_190E4C[0];
  if ( a1 != *(_DWORD *)(dword_190E4C[0] + 120) )
  {
    v4 = dword_190E4C;
    v5 = 0;
    while ( ++v5 != v2 )
    {
      v6 = v4[1];
      ++v4;
      fake_regio_runtime = v6;
      if ( a1 == *(_DWORD *)(v6 + 120) )
        return (*(int (**)(void))(fake_regio_runtime + 136))();
    }
    goto LABEL_6;
  }
  return (*(int (**)(void))(fake_regio_runtime + 136))();
}
