bool __fastcall current_pool_changed(int a1)
{
  int v2; // r4

  pthread_mutex_lock(&stru_1AA810);
  v2 = dword_1AA828;
  pthread_mutex_unlock(&stru_1AA810);
  return a1 != v2;
}
