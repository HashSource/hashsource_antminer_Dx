int __fastcall sub_5A4AC(int a1, pthread_mutex_t *a2)
{
  unsigned int *p_nusers; // r5
  unsigned int nusers; // r6
  int v7; // r0
  int v8; // r3
  __int64 v9; // kr00_8
  int spins; // r8
  unsigned int lock; // r4
  int owner; // r9
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  size_t v17; // r5
  char *count; // r6
  signed int v19; // r6
  signed int v20; // r2
  unsigned int *v21; // r6
  unsigned int v22; // r1
  unsigned int v23; // r2
  unsigned int v24; // r3
  unsigned int v25; // r0
  unsigned int v26; // r1
  unsigned int v27; // r2
  unsigned int v28; // r3
  int v29; // r11
  unsigned int v30; // r10
  _BYTE *v31; // r5
  unsigned int v32; // r7
  unsigned int v33; // r2
  unsigned int v34; // r0
  unsigned int v35; // r4
  unsigned int v36; // r1
  int v37; // lr
  unsigned int v38; // r11
  unsigned int v39; // r8
  unsigned int v40; // r2
  unsigned int v41; // r3
  int v42; // r9
  int v43; // r12
  unsigned int v44; // r6
  int v45; // r1
  unsigned int v46; // r9
  unsigned int v47; // r4
  unsigned int v48; // r7
  int v49; // r1
  int v50; // r0
  int v51; // r0
  unsigned int v52; // r11
  unsigned int v53; // r12
  int v54; // r2
  unsigned int v55; // r0
  int v56; // r7
  int v57; // r2
  int v58; // r9
  unsigned int *v59; // lr
  unsigned int v60; // r2
  unsigned int v61; // r7
  int v62; // r3
  int v63; // r3
  int v64; // r6
  int v65; // r9
  int v66; // r10
  int v67; // r4
  int v68; // r11
  int v69; // r7
  int v70; // r8
  int i; // r5
  int v72; // r12
  int v73; // r2
  int v74; // r2
  int v75; // lr
  int v76; // r2
  int v77; // r1
  int v78; // r2
  int v79; // r3
  int v80; // r1
  int v81; // r2
  int v82; // r3
  void *v83; // r0
  unsigned int v84; // r3
  _BYTE *v86; // r8
  int v87; // r9
  unsigned int v88; // r1
  unsigned int v89; // r7
  unsigned int v90; // r3
  unsigned int v91; // r5
  unsigned int v92; // r0
  unsigned int v93; // r6
  int v94; // r2
  unsigned int v95; // lr
  int v96; // r11
  unsigned int v97; // r3
  unsigned int v98; // r2
  int v99; // r5
  unsigned int v100; // r2
  int v101; // r1
  int v102; // r0
  unsigned int v103; // r7
  unsigned int v104; // r2
  unsigned int v105; // r1
  unsigned int v106; // lr
  int v107; // r0
  int v108; // r12
  unsigned int v109; // r6
  unsigned int v110; // r12
  unsigned int v111; // r0
  int v112; // r10
  unsigned int v113; // r6
  int v114; // r4
  _DWORD *v115; // r11
  unsigned int v116; // r2
  int v117; // r0
  unsigned int v118; // r7
  unsigned int v119; // r3
  unsigned int v120; // r5
  unsigned __int64 v121; // kr08_8
  int v122; // r6
  int v123; // r4
  int v124; // r11
  int v125; // r10
  int v126; // r9
  int v127; // r3
  unsigned int v128; // r8
  int v129; // r12
  int v130; // r2
  int v131; // r2
  int v132; // lr
  unsigned int v133; // r2
  signed int v134; // [sp+8h] [bp-274h]
  unsigned int v135; // [sp+8h] [bp-274h]
  int v136; // [sp+Ch] [bp-270h]
  unsigned int *v137; // [sp+Ch] [bp-270h]
  int v138; // [sp+10h] [bp-26Ch]
  unsigned int v139; // [sp+10h] [bp-26Ch]
  int v140; // [sp+14h] [bp-268h]
  __int128 v141; // [sp+18h] [bp-264h]
  int v142; // [sp+28h] [bp-254h]
  pthread_mutex_t *mutex; // [sp+44h] [bp-238h]
  int v146; // [sp+50h] [bp-22Ch] BYREF
  int v147; // [sp+54h] [bp-228h]
  int v148; // [sp+58h] [bp-224h]
  int v149; // [sp+5Ch] [bp-220h]
  int v150; // [sp+60h] [bp-21Ch]
  int v151; // [sp+64h] [bp-218h]
  int v152; // [sp+68h] [bp-214h]
  int v153; // [sp+6Ch] [bp-210h]
  _DWORD v154[8]; // [sp+70h] [bp-20Ch] BYREF
  unsigned int v155; // [sp+90h] [bp-1ECh] BYREF
  unsigned int v156; // [sp+94h] [bp-1E8h]
  unsigned int v157; // [sp+98h] [bp-1E4h]
  unsigned int v158; // [sp+9Ch] [bp-1E0h]
  unsigned int v159; // [sp+A0h] [bp-1DCh]
  unsigned int v160; // [sp+A4h] [bp-1D8h]
  unsigned int v161; // [sp+A8h] [bp-1D4h]
  unsigned int v162; // [sp+ACh] [bp-1D0h]
  unsigned int v163; // [sp+B0h] [bp-1CCh]
  unsigned int v164; // [sp+B4h] [bp-1C8h]
  unsigned int v165; // [sp+B8h] [bp-1C4h]
  unsigned int v166; // [sp+BCh] [bp-1C0h]
  unsigned int v167; // [sp+C0h] [bp-1BCh]
  unsigned int v168; // [sp+C4h] [bp-1B8h]
  unsigned int v169; // [sp+C8h] [bp-1B4h]
  unsigned int v170; // [sp+CCh] [bp-1B0h]
  unsigned int v171; // [sp+D0h] [bp-1ACh] BYREF
  int v172; // [sp+D4h] [bp-1A8h]
  unsigned int dest; // [sp+D8h] [bp-1A4h] BYREF
  unsigned int v174; // [sp+DCh] [bp-1A0h]
  unsigned int v175; // [sp+E0h] [bp-19Ch]
  unsigned int v176; // [sp+E4h] [bp-198h]
  unsigned int v177; // [sp+E8h] [bp-194h]
  unsigned int v178; // [sp+ECh] [bp-190h]
  unsigned int v179; // [sp+F0h] [bp-18Ch]
  unsigned int v180; // [sp+F4h] [bp-188h]
  unsigned int v181; // [sp+F8h] [bp-184h]
  unsigned int v182; // [sp+FCh] [bp-180h]
  unsigned int v183; // [sp+100h] [bp-17Ch]
  unsigned int v184; // [sp+104h] [bp-178h]
  unsigned int v185; // [sp+108h] [bp-174h]
  unsigned int v186; // [sp+10Ch] [bp-170h]
  unsigned int v187; // [sp+110h] [bp-16Ch]
  unsigned int v188; // [sp+114h] [bp-168h]
  __int128 v189; // [sp+158h] [bp-124h]
  int v190; // [sp+168h] [bp-114h]
  int v191; // [sp+16Ch] [bp-110h]
  int v192; // [sp+170h] [bp-10Ch]
  int v193; // [sp+174h] [bp-108h]
  unsigned int v194; // [sp+178h] [bp-104h] BYREF
  unsigned int v195; // [sp+17Ch] [bp-100h]
  unsigned int v196; // [sp+180h] [bp-FCh] BYREF
  unsigned int v197; // [sp+184h] [bp-F8h]
  unsigned int v198; // [sp+188h] [bp-F4h]
  unsigned int v199; // [sp+18Ch] [bp-F0h]
  unsigned int v200; // [sp+190h] [bp-ECh]
  unsigned int v201; // [sp+194h] [bp-E8h]
  unsigned int v202; // [sp+198h] [bp-E4h]
  unsigned int v203; // [sp+19Ch] [bp-E0h]
  unsigned int v204; // [sp+1A0h] [bp-DCh]
  unsigned int v205; // [sp+1A4h] [bp-D8h]
  unsigned int v206; // [sp+1A8h] [bp-D4h]
  unsigned int v207; // [sp+1ACh] [bp-D0h]
  unsigned int v208; // [sp+1B0h] [bp-CCh]
  unsigned int v209; // [sp+1B4h] [bp-C8h]
  int v210; // [sp+1B8h] [bp-C4h]
  int v211; // [sp+1BCh] [bp-C0h]
  _BYTE v212[28]; // [sp+1E4h] [bp-98h] BYREF
  int v213; // [sp+200h] [bp-7Ch]
  __int64 v214; // [sp+204h] [bp-78h]
  __int64 v215; // [sp+20Ch] [bp-70h]
  int v216; // [sp+214h] [bp-68h]
  int v217; // [sp+218h] [bp-64h]
  int v218; // [sp+21Ch] [bp-60h]
  int v219; // [sp+230h] [bp-4Ch]
  unsigned int v220; // [sp+234h] [bp-48h]
  unsigned int v221; // [sp+238h] [bp-44h]
  int v222; // [sp+254h] [bp-28h]
  _DWORD v223[4]; // [sp+258h] [bp-24h] BYREF
  unsigned int v224; // [sp+268h] [bp-14h]
  unsigned int v225; // [sp+26Ch] [bp-10h]
  int v226; // [sp+270h] [bp-Ch]
  int v227; // [sp+274h] [bp-8h]

  p_nusers = &a2[12].__nusers;
  mutex = a2 + 40;
  pthread_mutex_lock(a2 + 40);
  memcpy((void *)(a2[12].__count + a2[13].__lock), p_nusers, a2[3].__owner);
  nusers = a2[12].__nusers;
  v7 = sha256_h0;
  v9 = *(_QWORD *)((char *)&sha256_h0 + 4);
  v8 = HIDWORD(sha256_h0);
  spins = a2[12].__spins;
  a2[12].__nusers = nusers + 1;
  LODWORD(v189) = v7;
  *(_QWORD *)((char *)&v189 + 4) = v9;
  HIDWORD(v189) = v8;
  lock = a2[12].__lock;
  owner = a2[3].__owner;
  p_nusers[1] = (__PAIR64__(spins, nusers) + 1) >> 32;
  v13 = unk_1A2A54;
  v14 = dword_1A2A58;
  v15 = dword_1A2A5C;
  v16 = dword_1A2A60;
  if ( lock >= 0x40 )
    v17 = 64;
  else
    v17 = lock;
  *(_DWORD *)(a1 + 488) = nusers;
  *(_DWORD *)(a1 + 492) = spins;
  count = (char *)a2[12].__count;
  v190 = v13;
  v191 = v14;
  v192 = v15;
  v193 = v16;
  *(_DWORD *)(a1 + 388) = owner;
  v172 = 0;
  v171 = 0;
  memcpy(&dest, count, v17);
  if ( lock > 0x3F )
  {
    v139 = lock - v17;
    v86 = v212;
    v135 = (lock - v17) >> 6;
    v137 = (unsigned int *)&count[v17];
    v195 = bswap32(v174);
    v87 = 16;
    v196 = bswap32(v175);
    v197 = bswap32(v176);
    v198 = bswap32(v177);
    v199 = bswap32(v178);
    v200 = bswap32(v179);
    v201 = bswap32(v180);
    v88 = bswap32(dest);
    v202 = bswap32(v181);
    v203 = bswap32(v182);
    v194 = v88;
    v204 = bswap32(v183);
    v89 = bswap32(v187);
    v205 = bswap32(v184);
    v206 = bswap32(v185);
    v207 = bswap32(v186);
    v90 = bswap32(v188);
    v208 = v89;
    v209 = v90;
    do
    {
      v91 = *((_DWORD *)v86 - 26);
      v92 = *((_DWORD *)v86 - 25);
      v93 = *((_DWORD *)v86 - 23);
      v94 = __ROR4__(v90, 19) ^ __ROR4__(v90, 17) ^ (v90 >> 10);
      v95 = *((_DWORD *)v86 - 24);
      v96 = *((_DWORD *)v86 - 14);
      v97 = (__ROR4__(v89, 19) ^ __ROR4__(v89, 17) ^ (v89 >> 10))
          + v88
          + *((_DWORD *)v86 - 18)
          + (__ROR4__(v91, 18) ^ __ROR4__(v91, 7) ^ (v91 >> 3));
      v98 = v94 + *((_DWORD *)v86 - 17) + v91;
      v99 = *((_DWORD *)v86 - 16);
      v100 = v98 + (__ROR4__(v92, 18) ^ __ROR4__(v92, 7) ^ (v92 >> 3));
      *((_DWORD *)v86 - 10) = v100;
      v101 = (__ROR4__(v95, 7) ^ __ROR4__(v95, 18) ^ (v95 >> 3)) + v92 + v99;
      v102 = __ROR4__(v100, 17) ^ __ROR4__(v100, 19) ^ (v100 >> 10);
      v103 = *((_DWORD *)v86 - 22);
      v104 = *((_DWORD *)v86 - 21);
      v105 = v101 + (__ROR4__(v97, 17) ^ __ROR4__(v97, 19) ^ (v97 >> 10));
      v106 = (__ROR4__(v93, 7) ^ __ROR4__(v93, 18) ^ (v93 >> 3)) + v95 + *((_DWORD *)v86 - 15) + v102;
      *((_DWORD *)v86 - 9) = v105;
      v107 = *((_DWORD *)v86 - 13);
      *((_DWORD *)v86 - 8) = v106;
      v108 = v93 + v96;
      v109 = *((_DWORD *)v86 - 20);
      v110 = (__ROR4__(v103, 7) ^ __ROR4__(v103, 18) ^ (v103 >> 3))
           + v108
           + (__ROR4__(v105, 17) ^ __ROR4__(v105, 19) ^ (v105 >> 10));
      v111 = (__ROR4__(v104, 7) ^ __ROR4__(v104, 18) ^ (v104 >> 3))
           + v103
           + v107
           + (__ROR4__(v106, 17) ^ __ROR4__(v106, 19) ^ (v106 >> 10));
      v88 = *((_DWORD *)v86 - 19);
      v112 = *((_DWORD *)v86 - 12);
      *((_DWORD *)v86 - 6) = v111;
      *((_DWORD *)v86 - 11) = v97;
      v87 += 8;
      __pld(v86 - 28);
      v89 = (__ROR4__(v109, 7) ^ __ROR4__(v109, 18) ^ (v109 >> 3))
          + v104
          + v112
          + (__ROR4__(v110, 17) ^ __ROR4__(v110, 19) ^ (v110 >> 10));
      v90 = (__ROR4__(v88, 7) ^ __ROR4__(v88, 18) ^ (v88 >> 3))
          + v97
          + v109
          + (__ROR4__(v111, 17) ^ __ROR4__(v111, 19) ^ (v111 >> 10));
      __pld(v86);
      *((_DWORD *)v86 - 7) = v110;
      v86 += 32;
      *((_DWORD *)v86 - 12) = v90;
      *((_DWORD *)v86 - 13) = v89;
    }
    while ( v87 != 56 );
    v113 = v90;
    v114 = 6;
    v115 = v223;
    while ( 1 )
    {
      v116 = *(v115 - 15);
      v87 += 2;
      v117 = *(v115 - 7);
      v118 = (__ROR4__(v89, 17) ^ __ROR4__(v89, 19) ^ (v89 >> 10)) + v88;
      v88 = *(v115 - 14);
      v119 = (__ROR4__(v113, 17) ^ __ROR4__(v113, 19) ^ (v113 >> 10)) + *(v115 - 6) + v116;
      v115 += 2;
      v89 = v118 + v117 + (__ROR4__(v116, 7) ^ __ROR4__(v116, 18) ^ (v116 >> 3));
      *(v115 - 2) = v89;
      v113 = v119 + (__ROR4__(v88, 7) ^ __ROR4__(v88, 18) ^ (v88 >> 3));
      *(v115 - 1) = v113;
      if ( v87 == 62 )
        break;
      v114 -= 2;
    }
    v226 = (__ROR4__(v224, 19) ^ __ROR4__(v224, 17) ^ (v224 >> 10))
         + v222
         + v219
         + (__ROR4__(v220, 18) ^ __ROR4__(v220, 7) ^ (v220 >> 3));
    if ( v114 != 1 )
      v227 = (__ROR4__(v225, 19) ^ __ROR4__(v225, 17) ^ (v225 >> 10))
           + v223[0]
           + v220
           + (__ROR4__(v221, 18) ^ __ROR4__(v221, 7) ^ (v221 >> 3));
    v120 = v189;
    v121 = *(_QWORD *)((char *)&v189 + 4);
    v122 = 0;
    v123 = v190;
    v124 = HIDWORD(v189);
    v125 = v191;
    v126 = v192;
    v127 = v193;
    while ( 1 )
    {
      v129 = sha256_k[v122];
      v130 = (__ROR4__(v123, 11) ^ __ROR4__(v123, 6) ^ __ROR4__(v123, 25))
           + (v126 & ~v123 ^ v125 & v123)
           + *(&v194 + v122++);
      v131 = v130 + v129 + v127;
      v132 = v131 + v124;
      v127 = v126;
      v133 = (__ROR4__(v120, 13) ^ __ROR4__(v120, 2) ^ __ROR4__(v120, 22))
           + ((v121 ^ HIDWORD(v121)) & v120 ^ v121 & HIDWORD(v121))
           + v131;
      v124 = HIDWORD(v121);
      if ( v122 == 64 )
        break;
      v126 = v125;
      v125 = v123;
      v128 = v120;
      v123 = v132;
      v120 = v133;
      v121 = __PAIR64__(v121, v128);
    }
    LODWORD(v189) = v133 + v189;
    DWORD1(v189) += v120;
    DWORD2(v189) += v121;
    HIDWORD(v189) += HIDWORD(v121);
    v190 += v132;
    v191 += v123;
    v192 += v125;
    v193 += v126;
    sha256_transf((int)&v171, v137, v135);
    memcpy(&dest, (char *)v137 + (v139 & 0xFFFFFFC0), v139 & 0x3F);
    v172 = v139 & 0x3F;
    v171 += (v135 + 1) << 6;
  }
  else
  {
    v172 = lock;
  }
  sha256_final((int)&v171, &v155);
  v213 = sha256_h0;
  v214 = *(_QWORD *)((char *)&sha256_h0 + 4);
  v215 = *(_QWORD *)((char *)&sha256_h0 + 12);
  v216 = dword_1A2A58;
  v217 = dword_1A2A5C;
  v218 = dword_1A2A60;
  v194 = 0;
  v196 = v155;
  v197 = v156;
  v198 = v157;
  v199 = v158;
  v200 = v159;
  v201 = v160;
  v202 = v161;
  v203 = v162;
  v195 = 32;
  sha256_final((int)&v194, &v146);
  v19 = a2[13].__count;
  v155 = v146;
  v156 = v147;
  v157 = v148;
  v158 = v149;
  v159 = v150;
  v160 = v151;
  v161 = v152;
  v162 = v153;
  if ( v19 > 0 )
  {
    v20 = 0;
    v134 = 0;
    do
    {
      v21 = *(unsigned int **)(a2[13].__owner + 4 * v20);
      v22 = v21[1];
      v23 = v21[2];
      v24 = v21[3];
      v136 = unk_1A2A54;
      v163 = *v21;
      v164 = v22;
      v165 = v23;
      v166 = v24;
      v25 = v21[4];
      v26 = v21[5];
      v27 = v21[6];
      v140 = dword_1A2A5C;
      v28 = v21[7];
      v141 = sha256_h0;
      v138 = dword_1A2A58;
      v189 = sha256_h0;
      v167 = v25;
      v168 = v26;
      v169 = v27;
      v170 = v28;
      v192 = dword_1A2A5C;
      v190 = unk_1A2A54;
      v142 = dword_1A2A60;
      v193 = dword_1A2A60;
      v29 = 16;
      v191 = dword_1A2A58;
      v172 = 0;
      v171 = 0;
      dest = v155;
      v174 = v156;
      v175 = v157;
      v176 = v158;
      v177 = v159;
      v178 = v160;
      v179 = v161;
      v180 = v162;
      v181 = v163;
      v182 = v164;
      v183 = v165;
      v184 = v166;
      v185 = v25;
      v186 = v26;
      v187 = v27;
      v188 = v28;
      v195 = bswap32(v156);
      v196 = bswap32(v157);
      v197 = bswap32(v158);
      v30 = bswap32(v155);
      v198 = bswap32(v159);
      v194 = v30;
      v199 = bswap32(v160);
      v200 = bswap32(v161);
      v204 = bswap32(v165);
      v31 = v212;
      v32 = bswap32(v27);
      v201 = bswap32(v162);
      v33 = bswap32(v25);
      v202 = bswap32(v163);
      v34 = bswap32(v28);
      v203 = bswap32(v164);
      v205 = bswap32(v166);
      v206 = v33;
      v207 = bswap32(v26);
      v208 = v32;
      v209 = v34;
      do
      {
        v35 = *((_DWORD *)v31 - 26);
        v36 = *((_DWORD *)v31 - 25);
        v37 = v29 + 8;
        v38 = *((_DWORD *)v31 - 23);
        v39 = *((_DWORD *)v31 - 24);
        v40 = (__ROR4__(v34, 19) ^ __ROR4__(v34, 17) ^ (v34 >> 10))
            + *((_DWORD *)v31 - 17)
            + v35
            + (__ROR4__(v36, 18) ^ __ROR4__(v36, 7) ^ (v36 >> 3));
        v41 = (__ROR4__(v32, 19) ^ __ROR4__(v32, 17) ^ (v32 >> 10))
            + v30
            + *((_DWORD *)v31 - 18)
            + (__ROR4__(v35, 18) ^ __ROR4__(v35, 7) ^ (v35 >> 3));
        v42 = *((_DWORD *)v31 - 16);
        v43 = *((_DWORD *)v31 - 15);
        *((_DWORD *)v31 - 10) = v40;
        v44 = *((_DWORD *)v31 - 21);
        v45 = v36 + v42;
        v46 = *((_DWORD *)v31 - 22);
        v47 = (__ROR4__(v38, 18) ^ __ROR4__(v38, 7) ^ (v38 >> 3))
            + v39
            + v43
            + (__ROR4__(v40, 19) ^ __ROR4__(v40, 17) ^ (v40 >> 10));
        *((_DWORD *)v31 - 8) = v47;
        v48 = (__ROR4__(v39, 18) ^ __ROR4__(v39, 7) ^ (v39 >> 3))
            + v45
            + (__ROR4__(v41, 19) ^ __ROR4__(v41, 17) ^ (v41 >> 10));
        v49 = *((_DWORD *)v31 - 13);
        v50 = *((_DWORD *)v31 - 14);
        *((_DWORD *)v31 - 9) = v48;
        v51 = v38 + v50;
        v52 = *((_DWORD *)v31 - 20);
        v53 = (__ROR4__(v44, 18) ^ __ROR4__(v44, 7) ^ (v44 >> 3))
            + v46
            + v49
            + (__ROR4__(v47, 19) ^ __ROR4__(v47, 17) ^ (v47 >> 10));
        v30 = *((_DWORD *)v31 - 19);
        v54 = *((_DWORD *)v31 - 12);
        v55 = (__ROR4__(v46, 18) ^ __ROR4__(v46, 7) ^ (v46 >> 3))
            + v51
            + (__ROR4__(v48, 19) ^ __ROR4__(v48, 17) ^ (v48 >> 10));
        *((_DWORD *)v31 - 6) = v53;
        *((_DWORD *)v31 - 11) = v41;
        __pld(v31 - 28);
        v56 = (__ROR4__(v52, 18) ^ __ROR4__(v52, 7) ^ (v52 >> 3)) + v44 + v54;
        v57 = __ROR4__(v55, 19) ^ __ROR4__(v55, 17) ^ (v55 >> 10);
        *((_DWORD *)v31 - 7) = v55;
        v34 = (__ROR4__(v30, 7) ^ __ROR4__(v30, 18) ^ (v30 >> 3))
            + v41
            + v52
            + (__ROR4__(v53, 19) ^ __ROR4__(v53, 17) ^ (v53 >> 10));
        v32 = v56 + v57;
        __pld(v31);
        *((_DWORD *)v31 - 4) = v34;
        v29 = v37;
        *((_DWORD *)v31 - 5) = v32;
        v58 = 64 - v37;
        v31 += 32;
      }
      while ( v37 != 56 );
      v59 = v223;
      while ( 1 )
      {
        v29 += 2;
        v60 = *(v59 - 15);
        v61 = (__ROR4__(v32, 19) ^ __ROR4__(v32, 17) ^ (v32 >> 10)) + v30;
        v30 = *(v59 - 14);
        v62 = (__ROR4__(v34, 19) ^ __ROR4__(v34, 17) ^ (v34 >> 10)) + *(v59 - 6);
        v32 = v61 + *(v59 - 7) + (__ROR4__(v60, 7) ^ __ROR4__(v60, 18) ^ (v60 >> 3));
        *v59 = v32;
        v59 += 2;
        v34 = v62 + v60 + (__ROR4__(v30, 18) ^ __ROR4__(v30, 7) ^ (v30 >> 3));
        *(v59 - 1) = v34;
        if ( v29 == 62 )
          break;
        v58 -= 2;
      }
      v226 = v222
           + v219
           + (__ROR4__(v224, 19) ^ __ROR4__(v224, 17) ^ (v224 >> 10))
           + (__ROR4__(v220, 18) ^ __ROR4__(v220, 7) ^ (v220 >> 3));
      if ( v58 != 3 )
        v227 = (__ROR4__(v225, 19) ^ __ROR4__(v225, 17) ^ (v225 >> 10))
             + v223[0]
             + v220
             + (__ROR4__(v221, 18) ^ __ROR4__(v221, 7) ^ (v221 >> 3));
      v63 = v142;
      v64 = 0;
      v65 = v140;
      v66 = v138;
      v67 = v136;
      v68 = HIDWORD(v141);
      v69 = DWORD2(v141);
      v70 = DWORD1(v141);
      for ( i = v141; ; i = v76 )
      {
        v72 = sha256_k[v64];
        v73 = (__ROR4__(v67, 11) ^ __ROR4__(v67, 6) ^ __ROR4__(v67, 25)) + (v65 & ~v67 ^ v67 & v66) + *(&v194 + v64++);
        v74 = v73 + v72 + v63;
        v75 = v74 + v68;
        v63 = v65;
        v76 = (__ROR4__(i, 13) ^ __ROR4__(i, 2) ^ __ROR4__(i, 22)) + ((v70 ^ v69) & i ^ v70 & v69) + v74;
        v68 = v69;
        if ( v64 == 64 )
          break;
        v65 = v66;
        v69 = v70;
        v66 = v67;
        v70 = i;
        v67 = v75;
      }
      LODWORD(v189) = v76 + v141;
      DWORD1(v189) = i + DWORD1(v141);
      DWORD2(v189) = v70 + DWORD2(v141);
      HIDWORD(v189) = v69 + HIDWORD(v141);
      v190 = v75 + v136;
      v191 = v67 + v138;
      v192 = v66 + v140;
      v193 = v65 + v142;
      ++v134;
      sha256_transf((int)&v171, &v171, 0);
      v172 = 0;
      v171 += 64;
      sha256_final((int)&v171, v154);
      v214 = *(_QWORD *)((char *)&sha256_h0 + 4);
      v213 = sha256_h0;
      v194 = 0;
      v216 = dword_1A2A58;
      v215 = *(_QWORD *)((char *)&sha256_h0 + 12);
      v217 = dword_1A2A5C;
      v218 = dword_1A2A60;
      v196 = v154[0];
      v197 = v154[1];
      v198 = v154[2];
      v199 = v154[3];
      v200 = v154[4];
      v201 = v154[5];
      v202 = v154[6];
      v203 = v154[7];
      v205 = 0;
      v206 = 0;
      v207 = 0;
      v208 = 0;
      v209 = 0;
      v210 = 0;
      v195 = 32;
      v204 = 128;
      v211 = 0x10000;
      sha256_transf((int)&v194, &v196, 1);
      v146 = HIBYTE(v213)
           | (unsigned __int16)(BYTE2(v213) << 8)
           | (BYTE1(v213) << 16) & 0xFFFFFF
           | ((unsigned __int8)v213 << 24);
      v147 = BYTE3(v214)
           | (unsigned __int16)(BYTE2(v214) << 8)
           | (BYTE1(v214) << 16) & 0xFFFFFF
           | ((unsigned __int8)v214 << 24);
      v148 = HIBYTE(v214) | (unsigned __int16)(BYTE6(v214) << 8) | (BYTE5(v214) << 16) & 0xFFFFFF | (BYTE4(v214) << 24);
      v149 = BYTE3(v215)
           | (unsigned __int16)(BYTE2(v215) << 8)
           | (BYTE1(v215) << 16) & 0xFFFFFF
           | ((unsigned __int8)v215 << 24);
      v150 = HIBYTE(v215) | (unsigned __int16)(BYTE6(v215) << 8) | (BYTE5(v215) << 16) & 0xFFFFFF | (BYTE4(v215) << 24);
      v151 = HIBYTE(v216)
           | (unsigned __int16)(BYTE2(v216) << 8)
           | (BYTE1(v216) << 16) & 0xFFFFFF
           | ((unsigned __int8)v216 << 24);
      v152 = HIBYTE(v217)
           | (unsigned __int16)(BYTE2(v217) << 8)
           | (BYTE1(v217) << 16) & 0xFFFFFF
           | ((unsigned __int8)v217 << 24);
      v153 = HIBYTE(v218)
           | (unsigned __int16)(BYTE2(v218) << 8)
           | (BYTE1(v218) << 16) & 0xFFFFFF
           | ((unsigned __int8)v218 << 24);
      v155 = v146;
      v156 = v147;
      v157 = v148;
      v158 = v149;
      v159 = v150;
      v160 = v151;
      v161 = v152;
      v162 = v153;
      v20 = v134;
    }
    while ( (signed int)a2[13].__count > v134 );
  }
  v146 = bswap32(v155);
  v147 = bswap32(v156);
  v148 = bswap32(v157);
  v149 = bswap32(v158);
  v152 = bswap32(v161);
  v153 = bswap32(v162);
  v150 = bswap32(v159);
  v151 = bswap32(v160);
  memcpy((void *)(a1 + 8), &a2[6].__align + 4, 0x80u);
  v77 = v147;
  v78 = v148;
  v79 = v149;
  *(_DWORD *)(a1 + 44) = v146;
  *(_DWORD *)(a1 + 48) = v77;
  *(_DWORD *)(a1 + 52) = v78;
  *(_DWORD *)(a1 + 56) = v79;
  v80 = v151;
  v81 = v152;
  v82 = v153;
  *(_DWORD *)(a1 + 60) = v150;
  v83 = *(void **)(a1 + 384);
  *(_DWORD *)(a1 + 64) = v80;
  *(_DWORD *)(a1 + 68) = v81;
  *(_DWORD *)(a1 + 72) = v82;
  *(_QWORD *)(a1 + 496) = *(_QWORD *)&a2[18].__lock;
  if ( v83 )
  {
    free(v83);
    *(_DWORD *)(a1 + 384) = 0;
  }
  *(_DWORD *)(a1 + 384) = _strdup((const char *)a2[34].__owner);
  v84 = a2[14].__nusers;
  *(_DWORD *)(a1 + 508) = a2[14].__kind;
  *(_DWORD *)(a1 + 512) = v84;
  *(_QWORD *)a1 = a2->__lock;
  pthread_mutex_unlock(mutex);
  return 0;
}
