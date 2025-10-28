bool __fastcall current_pool_changed(int a1)
{
  int v2; // r4

  pthread_mutex_lock(&stru_196218);
  v2 = dword_196230;
  pthread_mutex_unlock(&stru_196218);
  return a1 != v2;
}
