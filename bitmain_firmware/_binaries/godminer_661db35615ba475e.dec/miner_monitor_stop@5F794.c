int miner_monitor_stop()
{
  pthread_t v0; // r0
  int result; // r0
  pthread_t v2; // r0
  void *thread_return; // [sp+4h] [bp-4h] BYREF

  if ( *(_BYTE *)(dword_1916DC + 6148) )
  {
    v0 = *(_DWORD *)(dword_1916DC + 6152);
    *(_BYTE *)(dword_1916DC + 6148) = 0;
    result = pthread_join(v0, &thread_return);
  }
  if ( *(_BYTE *)(dword_1916D8 + 6148) )
  {
    v2 = *(_DWORD *)(dword_1916D8 + 6152);
    *(_BYTE *)(dword_1916D8 + 6148) = 0;
    return pthread_join(v2, &thread_return);
  }
  return result;
}
