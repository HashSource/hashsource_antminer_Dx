int __fastcall hashtable_init(_DWORD *a1)
{
  void *(*v2)(size_t); // r3
  int v3; // r0
  int v4; // r1
  _DWORD *v5; // r2
  unsigned int v6; // r5
  int v7; // lr
  char *v8; // r3
  unsigned int v9; // r1
  unsigned int v10; // r3

  a1[2] = 3;
  v2 = off_190780;
  *a1 = 0;
  v3 = (int)v2(64);
  a1[1] = v3;
  if ( !v3 )
    return -1;
  v4 = a1[2];
  v5 = a1 + 3;
  a1[4] = a1 + 3;
  a1[3] = a1 + 3;
  v6 = 1 << v4;
  a1[6] = a1 + 5;
  a1[5] = a1 + 5;
  if ( 1 << v4 )
  {
    if ( v6 <= 4 )
    {
      v9 = 0;
    }
    else
    {
      v7 = 0;
      v8 = (char *)(v3 + 236);
      v9 = ((v6 - 5) & 0xFFFFFFFC) + 4;
      do
      {
        v7 += 4;
        __pld(v8);
        *((_DWORD *)v8 - 58) = v5;
        *((_DWORD *)v8 - 59) = v5;
        v8 += 32;
        *((_DWORD *)v8 - 64) = v5;
        *((_DWORD *)v8 - 65) = v5;
        *((_DWORD *)v8 - 62) = v5;
        *((_DWORD *)v8 - 63) = v5;
        *((_DWORD *)v8 - 60) = v5;
        *((_DWORD *)v8 - 61) = v5;
      }
      while ( v7 != v9 );
    }
    v10 = v3 + 8 * v9;
    do
    {
      *(_DWORD *)(v10 + 4) = v5;
      v10 += 8;
      *(_DWORD *)(v3 + 8 * v9++) = v5;
    }
    while ( v6 > v9 );
  }
  return 0;
}
