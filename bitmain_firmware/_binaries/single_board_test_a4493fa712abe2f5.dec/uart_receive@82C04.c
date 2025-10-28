unsigned int __fastcall uart_receive(int a1, int a2, unsigned int a3)
{
  pthread_mutex_t *v4; // r5
  unsigned int v7; // r0
  unsigned int v9; // r4

  v4 = &stru_12B508[a1];
  pthread_mutex_lock(v4);
  v7 = sub_828CC((unsigned __int8)a1);
  if ( a3 >= v7 )
    a3 = v7;
  if ( a3 )
  {
    v9 = sub_8258C(a1, a2, a3);
    pthread_mutex_unlock(v4);
    return v9;
  }
  else
  {
    pthread_mutex_unlock(v4);
    return 0;
  }
}
