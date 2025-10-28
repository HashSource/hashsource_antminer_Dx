unsigned int __fastcall dev_read_nonce_reg_data_hal(int a1, int a2, unsigned int a3)
{
  int v5; // r6
  unsigned int v6; // r0
  unsigned int v8; // r4

  v5 = *(_DWORD *)&g_chain_info[8 * a1];
  pthread_mutex_lock(&stru_1AA46C[v5]);
  v6 = sub_9AB94((unsigned __int8)v5);
  if ( a3 >= v6 )
    a3 = v6;
  if ( a3 )
  {
    v8 = sub_9A778(v5, a2, a3);
    pthread_mutex_unlock(&stru_1AA46C[v5]);
    return v8;
  }
  else
  {
    pthread_mutex_unlock(&stru_1AA46C[v5]);
    return 0;
  }
}
