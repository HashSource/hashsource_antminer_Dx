int __fastcall sub_F5B6C(int a1, int *a2, int a3)
{
  size_t v3; // r5
  unsigned int v4; // r4
  char *v5; // r6
  size_t v6; // r5
  int v7; // r6
  int v8; // r2
  unsigned int *v9; // r6
  unsigned int v10; // r1
  unsigned int v11; // r2
  unsigned int v12; // r3
  unsigned int v13; // r0
  unsigned int v14; // r1
  unsigned int v15; // r2
  unsigned int v16; // r3
  int v17; // r11
  unsigned int v18; // r10
  _BYTE *v19; // r5
  unsigned int v20; // r7
  unsigned int v21; // r2
  unsigned int v22; // r0
  unsigned int v23; // r4
  unsigned int v24; // r1
  int v25; // lr
  unsigned int v26; // r11
  unsigned int v27; // r8
  unsigned int v28; // r2
  unsigned int v29; // r3
  int v30; // r9
  int v31; // r12
  unsigned int v32; // r6
  int v33; // r1
  unsigned int v34; // r9
  unsigned int v35; // r4
  unsigned int v36; // r7
  int v37; // r1
  int v38; // r0
  int v39; // r0
  unsigned int v40; // r11
  unsigned int v41; // r12
  int v42; // r2
  unsigned int v43; // r0
  int v44; // r7
  int v45; // r2
  int v46; // r9
  _DWORD *v47; // lr
  unsigned int v48; // r2
  int v49; // r1
  unsigned int v50; // r7
  unsigned int v51; // r3
  int v52; // r3
  int v53; // r6
  int v54; // r9
  int v55; // r10
  int v56; // r4
  int v57; // r11
  int v58; // r7
  int v59; // r8
  int i; // r5
  int v61; // r12
  int v62; // r2
  int v63; // r2
  int v64; // lr
  int v65; // r2
  int v66; // r1
  int v67; // r2
  int v68; // r3
  int v69; // r1
  int v70; // r2
  int v71; // r3
  int v73; // r1
  int v74; // r2
  int v75; // r3
  int v76; // r12
  int v77; // r1
  int v78; // r3
  _BYTE *v79; // r8
  int v80; // r9
  unsigned int v81; // r1
  unsigned int v82; // r7
  unsigned int v83; // r3
  unsigned int v84; // r5
  unsigned int v85; // r0
  unsigned int v86; // r6
  int v87; // r2
  unsigned int v88; // lr
  int v89; // r11
  unsigned int v90; // r3
  unsigned int v91; // r2
  int v92; // r5
  unsigned int v93; // r2
  int v94; // r1
  int v95; // r0
  unsigned int v96; // r7
  unsigned int v97; // r2
  unsigned int v98; // r1
  unsigned int v99; // lr
  int v100; // r0
  int v101; // r12
  unsigned int v102; // r6
  unsigned int v103; // r12
  unsigned int v104; // r0
  int v105; // r10
  unsigned int v106; // r6
  int v107; // r4
  _DWORD *v108; // r11
  unsigned int v109; // r2
  int v110; // r0
  unsigned int v111; // r7
  unsigned int v112; // r3
  unsigned int v113; // r5
  unsigned __int64 v114; // kr00_8
  int v115; // r6
  int v116; // r4
  int v117; // r11
  int v118; // r10
  int v119; // r9
  int v120; // r3
  unsigned int v121; // r8
  int v122; // r12
  int v123; // r2
  int v124; // r2
  int v125; // lr
  unsigned int v126; // r2
  size_t v127; // r2
  int v128; // [sp+Ch] [bp-268h]
  unsigned int v129; // [sp+Ch] [bp-268h]
  int v130; // [sp+10h] [bp-264h]
  unsigned int *v131; // [sp+10h] [bp-264h]
  int v132; // [sp+14h] [bp-260h]
  unsigned int v133; // [sp+14h] [bp-260h]
  int v134; // [sp+18h] [bp-25Ch]
  __int128 v135; // [sp+1Ch] [bp-258h]
  int v136; // [sp+2Ch] [bp-248h]
  int v139; // [sp+48h] [bp-22Ch] BYREF
  int v140; // [sp+4Ch] [bp-228h]
  int v141; // [sp+50h] [bp-224h]
  int v142; // [sp+54h] [bp-220h]
  int v143; // [sp+58h] [bp-21Ch]
  int v144; // [sp+5Ch] [bp-218h]
  int v145; // [sp+60h] [bp-214h]
  int v146; // [sp+64h] [bp-210h]
  _DWORD v147[8]; // [sp+68h] [bp-20Ch] BYREF
  unsigned int v148; // [sp+88h] [bp-1ECh] BYREF
  unsigned int v149; // [sp+8Ch] [bp-1E8h]
  unsigned int v150; // [sp+90h] [bp-1E4h]
  unsigned int v151; // [sp+94h] [bp-1E0h]
  unsigned int v152; // [sp+98h] [bp-1DCh]
  unsigned int v153; // [sp+9Ch] [bp-1D8h]
  unsigned int v154; // [sp+A0h] [bp-1D4h]
  unsigned int v155; // [sp+A4h] [bp-1D0h]
  unsigned int v156; // [sp+A8h] [bp-1CCh]
  unsigned int v157; // [sp+ACh] [bp-1C8h]
  unsigned int v158; // [sp+B0h] [bp-1C4h]
  unsigned int v159; // [sp+B4h] [bp-1C0h]
  unsigned int v160; // [sp+B8h] [bp-1BCh]
  unsigned int v161; // [sp+BCh] [bp-1B8h]
  unsigned int v162; // [sp+C0h] [bp-1B4h]
  unsigned int v163; // [sp+C4h] [bp-1B0h]
  unsigned int v164; // [sp+C8h] [bp-1ACh] BYREF
  int v165; // [sp+CCh] [bp-1A8h]
  unsigned int dest; // [sp+D0h] [bp-1A4h] BYREF
  unsigned int v167; // [sp+D4h] [bp-1A0h]
  unsigned int v168; // [sp+D8h] [bp-19Ch]
  unsigned int v169; // [sp+DCh] [bp-198h]
  unsigned int v170; // [sp+E0h] [bp-194h]
  unsigned int v171; // [sp+E4h] [bp-190h]
  unsigned int v172; // [sp+E8h] [bp-18Ch]
  unsigned int v173; // [sp+ECh] [bp-188h]
  unsigned int v174; // [sp+F0h] [bp-184h]
  unsigned int v175; // [sp+F4h] [bp-180h]
  unsigned int v176; // [sp+F8h] [bp-17Ch]
  unsigned int v177; // [sp+FCh] [bp-178h]
  unsigned int v178; // [sp+100h] [bp-174h]
  unsigned int v179; // [sp+104h] [bp-170h]
  unsigned int v180; // [sp+108h] [bp-16Ch]
  unsigned int v181; // [sp+10Ch] [bp-168h]
  __int128 v182; // [sp+150h] [bp-124h]
  int v183; // [sp+160h] [bp-114h]
  int v184; // [sp+164h] [bp-110h]
  int v185; // [sp+168h] [bp-10Ch]
  int v186; // [sp+16Ch] [bp-108h]
  unsigned int v187; // [sp+170h] [bp-104h] BYREF
  unsigned int v188; // [sp+174h] [bp-100h]
  unsigned int v189; // [sp+178h] [bp-FCh] BYREF
  unsigned int v190; // [sp+17Ch] [bp-F8h]
  unsigned int v191; // [sp+180h] [bp-F4h]
  unsigned int v192; // [sp+184h] [bp-F0h]
  unsigned int v193; // [sp+188h] [bp-ECh]
  unsigned int v194; // [sp+18Ch] [bp-E8h]
  unsigned int v195; // [sp+190h] [bp-E4h]
  unsigned int v196; // [sp+194h] [bp-E0h]
  unsigned int v197; // [sp+198h] [bp-DCh]
  unsigned int v198; // [sp+19Ch] [bp-D8h]
  unsigned int v199; // [sp+1A0h] [bp-D4h]
  unsigned int v200; // [sp+1A4h] [bp-D0h]
  unsigned int v201; // [sp+1A8h] [bp-CCh]
  unsigned int v202; // [sp+1ACh] [bp-C8h]
  int v203; // [sp+1B0h] [bp-C4h]
  int v204; // [sp+1B4h] [bp-C0h]
  _BYTE v205[28]; // [sp+1DCh] [bp-98h] BYREF
  int v206; // [sp+1F8h] [bp-7Ch]
  __int64 v207; // [sp+1FCh] [bp-78h]
  __int64 v208; // [sp+204h] [bp-70h]
  int v209; // [sp+20Ch] [bp-68h]
  int v210; // [sp+210h] [bp-64h]
  int v211; // [sp+214h] [bp-60h]
  int v212; // [sp+228h] [bp-4Ch]
  unsigned int v213; // [sp+22Ch] [bp-48h]
  unsigned int v214; // [sp+230h] [bp-44h]
  int v215; // [sp+24Ch] [bp-28h]
  _DWORD v216[4]; // [sp+250h] [bp-24h] BYREF
  unsigned int v217; // [sp+260h] [bp-14h]
  unsigned int v218; // [sp+264h] [bp-10h]
  int v219; // [sp+268h] [bp-Ch]
  int v220; // [sp+26Ch] [bp-8h]

  v3 = *(_DWORD *)(a1 + 388);
  if ( a3 && *((_BYTE *)a2 + 424) )
    qword_195EC8 = 0;
  memset(*(void **)(a1 + 392), 0, v3);
  if ( v3 )
  {
    if ( v3 >= 8 )
      v127 = 8;
    else
      v127 = v3;
    memcpy(*(void **)(a1 + 392), &qword_195EC8, v127);
    ++qword_195EC8;
  }
  memcpy((void *)(a2[73] + a2[21]), *(const void **)(a1 + 392), *(_DWORD *)(a1 + 388));
  v4 = a2[72];
  v5 = (char *)a2[73];
  v182 = sha256_h0;
  if ( v4 >= 0x40 )
    v6 = 64;
  else
    v6 = v4;
  v183 = unk_19065C;
  v184 = dword_190660;
  v185 = dword_190664;
  v186 = dword_190668;
  v165 = 0;
  v164 = 0;
  memcpy(&dest, v5, v6);
  if ( v4 > 0x3F )
  {
    v133 = v4 - v6;
    v79 = v205;
    v129 = (v4 - v6) >> 6;
    v188 = bswap32(v167);
    v131 = (unsigned int *)&v5[v6];
    v80 = 16;
    v189 = bswap32(v168);
    v192 = bswap32(v171);
    v190 = bswap32(v169);
    v191 = bswap32(v170);
    v193 = bswap32(v172);
    v194 = bswap32(v173);
    v81 = bswap32(dest);
    v195 = bswap32(v174);
    v196 = bswap32(v175);
    v187 = v81;
    v197 = bswap32(v176);
    v82 = bswap32(v180);
    v198 = bswap32(v177);
    v199 = bswap32(v178);
    v200 = bswap32(v179);
    v83 = bswap32(v181);
    v201 = v82;
    v202 = v83;
    do
    {
      v84 = *((_DWORD *)v79 - 26);
      v85 = *((_DWORD *)v79 - 25);
      v86 = *((_DWORD *)v79 - 23);
      v87 = __ROR4__(v83, 19) ^ __ROR4__(v83, 17) ^ (v83 >> 10);
      v88 = *((_DWORD *)v79 - 24);
      v89 = *((_DWORD *)v79 - 14);
      v90 = (__ROR4__(v82, 19) ^ __ROR4__(v82, 17) ^ (v82 >> 10))
          + v81
          + *((_DWORD *)v79 - 18)
          + (__ROR4__(v84, 18) ^ __ROR4__(v84, 7) ^ (v84 >> 3));
      v91 = v87 + *((_DWORD *)v79 - 17) + v84;
      v92 = *((_DWORD *)v79 - 16);
      v93 = v91 + (__ROR4__(v85, 18) ^ __ROR4__(v85, 7) ^ (v85 >> 3));
      *((_DWORD *)v79 - 10) = v93;
      v94 = (__ROR4__(v88, 7) ^ __ROR4__(v88, 18) ^ (v88 >> 3)) + v85 + v92;
      v95 = __ROR4__(v93, 17) ^ __ROR4__(v93, 19) ^ (v93 >> 10);
      v96 = *((_DWORD *)v79 - 22);
      v97 = *((_DWORD *)v79 - 21);
      v98 = v94 + (__ROR4__(v90, 17) ^ __ROR4__(v90, 19) ^ (v90 >> 10));
      v99 = (__ROR4__(v86, 7) ^ __ROR4__(v86, 18) ^ (v86 >> 3)) + v88 + *((_DWORD *)v79 - 15) + v95;
      *((_DWORD *)v79 - 9) = v98;
      v100 = *((_DWORD *)v79 - 13);
      *((_DWORD *)v79 - 8) = v99;
      v101 = v86 + v89;
      v102 = *((_DWORD *)v79 - 20);
      v103 = (__ROR4__(v96, 7) ^ __ROR4__(v96, 18) ^ (v96 >> 3))
           + v101
           + (__ROR4__(v98, 17) ^ __ROR4__(v98, 19) ^ (v98 >> 10));
      v104 = (__ROR4__(v97, 7) ^ __ROR4__(v97, 18) ^ (v97 >> 3))
           + v96
           + v100
           + (__ROR4__(v99, 17) ^ __ROR4__(v99, 19) ^ (v99 >> 10));
      v81 = *((_DWORD *)v79 - 19);
      v105 = *((_DWORD *)v79 - 12);
      *((_DWORD *)v79 - 6) = v104;
      *((_DWORD *)v79 - 11) = v90;
      v80 += 8;
      __pld(v79 - 28);
      v82 = (__ROR4__(v102, 7) ^ __ROR4__(v102, 18) ^ (v102 >> 3))
          + v97
          + v105
          + (__ROR4__(v103, 17) ^ __ROR4__(v103, 19) ^ (v103 >> 10));
      v83 = (__ROR4__(v81, 7) ^ __ROR4__(v81, 18) ^ (v81 >> 3))
          + v90
          + v102
          + (__ROR4__(v104, 17) ^ __ROR4__(v104, 19) ^ (v104 >> 10));
      __pld(v79);
      *((_DWORD *)v79 - 7) = v103;
      v79 += 32;
      *((_DWORD *)v79 - 12) = v83;
      *((_DWORD *)v79 - 13) = v82;
    }
    while ( v80 != 56 );
    v106 = v83;
    v107 = 6;
    v108 = v216;
    while ( 1 )
    {
      v109 = *(v108 - 15);
      v80 += 2;
      v110 = *(v108 - 7);
      v111 = (__ROR4__(v82, 17) ^ __ROR4__(v82, 19) ^ (v82 >> 10)) + v81;
      v81 = *(v108 - 14);
      v112 = (__ROR4__(v106, 17) ^ __ROR4__(v106, 19) ^ (v106 >> 10)) + *(v108 - 6) + v109;
      v108 += 2;
      v82 = v111 + v110 + (__ROR4__(v109, 7) ^ __ROR4__(v109, 18) ^ (v109 >> 3));
      *(v108 - 2) = v82;
      v106 = v112 + (__ROR4__(v81, 7) ^ __ROR4__(v81, 18) ^ (v81 >> 3));
      *(v108 - 1) = v106;
      if ( v80 == 62 )
        break;
      v107 -= 2;
    }
    v219 = (__ROR4__(v217, 19) ^ __ROR4__(v217, 17) ^ (v217 >> 10))
         + v215
         + v212
         + (__ROR4__(v213, 18) ^ __ROR4__(v213, 7) ^ (v213 >> 3));
    if ( v107 != 1 )
      v220 = (__ROR4__(v218, 19) ^ __ROR4__(v218, 17) ^ (v218 >> 10))
           + v216[0]
           + v213
           + (__ROR4__(v214, 18) ^ __ROR4__(v214, 7) ^ (v214 >> 3));
    v113 = v182;
    v114 = *(_QWORD *)((char *)&v182 + 4);
    v115 = 0;
    v116 = v183;
    v117 = HIDWORD(v182);
    v118 = v184;
    v119 = v185;
    v120 = v186;
    while ( 1 )
    {
      v122 = sha256_k[v115];
      v123 = (__ROR4__(v116, 11) ^ __ROR4__(v116, 6) ^ __ROR4__(v116, 25))
           + (v119 & ~v116 ^ v118 & v116)
           + *(&v187 + v115++);
      v124 = v123 + v122 + v120;
      v125 = v124 + v117;
      v120 = v119;
      v126 = (__ROR4__(v113, 13) ^ __ROR4__(v113, 2) ^ __ROR4__(v113, 22))
           + ((v114 ^ HIDWORD(v114)) & v113 ^ v114 & HIDWORD(v114))
           + v124;
      v117 = HIDWORD(v114);
      if ( v115 == 64 )
        break;
      v119 = v118;
      v118 = v116;
      v121 = v113;
      v116 = v125;
      v113 = v126;
      v114 = __PAIR64__(v114, v121);
    }
    LODWORD(v182) = v126 + v182;
    DWORD1(v182) += v113;
    DWORD2(v182) += v114;
    HIDWORD(v182) += HIDWORD(v114);
    v183 += v125;
    v184 += v116;
    v185 += v118;
    v186 += v119;
    sha256_transf((int)&v164, v131, v129);
    memcpy(&dest, (char *)v131 + (v133 & 0xFFFFFFC0), v133 & 0x3F);
    v165 = v133 & 0x3F;
    v164 += (v129 + 1) << 6;
  }
  else
  {
    v165 = v4;
  }
  sha256_final((int)&v164, &v148);
  v206 = sha256_h0;
  v207 = *(_QWORD *)((char *)&sha256_h0 + 4);
  v208 = *(_QWORD *)((char *)&sha256_h0 + 12);
  v209 = dword_190660;
  v210 = dword_190664;
  v211 = dword_190668;
  v187 = 0;
  v189 = v148;
  v190 = v149;
  v191 = v150;
  v192 = v151;
  v193 = v152;
  v194 = v153;
  v195 = v154;
  v196 = v155;
  v188 = 32;
  sha256_final((int)&v187, &v139);
  v7 = a2[79];
  v148 = v139;
  v149 = v140;
  v150 = v141;
  v151 = v142;
  v152 = v143;
  v153 = v144;
  v154 = v145;
  v155 = v146;
  if ( v7 > 0 )
  {
    v8 = 0;
    v128 = 0;
    do
    {
      v9 = *(unsigned int **)(a2[80] + 4 * v8);
      v10 = v9[1];
      v11 = v9[2];
      v12 = v9[3];
      v130 = unk_19065C;
      v156 = *v9;
      v157 = v10;
      v158 = v11;
      v159 = v12;
      v13 = v9[4];
      v14 = v9[5];
      v15 = v9[6];
      v134 = dword_190664;
      v16 = v9[7];
      v135 = sha256_h0;
      v132 = dword_190660;
      v182 = sha256_h0;
      v160 = v13;
      v161 = v14;
      v162 = v15;
      v163 = v16;
      v185 = dword_190664;
      v183 = unk_19065C;
      v136 = dword_190668;
      v186 = dword_190668;
      v17 = 16;
      v184 = dword_190660;
      v165 = 0;
      v164 = 0;
      dest = v148;
      v167 = v149;
      v168 = v150;
      v169 = v151;
      v170 = v152;
      v171 = v153;
      v172 = v154;
      v173 = v155;
      v174 = v156;
      v175 = v157;
      v176 = v158;
      v177 = v159;
      v178 = v13;
      v179 = v14;
      v180 = v15;
      v181 = v16;
      v188 = bswap32(v149);
      v189 = bswap32(v150);
      v190 = bswap32(v151);
      v18 = bswap32(v148);
      v191 = bswap32(v152);
      v187 = v18;
      v192 = bswap32(v153);
      v193 = bswap32(v154);
      v197 = bswap32(v158);
      v19 = v205;
      v20 = bswap32(v15);
      v194 = bswap32(v155);
      v21 = bswap32(v13);
      v195 = bswap32(v156);
      v22 = bswap32(v16);
      v196 = bswap32(v157);
      v198 = bswap32(v159);
      v199 = v21;
      v200 = bswap32(v14);
      v201 = v20;
      v202 = v22;
      do
      {
        v23 = *((_DWORD *)v19 - 26);
        v24 = *((_DWORD *)v19 - 25);
        v25 = v17 + 8;
        v26 = *((_DWORD *)v19 - 23);
        v27 = *((_DWORD *)v19 - 24);
        v28 = (__ROR4__(v22, 19) ^ __ROR4__(v22, 17) ^ (v22 >> 10))
            + *((_DWORD *)v19 - 17)
            + v23
            + (__ROR4__(v24, 7) ^ __ROR4__(v24, 18) ^ (v24 >> 3));
        v29 = (__ROR4__(v20, 19) ^ __ROR4__(v20, 17) ^ (v20 >> 10))
            + v18
            + *((_DWORD *)v19 - 18)
            + (__ROR4__(v23, 18) ^ __ROR4__(v23, 7) ^ (v23 >> 3));
        v30 = *((_DWORD *)v19 - 16);
        v31 = *((_DWORD *)v19 - 15);
        *((_DWORD *)v19 - 10) = v28;
        v32 = *((_DWORD *)v19 - 21);
        v33 = v24 + v30;
        v34 = *((_DWORD *)v19 - 22);
        v35 = (__ROR4__(v26, 18) ^ __ROR4__(v26, 7) ^ (v26 >> 3))
            + v27
            + v31
            + (__ROR4__(v28, 17) ^ __ROR4__(v28, 19) ^ (v28 >> 10));
        *((_DWORD *)v19 - 8) = v35;
        v36 = (__ROR4__(v27, 18) ^ __ROR4__(v27, 7) ^ (v27 >> 3))
            + v33
            + (__ROR4__(v29, 17) ^ __ROR4__(v29, 19) ^ (v29 >> 10));
        v37 = *((_DWORD *)v19 - 13);
        v38 = *((_DWORD *)v19 - 14);
        *((_DWORD *)v19 - 9) = v36;
        v39 = v26 + v38;
        v40 = *((_DWORD *)v19 - 20);
        v41 = (__ROR4__(v32, 7) ^ __ROR4__(v32, 18) ^ (v32 >> 3))
            + v34
            + v37
            + (__ROR4__(v35, 19) ^ __ROR4__(v35, 17) ^ (v35 >> 10));
        v18 = *((_DWORD *)v19 - 19);
        v42 = *((_DWORD *)v19 - 12);
        v43 = (__ROR4__(v34, 18) ^ __ROR4__(v34, 7) ^ (v34 >> 3))
            + v39
            + (__ROR4__(v36, 19) ^ __ROR4__(v36, 17) ^ (v36 >> 10));
        *((_DWORD *)v19 - 6) = v41;
        *((_DWORD *)v19 - 11) = v29;
        __pld(v19 - 28);
        v44 = (__ROR4__(v40, 7) ^ __ROR4__(v40, 18) ^ (v40 >> 3)) + v32 + v42;
        v45 = __ROR4__(v43, 17) ^ __ROR4__(v43, 19) ^ (v43 >> 10);
        *((_DWORD *)v19 - 7) = v43;
        v22 = (__ROR4__(v18, 7) ^ __ROR4__(v18, 18) ^ (v18 >> 3))
            + v29
            + v40
            + (__ROR4__(v41, 17) ^ __ROR4__(v41, 19) ^ (v41 >> 10));
        v20 = v44 + v45;
        __pld(v19);
        *((_DWORD *)v19 - 4) = v22;
        v17 = v25;
        *((_DWORD *)v19 - 5) = v20;
        v46 = 64 - v25;
        v19 += 32;
      }
      while ( v25 != 56 );
      v47 = v216;
      while ( 1 )
      {
        v48 = *(v47 - 15);
        v17 += 2;
        v49 = *(v47 - 7);
        v50 = (__ROR4__(v20, 19) ^ __ROR4__(v20, 17) ^ (v20 >> 10)) + v18;
        v18 = *(v47 - 14);
        v51 = (__ROR4__(v22, 19) ^ __ROR4__(v22, 17) ^ (v22 >> 10)) + *(v47 - 6) + v48;
        v47 += 2;
        v20 = v50 + v49 + (__ROR4__(v48, 7) ^ __ROR4__(v48, 18) ^ (v48 >> 3));
        *(v47 - 2) = v20;
        v22 = v51 + (__ROR4__(v18, 18) ^ __ROR4__(v18, 7) ^ (v18 >> 3));
        *(v47 - 1) = v22;
        if ( v17 == 62 )
          break;
        v46 -= 2;
      }
      v219 = (__ROR4__(v217, 19) ^ __ROR4__(v217, 17) ^ (v217 >> 10))
           + v215
           + v212
           + (__ROR4__(v213, 18) ^ __ROR4__(v213, 7) ^ (v213 >> 3));
      if ( v46 != 3 )
        v220 = (__ROR4__(v218, 17) ^ __ROR4__(v218, 19) ^ (v218 >> 10))
             + v216[0]
             + v213
             + (__ROR4__(v214, 18) ^ __ROR4__(v214, 7) ^ (v214 >> 3));
      v52 = v136;
      v53 = 0;
      v54 = v134;
      v55 = v132;
      v56 = v130;
      v57 = HIDWORD(v135);
      v58 = DWORD2(v135);
      v59 = DWORD1(v135);
      for ( i = v135; ; i = v65 )
      {
        v61 = sha256_k[v53];
        v62 = (__ROR4__(v56, 11) ^ __ROR4__(v56, 6) ^ __ROR4__(v56, 25)) + (v54 & ~v56 ^ v56 & v55) + *(&v187 + v53++);
        v63 = v62 + v61 + v52;
        v64 = v63 + v57;
        v52 = v54;
        v65 = (__ROR4__(i, 13) ^ __ROR4__(i, 2) ^ __ROR4__(i, 22)) + ((v59 ^ v58) & i ^ v59 & v58) + v63;
        v57 = v58;
        if ( v53 == 64 )
          break;
        v54 = v55;
        v58 = v59;
        v55 = v56;
        v59 = i;
        v56 = v64;
      }
      LODWORD(v182) = v65 + v135;
      DWORD1(v182) = i + DWORD1(v135);
      DWORD2(v182) = v59 + DWORD2(v135);
      HIDWORD(v182) = v58 + HIDWORD(v135);
      v183 = v64 + v130;
      v184 = v56 + v132;
      v185 = v55 + v134;
      v186 = v54 + v136;
      ++v128;
      sha256_transf((int)&v164, &v164, 0);
      v165 = 0;
      v164 += 64;
      sha256_final((int)&v164, v147);
      v207 = *(_QWORD *)((char *)&sha256_h0 + 4);
      v206 = sha256_h0;
      v187 = 0;
      v209 = dword_190660;
      v208 = *(_QWORD *)((char *)&sha256_h0 + 12);
      v210 = dword_190664;
      v211 = dword_190668;
      v189 = v147[0];
      v190 = v147[1];
      v191 = v147[2];
      v192 = v147[3];
      v193 = v147[4];
      v194 = v147[5];
      v195 = v147[6];
      v196 = v147[7];
      v198 = 0;
      v199 = 0;
      v200 = 0;
      v201 = 0;
      v202 = 0;
      v203 = 0;
      v188 = 32;
      v197 = 128;
      v204 = 0x10000;
      sha256_transf((int)&v187, &v189, 1);
      v139 = HIBYTE(v206)
           | (unsigned __int16)(BYTE2(v206) << 8)
           | (BYTE1(v206) << 16) & 0xFFFFFF
           | ((unsigned __int8)v206 << 24);
      v140 = BYTE3(v207)
           | (unsigned __int16)(BYTE2(v207) << 8)
           | (BYTE1(v207) << 16) & 0xFFFFFF
           | ((unsigned __int8)v207 << 24);
      v141 = HIBYTE(v207) | (unsigned __int16)(BYTE6(v207) << 8) | (BYTE5(v207) << 16) & 0xFFFFFF | (BYTE4(v207) << 24);
      v142 = BYTE3(v208)
           | (unsigned __int16)(BYTE2(v208) << 8)
           | (BYTE1(v208) << 16) & 0xFFFFFF
           | ((unsigned __int8)v208 << 24);
      v143 = HIBYTE(v208) | (unsigned __int16)(BYTE6(v208) << 8) | (BYTE5(v208) << 16) & 0xFFFFFF | (BYTE4(v208) << 24);
      v144 = HIBYTE(v209)
           | (unsigned __int16)(BYTE2(v209) << 8)
           | (BYTE1(v209) << 16) & 0xFFFFFF
           | ((unsigned __int8)v209 << 24);
      v145 = HIBYTE(v210)
           | (unsigned __int16)(BYTE2(v210) << 8)
           | (BYTE1(v210) << 16) & 0xFFFFFF
           | ((unsigned __int8)v210 << 24);
      v146 = HIBYTE(v211)
           | (unsigned __int16)(BYTE2(v211) << 8)
           | (BYTE1(v211) << 16) & 0xFFFFFF
           | ((unsigned __int8)v211 << 24);
      v148 = v139;
      v149 = v140;
      v150 = v141;
      v151 = v142;
      v152 = v143;
      v153 = v144;
      v154 = v145;
      v155 = v146;
      v8 = v128;
    }
    while ( a2[79] > v128 );
  }
  v139 = bswap32(v148);
  v140 = bswap32(v149);
  v144 = bswap32(v153);
  v145 = bswap32(v154);
  v141 = bswap32(v150);
  v146 = bswap32(v155);
  v142 = bswap32(v151);
  v143 = bswap32(v152);
  memcpy((void *)(a1 + 8), a2 + 112, 0x50u);
  v66 = v140;
  v67 = v141;
  v68 = v142;
  *(_DWORD *)(a1 + 44) = v139;
  *(_DWORD *)(a1 + 48) = v66;
  *(_DWORD *)(a1 + 52) = v67;
  *(_DWORD *)(a1 + 56) = v68;
  v69 = v144;
  v70 = v145;
  v71 = v146;
  *(_DWORD *)(a1 + 60) = v143;
  *(_DWORD *)(a1 + 64) = v69;
  *(_DWORD *)(a1 + 68) = v70;
  *(_DWORD *)(a1 + 72) = v71;
  v73 = a2[177];
  v74 = a2[178];
  v75 = a2[179];
  *(_DWORD *)(a1 + 264) = a2[176];
  *(_DWORD *)(a1 + 268) = v73;
  *(_DWORD *)(a1 + 272) = v74;
  *(_DWORD *)(a1 + 276) = v75;
  v76 = a2[180];
  v77 = a2[181];
  v78 = a2[183];
  *(_DWORD *)(a1 + 288) = a2[182];
  *(_DWORD *)(a1 + 280) = v76;
  *(_DWORD *)(a1 + 284) = v77;
  *(_DWORD *)(a1 + 292) = v78;
  *(_DWORD *)(a1 + 472) = a2[87];
  *(_QWORD *)a1 = *a2;
  return 0;
}
