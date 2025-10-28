int __fastcall eth_sha3_512(int a1, unsigned int a2, int a3, unsigned int a4)
{
  _BOOL4 v5; // r3
  char v7; // r3
  _DWORD *v8; // r1
  int v9; // r0
  char v10; // t1
  int v11; // r1
  int v12; // r2
  _DWORD *v13; // r9
  int *v14; // r8
  int v15; // r4
  int j; // lr
  int v17; // r0
  int v18; // r12
  int *v19; // r3
  int *v20; // lr
  unsigned int v21; // r0
  _BYTE *v22; // r4
  unsigned int v23; // r5
  unsigned int v24; // r8
  _BYTE *v25; // r4
  int *v26; // r3
  int v27; // r9
  int v28; // r10
  int v29; // r4
  int v30; // r5
  int v31; // r4
  unsigned __int8 *v32; // r8
  int v33; // r0
  unsigned int v34; // r4
  __int16 v35; // r5
  unsigned int v36; // r2
  unsigned __int8 *v37; // r11
  unsigned __int8 *v38; // r10
  __int16 v39; // t1
  int v40; // t1
  int v41; // r1
  int v42; // r12
  unsigned int v43; // r9
  int v44; // r3
  int v45; // r4
  int v46; // r0
  __int64 *v47; // lr
  _QWORD *v48; // r1
  __int64 *v49; // r0
  __int64 v50; // t1
  __int64 *v51; // r12
  int *v52; // r0
  unsigned int v53; // r1
  int v54; // r10
  int v55; // r2
  unsigned int v56; // r3
  _BYTE *v57; // r3
  int v58; // r11
  int v59; // r4
  _BYTE *v60; // r3
  int v61; // r2
  int v62; // r3
  int v63; // r0
  _DWORD *v64; // r3
  bool v65; // cc
  unsigned int v66; // r1
  bool v67; // zf
  _BYTE *v68; // r0
  int v69; // r12
  int v70; // r3
  char v71; // r1
  char v72; // t1
  char v73; // t1
  int v74; // r11
  int v75; // r2
  int v76; // r1
  _DWORD *v77; // r8
  int *v78; // r6
  int v79; // r4
  int v80; // lr
  int v81; // r0
  int v82; // r12
  int *m; // r3
  int v84; // r12
  int *v85; // lr
  int v86; // r0
  int v87; // r2
  _BYTE *v88; // r1
  unsigned int v89; // r6
  unsigned int v90; // r8
  _BYTE *v91; // r1
  int *v92; // r3
  int v93; // r9
  int v94; // r10
  int v95; // r1
  int v96; // r6
  int v97; // r1
  unsigned __int8 *v98; // r6
  int v99; // r12
  unsigned int v100; // r4
  __int16 v101; // r5
  unsigned int v102; // r1
  unsigned __int8 *v103; // r10
  unsigned __int8 *v104; // r11
  __int16 v105; // t1
  int v106; // t1
  int v107; // r2
  int v108; // r0
  unsigned int v109; // r8
  int v110; // r3
  int v111; // r4
  int v112; // r12
  __int64 *v113; // lr
  _QWORD *v114; // r1
  __int64 *v115; // r0
  __int64 v116; // t1
  __int64 *v117; // r12
  int *v118; // r0
  int v119; // r1
  int v120; // r8
  int v121; // r2
  unsigned int v122; // r3
  _BYTE *v123; // r3
  int v124; // r10
  int v125; // r4
  _BYTE *v126; // r3
  int v127; // r2
  int v128; // r3
  int v129; // r0
  char *v130; // r1
  int v131; // r3
  unsigned int v132; // r2
  char v133; // t1
  _QWORD *v135; // [sp+0h] [bp-12Ch]
  _QWORD *v136; // [sp+0h] [bp-12Ch]
  int v137; // [sp+8h] [bp-124h]
  int v138; // [sp+10h] [bp-11Ch]
  int v139; // [sp+14h] [bp-118h]
  int v140; // [sp+14h] [bp-118h]
  int k; // [sp+18h] [bp-114h]
  unsigned int i; // [sp+1Ch] [bp-110h]
  void *v143; // [sp+20h] [bp-10Ch]
  unsigned __int8 *v144; // [sp+24h] [bp-108h]
  int v145; // [sp+28h] [bp-104h]
  unsigned int v146; // [sp+2Ch] [bp-100h]
  unsigned int v147; // [sp+30h] [bp-FCh]
  int v148; // [sp+34h] [bp-F8h]
  _DWORD v149[10]; // [sp+38h] [bp-F4h] BYREF
  _DWORD s[50]; // [sp+60h] [bp-CCh] BYREF
  _BYTE v151[4]; // [sp+128h] [bp-4h] BYREF

  v147 = a2;
  v148 = a1;
  v145 = a3;
  v146 = a4;
  if ( a2 > 0x40 || !a1 )
    return -1;
  v5 = a4 != 0;
  if ( !a3 && v5 )
    return -1;
  memset(s, 0, sizeof(s));
  if ( a4 <= 0x47 )
  {
    v143 = &unk_14A0C0;
    v144 = (unsigned __int8 *)&unk_14A0DF;
  }
  else
  {
    v7 = 0;
    v143 = &unk_14A0C0;
    v144 = (unsigned __int8 *)&unk_14A0DF;
    while ( 1 )
    {
      v8 = s;
      v9 = v145 - 1;
      while ( 1 )
      {
        v10 = *(_BYTE *)++v9;
        *(_BYTE *)v8 = v7 ^ v10;
        v8 = (_DWORD *)((char *)v8 + 1);
        if ( &s[18] == v8 )
          break;
        v7 = *(_BYTE *)v8;
      }
      memset(v149, 0, sizeof(v149));
      v11 = s[0];
      v12 = s[1];
      v139 = 1351688;
      k = 1;
      for ( i = 0; ; i = (unsigned int)v64 )
      {
        v13 = v149;
        v14 = s;
        v15 = v11;
        for ( j = v12; ; j = v14[1] )
        {
          v17 = 0;
          v18 = 0;
          v19 = v14;
          *(_QWORD *)v13 = 0;
          v13 += 2;
          while ( 1 )
          {
            v19 += 10;
            v17 ^= v15;
            v18 ^= j;
            if ( v14 + 50 == v19 )
              break;
            v15 = *v19;
            j = v19[1];
          }
          *(v13 - 2) = v17;
          *(v13 - 1) = v18;
          v14 += 2;
          if ( s == v13 )
            break;
          v15 = *v14;
        }
        v20 = s;
        v21 = 1;
        v135 = v13;
        while ( 1 )
        {
          v22 = &v151[8 * (v21 % 5)];
          v23 = *((_DWORD *)v22 - 60);
          v24 = *((_DWORD *)v22 - 59);
          v25 = &v151[8 * ((v21 + 3) % 5)];
          v26 = v20;
          v27 = *((_DWORD *)v25 - 60);
          v28 = *((_DWORD *)v25 - 59);
          v29 = 2 * v23;
          v30 = ((2 * v24) | (v23 >> 31)) ^ v28;
          v31 = (v29 | (v24 >> 31)) ^ v27;
          while ( 1 )
          {
            *v26 = v11 ^ v31;
            v26[1] = v12 ^ v30;
            v26 += 10;
            if ( v26 == v20 + 50 )
              break;
            v11 = *v26;
            v12 = v26[1];
          }
          ++v21;
          v20 += 2;
          if ( v21 == 6 )
            break;
          v11 = *v20;
          v12 = v20[1];
        }
        v32 = (unsigned __int8 *)&unk_14A0C8;
        v33 = 1;
        v34 = s[2];
        v35 = 10;
        v36 = s[3];
        v37 = (unsigned __int8 *)&unk_14A0E0;
        v38 = v144;
        while ( 1 )
        {
          v41 = -v33 & 0x3F;
          v42 = 2 * v35;
          v43 = s[v42];
          v44 = __PAIR64__(v36, v34) << v33 >> 32;
          v45 = (__PAIR64__(v36, v34) >> v41) | (v34 << v33);
          v46 = v44 | (v36 >> v41);
          v36 = s[v42 + 1];
          s[v42] = v45;
          v34 = v43;
          s[v42 + 1] = v46;
          if ( v38 == v32 )
            break;
          v39 = *++v32;
          v35 = v39;
          v40 = *++v37;
          v33 = v40;
        }
        v149[0] = v43;
        v47 = (__int64 *)s;
        v149[1] = v36;
        do
        {
          v48 = v149;
          v49 = v47;
          do
          {
            v50 = *v49++;
            *v48++ = v50;
          }
          while ( v48 != v135 );
          v51 = v47;
          v52 = v149;
          v53 = 1;
          do
          {
            v54 = *v52;
            v55 = v52[1];
            ++v51;
            v52 += 2;
            v56 = v53 % 5;
            ++v53;
            v57 = &v151[8 * v56];
            v58 = *((_DWORD *)v57 - 60);
            v59 = *((_DWORD *)v57 - 59);
            v60 = &v151[8 * (v53 % 5)];
            v61 = v55 ^ *((_DWORD *)v60 - 59) & ~v59;
            *((_DWORD *)v51 - 2) = v54 ^ *((_DWORD *)v60 - 60) & ~v58;
            *((_DWORD *)v51 - 1) = v61;
          }
          while ( v53 != 6 );
          v47 += 5;
        }
        while ( v151 != (_BYTE *)v47 );
        v62 = v139;
        v11 = k ^ s[0];
        s[0] ^= k;
        v12 = i ^ s[1];
        s[1] ^= i;
        if ( v143 == (void *)v139 )
          break;
        v63 = *(_DWORD *)(v139 + 8);
        v139 += 8;
        v64 = *(_DWORD **)(v62 + 12);
        k = v63;
      }
      v65 = v146 - 72 > 0x47;
      v146 -= 72;
      v145 += 72;
      if ( !v65 )
        break;
      v7 = s[0];
    }
  }
  v66 = v146;
  v67 = v146 == 0;
  *((_BYTE *)s + v146) ^= 1u;
  HIBYTE(s[17]) = ~(HIBYTE(s[17]) ^ 0x7F);
  if ( !v67 )
  {
    v68 = (char *)&v149[9] + 3;
    v69 = v145 - 1;
    v70 = v145 + v66 - 1;
    do
    {
      v72 = *(_BYTE *)++v69;
      v71 = v72;
      v73 = *++v68;
      *v68 = v73 ^ v71;
    }
    while ( v70 != v69 );
  }
  v74 = -858993459;
  memset(v149, 0, sizeof(v149));
  v75 = s[0];
  v76 = s[1];
  v138 = 1351688;
  v140 = 1;
  for ( k = 0; ; k = *(_DWORD *)(v128 + 12) )
  {
    v77 = v149;
    v78 = s;
    v79 = v75;
    v80 = v76;
    i = (unsigned int)s;
    while ( 1 )
    {
      v81 = 0;
      *(_QWORD *)v77 = 0;
      v77 += 2;
      v82 = 0;
      for ( m = v78; ; v80 = m[1] )
      {
        m += 10;
        v81 ^= v79;
        v82 ^= v80;
        if ( v78 + 50 == m )
          break;
        v79 = *m;
      }
      *(v77 - 2) = v81;
      *(v77 - 1) = v82;
      v78 += 2;
      if ( s == v77 )
        break;
      v79 = *v78;
      v80 = v78[1];
    }
    v84 = v75;
    v85 = s;
    v86 = 1;
    v87 = v76;
    v136 = v77;
    while ( 1 )
    {
      v88 = &v151[8 * (v86 - 5 * ((unsigned int)(((unsigned int)v86 * (unsigned __int64)(unsigned int)v74) >> 32) >> 2))];
      v89 = *((_DWORD *)v88 - 60);
      v90 = *((_DWORD *)v88 - 59);
      v91 = &v151[8
                * (v86
                 + 3
                 - 5 * ((unsigned int)(((unsigned int)(v86 + 3) * (unsigned __int64)(unsigned int)v74) >> 32) >> 2))];
      v92 = v85;
      v93 = *((_DWORD *)v91 - 60);
      v94 = *((_DWORD *)v91 - 59);
      v95 = 2 * v89;
      v96 = ((2 * v90) | (v89 >> 31)) ^ v94;
      v97 = (v95 | (v90 >> 31)) ^ v93;
      while ( 1 )
      {
        *v92 = v84 ^ v97;
        v92 += 10;
        *(v92 - 9) = v87 ^ v96;
        if ( v85 + 50 == v92 )
          break;
        v84 = *v92;
        v87 = v92[1];
      }
      ++v86;
      v85 += 2;
      if ( v86 == 6 )
        break;
      v84 = *v85;
      v87 = v85[1];
    }
    v98 = (unsigned __int8 *)&unk_14A0C8;
    v137 = v74;
    v99 = 1;
    v100 = s[2];
    v101 = 10;
    v102 = s[3];
    v103 = (unsigned __int8 *)&unk_14A0E0;
    v104 = v144;
    while ( 1 )
    {
      v107 = -v99 & 0x3F;
      v108 = 2 * v101;
      v109 = s[v108];
      v110 = __PAIR64__(v102, v100) << v99 >> 32;
      v111 = (__PAIR64__(v102, v100) >> v107) | (v100 << v99);
      v112 = v110 | (v102 >> v107);
      v102 = s[v108 + 1];
      s[v108] = v111;
      v100 = v109;
      s[v108 + 1] = v112;
      if ( v104 == v98 )
        break;
      v105 = *++v98;
      v101 = v105;
      v106 = *++v103;
      v99 = v106;
    }
    v74 = v137;
    v113 = (__int64 *)s;
    v149[0] = v109;
    v149[1] = v102;
    do
    {
      v114 = v149;
      v115 = v113;
      do
      {
        v116 = *v115++;
        *v114++ = v116;
      }
      while ( v136 != v114 );
      v117 = v113;
      v118 = v149;
      v119 = 1;
      do
      {
        v120 = *v118;
        v121 = v118[1];
        ++v117;
        v118 += 2;
        v122 = v119 - 5 * ((unsigned int)(((unsigned int)v119 * (unsigned __int64)(unsigned int)v137) >> 32) >> 2);
        ++v119;
        v123 = &v151[8 * v122];
        v124 = *((_DWORD *)v123 - 60);
        v125 = *((_DWORD *)v123 - 59);
        v126 = &v151[8
                   * (v119 - 5
                           * ((unsigned int)(((unsigned int)v119 * (unsigned __int64)(unsigned int)v137) >> 32) >> 2))];
        v127 = v121 ^ *((_DWORD *)v126 - 59) & ~v125;
        *((_DWORD *)v117 - 2) = v120 ^ *((_DWORD *)v126 - 60) & ~v124;
        *((_DWORD *)v117 - 1) = v127;
      }
      while ( v119 != 6 );
      v113 += 5;
    }
    while ( v151 != (_BYTE *)v113 );
    v128 = v138;
    v75 = v140 ^ s[0];
    s[0] ^= v140;
    v76 = k ^ s[1];
    s[1] ^= k;
    if ( v143 == (void *)v138 )
      break;
    v129 = *(_DWORD *)(v138 + 8);
    v138 += 8;
    v140 = v129;
  }
  if ( v147 )
  {
    v130 = (char *)i;
    v131 = v148 - 1;
    v132 = v148 - 1 + v147;
    do
    {
      v133 = *v130++;
      *(_BYTE *)++v131 = v133;
    }
    while ( v132 != v131 );
  }
  return 0;
}
