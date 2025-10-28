int __fastcall check_nonce_ae(_DWORD *a1, int a2)
{
  int v2; // r6
  int v4; // r4
  int v5; // r4
  _DWORD *v6; // r2
  int v7; // r3
  int v8; // r4
  int v9; // r1
  int v10; // r12
  unsigned int v11; // r3
  int v12; // r6
  int v13; // r6
  int v14; // r4
  char v15; // r12
  char v16; // lr
  char v17; // r3
  int v18; // r8
  int v19; // r4
  unsigned __int64 v20; // r4
  unsigned int v21; // r9
  unsigned int v22; // r6
  void *v23; // r0
  int v24; // r8
  int v25; // r2
  int v26; // r1
  unsigned __int64 v27; // r4
  unsigned int v28; // r2
  int *v29; // r7
  unsigned __int64 v30; // r0
  int v31; // r10
  unsigned int v32; // r3
  int v33; // r4
  unsigned int v34; // r5
  unsigned int v35; // r4
  unsigned int v36; // kr18_4
  unsigned int v37; // r2
  unsigned int v38; // r12
  unsigned int v39; // r9
  int v40; // r0
  int v41; // r3
  unsigned int v42; // r7
  unsigned int v43; // r2
  unsigned __int64 v44; // kr28_8
  unsigned int v45; // r6
  bool v46; // cf
  unsigned int v47; // r4
  unsigned int v48; // r2
  unsigned int v49; // r12
  unsigned int v50; // lr
  int v51; // r9
  unsigned int v52; // r2
  int v53; // r11
  int v54; // r0
  int v55; // r6
  unsigned int v56; // r9
  unsigned int v57; // r12
  unsigned int v58; // r11
  unsigned int v59; // r6
  unsigned int v60; // r7
  int v61; // r8
  int v62; // lr
  unsigned int v63; // r2
  int v64; // r0
  unsigned int v65; // r0
  int v66; // r5
  unsigned int v67; // r7
  unsigned int v68; // lr
  int v69; // r3
  unsigned int v70; // r11
  unsigned int v71; // r4
  unsigned int v72; // r5
  unsigned int v73; // r2
  int v74; // r6
  unsigned int v75; // r9
  unsigned int v76; // r11
  int v77; // lr
  unsigned int v78; // r2
  unsigned int v79; // r6
  unsigned int v80; // r7
  unsigned int v81; // kr04_4
  unsigned int v82; // kr08_4
  int v83; // r5
  unsigned int v84; // r9
  int v85; // r0
  int v86; // r3
  __int64 v87; // r4
  unsigned int v88; // r7
  int v89; // r0
  unsigned int v90; // r12
  unsigned int v91; // lr
  unsigned int v92; // r2
  unsigned int v93; // r10
  int v94; // r6
  unsigned __int64 v95; // kr38_8
  int v96; // r8
  unsigned int v97; // lr
  unsigned int v98; // r6
  unsigned int v99; // r10
  unsigned int v100; // r3
  unsigned int v101; // r8
  int v102; // r11
  int v103; // r7
  unsigned __int64 v104; // kr40_8
  unsigned int v105; // r6
  unsigned int v106; // r0
  unsigned int v107; // r11
  unsigned int v108; // r8
  unsigned int v109; // r2
  unsigned int v110; // r7
  int v111; // r3
  int v112; // r12
  unsigned int v113; // r8
  unsigned int v114; // kr48_4
  unsigned int v115; // r11
  unsigned int v116; // r12
  unsigned int v117; // r7
  int v118; // lr
  unsigned int v119; // r0
  unsigned int v120; // r10
  int v121; // r9
  __int64 v122; // r10
  unsigned int v123; // r2
  unsigned int v124; // r7
  unsigned int v125; // kr10_4
  int v126; // r12
  int v127; // r6
  unsigned int v128; // r9
  unsigned int v129; // r0
  unsigned int v130; // r12
  unsigned int v131; // kr58_4
  int v132; // r3
  int v133; // lr
  int v134; // r2
  int v135; // r6
  char *v136; // r5
  int *v137; // r10
  unsigned int v138; // r4
  int v139; // t1
  unsigned int v140; // r0
  char *v141; // r3
  unsigned int v142; // r0
  _DWORD *v143; // r2
  _DWORD *v144; // r0
  int i; // r1
  int v146; // r2
  unsigned __int64 v147; // r6
  _DWORD *v149; // r1
  int v150; // r6
  int v151; // [sp+24h] [bp-1200h]
  int v152; // [sp+28h] [bp-11FCh]
  int v153; // [sp+34h] [bp-11F0h]
  int *v154; // [sp+38h] [bp-11ECh]
  int v155; // [sp+3Ch] [bp-11E8h]
  int v156; // [sp+40h] [bp-11E4h]
  __int64 v157; // [sp+48h] [bp-11DCh]
  int v158; // [sp+50h] [bp-11D4h]
  int v159; // [sp+54h] [bp-11D0h]
  int v160; // [sp+58h] [bp-11CCh]
  unsigned int *v161; // [sp+60h] [bp-11C4h]
  unsigned int v162; // [sp+64h] [bp-11C0h]
  unsigned int v163; // [sp+68h] [bp-11BCh]
  __int64 v164; // [sp+70h] [bp-11B4h]
  unsigned __int64 v165; // [sp+78h] [bp-11ACh]
  int v168; // [sp+90h] [bp-1194h]
  int v169; // [sp+A4h] [bp-1180h]
  char v170; // [sp+A8h] [bp-117Ch]
  char v171; // [sp+A9h] [bp-117Bh]
  char v172; // [sp+AAh] [bp-117Ah]
  char v173; // [sp+ABh] [bp-1179h]
  struct timeval tv; // [sp+ACh] [bp-1178h] BYREF
  struct timeval v175; // [sp+B4h] [bp-1170h] BYREF
  _DWORD v176[2]; // [sp+BCh] [bp-1168h] BYREF
  int v177; // [sp+C4h] [bp-1160h]
  _DWORD s[8]; // [sp+C8h] [bp-115Ch] BYREF
  __int64 v179; // [sp+E8h] [bp-113Ch]
  __int64 v180; // [sp+F0h] [bp-1134h]
  __int64 v181; // [sp+F8h] [bp-112Ch]
  __int64 v182; // [sp+100h] [bp-1124h]
  __int64 v183; // [sp+108h] [bp-111Ch]
  __int64 v184; // [sp+110h] [bp-1114h]
  __int64 v185; // [sp+118h] [bp-110Ch]
  __int64 v186; // [sp+120h] [bp-1104h]
  _DWORD dest[20]; // [sp+128h] [bp-10FCh] BYREF
  _DWORD base[42]; // [sp+178h] [bp-10ACh] BYREF
  __int64 v189; // [sp+220h] [bp-1004h] BYREF
  __int64 v190; // [sp+228h] [bp-FFCh]
  __int64 v191; // [sp+230h] [bp-FF4h]
  __int64 v192; // [sp+238h] [bp-FECh]

  v2 = a1[150];
  v168 = v2;
  memset(s, 0, sizeof(s));
  v4 = *(unsigned __int8 *)(a2 + 48);
  memcpy(dest, (const void *)(v2 + 80 * v4 + 11520), sizeof(dest));
  v5 = *(_DWORD *)(v2 + 4 * (v4 + 1408));
  v6 = v176;
  v7 = (unsigned __int8)v5;
  v173 = dest[11];
  v169 = v5;
  v8 = 0;
  v171 = BYTE2(dest[11]);
  v172 = BYTE1(dest[11]);
  v170 = HIBYTE(dest[11]);
  while ( 1 )
  {
    v9 = v8 + 1;
    v10 = v8 + 2;
    v11 = v7 << 16;
    LOBYTE(v12) = 65;
    if ( v8 != 7 )
    {
      v13 = *((unsigned __int8 *)&v169 + v9);
      v9 = v8 + 3;
      if ( v10 > 7 )
        v9 = v8 + 2;
      v14 = v13 << 8;
      if ( v10 > 7 )
      {
        v12 = (unsigned __int8)aAbcdefghijklmn[0];
        v11 += v14;
      }
      else
      {
        v12 = *((unsigned __int8 *)&v169 + v10);
      }
      if ( v10 <= 7 )
      {
        v11 += v12 + v14;
        LOBYTE(v12) = aAbcdefghijklmn[v11 & 0x3F];
      }
    }
    v15 = aAbcdefghijklmn[(v11 >> 12) & 0x3F];
    v16 = aAbcdefghijklmn[v11 >> 18];
    v17 = aAbcdefghijklmn[(v11 >> 6) & 0x3F];
    v8 = v9;
    *((_BYTE *)v6++ + 3) = v12;
    *((_BYTE *)v6 - 4) = v16;
    *((_BYTE *)v6 - 3) = v15;
    *((_BYTE *)v6 - 2) = v17;
    if ( v9 > 7 )
      break;
    v7 = *((unsigned __int8 *)&v169 + v9);
  }
  HIBYTE(v177) = 61;
  v18 = *(unsigned __int16 *)(a2 + 85);
  v19 = a1[30];
  dest[11] = v176[0];
  dest[12] = v176[1];
  dest[13] = v177;
  v153 = v19;
  memset(base, 0, sizeof(base));
  gettimeofday(&tv, 0);
  blake2b(&v189, (int)dest, 80);
  v20 = __PAIR64__(HIDWORD(v190), v189);
  v158 = HIDWORD(v191);
  v21 = HIDWORD(v189);
  v22 = v190;
  v157 = v192;
  v159 = v191;
  v181 = v191;
  v179 = v189;
  v180 = v190;
  v182 = v192;
  memset(&gEdges, 0, 0x540u);
  memset(gSols, 0, sizeof(gSols));
  v23 = calloc(0x100u, 8u);
  v24 = v18 >> 2;
  cuckoo[v153] = v23;
  if ( v24 )
  {
    v25 = (HIDWORD(v20) << 13) | (v22 >> 19);
    v26 = (v22 << 13) | (HIDWORD(v20) >> 19);
    v155 = 2 * v153;
    v27 = v20 + __PAIR64__(v21, v22);
    v28 = v25 ^ HIDWORD(v27);
    LODWORD(v164) = v26 ^ v27;
    v160 = a2 + 87 + 4 * v24;
    v165 = __PAIR64__(v27, HIDWORD(v27));
    v162 = ((v26 ^ (unsigned int)v27) << 17) | (v28 >> 15);
    HIDWORD(v164) = v28;
    v163 = (v28 << 17) | ((v26 ^ (unsigned int)v27) >> 15);
    v29 = (int *)(a2 + 87);
    v161 = (unsigned int *)((char *)&unk_3B54A0 + 8 * v153);
    do
    {
      HIDWORD(v30) = (unsigned int)sip_node_ae(v153, v179, v180, v181, v182, *v29, 0) >> 1;
      v154 = v29 + 1;
      v31 = (2 * *v29) | 1;
      v32 = v159 + (v157 ^ v31);
      v33 = HIDWORD(v157) + __CFADD__(v159, v157 ^ v31) + v158;
      v34 = ((HIDWORD(v157) << 16) | (((unsigned int)v157 ^ v31) >> 16)) ^ v33;
      v36 = v32 + v164;
      v35 = (__PAIR64__(v33, v32) + v164) >> 32;
      v37 = ((((unsigned int)v157 ^ v31) << 16) | HIWORD(HIDWORD(v157))) ^ v32;
      v38 = ((v37 << 21) | (v34 >> 11)) ^ (v37 + v165);
      v39 = ((v34 << 21) | (v37 >> 11)) ^ ((__PAIR64__(v34, v37) + v165) >> 32);
      v40 = (__PAIR64__(v34, v37) + v165 + __PAIR64__(v35 ^ v163, (v32 + v164) ^ v162)) >> 32;
      v41 = v37 + v165 + ((v32 + v164) ^ v162);
      v42 = (((v36 ^ v162) << 13) | ((v35 ^ v163) >> 19)) ^ v41;
      v43 = ((v35 ^ v163) << 13) | ((v36 ^ v162) >> 19);
      v44 = __PAIR64__(v36, v35) + __PAIR64__(v39, v38);
      v45 = ((v38 << 16) | HIWORD(v39)) ^ (v35 + v38);
      v46 = __CFADD__(v35 + v38, v42);
      v47 = v35 + v38 + v42;
      v48 = v43 ^ v40;
      v49 = ((v39 << 16) | HIWORD(v38)) ^ HIDWORD(v44);
      v50 = v48 << 17;
      v51 = (v42 << 17) | (v48 >> 15);
      v52 = v48 + v46 + HIDWORD(v44);
      v53 = (v45 << 21) | (v49 >> 11);
      v46 = __CFADD__(v40, v45);
      v54 = v40 + v45;
      v55 = (v49 << 21) | (v45 >> 11);
      v56 = v51 ^ v47;
      v57 = v49 + v46 + v41;
      v58 = v53 ^ v54;
      v59 = v55 ^ v57;
      v60 = (v50 | (v42 >> 15)) ^ v52;
      v61 = v52 ^ 0xFF;
      v62 = (v56 << 13) | (v60 >> 19);
      v63 = v60 << 13;
      v64 = v31 ^ v54;
      v46 = __CFADD__(v64, v56);
      v65 = v64 + v56;
      v66 = (v58 << 16) | HIWORD(v59);
      v67 = v60 + v46 + v57;
      v68 = v62 ^ v65;
      v69 = (v59 << 16) | HIWORD(v58);
      v46 = __CFADD__(v61, v58);
      v70 = v61 + v58;
      v71 = v47 + v46 + v59;
      v72 = v66 ^ v70;
      v73 = (v63 | (v56 >> 19)) ^ v67;
      v74 = (v68 << 17) | (v73 >> 15);
      v75 = (v72 << 21) | ((v69 ^ v71) >> 11);
      v46 = __CFADD__(v70, v68);
      v76 = v70 + v68;
      v77 = (v73 << 17) | (v68 >> 15);
      v78 = v73 + v46 + v71;
      v79 = v74 ^ v76;
      v81 = v67;
      v82 = v72;
      v80 = v67 + v72;
      v83 = ((v69 ^ v71) << 21) | (v72 >> 11);
      v84 = v75 ^ v80;
      v85 = (__PAIR64__(v65, v81) + __PAIR64__(v69 ^ v71, v82)) >> 32;
      v86 = v77 ^ v78;
      HIDWORD(v87) = v83 ^ v85;
      LODWORD(v87) = v78;
      v88 = v81 + v82 + v79;
      v89 = v85 + __CFADD__(v81 + v82, v79) + (v77 ^ v78);
      v90 = ((v79 << 13) | ((v77 ^ v78) >> 19)) ^ v88;
      v91 = ((v84 << 16) | HIWORD(HIDWORD(v87))) ^ (v78 + v84);
      v92 = ((v86 << 13) | (v79 >> 19)) ^ v89;
      v93 = ((HIDWORD(v87) << 16) | HIWORD(v84)) ^ ((v87 + __PAIR64__(v76, v84)) >> 32);
      v94 = (v91 << 21) | (v93 >> 11);
      v95 = v87 + __PAIR64__(v76, v84) + __PAIR64__(v92, v90);
      v96 = (v93 << 21) | (v91 >> 11);
      v46 = __CFADD__(v89, v91);
      v97 = v89 + v91;
      LODWORD(v87) = ((v90 << 17) | (v92 >> 15)) ^ v95;
      v98 = v94 ^ v97;
      v99 = v93 + v46 + v88;
      v100 = ((v92 << 17) | (v90 >> 15)) ^ HIDWORD(v95);
      v101 = v96 ^ v99;
      v102 = (v98 << 16) | HIWORD(v101);
      v103 = (v101 << 16) | HIWORD(v98);
      v104 = __PAIR64__(v99, v97) + __PAIR64__(v100, v87);
      v46 = __CFADD__(HIDWORD(v95), v98);
      v105 = HIDWORD(v95) + v98;
      v106 = (((_DWORD)v87 << 13) | (v100 >> 19)) ^ (v97 + v87);
      v107 = v102 ^ v105;
      v108 = v101 + v46 + (_DWORD)v95;
      v109 = ((v100 << 13) | ((unsigned int)v87 >> 19)) ^ ((__PAIR64__(v99, v97) + __PAIR64__(v100, v87)) >> 32);
      v110 = v103 ^ v108;
      v111 = (v106 << 17) | (v109 >> 15);
      v112 = (v107 << 21) | (v110 >> 11);
      HIDWORD(v87) = (v110 << 21) | (v107 >> 11);
      v114 = v105 + v106;
      v113 = (__PAIR64__(v108, v105) + __PAIR64__(v109, v106)) >> 32;
      v46 = __CFADD__(HIDWORD(v104), v107);
      v115 = HIDWORD(v104) + v107;
      v116 = v112 ^ v115;
      v117 = v110 + v46 + (_DWORD)v104;
      v118 = HIDWORD(v87) ^ v117;
      v119 = ((v109 << 17) | (v106 >> 15)) ^ v113;
      v120 = (v116 << 16) | ((HIDWORD(v87) ^ v117) >> 16);
      v121 = (HIDWORD(v87) ^ v117) << 16;
      v46 = __CFADD__(v115, v111 ^ v114);
      HIDWORD(v122) = v115 + (v111 ^ v114);
      v123 = (((v111 ^ v114) << 13) | (v119 >> 19)) ^ HIDWORD(v122);
      v124 = v117 + v46 + v119;
      v125 = v116;
      v126 = v121 | HIWORD(v116);
      LODWORD(v87) = ((v119 << 13) | ((v111 ^ v114) >> 19)) ^ v124;
      v127 = (__PAIR64__(v114, v113) + __PAIR64__(v118, v125) + __PAIR64__(v87, v123)) >> 32;
      v128 = v113 + v125 + v123;
      v129 = (v123 << 17) | ((unsigned int)v87 >> 15);
      LODWORD(v122) = v120 ^ (v113 + v125);
      v131 = v124 + v122;
      v130 = (__PAIR64__(v126 ^ (unsigned int)((__PAIR64__(v114, v113) + __PAIR64__(v118, v125)) >> 32), v124) + v122) >> 32;
      v132 = (((_DWORD)v122 << 21) | (v130 >> 11)) ^ (v124 + v122);
      v133 = (((_DWORD)v87 << 17) | (v123 >> 15)) ^ v127;
      dword_3B54C0[2 * v153] = v132;
      LODWORD(v122) = ((v130 << 21) | ((unsigned int)v122 >> 11)) ^ v130;
      v134 = v129 ^ v128 ^ v132 ^ v131 ^ v127;
      qword_3B5480[v153] = __PAIR64__(v130, v131);
      dword_3B54E0[2 * v153] = v127;
      *v161 = v129 ^ v128;
      v161[1] = v133;
      LODWORD(v30) = v153;
      dword_3B54E0[v155 + 1] = v128;
      dword_3B54C0[v155 + 1] = v122;
      graph_add_edge_ae(v30, (((v134 << 17) | ((v133 ^ (unsigned int)v122 ^ v130 ^ v128) >> 15)) >> 1) & 0xFFFFFFF);
      v29 = v154;
    }
    while ( (int *)v160 != v154 );
    v183 = v179;
    v184 = v180;
    v156 = (unsigned __int8)gSols[172 * v153];
    v185 = v181;
    v186 = v182;
    if ( v156 )
    {
      v135 = 0;
      v136 = (char *)&unk_3B7AD4 + 336 * v153;
      v137 = (int *)(a2 + 87);
      do
      {
        v138 = (unsigned int)sip_node_ae(v153, v183, v184, v185, v186, *v137, 0) >> 1;
        v139 = *v137++;
        v140 = sip_node_ae(v153, v183, v184, v185, v186, v139, 1);
        v141 = (char *)&gEdges + 336 * v153 + 4;
        v142 = v140 >> 1;
        do
        {
          while ( v138 != *((_DWORD *)v141 - 1) || v142 != *(_DWORD *)v141 )
          {
            v141 += 8;
            if ( v141 == v136 )
              goto LABEL_22;
          }
          v141 += 8;
          v143 = &base[v135++ + 2];
          *(v143 - 2) = *(v137 - 1);
        }
        while ( v141 != v136 );
LABEL_22:
        ;
      }
      while ( v154 != v137 );
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw((char *)&v189, 0x1000u, 0, "[FindCycle] get golden nonce!");
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/backend_ae/backend_ae.c",
        69,
        "findcycle_ae",
        12,
        311,
        20,
        &v189);
      qsort(base, 0x2Au, 4u, (__compar_fn_t)sub_80598);
      memcpy((void *)(a2 + 87), base, 0xA8u);
      v23 = (void *)cuckoo[v153];
    }
    else
    {
      v23 = (void *)cuckoo[v153];
    }
  }
  else
  {
    v156 = 0;
  }
  free(v23);
  gettimeofday(&v175, 0);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(
    (char *)&v189,
    0x1000u,
    0,
    "[FindCycle], runtime_id:%d time: %ld us",
    v153,
    v175.tv_usec + (_DWORD)&loc_F4240 * v175.tv_sec - 1000000 * tv.tv_sec - tv.tv_usec);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_ae/backend_ae.c",
    69,
    "findcycle_ae",
    12,
    320,
    20,
    &v189);
  if ( v156 )
  {
    memset(s, 0, sizeof(s));
    v144 = &dest[19];
    for ( i = 0; i != 42; ++i )
    {
      v146 = a2 + 4 * (i + 20);
      v144[1] = (unsigned __int8)HIBYTE(*(_DWORD *)(v146 + 7))
              | (unsigned __int16)((unsigned __int8)BYTE2(*(_DWORD *)(v146 + 7)) << 8)
              | ((unsigned __int8)BYTE1(*(_DWORD *)(v146 + 7)) << 16) & 0xFFFFFF
              | ((unsigned __int8)*(_DWORD *)(v146 + 7) << 24);
      ++v144;
    }
    blake2b(s, (int)base, 168);
    LODWORD(v147) = HIBYTE(s[1])
                  | (unsigned __int16)(BYTE2(s[1]) << 8)
                  | (BYTE1(s[1]) << 16) & 0xFFFFFF
                  | (LOBYTE(s[1]) << 24);
    HIDWORD(v147) = HIBYTE(s[0])
                  | (unsigned __int16)(BYTE2(s[0]) << 8)
                  | (BYTE1(s[0]) << 16) & 0xFFFFFF
                  | (LOBYTE(s[0]) << 24);
    if ( *(_QWORD *)(v168 + 8 * (*(unsigned __int8 *)(a2 + 48) + 768)) < v147 )
    {
      pthread_mutex_lock(&stru_3B526C);
      v149 = (_DWORD *)(v168 + 8 * (*(unsigned __int8 *)(a2 + 48) + 768));
      logfmt_raw(
        (char *)&v189,
        0x1000u,
        0,
        "wc %d nonce %08x hw target (%016llx > %016llx) not reach pool\n",
        *(unsigned __int8 *)(a2 + 48),
        *(_DWORD *)(a2 + 81),
        v147,
        *v149,
        v149[1]);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/backend_ae/backend_ae.c",
        69,
        "check_nonce_ae",
        14,
        410,
        20,
        &v189);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    pthread_mutex_lock(&stru_3B526C);
    base[1] = 5;
    base[2] = 3;
    v150 = a1[31];
    ++dword_3B52A8;
    base[0] = "chain";
    v151 = *(unsigned __int8 *)(a2 + 48);
    v152 = *(_DWORD *)(a2 + 81);
    base[6] = 0;
    base[4] = v150;
    base[5] = v150 >> 31;
    logfmt_raw(
      (char *)&v189,
      0x1000u,
      0,
      base[7],
      "chain",
      5,
      3,
      base[3],
      (__int64)v150,
      0,
      base[7],
      "wc %d error_nonce %08x",
      v151,
      v152);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_ae/backend_ae.c",
      69,
      "check_nonce_ae",
      14,
      398,
      20,
      &v189);
    return 2;
  }
}
