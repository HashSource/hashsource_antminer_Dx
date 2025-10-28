unsigned int __fastcall sub_69FD0(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  int *v8; // r5
  int *v9; // r12
  _QWORD *v10; // r4
  int v11; // r0
  int v12; // r1
  _DWORD *v13; // lr
  int v14; // r2
  int v15; // r3
  int v16; // r7
  unsigned int v17; // lr
  int v18; // r5
  _DWORD *v19; // r12
  char *v20; // lr
  int v21; // r4
  int v22; // r3
  int v23; // r0
  unsigned int v24; // r0
  int v25; // lr
  unsigned __int64 v26; // kr118_8
  unsigned __int64 v27; // kr130_8
  int v28; // r4
  int v29; // r9
  int v30; // r1
  _BYTE *v31; // t2
  int v32; // r3
  int v33; // r9
  unsigned __int64 v34; // kr58_8
  int v35; // r4
  unsigned int v36; // r10
  unsigned int v37; // lr
  unsigned int v38; // r0
  int v39; // r7
  int v40; // r2
  unsigned __int64 v41; // kr60_8
  unsigned int v42; // r4
  unsigned int v43; // r9
  unsigned int v44; // r3
  int v45; // r9
  int v46; // r4
  unsigned int v47; // r4
  unsigned __int64 v48; // r8
  int v49; // r12
  unsigned int v50; // r11
  unsigned int v51; // lr
  unsigned __int64 v52; // kr78_8
  unsigned int v53; // r3
  unsigned int v54; // r4
  unsigned int v55; // r10
  unsigned int v56; // r12
  unsigned __int64 v57; // kr88_8
  unsigned int v58; // r12
  unsigned __int64 v59; // kr98_8
  unsigned int v60; // r6
  unsigned int v61; // r0
  unsigned int v62; // r2
  int v63; // r0
  unsigned int v64; // lr
  __int64 v65; // krB0_8
  int v66; // r11
  unsigned __int64 v67; // r0
  int v68; // r7
  unsigned int v69; // r6
  int v70; // r12
  unsigned __int64 v71; // kr30_8
  unsigned int v72; // r2
  int v73; // r2
  int v74; // lr
  int v75; // r2
  unsigned int v76; // r7
  unsigned int v77; // r11
  unsigned __int64 v78; // krD0_8
  int v79; // r10
  int v80; // kr2C_4
  __int64 v81; // r0
  unsigned int v82; // lr
  unsigned int v83; // r5
  unsigned int v84; // r2
  int v85; // r10
  int v86; // lr
  unsigned int v87; // r3
  unsigned int v88; // kr38_4
  int v89; // r2
  __int64 v90; // r4
  unsigned int v91; // r7
  unsigned int v92; // r2
  int v93; // r11
  int v94; // r2
  signed __int64 v95; // r4
  unsigned int v96; // r10
  unsigned int v97; // lr
  int v98; // r6
  int v99; // r3
  unsigned __int64 v100; // kr100_8
  unsigned __int64 v101; // kr108_8
  unsigned int v102; // r6
  unsigned int v103; // r12
  int v104; // r3
  unsigned __int64 v105; // kr110_8
  unsigned int v106; // lr
  int v107; // r7
  unsigned int v108; // r12
  unsigned int v109; // r3
  int v110; // r11
  __int64 v111; // kr120_8
  __int64 v112; // r6
  unsigned int v113; // lr
  __int64 v114; // r8
  unsigned int v115; // r11
  int v116; // lr
  unsigned int v117; // lr
  int v118; // r2
  int v119; // r10
  int v120; // r4
  int v121; // r9
  int v122; // r8
  int v123; // r1
  unsigned int result; // r0
  int v125; // r7
  int v126; // r5
  int v127; // lr
  int v128; // r3
  int v129; // r2
  int v130; // r11
  _DWORD *v131; // r12
  _BYTE *v132; // [sp+4h] [bp-248h]
  int v133; // [sp+4h] [bp-248h]
  int v134; // [sp+8h] [bp-244h]
  int v135; // [sp+8h] [bp-244h]
  int v136; // [sp+8h] [bp-244h]
  int v137; // [sp+8h] [bp-244h]
  unsigned int v138; // [sp+Ch] [bp-240h]
  unsigned int v139; // [sp+Ch] [bp-240h]
  unsigned int v140; // [sp+Ch] [bp-240h]
  int v141; // [sp+10h] [bp-23Ch]
  unsigned int v142; // [sp+10h] [bp-23Ch]
  int v143; // [sp+10h] [bp-23Ch]
  int v144; // [sp+10h] [bp-23Ch]
  int v145; // [sp+14h] [bp-238h]
  unsigned int v146; // [sp+14h] [bp-238h]
  unsigned int v147; // [sp+14h] [bp-238h]
  unsigned int v148; // [sp+18h] [bp-234h]
  int v149; // [sp+18h] [bp-234h]
  unsigned int v150; // [sp+18h] [bp-234h]
  int v151; // [sp+1Ch] [bp-230h]
  unsigned __int64 v152; // [sp+1Ch] [bp-230h]
  unsigned int v153; // [sp+20h] [bp-22Ch]
  int v154; // [sp+24h] [bp-228h]
  __int64 v155; // [sp+24h] [bp-228h]
  int v156; // [sp+28h] [bp-224h]
  unsigned __int64 v157; // [sp+2Ch] [bp-220h]
  unsigned __int64 v158; // [sp+2Ch] [bp-220h]
  unsigned __int64 v159; // [sp+34h] [bp-218h]
  unsigned __int64 v160; // [sp+3Ch] [bp-210h]
  unsigned __int64 v161; // [sp+3Ch] [bp-210h]
  int v162; // [sp+44h] [bp-208h]
  unsigned int v163; // [sp+44h] [bp-208h]
  unsigned int v164; // [sp+44h] [bp-208h]
  unsigned int v165; // [sp+48h] [bp-204h]
  unsigned __int64 v166; // [sp+4Ch] [bp-200h]
  __int64 v167; // [sp+4Ch] [bp-200h]
  int v168; // [sp+54h] [bp-1F8h]
  __int64 v169; // [sp+58h] [bp-1F4h]
  unsigned int v170; // [sp+58h] [bp-1F4h]
  unsigned int v171; // [sp+60h] [bp-1ECh]
  __int64 v172; // [sp+64h] [bp-1E8h]
  int v173; // [sp+64h] [bp-1E8h]
  int v174; // [sp+68h] [bp-1E4h]
  __int64 v175; // [sp+6Ch] [bp-1E0h]
  int v176; // [sp+6Ch] [bp-1E0h]
  int v177; // [sp+70h] [bp-1DCh]
  int v178; // [sp+74h] [bp-1D8h]
  __int64 v179; // [sp+74h] [bp-1D8h]
  unsigned int v180; // [sp+78h] [bp-1D4h]
  __int64 v181; // [sp+7Ch] [bp-1D0h] BYREF
  _DWORD *v182; // [sp+84h] [bp-1C8h]
  _QWORD v183[15]; // [sp+88h] [bp-1C4h] BYREF
  char v184; // [sp+100h] [bp-14Ch] BYREF
  _QWORD v185[4]; // [sp+108h] [bp-144h] BYREF
  int v186; // [sp+128h] [bp-124h]
  unsigned int v187; // [sp+12Ch] [bp-120h]
  int v188; // [sp+130h] [bp-11Ch]
  int v189; // [sp+134h] [bp-118h]
  unsigned int v190; // [sp+138h] [bp-114h]
  int v191; // [sp+13Ch] [bp-110h]
  __int64 v192; // [sp+140h] [bp-10Ch]
  int v193; // [sp+148h] [bp-104h]
  int v194; // [sp+14Ch] [bp-100h]
  unsigned __int64 v195; // [sp+150h] [bp-FCh]
  int v196; // [sp+158h] [bp-F4h]
  int v197; // [sp+15Ch] [bp-F0h]
  int v198; // [sp+160h] [bp-ECh]
  int v199; // [sp+164h] [bp-E8h]
  int v200; // [sp+168h] [bp-E4h]
  int v201; // [sp+16Ch] [bp-E0h]
  int v202; // [sp+170h] [bp-DCh]
  unsigned int v203; // [sp+174h] [bp-D8h]
  int v204; // [sp+178h] [bp-D4h]
  int v205; // [sp+17Ch] [bp-D0h]
  int v206; // [sp+180h] [bp-CCh]
  int v207; // [sp+184h] [bp-C8h]
  _BYTE dest[196]; // [sp+188h] [bp-C4h] BYREF

  v182 = a1;
  v8 = a1 + 48;
  memcpy(dest, &unk_163558, 0xC0u);
  v9 = a1 + 32;
  v10 = v185;
  do
  {
    v11 = *v9;
    v9 += 4;
    v12 = *(v9 - 3);
    v13 = v10;
    v14 = *(v9 - 2);
    v10 += 2;
    v15 = *(v9 - 1);
    *v13 = v11;
    v13[1] = v12;
    v13[2] = v14;
    v13[3] = v15;
  }
  while ( v9 != v8 );
  v193 = -205731576;
  v194 = 1779033703;
  v195 = 0xBB67AE8584CAA73BLL;
  v196 = -23791573;
  v197 = 1013904242;
  v198 = 1595750129;
  v199 = -1521486534;
  v200 = -1377402159;
  v201 = 1359893119;
  v202 = 725511199;
  v203 = -1694144372;
  v204 = -79577749;
  v205 = 528734635;
  v206 = 327033209;
  v207 = 1541459225;
  v16 = v182[50];
  v17 = v182[48] ^ 0xADE682D1;
  v18 = v182[51];
  HIDWORD(v175) = v182[49] ^ 0x510E527F;
  v201 = HIDWORD(v175);
  v178 = v16 ^ 0x2B3E6C1F;
  v180 = v18 ^ 0x9B05688C;
  v202 = v16 ^ 0x2B3E6C1F;
  v203 = v18 ^ 0x9B05688C;
  LODWORD(v175) = v17;
  v200 = v17;
  v172 = 0x1F83D9ABFB41BD6BLL;
  if ( a2 )
  {
    v172 = 0xE07C265404BE4294LL;
    v204 = 79577748;
    v205 = -528734636;
  }
  v19 = v182;
  v20 = (char *)&v181 + 4;
  do
  {
    v21 = *((unsigned __int8 *)v19 + 2);
    v19 += 2;
    v22 = *((unsigned __int8 *)v19 - 4);
    v23 = *((unsigned __int8 *)v19 - 3);
    *((_DWORD *)v20 + 2) = (v21 << 16)
                         ^ (*((unsigned __int8 *)v19 - 7) << 8)
                         ^ *((unsigned __int8 *)v19 - 8)
                         ^ (*((unsigned __int8 *)v19 - 5) << 24);
    v20 += 8;
    *((_DWORD *)v20 + 1) = v22
                         ^ (v23 << 8)
                         ^ (*((unsigned __int8 *)v19 - 2) << 16)
                         ^ (*((unsigned __int8 *)v19 - 1) << 24);
  }
  while ( &v184 != v20 );
  v24 = v187;
  v157 = v185[0];
  v132 = &dest[47];
  v25 = v186;
  v151 = v194;
  v159 = v185[1];
  v145 = v188;
  v154 = v189;
  v160 = v185[2];
  v148 = v190;
  v162 = v191;
  v134 = v196;
  v165 = v197;
  v166 = v185[3];
  v169 = v192;
  v168 = v206;
  v138 = v207;
  v141 = v198;
  v171 = v199;
  LODWORD(v26) = v193;
  v27 = v195;
  do
  {
    v28 = HIDWORD(v175);
    v29 = v175;
    v30 = (unsigned __int8)*(v132 - 47);
    v31 = v132;
    __pld(v132);
    v30 *= 8;
    v32 = *(_DWORD *)((char *)v183 + v30);
    v33 = v29 ^ (v25 + v32 + v157);
    v34 = __PAIR64__(*(_DWORD *)((char *)v183 + v30 + 4) + __CFADD__(v25, v32) + v24, v25 + v32) + v157;
    v35 = v28 ^ ((__PAIR64__(*(_DWORD *)((char *)v183 + v30 + 4) + __CFADD__(v25, v32) + v24, v25 + v32) + v157) >> 32);
    v36 = v35 + v26;
    v37 = v25 ^ (v35 + v26);
    v38 = v24 ^ (v151 + __CFADD__(v35, (_DWORD)v26) + v33);
    v153 = v151 + __CFADD__(v35, (_DWORD)v26) + v33;
    v39 = HIBYTE(v37) | (v38 << 8);
    v40 = HIBYTE(v38) | (v37 << 8);
    v41 = v34 + v183[(unsigned __int8)*(v31 - 46)];
    v42 = v35 ^ (v41 + v39);
    v43 = v33 ^ ((v41 + __PAIR64__(v40, v39)) >> 32);
    v44 = HIWORD(v43);
    v158 = v41 + __PAIR64__(v40, v39);
    v45 = HIWORD(v42) | (v43 << 16);
    v46 = v44 | (v42 << 16);
    v152 = __PAIR64__(v153, v36) + __PAIR64__(v46, v45);
    v177 = v46;
    v176 = v45;
    v47 = v178 ^ (v145 + LODWORD(v183[(unsigned __int8)*(v31 - 45)]) + v159);
    v48 = __PAIR64__(
            v47,
            v180
          ^ ((__PAIR64__(
                HIDWORD(v183[(unsigned __int8)*(v31 - 45)])
              + (unsigned int)__CFADD__(v145, v183[(unsigned __int8)*(v31 - 45)])
              + v154,
                v145 + LODWORD(v183[(unsigned __int8)*(v31 - 45)]))
            + v159) >> 32))
        + v27;
    v49 = (unsigned __int8)*(v132 - 43);
    v50 = (((unsigned int)v48 ^ v145) >> 24) | ((HIDWORD(v48) ^ v154) << 8);
    v51 = ((HIDWORD(v48) ^ (unsigned int)v154) >> 24) | (((unsigned int)v48 ^ v145) << 8);
    v52 = __PAIR64__(
            HIDWORD(v183[(unsigned __int8)*(v31 - 45)])
          + (unsigned int)__CFADD__(v145, v183[(unsigned __int8)*(v31 - 45)])
          + v154,
            v145 + LODWORD(v183[(unsigned __int8)*(v31 - 45)]))
        + v159
        + v183[(unsigned __int8)*(v132 - 44)]
        + __PAIR64__(v51, v50);
    v53 = v180
        ^ ((__PAIR64__(
              HIDWORD(v183[(unsigned __int8)*(v31 - 45)])
            + (unsigned int)__CFADD__(v145, v183[(unsigned __int8)*(v31 - 45)])
            + v154,
              v145 + LODWORD(v183[(unsigned __int8)*(v31 - 45)]))
          + v159) >> 32)
        ^ v52;
    v54 = v47 ^ HIDWORD(v52);
    v55 = v183[v49];
    LODWORD(v181) = v39 ^ v152;
    HIDWORD(v179) = HIWORD(v54) | (v53 << 16);
    v56 = HIDWORD(v183[v49]);
    HIDWORD(v181) = v40 ^ HIDWORD(v152);
    LODWORD(v179) = HIWORD(v53) | (v54 << 16);
    v57 = __PAIR64__(v162, v148) + __PAIR64__(v56, v55) + v160;
    v155 = v48 + v179;
    HIDWORD(v48) = ((HIDWORD(v172) ^ HIDWORD(v57)) + v134) ^ v148;
    v58 = ((__PAIR64__((unsigned int)v172 ^ (unsigned int)v57, HIDWORD(v172) ^ HIDWORD(v57)) + __PAIR64__(v165, v134)) >> 32)
        ^ v162;
    v59 = v57 + v183[(unsigned __int8)*(v132 - 42)];
    v149 = HIBYTE(HIDWORD(v48)) | (v58 << 8);
    HIDWORD(v48) = HIBYTE(v58) | (HIDWORD(v48) << 8);
    v60 = HIDWORD(v172) ^ HIDWORD(v57) ^ (v59 + v149);
    v161 = v59 + __PAIR64__(HIDWORD(v48), v149);
    v61 = v172 ^ v57 ^ ((v59 + __PAIR64__(HIDWORD(v48), v149)) >> 32);
    v62 = HIWORD(v61);
    v63 = HIWORD(v60) | (v61 << 16);
    LODWORD(v48) = (__PAIR64__((unsigned int)v172 ^ (unsigned int)v57, HIDWORD(v172) ^ HIDWORD(v57))
                  + __PAIR64__(v165, v134)
                  + __PAIR64__(v62 | (v60 << 16), v63)) >> 32;
    v146 = v50 ^ v155;
    HIDWORD(v48) ^= v48;
    v64 = v51 ^ HIDWORD(v155);
    v135 = (HIDWORD(v172) ^ HIDWORD(v57)) + v134 + v63;
    v65 = v169 + v183[(unsigned __int8)*(v132 - 41)];
    v173 = v63;
    v174 = v62 | (v60 << 16);
    v66 = (v65 + v166) >> 32;
    v67 = __PAIR64__(v138, v168) ^ (v65 + v166);
    v68 = (v138 ^ v66) + v141;
    v139 = v171 + __CFADD__(v138 ^ v66, v141) + (v168 ^ (v65 + v166));
    v69 = ((v68 ^ (unsigned int)v169) >> 24) | ((v139 ^ HIDWORD(v169)) << 8);
    v163 = ((v139 ^ HIDWORD(v169)) >> 24) | ((v68 ^ (unsigned int)v169) << 8);
    HIDWORD(v67) ^= v65 + v166 + LODWORD(v183[(unsigned __int8)*(v132 - 40)]) + v69;
    LODWORD(v67) = v67 ^ v58;
    v71 = v65 + v166 + v183[(unsigned __int8)*(v132 - 40)] + __PAIR64__(v163, v69);
    v70 = HIDWORD(v71);
    LODWORD(v167) = v71;
    v72 = WORD1(v67);
    HIDWORD(v167) = v70;
    LODWORD(v67) = HIWORD(HIDWORD(v67)) | ((_DWORD)v67 << 16);
    v142 = v149 ^ v135;
    HIDWORD(v67) = v72 | (HIDWORD(v67) << 16);
    v73 = 2 * v64;
    v74 = (2 * v146) | (v64 >> 31);
    v75 = v73 | (v146 >> 31);
    v77 = (__PAIR64__(v139, v68) + v67) >> 32;
    v76 = v68 + v67;
    v78 = v158 + v183[(unsigned __int8)*(v132 - 39)] + __PAIR64__(v75, v74);
    v79 = (unsigned __int8)*(v132 - 38);
    v80 = v135;
    v81 = v67 ^ v78;
    v136 = v135 + HIDWORD(v81);
    v82 = v74 ^ v136;
    v83 = v183[v79];
    LODWORD(v48) = (__PAIR64__(v48, v80) + __PAIR64__(v81, HIDWORD(v81))) >> 32;
    v84 = v75 ^ v48;
    v150 = v69 ^ v76;
    v140 = HIDWORD(v183[v79]);
    v85 = HIBYTE(v82) | (v84 << 8);
    v86 = HIBYTE(v84) | (v82 << 8);
    HIDWORD(v81) ^= v78 + v83 + v85;
    v157 = v78 + __PAIR64__(v140, v83) + __PAIR64__(v86, v85);
    LODWORD(v81) = v81 ^ HIDWORD(v157);
    v168 = HIWORD(HIDWORD(v81)) | ((_DWORD)v81 << 16);
    v87 = v163 ^ v77;
    v88 = v136;
    v138 = v81 >> 16;
    v134 = v136 + v168;
    v89 = (2 * HIDWORD(v48)) | (v142 >> 31);
    HIDWORD(v48) = (2 * v142) | (HIDWORD(v48) >> 31);
    v165 = (__PAIR64__(v48, v88) + ((v81 << 16) | HIWORD(HIDWORD(v81)))) >> 32;
    v147 = v86 ^ v165;
    LODWORD(v81) = (v52 + v183[(unsigned __int8)*(v132 - 37)] + __PAIR64__(v89, HIDWORD(v48))) >> 32;
    HIDWORD(v81) = v52 + LODWORD(v183[(unsigned __int8)*(v132 - 37)]) + HIDWORD(v48);
    HIDWORD(v90) = v176 ^ HIDWORD(v81);
    LODWORD(v90) = v177 ^ v81;
    LODWORD(v48) = (__PAIR64__(v77, v76) + v90) >> 32;
    v91 = v76 + (v177 ^ v81);
    HIDWORD(v48) ^= v91;
    v92 = v89 ^ v48;
    v93 = HIBYTE(HIDWORD(v48)) | (v92 << 8);
    v143 = (unsigned __int8)*(v132 - 35);
    v94 = HIBYTE(v92) | (HIDWORD(v48) << 8);
    v95 = v90 ^ (__PAIR64__(v81, HIDWORD(v81)) + v183[(unsigned __int8)*(v132 - 36)] + __PAIR64__(v94, v93));
    v164 = v85 ^ v134;
    v96 = v183[v143];
    v159 = __PAIR64__(v81, HIDWORD(v81)) + v183[(unsigned __int8)*(v132 - 36)] + __PAIR64__(v94, v93);
    v97 = HIDWORD(v183[v143]);
    LODWORD(v175) = v95 >> 16;
    HIDWORD(v175) = HIWORD(HIDWORD(v95)) | ((_DWORD)v95 << 16);
    v98 = (2 * v87) | (v150 >> 31);
    v141 = v91 + v175;
    v99 = (2 * v150) | (v87 >> 31);
    v171 = (__PAIR64__(v48, v91) + v175) >> 32;
    v100 = v161 + __PAIR64__(v97, v96) + __PAIR64__(v98, v99);
    v101 = v152 + __PAIR64__((unsigned int)v179 ^ (unsigned int)v100, HIDWORD(v179) ^ HIDWORD(v100));
    LODWORD(v81) = v99 ^ (v152 + (HIDWORD(v179) ^ HIDWORD(v100)));
    v102 = v98 ^ ((v152 + __PAIR64__((unsigned int)v179 ^ (unsigned int)v100, HIDWORD(v179) ^ HIDWORD(v100))) >> 32);
    v103 = BYTE3(v81) | (v102 << 8);
    v104 = HIBYTE(v102) | ((_DWORD)v81 << 8);
    v105 = v100 + v183[(unsigned __int8)*(v132 - 34)] + __PAIR64__(v104, v103);
    v106 = HIDWORD(v179) ^ HIDWORD(v100) ^ v105;
    LODWORD(v95) = v179 ^ v100 ^ HIDWORD(v105);
    v160 = v105;
    v107 = HIWORD(v106) | ((_DWORD)v95 << 16);
    v108 = v103 ^ (v152 + (HIDWORD(v179) ^ HIDWORD(v100)) + v107);
    v178 = v107;
    v170 = v93 ^ v141;
    v26 = v101 + __PAIR64__(WORD1(v95) | (v106 << 16), v107);
    v180 = WORD1(v95) | (v106 << 16);
    v109 = v104 ^ ((v101 + __PAIR64__(v180, v107)) >> 32);
    v151 = (v101 + __PAIR64__(v180, v107)) >> 32;
    v110 = (unsigned __int8)*(v132 - 32);
    v111 = v167 + v183[(unsigned __int8)*(v132 - 33)] + ((2 * v181) | (HIDWORD(v181) >> 31));
    HIDWORD(v112) = v173 ^ v111;
    LODWORD(v112) = v174 ^ HIDWORD(v111);
    v113 = ((2 * v181) | (HIDWORD(v181) >> 31)) ^ (v155 + (v174 ^ HIDWORD(v111)));
    v114 = v155 + v112;
    LODWORD(v95) = v183[v110];
    HIDWORD(v95) = (v181 >> 31) ^ ((unsigned __int64)(v155 + v112) >> 32);
    LODWORD(v81) = HIBYTE(v113) | (HIDWORD(v95) << 8);
    v115 = (unsigned __int64)(v111 + v183[v110]) >> 32;
    v116 = HIBYTE(HIDWORD(v95)) | (v113 << 8);
    v166 = __PAIR64__(v115, (int)v111 + (int)v95) + __PAIR64__(v116, v81);
    LODWORD(v112) = v174 ^ HIDWORD(v111) ^ (v111 + v95 + v81);
    HIDWORD(v112) = v173 ^ v111 ^ ((__PAIR64__(v115, (int)v111 + (int)v95) + __PAIR64__(v116, v81)) >> 32);
    v154 = (2 * v147) | (v164 >> 31);
    LODWORD(v172) = v112 >> 16;
    HIDWORD(v172) = HIWORD(HIDWORD(v112)) | ((_DWORD)v112 << 16);
    LODWORD(v81) = v81 ^ (v114 + v172);
    v132 += 16;
    v27 = v114 + v172;
    v145 = (2 * v164) | (v147 >> 31);
    v117 = v116 ^ ((unsigned __int64)(v114 + v172) >> 32);
    v162 = (2 * (v94 ^ v171)) | (v170 >> 31);
    v148 = (2 * v170) | ((v94 ^ v171) >> 31);
    HIDWORD(v169) = (2 * v109) | (v108 >> 31);
    LODWORD(v169) = (2 * v108) | (v109 >> 31);
    v118 = 2 * v81;
    v24 = (2 * v117) | ((unsigned int)v81 >> 31);
    v25 = v118 | (v117 >> 31);
  }
  while ( (char *)&a6 + 3 != v132 );
  v156 = v134 ^ v105;
  v133 = v182[33] ^ HIDWORD(v157) ^ v151;
  v137 = v182[34] ^ v159 ^ v27;
  v119 = HIDWORD(v159) ^ HIDWORD(v27) ^ v182[35];
  v120 = v156 ^ v182[36];
  v121 = v165 ^ HIDWORD(v105) ^ v182[37];
  v144 = v141 ^ v166 ^ v182[38];
  v122 = v171 ^ HIDWORD(v166) ^ v182[39];
  v123 = v25 ^ v175 ^ v182[40];
  result = v24 ^ HIDWORD(v175) ^ v182[41];
  v125 = v145 ^ v182[42] ^ v178;
  v126 = v154 ^ v182[43] ^ v180;
  v127 = v148 ^ v182[44] ^ v172;
  v128 = v162 ^ v182[45] ^ HIDWORD(v172);
  v129 = v169 ^ v182[46] ^ v168;
  v130 = HIDWORD(v169) ^ v182[47] ^ v138;
  v131 = v182;
  v182[32] ^= v157 ^ (unsigned int)v26;
  v131[35] = v119;
  v131[36] = v120;
  v131[33] = v133;
  v131[37] = v121;
  v131[34] = v137;
  v131[38] = v144;
  v131[39] = v122;
  v131[40] = v123;
  v131[41] = result;
  v131[42] = v125;
  v131[43] = v126;
  v131[44] = v127;
  v131[45] = v128;
  v131[46] = v129;
  v131[47] = v130;
  return result;
}
