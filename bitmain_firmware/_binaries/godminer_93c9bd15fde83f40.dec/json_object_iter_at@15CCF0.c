int __fastcall json_object_iter_at(_DWORD *a1, char *s)
{
  _BOOL4 v2; // r4
  size_t v5; // r0
  int v6; // r6
  int v7; // r5
  _DWORD *v8; // r0
  int v9; // r3
  int v10; // r4
  int v11; // r5

  v2 = a1 == 0;
  if ( !s )
    v2 = 1;
  if ( v2 )
    return 0;
  if ( *a1 )
    return 0;
  v5 = strlen(s);
  v6 = sub_12D418((unsigned __int16 *)s, v5, hashtable_seed);
  v7 = a1[3];
  v8 = a1 + 5;
  v9 = v6 & ~(-1 << a1[4]);
  v10 = *(_DWORD *)(v7 + 8 * v9);
  v11 = v7 + 8 * v9;
  if ( (_DWORD *)v10 == v8 && v10 == *(_DWORD *)(v11 + 4) )
    return 0;
  while ( v6 != *(_DWORD *)(v10 + 16) || strcmp((const char *)(v10 + 24), s) )
  {
    if ( v10 == *(_DWORD *)(v11 + 4) )
      return 0;
    v10 = *(_DWORD *)(v10 + 4);
  }
  return v10 + 8;
}
