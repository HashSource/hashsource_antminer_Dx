int __fastcall hashtable_set(unsigned int *a1, char *a2, int a3)
{
  int v4; // r4
  int v7; // r4
  unsigned int v8; // r9
  _DWORD *v9; // r5
  void *v10; // r0
  int *v11; // r3
  char *v12; // r2
  int v13; // r0
  unsigned int v14; // r1
  char *v15; // r2
  int *v16; // r2
  int v17; // r4
  int *v18; // r9
  int v19; // r1
  int v20; // r1
  int *v21; // r0
  int **v22; // r5
  size_t v23; // r10
  int v24; // r0
  int v25; // r3
  int v26; // r11
  int v27; // r4
  int **v28; // r5
  int v29; // r3
  _DWORD *v30; // r0
  unsigned int *v31; // r2
  unsigned int v32; // r1
  unsigned int v33; // r1
  void *v35; // r0
  int *v36; // r4
  int v37; // r2
  int *v38; // r3
  int v39; // r0
  unsigned int v40; // r1

  v4 = a1[2];
  if ( *a1 >> v4 )
  {
    v7 = v4 + 1;
    v8 = 1 << v7;
    if ( !(8 << v7) )
      return -1;
    v9 = off_1A25E8(8 << v7);
    if ( !v9 )
      return -1;
    v10 = (void *)a1[1];
    if ( v10 )
      off_1A25EC(v10);
    a1[1] = (unsigned int)v9;
    a1[2] = v7;
    v11 = (int *)(a1 + 3);
    if ( v8 )
    {
      if ( v8 <= 4 )
      {
        v14 = 0;
      }
      else
      {
        v12 = (char *)(v9 + 59);
        v13 = 0;
        v14 = ((v8 - 5) & 0xFFFFFFFC) + 4;
        do
        {
          v13 += 4;
          __pld(v12);
          *((_DWORD *)v12 - 58) = v11;
          *((_DWORD *)v12 - 59) = v11;
          v12 += 32;
          *((_DWORD *)v12 - 64) = v11;
          *((_DWORD *)v12 - 65) = v11;
          *((_DWORD *)v12 - 62) = v11;
          *((_DWORD *)v12 - 63) = v11;
          *((_DWORD *)v12 - 60) = v11;
          *((_DWORD *)v12 - 61) = v11;
        }
        while ( v13 != v14 );
      }
      v15 = (char *)&v9[2 * v14];
      do
      {
        *((_DWORD *)v15 + 1) = v11;
        v15 += 8;
        v9[2 * v14++] = v11;
      }
      while ( v8 > v14 );
      v9 = (_DWORD *)a1[1];
    }
    v16 = (int *)a1[4];
    a1[3] = (unsigned int)v11;
    v17 = ~(-1 << v7);
    a1[4] = (unsigned int)v11;
    if ( v16 == v11 )
    {
      v18 = (int *)(a1 + 3);
    }
    else
    {
      do
      {
        while ( 1 )
        {
          v18 = (int *)v16[1];
          v20 = v16[4] & v17;
          v21 = (int *)v9[2 * v20];
          v22 = (int **)&v9[2 * v20];
          if ( v21 == v11 && v11 == v22[1] )
            break;
          v19 = *v21;
          v16[1] = (int)v21;
          *v16 = v19;
          *(_DWORD *)(*v21 + 4) = v16;
          *v21 = (int)v16;
          *v22 = v16;
          v16 = v18;
          v9 = (_DWORD *)a1[1];
          if ( v18 == v11 )
            goto LABEL_20;
        }
        *v16 = a1[3];
        v16[1] = (int)v11;
        *(_DWORD *)(a1[3] + 4) = v16;
        a1[3] = (unsigned int)v16;
        v22[1] = v16;
        *v22 = v16;
        v16 = v18;
        v9 = (_DWORD *)a1[1];
      }
      while ( v18 != v11 );
LABEL_20:
      v17 = ~(-1 << a1[2]);
    }
  }
  else
  {
    v9 = (_DWORD *)a1[1];
    v17 = ~(-1 << v4);
    v18 = (int *)(a1 + 3);
  }
  v23 = strlen(a2);
  v24 = sub_12D418((unsigned __int16 *)a2, v23, hashtable_seed);
  v25 = v24 & v17;
  v26 = v24;
  v27 = v9[2 * (v24 & v17)];
  v28 = (int **)&v9[2 * v25];
  if ( (int *)v27 != v18 || v18 != v28[1] )
  {
    while ( 1 )
    {
      if ( v26 == *(_DWORD *)(v27 + 16) )
      {
        v29 = strcmp((const char *)(v27 + 24), a2);
        if ( !v29 )
          break;
      }
      if ( (int *)v27 == v28[1] )
        goto LABEL_37;
      v27 = *(_DWORD *)(v27 + 4);
    }
    v30 = *(_DWORD **)(v27 + 20);
    if ( v30 )
    {
      if ( v30[1] != -1 )
      {
        v31 = v30 + 1;
        __dmb(0xBu);
        do
        {
          v32 = __ldrex(v31);
          v33 = v32 - 1;
        }
        while ( __strex(v33, v31) );
        if ( !v33 )
        {
          json_delete(v30);
          v29 = 0;
        }
      }
    }
    *(_DWORD *)(v27 + 20) = a3;
    return v29;
  }
LABEL_37:
  v35 = off_1A25E8(v23 + 25);
  v36 = (int *)v35;
  if ( !v35 )
    return -1;
  *((_DWORD *)v35 + 4) = v26;
  strncpy((char *)v35 + 24, a2, v23 + 1);
  v37 = (int)(v36 + 2);
  *v36 = (int)v36;
  v36[2] = (int)(v36 + 2);
  v38 = *v28;
  v36[5] = a3;
  v36[1] = (int)v36;
  v36[3] = (int)(v36 + 2);
  if ( v38 == v18 && v18 == v28[1] )
  {
    *v36 = a1[3];
    v36[1] = (int)v18;
    *(_DWORD *)(a1[3] + 4) = v36;
    a1[3] = (unsigned int)v36;
    v28[1] = v36;
    *v28 = v36;
  }
  else
  {
    *v36 = *v38;
    v36[1] = (int)v38;
    *(_DWORD *)(*v38 + 4) = v36;
    *v38 = (int)v36;
    *v28 = v36;
  }
  v39 = a1[5];
  v40 = *a1;
  v36[3] = (int)(a1 + 5);
  v36[2] = v39;
  *(_DWORD *)(a1[5] + 4) = v37;
  a1[5] = v37;
  *a1 = v40 + 1;
  return 0;
}
