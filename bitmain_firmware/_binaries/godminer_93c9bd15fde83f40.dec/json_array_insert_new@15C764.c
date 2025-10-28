int __fastcall json_array_insert_new(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  _BOOL4 v6; // r3
  unsigned int *v8; // r3
  unsigned int v9; // r2
  unsigned int v10; // r2
  unsigned int v11; // r3
  unsigned int v12; // r1
  char *v13; // r7
  unsigned int v14; // r8
  unsigned int v15; // r1
  char *v16; // r0
  unsigned int v17; // r8
  int v18; // r3
  unsigned int v19; // r0

  if ( !a3 )
    return -1;
  if ( !a1 )
    goto LABEL_10;
  v6 = a3 == a1;
  if ( *a1 != 1 )
    v6 = 1;
  if ( v6 || (v11 = a1[3], v11 < a2) )
  {
LABEL_10:
    if ( a3[1] != -1 )
    {
      v8 = a3 + 1;
      __dmb(0xBu);
      do
      {
        v9 = __ldrex(v8);
        v10 = v9 - 1;
      }
      while ( __strex(v10, v8) );
      if ( !v10 )
      {
        json_delete(a3);
        return -1;
      }
    }
    return -1;
  }
  v12 = a1[2];
  v13 = (char *)a1[4];
  if ( v11 + 1 <= v12 )
  {
    if ( !v13 )
      goto LABEL_15;
    goto LABEL_26;
  }
  v14 = 2 * v12;
  v15 = v12 + 1;
  if ( v14 < v15 )
    v14 = v15;
  if ( !(4 * v14) || (v16 = (char *)off_1A25E8(4 * v14)) == 0 || (a1[2] = v14, a1[4] = v16, !v13) )
  {
LABEL_15:
    if ( a3[1] != -1 )
    {
      sub_84ED0(a3);
      return -1;
    }
    return -1;
  }
  v17 = 4 * a2;
  if ( v16 == v13 )
  {
    v11 = a1[3];
LABEL_26:
    v19 = 4 * (a2 + 1);
    v17 = v19 - 4;
    memmove(&v13[v19], &v13[v19 - 4], 4 * (v11 - a2));
    goto LABEL_25;
  }
  memcpy(v16, v13, 4 * a2);
  memcpy((void *)(a1[4] + v17 + 4), &v13[v17], 4 * (a1[3] - a2));
  jsonp_free(v13);
LABEL_25:
  v18 = a1[3] + 1;
  *(_DWORD *)(a1[4] + v17) = a3;
  a1[3] = v18;
  return 0;
}
