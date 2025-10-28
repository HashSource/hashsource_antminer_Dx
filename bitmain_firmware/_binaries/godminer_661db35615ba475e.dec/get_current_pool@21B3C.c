int get_current_pool()
{
  int v0; // r4

  pthread_mutex_lock(&stru_196218);
  v0 = dword_196230;
  pthread_mutex_unlock(&stru_196218);
  return v0;
}
