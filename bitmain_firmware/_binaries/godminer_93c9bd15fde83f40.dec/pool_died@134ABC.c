int __fastcall pool_died(int a1)
{
  pthread_mutex_t *v1; // r4
  int v3; // r6
  int result; // r0

  v1 = (pthread_mutex_t *)(a1 + 1192);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 1192));
  v3 = *(unsigned __int8 *)(a1 + 1272);
  *(_BYTE *)(a1 + 1272) = 1;
  result = pthread_mutex_unlock(v1);
  if ( !v3 )
    return sub_1347B8((int *)a1);
  return result;
}
