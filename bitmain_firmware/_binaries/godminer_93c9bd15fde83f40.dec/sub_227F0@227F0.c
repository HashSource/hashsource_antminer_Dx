int sub_227F0()
{
  int v0; // r7
  int result; // r0
  _DWORD *v2; // r4
  int v3; // r6
  int v4; // r2
  void (__fastcall *v5)(int); // r3
  int *v6; // r4
  int v7; // t1

  pthread_mutex_lock(&stru_1A9B48);
  v0 = dword_1A9B60;
  result = pthread_mutex_unlock(&stru_1A9B48);
  if ( v0 > 0 )
  {
    if ( v0 <= 8 )
    {
      v3 = 0;
    }
    else
    {
      v2 = &unk_1A9B88;
      v3 = 0;
      do
      {
        v4 = *(v2 - 9);
        v3 += 8;
        v5 = (void (__fastcall *)(int))off_1A2BB4[0];
        __pld(v2);
        v2 += 8;
        v5(*(_DWORD *)(v4 + 132));
        ((void (__fastcall *)(int))off_1A2BB4[0])(*(_DWORD *)(*(v2 - 16) + 132));
        ((void (__fastcall *)(int))off_1A2BB4[0])(*(_DWORD *)(*(v2 - 15) + 132));
        ((void (__fastcall *)(int))off_1A2BB4[0])(*(_DWORD *)(*(v2 - 14) + 132));
        ((void (__fastcall *)(int))off_1A2BB4[0])(*(_DWORD *)(*(v2 - 13) + 132));
        ((void (__fastcall *)(int))off_1A2BB4[0])(*(_DWORD *)(*(v2 - 12) + 132));
        ((void (__fastcall *)(int))off_1A2BB4[0])(*(_DWORD *)(*(v2 - 11) + 132));
        ((void (__fastcall *)(int))off_1A2BB4[0])(*(_DWORD *)(*(v2 - 10) + 132));
      }
      while ( v3 != ((v0 - 9) & 0xFFFFFFF8) + 8 );
    }
    v6 = &dword_1A9B64[v3];
    do
    {
      v7 = *v6++;
      ++v3;
      result = ((int (__fastcall *)(int))off_1A2BB4[0])(*(_DWORD *)(v7 + 132));
    }
    while ( v3 < v0 );
  }
  return result;
}
