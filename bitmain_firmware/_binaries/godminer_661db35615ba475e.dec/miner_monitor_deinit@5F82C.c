void miner_monitor_deinit()
{
  void *v0; // r4
  pthread_t v1; // r0
  int v2; // r4
  pthread_t v3; // r0
  void *v4; // r0
  int *v5; // r4
  void *v6; // r0
  void *thread_return; // [sp+4h] [bp-4h] BYREF

  v0 = (void *)dword_1916DC;
  if ( *(_BYTE *)(dword_1916DC + 6148) )
  {
    v1 = *(_DWORD *)(dword_1916DC + 6152);
    *(_BYTE *)(dword_1916DC + 6148) = 0;
    pthread_join(v1, &thread_return);
  }
  free(v0);
  v2 = dword_1916D8;
  if ( *(_BYTE *)(dword_1916D8 + 6148) )
  {
    v3 = *(_DWORD *)(dword_1916D8 + 6152);
    *(_BYTE *)(dword_1916D8 + 6148) = 0;
    pthread_join(v3, &thread_return);
  }
  v4 = (void *)v2;
  v5 = dword_191398;
  free(v4);
  free((void *)dword_191BD4);
  free((void *)dword_191BC8);
  free((void *)dword_191BD0);
  free((void *)dword_191390);
  free((void *)dword_191BCC);
  do
  {
    v6 = (void *)v5[15];
    v5 += 52;
    free(v6);
    free((void *)*(v5 - 30));
    free((void *)*(v5 - 51));
    free((void *)*(v5 - 52));
    free((void *)*(v5 - 49));
    free((void *)*(v5 - 50));
  }
  while ( v5 != &dword_1916D8 );
}
