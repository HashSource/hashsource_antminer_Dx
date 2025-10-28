int __fastcall hashtable_del(_DWORD *a1, char *s)
{
  char *v3; // r4
  size_t v5; // r0
  int v6; // r9
  int v7; // r5
  char *v8; // r8
  char *v9; // r10
  char *i; // r4
  int v11; // r3
  int v12; // r2
  int v13; // r2
  int v14; // r3
  _DWORD *v15; // r0
  unsigned int *v17; // r3
  unsigned int v18; // r2
  unsigned int v19; // r2
  int v20; // [sp+4h] [bp-10h]
  int v21; // [sp+8h] [bp-Ch]
  _DWORD *v22; // [sp+Ch] [bp-8h]

  v3 = (char *)(a1 + 3);
  v22 = a1 + 3;
  v5 = strlen(s);
  v6 = sub_208E0((unsigned __int16 *)s, v5, hashtable_seed);
  v21 = a1[1];
  v7 = v6 & ~(-1 << a1[2]);
  v8 = *(char **)(v21 + 8 * v7);
  v20 = v21 + 8 * v7;
  v9 = *(char **)(v20 + 4);
  if ( v8 == v3 && v8 == v9 )
    return -1;
  for ( i = *(char **)(v21 + 8 * v7); v6 != *((_DWORD *)i + 4) || strcmp(i + 24, s); i = (char *)*((_DWORD *)i + 1) )
  {
    if ( i == v9 )
      return -1;
  }
  if ( i == v8 )
  {
    if ( i == v9 )
    {
      *(_DWORD *)(v20 + 4) = v22;
      *(_DWORD *)(v21 + 8 * v7) = v22;
      v12 = *((_DWORD *)i + 1);
    }
    else
    {
      v12 = *((_DWORD *)i + 1);
      *(_DWORD *)(v21 + 8 * v7) = v12;
    }
    v11 = *(_DWORD *)i;
  }
  else
  {
    v11 = *(_DWORD *)i;
    if ( i == v9 )
      *(_DWORD *)(v20 + 4) = v11;
    v12 = *((_DWORD *)i + 1);
  }
  *(_DWORD *)(v11 + 4) = v12;
  v13 = *((_DWORD *)i + 3);
  **((_DWORD **)i + 1) = v11;
  v14 = *((_DWORD *)i + 2);
  v15 = (_DWORD *)*((_DWORD *)i + 5);
  *(_DWORD *)(v14 + 4) = v13;
  **((_DWORD **)i + 3) = v14;
  if ( v15 && v15[1] != -1 )
  {
    v17 = v15 + 1;
    __dmb(0xBu);
    do
    {
      v18 = __ldrex(v17);
      v19 = v18 - 1;
    }
    while ( __strex(v19, v17) );
    if ( !v19 )
      json_delete(v15);
  }
  off_12A254(i);
  --*a1;
  return 0;
}
