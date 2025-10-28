_DWORD *json_object()
{
  _DWORD *v0; // r6
  int v1; // r5
  void *(*v2)(size_t); // r3
  int v3; // r7
  int v4; // r0
  _DWORD *v5; // r2
  unsigned int v6; // r0
  _DWORD *v7; // r3
  unsigned int v8; // r1
  unsigned int v9; // r3
  void *v11; // r0

  v0 = off_12A258(0x24u);
  if ( v0 )
  {
    if ( !hashtable_seed )
      json_object_seed(0);
    v1 = 0;
    v2 = off_12A258;
    v0[4] = 3;
    *v0 = 0;
    v0[2] = 0;
    v0[1] = 1;
    v3 = (int)v2(64);
    v0[3] = v3;
    if ( v3 )
    {
      v4 = v0[4];
      v5 = v0 + 5;
      v0[5] = v0 + 5;
      v0[6] = v0 + 5;
      v0[7] = v0 + 7;
      v0[8] = v0 + 7;
      v6 = 1 << v4;
      if ( v6 )
      {
        if ( v6 <= 4 )
        {
          v8 = 0;
        }
        else
        {
          v7 = (_DWORD *)v3;
          v8 = ((v6 - 5) & 0xFFFFFFFC) + 4;
          do
          {
            v1 += 4;
            __pld(v7 + 59);
            *v7 = v5;
            v7[1] = v5;
            v7[2] = v5;
            v7[3] = v5;
            v7[4] = v5;
            v7[5] = v5;
            v7[6] = v5;
            v7[7] = v5;
            v7 += 8;
          }
          while ( v1 != v8 );
        }
        v9 = v3 + 8 * v8;
        do
        {
          *(_DWORD *)(v9 + 4) = v5;
          v9 += 8;
          *(_DWORD *)(v3 + 8 * v8++) = v5;
        }
        while ( v8 < v6 );
      }
    }
    else
    {
      v11 = v0;
      v0 = 0;
      jsonp_free(v11);
    }
  }
  return v0;
}
