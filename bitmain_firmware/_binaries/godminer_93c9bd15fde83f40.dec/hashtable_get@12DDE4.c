int __fastcall hashtable_get(int a1, char *s)
{
  size_t v4; // r0
  int v5; // r0
  int v6; // r5
  int v7; // r3
  int v8; // r6
  int v9; // r2
  int v10; // r4
  int v11; // r5

  v4 = strlen(s);
  v5 = sub_12D418((unsigned __int16 *)s, v4, hashtable_seed);
  v6 = *(_DWORD *)(a1 + 4);
  v7 = a1 + 12;
  v8 = v5;
  v9 = v5 & ~(-1 << *(_DWORD *)(a1 + 8));
  v10 = *(_DWORD *)(v6 + 8 * v9);
  v11 = v6 + 8 * v9;
  if ( v10 == v7 && v10 == *(_DWORD *)(v11 + 4) )
    return 0;
  while ( v8 != *(_DWORD *)(v10 + 16) || strcmp((const char *)(v10 + 24), s) )
  {
    if ( v10 == *(_DWORD *)(v11 + 4) )
      return 0;
    v10 = *(_DWORD *)(v10 + 4);
  }
  return *(_DWORD *)(v10 + 20);
}
