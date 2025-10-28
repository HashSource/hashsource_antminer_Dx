int __fastcall sub_57088(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v8; // r7
  _DWORD *v9; // r3
  int *v10; // r4
  int *v11; // r12
  int v12; // r0
  int v13; // r1
  _DWORD *v14; // r6
  int v15; // r2
  int v16; // r3
  int v17; // r4
  _DWORD *v18; // r6
  int *v19; // r7
  int v20; // r1
  int v21; // r4
  int v22; // r3
  int v23; // r0
  int v24; // r9
  int v25; // r12
  unsigned int v26; // r2
  unsigned int v27; // r4
  _BYTE *v28; // r11
  int v29; // r5
  int v30; // r6
  unsigned int v31; // r7
  _DWORD *v32; // r1
  int v33; // r7
  unsigned __int64 v34; // kr00_8
  int v35; // r9
  unsigned int v36; // r10
  unsigned int v37; // r2
  unsigned int v38; // r4
  int v39; // lr
  int v40; // r0
  unsigned int v41; // r1
  unsigned int v42; // r7
  int v43; // r5
  int v44; // r1
  int v45; // r3
  unsigned int v46; // r8
  _DWORD *v47; // r10
  unsigned int v48; // r5
  __int64 v49; // kr68_8
  __int64 v50; // r6
  unsigned int v51; // r7
  __int64 v52; // r2
  unsigned __int64 v53; // kr70_8
  __int64 v54; // kr78_8
  int v55; // lr
  _QWORD *v56; // r12
  unsigned __int64 v57; // kr80_8
  __int64 v58; // r8
  __int64 v59; // kr88_8
  int v60; // r12
  __int64 v61; // r4
  unsigned int v62; // r0
  unsigned int v63; // lr
  int v64; // kr98_4
  unsigned int v65; // r10
  unsigned int v66; // lr
  bool v67; // cf
  unsigned int v68; // r0
  int v69; // r12
  int v70; // r1
  unsigned int v71; // r12
  unsigned int v72; // krB8_4
  unsigned int v73; // r10
  unsigned int v74; // r1
  _QWORD *v75; // lr
  int v76; // r12
  int v77; // r12
  __int64 v78; // krE0_8
  unsigned __int64 v79; // krE8_8
  unsigned int v80; // r12
  int v81; // r12
  unsigned int v82; // r1
  __int64 v83; // r0
  int v84; // kr100_4
  unsigned int v85; // r10
  _DWORD *v86; // lr
  __int64 v87; // r4
  unsigned int v88; // r12
  int v89; // r12
  unsigned int v90; // r10
  unsigned int v91; // kr120_4
  unsigned int v92; // kr128_4
  unsigned int v93; // lr
  int v94; // r3
  int v95; // r10
  int v96; // lr
  int v97; // r7
  int v98; // r6
  __int64 v99; // r0
  int v100; // r2
  int v101; // r5
  int v102; // r4
  int v103; // r8
  int v104; // r12
  int v105; // r9
  int v106; // r11
  _DWORD *v107; // r3
  int v109; // [sp+4h] [bp-10Ch]
  unsigned int v110; // [sp+4h] [bp-10Ch]
  int v111; // [sp+4h] [bp-10Ch]
  int v112; // [sp+4h] [bp-10Ch]
  unsigned int v113; // [sp+8h] [bp-108h]
  unsigned int v114; // [sp+8h] [bp-108h]
  unsigned int v115; // [sp+8h] [bp-108h]
  int v116; // [sp+8h] [bp-108h]
  int v117; // [sp+Ch] [bp-104h]
  int v118; // [sp+Ch] [bp-104h]
  unsigned int v119; // [sp+10h] [bp-100h]
  int v120; // [sp+14h] [bp-FCh]
  int v121; // [sp+14h] [bp-FCh]
  unsigned __int64 v122; // [sp+14h] [bp-FCh]
  unsigned int v123; // [sp+18h] [bp-F8h]
  unsigned int v124; // [sp+18h] [bp-F8h]
  unsigned int v125; // [sp+1Ch] [bp-F4h]
  unsigned int v126; // [sp+1Ch] [bp-F4h]
  unsigned int v127; // [sp+1Ch] [bp-F4h]
  int v128; // [sp+1Ch] [bp-F4h]
  unsigned int v129; // [sp+20h] [bp-F0h]
  int v130; // [sp+20h] [bp-F0h]
  unsigned int v131; // [sp+20h] [bp-F0h]
  int v132; // [sp+24h] [bp-ECh]
  unsigned int v133; // [sp+24h] [bp-ECh]
  int v134; // [sp+28h] [bp-E8h]
  int v135; // [sp+28h] [bp-E8h]
  unsigned int v136; // [sp+28h] [bp-E8h]
  unsigned __int64 v137; // [sp+2Ch] [bp-E4h]
  __int64 v138; // [sp+34h] [bp-DCh]
  int v139; // [sp+38h] [bp-D8h]
  unsigned int v140; // [sp+3Ch] [bp-D4h]
  int v141; // [sp+3Ch] [bp-D4h]
  __int64 v142; // [sp+40h] [bp-D0h]
  unsigned __int64 v143; // [sp+40h] [bp-D0h]
  __int64 v144; // [sp+48h] [bp-C8h]
  unsigned __int64 v145; // [sp+48h] [bp-C8h]
  unsigned int v146; // [sp+50h] [bp-C0h]
  __int64 v147; // [sp+54h] [bp-BCh]
  int v148; // [sp+54h] [bp-BCh]
  int v149; // [sp+58h] [bp-B8h]
  int v150; // [sp+5Ch] [bp-B4h]
  __int64 v151; // [sp+60h] [bp-B0h]
  int v152; // [sp+60h] [bp-B0h]
  unsigned int v153; // [sp+68h] [bp-A8h]
  int v154; // [sp+6Ch] [bp-A4h]
  unsigned int v155; // [sp+6Ch] [bp-A4h]
  int v156; // [sp+70h] [bp-A0h]
  int v157; // [sp+70h] [bp-A0h]
  int v158; // [sp+74h] [bp-9Ch]
  int v159; // [sp+74h] [bp-9Ch]
  unsigned int v160; // [sp+78h] [bp-98h]
  unsigned int v161; // [sp+78h] [bp-98h]
  int v162; // [sp+7Ch] [bp-94h]
  int v163; // [sp+80h] [bp-90h]
  int v164; // [sp+84h] [bp-8Ch]
  int v165; // [sp+88h] [bp-88h] BYREF
  _DWORD *v166; // [sp+8Ch] [bp-84h]
  _QWORD v167[15]; // [sp+90h] [bp-80h] BYREF
  char v168; // [sp+108h] [bp-8h] BYREF
  _DWORD v169[2]; // [sp+110h] [bp+0h] BYREF
  __int64 v170; // [sp+118h] [bp+8h]
  __int64 v171; // [sp+120h] [bp+10h]
  __int64 v172; // [sp+128h] [bp+18h]
  unsigned int v173; // [sp+130h] [bp+20h]
  unsigned int v174; // [sp+134h] [bp+24h]
  __int64 v175; // [sp+138h] [bp+28h]
  int v176; // [sp+140h] [bp+30h]
  unsigned int v177; // [sp+144h] [bp+34h]
  __int64 v178; // [sp+148h] [bp+38h]
  int v179; // [sp+150h] [bp+40h]
  int v180; // [sp+154h] [bp+44h]
  int v181; // [sp+158h] [bp+48h]
  int v182; // [sp+15Ch] [bp+4Ch]
  int v183; // [sp+160h] [bp+50h]
  int v184; // [sp+164h] [bp+54h]
  int v185; // [sp+168h] [bp+58h]
  int v186; // [sp+16Ch] [bp+5Ch]
  int v187; // [sp+170h] [bp+60h]
  int v188; // [sp+174h] [bp+64h]
  int v189; // [sp+178h] [bp+68h]
  unsigned int v190; // [sp+17Ch] [bp+6Ch]
  int v191; // [sp+180h] [bp+70h]
  int v192; // [sp+184h] [bp+74h]
  int v193; // [sp+188h] [bp+78h]
  int v194; // [sp+18Ch] [bp+7Ch]
  _BYTE dest[196]; // [sp+190h] [bp+80h] BYREF

  v166 = a1;
  v8 = v169;
  memcpy(dest, &unk_FCBB0, 0xC0u);
  v9 = a1;
  v10 = a1 + 32;
  v11 = v9 + 48;
  do
  {
    v12 = *v10;
    v10 += 4;
    v13 = *(v10 - 3);
    v14 = v8;
    v15 = *(v10 - 2);
    v8 += 4;
    v16 = *(v10 - 1);
    *v14 = v12;
    v14[1] = v13;
    v14[2] = v15;
    v14[3] = v16;
  }
  while ( v10 != v11 );
  v179 = -205731576;
  v180 = 1779033703;
  v181 = -2067093701;
  v182 = -1150833019;
  v183 = -23791573;
  v184 = 1013904242;
  v185 = 1595750129;
  v186 = -1521486534;
  v187 = -1377402159;
  v188 = 1359893119;
  v189 = 725511199;
  v190 = -1694144372;
  v191 = -79577749;
  v192 = 528734635;
  v193 = 327033209;
  v194 = 1541459225;
  v125 = v166[48] ^ 0xADE682D1;
  v17 = v166[51];
  v160 = v166[50] ^ 0x2B3E6C1F;
  v158 = v166[49] ^ 0x510E527F;
  v189 = v160;
  v190 = v17 ^ 0x9B05688C;
  v129 = v17 ^ 0x9B05688C;
  v187 = v125;
  v188 = v158;
  v123 = -79577749;
  v156 = 528734635;
  if ( a2 )
  {
    v123 = 79577748;
    v156 = -528734636;
    v191 = 79577748;
    v192 = -528734636;
  }
  v18 = v166;
  v19 = &v165;
  do
  {
    v20 = *((unsigned __int8 *)v18 + 2);
    v18 += 2;
    v21 = *((unsigned __int8 *)v18 - 3);
    v22 = *((unsigned __int8 *)v18 - 4);
    v23 = *((unsigned __int8 *)v18 - 1);
    v19[2] = (v20 << 16)
           ^ (*((unsigned __int8 *)v18 - 7) << 8)
           ^ *((unsigned __int8 *)v18 - 8)
           ^ (*((unsigned __int8 *)v18 - 5) << 24);
    v19 += 2;
    v19[1] = v22 ^ (v21 << 8) ^ (*((unsigned __int8 *)v18 - 2) << 16) ^ (v23 << 24);
  }
  while ( &v168 != (char *)v19 );
  v132 = v180;
  v24 = v179;
  v25 = v181;
  v109 = v169[0];
  v142 = v170;
  v140 = v169[1];
  v26 = v173;
  v27 = v174;
  v138 = v175;
  v144 = v171;
  v134 = v176;
  v113 = v177;
  v117 = v183;
  v146 = v184;
  v147 = v172;
  v154 = v182;
  v28 = &dest[47];
  v151 = v178;
  v119 = v193;
  v150 = v194;
  v120 = v185;
  v153 = v186;
  do
  {
    v29 = (unsigned __int8)*(v28 - 46);
    v30 = (unsigned __int8)*(v28 - 45);
    v31 = v125;
    v32 = &v167[(unsigned __int8)*(v28 - 47)];
    __pld(v28);
    v28 += 16;
    v33 = v31 ^ (v26 + *v32 + v109);
    v34 = __PAIR64__(v27, v26) + *(_QWORD *)v32 + __PAIR64__(v140, v109);
    v36 = (__PAIR64__(v33, HIDWORD(v34) ^ (unsigned int)v158) + __PAIR64__(v132, v24)) >> 32;
    v35 = (HIDWORD(v34) ^ v158) + v24;
    v37 = v35 ^ v26;
    v38 = v36 ^ v27;
    v39 = HIBYTE(v37) | (v38 << 8);
    v40 = HIBYTE(v38) | (v37 << 8);
    v41 = HIDWORD(v34) ^ v158 ^ (v34 + LODWORD(v167[v29]) + v39);
    v42 = v33 ^ ((v34 + v167[v29] + __PAIR64__(v40, v39)) >> 32);
    v159 = (v34 + v167[v29] + __PAIR64__(v40, v39)) >> 32;
    v141 = v34 + LODWORD(v167[v29]) + v39;
    v43 = HIWORD(v41) | (v42 << 16);
    v44 = HIWORD(v42) | (v41 << 16);
    v162 = v43;
    v137 = __PAIR64__(v36, v35) + __PAIR64__(v44, v43);
    v163 = v44;
    v45 = v138 + LODWORD(v167[v30]) + v142;
    v110 = v129 ^ ((unsigned __int64)(v138 + v167[v30] + v142) >> 32);
    v46 = (__PAIR64__(v154, v110) + __PAIR64__(v160 ^ v45, v25)) >> 32;
    v47 = &v167[(unsigned __int8)*(v28 - 59)];
    v48 = (__int64)((__PAIR64__(v154, v110) + __PAIR64__(v160 ^ v45, v25)) ^ v138) >> 24;
    v126 = ((v46 ^ HIDWORD(v138)) >> 24) | (((v110 + v25) ^ (unsigned int)v138) << 8);
    v133 = v39 ^ v137;
    v49 = v138 + v167[v30] + v142 + v167[(unsigned __int8)*(v28 - 60)];
    LODWORD(v50) = *v47;
    v143 = v49 + __PAIR64__(v126, v48);
    v51 = v160 ^ v45 ^ ((v49 + __PAIR64__(v126, v48)) >> 32);
    HIDWORD(v52) = v47[1];
    v161 = ((v110 ^ ((_DWORD)v49 + v48)) >> 16) | (v51 << 16);
    v164 = HIWORD(v51) | ((v110 ^ ((_DWORD)v49 + v48)) << 16);
    v53 = __PAIR64__(v46, v110 + v25) + __PAIR64__(v164, v161);
    LODWORD(v52) = v134;
    HIDWORD(v50) = v113;
    v139 = (__PAIR64__(v46, v110 + v25) + __PAIR64__(v164, v161)) >> 32;
    v155 = v40 ^ HIDWORD(v137);
    v54 = v52 + v50 + v144;
    v55 = v54 ^ v123;
    v56 = &v167[(unsigned __int8)*(v28 - 58)];
    v57 = __PAIR64__((unsigned int)v54 ^ v123, (unsigned int)v156 ^ HIDWORD(v54)) + __PAIR64__(v146, v117);
    HIDWORD(v58) = ((v156 ^ HIDWORD(v54)) + v117) ^ v134;
    LODWORD(v58) = ((__PAIR64__((unsigned int)v54 ^ v123, (unsigned int)v156 ^ HIDWORD(v54)) + __PAIR64__(v146, v117)) >> 32)
                 ^ v113;
    v59 = *v56;
    v111 = *((_DWORD *)v56 + 1);
    LODWORD(v50) = &v167[(unsigned __int8)*(v28 - 57)];
    v60 = HIBYTE(HIDWORD(v58)) | ((_DWORD)v58 << 8);
    LODWORD(v61) = v54 + v59;
    v124 = v48 ^ v53;
    HIDWORD(v61) = v58 >> 24;
    LODWORD(v58) = (v61 + __PAIR64__(HIDWORD(v54) + (unsigned int)__CFADD__((_DWORD)v54, (_DWORD)v59) + v111, v60)) >> 32;
    v62 = v156 ^ HIDWORD(v54) ^ (v54 + v59 + v60);
    v63 = v55 ^ v58;
    LODWORD(v61) = *(_DWORD *)(v50 + 4);
    HIDWORD(v52) = *(_DWORD *)v50;
    v130 = HIDWORD(v61);
    v145 = __PAIR64__(v58, (int)v54 + (int)v59 + v60);
    v157 = HIWORD(v62) | (v63 << 16);
    v165 = HIWORD(v63) | (v62 << 16);
    LODWORD(v50) = (unsigned __int8)*(v28 - 56);
    v64 = v151 + HIDWORD(v52) + v147;
    LODWORD(v61) = (v151 + __PAIR64__(v61, HIDWORD(v52)) + v147) >> 32;
    v65 = ((v150 ^ v61) + v120) ^ v151;
    HIDWORD(v58) = (__PAIR64__(v119 ^ v64, v150 ^ (unsigned int)v61) + __PAIR64__(v153, v120)) >> 32;
    v66 = (v150 ^ v61) + v120;
    HIDWORD(v61) = v167[v50];
    v121 = HIDWORD(v167[v50]);
    LODWORD(v58) = &v167[(unsigned __int8)*(v28 - 55)];
    v67 = __CFADD__(v64, HIDWORD(v61));
    HIDWORD(v61) += v64;
    LODWORD(v50) = HIBYTE(v65) | ((HIDWORD(v58) ^ HIDWORD(v151)) << 8);
    v68 = ((unsigned int)(HIDWORD(v58) ^ HIDWORD(v151)) >> 24) | (v65 << 8);
    HIDWORD(v52) = *(_DWORD *)v58;
    v114 = v60 ^ (v57 + v157);
    v69 = *(_DWORD *)(v58 + 4);
    HIDWORD(v50) = v119
                 ^ v64
                 ^ ((__PAIR64__(v68, HIDWORD(v61)) + __PAIR64__((unsigned int)v61 + v67 + v121, v50)) >> 32);
    v152 = (__PAIR64__(v68, HIDWORD(v61)) + __PAIR64__((unsigned int)v61 + v67 + v121, v50)) >> 32;
    LODWORD(v58) = HIWORD(HIDWORD(v50));
    HIDWORD(v50) = ((v150 ^ (unsigned int)v61 ^ (HIDWORD(v61) + (_DWORD)v50)) >> 16) | (HIDWORD(v50) << 16);
    v148 = HIDWORD(v61) + v50;
    HIDWORD(v61) = v130 ^ ((v57 + __PAIR64__(v165, v157)) >> 32);
    v70 = (2 * (v126 ^ v139)) | (v124 >> 31);
    LODWORD(v61) = v58 | ((v150 ^ (unsigned int)v61 ^ v148) << 16);
    LODWORD(v52) = (2 * v124) | ((v126 ^ v139) >> 31);
    v122 = __PAIR64__(HIDWORD(v58), v66) + __PAIR64__(v61, HIDWORD(v50));
    v131 = v50 ^ (v66 + HIDWORD(v50));
    v72 = v141 + HIDWORD(v52) + v52;
    v71 = (__PAIR64__(v69 + (unsigned int)__CFADD__(v141, HIDWORD(v52)) + v159, v141 + HIDWORD(v52))
         + __PAIR64__(v70, v52)) >> 32;
    LODWORD(v61) = v61 ^ v71;
    HIDWORD(v50) ^= v72;
    v73 = (v57 + __PAIR64__(v165, v157) + __PAIR64__(HIDWORD(v50), v61)) >> 32;
    v127 = v57 + v157 + v61;
    v74 = v70 ^ v73;
    LODWORD(v52) = v52 ^ v127;
    v75 = &v167[(unsigned __int8)*(v28 - 53)];
    HIDWORD(v58) = BYTE3(v52) | (v74 << 8);
    LODWORD(v52) = HIBYTE(v74) | ((_DWORD)v52 << 8);
    v135 = v68 ^ HIDWORD(v122);
    LODWORD(v61) = v61 ^ (v72 + LODWORD(v167[(unsigned __int8)*(v28 - 54)]) + HIDWORD(v58));
    v140 = (__PAIR64__(v71, v72) + v167[(unsigned __int8)*(v28 - 54)] + __PAIR64__(v52, HIDWORD(v58))) >> 32;
    HIDWORD(v50) ^= v140;
    v109 = v72 + LODWORD(v167[(unsigned __int8)*(v28 - 54)]) + HIDWORD(v58);
    v119 = WORD1(v61) | (HIDWORD(v50) << 16);
    v150 = HIWORD(HIDWORD(v50)) | ((_DWORD)v61 << 16);
    v76 = 2 * HIDWORD(v61);
    HIDWORD(v61) = (2 * v114) | (HIDWORD(v61) >> 31);
    v77 = v76 | (v114 >> 31);
    v117 = v127 + v119;
    v146 = (__PAIR64__(v73, v127) + __PAIR64__(v150, v119)) >> 32;
    LODWORD(v50) = (v143 + *v75 + __PAIR64__(v77, HIDWORD(v61))) >> 32;
    v128 = v143 + *(_DWORD *)v75 + HIDWORD(v61);
    HIDWORD(v50) = v162 ^ v128;
    v115 = v52 ^ v146;
    v78 = v167[(unsigned __int8)*(v28 - 52)];
    v79 = v122 + (v50 ^ (unsigned int)v163);
    LODWORD(v52) = &v167[(unsigned __int8)*(v28 - 51)];
    HIDWORD(v61) ^= v79;
    v80 = v77 ^ HIDWORD(v79);
    v149 = HIDWORD(v58) ^ v117;
    LODWORD(v58) = HIBYTE(HIDWORD(v61)) | (v80 << 8);
    v81 = HIBYTE(v80) | (HIDWORD(v61) << 8);
    LODWORD(v142) = v128 + v78 + v58;
    v82 = v163 ^ v50 ^ v142;
    HIDWORD(v50) = v162
                 ^ v128
                 ^ (v81 + __CFADD__(v128 + v78, (_DWORD)v58) + v50 + __CFADD__(v128, (_DWORD)v78) + HIDWORD(v78));
    HIDWORD(v142) = v81 + __CFADD__(v128 + v78, (_DWORD)v58) + v50 + __CFADD__(v128, (_DWORD)v78) + HIDWORD(v78);
    v125 = HIWORD(v82) | (HIDWORD(v50) << 16);
    v158 = HIWORD(HIDWORD(v50)) | (v82 << 16);
    LODWORD(v83) = (2 * v131) | ((v68 ^ HIDWORD(v122)) >> 31);
    LODWORD(v50) = (2 * v135) | (v131 >> 31);
    v120 = v79 + v125;
    v136 = v81 ^ ((v79 + __PAIR64__(v158, v125)) >> 32);
    HIDWORD(v83) = (v145 + *(_QWORD *)v52) >> 32;
    v84 = v145 + *(_DWORD *)v52 + v83;
    HIDWORD(v83) = (__PAIR64__(v50, (int)v145 + *(_DWORD *)v52) + v83) >> 32;
    LODWORD(v61) = v84;
    v153 = (v79 + __PAIR64__(v158, v125)) >> 32;
    LODWORD(v52) = v164 ^ HIDWORD(v83);
    HIDWORD(v61) = &v167[(unsigned __int8)*(v28 - 50)];
    HIDWORD(v52) = HIDWORD(v137);
    LODWORD(v83) = v83 ^ (v137 + (v164 ^ HIDWORD(v83)));
    v85 = (__PAIR64__(v161 ^ v84, v137) + v52) >> 32;
    HIDWORD(v58) = v137 + (v164 ^ HIDWORD(v83));
    HIDWORD(v52) = *(_DWORD *)HIDWORD(v61);
    LODWORD(v50) = v50 ^ v85;
    HIDWORD(v61) = *(_DWORD *)(HIDWORD(v61) + 4);
    HIDWORD(v50) = BYTE3(v83) | ((_DWORD)v50 << 8);
    LODWORD(v50) = BYTE3(v50) | ((_DWORD)v83 << 8);
    v86 = &v167[(unsigned __int8)*(v28 - 49)];
    LODWORD(v137) = HIDWORD(v50);
    LODWORD(v58) = v58 ^ (v79 + v125);
    v87 = v61 + __PAIR64__(HIDWORD(v83), HIDWORD(v52));
    LODWORD(v52) = v164 ^ HIDWORD(v83) ^ (v87 + HIDWORD(v50));
    v88 = v161 ^ v84 ^ ((v87 + __PAIR64__(v50, HIDWORD(v50))) >> 32);
    v144 = v87 + __PAIR64__(v50, HIDWORD(v50));
    v160 = WORD1(v52) | (v88 << 16);
    v129 = HIWORD(v88) | ((_DWORD)v52 << 16);
    LODWORD(v83) = (2 * v133) | (v155 >> 31);
    HIDWORD(v87) = (2 * v155) | (v133 >> 31);
    v89 = (__PAIR64__(v85, HIDWORD(v58)) + __PAIR64__(v129, v160)) >> 32;
    v24 = HIDWORD(v58) + v160;
    v132 = v89;
    v90 = v50 ^ v89;
    HIDWORD(v50) = v139;
    HIDWORD(v83) = v86[1] + __CFADD__(v148, *v86) + v152;
    v91 = v148 + *v86 + v83;
    HIDWORD(v83) = (__PAIR64__(HIDWORD(v87), v148 + *v86) + v83) >> 32;
    LODWORD(v87) = &v167[(unsigned __int8)*(v28 - 48)];
    LODWORD(v50) = v165 ^ HIDWORD(v83);
    v92 = v53 + (v165 ^ HIDWORD(v83));
    HIDWORD(v50) = (__PAIR64__(v157 ^ v91, v53) + v50) >> 32;
    LODWORD(v83) = v83 ^ v92;
    HIDWORD(v87) ^= HIDWORD(v50);
    HIDWORD(v52) = v91 + *(_DWORD *)v87;
    HIDWORD(v137) = HIDWORD(v50);
    LODWORD(v52) = HIBYTE(HIDWORD(v87)) | ((_DWORD)v83 << 8);
    HIDWORD(v50) = v137;
    LODWORD(v137) = BYTE3(v83) | (HIDWORD(v87) << 8);
    HIDWORD(v50) ^= v24;
    LODWORD(v83) = HIDWORD(v52) + v137;
    HIDWORD(v83) += v52 + __CFADD__(HIDWORD(v52), (_DWORD)v137) + __CFADD__(v91, *(_DWORD *)v87) + *(_DWORD *)(v87 + 4);
    HIDWORD(v52) = v149;
    LODWORD(v50) = v50 ^ v83;
    v93 = v157 ^ v91 ^ HIDWORD(v83);
    v147 = v83;
    HIDWORD(v138) = (2 * v115) | (HIDWORD(v52) >> 31);
    v123 = WORD1(v50) | (v93 << 16);
    v156 = HIWORD(v93) | ((_DWORD)v50 << 16);
    LODWORD(v87) = (2 * HIDWORD(v52)) | (v115 >> 31);
    v113 = (2 * v136) | ((unsigned int)v58 >> 31);
    LODWORD(v138) = v87;
    v134 = (2 * v58) | (v136 >> 31);
    HIDWORD(v151) = (2 * v90) | (HIDWORD(v50) >> 31);
    LODWORD(v151) = (2 * HIDWORD(v50)) | (v90 >> 31);
    v94 = (__PAIR64__(HIDWORD(v137), v92) + __PAIR64__(v156, v123)) >> 32;
    v25 = v92 + v123;
    LODWORD(v52) = v52 ^ v94;
    v154 = v94;
    v27 = (2 * v52) | (((unsigned int)v137 ^ (v92 + v123)) >> 31);
    v26 = (2 * (v137 ^ (v92 + v123))) | ((unsigned int)v52 >> 31);
  }
  while ( (char *)&a6 + 3 != v28 );
  v95 = v109 ^ v24;
  v96 = v113 ^ v166[45];
  v97 = v140 ^ v132 ^ v166[33];
  v112 = v142 ^ v25 ^ v166[34];
  v116 = HIDWORD(v142) ^ v94 ^ v166[35];
  v98 = v117 ^ v144 ^ v166[36];
  LODWORD(v99) = v146 ^ HIDWORD(v144) ^ v166[37];
  HIDWORD(v99) = v120 ^ v147 ^ v166[38];
  v118 = v153 ^ HIDWORD(v147) ^ v166[39];
  v100 = v26 ^ v125 ^ v166[40];
  v101 = v27 ^ v158 ^ v166[41];
  v102 = v138 ^ v166[42] ^ v160;
  v103 = HIDWORD(v138) ^ v166[43] ^ v129;
  v104 = v134 ^ v166[44] ^ v123;
  v105 = v151 ^ v166[46] ^ v119;
  v106 = HIDWORD(v151) ^ v166[47] ^ v150;
  v107 = v166;
  v166[32] ^= v95;
  v107[33] = v97;
  *(_QWORD *)(v107 + 37) = v99;
  v107[34] = v112;
  v107[36] = v98;
  v107[39] = v118;
  v107[35] = v116;
  v107[40] = v100;
  v107[41] = v101;
  v107[42] = v102;
  v107[43] = v103;
  v107[44] = v104;
  v107[45] = v96 ^ v156;
  v107[46] = v105;
  v107[47] = v106;
  return v99;
}
