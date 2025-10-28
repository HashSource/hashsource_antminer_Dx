int __fastcall graph_add_edge_ae(unsigned __int64 a1, int a2)
{
  unsigned int v2; // r6
  _DWORD *v4; // lr
  int v5; // r12
  int v6; // r5
  unsigned int v7; // r4
  unsigned __int64 v8; // r2
  int v9; // r3
  int v10; // r6
  unsigned int v11; // lr
  int v12; // r5
  char *v13; // r8
  int v14; // r9
  unsigned int v15; // r6
  unsigned int v16; // r4
  unsigned int v17; // r12
  unsigned __int64 v18; // r2
  int v19; // r1
  char *v20; // r3
  bool v21; // cf
  int v22; // t1
  const char *v23; // r0
  unsigned int v24; // r2
  int v25; // t1
  int v26; // r3
  int v27; // r12
  unsigned int v28; // r9
  int v29; // r1
  int v30; // r12
  unsigned int *v31; // r9
  unsigned int v32; // r3
  int v33; // t1
  unsigned int v34; // r1
  int v35; // r8
  unsigned __int64 *v36; // r0
  unsigned __int64 k; // r4
  unsigned int v38; // r2
  unsigned int v39; // lr
  int v40; // r8
  unsigned __int64 *v41; // r12
  unsigned __int64 v42; // r4
  unsigned __int64 v43; // r4
  unsigned int v44; // r3
  unsigned int v45; // lr
  int v46; // r3
  _DWORD *v47; // r4
  int v48; // r6
  int v49; // t1
  int v50; // t1
  unsigned int v51; // r2
  int v52; // r4
  int v53; // r0
  _DWORD *v54; // r12
  char *v55; // r0
  unsigned int v56; // r6
  unsigned int v57; // r5
  int v58; // r3
  unsigned int v59; // r4
  unsigned int *v60; // r1
  unsigned int v61; // r5
  unsigned int v62; // r6
  unsigned int *v63; // r9
  int v64; // r12
  unsigned int v65; // r3
  int v66; // t1
  unsigned int v67; // r1
  int v68; // r8
  unsigned __int64 *v69; // r0
  unsigned __int64 i; // r4
  unsigned int v71; // r2
  unsigned __int64 j; // r4
  unsigned int v74; // [sp+0h] [bp-1Ch]
  int v75; // [sp+4h] [bp-18h]
  int v76; // [sp+8h] [bp-14h]
  _DWORD *v77; // [sp+Ch] [bp-10h]
  unsigned int v78; // [sp+10h] [bp-Ch]
  char *v79; // [sp+14h] [bp-8h]

  v74 = 2 * HIDWORD(a1);
  if ( !(2 * HIDWORD(a1)) )
    return a1;
  v2 = 2 * HIDWORD(a1);
  v76 = a1;
  v75 = (_DWORD)a1 << 11;
  v77 = &us[512 * (_DWORD)a1];
  v4 = v77 - 1;
  v5 = 0;
  v6 = cuckoo[(_DWORD)a1];
  do
  {
    v7 = v2 >> 22;
    ++v5;
    v4[1] = v2;
    ++v4;
    v8 = *(_QWORD *)(v6 + 8 * (v2 >> 22));
    if ( !v8 )
      goto LABEL_9;
    a1 = v8 >> 30;
    if ( v2 != v8 >> 30 )
    {
      while ( 1 )
      {
        v7 = (unsigned __int8)(v7 + 1);
        v8 = *(_QWORD *)(v6 + 8 * v7);
        if ( !v8 )
          break;
        a1 = v8 >> 30;
        if ( v8 >> 30 == v2 )
          goto LABEL_22;
      }
LABEL_9:
      v9 = v6;
      goto LABEL_10;
    }
LABEL_22:
    v2 = v8 & 0x3FFFFFFF;
    if ( (v8 & 0x3FFFFFFF) == 0 )
      goto LABEL_9;
  }
  while ( v5 != 256 );
  v19 = 255;
  v20 = (char *)(v77 + 256);
  do
  {
    v25 = *((_DWORD *)v20 - 1);
    v20 -= 4;
    if ( v25 == v2 )
    {
      v24 = v74;
      LOWORD(v23) = 26488;
      goto LABEL_29;
    }
    v21 = v19-- != 0;
  }
  while ( v21 );
  LODWORD(a1) = puts("\nWARNINIG: maximum path length exceeded");
  v5 = 0;
  v9 = cuckoo[v76];
LABEL_10:
  v10 = 2 * a2;
  v11 = 0;
  v12 = v9;
  v13 = (char *)&vs[-1] + v75;
  v14 = v5;
  v15 = v10 | 1;
  v79 = (char *)vs + v75;
  v78 = v15;
  while ( 1 )
  {
    v16 = v15 >> 22;
    *((_DWORD *)v13 + 1) = v15;
    v13 += 4;
    v17 = v11 + 1;
    v18 = *(_QWORD *)(v12 + 8 * (v15 >> 22));
    if ( !v18 )
      break;
    while ( 1 )
    {
      a1 = v18 >> 30;
      if ( v18 >> 30 == v15 )
        break;
      v16 = (unsigned __int8)(v16 + 1);
      v18 = *(_QWORD *)(v12 + 8 * v16);
      if ( !v18 )
        goto LABEL_30;
    }
    v15 = v18 & 0x3FFFFFFF;
    if ( (v18 & 0x3FFFFFFF) == 0 )
      break;
    ++v11;
    if ( v17 == 256 )
    {
      v19 = 255;
      v20 = v79 + 1024;
      while ( 1 )
      {
        v22 = *((_DWORD *)v20 - 1);
        v20 -= 4;
        if ( v22 == v15 )
          break;
        v21 = v19-- != 0;
        if ( !v21 )
        {
          LODWORD(a1) = j_puts("\nWARNINIG: maximum path length exceeded");
          return a1;
        }
      }
      LOWORD(v23) = (unsigned __int16)"illegal %4d-cycle from node %d\n";
      v24 = v78;
LABEL_29:
      HIWORD(v23) = (unsigned int)"illegal %4d-cycle from node %d\n" >> 16;
      printf(v23, 256 - v19, v24, v20, v74);
      exit(0);
    }
  }
LABEL_30:
  v26 = v12;
  v27 = v14;
  if ( !v14 )
    return a1;
  LODWORD(a1) = v14 - 1;
  HIDWORD(a1) = v76 << 9;
  v28 = (v76 << 9) + v11;
  if ( us[512 * v76 - 1 + v27] != vs[v28] )
  {
    if ( (unsigned int)a1 >= v11 )
    {
      if ( v11 )
      {
        v63 = &vs[v28];
        v64 = v12;
        do
        {
          v65 = *v63;
          v66 = *--v63;
          v67 = v65 >> 22;
          v68 = v66 | (v65 << 30);
          v69 = (unsigned __int64 *)(v64 + 8 * (v65 >> 22));
          for ( i = *v69; *v69; i = *v69 )
          {
            if ( v65 == i >> 30 )
              break;
            v67 = (unsigned __int8)(v67 + 1);
            v69 = (unsigned __int64 *)(v64 + 8 * v67);
          }
          *(_DWORD *)v69 = v68;
          *((_DWORD *)v69 + 1) = v65 >> 2;
        }
        while ( (_DWORD *)((char *)vs + v75) != v63 );
        v26 = v64;
      }
      LODWORD(a1) = v74;
      v71 = v78 >> 22;
      v39 = v78 >> 2;
      v40 = v74 | (v78 << 30);
      v41 = (unsigned __int64 *)(v26 + 8 * (v78 >> 22));
      for ( j = *v41; *v41; j = *v41 )
      {
        a1 = j >> 30;
        if ( v78 == j >> 30 )
          break;
        v71 = (unsigned __int8)(v71 + 1);
        v41 = (unsigned __int64 *)(v26 + 8 * v71);
      }
    }
    else
    {
      if ( v27 != 1 )
      {
        v29 = HIDWORD(a1) + 1073741822 + v27;
        v30 = v12;
        v31 = &us[v29 + 1];
        do
        {
          v32 = *v31;
          v33 = *--v31;
          v34 = v32 >> 22;
          v35 = v33 | (v32 << 30);
          v36 = (unsigned __int64 *)(v30 + 8 * (v32 >> 22));
          for ( k = *v36; *v36; k = *v36 )
          {
            if ( v32 == k >> 30 )
              break;
            v34 = (unsigned __int8)(v34 + 1);
            v36 = (unsigned __int64 *)(v30 + 8 * v34);
          }
          *(_DWORD *)v36 = v35;
          *((_DWORD *)v36 + 1) = v32 >> 2;
        }
        while ( (_DWORD *)((char *)us + v75) != v31 );
        v26 = v30;
      }
      LODWORD(a1) = v78;
      v38 = v74 >> 22;
      v39 = v74 >> 2;
      v40 = v78 | (v74 << 30);
      v41 = (unsigned __int64 *)(v26 + 8 * (v74 >> 22));
      v42 = *v41;
      if ( *v41 )
      {
        a1 = v42 >> 30;
        if ( v42 >> 30 != v74 )
        {
          do
          {
            v38 = (unsigned __int8)(v38 + 1);
            v41 = (unsigned __int64 *)(v26 + 8 * v38);
            v43 = *v41;
            if ( !*v41 )
              break;
            a1 = v43 >> 30;
          }
          while ( v74 != v43 >> 30 );
        }
      }
    }
    *(_DWORD *)v41 = v40;
    *((_DWORD *)v41 + 1) = v39;
    return a1;
  }
  v44 = v27 - 1;
  if ( (unsigned int)a1 >= v11 )
    v44 = v11;
  LODWORD(a1) = a1 - v44;
  v45 = v11 - v44;
  if ( us[HIDWORD(a1) + (_DWORD)a1] == vs[HIDWORD(a1) + v45] )
  {
    v51 = v45;
    v46 = a1;
  }
  else
  {
    ++HIDWORD(a1);
    v46 = a1;
    v47 = &us[a1 - 1 + HIDWORD(a1)];
    HIDWORD(a1) = &vs[HIDWORD(a1) - 1 + v45];
    do
    {
      v49 = v47[1];
      ++v47;
      v48 = v49;
      ++v46;
      v50 = *(_DWORD *)(HIDWORD(a1) + 4);
      HIDWORD(a1) += 4;
      v51 = v45 + v46 - a1;
    }
    while ( v48 != v50 );
  }
  if ( v46 + v51 == 41 )
  {
    v52 = v46 - 1;
    v53 = *(_DWORD *)((char *)vs + v75) >> 1;
    v54 = (_DWORD *)((char *)&gEdges + 336 * v76);
    *v54 = *(_DWORD *)((char *)us + v75) >> 1;
    v54[1] = v53;
    if ( v46 )
    {
      v55 = (char *)&gEdges + 336 * v76;
      do
      {
        v56 = v77[v52 | 1];
        v57 = v77[(v52-- + 1) & 0xFFFFFFFE];
        *((_DWORD *)v55 + 2) = v57 >> 1;
        *((_DWORD *)v55 + 3) = v56 >> 1;
        v55 += 8;
      }
      while ( v52 != -1 );
      v58 = v46 + 1;
      LODWORD(a1) = v51 - 1;
      if ( !v51 )
      {
LABEL_60:
        if ( v58 == 42 )
          gSols[172 * v76] = 1;
        return a1;
      }
    }
    else
    {
      LODWORD(a1) = 40;
      v58 = 1;
    }
    v59 = a1;
    v60 = (unsigned int *)((char *)&gEdges + 336 * v76 + 8 * v58 + 4);
    do
    {
      v61 = *(_DWORD *)&v79[4 * (v51 & 0xFFFFFFFE)];
      v51 = v59;
      v62 = *(_DWORD *)&v79[4 * (v59-- | 1)];
      *(v60 - 1) = v62 >> 1;
      *v60 = v61 >> 1;
      v60 += 2;
    }
    while ( v51 );
    v58 += a1 + 1;
    goto LABEL_60;
  }
  return a1;
}
