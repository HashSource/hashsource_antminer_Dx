int __fastcall sync_get_core_reg_by_id(unsigned int a1, int a2, int a3, int a4, int a5)
{
  int v9; // r6
  int fake_regio_runtime; // r4
  int *v11; // r5
  int v12; // r3
  int v13; // t1
  int result; // r0
  int v15; // r5
  pthread_t v16; // r0

  pthread_mutex_lock(&stru_1A9B48);
  v9 = dword_1A9B60;
  pthread_mutex_unlock(&stru_1A9B48);
  if ( v9 > 0 )
  {
    fake_regio_runtime = dword_1A9B64[0];
    if ( a1 == *(_DWORD *)(dword_1A9B64[0] + 132) )
      goto LABEL_7;
    v11 = dword_1A9B64;
    v12 = 0;
    while ( ++v12 != v9 )
    {
      v13 = v11[1];
      ++v11;
      fake_regio_runtime = v13;
      if ( a1 == *(_DWORD *)(v13 + 132) )
        goto LABEL_7;
    }
  }
  fake_regio_runtime = get_fake_regio_runtime(a1);
LABEL_7:
  if ( *(_DWORD *)(fake_regio_runtime + 656) == *(_DWORD *)(fake_regio_runtime + 664) )
    pthread_create(
      (pthread_t *)(fake_regio_runtime + 676),
      0,
      (void *(*)(void *))get_response,
      (void *)fake_regio_runtime);
  result = (*(int (__fastcall **)(int, int, int, int, int))(fake_regio_runtime + 180))(
             fake_regio_runtime,
             a2,
             a3,
             a4,
             a5);
  v15 = result;
  if ( *(_DWORD *)(fake_regio_runtime + 656) == *(_DWORD *)(fake_regio_runtime + 664) )
  {
    v16 = *(_DWORD *)(fake_regio_runtime + 676);
    *(_BYTE *)(fake_regio_runtime + 685) = 1;
    pthread_join(v16, 0);
    return v15;
  }
  return result;
}
