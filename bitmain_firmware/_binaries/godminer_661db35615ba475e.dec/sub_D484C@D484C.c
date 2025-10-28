int __fastcall sub_D484C(_DWORD *a1, int a2, _DWORD *a3)
{
  unsigned int v5; // r4
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r11
  int v10; // r5
  unsigned int v11; // r1
  unsigned int v12; // r1
  unsigned int v13; // r2
  int *v14; // r11
  int v15; // r10
  unsigned int v16; // r5
  unsigned int v17; // lr
  int v18; // r2
  unsigned int v19; // r12
  int v20; // r3
  unsigned __int64 v21; // r0
  char *v22; // r5
  char *v23; // r0
  int v24; // r5
  _DWORD *v25; // r3
  int v26; // r12
  int v27; // lr
  int v28; // r0
  int v29; // r12
  int v30; // r2
  int v31; // r0
  int v32; // lr
  int v33; // r12
  int v34; // r11
  int v35; // r10
  int v36; // r0
  int v37; // r2
  int v38; // lr
  int v39; // r12
  int v40; // r7
  int v41; // r2
  int v42; // lr
  int v43; // r0
  int v44; // r10
  int v45; // r7
  int v46; // r12
  int v47; // r2
  int v48; // r7
  int v49; // lr
  int v50; // r12
  int v51; // r2
  int v52; // r7
  int v53; // lr
  int v54; // r11
  int v55; // r12
  int v56; // r10
  int v57; // r7
  _DWORD *v58; // r3
  int v59; // r12
  int v60; // lr
  int v61; // r0
  int v62; // r12
  int v63; // r2
  int v64; // r0
  int v65; // lr
  int v66; // r12
  int v67; // r11
  int v68; // r10
  int v69; // r0
  int v70; // r2
  int v71; // lr
  int v72; // r12
  int v73; // r7
  int v74; // r2
  int v75; // lr
  int v76; // r0
  int v77; // r10
  int v78; // r7
  int v79; // r12
  int v80; // r2
  int v81; // r7
  int v82; // lr
  int v83; // r12
  int v84; // r2
  int v85; // r7
  int v86; // lr
  int v87; // r11
  int v88; // r12
  int v89; // r10
  int v90; // r7
  int v91; // r1
  int v92; // r2
  int v93; // r3
  int v94; // r0
  int v95; // r1
  int v96; // r2
  int v97; // r3
  int v98; // r0
  int v99; // r1
  int v100; // r2
  int v101; // r3
  int v102; // r8
  int v103; // lr
  int v104; // r3
  int v105; // r9
  int v106; // r7
  int v107; // r9
  int v108; // r8
  int v109; // lr
  int v110; // r9
  int v111; // r3
  int v112; // r5
  int v114; // [sp+8h] [bp-58h]
  int v115; // [sp+Ch] [bp-54h]
  int v116; // [sp+20h] [bp-40h]
  int v117; // [sp+24h] [bp-3Ch]
  int v118; // [sp+28h] [bp-38h]
  int v119; // [sp+2Ch] [bp-34h]
  int v120; // [sp+30h] [bp-30h]
  int v121; // [sp+34h] [bp-2Ch]
  int v122; // [sp+34h] [bp-2Ch]
  int v123; // [sp+3Ch] [bp-24h]
  int v124; // [sp+40h] [bp-20h] BYREF
  int v125; // [sp+44h] [bp-1Ch]
  int v126; // [sp+48h] [bp-18h]
  int v127; // [sp+4Ch] [bp-14h]
  int v128; // [sp+50h] [bp-10h]
  int v129; // [sp+54h] [bp-Ch]
  int v130; // [sp+58h] [bp-8h]
  int v131; // [sp+5Ch] [bp-4h]
  int v132; // [sp+60h] [bp+0h]
  int v133; // [sp+64h] [bp+4h]
  int v134; // [sp+68h] [bp+8h]
  int v135; // [sp+6Ch] [bp+Ch]
  int v136; // [sp+70h] [bp+10h]
  int v137; // [sp+74h] [bp+14h]
  int v138; // [sp+78h] [bp+18h]
  int v139; // [sp+7Ch] [bp+1Ch]
  int v140; // [sp+80h] [bp+20h] BYREF
  int v141; // [sp+84h] [bp+24h]
  int v142; // [sp+88h] [bp+28h]
  int v143; // [sp+8Ch] [bp+2Ch]
  int v144; // [sp+90h] [bp+30h]
  int v145; // [sp+94h] [bp+34h]
  int v146; // [sp+98h] [bp+38h]
  int v147; // [sp+9Ch] [bp+3Ch]
  unsigned int v148; // [sp+A0h] [bp+40h] BYREF
  unsigned int v149; // [sp+A4h] [bp+44h]
  unsigned int v150; // [sp+A8h] [bp+48h]
  unsigned int v151; // [sp+ACh] [bp+4Ch]
  int v152; // [sp+B0h] [bp+50h]
  int v153; // [sp+B4h] [bp+54h]
  int v154; // [sp+B8h] [bp+58h]
  int v155; // [sp+BCh] [bp+5Ch]
  int v156; // [sp+C0h] [bp+60h] BYREF
  int v157; // [sp+C4h] [bp+64h]
  int v158; // [sp+C8h] [bp+68h]
  int v159; // [sp+CCh] [bp+6Ch]
  int v160; // [sp+D0h] [bp+70h]
  int v161; // [sp+D4h] [bp+74h]
  int v162; // [sp+D8h] [bp+78h]
  int v163; // [sp+DCh] [bp+7Ch]
  _DWORD s[8]; // [sp+E0h] [bp+80h] BYREF
  int v165; // [sp+100h] [bp+A0h] BYREF
  int v166; // [sp+104h] [bp+A4h]
  int v167; // [sp+108h] [bp+A8h]
  int v168; // [sp+10Ch] [bp+ACh]
  int v169; // [sp+110h] [bp+B0h]
  int v170; // [sp+114h] [bp+B4h]
  int v171; // [sp+118h] [bp+B8h]
  int v172; // [sp+11Ch] [bp+BCh]
  int v173[16]; // [sp+120h] [bp+C0h] BYREF
  int v174; // [sp+160h] [bp+100h] BYREF
  int v175; // [sp+164h] [bp+104h]
  int v176; // [sp+168h] [bp+108h]
  int v177; // [sp+16Ch] [bp+10Ch]
  int v178; // [sp+170h] [bp+110h]
  int v179; // [sp+174h] [bp+114h]
  int v180; // [sp+178h] [bp+118h]
  int v181; // [sp+17Ch] [bp+11Ch]
  int v182[16]; // [sp+180h] [bp+120h] BYREF
  int src[33]; // [sp+1C0h] [bp+160h] BYREF

  v127 = -1521486534;
  v124 = 1779033703;
  v5 = (a2 + 63) & 0xFFFFFFC0;
  v125 = -1150833019;
  v126 = 1013904242;
  v128 = 1359893119;
  v129 = -1694144372;
  v130 = 528734635;
  v131 = 1541459225;
  sub_6BDA0(&v124, (int)a1, 1);
  v6 = a1[17];
  v7 = a1[18];
  v8 = a1[19];
  v156 = a1[16];
  v157 = v6;
  v158 = v7;
  v159 = v8;
  v160 = 128;
  v161 = 0;
  v162 = 0;
  v163 = 0;
  memset(s, 0, 28);
  s[7] = -2147352576;
  sub_6BDA0(&v124, (int)&v156, 1);
  v165 = 1779033703;
  v132 = v124;
  v133 = v125;
  v134 = v126;
  v135 = v127;
  v166 = -1150833019;
  v167 = 1013904242;
  v136 = v128;
  v137 = v129;
  v138 = v130;
  v139 = v131;
  v168 = -1521486534;
  v118 = v124;
  v169 = 1359893119;
  v114 = v127;
  v119 = v125;
  v120 = v126;
  v156 = v124 ^ 0x36363636;
  v170 = -1694144372;
  v158 = v126 ^ 0x36363636;
  v9 = v128;
  v171 = 528734635;
  v157 = v125 ^ 0x36363636;
  v159 = v127 ^ 0x36363636;
  v172 = 1541459225;
  v10 = v131;
  v160 = v128 ^ 0x36363636;
  v161 = v129 ^ 0x36363636;
  v162 = v130 ^ 0x36363636;
  v123 = v129;
  v121 = v130;
  v163 = v131 ^ 0x36363636;
  memset(s, 54, sizeof(s));
  sub_3C30C(&v165, &v156);
  sub_6BDA0(&v165, (int)a1, 1);
  v11 = a1[16];
  v175 = -1150833019;
  v174 = 1779033703;
  v163 = v10 ^ 0x5C5C5C5C;
  v173[0] = bswap32(v11);
  v173[1] = bswap32(a1[17]);
  v12 = a1[19];
  v158 = v120 ^ 0x5C5C5C5C;
  v180 = 528734635;
  v173[3] = bswap32(v12);
  v159 = v114 ^ 0x5C5C5C5C;
  v160 = v9 ^ 0x5C5C5C5C;
  v13 = a1[18];
  v162 = v121 ^ 0x5C5C5C5C;
  v173[2] = bswap32(v13);
  v179 = -1694144372;
  v14 = src;
  v176 = 1013904242;
  v177 = -1521486534;
  v178 = 1359893119;
  v157 = v119 ^ 0x5C5C5C5C;
  v173[5] = 0x80000000;
  v181 = 1541459225;
  v173[15] = 1184;
  v161 = v123 ^ 0x5C5C5C5C;
  v156 = v118 ^ 0x5C5C5C5C;
  memset(&v173[6], 0, 36);
  memset(s, 92, sizeof(s));
  sub_3C30C(&v174, &v156);
  v15 = 0;
  v182[8] = 0x80000000;
  memset(&v182[9], 0, 24);
  v182[15] = 768;
  do
  {
    ++v15;
    v14 += 8;
    v140 = v165;
    v141 = v166;
    v142 = v167;
    v143 = v168;
    v173[4] = v15;
    v144 = v169;
    v145 = v170;
    v146 = v171;
    v147 = v172;
    sub_3C30C(&v140, v173);
    v182[0] = v140;
    v182[1] = v141;
    v182[2] = v142;
    v182[3] = v143;
    v182[4] = v144;
    v182[5] = v145;
    v182[6] = v146;
    v182[7] = v147;
    v148 = v174;
    v149 = v175;
    v150 = v176;
    v151 = v177;
    v152 = v178;
    v153 = v179;
    v154 = v180;
    v155 = v181;
    sub_3C30C(&v148, v182);
    v16 = bswap32(v149);
    v17 = bswap32(v150);
    v18 = v154;
    v19 = bswap32(v151);
    v20 = v155;
    v21 = _byteswap_uint64(__PAIR64__(v152, v153));
    *(v14 - 8) = bswap32(v148);
    *(v14 - 7) = v16;
    *(v14 - 6) = v17;
    *(v14 - 5) = v19;
    *((_QWORD *)v14 - 2) = v21;
    *((_QWORD *)v14 - 1) = _byteswap_uint64(__PAIR64__(v18, v20));
  }
  while ( v15 != 4 );
  v22 = (char *)(v5 + 768);
  do
  {
    __pld(v22);
    memcpy(v22 - 768, src, 0x80u);
    sub_6B990(src, &src[16]);
    sub_6B990(&src[16], src);
    v23 = v22 - 640;
    v22 += 256;
    memcpy(v23, src, 0x80u);
    sub_6B990(src, &src[16]);
    sub_6B990(&src[16], src);
  }
  while ( v22 != (char *)(v5 + 131840) );
  v24 = 512;
  do
  {
    v25 = (_DWORD *)(v5 + ((src[16] & 0x3FF) << 7));
    v26 = v25[1];
    v27 = v25[2];
    src[0] ^= *v25;
    v28 = src[1] ^ v26;
    v29 = v25[3];
    v30 = v25[4];
    src[1] = v28;
    v31 = v25[5];
    src[2] ^= v27;
    v32 = v25[6];
    src[3] ^= v29;
    v33 = v25[7];
    src[4] ^= v30;
    v34 = v25[8];
    src[5] ^= v31;
    v35 = v25[9];
    src[7] ^= v33;
    src[6] ^= v32;
    src[9] ^= v35;
    src[8] ^= v34;
    v36 = v25[12];
    v37 = src[10] ^ v25[10];
    v38 = src[11] ^ v25[11];
    v39 = v25[13];
    src[16] ^= v25[16];
    v40 = v25[14];
    src[10] = v37;
    v41 = v25[15];
    src[11] = v38;
    v42 = v25[17];
    src[12] ^= v36;
    v43 = v25[18];
    src[13] ^= v39;
    v44 = v25[19];
    src[14] ^= v40;
    v45 = v25[20];
    src[15] ^= v41;
    src[19] ^= v44;
    v46 = v25[21];
    src[17] ^= v42;
    src[18] ^= v43;
    src[20] ^= v45;
    v47 = v25[22];
    v48 = v25[23];
    src[21] ^= v46;
    v49 = v25[24];
    v50 = v25[25];
    src[22] ^= v47;
    v51 = v25[26];
    src[23] ^= v48;
    v52 = v25[27];
    src[24] ^= v49;
    src[25] ^= v50;
    v53 = v25[28];
    v54 = src[27] ^ v52;
    v55 = v25[29];
    src[26] ^= v51;
    v56 = v25[30];
    v57 = v25[31];
    src[28] ^= v53;
    src[29] ^= v55;
    src[31] ^= v57;
    src[30] ^= v56;
    src[27] = v54;
    sub_6B990(src, &src[16]);
    sub_6B990(&src[16], src);
    v58 = (_DWORD *)(v5 + ((src[16] & 0x3FF) << 7));
    v59 = v58[1];
    v60 = v58[2];
    src[0] ^= *v58;
    v61 = src[1] ^ v59;
    v62 = v58[3];
    v63 = v58[4];
    src[1] = v61;
    v64 = v58[5];
    src[2] ^= v60;
    v65 = v58[6];
    src[3] ^= v62;
    v66 = v58[7];
    src[4] ^= v63;
    v67 = v58[8];
    src[5] ^= v64;
    v68 = v58[9];
    src[7] ^= v66;
    src[6] ^= v65;
    src[9] ^= v68;
    src[8] ^= v67;
    v69 = v58[12];
    v70 = src[10] ^ v58[10];
    v71 = src[11] ^ v58[11];
    v72 = v58[13];
    src[16] ^= v58[16];
    v73 = v58[14];
    src[10] = v70;
    v74 = v58[15];
    src[11] = v71;
    v75 = v58[17];
    src[12] ^= v69;
    v76 = v58[18];
    src[13] ^= v72;
    v77 = v58[19];
    src[14] ^= v73;
    v78 = v58[20];
    src[15] ^= v74;
    src[19] ^= v77;
    v79 = v58[21];
    src[17] ^= v75;
    src[18] ^= v76;
    src[20] ^= v78;
    v80 = v58[22];
    v81 = v58[23];
    src[21] ^= v79;
    v82 = v58[24];
    v83 = v58[25];
    src[22] ^= v80;
    v84 = v58[26];
    src[23] ^= v81;
    v85 = v58[27];
    src[24] ^= v82;
    src[25] ^= v83;
    v86 = v58[28];
    v87 = src[27] ^ v85;
    v88 = v58[29];
    src[26] ^= v84;
    v89 = v58[30];
    v90 = v58[31];
    src[28] ^= v86;
    src[29] ^= v88;
    src[31] ^= v90;
    src[30] ^= v89;
    src[27] = v87;
    sub_6B990(src, &src[16]);
    sub_6B990(&src[16], src);
    --v24;
  }
  while ( v24 );
  v158 = 1013904242;
  v163 = 1541459225;
  v159 = -1521486534;
  v160 = 1359893119;
  v161 = -1694144372;
  v162 = 528734635;
  v156 = 1779033703;
  v157 = -1150833019;
  sub_6BDA0(&v156, (int)a1, 1);
  v91 = a1[17];
  v92 = a1[18];
  v93 = a1[19];
  v174 = a1[16];
  v175 = v91;
  v176 = v92;
  v177 = v93;
  v178 = 128;
  v179 = 0;
  v180 = 0;
  v181 = 0;
  memset(v182, 0, 28);
  v182[7] = -2147352576;
  sub_6BDA0(&v156, (int)&v174, 1);
  v94 = v156;
  v95 = v157;
  v96 = v158;
  v97 = v159;
  a3[4] = 1359893119;
  v165 = v94;
  v166 = v95;
  v167 = v96;
  v168 = v97;
  a3[2] = 1013904242;
  v98 = v160;
  v99 = v161;
  v100 = v162;
  v101 = v163;
  a3[3] = -1521486534;
  v169 = v98;
  v170 = v99;
  v171 = v100;
  v172 = v101;
  v102 = v168;
  v103 = v165;
  v117 = v165;
  v104 = v166;
  *a3 = 1779033703;
  v105 = v167;
  v115 = v102;
  a3[1] = -1150833019;
  v116 = v104;
  v106 = v105;
  v107 = v103 ^ 0x5C5C5C5C;
  v175 = v104 ^ 0x5C5C5C5C;
  v176 = v106 ^ 0x5C5C5C5C;
  a3[5] = -1694144372;
  v108 = v169;
  v109 = v172;
  a3[6] = 528734635;
  v174 = v107;
  v110 = v170;
  v177 = v115 ^ 0x5C5C5C5C;
  v111 = v171;
  a3[7] = 1541459225;
  v112 = v109;
  v178 = v108 ^ 0x5C5C5C5C;
  v179 = v110 ^ 0x5C5C5C5C;
  v122 = v111;
  v180 = v111 ^ 0x5C5C5C5C;
  v181 = v109 ^ 0x5C5C5C5C;
  memset(v182, 92, 0x20u);
  sub_3C30C(a3, &v174);
  v176 = v106 ^ 0x36363636;
  v158 = 1013904242;
  v174 = v117 ^ 0x36363636;
  v177 = v115 ^ 0x36363636;
  v175 = v116 ^ 0x36363636;
  v163 = 1541459225;
  v181 = v112 ^ 0x36363636;
  v180 = v122 ^ 0x36363636;
  v159 = -1521486534;
  v178 = v108 ^ 0x36363636;
  v156 = 1779033703;
  v160 = 1359893119;
  v157 = -1150833019;
  v179 = v110 ^ 0x36363636;
  v161 = -1694144372;
  v162 = 528734635;
  memset(v182, 54, 0x20u);
  sub_3C30C(&v156, &v174);
  sub_6BDA0(&v156, (int)src, 1);
  sub_6BDA0(&v156, (int)&src[16], 1);
  sub_3C30C(&v156, dword_16B4AC);
  v174 = v156;
  v175 = v157;
  v176 = v158;
  v177 = v159;
  v178 = v160;
  v179 = v161;
  v180 = v162;
  v181 = v163;
  v182[0] = 0x80000000;
  memset(&v182[1], 0, 24);
  v182[7] = 768;
  return sub_3C30C(a3, &v174);
}
