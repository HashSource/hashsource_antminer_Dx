int __fastcall wait_pool_to_be_current(int a1)
{
  pthread_mutex_lock(&stru_196218);
  while ( dword_196230 != a1 )
    pthread_cond_wait(&cond, &stru_196218);
  return pthread_mutex_unlock(&stru_196218);
}
