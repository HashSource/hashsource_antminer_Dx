int __fastcall sub_D1A38(unsigned int *a1, const void *a2, char *s)
{
  size_t v5; // r0
  int v6; // r0
  int v7; // r5
  int v8; // r6
  int v9; // r3
  int v10; // r4
  int v11; // r5

  snprintf(s, 0xBu, "%p", a2);
  v5 = strlen(s);
  v6 = sub_208E0((unsigned __int16 *)s, v5, hashtable_seed);
  v7 = a1[1];
  v8 = v6;
  v9 = v6 & ~(-1 << a1[2]);
  v10 = *(_DWORD *)(v7 + 8 * v9);
  v11 = v7 + 8 * v9;
  if ( (unsigned int *)v10 == a1 + 3 && v10 == *(_DWORD *)(v11 + 4) )
    return hashtable_set(a1, s, (int)&unk_12A270);
  while ( v8 != *(_DWORD *)(v10 + 16) || strcmp((const char *)(v10 + 24), s) )
  {
    if ( v10 == *(_DWORD *)(v11 + 4) )
      return hashtable_set(a1, s, (int)&unk_12A270);
    v10 = *(_DWORD *)(v10 + 4);
  }
  if ( !*(_DWORD *)(v10 + 20) )
    return hashtable_set(a1, s, (int)&unk_12A270);
  else
    return -1;
}
