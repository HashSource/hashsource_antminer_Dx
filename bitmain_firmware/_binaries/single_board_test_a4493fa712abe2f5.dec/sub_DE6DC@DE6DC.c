int __fastcall sub_DE6DC(_DWORD *a1, int a2, int *a3)
{
  int v4; // r10
  int *v5; // r8
  int v6; // r1
  int v7; // r2
  int v8; // r3
  unsigned int v9; // r5
  unsigned int v10; // r4
  _QWORD *v11; // r11
  unsigned int v12; // r3
  unsigned int v13; // r7
  unsigned int v14; // lr
  unsigned int v15; // r12
  unsigned __int64 v16; // r0
  unsigned __int64 v17; // r2
  char *v18; // r7
  char *v19; // r0
  _DWORD *v20; // r10
  int v21; // r11
  int v22; // r3
  int v23; // r5
  unsigned int v24; // r12
  __int64 v25; // r2
  int v26; // r0
  int v27; // r5
  int v28; // r0
  int v29; // r5
  int v30; // r0
  int v31; // r6
  int v32; // r6
  int v33; // r5
  int v34; // r6
  int v35; // r0
  int v36; // r0
  int v37; // r6
  int v38; // r5
  int v39; // r5
  __int64 v40; // kr00_8
  int v41; // r5
  int v42; // r6
  int v43; // r9
  int v44; // r5
  __int64 v45; // kr08_8
  unsigned int v46; // r12
  int v47; // r0
  int v48; // r2
  int v49; // r5
  int v50; // r0
  int v51; // r3
  int v52; // r0
  int v53; // r2
  int v54; // r6
  int v55; // r0
  int v56; // r6
  int v57; // r5
  int v58; // r6
  int v59; // r0
  int v60; // r2
  int v61; // r3
  int v62; // r0
  int v63; // r6
  int v64; // r2
  int v65; // r0
  int v66; // r5
  int v67; // r2
  int v68; // r5
  int v69; // r2
  int v70; // r5
  int v71; // r3
  int v72; // r2
  int v73; // r9
  int v74; // r5
  __int64 v75; // kr10_8
  int v76; // r1
  int v77; // r2
  int v78; // r3
  int v79; // r0
  int v80; // r1
  int v81; // r2
  int v82; // r3
  int v83; // r0
  int v84; // r1
  int v85; // r2
  int v86; // r3
  int v87; // r4
  int v88; // lr
  int v89; // r7
  int v90; // r3
  int v91; // r3
  int v92; // r8
  int v93; // r4
  int v94; // r5
  int v97; // [sp+14h] [bp-238h]
  int v98; // [sp+1Ch] [bp-230h]
  unsigned int v99; // [sp+24h] [bp-228h]
  int v100; // [sp+24h] [bp-228h]
  int v101; // [sp+28h] [bp-224h]
  int v102; // [sp+28h] [bp-224h]
  int v103; // [sp+2Ch] [bp-220h]
  unsigned int v104; // [sp+2Ch] [bp-220h]
  int v105; // [sp+30h] [bp-21Ch]
  int v106; // [sp+34h] [bp-218h]
  int v107; // [sp+38h] [bp-214h]
  int v108; // [sp+38h] [bp-214h]
  int v109; // [sp+3Ch] [bp-210h]
  int v110; // [sp+44h] [bp-208h]
  int v111; // [sp+48h] [bp-204h] BYREF
  int v112; // [sp+4Ch] [bp-200h]
  int v113; // [sp+50h] [bp-1FCh]
  int v114; // [sp+54h] [bp-1F8h]
  int v115; // [sp+58h] [bp-1F4h]
  int v116; // [sp+5Ch] [bp-1F0h]
  int v117; // [sp+60h] [bp-1ECh]
  int v118; // [sp+64h] [bp-1E8h]
  int v119; // [sp+68h] [bp-1E4h]
  int v120; // [sp+6Ch] [bp-1E0h]
  int v121; // [sp+70h] [bp-1DCh]
  int v122; // [sp+74h] [bp-1D8h]
  int v123; // [sp+78h] [bp-1D4h]
  int v124; // [sp+7Ch] [bp-1D0h]
  int v125; // [sp+80h] [bp-1CCh]
  int v126; // [sp+84h] [bp-1C8h]
  int v127; // [sp+88h] [bp-1C4h] BYREF
  int v128; // [sp+8Ch] [bp-1C0h]
  int v129; // [sp+90h] [bp-1BCh]
  int v130; // [sp+94h] [bp-1B8h]
  int v131; // [sp+98h] [bp-1B4h]
  int v132; // [sp+9Ch] [bp-1B0h]
  int v133; // [sp+A0h] [bp-1ACh]
  int v134; // [sp+A4h] [bp-1A8h]
  unsigned int v135; // [sp+A8h] [bp-1A4h] BYREF
  unsigned int v136; // [sp+ACh] [bp-1A0h]
  unsigned int v137; // [sp+B0h] [bp-19Ch]
  unsigned int v138; // [sp+B4h] [bp-198h]
  int v139; // [sp+B8h] [bp-194h]
  int v140; // [sp+BCh] [bp-190h]
  int v141; // [sp+C0h] [bp-18Ch]
  int v142; // [sp+C4h] [bp-188h]
  unsigned int v143; // [sp+C8h] [bp-184h] BYREF
  int v144; // [sp+CCh] [bp-180h]
  int v145; // [sp+D0h] [bp-17Ch]
  int v146; // [sp+D4h] [bp-178h]
  int v147; // [sp+D8h] [bp-174h]
  int v148; // [sp+DCh] [bp-170h]
  int v149; // [sp+E0h] [bp-16Ch]
  int v150; // [sp+E4h] [bp-168h]
  _DWORD s[8]; // [sp+E8h] [bp-164h] BYREF
  int v152; // [sp+108h] [bp-144h] BYREF
  int v153; // [sp+10Ch] [bp-140h]
  int v154; // [sp+110h] [bp-13Ch]
  int v155; // [sp+114h] [bp-138h]
  int v156; // [sp+118h] [bp-134h]
  int v157; // [sp+11Ch] [bp-130h]
  int v158; // [sp+120h] [bp-12Ch]
  int v159; // [sp+124h] [bp-128h]
  int v160[16]; // [sp+128h] [bp-124h] BYREF
  unsigned int v161; // [sp+168h] [bp-E4h] BYREF
  int v162; // [sp+16Ch] [bp-E0h]
  int v163; // [sp+170h] [bp-DCh]
  int v164; // [sp+174h] [bp-D8h]
  int v165; // [sp+178h] [bp-D4h]
  int v166; // [sp+17Ch] [bp-D0h]
  int v167; // [sp+180h] [bp-CCh]
  int v168; // [sp+184h] [bp-C8h]
  int v169[16]; // [sp+188h] [bp-C4h] BYREF
  _QWORD src[16]; // [sp+1C8h] [bp-84h] BYREF

  v112 = -1150833019;
  v114 = -1521486534;
  v99 = (a2 + 63) & 0xFFFFFFC0;
  v113 = 1013904242;
  v116 = -1694144372;
  v111 = 1779033703;
  v115 = 1359893119;
  v4 = 0;
  v117 = 528734635;
  v118 = 1541459225;
  sub_584AC(&v111, (int)a1, 1);
  v5 = a1 + 16;
  v6 = a1[17];
  v7 = a1[18];
  v8 = a1[19];
  v143 = a1[16];
  v144 = v6;
  v145 = v7;
  v146 = v8;
  v147 = 128;
  v148 = 0;
  v149 = 0;
  v150 = 0;
  memset(s, 0, 28);
  s[7] = -2147352576;
  sub_584AC(&v111, (int)&v143, 1);
  v153 = -1150833019;
  v119 = v111;
  v120 = v112;
  v121 = v113;
  v122 = v114;
  v154 = 1013904242;
  v155 = -1521486534;
  v152 = 1779033703;
  v123 = v115;
  v124 = v116;
  v125 = v117;
  v126 = v118;
  v110 = v111;
  v103 = v112;
  v156 = 1359893119;
  v98 = v114;
  v143 = v111 ^ 0x36363636;
  v144 = v112 ^ 0x36363636;
  v105 = v113;
  v145 = v113 ^ 0x36363636;
  v146 = v114 ^ 0x36363636;
  v109 = v117;
  v101 = v118;
  v157 = -1694144372;
  v158 = 528734635;
  v159 = 1541459225;
  v106 = v115;
  v147 = v115 ^ 0x36363636;
  v148 = v116 ^ 0x36363636;
  v149 = v117 ^ 0x36363636;
  v150 = v118 ^ 0x36363636;
  v107 = v116;
  memset(s, 54, sizeof(s));
  sub_CF8B4(&v152, (int *)&v143);
  sub_584AC(&v152, (int)a1, 1);
  v9 = a1[17];
  v144 = v103 ^ 0x5C5C5C5C;
  v145 = v105 ^ 0x5C5C5C5C;
  v146 = v98 ^ 0x5C5C5C5C;
  v147 = v106 ^ 0x5C5C5C5C;
  v161 = 1779033703;
  v10 = a1[16];
  v143 = v110 ^ 0x5C5C5C5C;
  v11 = src;
  v12 = a1[19];
  v163 = 1013904242;
  v104 = bswap32(a1[18]);
  v162 = -1150833019;
  v164 = -1521486534;
  v165 = 1359893119;
  v160[5] = 0x80000000;
  v166 = -1694144372;
  v160[0] = bswap32(v10);
  v160[15] = 1184;
  v160[1] = bswap32(v9);
  v167 = 528734635;
  v160[2] = v104;
  v160[3] = bswap32(v12);
  v168 = 1541459225;
  v148 = v107 ^ 0x5C5C5C5C;
  v150 = v101 ^ 0x5C5C5C5C;
  memset(&v160[6], 0, 36);
  v149 = v109 ^ 0x5C5C5C5C;
  memset(s, 92, sizeof(s));
  sub_CF8B4((int *)&v161, (int *)&v143);
  v169[8] = 0x80000000;
  memset(&v169[9], 0, 24);
  v169[15] = 768;
  do
  {
    ++v4;
    v127 = v152;
    v128 = v153;
    v129 = v154;
    v130 = v155;
    v160[4] = v4;
    v131 = v156;
    v132 = v157;
    v133 = v158;
    v134 = v159;
    sub_CF8B4(&v127, v160);
    v169[0] = v127;
    v169[1] = v128;
    v169[2] = v129;
    v169[3] = v130;
    v169[4] = v131;
    v169[5] = v132;
    v169[6] = v133;
    v169[7] = v134;
    v135 = v161;
    v136 = v162;
    v137 = v163;
    v138 = v164;
    v139 = v165;
    v140 = v166;
    v141 = v167;
    v142 = v168;
    sub_CF8B4((int *)&v135, v169);
    v13 = bswap32(v137);
    v14 = bswap32(v138);
    v15 = bswap32(v136);
    v16 = _byteswap_uint64(__PAIR64__(v139, v140));
    v17 = _byteswap_uint64(__PAIR64__(v141, v142));
    *(_DWORD *)v11 = bswap32(v135);
    *((_DWORD *)v11 + 1) = v15;
    *((_DWORD *)v11 + 2) = v13;
    *((_DWORD *)v11 + 3) = v14;
    v11[2] = v16;
    v11[3] = v17;
    v11 += 4;
  }
  while ( v4 != 4 );
  v18 = (char *)(v99 + 768);
  do
  {
    __pld(v18);
    memcpy(v18 - 768, src, 0x80u);
    sub_581B8((int *)src, &src[8]);
    sub_581B8((int *)&src[8], src);
    v19 = v18 - 640;
    v18 += 256;
    memcpy(v19, src, 0x80u);
    sub_581B8((int *)src, &src[8]);
    sub_581B8((int *)&src[8], src);
  }
  while ( v18 != (char *)(v99 + 131840) );
  v20 = a1;
  v21 = 512;
  do
  {
    v22 = (src[8] & 0x3FF) << 7;
    v23 = *(_DWORD *)(v99 + v22);
    v24 = v99 + v22;
    v25 = *(_QWORD *)(v99 + v22 + 4);
    v26 = LODWORD(src[0]) ^ v23;
    v27 = *(_DWORD *)(v24 + 12);
    LODWORD(src[0]) = v26;
    *(_QWORD *)((char *)src + 4) ^= v25;
    HIDWORD(v25) = *(_DWORD *)(v24 + 16);
    v28 = *(_DWORD *)(v24 + 20);
    HIDWORD(src[1]) ^= v27;
    LODWORD(src[2]) ^= HIDWORD(v25);
    LODWORD(v25) = *(_DWORD *)(v24 + 24);
    v29 = *(_DWORD *)(v24 + 28);
    HIDWORD(src[2]) ^= v28;
    LODWORD(src[3]) ^= v25;
    HIDWORD(v25) = LODWORD(src[4]) ^ *(_DWORD *)(v24 + 32);
    HIDWORD(src[3]) ^= v29;
    LODWORD(src[4]) = HIDWORD(v25);
    HIDWORD(src[4]) ^= *(_DWORD *)(v24 + 36);
    v30 = *(_DWORD *)(v24 + 48);
    v31 = *(_DWORD *)(v24 + 40);
    LODWORD(src[8]) ^= *(_DWORD *)(v24 + 64);
    LODWORD(v25) = LODWORD(src[5]) ^ v31;
    v32 = *(_DWORD *)(v24 + 44);
    LODWORD(src[5]) = v25;
    v33 = HIDWORD(src[5]) ^ v32;
    v34 = *(_DWORD *)(v24 + 52);
    LODWORD(v25) = *(_DWORD *)(v24 + 56);
    LODWORD(src[6]) ^= v30;
    v35 = *(_DWORD *)(v24 + 60);
    HIDWORD(src[5]) = v33;
    LODWORD(src[7]) ^= v25;
    LODWORD(v25) = HIDWORD(src[7]) ^ v35;
    v36 = *(_DWORD *)(v24 + 72);
    HIDWORD(src[6]) ^= v34;
    v37 = *(_DWORD *)(v24 + 68);
    HIDWORD(src[7]) = v25;
    LODWORD(v25) = *(_DWORD *)(v24 + 76);
    HIDWORD(src[8]) ^= v37;
    LODWORD(src[9]) ^= v36;
    v38 = *(_DWORD *)(v24 + 80);
    HIDWORD(src[9]) ^= v25;
    LODWORD(v25) = LODWORD(src[10]) ^ v38;
    v39 = *(_DWORD *)(v24 + 84);
    LODWORD(src[10]) = v25;
    v40 = *(_QWORD *)(v24 + 88);
    HIDWORD(src[10]) ^= v39;
    v41 = *(_DWORD *)(v24 + 104);
    src[11] ^= v40;
    v42 = *(_DWORD *)(v24 + 100);
    LODWORD(src[12]) ^= *(_DWORD *)(v24 + 96);
    v43 = *(_DWORD *)(v24 + 116);
    HIDWORD(src[12]) ^= v42;
    LODWORD(v25) = *(_DWORD *)(v24 + 108);
    LODWORD(src[13]) ^= v41;
    v44 = *(_DWORD *)(v24 + 112);
    HIDWORD(src[13]) ^= v25;
    v45 = *(_QWORD *)(v24 + 120);
    LODWORD(src[14]) ^= v44;
    HIDWORD(src[14]) ^= v43;
    src[15] ^= v45;
    sub_581B8((int *)src, &src[8]);
    sub_581B8((int *)&src[8], src);
    v46 = v99 + ((src[8] & 0x3FF) << 7);
    src[0] ^= *(_QWORD *)v46;
    v47 = *(_DWORD *)(v46 + 16);
    src[1] ^= *(_QWORD *)(v46 + 8);
    v48 = *(_DWORD *)(v46 + 20);
    v49 = *(_DWORD *)(v46 + 24);
    LODWORD(src[2]) ^= v47;
    HIDWORD(src[2]) ^= v48;
    v50 = *(_DWORD *)(v46 + 28);
    LODWORD(src[3]) ^= v49;
    v51 = HIDWORD(src[3]) ^ v50;
    v52 = LODWORD(src[4]) ^ *(_DWORD *)(v46 + 32);
    HIDWORD(src[3]) = v51;
    LODWORD(src[4]) = v52;
    HIDWORD(src[4]) ^= *(_DWORD *)(v46 + 36);
    v53 = *(_DWORD *)(v46 + 48);
    v54 = *(_DWORD *)(v46 + 40);
    LODWORD(src[8]) ^= *(_DWORD *)(v46 + 64);
    v55 = LODWORD(src[5]) ^ v54;
    v56 = *(_DWORD *)(v46 + 44);
    LODWORD(src[5]) = v55;
    v57 = HIDWORD(src[5]) ^ v56;
    v58 = *(_DWORD *)(v46 + 52);
    v59 = *(_DWORD *)(v46 + 56);
    LODWORD(src[6]) ^= v53;
    v60 = *(_DWORD *)(v46 + 60);
    HIDWORD(src[5]) = v57;
    v61 = LODWORD(src[7]) ^ v59;
    HIDWORD(src[6]) ^= v58;
    v62 = HIDWORD(src[7]) ^ v60;
    v63 = *(_DWORD *)(v46 + 68);
    v64 = *(_DWORD *)(v46 + 72);
    src[7] = __PAIR64__(v62, v61);
    v65 = *(_DWORD *)(v46 + 76);
    HIDWORD(src[8]) ^= v63;
    LODWORD(src[9]) ^= v64;
    v66 = *(_DWORD *)(v46 + 80);
    HIDWORD(src[9]) ^= v65;
    LODWORD(src[10]) ^= v66;
    v67 = *(_DWORD *)(v46 + 88);
    v68 = *(_DWORD *)(v46 + 92);
    HIDWORD(src[10]) ^= *(_DWORD *)(v46 + 84);
    LODWORD(src[11]) ^= v67;
    v69 = *(_DWORD *)(v46 + 96);
    HIDWORD(src[11]) ^= v68;
    v70 = *(_DWORD *)(v46 + 100);
    LODWORD(src[12]) ^= v69;
    v71 = *(_DWORD *)(v46 + 104);
    HIDWORD(src[12]) ^= v70;
    v72 = *(_DWORD *)(v46 + 108);
    v73 = *(_DWORD *)(v46 + 116);
    LODWORD(src[13]) ^= v71;
    v74 = *(_DWORD *)(v46 + 112);
    HIDWORD(src[13]) ^= v72;
    v75 = *(_QWORD *)(v46 + 120);
    LODWORD(src[14]) ^= v74;
    HIDWORD(src[14]) ^= v73;
    src[15] ^= v75;
    sub_581B8((int *)src, &src[8]);
    sub_581B8((int *)&src[8], src);
    --v21;
  }
  while ( v21 );
  v146 = -1521486534;
  v149 = 528734635;
  v147 = 1359893119;
  v148 = -1694144372;
  v150 = 1541459225;
  v143 = 1779033703;
  v144 = -1150833019;
  v145 = 1013904242;
  sub_584AC(&v143, (int)v20, 1);
  v76 = v5[1];
  v77 = v5[2];
  v78 = v5[3];
  v161 = *v5;
  v162 = v76;
  v163 = v77;
  v164 = v78;
  v165 = 128;
  v166 = 0;
  v167 = 0;
  v168 = 0;
  memset(v169, 0, 28);
  v169[7] = -2147352576;
  sub_584AC(&v143, (int)&v161, 1);
  v79 = v143;
  v80 = v144;
  v81 = v145;
  v82 = v146;
  a3[4] = 1359893119;
  *a3 = 1779033703;
  a3[1] = -1150833019;
  v152 = v79;
  v153 = v80;
  v154 = v81;
  v155 = v82;
  v83 = v147;
  v84 = v148;
  v85 = v149;
  v86 = v150;
  a3[2] = 1013904242;
  v156 = v83;
  v157 = v84;
  v158 = v85;
  v159 = v86;
  v87 = v153;
  v97 = v154;
  v88 = v153 ^ 0x5C5C5C5C;
  v89 = v155;
  v90 = v152;
  a3[3] = -1521486534;
  v102 = v90;
  v100 = v87;
  v161 = v90 ^ 0x5C5C5C5C;
  v162 = v88;
  a3[5] = -1694144372;
  a3[6] = 528734635;
  v163 = v97 ^ 0x5C5C5C5C;
  v164 = v89 ^ 0x5C5C5C5C;
  v92 = v156;
  v91 = v157;
  a3[7] = 1541459225;
  v108 = v91;
  v165 = v92 ^ 0x5C5C5C5C;
  v93 = v158;
  v166 = v91 ^ 0x5C5C5C5C;
  v167 = v158 ^ 0x5C5C5C5C;
  v168 = v159 ^ 0x5C5C5C5C;
  memset(v169, 92, 0x20u);
  v94 = v159 ^ 0x36363636;
  sub_CF8B4(a3, (int *)&v161);
  v168 = v94;
  v163 = v97 ^ 0x36363636;
  v161 = v102 ^ 0x36363636;
  v162 = v100 ^ 0x36363636;
  v146 = -1521486534;
  v164 = v89 ^ 0x36363636;
  v167 = v93 ^ 0x36363636;
  v166 = v108 ^ 0x36363636;
  v147 = 1359893119;
  v143 = 1779033703;
  v165 = v92 ^ 0x36363636;
  v148 = -1694144372;
  v144 = -1150833019;
  v145 = 1013904242;
  v149 = 528734635;
  v150 = 1541459225;
  memset(v169, 54, 0x20u);
  sub_CF8B4((int *)&v143, (int *)&v161);
  sub_584AC(&v143, (int)src, 1);
  sub_584AC(&v143, (int)&src[8], 1);
  sub_CF8B4((int *)&v143, dword_10E6B4);
  v161 = v143;
  v162 = v144;
  v163 = v145;
  v164 = v146;
  v165 = v147;
  v166 = v148;
  v167 = v149;
  v168 = v150;
  v169[0] = 0x80000000;
  memset(&v169[1], 0, 24);
  v169[7] = 768;
  return sub_CF8B4(a3, (int *)&v161);
}
