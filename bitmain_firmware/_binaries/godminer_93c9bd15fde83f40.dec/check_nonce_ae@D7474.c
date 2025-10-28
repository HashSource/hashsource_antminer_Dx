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
  __int64 v24; // r2
  unsigned __int64 v25; // r4
  unsigned int v26; // r12
  int *v27; // r3
  int v28; // kr00_4
  unsigned int v29; // r12
  unsigned int v30; // r4
  __int64 v31; // kr38_8
  unsigned __int64 v32; // kr40_8
  unsigned int v33; // lr
  unsigned int v34; // r4
  __int64 v35; // r10
  int v36; // r12
  unsigned int v37; // r5
  unsigned int v38; // r8
  unsigned int v39; // r9
  unsigned int v40; // r7
  unsigned int v41; // r4
  int v42; // lr
  int v43; // r6
  unsigned __int64 v44; // kr50_8
  bool v45; // cf
  int v46; // r12
  unsigned int v47; // r7
  unsigned int v48; // r6
  unsigned int v49; // lr
  unsigned int v50; // r4
  unsigned int v51; // r8
  int v52; // r5
  unsigned __int64 v53; // kr58_8
  unsigned __int64 v54; // kr60_8
  unsigned int v55; // r6
  unsigned int v56; // r5
  int v57; // r9
  unsigned int v58; // r12
  unsigned __int64 v59; // kr30_8
  int v60; // r8
  unsigned int v61; // r4
  unsigned int v62; // r5
  unsigned int v63; // r8
  unsigned int v64; // r9
  int v65; // r5
  int v66; // r6
  int v67; // r7
  unsigned int v68; // r4
  unsigned int v69; // r5
  unsigned int v70; // lr
  unsigned int v71; // kr18_4
  unsigned int v72; // r12
  __int64 v73; // r8
  int v74; // r7
  int v75; // lr
  unsigned int v76; // r6
  unsigned int v77; // r12
  int v78; // r5
  unsigned int v79; // r4
  int v80; // r7
  unsigned int v81; // r12
  int v82; // lr
  int v83; // r5
  unsigned int v84; // r12
  unsigned int v85; // r4
  unsigned int v86; // r6
  unsigned int v87; // r7
  unsigned __int64 v88; // kr70_8
  int v89; // r12
  unsigned int v90; // r12
  unsigned __int64 v91; // kr68_8
  int v92; // r4
  __int64 v93; // r6
  unsigned int v94; // lr
  __int64 v95; // r4
  unsigned int v96; // kr78_4
  signed __int64 v97; // r4
  unsigned __int64 v98; // kr80_8
  __int64 v99; // kr90_8
  __int64 v100; // r2
  unsigned int v101; // r2
  unsigned __int64 v102; // r0
  int v103; // r4
  int v104; // r6
  char *v105; // r5
  int *v106; // r11
  unsigned int v107; // r4
  int v108; // t1
  unsigned int v109; // r0
  char *v110; // r3
  unsigned int v111; // r0
  int *v112; // r2
  int v113; // r1
  _DWORD *v114; // r0
  int v115; // r2
  unsigned __int64 v116; // r6
  _DWORD *v118; // r1
  int v119; // r6
  __int64 v120; // [sp+0h] [bp-1234h]
  __int64 v121; // [sp+8h] [bp-122Ch]
  __int64 v122; // [sp+10h] [bp-1224h]
  int v123; // [sp+18h] [bp-121Ch]
  int v124; // [sp+24h] [bp-1210h]
  int v125; // [sp+28h] [bp-120Ch]
  int *v126; // [sp+34h] [bp-1200h]
  int v127; // [sp+38h] [bp-11FCh]
  int v128; // [sp+3Ch] [bp-11F8h]
  unsigned int v129; // [sp+3Ch] [bp-11F8h]
  unsigned int v130; // [sp+3Ch] [bp-11F8h]
  unsigned int v131; // [sp+3Ch] [bp-11F8h]
  unsigned int v132; // [sp+3Ch] [bp-11F8h]
  int v133; // [sp+3Ch] [bp-11F8h]
  int v134; // [sp+40h] [bp-11F4h]
  int v135; // [sp+40h] [bp-11F4h]
  unsigned int v136; // [sp+48h] [bp-11ECh]
  unsigned int v137; // [sp+48h] [bp-11ECh]
  int v138; // [sp+48h] [bp-11ECh]
  unsigned int v139; // [sp+48h] [bp-11ECh]
  int v140; // [sp+48h] [bp-11ECh]
  unsigned int v141; // [sp+48h] [bp-11ECh]
  int v142; // [sp+48h] [bp-11ECh]
  unsigned int v143; // [sp+4Ch] [bp-11E8h]
  unsigned int v144; // [sp+4Ch] [bp-11E8h]
  int v145; // [sp+4Ch] [bp-11E8h]
  int v146; // [sp+50h] [bp-11E4h]
  __int64 v147; // [sp+54h] [bp-11E0h]
  __int64 v148; // [sp+5Ch] [bp-11D8h]
  int v149; // [sp+64h] [bp-11D0h]
  _QWORD *v150; // [sp+68h] [bp-11CCh]
  _DWORD *v151; // [sp+6Ch] [bp-11C8h]
  _DWORD *v152; // [sp+70h] [bp-11C4h]
  __int64 v153; // [sp+74h] [bp-11C0h]
  __int64 v154; // [sp+80h] [bp-11B4h]
  unsigned __int64 v155; // [sp+88h] [bp-11ACh]
  int v158; // [sp+9Ch] [bp-1198h]
  _BYTE v159[8]; // [sp+B4h] [bp-1180h]
  struct timeval tv; // [sp+BCh] [bp-1178h] BYREF
  struct timeval v161; // [sp+C4h] [bp-1170h] BYREF
  _DWORD v162[2]; // [sp+CCh] [bp-1168h] BYREF
  int v163; // [sp+D4h] [bp-1160h]
  _DWORD s[8]; // [sp+D8h] [bp-115Ch] BYREF
  __int64 v165; // [sp+F8h] [bp-113Ch]
  __int64 v166; // [sp+100h] [bp-1134h]
  __int64 v167; // [sp+108h] [bp-112Ch]
  __int64 v168; // [sp+110h] [bp-1124h]
  __int64 v169; // [sp+118h] [bp-111Ch]
  __int64 v170; // [sp+120h] [bp-1114h]
  __int64 v171; // [sp+128h] [bp-110Ch]
  __int64 v172; // [sp+130h] [bp-1104h]
  _DWORD dest[20]; // [sp+138h] [bp-10FCh] BYREF
  _QWORD base[21]; // [sp+188h] [bp-10ACh] BYREF
  __int64 v175; // [sp+230h] [bp-1004h] BYREF
  __int64 v176; // [sp+238h] [bp-FFCh]
  __int64 v177; // [sp+240h] [bp-FF4h]
  __int64 v178; // [sp+248h] [bp-FECh]
  int v179; // [sp+1230h] [bp-4h] BYREF

  v2 = a1[156];
  v158 = v2;
  memset(s, 0, sizeof(s));
  v4 = *(unsigned __int8 *)(a2 + 48);
  memcpy(dest, (const void *)(v2 + 80 * v4 + 11520), sizeof(dest));
  v8 = *(_DWORD *)(v2 + 4 * (v4 + 1408));
  v5 = v162;
  v6 = 0;
  v159[7] = dest[11];
  v159[1] = BYTE1(v8);
  v7 = HIBYTE(v8);
  v159[2] = BYTE2(v8);
  v8 = (unsigned __int8)v8;
  v159[3] = v7;
  v159[0] = v8;
  v159[5] = BYTE2(dest[11]);
  v159[6] = BYTE1(dest[11]);
  v159[4] = HIBYTE(dest[11]);
  while ( 1 )
  {
    v9 = v6 + 1;
    v10 = v6 + 2;
    LOBYTE(v11) = 65;
    v12 = v8 << 16;
    if ( v6 != 7 )
    {
      v13 = (unsigned __int8)v159[v9];
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
        v11 = (unsigned __int8)v159[v10];
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
    v8 = (unsigned __int8)v159[v9];
  }
  HIBYTE(v163) = 61;
  v18 = a1[33];
  v19 = *(unsigned __int16 *)(a2 + 85);
  dest[11] = v162[0];
  dest[12] = v162[1];
  dest[13] = v163;
  v127 = v18;
  memset(base, 0, sizeof(base));
  gettimeofday(&tv, 0);
  blake2b(&v175, (int)dest, 80);
  v147 = v178;
  v148 = v177;
  v167 = v177;
  v20 = __PAIR64__(HIDWORD(v176), v175);
  v21 = __PAIR64__(HIDWORD(v175), v176);
  v168 = v178;
  v165 = v175;
  v166 = v176;
  memset(&gEdges, 0, 0x540u);
  memset(gSols, 0, sizeof(gSols));
  v22 = calloc(0x100u, 8u);
  v23 = v19 >> 2;
  cuckoo[v18] = v22;
  if ( v23 )
  {
    HIDWORD(v24) = __SPAIR64__(HIDWORD(v20), v21) >> 19;
    LODWORD(v24) = ((_DWORD)v21 << 13) | (HIDWORD(v20) >> 19);
    v149 = a2 + 87 + 4 * v23;
    v25 = v20 + v21;
    HIDWORD(v154) = HIDWORD(v24) ^ HIDWORD(v25);
    v26 = (((unsigned int)v24 ^ (unsigned int)v25) << 17) | ((unsigned int)(HIDWORD(v24) ^ HIDWORD(v25)) >> 15);
    HIDWORD(v153) = (__int64)(v24 ^ v25) >> 15;
    v152 = (_DWORD *)((char *)&unk_1AA408 + 8 * v18);
    v27 = (int *)(a2 + 87);
    v134 = 8 * v18;
    LODWORD(v154) = v24 ^ v25;
    LODWORD(v153) = v26;
    v155 = __PAIR64__(v25, HIDWORD(v25));
    v150 = (_QWORD *)((char *)&unk_1AA3C8 + 8 * v18);
    v151 = (_DWORD *)((char *)&unk_1AA3E8 + 8 * v18);
    do
    {
      v126 = v27 + 1;
      v123 = *v27;
      v28 = v147 ^ (2 * *v27);
      v29 = ((HIDWORD(v147) << 16) | (((unsigned int)v147 ^ (2 * v123)) >> 16))
          ^ ((v148 + (v147 ^ (unsigned __int64)(unsigned int)(2 * v123))) >> 32);
      v30 = ((v28 << 16) | HIWORD(HIDWORD(v147))) ^ (v148 + v28);
      v31 = v148 + (v147 ^ (unsigned int)(2 * *v27)) + v154;
      v32 = __PAIR64__(v29, v30) + v155;
      v33 = ((v30 << 21) | (v29 >> 11)) ^ (v30 + v155);
      v34 = ((v29 << 21) | (v30 >> 11)) ^ ((__PAIR64__(v29, v30) + v155) >> 32);
      v136 = (((unsigned int)v31 ^ (unsigned int)v153) << 13) | ((unsigned int)(HIDWORD(v31) ^ HIDWORD(v153)) >> 19);
      v36 = (v32 + (v31 ^ v153)) >> 32;
      LODWORD(v35) = v32 + (v31 ^ v153);
      v37 = ((v33 << 16) | HIWORD(v34)) ^ (HIDWORD(v31) + v33);
      v38 = ((v31 ^ v153) >> 19) ^ v36;
      HIDWORD(v35) = (__PAIR64__((int)v148 + v28 + (int)v154, HIDWORD(v31)) + __PAIR64__(v34, v33)) >> 32;
      v39 = HIDWORD(v31) + v33;
      v40 = ((v34 << 16) | HIWORD(v33)) ^ HIDWORD(v35);
      v41 = v136 ^ v35;
      v42 = (v37 << 21) | (v40 >> 11);
      v43 = (v40 << 21) | (v37 >> 11);
      v44 = __PAIR64__(v38, v39) + (v35 ^ v136);
      v137 = v39 + (v35 ^ v136);
      v45 = __CFADD__(v36, v37);
      v46 = v36 + v37;
      LODWORD(v35) = v41 << 17;
      v47 = v40 + v45 + v32 + (v31 ^ v153);
      v48 = v43 ^ v47;
      v49 = v42 ^ v46;
      v50 = ((v38 << 17) | (v41 >> 15)) ^ HIDWORD(v44);
      v51 = (v35 | (v38 >> 15)) ^ v137;
      v128 = (v48 << 16) | HIWORD(v49);
      v52 = (v49 << 16) | HIWORD(v48);
      HIDWORD(v35) = (v50 << 13) | (v51 >> 19);
      v53 = __PAIR64__(v47, v46 ^ (unsigned int)(2 * *v27)) + __PAIR64__(v50, v51);
      v54 = __PAIR64__(v137, HIDWORD(v44) ^ 0xFFu) + __PAIR64__(v48, v49);
      v55 = ((v51 << 13) | (v50 >> 19)) ^ ((v46 ^ (2 * *v27)) + v51);
      v56 = v52 ^ v54;
      v57 = (v128 ^ HIDWORD(v54)) << 21;
      v129 = v128 ^ HIDWORD(v54);
      v59 = v54
          + __PAIR64__(
              HIDWORD(v35)
            ^ (unsigned int)((__PAIR64__(v47, v46 ^ (unsigned int)(2 * *v27)) + __PAIR64__(v50, v51)) >> 32),
              v55);
      v58 = (v54
           + __PAIR64__(
               HIDWORD(v35)
             ^ (unsigned int)((__PAIR64__(v47, v46 ^ (unsigned int)(2 * *v27)) + __PAIR64__(v50, v51)) >> 32),
               v55)) >> 32;
      v138 = v57 | (v56 >> 11);
      v60 = (v56 << 21) | (v129 >> 11);
      v61 = ((v55 << 17) | (v58 >> 15)) ^ v59;
      v45 = __CFADD__(HIDWORD(v53), v56);
      v62 = HIDWORD(v53) + v56;
      HIDWORD(v35) = (((HIDWORD(v35) ^ HIDWORD(v53)) << 17) | (v55 >> 15)) ^ v58;
      v63 = v60 ^ v62;
      v64 = v62;
      v143 = v129 + v45 + (_DWORD)v53;
      v65 = (v61 << 13) | (HIDWORD(v35) >> 19);
      v66 = (v138 ^ v143) << 16;
      v139 = v138 ^ v143;
      v67 = (HIDWORD(v35) << 13) | (v61 >> 19);
      v45 = __CFADD__(v64, v61);
      v68 = v64 + v61;
      v69 = v65 ^ v68;
      v70 = v63 << 16;
      HIDWORD(v35) += v45 + v143;
      v71 = v58;
      v72 = v67 ^ HIDWORD(v35);
      v146 = (__PAIR64__(v59, v71) + __PAIR64__(v139, v63)) >> 32;
      LODWORD(v35) = v71 + v63;
      LODWORD(v73) = (v66 | HIWORD(v63)) ^ v146;
      HIDWORD(v73) = (v70 | HIWORD(v139)) ^ v35;
      v45 = __CFADD__((_DWORD)v35, v69);
      LODWORD(v35) = v35 + v69;
      v74 = ((v67 ^ HIDWORD(v35)) << 17) | (v69 >> 15);
      v75 = v73 >> 11;
      v76 = ((v69 << 17) | (v72 >> 15)) ^ v35;
      v77 = v72 + v45 + v146;
      v45 = __CFADD__(HIDWORD(v35), HIDWORD(v73));
      v78 = HIDWORD(v35) + HIDWORD(v73);
      HIDWORD(v73) = ((_DWORD)v73 << 21) | (HIDWORD(v73) >> 11);
      LODWORD(v73) = v73 + v45 + v68;
      v130 = v77;
      v79 = v74 ^ v77;
      v140 = v73;
      v80 = v78;
      v81 = HIDWORD(v73) ^ v73;
      LODWORD(v73) = v75 ^ v78;
      v144 = v81;
      HIDWORD(v73) = (v79 << 13) | (v76 >> 19);
      v82 = ((v75 ^ v78) << 16) | HIWORD(v81);
      v83 = v81 << 16;
      v84 = v130;
      HIDWORD(v35) = (v76 << 13) | (v79 >> 19);
      v131 = v80 + v76;
      v85 = v79 + __CFADD__(v80, v76) + v140;
      v86 = v35;
      LODWORD(v35) = v131;
      v88 = __PAIR64__(v86, v84) + __PAIR64__(v144, v73);
      v87 = v84 + v73;
      v89 = HIDWORD(v73) ^ v85;
      HIDWORD(v35) ^= v131;
      v132 = (v83 | WORD1(v73)) ^ HIDWORD(v88);
      HIDWORD(v73) = ((HIDWORD(v73) ^ v85) << 17) | (HIDWORD(v35) >> 15);
      v91 = __PAIR64__(HIDWORD(v88), v87) + __PAIR64__(v89, HIDWORD(v35));
      v90 = (__PAIR64__(HIDWORD(v88), v87) + __PAIR64__(v89, HIDWORD(v35))) >> 32;
      v45 = __CFADD__(v85, v82 ^ v88);
      v92 = v85 + (v82 ^ v88);
      LODWORD(v93) = (((v82 ^ (unsigned int)v88) << 21) | (v132 >> 11)) ^ v92;
      HIDWORD(v73) ^= v90;
      HIDWORD(v93) = ((v132 << 21) | ((v82 ^ (unsigned int)v88) >> 11)) ^ (v132 + v45 + (_DWORD)v35);
      v141 = HIDWORD(v93);
      v94 = ((HIDWORD(v35) << 17) | (v90 >> 15)) ^ v91;
      HIDWORD(v35) = v93 >> 16;
      HIDWORD(v93) = ((_DWORD)v93 << 16) | HIWORD(HIDWORD(v93));
      LODWORD(v73) = v92;
      HIDWORD(v95) = (HIDWORD(v73) << 13) | (v94 >> 19);
      v96 = v92 + v94;
      HIDWORD(v73) = (v73 + __PAIR64__(v132 + v45 + (_DWORD)v35, v94)) >> 32;
      LODWORD(v95) = (v94 << 13) | (HIDWORD(v73) >> 19);
      v97 = v95 ^ __PAIR64__(HIDWORD(v73), v96);
      v98 = __PAIR64__(v91, v90) + __PAIR64__(v141, v93);
      HIDWORD(v35) ^= (__PAIR64__(v91, v90) + __PAIR64__(v141, v93)) >> 32;
      LODWORD(v35) = HIDWORD(v73);
      v145 = ((HIDWORD(v93) ^ (v90 + (_DWORD)v93)) << 21) | (HIDWORD(v35) >> 11);
      v142 = v97 >> 15;
      v133 = ((_DWORD)v97 << 17) | (HIDWORD(v97) >> 15);
      v99 = v35 + __PAIR64__(v96, HIDWORD(v93) ^ (v90 + (unsigned int)v93));
      HIDWORD(v73) = ((HIDWORD(v35) << 21) | ((HIDWORD(v93) ^ (unsigned int)v98) >> 11))
                   ^ ((v35 + __PAIR64__(v96, HIDWORD(v93) ^ (v90 + (unsigned int)v93))) >> 32);
      v120 = v166;
      v121 = v167;
      v122 = v168;
      v100 = v165;
      *v152 = v145 ^ (v35 + (HIDWORD(v93) ^ (v90 + v93)));
      v152[1] = HIDWORD(v73);
      *v150 = v35 + __PAIR64__(v96, HIDWORD(v93) ^ (v90 + (unsigned int)v93));
      *(_DWORD *)((char *)&unk_1AA428 + v134) = (v98 + v97) >> 32;
      *(_DWORD *)((char *)&unk_1AA428 + v134 + 4) = v98 + v97;
      v151[1] = v142 ^ ((v98 + v97) >> 32);
      *v151 = v133 ^ (v98 + v97);
      v101 = sip_node_ae(v127, v100, v120, v121, v122, HIDWORD(v122), v123, 1) >> 1;
      LODWORD(v102) = v127;
      HIDWORD(v102) = ((((v133
                        ^ ((_DWORD)v98 + (_DWORD)v97)
                        ^ v145
                        ^ (unsigned int)v99
                        ^ (unsigned int)v99
                        ^ ((v98 + v97) >> 32)) << 17)
                      | ((HIDWORD(v99) ^ v142 ^ ((v98 + v97) >> 32) ^ HIDWORD(v73) ^ (unsigned int)(v98 + v97)) >> 15)) >> 1)
                    & 0xFFFFFFF;
      graph_add_edge_ae(v102, v101);
      v27 = v126;
    }
    while ( (int *)v149 != v126 );
    v103 = (unsigned __int8)gSols[172 * v127];
    v169 = v165;
    v170 = v166;
    v135 = v103;
    v171 = v167;
    v172 = v168;
    if ( v103 )
    {
      v104 = 0;
      v105 = (char *)&unk_1AD724 + 336 * v127;
      v106 = (int *)(a2 + 87);
      do
      {
        v107 = sip_node_ae(v127, v169, v170, v171, v172, HIDWORD(v172), *v106, 0) >> 1;
        v108 = *v106++;
        v109 = sip_node_ae(v127, v169, v170, v171, v172, HIDWORD(v172), v108, 1);
        v110 = (char *)&gEdges + 336 * v127 + 4;
        v111 = v109 >> 1;
        do
        {
          while ( v107 != *((_DWORD *)v110 - 1) || v111 != *(_DWORD *)v110 )
          {
            v110 += 8;
            if ( v110 == v105 )
              goto LABEL_22;
          }
          v110 += 8;
          v112 = &v179 + v104++;
          *(v112 - 1066) = *(v106 - 1);
        }
        while ( v110 != v105 );
LABEL_22:
        ;
      }
      while ( v126 != v106 );
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw((char *)&v175, 0x1000u, 0, "[FindCycle] get golden nonce!");
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_ae/backend_ae.c",
        152,
        "findcycle_ae",
        12,
        311,
        20,
        &v175);
      qsort(base, 0x2Au, 4u, (__compar_fn_t)sub_CE6C8);
      memcpy((void *)(a2 + 87), base, 0xA8u);
      v22 = (void *)cuckoo[v127];
    }
    else
    {
      v22 = (void *)cuckoo[v127];
    }
  }
  else
  {
    v135 = 0;
  }
  free(v22);
  gettimeofday(&v161, 0);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(
    (char *)&v175,
    0x1000u,
    0,
    "[FindCycle], runtime_id:%d time: %ld us",
    v127,
    v161.tv_usec + (_DWORD)&loc_F4240 * v161.tv_sec - 1000000 * tv.tv_sec - tv.tv_usec);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ae/backend_ae.c",
    152,
    "findcycle_ae",
    12,
    320,
    20,
    &v175);
  if ( v135 )
  {
    memset(s, 0, sizeof(s));
    v113 = 0;
    v114 = &dest[19];
    do
    {
      v115 = a2 + 4 * (v113 + 20);
      ++v113;
      v114[1] = (unsigned __int8)HIBYTE(*(_DWORD *)(v115 + 7))
              | (unsigned __int16)((unsigned __int8)BYTE2(*(_DWORD *)(v115 + 7)) << 8)
              | ((unsigned __int8)BYTE1(*(_DWORD *)(v115 + 7)) << 16) & 0xFFFFFF
              | ((unsigned __int8)*(_DWORD *)(v115 + 7) << 24);
      ++v114;
    }
    while ( v113 != 42 );
    blake2b(s, (int)base, 168);
    LODWORD(v116) = HIBYTE(s[1])
                  | (unsigned __int16)(BYTE2(s[1]) << 8)
                  | (BYTE1(s[1]) << 16) & 0xFFFFFF
                  | (LOBYTE(s[1]) << 24);
    HIDWORD(v116) = HIBYTE(s[0])
                  | (unsigned __int16)(BYTE2(s[0]) << 8)
                  | (BYTE1(s[0]) << 16) & 0xFFFFFF
                  | (LOBYTE(s[0]) << 24);
    if ( *(_QWORD *)(v158 + 8 * (*(unsigned __int8 *)(a2 + 48) + 768)) < v116 )
    {
      pthread_mutex_lock(&stru_1A8A24);
      v118 = (_DWORD *)(v158 + 8 * (*(unsigned __int8 *)(a2 + 48) + 768));
      logfmt_raw(
        (char *)&v175,
        0x1000u,
        0,
        "wc %d nonce %08x hw target (%016llx > %016llx) not reach pool\n",
        *(unsigned __int8 *)(a2 + 48),
        *(_DWORD *)(a2 + 81),
        v116,
        *v118,
        v118[1]);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_ae/backend_ae.c",
        152,
        "check_nonce_ae",
        14,
        410,
        20,
        &v175);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    pthread_mutex_lock(&stru_1A8A24);
    v119 = a1[34];
    HIDWORD(base[0]) = 5;
    ++dword_1A8A20[0];
    LODWORD(base[0]) = "chain";
    LODWORD(base[1]) = 3;
    v125 = *(_DWORD *)(a2 + 81);
    v124 = *(unsigned __int8 *)(a2 + 48);
    LODWORD(base[3]) = 0;
    base[2] = v119;
    logfmt_raw(
      (char *)&v175,
      0x1000u,
      0,
      HIDWORD(base[3]),
      "chain",
      5,
      __PAIR64__(HIDWORD(base[1]), 3),
      (__int64)v119,
      __PAIR64__(HIDWORD(base[3]), 0),
      "wc %d error_nonce %08x",
      v124,
      v125);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_ae/backend_ae.c",
      152,
      "check_nonce_ae",
      14,
      398,
      20,
      &v175);
    return 2;
  }
}
