int __fastcall hashtable_init(_DWORD *a1)
{
  int v2; // r5
  void *(*v3)(size_t); // r3
  int v4; // r0
  int v5; // r3
  _DWORD *v6; // r2
  unsigned int v7; // r6
  _DWORD *v8; // r3
  unsigned int v9; // r1
  unsigned int v10; // r3

  v2 = 0;
  a1[2] = 3;
  v3 = off_12A258;
  *a1 = 0;
  v4 = (int)v3(64);
  a1[1] = v4;
  if ( !v4 )
    return -1;
  v5 = a1[2];
  v6 = a1 + 3;
  a1[3] = a1 + 3;
  a1[4] = a1 + 3;
  a1[5] = a1 + 5;
  a1[6] = a1 + 5;
  v7 = 1 << v5;
  if ( 1 << v5 )
  {
    if ( v7 <= 4 )
    {
      v9 = 0;
    }
    else
    {
      v8 = (_DWORD *)v4;
      v9 = ((v7 - 5) & 0xFFFFFFFC) + 4;
      do
      {
        v2 += 4;
        __pld(v8 + 59);
        *v8 = v6;
        v8[1] = v6;
        v8[2] = v6;
        v8[3] = v6;
        v8[4] = v6;
        v8[5] = v6;
        v8[6] = v6;
        v8[7] = v6;
        v8 += 8;
      }
      while ( v2 != v9 );
    }
    v10 = v4 + 8 * v9;
    do
    {
      *(_DWORD *)(v10 + 4) = v6;
      v10 += 8;
      *(_DWORD *)(v4 + 8 * v9++) = v6;
    }
    while ( v7 > v9 );
  }
  return 0;
}
