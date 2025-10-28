int __fastcall softreset_hal(int a1)
{
  int v2; // r5
  pthread_mutex_t *v3; // r4
  unsigned int v4; // r0
  int v5; // r5
  pthread_mutex_t *v6; // r4
  unsigned int v7; // r0
  unsigned int v9; // r5
  unsigned int v10; // r5
  _BYTE v11[16]; // [sp+0h] [bp-10h] BYREF

  while ( 1 )
  {
    v2 = *(_DWORD *)&g_chain_info[8 * a1];
    v3 = &stru_12B508[v2];
    pthread_mutex_lock(v3);
    v4 = sub_828CC((unsigned __int8)v2);
    if ( v4 > 0x10 )
    {
      v4 = 16;
      goto LABEL_9;
    }
    if ( !v4 )
      break;
LABEL_9:
    v9 = sub_8258C(v2, (int)v11, v4);
    pthread_mutex_unlock(v3);
    if ( !v9 )
      goto LABEL_4;
  }
  pthread_mutex_unlock(&stru_12B508[v2]);
LABEL_4:
  sleep(1u);
  do
  {
    v5 = *(_DWORD *)&g_chain_info[8 * a1];
    v6 = &stru_12B508[v5];
    pthread_mutex_lock(v6);
    v7 = sub_828CC((unsigned __int8)v5);
    if ( v7 > 0x10 )
    {
      v7 = 16;
    }
    else if ( !v7 )
    {
      pthread_mutex_unlock(&stru_12B508[v5]);
      return 0;
    }
    v10 = sub_8258C(v5, (int)v11, v7);
    pthread_mutex_unlock(v6);
  }
  while ( v10 );
  return 0;
}
