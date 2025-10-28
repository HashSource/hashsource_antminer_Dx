int *__fastcall get_all_created_runtime(_DWORD *a1)
{
  pthread_mutex_lock(&stru_12BCB8);
  *a1 = dword_12BCD0;
  pthread_mutex_unlock(&stru_12BCB8);
  return dword_12BCD4;
}
