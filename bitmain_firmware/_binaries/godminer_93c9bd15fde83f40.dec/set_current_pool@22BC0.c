int __fastcall set_current_pool(int a1)
{
  pthread_mutex_lock(&stru_1AA810);
  dword_1AA828 = a1;
  pthread_cond_broadcast(&cond);
  return pthread_mutex_unlock(&stru_1AA810);
}
