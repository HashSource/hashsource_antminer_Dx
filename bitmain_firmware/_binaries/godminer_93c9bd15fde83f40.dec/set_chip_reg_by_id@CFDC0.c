int __fastcall set_chip_reg_by_id(unsigned int a1, int a2)
{
  int v4; // r5
  int fake_regio_runtime; // r0
  int *v6; // r3
  int v7; // r2
  int v8; // t1

  pthread_mutex_lock(&stru_1A9B48);
  v4 = dword_1A9B60;
  pthread_mutex_unlock(&stru_1A9B48);
  if ( v4 <= 0 )
  {
LABEL_6:
    fake_regio_runtime = get_fake_regio_runtime(a1);
    return (*(int (__fastcall **)(int, int))(fake_regio_runtime + 152))(fake_regio_runtime, a2);
  }
  fake_regio_runtime = dword_1A9B64[0];
  if ( a1 != *(_DWORD *)(dword_1A9B64[0] + 132) )
  {
    v6 = dword_1A9B64;
    v7 = 0;
    while ( ++v7 != v4 )
    {
      v8 = v6[1];
      ++v6;
      fake_regio_runtime = v8;
      if ( a1 == *(_DWORD *)(v8 + 132) )
        return (*(int (__fastcall **)(int, int))(fake_regio_runtime + 152))(fake_regio_runtime, a2);
    }
    goto LABEL_6;
  }
  return (*(int (__fastcall **)(int, int))(fake_regio_runtime + 152))(fake_regio_runtime, a2);
}
