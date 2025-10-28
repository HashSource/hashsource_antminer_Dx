int __fastcall find_c_map(__int64 ****a1, int a2, _DWORD *a3)
{
  __int64 ***v4; // r10
  __int64 **v6; // r4
  __int64 **v7; // r9
  __int64 *v8; // r6
  size_t v9; // r7
  void *v10; // r0
  void *v11; // r5
  int v12; // r6
  __int64 v13; // kr00_8
  __int64 *v15; // r4
  size_t v16; // r5
  void *v17; // r0

  if ( !a1 )
    return 0;
  v4 = *a1;
  v7 = (__int64 **)(*a1 + 1);
  v6 = **a1;
  while ( 1 )
  {
    if ( v6 == v7 )
      return 0;
    v8 = v6[4];
    v9 = *((_DWORD *)v8 + 1);
    v10 = malloc(v9);
    v11 = v10;
    if ( v10 )
      memcpy(v10, *(const void **)v8, v9);
    v12 = ((int (__fastcall *)(int, void *))v4[9])(a2, v11);
    free(v11);
    if ( !v12 )
      break;
    v13 = *(_QWORD *)v6;
    v6 = (__int64 **)v6[1];
    if ( v12 < 0 )
      v6 = (__int64 **)v13;
  }
  v15 = v6[5];
  v16 = *((_DWORD *)v15 + 1);
  v17 = malloc(v16);
  *a3 = v17;
  if ( v17 )
    memcpy(v17, *(const void **)v15, v16);
  return 1;
}
