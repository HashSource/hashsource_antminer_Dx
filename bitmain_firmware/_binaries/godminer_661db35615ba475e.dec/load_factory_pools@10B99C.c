char *load_factory_pools()
{
  int v0; // r4
  int v1; // r1
  bool v2; // cc
  char *v3; // r10
  int v4; // r2
  const char *v5; // r11
  int v6; // r10
  void *v7; // r0
  char *v8; // r0
  int v9; // r3
  int v10; // r2
  int v11; // r3
  int v12; // r10
  void *v13; // r0
  char *result; // r0
  _DWORD v15[24]; // [sp+0h] [bp-C4h] BYREF
  _BYTE v16[100]; // [sp+60h] [bp-64h] BYREF

  memcpy(v16, off_1763BC, 0x60u);
  v0 = 0;
  memcpy(v15, &off_17641C, sizeof(v15));
  do
  {
    v1 = dword_196B90 + 1;
    v2 = ++dword_196B90 <= total_pools;
    v3 = *(char **)&v16[12 * opt_algo + 4 * v0];
    if ( !v2 )
    {
      add_pool();
      v1 = dword_196B90;
    }
    sub_108804(
      (void **)(*(_DWORD *)(pools + 4 * (v1 + 0x3FFFFFFF)) + 8),
      (_BYTE *)(*(_DWORD *)(pools + 4 * (v1 + 0x3FFFFFFF)) + 24),
      v3);
    v4 = dword_196B8C + 1;
    v2 = ++dword_196B8C <= total_pools;
    v5 = (const char *)v15[3 * opt_algo + v0];
    if ( !v2 )
    {
      add_pool();
      v4 = dword_196B8C;
    }
    v6 = *(_DWORD *)(pools + 4 * (v4 + 0x3FFFFFFF));
    v7 = *(void **)(v6 + 12);
    if ( v7 )
      free(v7);
    v8 = _strdup(v5);
    v9 = dword_196B88;
    v10 = total_pools;
    *(_DWORD *)(v6 + 12) = v8;
    v11 = v9 + 1;
    dword_196B88 = v11;
    if ( v11 > v10 )
    {
      add_pool();
      v11 = dword_196B88;
    }
    ++v0;
    v12 = *(_DWORD *)(pools + 4 * (v11 + 0x3FFFFFFF));
    v13 = *(void **)(v12 + 16);
    if ( v13 )
      free(v13);
    result = _strdup("x");
    *(_DWORD *)(v12 + 16) = result;
  }
  while ( v0 != 3 );
  return result;
}
