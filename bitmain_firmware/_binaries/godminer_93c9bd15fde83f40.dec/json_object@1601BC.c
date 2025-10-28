_DWORD *json_object()
{
  _DWORD *v0; // r5
  void *(*v1)(size_t); // r3
  int v2; // r7
  int v3; // r0
  _DWORD *v4; // r2
  unsigned int v5; // r0
  int v6; // lr
  char *v7; // r3
  unsigned int v8; // r1
  unsigned int v9; // r3
  void *v11; // r0

  v0 = off_1A25E8(0x24u);
  if ( v0 )
  {
    if ( !hashtable_seed )
      json_object_seed(0);
    v1 = off_1A25E8;
    v0[4] = 3;
    *v0 = 0;
    v0[2] = 0;
    v0[1] = 1;
    v2 = (int)v1(64);
    v0[3] = v2;
    if ( v2 )
    {
      v3 = v0[4];
      v4 = v0 + 5;
      v0[6] = v0 + 5;
      v0[5] = v0 + 5;
      v0[8] = v0 + 7;
      v5 = 1 << v3;
      v0[7] = v0 + 7;
      if ( v5 )
      {
        if ( v5 <= 4 )
        {
          v8 = 0;
        }
        else
        {
          v6 = 0;
          v7 = (char *)(v2 + 236);
          v8 = ((v5 - 5) & 0xFFFFFFFC) + 4;
          do
          {
            v6 += 4;
            __pld(v7);
            *((_DWORD *)v7 - 58) = v4;
            *((_DWORD *)v7 - 59) = v4;
            v7 += 32;
            *((_DWORD *)v7 - 64) = v4;
            *((_DWORD *)v7 - 65) = v4;
            *((_DWORD *)v7 - 62) = v4;
            *((_DWORD *)v7 - 63) = v4;
            *((_DWORD *)v7 - 60) = v4;
            *((_DWORD *)v7 - 61) = v4;
          }
          while ( v6 != v8 );
        }
        v9 = v2 + 8 * v8;
        do
        {
          *(_DWORD *)(v9 + 4) = v4;
          v9 += 8;
          *(_DWORD *)(v2 + 8 * v8++) = v4;
        }
        while ( v8 < v5 );
      }
    }
    else
    {
      v11 = v0;
      v0 = 0;
      off_1A25EC(v11);
    }
  }
  return v0;
}
