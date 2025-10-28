int __fastcall exists_c_map(__int64 ****a1, int a2)
{
  __int64 ***v3; // r10
  __int64 **v4; // r4
  __int64 **v5; // r9
  __int64 *v6; // r6
  size_t v7; // r7
  void *v8; // r0
  void *v9; // r5
  int v10; // r6
  __int64 v11; // kr00_8

  if ( !a1 )
    return 0;
  v3 = *a1;
  v5 = (__int64 **)(*a1 + 1);
  v4 = **a1;
  while ( 1 )
  {
    if ( v4 == v5 )
      return 0;
    v6 = v4[4];
    v7 = *((_DWORD *)v6 + 1);
    v8 = malloc(v7);
    v9 = v8;
    if ( v8 )
      memcpy(v8, *(const void **)v6, v7);
    v10 = ((int (__fastcall *)(int, void *))v3[9])(a2, v9);
    free(v9);
    if ( !v10 )
      break;
    v11 = *(_QWORD *)v4;
    v4 = (__int64 **)v4[1];
    if ( v10 < 0 )
      v4 = (__int64 **)v11;
  }
  return 1;
}
