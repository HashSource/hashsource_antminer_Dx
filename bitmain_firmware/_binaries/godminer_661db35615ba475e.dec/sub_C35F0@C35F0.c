int __fastcall sub_C35F0(int a1, pthread_mutex_t *a2)
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
  unsigned int *v20; // r6
  unsigned int v21; // r1
  unsigned int v22; // r2
  unsigned int v23; // r3
  unsigned int v24; // r0
  unsigned int v25; // r1
  unsigned int v26; // r2
  unsigned int v27; // r3
  int v28; // r11
  unsigned int v29; // r10
  _BYTE *v30; // r5
  unsigned int v31; // r7
  unsigned int v32; // r2
  unsigned int v33; // r0
  unsigned int v34; // r4
  unsigned int v35; // r1
  int v36; // lr
  unsigned int v37; // r11
  unsigned int v38; // r8
  unsigned int v39; // r2
  unsigned int v40; // r3
  int v41; // r9
  int v42; // r12
  unsigned int v43; // r6
  int v44; // r1
  unsigned int v45; // r9
  unsigned int v46; // r4
  unsigned int v47; // r7
  int v48; // r1
  int v49; // r0
  int v50; // r0
  unsigned int v51; // r11
  unsigned int v52; // r12
  int v53; // r2
  unsigned int v54; // r0
  int v55; // r7
  int v56; // r2
  int v57; // r9
  unsigned int *v58; // lr
  unsigned int v59; // r2
  unsigned int v60; // r7
  int v61; // r3
  int v62; // r3
  int v63; // r6
  int v64; // r9
  int v65; // r10
  int v66; // r4
  int v67; // r11
  int v68; // r7
  int v69; // r8
  int i; // r5
  int v71; // r12
  int v72; // r2
  int v73; // r2
  int v74; // lr
  int v75; // r2
  unsigned int v76; // r4
  signed int v77; // r4
  unsigned int v78; // r1
  unsigned int v79; // r2
  unsigned int v80; // r3
  unsigned int v81; // r1
  unsigned int v82; // r2
  unsigned int v83; // r3
  void *v84; // r0
  unsigned int v85; // r3
  _BYTE *v87; // r8
  int v88; // r9
  unsigned int v89; // r1
  unsigned int v90; // r0
  unsigned int v91; // r3
  unsigned int v92; // r5
  unsigned int v93; // lr
  int v94; // r7
  int v95; // r2
  unsigned int v96; // r4
  unsigned int v97; // r6
  int v98; // r11
  unsigned int v99; // r3
  unsigned int v100; // r2
  int v101; // r1
  int v102; // r0
  unsigned int v103; // r7
  unsigned int v104; // r2
  unsigned int v105; // r4
  unsigned int v106; // r1
  int v107; // r12
  int v108; // lr
  unsigned int v109; // r6
  unsigned int v110; // r12
  unsigned int v111; // lr
  int v112; // r7
  int v113; // r7
  unsigned int *v114; // r5
  unsigned int v115; // r12
  unsigned int v116; // r0
  int v117; // r5
  unsigned __int64 v118; // kr08_8
  int v119; // r6
  int v120; // r4
  int v121; // r11
  int v122; // r10
  int v123; // r9
  int v124; // r3
  int v125; // r8
  int v126; // r12
  int v127; // r2
  int v128; // r2
  int v129; // lr
  int v130; // r2
  signed int v131; // [sp+8h] [bp-274h]
  unsigned int v132; // [sp+8h] [bp-274h]
  int v133; // [sp+Ch] [bp-270h]
  unsigned int *v134; // [sp+Ch] [bp-270h]
  int v135; // [sp+10h] [bp-26Ch]
  unsigned int v136; // [sp+10h] [bp-26Ch]
  int v137; // [sp+14h] [bp-268h]
  int v138; // [sp+18h] [bp-264h]
  __int64 v139; // [sp+1Ch] [bp-260h]
  int v140; // [sp+24h] [bp-258h]
  int v141; // [sp+28h] [bp-254h]
  pthread_mutex_t *mutex; // [sp+44h] [bp-238h]
  unsigned int v145; // [sp+50h] [bp-22Ch] BYREF
  unsigned int v146; // [sp+54h] [bp-228h]
  unsigned int v147; // [sp+58h] [bp-224h]
  unsigned int v148; // [sp+5Ch] [bp-220h]
  unsigned int v149; // [sp+60h] [bp-21Ch]
  unsigned int v150; // [sp+64h] [bp-218h]
  unsigned int v151; // [sp+68h] [bp-214h]
  unsigned int v152; // [sp+6Ch] [bp-210h]
  int v153; // [sp+70h] [bp-20Ch]
  int v154; // [sp+74h] [bp-208h]
  int v155; // [sp+78h] [bp-204h]
  int v156; // [sp+7Ch] [bp-200h]
  int v157; // [sp+80h] [bp-1FCh]
  int v158; // [sp+84h] [bp-1F8h]
  int v159; // [sp+88h] [bp-1F4h]
  int v160; // [sp+8Ch] [bp-1F0h]
  unsigned int v161; // [sp+90h] [bp-1ECh] BYREF
  unsigned int v162; // [sp+94h] [bp-1E8h]
  unsigned int v163; // [sp+98h] [bp-1E4h]
  unsigned int v164; // [sp+9Ch] [bp-1E0h]
  unsigned int v165; // [sp+A0h] [bp-1DCh]
  unsigned int v166; // [sp+A4h] [bp-1D8h]
  unsigned int v167; // [sp+A8h] [bp-1D4h]
  unsigned int v168; // [sp+ACh] [bp-1D0h]
  unsigned int v169; // [sp+B0h] [bp-1CCh]
  unsigned int v170; // [sp+B4h] [bp-1C8h]
  unsigned int v171; // [sp+B8h] [bp-1C4h]
  unsigned int v172; // [sp+BCh] [bp-1C0h]
  unsigned int v173; // [sp+C0h] [bp-1BCh]
  unsigned int v174; // [sp+C4h] [bp-1B8h]
  unsigned int v175; // [sp+C8h] [bp-1B4h]
  unsigned int v176; // [sp+CCh] [bp-1B0h]
  unsigned int v177; // [sp+D0h] [bp-1ACh] BYREF
  int v178; // [sp+D4h] [bp-1A8h]
  unsigned int dest[15]; // [sp+D8h] [bp-1A4h] BYREF
  unsigned int v180; // [sp+114h] [bp-168h]
  int v181; // [sp+158h] [bp-124h]
  __int64 v182; // [sp+15Ch] [bp-120h]
  __int64 v183; // [sp+164h] [bp-118h]
  int v184; // [sp+16Ch] [bp-110h]
  int v185; // [sp+170h] [bp-10Ch]
  int v186; // [sp+174h] [bp-108h]
  unsigned int v187; // [sp+178h] [bp-104h] BYREF
  unsigned int v188; // [sp+17Ch] [bp-100h]
  unsigned int v189; // [sp+180h] [bp-FCh]
  unsigned int v190; // [sp+184h] [bp-F8h]
  unsigned int v191; // [sp+188h] [bp-F4h]
  unsigned int v192; // [sp+18Ch] [bp-F0h]
  unsigned int v193; // [sp+190h] [bp-ECh]
  unsigned int v194; // [sp+194h] [bp-E8h]
  unsigned int v195; // [sp+198h] [bp-E4h]
  unsigned int v196; // [sp+19Ch] [bp-E0h]
  unsigned int v197; // [sp+1A0h] [bp-DCh]
  unsigned int v198; // [sp+1A4h] [bp-D8h]
  unsigned int v199; // [sp+1A8h] [bp-D4h]
  unsigned int v200; // [sp+1ACh] [bp-D0h]
  unsigned int v201; // [sp+1B0h] [bp-CCh]
  unsigned int v202; // [sp+1B4h] [bp-C8h]
  _BYTE v203[28]; // [sp+1E4h] [bp-98h] BYREF
  int v204; // [sp+200h] [bp-7Ch]
  __int64 v205; // [sp+204h] [bp-78h]
  __int64 v206; // [sp+20Ch] [bp-70h]
  int v207; // [sp+214h] [bp-68h]
  int v208; // [sp+218h] [bp-64h]
  int v209; // [sp+21Ch] [bp-60h]
  int v210; // [sp+230h] [bp-4Ch]
  unsigned int v211; // [sp+234h] [bp-48h]
  unsigned int v212; // [sp+238h] [bp-44h]
  int v213; // [sp+254h] [bp-28h]
  _DWORD v214[4]; // [sp+258h] [bp-24h] BYREF
  unsigned int v215; // [sp+268h] [bp-14h]
  unsigned int v216; // [sp+26Ch] [bp-10h]
  int v217; // [sp+270h] [bp-Ch]
  int v218; // [sp+274h] [bp-8h]

  p_nusers = &a2[12].__nusers;
  mutex = a2 + 40;
  pthread_mutex_lock(a2 + 40);
  memcpy((void *)(a2[12].__count + a2[13].__lock), p_nusers, a2[3].__owner);
  nusers = a2[12].__nusers;
  v7 = sha256_h0;
  v9 = qword_190650;
  v8 = qword_190658;
  spins = a2[12].__spins;
  a2[12].__nusers = nusers + 1;
  v181 = v7;
  v182 = v9;
  LODWORD(v183) = v8;
  lock = a2[12].__lock;
  owner = a2[3].__owner;
  p_nusers[1] = (__PAIR64__(spins, nusers) + 1) >> 32;
  v13 = HIDWORD(qword_190658);
  v14 = dword_190660;
  v15 = dword_190664;
  v16 = dword_190668;
  if ( lock >= 0x40 )
    v17 = 64;
  else
    v17 = lock;
  *(_DWORD *)(a1 + 488) = nusers;
  *(_DWORD *)(a1 + 492) = spins;
  count = (char *)a2[12].__count;
  HIDWORD(v183) = v13;
  v184 = v14;
  v185 = v15;
  v186 = v16;
  *(_DWORD *)(a1 + 388) = owner;
  v178 = 0;
  v177 = 0;
  memcpy(dest, count, v17);
  if ( lock > 0x3F )
  {
    v87 = v203;
    v136 = lock - v17;
    v132 = (lock - v17) >> 6;
    v188 = bswap32(dest[1]);
    v191 = bswap32(dest[4]);
    v88 = 16;
    v134 = (unsigned int *)&count[v17];
    v189 = bswap32(dest[2]);
    v192 = bswap32(dest[5]);
    v190 = bswap32(dest[3]);
    v193 = bswap32(dest[6]);
    v194 = bswap32(dest[7]);
    v195 = bswap32(dest[8]);
    v196 = bswap32(dest[9]);
    v89 = bswap32(dest[0]);
    v197 = bswap32(dest[10]);
    v199 = bswap32(dest[12]);
    v90 = bswap32(dest[14]);
    v91 = bswap32(v180);
    v187 = v89;
    v198 = bswap32(dest[11]);
    v200 = bswap32(dest[13]);
    v201 = v90;
    v202 = v91;
    do
    {
      v92 = *((_DWORD *)v87 - 26);
      v93 = *((_DWORD *)v87 - 25);
      v94 = *((_DWORD *)v87 - 16);
      v95 = __ROR4__(v91, 19) ^ __ROR4__(v91, 17) ^ (v91 >> 10);
      v96 = *((_DWORD *)v87 - 24);
      v97 = *((_DWORD *)v87 - 23);
      v98 = *((_DWORD *)v87 - 14);
      v99 = (__ROR4__(v90, 19) ^ __ROR4__(v90, 17) ^ (v90 >> 10))
          + v89
          + *((_DWORD *)v87 - 18)
          + (__ROR4__(v92, 18) ^ __ROR4__(v92, 7) ^ (v92 >> 3));
      v100 = v95 + *((_DWORD *)v87 - 17) + v92 + (__ROR4__(v93, 18) ^ __ROR4__(v93, 7) ^ (v93 >> 3));
      *((_DWORD *)v87 - 10) = v100;
      v101 = (__ROR4__(v96, 7) ^ __ROR4__(v96, 18) ^ (v96 >> 3)) + v93 + v94;
      v102 = __ROR4__(v100, 17) ^ __ROR4__(v100, 19) ^ (v100 >> 10);
      v103 = *((_DWORD *)v87 - 22);
      v104 = *((_DWORD *)v87 - 21);
      v105 = (__ROR4__(v97, 7) ^ __ROR4__(v97, 18) ^ (v97 >> 3)) + v96 + *((_DWORD *)v87 - 15) + v102;
      *((_DWORD *)v87 - 11) = v99;
      v106 = v101 + (__ROR4__(v99, 17) ^ __ROR4__(v99, 19) ^ (v99 >> 10));
      v107 = *((_DWORD *)v87 - 13);
      *((_DWORD *)v87 - 9) = v106;
      v108 = v97 + v98;
      v109 = *((_DWORD *)v87 - 20);
      v110 = (__ROR4__(v104, 7) ^ __ROR4__(v104, 18) ^ (v104 >> 3))
           + v103
           + v107
           + (__ROR4__(v105, 17) ^ __ROR4__(v105, 19) ^ (v105 >> 10));
      v111 = (__ROR4__(v103, 7) ^ __ROR4__(v103, 18) ^ (v103 >> 3))
           + v108
           + (__ROR4__(v106, 17) ^ __ROR4__(v106, 19) ^ (v106 >> 10));
      v89 = *((_DWORD *)v87 - 19);
      v88 += 8;
      *((_DWORD *)v87 - 8) = v105;
      v112 = *((_DWORD *)v87 - 12);
      *((_DWORD *)v87 - 6) = v110;
      __pld(v87 - 28);
      __pld(v87);
      v91 = (__ROR4__(v89, 7) ^ __ROR4__(v89, 18) ^ (v89 >> 3))
          + v99
          + v109
          + (__ROR4__(v110, 17) ^ __ROR4__(v110, 19) ^ (v110 >> 10));
      v90 = (__ROR4__(v109, 7) ^ __ROR4__(v109, 18) ^ (v109 >> 3))
          + v104
          + v112
          + (__ROR4__(v111, 17) ^ __ROR4__(v111, 19) ^ (v111 >> 10));
      *((_DWORD *)v87 - 7) = v111;
      v87 += 32;
      *((_DWORD *)v87 - 12) = v91;
      *((_DWORD *)v87 - 13) = v90;
    }
    while ( v88 != 56 );
    v113 = 6;
    v114 = v214;
    while ( 1 )
    {
      v115 = *(v114 - 15);
      v88 += 2;
      v116 = (__ROR4__(v90, 17) ^ __ROR4__(v90, 19) ^ (v90 >> 10)) + v89;
      v89 = *(v114 - 14);
      v90 = v116 + *(v114 - 7) + (__ROR4__(v115, 7) ^ __ROR4__(v115, 18) ^ (v115 >> 3));
      v91 = (__ROR4__(v91, 17) ^ __ROR4__(v91, 19) ^ (v91 >> 10))
          + *(v114 - 6)
          + v115
          + (__ROR4__(v89, 7) ^ __ROR4__(v89, 18) ^ (v89 >> 3));
      *v114 = v90;
      v114[1] = v91;
      v114 += 2;
      if ( v88 == 62 )
        break;
      v113 -= 2;
    }
    v217 = (__ROR4__(v215, 19) ^ __ROR4__(v215, 17) ^ (v215 >> 10))
         + v213
         + v210
         + (__ROR4__(v211, 18) ^ __ROR4__(v211, 7) ^ (v211 >> 3));
    if ( v113 != 1 )
      v218 = (__ROR4__(v216, 19) ^ __ROR4__(v216, 17) ^ (v216 >> 10))
           + v214[0]
           + v211
           + (__ROR4__(v212, 18) ^ __ROR4__(v212, 7) ^ (v212 >> 3));
    v117 = v181;
    v118 = v182;
    v119 = 0;
    v120 = HIDWORD(v183);
    v121 = v183;
    v122 = v184;
    v123 = v185;
    v124 = v186;
    while ( 1 )
    {
      v126 = sha256_k[v119];
      v127 = (__ROR4__(v120, 11) ^ __ROR4__(v120, 6) ^ __ROR4__(v120, 25))
           + (v123 & ~v120 ^ v122 & v120)
           + *(&v187 + v119++);
      v128 = v127 + v126 + v124;
      v129 = v128 + v121;
      v124 = v123;
      v130 = (__ROR4__(v117, 13) ^ __ROR4__(v117, 2) ^ __ROR4__(v117, 22))
           + ((v118 ^ HIDWORD(v118)) & v117 ^ v118 & HIDWORD(v118))
           + v128;
      v121 = HIDWORD(v118);
      if ( v119 == 64 )
        break;
      v123 = v122;
      v122 = v120;
      v125 = v117;
      v120 = v129;
      v117 = v130;
      v118 = __PAIR64__(v118, v125);
    }
    v181 += v130;
    LODWORD(v182) = v117 + v182;
    HIDWORD(v182) += v118;
    LODWORD(v183) = HIDWORD(v118) + v183;
    HIDWORD(v183) += v129;
    v184 += v120;
    v185 += v122;
    v186 += v123;
    sha256_transf((int)&v177, v134, v132);
    memcpy(dest, (char *)v134 + (v136 & 0xFFFFFFC0), v136 & 0x3F);
    v178 = v136 & 0x3F;
    v177 += (v132 + 1) << 6;
  }
  else
  {
    v178 = lock;
  }
  sha256_final((int)&v177, &v161);
  v204 = sha256_h0;
  v205 = qword_190650;
  v206 = qword_190658;
  v207 = dword_190660;
  v208 = dword_190664;
  v209 = dword_190668;
  v187 = 0;
  v189 = v161;
  v190 = v162;
  v191 = v163;
  v192 = v164;
  v193 = v165;
  v194 = v166;
  v195 = v167;
  v196 = v168;
  v188 = 32;
  sha256_final((int)&v187, &v145);
  v19 = a2[13].__count;
  v161 = v145;
  v162 = v146;
  v163 = v147;
  v164 = v148;
  v165 = v149;
  v166 = v150;
  v167 = v151;
  v168 = v152;
  if ( v19 > 0 )
  {
    v131 = 0;
    do
    {
      v20 = *(unsigned int **)(a2[13].__owner + 4 * v131);
      v21 = v20[1];
      v22 = v20[2];
      v23 = v20[3];
      v169 = *v20;
      v170 = v21;
      v171 = v22;
      v172 = v23;
      v24 = v20[4];
      v25 = v20[5];
      v26 = v20[6];
      v133 = HIDWORD(qword_190658);
      v137 = dword_190664;
      v27 = v20[7];
      v140 = qword_190658;
      v135 = dword_190660;
      v138 = sha256_h0;
      v139 = qword_190650;
      v181 = sha256_h0;
      v173 = v24;
      v174 = v25;
      v175 = v26;
      v176 = v27;
      v185 = dword_190664;
      v141 = dword_190668;
      v186 = dword_190668;
      v183 = qword_190658;
      v28 = 16;
      v184 = dword_190660;
      v178 = 0;
      v177 = 0;
      v182 = qword_190650;
      dest[0] = v161;
      dest[1] = v162;
      dest[2] = v163;
      dest[3] = v164;
      dest[4] = v165;
      dest[5] = v166;
      dest[6] = v167;
      dest[7] = v168;
      dest[8] = v169;
      dest[9] = v170;
      dest[10] = v171;
      dest[11] = v172;
      dest[12] = v24;
      dest[13] = v25;
      dest[14] = v26;
      v180 = v27;
      v188 = bswap32(v162);
      v189 = bswap32(v163);
      v29 = bswap32(v161);
      v190 = bswap32(v164);
      v191 = bswap32(v165);
      v187 = v29;
      v192 = bswap32(v166);
      v193 = bswap32(v167);
      v197 = bswap32(v171);
      v30 = v203;
      v31 = bswap32(v26);
      v194 = bswap32(v168);
      v32 = bswap32(v24);
      v195 = bswap32(v169);
      v33 = bswap32(v27);
      v196 = bswap32(v170);
      v198 = bswap32(v172);
      v199 = v32;
      v200 = bswap32(v25);
      v201 = v31;
      v202 = v33;
      do
      {
        v34 = *((_DWORD *)v30 - 26);
        v35 = *((_DWORD *)v30 - 25);
        v36 = v28 + 8;
        v37 = *((_DWORD *)v30 - 23);
        v38 = *((_DWORD *)v30 - 24);
        v39 = (__ROR4__(v33, 19) ^ __ROR4__(v33, 17) ^ (v33 >> 10))
            + *((_DWORD *)v30 - 17)
            + v34
            + (__ROR4__(v35, 18) ^ __ROR4__(v35, 7) ^ (v35 >> 3));
        v40 = (__ROR4__(v31, 19) ^ __ROR4__(v31, 17) ^ (v31 >> 10))
            + v29
            + *((_DWORD *)v30 - 18)
            + (__ROR4__(v34, 18) ^ __ROR4__(v34, 7) ^ (v34 >> 3));
        v41 = *((_DWORD *)v30 - 16);
        v42 = *((_DWORD *)v30 - 15);
        *((_DWORD *)v30 - 10) = v39;
        v43 = *((_DWORD *)v30 - 21);
        v44 = v35 + v41;
        v45 = *((_DWORD *)v30 - 22);
        v46 = (__ROR4__(v37, 18) ^ __ROR4__(v37, 7) ^ (v37 >> 3))
            + v38
            + v42
            + (__ROR4__(v39, 19) ^ __ROR4__(v39, 17) ^ (v39 >> 10));
        *((_DWORD *)v30 - 8) = v46;
        v47 = (__ROR4__(v38, 18) ^ __ROR4__(v38, 7) ^ (v38 >> 3))
            + v44
            + (__ROR4__(v40, 19) ^ __ROR4__(v40, 17) ^ (v40 >> 10));
        v48 = *((_DWORD *)v30 - 13);
        v49 = *((_DWORD *)v30 - 14);
        *((_DWORD *)v30 - 9) = v47;
        v50 = v37 + v49;
        v51 = *((_DWORD *)v30 - 20);
        v52 = (__ROR4__(v43, 7) ^ __ROR4__(v43, 18) ^ (v43 >> 3))
            + v45
            + v48
            + (__ROR4__(v46, 19) ^ __ROR4__(v46, 17) ^ (v46 >> 10));
        v29 = *((_DWORD *)v30 - 19);
        v53 = *((_DWORD *)v30 - 12);
        v54 = (__ROR4__(v45, 7) ^ __ROR4__(v45, 18) ^ (v45 >> 3))
            + v50
            + (__ROR4__(v47, 19) ^ __ROR4__(v47, 17) ^ (v47 >> 10));
        *((_DWORD *)v30 - 6) = v52;
        *((_DWORD *)v30 - 11) = v40;
        __pld(v30 - 28);
        v55 = (__ROR4__(v51, 18) ^ __ROR4__(v51, 7) ^ (v51 >> 3)) + v43 + v53;
        v56 = __ROR4__(v54, 19) ^ __ROR4__(v54, 17) ^ (v54 >> 10);
        *((_DWORD *)v30 - 7) = v54;
        v33 = (__ROR4__(v29, 7) ^ __ROR4__(v29, 18) ^ (v29 >> 3))
            + v40
            + v51
            + (__ROR4__(v52, 19) ^ __ROR4__(v52, 17) ^ (v52 >> 10));
        v31 = v55 + v56;
        __pld(v30);
        *((_DWORD *)v30 - 4) = v33;
        v28 = v36;
        *((_DWORD *)v30 - 5) = v31;
        v57 = 64 - v36;
        v30 += 32;
      }
      while ( v36 != 56 );
      v58 = v214;
      while ( 1 )
      {
        v28 += 2;
        v59 = *(v58 - 15);
        v60 = (__ROR4__(v31, 19) ^ __ROR4__(v31, 17) ^ (v31 >> 10)) + v29;
        v29 = *(v58 - 14);
        v61 = (__ROR4__(v33, 17) ^ __ROR4__(v33, 19) ^ (v33 >> 10)) + *(v58 - 6);
        v31 = v60 + *(v58 - 7) + (__ROR4__(v59, 7) ^ __ROR4__(v59, 18) ^ (v59 >> 3));
        *v58 = v31;
        v58 += 2;
        v33 = v61 + v59 + (__ROR4__(v29, 18) ^ __ROR4__(v29, 7) ^ (v29 >> 3));
        *(v58 - 1) = v33;
        if ( v28 == 62 )
          break;
        v57 -= 2;
      }
      v217 = v213
           + v210
           + (__ROR4__(v215, 19) ^ __ROR4__(v215, 17) ^ (v215 >> 10))
           + (__ROR4__(v211, 18) ^ __ROR4__(v211, 7) ^ (v211 >> 3));
      if ( v57 != 3 )
        v218 = (__ROR4__(v216, 19) ^ __ROR4__(v216, 17) ^ (v216 >> 10))
             + v214[0]
             + v211
             + (__ROR4__(v212, 18) ^ __ROR4__(v212, 7) ^ (v212 >> 3));
      v62 = v141;
      v63 = 0;
      v64 = v137;
      v65 = v135;
      v66 = v133;
      v67 = v140;
      v68 = HIDWORD(v139);
      v69 = v139;
      for ( i = v138; ; i = v75 )
      {
        v71 = sha256_k[v63];
        v72 = (__ROR4__(v66, 11) ^ __ROR4__(v66, 6) ^ __ROR4__(v66, 25)) + (v64 & ~v66 ^ v66 & v65) + *(&v187 + v63++);
        v73 = v72 + v71 + v62;
        v74 = v73 + v67;
        v62 = v64;
        v75 = (__ROR4__(i, 13) ^ __ROR4__(i, 2) ^ __ROR4__(i, 22)) + ((v69 ^ v68) & i ^ v69 & v68) + v73;
        v67 = v68;
        if ( v63 == 64 )
          break;
        v64 = v65;
        v68 = v69;
        v65 = v66;
        v69 = i;
        v66 = v74;
      }
      v181 = v75 + v138;
      LODWORD(v182) = i + v139;
      HIDWORD(v182) = v69 + HIDWORD(v139);
      LODWORD(v183) = v68 + v140;
      HIDWORD(v183) = v74 + v133;
      v184 = v66 + v135;
      v185 = v65 + v137;
      v186 = v64 + v141;
      ++v131;
      sha256_transf((int)&v177, &v177, 0);
      v178 = 0;
      v76 = 8 * (v177 + 64);
      v177 += 64;
      memset(dest, 0, sizeof(dest));
      BYTE2(v180) = BYTE1(v76);
      HIBYTE(v180) = v76;
      BYTE1(v180) = BYTE2(v76);
      LOBYTE(v180) = HIBYTE(v76);
      LOBYTE(dest[0]) = 0x80;
      sha256_transf((int)&v177, dest, 1);
      v153 = HIBYTE(v181)
           | (unsigned __int16)(BYTE2(v181) << 8)
           | (BYTE1(v181) << 16) & 0xFFFFFF
           | ((unsigned __int8)v181 << 24);
      v154 = BYTE3(v182)
           | (unsigned __int16)(BYTE2(v182) << 8)
           | (BYTE1(v182) << 16) & 0xFFFFFF
           | ((unsigned __int8)v182 << 24);
      v160 = HIBYTE(v186)
           | (unsigned __int16)(BYTE2(v186) << 8)
           | (BYTE1(v186) << 16) & 0xFFFFFF
           | ((unsigned __int8)v186 << 24);
      v155 = HIBYTE(v182) | (unsigned __int16)(BYTE6(v182) << 8) | (BYTE5(v182) << 16) & 0xFFFFFF | (BYTE4(v182) << 24);
      v157 = HIBYTE(v183) | (unsigned __int16)(BYTE6(v183) << 8) | (BYTE5(v183) << 16) & 0xFFFFFF | (BYTE4(v183) << 24);
      v207 = dword_190660;
      v205 = qword_190650;
      v187 = 0;
      v208 = dword_190664;
      v156 = BYTE3(v183)
           | (unsigned __int16)(BYTE2(v183) << 8)
           | (BYTE1(v183) << 16) & 0xFFFFFF
           | ((unsigned __int8)v183 << 24);
      v158 = HIBYTE(v184)
           | (unsigned __int16)(BYTE2(v184) << 8)
           | (BYTE1(v184) << 16) & 0xFFFFFF
           | ((unsigned __int8)v184 << 24);
      v159 = HIBYTE(v185)
           | (unsigned __int16)(BYTE2(v185) << 8)
           | (BYTE1(v185) << 16) & 0xFFFFFF
           | ((unsigned __int8)v185 << 24);
      v204 = sha256_h0;
      v206 = qword_190658;
      v209 = dword_190668;
      v189 = v153;
      v190 = v154;
      v191 = v155;
      v192 = v156;
      v193 = v157;
      v194 = v158;
      v195 = v159;
      v196 = v160;
      v188 = 32;
      sha256_final((int)&v187, &v145);
      v77 = a2[13].__count;
      v161 = v145;
      v162 = v146;
      v163 = v147;
      v164 = v148;
      v165 = v149;
      v166 = v150;
      v167 = v151;
      v168 = v152;
    }
    while ( v77 > v131 );
  }
  v145 = bswap32(v161);
  v146 = bswap32(v162);
  v147 = bswap32(v163);
  v148 = bswap32(v164);
  v151 = bswap32(v167);
  v152 = bswap32(v168);
  v149 = bswap32(v165);
  v150 = bswap32(v166);
  memcpy((void *)(a1 + 8), &a2[6].__align + 4, 0x80u);
  v78 = v146;
  v79 = v147;
  v80 = v148;
  *(_DWORD *)(a1 + 44) = v145;
  *(_DWORD *)(a1 + 48) = v78;
  *(_DWORD *)(a1 + 52) = v79;
  *(_DWORD *)(a1 + 56) = v80;
  v81 = v150;
  v82 = v151;
  v83 = v152;
  *(_DWORD *)(a1 + 60) = v149;
  v84 = *(void **)(a1 + 384);
  *(_DWORD *)(a1 + 64) = v81;
  *(_DWORD *)(a1 + 68) = v82;
  *(_DWORD *)(a1 + 72) = v83;
  *(_QWORD *)(a1 + 496) = *(_QWORD *)&a2[18].__lock;
  if ( v84 )
  {
    free(v84);
    *(_DWORD *)(a1 + 384) = 0;
  }
  *(_DWORD *)(a1 + 384) = _strdup((const char *)a2[34].__owner);
  v85 = a2[14].__nusers;
  *(_DWORD *)(a1 + 508) = a2[14].__kind;
  *(_DWORD *)(a1 + 512) = v85;
  *(_QWORD *)a1 = a2->__lock;
  pthread_mutex_unlock(mutex);
  return 0;
}
