int get_current_pool()
{
  int v0; // r4

  pthread_mutex_lock(&stru_1AA810);
  v0 = dword_1AA828;
  pthread_mutex_unlock(&stru_1AA810);
  return v0;
}
