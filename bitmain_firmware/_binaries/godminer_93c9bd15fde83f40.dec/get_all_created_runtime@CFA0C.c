int *__fastcall get_all_created_runtime(_DWORD *a1)
{
  pthread_mutex_lock(&stru_1A9B48);
  *a1 = dword_1A9B60;
  pthread_mutex_unlock(&stru_1A9B48);
  return dword_1A9B64;
}
