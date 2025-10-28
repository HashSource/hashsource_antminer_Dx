int __fastcall json_object_clear(_DWORD *a1)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r5
  _DWORD *v4; // r0
  _DWORD *v5; // r7
  unsigned int *v6; // r3
  unsigned int v7; // r2
  unsigned int v8; // r2
  int v9; // r0
  int i; // r3
  _DWORD *v11; // r1

  if ( !a1 || *a1 )
    return -1;
  v2 = (_DWORD *)a1[6];
  v3 = a1 + 5;
  if ( v2 != a1 + 5 )
  {
    do
    {
      v4 = (_DWORD *)v2[5];
      v5 = (_DWORD *)v2[1];
      if ( v4 )
      {
        v6 = v4 + 1;
        if ( v4[1] != -1 )
        {
          __dmb(0xBu);
          do
          {
            v7 = __ldrex(v6);
            v8 = v7 - 1;
          }
          while ( __strex(v8, v6) );
          if ( !v8 )
            json_delete(v4);
        }
      }
      off_1A25EC(v2);
      v2 = v5;
    }
    while ( v5 != v3 );
  }
  v9 = 1 << a1[4];
  if ( v9 )
  {
    for ( i = 0; i != v9; ++i )
    {
      v11 = (_DWORD *)(a1[3] + 8 * i);
      v11[1] = v3;
      *v11 = v3;
    }
  }
  a1[6] = v3;
  a1[5] = v3;
  a1[8] = a1 + 7;
  a1[7] = a1 + 7;
  a1[2] = 0;
  return 0;
}
