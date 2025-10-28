int *__fastcall get_all_created_runtime(_DWORD *a1)
{
  pthread_mutex_lock(&stru_190E30);
  *a1 = dword_190E48;
  pthread_mutex_unlock(&stru_190E30);
  return dword_190E4C;
}
