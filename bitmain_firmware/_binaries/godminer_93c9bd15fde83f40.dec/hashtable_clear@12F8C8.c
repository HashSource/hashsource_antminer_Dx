int __fastcall hashtable_clear(_DWORD *a1)
{
  _DWORD *v1; // r5
  _DWORD *v2; // r4
  _DWORD *v4; // r0
  _DWORD *v5; // r7
  unsigned int *v6; // r3
  unsigned int v7; // r2
  unsigned int v8; // r2
  int result; // r0
  int i; // r3
  _DWORD *v11; // r1

  v1 = a1 + 3;
  v2 = (_DWORD *)a1[4];
  if ( v2 != a1 + 3 )
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
    while ( v5 != v1 );
  }
  result = 1 << a1[2];
  if ( result )
  {
    for ( i = 0; i != result; ++i )
    {
      v11 = (_DWORD *)(a1[1] + 8 * i);
      v11[1] = v1;
      *v11 = v1;
    }
  }
  a1[4] = v1;
  a1[3] = v1;
  a1[6] = a1 + 5;
  a1[5] = a1 + 5;
  *a1 = 0;
  return result;
}
