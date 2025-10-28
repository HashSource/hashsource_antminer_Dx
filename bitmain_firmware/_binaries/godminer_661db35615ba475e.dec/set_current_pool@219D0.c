int __fastcall set_current_pool(int a1)
{
  pthread_mutex_lock(&stru_196218);
  dword_196230 = a1;
  pthread_cond_broadcast(&cond);
  return pthread_mutex_unlock(&stru_196218);
}
