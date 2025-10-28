int __fastcall json_array_extend(_DWORD *a1, _DWORD *a2)
{
  _BOOL4 v3; // r3
  int v4; // r2
  unsigned int v6; // r1
  char *v7; // r6
  size_t v8; // r2
  _DWORD *v9; // r1
  size_t i; // r12
  int v11; // r3
  int v12; // r0
  unsigned int *v13; // r3
  unsigned int v14; // r2
  int v16; // r7
  unsigned int v17; // r2
  void *v18; // r0
  int v19; // r2

  if ( !a1 )
    return -1;
  v3 = a2 == 0;
  if ( *a1 != 1 )
    v3 = 1;
  if ( v3 || *a2 != 1 )
    return -1;
  v4 = a2[3];
  v6 = a1[2];
  v7 = (char *)a1[4];
  if ( v4 + a1[3] > v6 )
  {
    v16 = 2 * v6;
    v17 = v4 + v6;
    if ( 2 * v6 < v17 )
      v16 = v17;
    if ( !(4 * v16) )
      return -1;
    v18 = off_190780(4 * v16);
    if ( !v18 )
      return -1;
    v19 = a1[3];
    a1[4] = v18;
    a1[2] = v16;
    memcpy(v18, v7, 4 * v19);
    off_190550(v7);
    v7 = (char *)a1[4];
  }
  if ( !v7 )
    return -1;
  v8 = a2[3];
  v9 = (_DWORD *)a2[4];
  if ( v8 )
  {
    for ( i = 0; i < v8; ++i )
    {
      v11 = v9[i];
      if ( v11 )
      {
        v12 = *(_DWORD *)(v11 + 4);
        v13 = (unsigned int *)(v11 + 4);
        if ( v12 != -1 )
        {
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 + 1, v13) );
          __dmb(0xBu);
          v8 = a2[3];
          v9 = (_DWORD *)a2[4];
        }
      }
    }
    v7 = (char *)a1[4];
    v8 *= 4;
  }
  memcpy(&v7[4 * a1[3]], v9, v8);
  a1[3] += a2[3];
  return 0;
}
