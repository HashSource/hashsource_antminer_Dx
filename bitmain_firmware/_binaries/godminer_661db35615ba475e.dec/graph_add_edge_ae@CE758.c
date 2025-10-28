int __fastcall graph_add_edge_ae(unsigned __int64 a1, int a2)
{
  unsigned int v2; // r6
  _DWORD *v4; // lr
  int v5; // r12
  int v6; // r5
  unsigned int v7; // r4
  unsigned __int64 v8; // r2
  int v9; // r3
  unsigned int v10; // r4
  char *v11; // r8
  unsigned int v12; // r10
  int v13; // lr
  int v14; // r6
  unsigned int v15; // r12
  unsigned int v16; // r7
  unsigned __int64 v17; // r2
  int v18; // r1
  char *v19; // r3
  bool v20; // cf
  int v21; // t1
  const char *v22; // r0
  unsigned int v23; // r2
  int v24; // t1
  int v25; // r3
  unsigned int v26; // r1
  int v27; // r2
  unsigned int v28; // r4
  int v29; // r12
  unsigned int *v30; // r9
  unsigned int v31; // r8
  int v32; // t1
  unsigned int v33; // r6
  unsigned int v34; // r1
  int v35; // lr
  int v36; // r8
  unsigned __int64 v37; // r4
  int *k; // r0
  unsigned int v39; // r2
  unsigned int v40; // lr
  int v41; // r8
  int v42; // r12
  unsigned __int64 v43; // r4
  int *j; // r12
  unsigned __int64 v45; // r4
  unsigned int v46; // r3
  int v47; // r10
  int v48; // r2
  int v49; // r3
  _DWORD *v50; // r12
  int v51; // r4
  int v52; // t1
  int v53; // t1
  int v54; // r2
  int v55; // r12
  int v56; // r4
  unsigned int v57; // r4
  unsigned int v58; // lr
  int v59; // r3
  int v60; // lr
  int v61; // r4
  unsigned int *v62; // r9
  int v63; // r12
  unsigned int v64; // r8
  int v65; // t1
  unsigned int v66; // r6
  unsigned int v67; // r1
  int v68; // lr
  int v69; // r8
  unsigned __int64 v70; // r4
  int *i; // r0
  unsigned int v72; // r2
  int v73; // r12
  unsigned __int64 v74; // r4
  unsigned int v76; // [sp+0h] [bp-1Ch]
  int v77; // [sp+4h] [bp-18h]
  int v78; // [sp+8h] [bp-14h]
  _DWORD *v79; // [sp+Ch] [bp-10h]
  unsigned int v80; // [sp+10h] [bp-Ch]
  char *v81; // [sp+14h] [bp-8h]

  v76 = 2 * HIDWORD(a1);
  if ( !(2 * HIDWORD(a1)) )
    return a1;
  v2 = 2 * HIDWORD(a1);
  v77 = (_DWORD)a1 << 11;
  v4 = &us[512 * (_DWORD)a1 - 1];
  v5 = 0;
  v6 = cuckoo[(_DWORD)a1];
  v78 = a1;
  v79 = &us[512 * (_DWORD)a1];
  do
  {
    v7 = v2 >> 22;
    ++v5;
    v4[1] = v2;
    ++v4;
    v8 = *(_QWORD *)(8 * (v2 >> 22) + v6);
    if ( !v8 )
      goto LABEL_9;
    a1 = v8 >> 30;
    if ( v2 != v8 >> 30 )
    {
      while ( 1 )
      {
        v7 = (unsigned __int8)(v7 + 1);
        v8 = *(_QWORD *)(8 * v7 + v6);
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
  v18 = 255;
  v19 = (char *)(v79 + 256);
  do
  {
    v24 = *((_DWORD *)v19 - 1);
    v19 -= 4;
    if ( v24 == v2 )
    {
      v23 = v76;
      LOWORD(v22) = 13680;
      goto LABEL_29;
    }
    v20 = v18-- != 0;
  }
  while ( v20 );
  LODWORD(a1) = puts("\nWARNINIG: maximum path length exceeded");
  v5 = 0;
  v9 = cuckoo[v78];
LABEL_10:
  v80 = (2 * a2) | 1;
  v10 = v80;
  v11 = (char *)&vs[-1] + v77;
  v12 = 0;
  v13 = v9;
  v14 = v5;
  v81 = (char *)vs + v77;
  while ( 1 )
  {
    v15 = v10 >> 22;
    *((_DWORD *)v11 + 1) = v10;
    v11 += 4;
    v16 = v12 + 1;
    v17 = *(_QWORD *)(8 * (v10 >> 22) + v13);
    if ( !v17 )
      break;
    while ( 1 )
    {
      a1 = v17 >> 30;
      if ( v17 >> 30 == v10 )
        break;
      v15 = (unsigned __int8)(v15 + 1);
      v17 = *(_QWORD *)(8 * v15 + v13);
      if ( !v17 )
        goto LABEL_30;
    }
    v10 = v17 & 0x3FFFFFFF;
    if ( (v17 & 0x3FFFFFFF) == 0 )
      break;
    ++v12;
    if ( v16 == 256 )
    {
      v18 = 255;
      v19 = v81 + 1024;
      while ( 1 )
      {
        v21 = *((_DWORD *)v19 - 1);
        v19 -= 4;
        if ( v21 == v10 )
          break;
        v20 = v18-- != 0;
        if ( !v20 )
        {
          LODWORD(a1) = puts("\nWARNINIG: maximum path length exceeded");
          return a1;
        }
      }
      LOWORD(v22) = (unsigned __int16)"illegal %4d-cycle from node %d\n";
      v23 = v80;
LABEL_29:
      HIWORD(v22) = (unsigned int)"illegal %4d-cycle from node %d\n" >> 16;
      printf(v22, 256 - v18, v23, v19, v76);
      exit(0);
    }
  }
LABEL_30:
  v25 = v13;
  if ( !v14 )
    return a1;
  v26 = v14 - 1;
  v27 = v78 << 9;
  v28 = (v78 << 9) + v12;
  if ( us[512 * v78 - 1 + v14] != vs[v28] )
  {
    if ( v26 >= v12 )
    {
      if ( v12 )
      {
        v62 = &vs[v28];
        v63 = v13;
        do
        {
          v64 = *v62;
          v65 = *--v62;
          v66 = v64;
          v67 = v64 >> 22;
          v68 = v64 >> 2;
          v69 = v65 | (v64 << 30);
          v70 = *(_QWORD *)(v63 + 8 * v67);
          for ( i = (int *)(v63 + 8 * v67); v70; i = (int *)(v63 + 8 * v67) )
          {
            if ( v66 == v70 >> 30 )
              break;
            v67 = (unsigned __int8)(v67 + 1);
            v70 = *(_QWORD *)(v63 + 8 * v67);
          }
          *i = v69;
          i[1] = v68;
        }
        while ( (_DWORD *)((char *)vs + v77) != v62 );
        v25 = v63;
      }
      LODWORD(a1) = v76;
      v72 = v80 >> 22;
      v40 = v80 >> 2;
      v41 = v76 | (v80 << 30);
      v73 = 8 * (v80 >> 22);
      v74 = *(_QWORD *)(v25 + v73);
      for ( j = (int *)(v25 + v73); v74; j = (int *)(v25 + 8 * v72) )
      {
        a1 = v74 >> 30;
        if ( v80 == v74 >> 30 )
          break;
        v72 = (unsigned __int8)(v72 + 1);
        v74 = *(_QWORD *)(v25 + 8 * v72);
      }
    }
    else
    {
      if ( v14 != 1 )
      {
        v29 = v13;
        v30 = &us[v27 - 1 + v14];
        do
        {
          v31 = *v30;
          v32 = *--v30;
          v33 = v31;
          v34 = v31 >> 22;
          v35 = v31 >> 2;
          v36 = v32 | (v31 << 30);
          v37 = *(_QWORD *)(v29 + 8 * v34);
          for ( k = (int *)(v29 + 8 * v34); v37; k = (int *)(v29 + 8 * v34) )
          {
            if ( v33 == v37 >> 30 )
              break;
            v34 = (unsigned __int8)(v34 + 1);
            v37 = *(_QWORD *)(v29 + 8 * v34);
          }
          *k = v36;
          k[1] = v35;
        }
        while ( (_DWORD *)((char *)us + v77) != v30 );
        v25 = v29;
      }
      LODWORD(a1) = v80;
      v39 = v76 >> 22;
      v40 = v76 >> 2;
      v41 = v80 | (v76 << 30);
      v42 = 8 * (v76 >> 22);
      v43 = *(_QWORD *)(v25 + v42);
      j = (int *)(v25 + v42);
      if ( v43 )
      {
        a1 = v43 >> 30;
        if ( v43 >> 30 != v76 )
        {
          do
          {
            v39 = (unsigned __int8)(v39 + 1);
            v45 = *(_QWORD *)(v25 + 8 * v39);
            j = (int *)(v25 + 8 * v39);
            if ( !v45 )
              break;
            a1 = v45 >> 30;
          }
          while ( v76 != v45 >> 30 );
        }
      }
    }
    *j = v41;
    j[1] = v40;
    return a1;
  }
  if ( v26 >= v12 )
    v46 = v12;
  else
    v46 = v14 - 1;
  HIDWORD(a1) = v26 - v46;
  v47 = v12 - v46;
  LODWORD(a1) = us[v27 + HIDWORD(a1)];
  if ( (_DWORD)a1 == vs[v27 + v47] )
  {
    v54 = v47;
    v49 = HIDWORD(a1);
  }
  else
  {
    v48 = v27 + 1;
    v49 = HIDWORD(a1);
    v50 = &us[HIDWORD(a1) - 1 + v48];
    LODWORD(a1) = &vs[v47 - 1 + v48];
    do
    {
      v52 = v50[1];
      ++v50;
      v51 = v52;
      ++v49;
      v53 = *(_DWORD *)(a1 + 4);
      LODWORD(a1) = a1 + 4;
      v54 = v47 + v49 - HIDWORD(a1);
    }
    while ( v51 != v53 );
  }
  if ( v49 + v54 != 41 )
    return a1;
  v55 = v49 - 1;
  v56 = us[512 * v78] >> 1;
  LODWORD(a1) = (char *)&gEdges + 336 * v78;
  *(_DWORD *)(a1 + 4) = vs[512 * v78] >> 1;
  *(_DWORD *)a1 = v56;
  if ( !v49 )
  {
    v60 = 40;
    v59 = 1;
LABEL_57:
    v61 = v60;
    HIDWORD(a1) = (char *)&gEdges + 336 * v78 + 8 * v59 + 4;
    while ( 1 )
    {
      LODWORD(a1) = *(_DWORD *)&v81[4 * (v54 & 0xFFFFFFFE)];
      v54 = v61;
      LODWORD(a1) = (unsigned int)a1 >> 1;
      *(_DWORD *)(HIDWORD(a1) - 4) = *(_DWORD *)&v81[4 * (v61 | 1)] >> 1;
      *(_DWORD *)HIDWORD(a1) = a1;
      HIDWORD(a1) += 8;
      if ( !v61 )
        break;
      --v61;
    }
    v59 += v60 + 1;
    goto LABEL_61;
  }
  do
  {
    v57 = v79[v55 | 1];
    v58 = v79[(v55-- + 1) & 0xFFFFFFFE];
    LODWORD(a1) = a1 + 8;
    *(_DWORD *)(a1 + 4) = v57 >> 1;
    *(_DWORD *)a1 = v58 >> 1;
  }
  while ( v55 != -1 );
  v59 = v49 + 1;
  v60 = v54 - 1;
  if ( v54 )
    goto LABEL_57;
LABEL_61:
  if ( v59 == 42 )
    gSols[172 * v78] = 1;
  return a1;
}
