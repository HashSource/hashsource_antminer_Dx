int __fastcall check_nonce_ae(_DWORD *a1, int a2)
{
  int v2; // r6
  int v4; // r4
  _DWORD *v5; // r2
  int v6; // r12
  char v7; // lr
  int v8; // r3
  int v9; // r1
  int v10; // r4
  int v11; // lr
  unsigned int v12; // r3
  int v13; // lr
  int v14; // r12
  char v15; // r6
  char v16; // r4
  char v17; // r3
  int v18; // r10
  int v19; // r8
  unsigned __int64 v20; // r4
  unsigned __int64 v21; // r6
  void *v22; // r0
  int v23; // r8
  int v24; // r2
  int v25; // r1
  unsigned __int64 v26; // r4
  int *v27; // r5
  unsigned __int64 v28; // r0
  int v29; // r10
  __int64 v30; // kr40_8
  unsigned int v31; // lr
  unsigned int v32; // r2
  unsigned int v33; // r12
  unsigned int v34; // r6
  unsigned int v35; // r9
  unsigned __int64 v36; // kr58_8
  unsigned int v37; // r5
  unsigned __int64 v38; // kr60_8
  unsigned int v39; // r4
  bool v40; // cf
  unsigned int v41; // r12
  unsigned int v42; // r2
  unsigned int v43; // r6
  int v44; // r7
  int v45; // r9
  unsigned int v46; // r2
  int v47; // r11
  unsigned int v48; // r0
  int v49; // r4
  unsigned int v50; // r9
  unsigned int v51; // r6
  unsigned int v52; // r11
  unsigned int v53; // r4
  unsigned int v54; // r5
  int v55; // r8
  int v56; // r7
  unsigned int v57; // r2
  int v58; // r0
  unsigned int v59; // r0
  unsigned int v60; // r5
  unsigned int v61; // r7
  int v62; // r3
  unsigned __int64 v63; // kr68_8
  unsigned int v64; // lr
  unsigned int v65; // r2
  int v66; // r4
  unsigned int v67; // r9
  int v68; // r11
  int v69; // r7
  unsigned int v70; // r2
  unsigned int v71; // r4
  unsigned int v72; // r5
  unsigned int v73; // kr14_4
  unsigned int v74; // kr18_4
  int v75; // lr
  unsigned int v76; // r9
  unsigned int v77; // r0
  unsigned int v78; // r3
  unsigned int v79; // lr
  int v80; // r7
  int v81; // r0
  unsigned __int64 v82; // kr78_8
  unsigned int v83; // r6
  int v84; // r10
  unsigned int v85; // r9
  unsigned int v86; // r7
  unsigned int v87; // lr
  unsigned int v88; // r2
  unsigned int v89; // r10
  int v90; // r4
  int v91; // r8
  unsigned int v92; // r7
  unsigned int v93; // r12
  unsigned int v94; // r4
  unsigned int v95; // r10
  unsigned int v96; // r3
  unsigned int v97; // r8
  int v98; // r11
  int v99; // r5
  unsigned __int64 v100; // kr88_8
  unsigned int v101; // r4
  unsigned int v102; // r0
  unsigned int v103; // r11
  unsigned int v104; // r8
  unsigned int v105; // r2
  unsigned int v106; // r5
  int v107; // r3
  int v108; // r6
  int v109; // lr
  __int64 v110; // r4
  unsigned int v111; // r8
  unsigned int v112; // r11
  __int64 v113; // r6
  unsigned int v114; // r0
  unsigned int v115; // r10
  int v116; // r9
  unsigned int v117; // r2
  __int64 v118; // r10
  __int64 v119; // krA0_8
  unsigned int v120; // r12
  __int64 v121; // krA8_8
  unsigned int v122; // r3
  int v123; // lr
  int v124; // r3
  int v125; // r12
  int v126; // r9
  int v127; // r4
  int v128; // r6
  char *v129; // r5
  int *v130; // r10
  unsigned int v131; // r4
  int v132; // t1
  unsigned int v133; // r0
  char *v134; // r3
  unsigned int v135; // r0
  int *v136; // r2
  int v137; // r1
  _DWORD *v138; // r0
  int v139; // r2
  unsigned __int64 v140; // r6
  _DWORD *v142; // r1
  int v143; // r6
  int v144; // [sp+24h] [bp-1200h]
  int v145; // [sp+28h] [bp-11FCh]
  int v146; // [sp+30h] [bp-11F4h]
  int *v147; // [sp+34h] [bp-11F0h]
  int v148; // [sp+38h] [bp-11ECh]
  int v149; // [sp+3Ch] [bp-11E8h]
  __int64 v150; // [sp+44h] [bp-11E0h]
  __int64 v151; // [sp+50h] [bp-11D4h]
  int v152; // [sp+58h] [bp-11CCh]
  _DWORD *v153; // [sp+5Ch] [bp-11C8h]
  __int64 v154; // [sp+60h] [bp-11C4h]
  __int64 v155; // [sp+70h] [bp-11B4h]
  unsigned __int64 v156; // [sp+78h] [bp-11ACh]
  int v159; // [sp+8Ch] [bp-1198h]
  _BYTE v160[8]; // [sp+A4h] [bp-1180h]
  struct timeval tv; // [sp+ACh] [bp-1178h] BYREF
  struct timeval v162; // [sp+B4h] [bp-1170h] BYREF
  _DWORD v163[2]; // [sp+BCh] [bp-1168h] BYREF
  int v164; // [sp+C4h] [bp-1160h]
  _DWORD s[8]; // [sp+C8h] [bp-115Ch] BYREF
  __int64 v166; // [sp+E8h] [bp-113Ch]
  __int64 v167; // [sp+F0h] [bp-1134h]
  __int64 v168; // [sp+F8h] [bp-112Ch]
  __int64 v169; // [sp+100h] [bp-1124h]
  __int64 v170; // [sp+108h] [bp-111Ch]
  __int64 v171; // [sp+110h] [bp-1114h]
  __int64 v172; // [sp+118h] [bp-110Ch]
  __int64 v173; // [sp+120h] [bp-1104h]
  _DWORD dest[20]; // [sp+128h] [bp-10FCh] BYREF
  _QWORD base[21]; // [sp+178h] [bp-10ACh] BYREF
  __int64 v176; // [sp+220h] [bp-1004h] BYREF
  __int64 v177; // [sp+228h] [bp-FFCh]
  __int64 v178; // [sp+230h] [bp-FF4h]
  __int64 v179; // [sp+238h] [bp-FECh]
  int v180; // [sp+1220h] [bp-4h] BYREF

  v2 = a1[150];
  v159 = v2;
  memset(s, 0, sizeof(s));
  v4 = *(unsigned __int8 *)(a2 + 48);
  memcpy(dest, (const void *)(v2 + 80 * v4 + 11520), sizeof(dest));
  v8 = *(_DWORD *)(v2 + 4 * (v4 + 1408));
  v5 = v163;
  v6 = 0;
  v160[7] = dest[11];
  v160[1] = BYTE1(v8);
  v7 = HIBYTE(v8);
  v160[2] = BYTE2(v8);
  v8 = (unsigned __int8)v8;
  v160[3] = v7;
  v160[0] = v8;
  v160[5] = BYTE2(dest[11]);
  v160[6] = BYTE1(dest[11]);
  v160[4] = HIBYTE(dest[11]);
  while ( 1 )
  {
    v9 = v6 + 1;
    v10 = v6 + 2;
    LOBYTE(v11) = 65;
    v12 = v8 << 16;
    if ( v6 != 7 )
    {
      v13 = (unsigned __int8)v160[v9];
      v9 = v6 + 3;
      if ( v10 > 7 )
        v9 = v6 + 2;
      v14 = v13 << 8;
      if ( v10 > 7 )
      {
        v11 = (unsigned __int8)aAbcdefghijklmn[0];
        v12 += v14;
      }
      else
      {
        v11 = (unsigned __int8)v160[v10];
      }
      if ( v10 <= 7 )
      {
        v12 += v11 + v14;
        LOBYTE(v11) = aAbcdefghijklmn[v12 & 0x3F];
      }
    }
    v15 = aAbcdefghijklmn[(v12 >> 12) & 0x3F];
    v16 = aAbcdefghijklmn[(v12 >> 6) & 0x3F];
    ++v5;
    v17 = aAbcdefghijklmn[v12 >> 18];
    v6 = v9;
    *((_BYTE *)v5 - 1) = v11;
    *((_BYTE *)v5 - 3) = v15;
    *((_BYTE *)v5 - 2) = v16;
    *((_BYTE *)v5 - 4) = v17;
    if ( v9 > 7 )
      break;
    v8 = (unsigned __int8)v160[v9];
  }
  HIBYTE(v164) = 61;
  v18 = a1[30];
  v19 = *(unsigned __int16 *)(a2 + 85);
  dest[11] = v163[0];
  dest[12] = v163[1];
  dest[13] = v164;
  v146 = v18;
  memset(base, 0, sizeof(base));
  gettimeofday(&tv, 0);
  blake2b(&v176, (int)dest, 80);
  v150 = v179;
  v151 = v178;
  v168 = v178;
  v20 = __PAIR64__(HIDWORD(v177), v176);
  v21 = __PAIR64__(HIDWORD(v176), v177);
  v169 = v179;
  v166 = v176;
  v167 = v177;
  memset(&gEdges, 0, 0x540u);
  memset(gSols, 0, sizeof(gSols));
  v22 = calloc(0x100u, 8u);
  v23 = v19 >> 2;
  cuckoo[v18] = v22;
  if ( v23 )
  {
    v24 = HIDWORD(v20) << 13;
    v25 = ((_DWORD)v21 << 13) | (HIDWORD(v20) >> 19);
    v26 = v20 + v21;
    v156 = __PAIR64__(v26, HIDWORD(v26));
    HIDWORD(v155) = (v24 | ((unsigned int)v21 >> 19)) ^ HIDWORD(v26);
    v152 = a2 + 87 + 4 * v23;
    LODWORD(v155) = v25 ^ v26;
    LODWORD(v154) = ((v25 ^ (unsigned int)v26) << 17) | (HIDWORD(v155) >> 15);
    HIDWORD(v154) = __SPAIR64__(HIDWORD(v155), v25 ^ (unsigned int)v26) >> 15;
    v27 = (int *)(a2 + 87);
    v153 = (_DWORD *)((char *)&unk_195D50 + 8 * v18);
    v148 = 8 * v18;
    do
    {
      HIDWORD(v28) = sip_node_ae(v146, v166, v167, v168, v169, HIDWORD(v169), *v27, 0) >> 1;
      v147 = v27 + 1;
      v29 = (2 * *v27) | 1;
      v30 = v151 + (v150 ^ (unsigned int)v29);
      v31 = ((HIDWORD(v150) << 16) | (((unsigned int)v150 ^ v29) >> 16)) ^ HIDWORD(v30);
      v32 = ((((unsigned int)v150 ^ v29) << 16) | HIWORD(HIDWORD(v150))) ^ v30;
      v33 = (unsigned __int64)(v30 + v155) >> 32;
      v34 = ((v32 << 21) | (v31 >> 11)) ^ (v32 + v156);
      v35 = ((v31 << 21) | (v32 >> 11)) ^ ((__PAIR64__(v31, v32) + v156) >> 32);
      v36 = __PAIR64__(v31, v32) + v156 + ((v30 + v155) ^ v154);
      v37 = (((((_DWORD)v30 + (_DWORD)v155) ^ (unsigned int)v154) << 13) | ((v33 ^ HIDWORD(v154)) >> 19)) ^ v36;
      v38 = __PAIR64__((int)v30 + (int)v155, v33) + __PAIR64__(v35, v34);
      v39 = ((v34 << 16) | HIWORD(v35)) ^ (v33 + v34);
      v40 = __CFADD__(v33 + v34, v37);
      v41 = v33 + v34 + v37;
      v42 = (((v30 + v155) ^ v154) >> 19) ^ HIDWORD(v36);
      v43 = ((v35 << 16) | HIWORD(v34))
          ^ ((__PAIR64__((int)v30 + (int)v155, (unsigned __int64)(v30 + v155) >> 32) + __PAIR64__(v35, v34)) >> 32);
      v44 = v42 << 17;
      v45 = (v37 << 17) | (v42 >> 15);
      v46 = v42 + v40 + HIDWORD(v38);
      v47 = (v39 << 21) | (v43 >> 11);
      v40 = __CFADD__(HIDWORD(v36), v39);
      v48 = HIDWORD(v36) + v39;
      v49 = (v43 << 21) | (v39 >> 11);
      v50 = v45 ^ v41;
      v51 = v43 + v40 + (_DWORD)v36;
      v52 = v47 ^ v48;
      v53 = v49 ^ v51;
      v54 = (v44 | (v37 >> 15)) ^ v46;
      v55 = v46 ^ 0xFF;
      v56 = (v50 << 13) | (v54 >> 19);
      v57 = v54 << 13;
      v58 = v48 ^ v29;
      v40 = __CFADD__(v58, v50);
      v59 = v58 + v50;
      v60 = v54 + v40 + v51;
      v61 = v56 ^ v59;
      v62 = (v53 << 16) | HIWORD(v52);
      v63 = __PAIR64__(v41, v55) + __PAIR64__(v53, v52);
      v64 = ((v52 << 16) | HIWORD(v53)) ^ (v55 + v52);
      v65 = (v57 | (v50 >> 19)) ^ v60;
      v66 = (v61 << 17) | (v65 >> 15);
      v67 = (v64 << 21) | (((unsigned int)v62 ^ HIDWORD(v63)) >> 11);
      v40 = __CFADD__((_DWORD)v63, v61);
      v68 = v63 + v61;
      v69 = (v65 << 17) | (v61 >> 15);
      v70 = v65 + v40 + HIDWORD(v63);
      v71 = v66 ^ v68;
      v73 = v60;
      v74 = v64;
      v72 = v60 + v64;
      v75 = ((v62 ^ HIDWORD(v63)) << 21) | (v64 >> 11);
      v76 = v67 ^ v72;
      v77 = (__PAIR64__(v59, v73) + __PAIR64__((unsigned int)v62 ^ HIDWORD(v63), v74)) >> 32;
      v78 = v69 ^ v70;
      v79 = v75 ^ v77;
      v80 = (v76 << 16) | HIWORD(v79);
      v82 = __PAIR64__(v77, v73 + v74) + __PAIR64__(v78, v71);
      v81 = (__PAIR64__(v77, v73 + v74) + __PAIR64__(v78, v71)) >> 32;
      v83 = ((v71 << 13) | (v78 >> 19)) ^ v82;
      v84 = (v79 << 16) | HIWORD(v76);
      v40 = __CFADD__(v70, v76);
      v85 = v70 + v76;
      v86 = v80 ^ v85;
      v87 = v79 + v40 + v68;
      v88 = ((v78 << 13) | (v71 >> 19)) ^ v81;
      v89 = v84 ^ v87;
      v90 = (v86 << 21) | (v89 >> 11);
      v91 = (v89 << 21) | (v86 >> 11);
      v40 = __CFADD__(v81, v86);
      v92 = v81 + v86;
      v93 = ((v83 << 17) | (v88 >> 15)) ^ (v85 + v83);
      v94 = v90 ^ v92;
      v95 = v89 + v40 + (_DWORD)v82;
      v96 = ((v88 << 17) | (v83 >> 15)) ^ ((__PAIR64__(v87, v85) + __PAIR64__(v88, v83)) >> 32);
      v97 = v91 ^ v95;
      v98 = (v94 << 16) | HIWORD(v97);
      v99 = (v97 << 16) | HIWORD(v94);
      v100 = __PAIR64__(v95, v92) + __PAIR64__(v96, v93);
      v40 = __CFADD__((__PAIR64__(v87, v85) + __PAIR64__(v88, v83)) >> 32, v94);
      v101 = ((__PAIR64__(v87, v85) + __PAIR64__(v88, v83)) >> 32) + v94;
      v102 = ((v93 << 13) | (v96 >> 19)) ^ (v92 + v93);
      v103 = v98 ^ v101;
      v104 = v97 + v40 + v85 + v83;
      v105 = ((v96 << 13) | (v93 >> 19)) ^ ((__PAIR64__(v95, v92) + __PAIR64__(v96, v93)) >> 32);
      v106 = v99 ^ v104;
      v107 = (v102 << 17) | (v105 >> 15);
      v108 = (v103 << 21) | (v106 >> 11);
      v109 = (v106 << 21) | (v103 >> 11);
      v111 = (__PAIR64__(v104, v101) + __PAIR64__(v105, v102)) >> 32;
      LODWORD(v110) = v101 + v102;
      v40 = __CFADD__(HIDWORD(v100), v103);
      v112 = HIDWORD(v100) + v103;
      LODWORD(v113) = v108 ^ v112;
      HIDWORD(v110) = v106 + v40 + (_DWORD)v100;
      HIDWORD(v113) = v109 ^ HIDWORD(v110);
      v114 = ((v105 << 17) | (v102 >> 15)) ^ v111;
      v115 = ((_DWORD)v113 << 16) | (((unsigned int)v109 ^ HIDWORD(v110)) >> 16);
      v116 = (v109 ^ HIDWORD(v110)) << 16;
      v117 = (((v107 ^ (unsigned int)v110) << 13) | (v114 >> 19)) ^ (v112 + (v107 ^ v110));
      HIDWORD(v110) = (__PAIR64__(v114, v112) + (v110 ^ (unsigned int)v107)) >> 32;
      HIDWORD(v118) = v112 + (v110 ^ v107);
      LODWORD(v118) = v115 ^ (v111 + v113);
      v119 = __PAIR64__(v110, v111) + v113;
      v120 = ((v114 << 13) | ((v107 ^ (unsigned int)v110) >> 19)) ^ HIDWORD(v110);
      LODWORD(v113) = (v116 | WORD1(v113)) ^ ((__PAIR64__(v110, v111) + v113) >> 32);
      v121 = v119 + __PAIR64__(v120, v117);
      v122 = ((_DWORD)v118 << 21) | ((unsigned int)v113 >> 11);
      LODWORD(v113) = (__PAIR64__(v113, HIDWORD(v110)) + v118) >> 32;
      v123 = ((v117 << 17) | (v120 >> 15)) ^ (v119 + v117);
      v124 = v122 ^ (HIDWORD(v110) + v118);
      *(_DWORD *)((char *)&unk_195D90 + v148) = v124;
      v125 = ((v120 << 17) | (v117 >> 15)) ^ ((v119 + __PAIR64__(v120, v117)) >> 32);
      *(_DWORD *)((char *)&unk_195DB0 + v148) = HIDWORD(v121);
      v126 = (((_DWORD)v113 << 21) | ((unsigned int)v118 >> 11)) ^ v113;
      *(_DWORD *)((char *)&unk_195D70 + v148) = v123;
      LODWORD(v28) = v146;
      *v153 = HIDWORD(v110) + v118;
      *(_DWORD *)((char *)&unk_195D90 + v148 + 4) = v126;
      *(_DWORD *)((char *)&unk_195DB0 + v148 + 4) = v121;
      v153[1] = v113;
      *(_DWORD *)((char *)&unk_195D70 + v148 + 4) = v125;
      graph_add_edge_ae(
        v28,
        ((((v124 ^ v123 ^ (HIDWORD(v110) + (_DWORD)v118) ^ HIDWORD(v121)) << 17)
        | ((v125 ^ v126 ^ (unsigned int)v113 ^ (unsigned int)v121) >> 15)) >> 1)
      & 0xFFFFFFF);
      v27 = v147;
    }
    while ( (int *)v152 != v147 );
    v127 = (unsigned __int8)gSols[172 * v146];
    v170 = v166;
    v171 = v167;
    v149 = v127;
    v172 = v168;
    v173 = v169;
    if ( v127 )
    {
      v128 = 0;
      v129 = (char *)&unk_19A23C + 336 * v146;
      v130 = (int *)(a2 + 87);
      do
      {
        v131 = sip_node_ae(v146, v170, v171, v172, v173, HIDWORD(v173), *v130, 0) >> 1;
        v132 = *v130++;
        v133 = sip_node_ae(v146, v170, v171, v172, v173, HIDWORD(v173), v132, 1);
        v134 = (char *)&gEdges + 336 * v146 + 4;
        v135 = v133 >> 1;
        do
        {
          while ( v131 != *((_DWORD *)v134 - 1) || v135 != *(_DWORD *)v134 )
          {
            v134 += 8;
            if ( v134 == v129 )
              goto LABEL_22;
          }
          v134 += 8;
          v136 = &v180 + v128++;
          *(v136 - 1066) = *(v130 - 1);
        }
        while ( v134 != v129 );
LABEL_22:
        ;
      }
      while ( v147 != v130 );
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw((char *)&v176, 0x1000u, 0, "[FindCycle] get golden nonce!");
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_ae/backend_ae.c",
        152,
        "findcycle_ae",
        12,
        311,
        20,
        &v176);
      qsort(base, 0x2Au, 4u, (__compar_fn_t)sub_5D140);
      memcpy((void *)(a2 + 87), base, 0xA8u);
      v22 = (void *)cuckoo[v146];
    }
    else
    {
      v22 = (void *)cuckoo[v146];
    }
  }
  else
  {
    v149 = 0;
  }
  free(v22);
  gettimeofday(&v162, 0);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(
    (char *)&v176,
    0x1000u,
    0,
    "[FindCycle], runtime_id:%d time: %ld us",
    v146,
    v162.tv_usec + (_DWORD)&loc_F4240 * v162.tv_sec - 1000000 * tv.tv_sec - tv.tv_usec);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ae/backend_ae.c",
    152,
    "findcycle_ae",
    12,
    320,
    20,
    &v176);
  if ( v149 )
  {
    memset(s, 0, sizeof(s));
    v137 = 0;
    v138 = &dest[19];
    do
    {
      v139 = a2 + 4 * (v137 + 20);
      ++v137;
      v138[1] = (unsigned __int8)HIBYTE(*(_DWORD *)(v139 + 7))
              | (unsigned __int16)((unsigned __int8)BYTE2(*(_DWORD *)(v139 + 7)) << 8)
              | ((unsigned __int8)BYTE1(*(_DWORD *)(v139 + 7)) << 16) & 0xFFFFFF
              | ((unsigned __int8)*(_DWORD *)(v139 + 7) << 24);
      ++v138;
    }
    while ( v137 != 42 );
    blake2b(s, (int)base, 168);
    LODWORD(v140) = HIBYTE(s[1])
                  | (unsigned __int16)(BYTE2(s[1]) << 8)
                  | (BYTE1(s[1]) << 16) & 0xFFFFFF
                  | (LOBYTE(s[1]) << 24);
    HIDWORD(v140) = HIBYTE(s[0])
                  | (unsigned __int16)(BYTE2(s[0]) << 8)
                  | (BYTE1(s[0]) << 16) & 0xFFFFFF
                  | (LOBYTE(s[0]) << 24);
    if ( *(_QWORD *)(v159 + 8 * (*(unsigned __int8 *)(a2 + 48) + 768)) < v140 )
    {
      pthread_mutex_lock(&stru_197BB8);
      v142 = (_DWORD *)(v159 + 8 * (*(unsigned __int8 *)(a2 + 48) + 768));
      logfmt_raw(
        (char *)&v176,
        0x1000u,
        0,
        "wc %d nonce %08x hw target (%016llx > %016llx) not reach pool\n",
        *(unsigned __int8 *)(a2 + 48),
        *(_DWORD *)(a2 + 81),
        v140,
        *v142,
        v142[1]);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_ae/backend_ae.c",
        152,
        "check_nonce_ae",
        14,
        410,
        20,
        &v176);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    pthread_mutex_lock(&stru_197BB8);
    v143 = a1[31];
    HIDWORD(base[0]) = 5;
    ++dword_197BD4;
    LODWORD(base[0]) = "chain";
    LODWORD(base[1]) = 3;
    v145 = *(_DWORD *)(a2 + 81);
    v144 = *(unsigned __int8 *)(a2 + 48);
    LODWORD(base[3]) = 0;
    base[2] = v143;
    logfmt_raw(
      (char *)&v176,
      0x1000u,
      0,
      HIDWORD(base[3]),
      "chain",
      5,
      __PAIR64__(HIDWORD(base[1]), 3),
      (__int64)v143,
      __PAIR64__(HIDWORD(base[3]), 0),
      "wc %d error_nonce %08x",
      v144,
      v145);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_ae/backend_ae.c",
      152,
      "check_nonce_ae",
      14,
      398,
      20,
      &v176);
    return 2;
  }
}
