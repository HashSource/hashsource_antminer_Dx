int __fastcall set_core_reg_by_id(unsigned int a1, int a2)
{
  int v4; // r5
  int fake_regio_runtime; // r0
  int *v6; // r3
  int v7; // r2
  int v8; // t1

  pthread_mutex_lock(&stru_12BCB8);
  v4 = dword_12BCD0;
  pthread_mutex_unlock(&stru_12BCB8);
  if ( v4 <= 0 )
  {
LABEL_6:
    fake_regio_runtime = get_fake_regio_runtime(a1);
    return (*(int (__fastcall **)(int, int))(fake_regio_runtime + 144))(fake_regio_runtime, a2);
  }
  fake_regio_runtime = dword_12BCD4[0];
  if ( a1 != *(_DWORD *)(dword_12BCD4[0] + 120) )
  {
    v6 = dword_12BCD4;
    v7 = 0;
    while ( ++v7 != v4 )
    {
      v8 = v6[1];
      ++v6;
      fake_regio_runtime = v8;
      if ( a1 == *(_DWORD *)(v8 + 120) )
        return (*(int (__fastcall **)(int, int))(fake_regio_runtime + 144))(fake_regio_runtime, a2);
    }
    goto LABEL_6;
  }
  return (*(int (__fastcall **)(int, int))(fake_regio_runtime + 144))(fake_regio_runtime, a2);
}
