int __fastcall find_c_map(_DWORD **a1, int a2, _DWORD *a3)
{
  _DWORD **v4; // r10
  _DWORD *v6; // r4
  _DWORD *v7; // r9
  int v8; // r7
  size_t v9; // r6
  void *v10; // r0
  void *v11; // r5
  size_t v12; // r2
  int v13; // r6
  _DWORD *v14; // r3
  int v16; // r4
  size_t v17; // r5
  void *v18; // r0

  if ( !a1 )
    return 0;
  v4 = (_DWORD **)*a1;
  v7 = *a1 + 1;
  v6 = (_DWORD *)**a1;
  while ( 1 )
  {
    if ( v6 == v7 )
      return 0;
    v8 = v6[4];
    v9 = *(_DWORD *)(v8 + 4);
    v10 = malloc(v9);
    v11 = v10;
    v12 = v9;
    if ( v10 )
      memcpy(v10, *(const void **)v8, v9);
    v13 = ((int (__fastcall *)(int, void *, size_t))v4[9])(a2, v11, v12);
    free(v11);
    if ( !v13 )
      break;
    v14 = (_DWORD *)*v6;
    v6 = (_DWORD *)v6[1];
    if ( v13 < 0 )
      v6 = v14;
  }
  v16 = v6[5];
  v17 = *(_DWORD *)(v16 + 4);
  v18 = malloc(v17);
  *a3 = v18;
  if ( v18 )
    memcpy(v18, *(const void **)v16, v17);
  return 1;
}
