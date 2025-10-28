void __fastcall hashtable_close(_DWORD *a1)
{
  _DWORD *v1; // r7
  _DWORD *v2; // r4
  _DWORD *v4; // r0
  _DWORD *v5; // r5
  unsigned int *v6; // r3
  unsigned int v7; // r2
  unsigned int v8; // r2
  void *v9; // r0

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
      off_190550(v2);
      v2 = v5;
    }
    while ( v5 != v1 );
  }
  v9 = (void *)a1[1];
  if ( v9 )
    off_190550(v9);
}
