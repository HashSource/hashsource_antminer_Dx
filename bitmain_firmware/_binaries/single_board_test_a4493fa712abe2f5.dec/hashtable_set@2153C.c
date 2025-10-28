int __fastcall hashtable_set(unsigned int *a1, char *a2, int a3)
{
  int v4; // r4
  int v7; // r4
  unsigned int v8; // r9
  int **v9; // r5
  void *v10; // r0
  int *v11; // r3
  int **v12; // r2
  int v13; // r0
  unsigned int v14; // r1
  int **v15; // r2
  int *v16; // r2
  int v17; // r4
  int *v18; // r9
  int v19; // r1
  int *v20; // r0
  int **v21; // r5
  size_t v22; // r10
  int v23; // r0
  int v24; // r3
  int v25; // r11
  int *v26; // r4
  int **v27; // r5
  int v28; // r3
  _DWORD *v29; // r0
  unsigned int *v30; // r2
  unsigned int v31; // r1
  unsigned int v32; // r1
  void *v34; // r0
  int *v35; // r4
  int v36; // r2
  int *v37; // r3
  int v38; // r0
  unsigned int v39; // r1

  v4 = a1[2];
  if ( *a1 >> v4 )
  {
    v7 = v4 + 1;
    v8 = 1 << v7;
    if ( !(8 << v7) )
      return -1;
    v9 = (int **)off_12A258(8 << v7);
    if ( !v9 )
      return -1;
    v10 = (void *)a1[1];
    if ( v10 )
      off_12A254(v10);
    a1[1] = (unsigned int)v9;
    v11 = (int *)(a1 + 3);
    a1[2] = v7;
    if ( v8 )
    {
      if ( v8 <= 4 )
      {
        v14 = 0;
      }
      else
      {
        v12 = v9;
        v13 = 0;
        v14 = ((v8 - 5) & 0xFFFFFFFC) + 4;
        do
        {
          v13 += 4;
          __pld(v12 + 59);
          *v12 = v11;
          v12[1] = v11;
          v12[2] = v11;
          v12[3] = v11;
          v12[4] = v11;
          v12[5] = v11;
          v12[6] = v11;
          v12[7] = v11;
          v12 += 8;
        }
        while ( v13 != v14 );
      }
      v15 = &v9[2 * v14];
      do
      {
        v15[1] = v11;
        v15 += 2;
        v9[2 * v14++] = v11;
      }
      while ( v8 > v14 );
      v9 = (int **)a1[1];
    }
    v16 = (int *)a1[4];
    a1[3] = (unsigned int)v11;
    a1[4] = (unsigned int)v11;
    v17 = ~(-1 << v7);
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
          v19 = v16[4] & v17;
          v20 = v9[2 * v19];
          v21 = &v9[2 * v19];
          if ( v20 == v11 && v11 == v21[1] )
            break;
          *v16 = *v20;
          v16[1] = (int)v20;
          *(_DWORD *)(*v20 + 4) = v16;
          *v20 = (int)v16;
          *v21 = v16;
          v16 = v18;
          v9 = (int **)a1[1];
          if ( v18 == v11 )
            goto LABEL_20;
        }
        *v16 = a1[3];
        v16[1] = (int)v11;
        *(_DWORD *)(a1[3] + 4) = v16;
        a1[3] = (unsigned int)v16;
        *v21 = v16;
        v21[1] = v16;
        v16 = v18;
        v9 = (int **)a1[1];
      }
      while ( v18 != v11 );
LABEL_20:
      v17 = ~(-1 << a1[2]);
    }
  }
  else
  {
    v9 = (int **)a1[1];
    v18 = (int *)(a1 + 3);
    v17 = ~(-1 << v4);
  }
  v22 = strlen(a2);
  v23 = sub_208E0((unsigned __int16 *)a2, v22, hashtable_seed);
  v24 = v23 & v17;
  v25 = v23;
  v26 = v9[2 * (v23 & v17)];
  v27 = &v9[2 * v24];
  if ( v26 != v18 || v18 != v27[1] )
  {
    while ( 1 )
    {
      if ( v25 == v26[4] )
      {
        v28 = strcmp((const char *)v26 + 24, a2);
        if ( !v28 )
          break;
      }
      if ( v26 == v27[1] )
        goto LABEL_37;
      v26 = (int *)v26[1];
    }
    v29 = (_DWORD *)v26[5];
    if ( v29 )
    {
      if ( v29[1] != -1 )
      {
        v30 = v29 + 1;
        __dmb(0xBu);
        do
        {
          v31 = __ldrex(v30);
          v32 = v31 - 1;
        }
        while ( __strex(v32, v30) );
        if ( !v32 )
        {
          json_delete(v29);
          v28 = 0;
        }
      }
    }
    v26[5] = a3;
    return v28;
  }
LABEL_37:
  v34 = off_12A258(v22 + 25);
  v35 = (int *)v34;
  if ( !v34 )
    return -1;
  *((_DWORD *)v34 + 4) = v25;
  strncpy((char *)v34 + 24, a2, v22 + 1);
  v36 = (int)(v35 + 2);
  *v35 = (int)v35;
  v35[2] = (int)(v35 + 2);
  v37 = *v27;
  v35[5] = a3;
  v35[1] = (int)v35;
  v35[3] = (int)(v35 + 2);
  if ( v37 == v18 && v18 == v27[1] )
  {
    *v35 = a1[3];
    v35[1] = (int)v18;
    *(_DWORD *)(a1[3] + 4) = v35;
    a1[3] = (unsigned int)v35;
    *v27 = v35;
    v27[1] = v35;
  }
  else
  {
    *v35 = *v37;
    v35[1] = (int)v37;
    *(_DWORD *)(*v37 + 4) = v35;
    *v37 = (int)v35;
    *v27 = v35;
  }
  v38 = a1[5];
  v39 = *a1;
  v35[3] = (int)(a1 + 5);
  v35[2] = v38;
  *(_DWORD *)(a1[5] + 4) = v36;
  a1[5] = v36;
  *a1 = v39 + 1;
  return 0;
}
