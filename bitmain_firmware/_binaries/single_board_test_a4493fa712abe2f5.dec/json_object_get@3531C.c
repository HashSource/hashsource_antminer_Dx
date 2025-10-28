int __fastcall json_object_get(_DWORD *a1, char *s)
{
  _BOOL4 v2; // r3
  size_t v5; // r0
  int v6; // r0
  int v7; // r5
  int v8; // r6
  _DWORD *v9; // r0
  int v10; // r3
  int v11; // r4
  int v12; // r5

  v2 = a1 == 0;
  if ( !s )
    v2 = 1;
  if ( v2 )
    return 0;
  if ( *a1 )
    return 0;
  v5 = strlen(s);
  v6 = sub_208E0((unsigned __int16 *)s, v5, hashtable_seed);
  v7 = a1[3];
  v8 = v6;
  v9 = a1 + 5;
  v10 = v8 & ~(-1 << a1[4]);
  v11 = *(_DWORD *)(v7 + 8 * v10);
  v12 = v7 + 8 * v10;
  if ( (_DWORD *)v11 == v9 && v11 == *(_DWORD *)(v12 + 4) )
    return 0;
  while ( v8 != *(_DWORD *)(v11 + 16) || strcmp((const char *)(v11 + 24), s) )
  {
    if ( v11 == *(_DWORD *)(v12 + 4) )
      return 0;
    v11 = *(_DWORD *)(v11 + 4);
  }
  return *(_DWORD *)(v11 + 20);
}
