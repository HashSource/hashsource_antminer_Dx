int __fastcall set_inactive_by_id(unsigned int a1)
{
  int v2; // r5
  int fake_regio_runtime; // r0
  int *v4; // r3
  int v5; // r2
  int v6; // t1

  pthread_mutex_lock(&stru_1A9B48);
  v2 = dword_1A9B60;
  pthread_mutex_unlock(&stru_1A9B48);
  if ( v2 <= 0 )
  {
LABEL_6:
    fake_regio_runtime = get_fake_regio_runtime(a1);
    return (*(int (**)(void))(fake_regio_runtime + 148))();
  }
  fake_regio_runtime = dword_1A9B64[0];
  if ( a1 != *(_DWORD *)(dword_1A9B64[0] + 132) )
  {
    v4 = dword_1A9B64;
    v5 = 0;
    while ( ++v5 != v2 )
    {
      v6 = v4[1];
      ++v4;
      fake_regio_runtime = v6;
      if ( a1 == *(_DWORD *)(v6 + 132) )
        return (*(int (**)(void))(fake_regio_runtime + 148))();
    }
    goto LABEL_6;
  }
  return (*(int (**)(void))(fake_regio_runtime + 148))();
}
