unsigned int __fastcall uart_receive(int a1, int a2, unsigned int a3)
{
  pthread_mutex_t *v4; // r5
  unsigned int v7; // r0
  unsigned int v9; // r4

  v4 = &stru_195A34[a1];
  pthread_mutex_lock(v4);
  v7 = sub_B39C4((unsigned __int8)a1);
  if ( v7 < a3 )
    a3 = v7;
  if ( a3 )
  {
    v9 = sub_B35A8(a1, a2, a3);
    pthread_mutex_unlock(v4);
    return v9;
  }
  else
  {
    pthread_mutex_unlock(v4);
    return 0;
  }
}
