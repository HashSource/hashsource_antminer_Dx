int __fastcall json_array_append_new(int a1, _DWORD *a2)
{
  _BOOL4 v4; // r3
  unsigned int *v6; // r3
  unsigned int v7; // r2
  unsigned int v8; // r2
  __int64 v9; // r2
  void *v10; // r6
  int v11; // r3
  unsigned int v12; // r7
  unsigned int v13; // r2
  void *v14; // r0
  int v15; // r2

  if ( !a2 )
    return -1;
  if ( !a1 )
    goto LABEL_10;
  v4 = a2 == (_DWORD *)a1;
  if ( *(_DWORD *)a1 != 1 )
    v4 = 1;
  if ( v4 )
  {
LABEL_10:
    if ( a2[1] != -1 )
    {
      v6 = a2 + 1;
      __dmb(0xBu);
      do
      {
        v7 = __ldrex(v6);
        v8 = v7 - 1;
      }
      while ( __strex(v8, v6) );
      if ( !v8 )
      {
        json_delete(a2);
        return -1;
      }
    }
    return -1;
  }
  v9 = *(_QWORD *)(a1 + 8);
  v10 = *(void **)(a1 + 16);
  if ( HIDWORD(v9) + 1 > (unsigned int)v9 )
  {
    v12 = 2 * v9;
    v13 = v9 + 1;
    if ( v12 < v13 )
      v12 = v13;
    if ( !(4 * v12) )
      goto LABEL_20;
    v14 = off_1A25E8(4 * v12);
    if ( !v14 )
      goto LABEL_20;
    v15 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a1 + 16) = v14;
    *(_DWORD *)(a1 + 8) = v12;
    memcpy(v14, v10, 4 * v15);
    jsonp_free(v10);
    v10 = *(void **)(a1 + 16);
  }
  if ( v10 )
  {
    v11 = *(_DWORD *)(a1 + 12);
    *((_DWORD *)v10 + v11) = a2;
    *(_DWORD *)(a1 + 12) = v11 + 1;
    return 0;
  }
LABEL_20:
  if ( a2[1] == -1 )
    return -1;
  sub_84ED0(a2);
  return -1;
}
