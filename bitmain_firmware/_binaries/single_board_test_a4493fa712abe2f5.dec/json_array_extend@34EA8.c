int __fastcall json_array_extend(int a1, _DWORD *a2)
{
  _BOOL4 v2; // r3
  int v3; // r2
  __int64 v5; // kr00_8
  char *v7; // r4
  __int64 v8; // kr10_8
  unsigned int v9; // r4
  int v10; // r3
  int v11; // r0
  unsigned int *v12; // r3
  unsigned int v13; // r2
  unsigned int v15; // r7
  unsigned int v16; // r2
  void *v17; // r0
  int v18; // r2

  if ( !a1 )
    return -1;
  v2 = a2 == 0;
  if ( *(_DWORD *)a1 != 1 )
    v2 = 1;
  if ( v2 || *a2 != 1 )
    return -1;
  v3 = a2[3];
  v5 = *(_QWORD *)(a1 + 8);
  v7 = *(char **)(a1 + 16);
  if ( HIDWORD(v5) + v3 > (unsigned int)v5 )
  {
    v15 = 2 * v5;
    v16 = v3 + v5;
    if ( 2 * (int)v5 < v16 )
      v15 = v16;
    if ( !(4 * v15) )
      return -1;
    v17 = off_12A258(4 * v15);
    if ( !v17 )
      return -1;
    v18 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a1 + 8) = v15;
    *(_DWORD *)(a1 + 16) = v17;
    memcpy(v17, v7, 4 * v18);
    off_12A254(v7);
    v7 = *(char **)(a1 + 16);
  }
  if ( !v7 )
    return -1;
  v8 = *(_QWORD *)(a2 + 3);
  if ( a2[3] )
  {
    v9 = 0;
    do
    {
      v10 = *(_DWORD *)(HIDWORD(v8) + 4 * v9);
      if ( v10 )
      {
        v11 = *(_DWORD *)(v10 + 4);
        v12 = (unsigned int *)(v10 + 4);
        if ( v11 != -1 )
        {
          do
            v13 = __ldrex(v12);
          while ( __strex(v13 + 1, v12) );
          __dmb(0xBu);
          v8 = *(_QWORD *)(a2 + 3);
        }
      }
      ++v9;
    }
    while ( v9 < (unsigned int)v8 );
    v7 = *(char **)(a1 + 16);
  }
  memcpy(&v7[4 * *(_DWORD *)(a1 + 12)], (const void *)HIDWORD(v8), v8);
  *(_DWORD *)(a1 + 12) += a2[3];
  return 0;
}
