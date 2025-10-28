int sub_21600()
{
  int v0; // r7
  int result; // r0
  _DWORD *v2; // r4
  int v3; // r6
  int v4; // r2
  void (__fastcall *v5)(int); // r3
  int *v6; // r4
  int v7; // t1

  pthread_mutex_lock(&stru_190E30);
  v0 = dword_190E48;
  result = pthread_mutex_unlock(&stru_190E30);
  if ( v0 > 0 )
  {
    if ( v0 <= 8 )
    {
      v3 = 0;
    }
    else
    {
      v2 = &unk_190E70;
      v3 = 0;
      do
      {
        v4 = *(v2 - 9);
        v3 += 8;
        v5 = (void (__fastcall *)(int))off_18F508[0];
        __pld(v2);
        v2 += 8;
        v5(*(_DWORD *)(v4 + 120));
        ((void (__fastcall *)(int))off_18F508[0])(*(_DWORD *)(*(v2 - 16) + 120));
        ((void (__fastcall *)(int))off_18F508[0])(*(_DWORD *)(*(v2 - 15) + 120));
        ((void (__fastcall *)(int))off_18F508[0])(*(_DWORD *)(*(v2 - 14) + 120));
        ((void (__fastcall *)(int))off_18F508[0])(*(_DWORD *)(*(v2 - 13) + 120));
        ((void (__fastcall *)(int))off_18F508[0])(*(_DWORD *)(*(v2 - 12) + 120));
        ((void (__fastcall *)(int))off_18F508[0])(*(_DWORD *)(*(v2 - 11) + 120));
        ((void (__fastcall *)(int))off_18F508[0])(*(_DWORD *)(*(v2 - 10) + 120));
      }
      while ( v3 != ((v0 - 9) & 0xFFFFFFF8) + 8 );
    }
    v6 = &dword_190E4C[v3];
    do
    {
      v7 = *v6++;
      ++v3;
      result = ((int (__fastcall *)(int))off_18F508[0])(*(_DWORD *)(v7 + 120));
    }
    while ( v3 < v0 );
  }
  return result;
}
