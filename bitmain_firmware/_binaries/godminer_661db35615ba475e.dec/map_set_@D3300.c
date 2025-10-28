int __fastcall map_set_(void **a1, char *s, const void *a3, size_t a4)
{
  int v4; // r5
  const char *v5; // r4
  int v7; // r10
  int v8; // r3
  int v9; // t1
  int v10; // r6
  _DWORD *v11; // r8
  int v12; // r11
  int v13; // r7
  size_t v15; // r0
  int v16; // r7
  int *v17; // r3
  size_t v18; // r2
  int v19; // r2
  int v20; // t1
  char *v21; // r0
  char *v22; // r2
  int *v23; // r3
  _DWORD *v24; // r0
  int v25; // r5
  size_t v26; // r7
  _DWORD *v27; // r4
  _DWORD *v28; // r1
  _DWORD *v29; // t1
  _DWORD *v30; // r12
  void *v31; // r0
  void *v32; // r10
  _DWORD *v33; // r1
  int v34; // r2
  int v35; // r6
  size_t v36; // r0
  size_t v39; // [sp+Ch] [bp-8h]
  int *v40; // [sp+Ch] [bp-8h]
  size_t v41; // [sp+Ch] [bp-8h]

  v4 = (unsigned __int8)*s;
  v5 = s;
  if ( *s )
  {
    v8 = (unsigned __int8)*s;
    v7 = 5381;
    do
    {
      v7 = v8 ^ (33 * v7);
      v9 = (unsigned __int8)*++s;
      v8 = v9;
    }
    while ( v9 );
  }
  else
  {
    v7 = 5381;
  }
  v10 = (int)a1[1];
  if ( !v10 )
  {
    v36 = strlen(v5);
    v16 = (~(_BYTE)v36 & 3) + v36 + 1;
    v41 = v36 + 1;
    v17 = (int *)malloc(a4 + 12 + v16);
    if ( v17 )
    {
      v11 = *a1;
      v18 = v41;
      goto LABEL_14;
    }
    return -1;
  }
  v11 = *a1;
  v12 = *((_DWORD *)*a1 + ((v10 - 1) & v7));
  if ( v12 )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)v12 == v7 )
      {
        v13 = strcmp((const char *)(v12 + 12), v5);
        if ( !v13 )
          break;
      }
      v12 = *(_DWORD *)(v12 + 8);
      if ( !v12 )
        goto LABEL_13;
    }
    memcpy(*(void **)(v12 + 4), a3, a4);
    return v13;
  }
LABEL_13:
  v15 = strlen(v5);
  v16 = (~(_BYTE)v15 & 3) + v15 + 1;
  v39 = v15 + 1;
  v17 = (int *)malloc(a4 + 12 + v16);
  v18 = v39;
  if ( !v17 )
    return -1;
LABEL_14:
  v40 = v17;
  memcpy(v17 + 3, v5, v18);
  v19 = 5381;
  if ( v4 )
  {
    do
    {
      v19 = (33 * v19) ^ v4;
      v20 = *(unsigned __int8 *)++v5;
      v4 = v20;
    }
    while ( v20 );
  }
  *v40 = v19;
  v21 = (char *)v40 + v16 + 12;
  v40[1] = (int)v21;
  memcpy(v21, a3, a4);
  v22 = (char *)a1[2];
  v23 = v40;
  if ( v10 > (unsigned int)v22 )
    goto LABEL_33;
  v24 = &v11[v10];
  if ( v10 )
  {
    v25 = 2 * v10;
    v26 = 8 * v10;
  }
  else
  {
    v26 = 4;
    v25 = 1;
  }
  v27 = 0;
  while ( v24 != v11 )
  {
    v29 = (_DWORD *)*--v24;
    v28 = v29;
    if ( v29 )
    {
      while ( 1 )
      {
        v30 = (_DWORD *)v28[2];
        v28[2] = v27;
        v27 = v28;
        if ( !v30 )
          break;
        v28 = v30;
      }
      v27 = v28;
    }
  }
  v31 = realloc(v24, v26);
  v32 = v31;
  v23 = v40;
  if ( !v31 )
  {
    if ( !*a1 || (memset(*a1, 0, 4 * (_DWORD)a1[1]), v23 = v40, !v27) )
    {
LABEL_36:
      v13 = -1;
      free(v23);
      return v13;
    }
LABEL_29:
    v10 = (int)a1[1];
    v11 = *a1;
    do
    {
      v33 = (_DWORD *)v27[2];
      v34 = *v27 & (v10 - 1);
      v27[2] = v11[v34];
      v11[v34] = v27;
      v27 = v33;
    }
    while ( v33 );
    if ( v32 )
      goto LABEL_32;
    goto LABEL_36;
  }
  *a1 = v31;
  a1[1] = (void *)v25;
  memset(v31, 0, v26);
  v23 = v40;
  if ( v27 )
    goto LABEL_29;
  v10 = (int)a1[1];
  v11 = *a1;
LABEL_32:
  v22 = (char *)a1[2];
LABEL_33:
  v35 = (v10 - 1) & *v23;
  v23[2] = v11[v35];
  v11[v35] = v23;
  a1[2] = v22 + 1;
  return 0;
}
