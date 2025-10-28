_DWORD *__fastcall find_c_rb(int a1, int a2)
{
  _DWORD *v4; // r4
  _DWORD *v5; // r8
  int v6; // r7
  size_t v7; // r6
  void *v8; // r0
  void *v9; // r5
  size_t v10; // r2
  int v11; // r6
  _DWORD *v12; // r3

  v5 = (_DWORD *)(a1 + 4);
  v4 = *(_DWORD **)a1;
  while ( v4 != v5 )
  {
    v6 = v4[4];
    v7 = *(_DWORD *)(v6 + 4);
    v8 = malloc(v7);
    v9 = v8;
    v10 = v7;
    if ( v8 )
      memcpy(v8, *(const void **)v6, v7);
    v11 = (*(int (__fastcall **)(int, void *, size_t))(a1 + 36))(a2, v9, v10);
    free(v9);
    if ( !v11 )
      return v4;
    v12 = (_DWORD *)*v4;
    v4 = (_DWORD *)v4[1];
    if ( v11 < 0 )
      v4 = v12;
  }
  return 0;
}
