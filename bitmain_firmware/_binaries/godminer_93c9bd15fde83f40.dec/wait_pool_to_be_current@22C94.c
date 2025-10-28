int __fastcall wait_pool_to_be_current(int a1)
{
  pthread_mutex_lock(&stru_1AA810);
  while ( dword_1AA828 != a1 )
    pthread_cond_wait(&cond, &stru_1AA810);
  return pthread_mutex_unlock(&stru_1AA810);
}
