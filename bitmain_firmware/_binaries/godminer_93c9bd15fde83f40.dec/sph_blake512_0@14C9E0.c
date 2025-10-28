void *__fastcall sph_blake512_0(int a1, char *a2, size_t a3)
{
  int v3; // r5
  size_t v4; // r4
  size_t i; // r6
  size_t v6; // r3
  void *v7; // r0
  unsigned int v8; // r4
  unsigned int v9; // r11
  int v10; // r12
  unsigned __int64 v11; // r0
  unsigned int v12; // r12
  _DWORD *v13; // r11
  unsigned int v14; // r7
  int v15; // r3
  int v16; // r7
  int v17; // r1
  int v18; // r3
  char *v19; // r10
  _BYTE *v20; // r1
  int v21; // r0
  _BYTE *v22; // r6
  int v23; // r3
  char *v24; // r9
  int v25; // r4
  _BYTE *v26; // r2
  int v27; // r3
  _BYTE *v28; // r1
  int v29; // r12
  _BYTE *v30; // r6
  int v31; // r0
  int v32; // r3
  int v33; // r2
  __int64 v34; // r2
  int v35; // lr
  int v36; // r0
  int v37; // r12
  int v38; // r4
  unsigned __int64 v39; // kr70_8
  unsigned __int64 v40; // kr78_8
  unsigned int v41; // r1
  unsigned int v42; // r5
  unsigned int v43; // lr
  unsigned __int64 v44; // kr80_8
  unsigned int v45; // r4
  unsigned int v46; // r1
  int v47; // r4
  int v48; // lr
  unsigned __int64 v49; // kr88_8
  unsigned int v50; // r6
  unsigned __int64 v51; // kr90_8
  unsigned __int64 v52; // kr98_8
  unsigned int v53; // r8
  unsigned int v54; // r0
  unsigned int v55; // r2
  unsigned int v56; // r12
  unsigned int v57; // r8
  __int64 v58; // r4
  unsigned __int64 v59; // krB0_8
  int v60; // r9
  unsigned __int64 v61; // krB8_8
  unsigned __int64 v62; // krC0_8
  unsigned int v63; // r12
  unsigned int v64; // r6
  unsigned int v65; // r0
  unsigned int v66; // r2
  unsigned int v67; // r1
  unsigned int v68; // r12
  unsigned int v69; // r7
  unsigned __int64 v70; // krD8_8
  unsigned int v71; // r9
  unsigned int v72; // r2
  unsigned int v73; // r10
  int v74; // r0
  unsigned int v75; // r7
  unsigned int v76; // r6
  int v77; // r9
  unsigned int v78; // lr
  int v79; // r7
  unsigned int v80; // r0
  unsigned __int64 v81; // r2
  unsigned __int64 v82; // krE0_8
  unsigned int v83; // r7
  unsigned int v84; // r6
  unsigned __int64 v85; // krE8_8
  int v86; // kr40_4
  unsigned int v87; // r7
  unsigned int v88; // r0
  unsigned __int64 v89; // kr100_8
  unsigned __int64 v90; // kr108_8
  unsigned int v91; // r12
  unsigned int v92; // r6
  unsigned __int64 v93; // kr110_8
  unsigned int v94; // lr
  unsigned int v95; // r9
  unsigned int v96; // r1
  int v97; // r1
  unsigned int v98; // lr
  unsigned __int64 v99; // kr118_8
  unsigned int v100; // kr54_4
  unsigned int v101; // r8
  unsigned int v102; // r7
  unsigned int v103; // r0
  unsigned int v104; // lr
  int v105; // r0
  int v106; // lr
  unsigned int v107; // r6
  unsigned int v108; // r12
  unsigned int v109; // r0
  unsigned int v110; // lr
  unsigned int v111; // r1
  unsigned __int64 v112; // kr120_8
  unsigned __int64 v113; // kr128_8
  unsigned int v114; // r1
  unsigned int v115; // r12
  unsigned __int64 v116; // kr130_8
  unsigned int v117; // r12
  __int64 v118; // r6
  void *result; // r0
  unsigned __int64 v121; // [sp+4h] [bp-2A0h]
  int v122; // [sp+4h] [bp-2A0h]
  int v123; // [sp+8h] [bp-29Ch]
  __int64 v124; // [sp+Ch] [bp-298h]
  int v125; // [sp+Ch] [bp-298h]
  unsigned int v126; // [sp+10h] [bp-294h]
  int v127; // [sp+14h] [bp-290h]
  int v128; // [sp+14h] [bp-290h]
  __int64 v129; // [sp+18h] [bp-28Ch]
  unsigned __int64 v130; // [sp+18h] [bp-28Ch]
  int v131; // [sp+20h] [bp-284h]
  unsigned int v132; // [sp+20h] [bp-284h]
  unsigned int v133; // [sp+24h] [bp-280h]
  unsigned int v134; // [sp+24h] [bp-280h]
  unsigned int v135; // [sp+24h] [bp-280h]
  unsigned __int64 v136; // [sp+28h] [bp-27Ch]
  __int64 v137; // [sp+30h] [bp-274h]
  unsigned int v138; // [sp+38h] [bp-26Ch]
  unsigned __int64 v139; // [sp+38h] [bp-26Ch]
  unsigned __int64 v140; // [sp+3Ch] [bp-268h]
  __int64 v141; // [sp+44h] [bp-260h]
  unsigned __int64 v142; // [sp+44h] [bp-260h]
  __int64 v143; // [sp+4Ch] [bp-258h]
  unsigned __int64 v144; // [sp+4Ch] [bp-258h]
  int v145; // [sp+54h] [bp-250h]
  int v146; // [sp+54h] [bp-250h]
  unsigned __int64 v147; // [sp+58h] [bp-24Ch]
  __int64 v148; // [sp+58h] [bp-24Ch]
  __int64 v149; // [sp+60h] [bp-244h]
  unsigned int v150; // [sp+60h] [bp-244h]
  unsigned __int64 v151; // [sp+64h] [bp-240h]
  unsigned __int64 v152; // [sp+68h] [bp-23Ch]
  _BYTE v153[12]; // [sp+70h] [bp-234h]
  __int64 v154; // [sp+7Ch] [bp-228h]
  int v155; // [sp+7Ch] [bp-228h]
  int v156; // [sp+80h] [bp-224h]
  unsigned int v157; // [sp+84h] [bp-220h]
  unsigned int v158; // [sp+88h] [bp-21Ch]
  unsigned __int64 v159; // [sp+8Ch] [bp-218h]
  unsigned __int64 v160; // [sp+94h] [bp-210h]
  unsigned __int64 v161; // [sp+9Ch] [bp-208h]
  unsigned int v162; // [sp+A4h] [bp-200h]
  unsigned int v163; // [sp+A8h] [bp-1FCh]
  unsigned int v164; // [sp+ACh] [bp-1F8h]
  _BYTE v165[12]; // [sp+B0h] [bp-1F4h]
  unsigned int v166; // [sp+B0h] [bp-1F4h]
  unsigned __int64 v167; // [sp+B4h] [bp-1F0h]
  unsigned int v168; // [sp+BCh] [bp-1E8h]
  int v169; // [sp+C0h] [bp-1E4h]
  unsigned int v170; // [sp+C4h] [bp-1E0h]
  int v171; // [sp+C8h] [bp-1DCh]
  unsigned int v172; // [sp+CCh] [bp-1D8h]
  int v173; // [sp+D0h] [bp-1D4h]
  int v174; // [sp+D4h] [bp-1D0h]
  unsigned int v175; // [sp+D8h] [bp-1CCh]
  __int64 v176; // [sp+DCh] [bp-1C8h]
  unsigned __int64 v177; // [sp+E4h] [bp-1C0h]
  unsigned __int64 v178; // [sp+ECh] [bp-1B8h]
  __int64 v179; // [sp+F4h] [bp-1B0h]
  int v180; // [sp+FCh] [bp-1A8h]
  unsigned int v181; // [sp+100h] [bp-1A4h]
  int v182; // [sp+104h] [bp-1A0h]
  int v183; // [sp+108h] [bp-19Ch]
  unsigned __int64 v184; // [sp+10Ch] [bp-198h]
  unsigned __int64 v185; // [sp+114h] [bp-190h]
  unsigned __int64 v186; // [sp+11Ch] [bp-188h]
  unsigned __int64 v187; // [sp+124h] [bp-180h]
  unsigned __int64 v188; // [sp+12Ch] [bp-178h]
  unsigned __int64 v189; // [sp+134h] [bp-170h]
  unsigned __int64 v190; // [sp+13Ch] [bp-168h]
  __int64 v191; // [sp+144h] [bp-160h]
  unsigned __int64 v192; // [sp+14Ch] [bp-158h]
  __int64 v193; // [sp+154h] [bp-150h]
  unsigned int v194; // [sp+15Ch] [bp-148h]
  int v195; // [sp+160h] [bp-144h]
  int v196; // [sp+164h] [bp-140h]
  __int64 v197; // [sp+168h] [bp-13Ch]
  unsigned int v198; // [sp+170h] [bp-134h]
  int v199; // [sp+174h] [bp-130h]
  int v200; // [sp+178h] [bp-12Ch]
  int v201; // [sp+17Ch] [bp-128h]
  size_t na; // [sp+184h] [bp-120h]
  unsigned __int64 v205; // [sp+188h] [bp-11Ch]
  char *src; // [sp+190h] [bp-114h]
  unsigned __int64 v207; // [sp+194h] [bp-110h]
  unsigned __int64 v208; // [sp+19Ch] [bp-108h]
  int v209; // [sp+1A4h] [bp-100h]
  int v210; // [sp+1A8h] [bp-FCh]
  __int64 v211; // [sp+1ACh] [bp-F8h]
  __int64 v212; // [sp+1B4h] [bp-F0h]
  __int64 v213; // [sp+1BCh] [bp-E8h]
  unsigned int v214; // [sp+1C4h] [bp-E0h]
  unsigned int v215; // [sp+1C8h] [bp-DCh]
  __int64 v216; // [sp+1CCh] [bp-D8h]
  unsigned __int64 v217; // [sp+1D4h] [bp-D0h]
  int v218; // [sp+1DCh] [bp-C8h]
  int v219; // [sp+1E0h] [bp-C4h]
  __int64 v220; // [sp+1E4h] [bp-C0h]
  int v221; // [sp+1ECh] [bp-B8h]
  int v222; // [sp+1F0h] [bp-B4h]
  __int64 v223; // [sp+1F4h] [bp-B0h]
  unsigned int v224; // [sp+220h] [bp-84h]
  _DWORD v225[5]; // [sp+224h] [bp-80h]
  unsigned __int64 v226; // [sp+238h] [bp-6Ch]
  unsigned __int64 v227; // [sp+240h] [bp-64h]
  unsigned __int64 v228; // [sp+248h] [bp-5Ch]
  unsigned int v229; // [sp+250h] [bp-54h]
  unsigned int v230; // [sp+254h] [bp-50h]
  unsigned int v231; // [sp+258h] [bp-4Ch]
  unsigned int v232; // [sp+25Ch] [bp-48h]
  unsigned __int64 v233; // [sp+260h] [bp-44h]
  unsigned __int64 v234; // [sp+268h] [bp-3Ch]
  int v235; // [sp+270h] [bp-34h]
  unsigned int v236; // [sp+274h] [bp-30h]
  unsigned __int64 v237; // [sp+278h] [bp-2Ch]
  unsigned __int64 v238; // [sp+280h] [bp-24h]
  unsigned int v239; // [sp+288h] [bp-1Ch]
  unsigned int v240; // [sp+28Ch] [bp-18h]
  unsigned __int64 v241; // [sp+290h] [bp-14h]
  unsigned int v242; // [sp+298h] [bp-Ch]
  unsigned int v243; // [sp+29Ch] [bp-8h]
  _BYTE v244[4]; // [sp+2A0h] [bp-4h] BYREF

  v3 = *(_DWORD *)(a1 + 128);
  v4 = 128 - v3;
  src = a2;
  if ( 128 - v3 > a3 )
  {
    result = memcpy((void *)(a1 + v3), a2, a3);
    *(_DWORD *)(a1 + 128) = v3 + a3;
  }
  else
  {
    v208 = *(_QWORD *)(a1 + 136);
    v207 = *(_QWORD *)(a1 + 144);
    v218 = *(_DWORD *)(a1 + 152);
    v219 = *(_DWORD *)(a1 + 156);
    v217 = *(_QWORD *)(a1 + 160);
    v216 = *(_QWORD *)(a1 + 168);
    v214 = *(_DWORD *)(a1 + 176);
    v215 = *(_DWORD *)(a1 + 180);
    v213 = *(_QWORD *)(a1 + 184);
    v212 = *(_QWORD *)(a1 + 192);
    v220 = *(_QWORD *)(a1 + 200);
    v221 = *(_DWORD *)(a1 + 208);
    v209 = *(_DWORD *)(a1 + 212);
    v210 = *(_DWORD *)(a1 + 216);
    v222 = *(_DWORD *)(a1 + 220);
    v211 = *(_QWORD *)(a1 + 224);
    v205 = *(_QWORD *)(a1 + 232);
    v223 = *(_QWORD *)(a1 + 240);
    if ( a3 )
    {
      for ( i = a3; ; i = v6 )
      {
        if ( v4 >= i )
          v4 = i;
        v7 = (void *)(a1 + v3);
        v3 += v4;
        memcpy(v7, src, v4);
        na = i - v4;
        src += v4;
        if ( v3 == 128 )
        {
          v205 += 1024LL;
          if ( v205 <= 0x3FF )
            ++v223;
          v8 = bswap32(*(_DWORD *)(a1 + 4));
          v157 = bswap32(*(_DWORD *)(a1 + 8));
          v159 = __PAIR64__(bswap32(*(_DWORD *)(a1 + 24)), bswap32(*(_DWORD *)(a1 + 28)));
          v158 = bswap32(*(_DWORD *)(a1 + 20));
          v161 = __PAIR64__(bswap32(*(_DWORD *)(a1 + 40)), bswap32(*(_DWORD *)(a1 + 44)));
          v160 = _byteswap_uint64(*(_QWORD *)(a1 + 32));
          v163 = bswap32(*(_DWORD *)(a1 + 48));
          v170 = bswap32(*(_DWORD *)a1);
          v172 = bswap32(*(_DWORD *)(a1 + 12));
          v175 = bswap32(*(_DWORD *)(a1 + 16));
          v9 = bswap32(*(_DWORD *)(a1 + 60));
          v162 = bswap32(*(_DWORD *)(a1 + 52));
          v164 = bswap32(*(_DWORD *)(a1 + 56));
          v225[0] = v170;
          v181 = v9;
          v228 = v161;
          v225[3] = v158;
          v230 = v163;
          v169 = 320440878;
          v225[2] = v157;
          v229 = v162;
          v232 = v164;
          v10 = *(_DWORD *)(a1 + 72);
          v224 = v8;
          v225[1] = v172;
          v225[4] = v175;
          v226 = v159;
          v227 = v160;
          v231 = v9;
          *(_DWORD *)v165 = v10;
          *(_QWORD *)&v165[4] = *(_QWORD *)(a1 + 76);
          v171 = 57701188;
          v176 = 0x82EFA98EC4E6C89LL;
          v179 = 0x452821E638D01377LL;
          v177 = 0xA4093822299F31D0LL;
          v178 = 0xBE5466CF34E90C6CLL;
          v131 = v221 ^ 0x3707344;
          *(_DWORD *)&v153[8] = v209 ^ 0x13198A2E;
          LODWORD(v121) = v210 ^ 0x299F31D0;
          HIDWORD(v121) = v222 ^ 0xA4093822;
          v124 = v211 ^ 0x82EFA98EC4E6C89LL;
          v141 = v205 ^ 0x452821E638D01377LL;
          v147 = v205 ^ 0xBE5466CF34E90C6CLL;
          v199 = -2054226922;
          v200 = 134345442;
          v183 = -1062458953;
          v197 = 0x636920D871574E69LL;
          v195 = -248741991;
          v196 = -1166241723;
          v193 = 0x24A19947B3916CF7LL;
          v191 = 0x2FFD72DBD01ADFB7LL;
          v189 = 0xB8E1AFED6A267E96LL;
          v129 = v220 ^ 0x243F6A8885A308D3LL;
          v187 = 0x9216D5D98979FB1BLL;
          v185 = 0xD1310BA698DFB5ACLL;
          *(_QWORD *)v153 = v223 ^ 0xC0AC29B7C97C50DDLL;
          v173 = -2052912941;
          v174 = 608135816;
          v137 = v223 ^ 0x3F84D5B5B5470917LL;
          v149 = v212;
          v143 = v213;
          v133 = v214;
          v138 = v215;
          v154 = v216;
          v152 = v217;
          v145 = v218;
          v127 = v219;
          v140 = v207;
          v136 = v208;
          v182 = -914599715;
          v180 = -1253635817;
          v11 = _byteswap_uint64(*(unsigned __int64 *)v165);
          v12 = bswap32(*(unsigned int *)&v165[8]);
          v192 = _byteswap_uint64(*(_QWORD *)(a1 + 96));
          v166 = bswap32(*(_DWORD *)(a1 + 108));
          v184 = _byteswap_uint64(*(_QWORD *)(a1 + 64));
          v167 = _byteswap_uint64(*(_QWORD *)(a1 + 112));
          v168 = bswap32(*(_DWORD *)(a1 + 120));
          v186 = v11;
          v198 = bswap32(*(_DWORD *)(a1 + 124));
          v188 = __PAIR64__(v12, bswap32(*(_DWORD *)(a1 + 84)));
          v190 = _byteswap_uint64(*(_QWORD *)(a1 + 88));
          v194 = bswap32(*(_DWORD *)(a1 + 104));
          v233 = v184;
          v238 = v192;
          v239 = v166;
          v234 = v11;
          v236 = v12;
          v235 = v188;
          v241 = v167;
          v237 = v190;
          v243 = v168;
          v240 = v194;
          v242 = v198;
          v13 = &unk_190138;
          v14 = v8;
          v201 = 1065670069;
          while ( 1 )
          {
            v39 = __PAIR64__(v170 ^ v169, v171 ^ v14) + v154 + v136;
            v40 = __PAIR64__((unsigned int)v141 ^ (unsigned int)v39, HIDWORD(v141) ^ HIDWORD(v39)) + v129;
            v41 = (__int64)((__PAIR64__((unsigned int)v141 ^ (unsigned int)v39, HIDWORD(v141) ^ HIDWORD(v39)) + v129)
                          ^ v154) >> 25;
            v42 = ((((__PAIR64__((unsigned int)v141 ^ (unsigned int)v39, HIDWORD(v141) ^ HIDWORD(v39)) + v129) >> 32)
                  ^ HIDWORD(v154)) >> 25)
                | ((((HIDWORD(v141) ^ HIDWORD(v39)) + (_DWORD)v129) ^ (unsigned int)v154) << 7);
            v43 = HIDWORD(v141) ^ HIDWORD(v39) ^ ((v172 ^ v173) + v39 + v41);
            v44 = __PAIR64__(
                    HIDWORD(v39) + __CFADD__(v172 ^ v173, (_DWORD)v39) + (v157 ^ v174),
                    (v172 ^ v173) + (unsigned int)v39)
                + __PAIR64__(v42, v41);
            v45 = v141
                ^ v39
                ^ ((__PAIR64__(
                      HIDWORD(v39) + __CFADD__(v172 ^ v173, (_DWORD)v39) + (v157 ^ v174),
                      (v172 ^ v173) + (unsigned int)v39)
                  + __PAIR64__(v42, v41)) >> 32);
            v142 = __PAIR64__(v42, v41);
            v46 = HIWORD(v45);
            v47 = HIWORD(v43) | (v45 << 16);
            v48 = v46 | (v43 << 16);
            v155 = v47;
            v130 = v40 + __PAIR64__(v48, v47);
            v156 = v48;
            v49 = __PAIR64__(v175 ^ HIDWORD(v176), v158 ^ (unsigned int)v176) + __PAIR64__(v138, v133) + v140;
            v50 = ((HIDWORD(v147) ^ HIDWORD(v49)) + v131) ^ v133;
            v51 = __PAIR64__((unsigned int)v147 ^ (unsigned int)v49, HIDWORD(v147) ^ HIDWORD(v49))
                + __PAIR64__(*(unsigned int *)&v153[8], v131);
            v52 = (v159 ^ v177) + v49;
            v53 = (v50 >> 25)
                | ((((__PAIR64__((unsigned int)v147 ^ (unsigned int)v49, HIDWORD(v147) ^ HIDWORD(v49))
                    + __PAIR64__(*(unsigned int *)&v153[8], v131)) >> 32)
                  ^ v138) << 7);
            v54 = ((((__PAIR64__((unsigned int)v147 ^ (unsigned int)v49, HIDWORD(v147) ^ HIDWORD(v49))
                    + __PAIR64__(*(unsigned int *)&v153[8], v131)) >> 32)
                  ^ v138) >> 25)
                | (v50 << 7);
            v55 = HIDWORD(v147) ^ HIDWORD(v49) ^ (v52 + v53);
            v139 = v52 + __PAIR64__(v54, v53);
            v56 = v147 ^ v49 ^ ((v52 + __PAIR64__(v54, v53)) >> 32);
            LODWORD(v148) = HIWORD(v55) | (v56 << 16);
            v57 = v53 ^ (v51 + v148);
            HIDWORD(v148) = HIWORD(v56) | (v55 << 16);
            v132 = (v51 + v148) >> 32;
            v59 = (v160 ^ v178) + v143 + __PAIR64__(v127, v145);
            LODWORD(v58) = HIDWORD(v59);
            v60 = *(_DWORD *)v153;
            *(_DWORD *)v153 = v51 + v148;
            HIDWORD(v58) = v60 ^ v59;
            v61 = (v58 ^ *(unsigned int *)&v153[4]) + v121;
            v62 = (v161 ^ v179) + v59;
            v63 = ((((*(_DWORD *)&v153[4] ^ HIDWORD(v62)) + (_DWORD)v121) ^ (unsigned int)v143) >> 25)
                | ((HIDWORD(v61) ^ HIDWORD(v143)) << 7);
            v64 = ((unsigned int)(HIDWORD(v61) ^ HIDWORD(v143)) >> 25) | (((unsigned int)v61 ^ (unsigned int)v143) << 7);
            v65 = v54 ^ v132;
            v66 = *(_DWORD *)&v153[4] ^ HIDWORD(v59) ^ (v62 + v63);
            v144 = v62 + __PAIR64__(v64, v63);
            HIDWORD(v58) = v60 ^ v59 ^ ((v62 + __PAIR64__(v64, v63)) >> 32);
            v123 = (v57 >> 11) | (v65 << 21);
            v128 = (v65 >> 11) | (v57 << 21);
            v67 = v61 + (HIWORD(v66) | (HIDWORD(v58) << 16));
            v68 = v63 ^ v67;
            *(_DWORD *)&v153[4] = HIWORD(v66) | (HIDWORD(v58) << 16);
            *(_DWORD *)&v153[8] = HIWORD(HIDWORD(v58)) | (v66 << 16);
            v134 = (v61 + *(_QWORD *)&v153[4]) >> 32;
            v69 = v137 ^ ((v162 ^ v180) + v149 + v152);
            v70 = __PAIR64__(v163 ^ v201, v162 ^ v180) + v149 + v152;
            v71 = ((HIDWORD(v137) ^ HIDWORD(v70)) + v124) ^ v149;
            v72 = (HIDWORD(v137) ^ HIDWORD(v70)) + v124;
            v73 = ((__PAIR64__(v69, HIDWORD(v137) ^ HIDWORD(v70)) + v124) >> 32) ^ HIDWORD(v149);
            v126 = (__PAIR64__(v69, HIDWORD(v137) ^ HIDWORD(v70)) + v124) >> 32;
            v74 = (v71 >> 25) | (v73 << 7);
            v122 = (v73 >> 25) | (v71 << 7);
            HIDWORD(v58) = HIDWORD(v137) ^ HIDWORD(v70) ^ ((v181 ^ v182) + (v162 ^ v180) + v149 + v152 + v74);
            v151 = __PAIR64__(v164 ^ v183, v181 ^ v182) + v70 + __PAIR64__(v122, v74);
            v75 = v69 ^ HIDWORD(v151);
            v76 = v64 ^ v134;
            v77 = (v68 >> 11) | (v76 << 21);
            v78 = HIWORD(v75);
            v79 = HIWORD(HIDWORD(v58)) | (v75 << 16);
            HIDWORD(v58) = v78 | (HIDWORD(v58) << 16);
            v80 = v74 ^ (v72 + v79);
            v125 = (v76 >> 11) | (v68 << 21);
            v81 = __PAIR64__(v126, v72) + __PAIR64__(HIDWORD(v58), v79);
            v82 = (v184 ^ v185) + v44 + __PAIR64__(v128, v123);
            v83 = v79 ^ v82;
            HIDWORD(v58) ^= HIDWORD(v82);
            v84 = v123 ^ (v67 + HIDWORD(v58));
            v85 = __PAIR64__(v134, v67) + __PAIR64__(v83, HIDWORD(v58));
            v135 = ((v128 ^ ((__PAIR64__(v134, v67) + __PAIR64__(v83, HIDWORD(v58))) >> 32)) >> 25) | (v84 << 7);
            v86 = (v84 >> 25) | ((v128 ^ HIDWORD(v85)) << 7);
            HIDWORD(v58) ^= (v186 ^ v187) + v82 + v86;
            v136 = (v186 ^ v187) + v82 + __PAIR64__(v135, v86);
            v87 = v83 ^ HIDWORD(v136);
            v146 = (v80 >> 11) | ((v122 ^ HIDWORD(v81)) << 21);
            v88 = (((unsigned int)v122 ^ HIDWORD(v81)) >> 11) | (v80 << 21);
            LODWORD(v137) = HIWORD(HIDWORD(v58)) | (v87 << 16);
            HIDWORD(v137) = HIWORD(v87) | (HIDWORD(v58) << 16);
            v121 = v85 + v137;
            LODWORD(v58) = v155 ^ ((v188 ^ v189) + v139 + v77);
            v89 = (v188 ^ v189) + v139 + __PAIR64__(v125, v77);
            v90 = v81 + __PAIR64__(v58, (unsigned int)v156 ^ HIDWORD(v89));
            v91 = ((v77 ^ (unsigned int)v90) >> 25) | ((v125 ^ HIDWORD(v90)) << 7);
            v92 = (((unsigned int)v125 ^ HIDWORD(v90)) >> 25) | ((v77 ^ (unsigned int)v90) << 7);
            v93 = (v190 ^ v191) + v89 + __PAIR64__(v92, v91);
            v94 = v156 ^ HIDWORD(v89) ^ v93;
            LODWORD(v58) = v58 ^ HIDWORD(v93);
            v140 = v93;
            v95 = (__int64)(v142 ^ v130) >> 11;
            v96 = WORD1(v58);
            LODWORD(v58) = HIWORD(v94) | ((_DWORD)v58 << 16);
            v97 = v96 | (v94 << 16);
            v98 = ((unsigned int)(HIDWORD(v142) ^ HIDWORD(v130)) >> 11)
                | (((unsigned int)v142 ^ (unsigned int)v130) << 21);
            v141 = __PAIR64__(v97, v58);
            v150 = v98;
            v124 = v90 + __PAIR64__(v97, v58);
            v99 = (v192 ^ v193) + v144 + __PAIR64__(v88, v146);
            v100 = v130;
            v101 = v146 ^ (v130 + (HIDWORD(v148) ^ HIDWORD(v99)));
            LODWORD(v130) = v148 ^ ((v192 ^ v193) + v144 + v146);
            v102 = v100 + (HIDWORD(v148) ^ HIDWORD(v99));
            v103 = v88 ^ ((__PAIR64__(HIDWORD(v130), v100) + __PAIR64__(v130, HIDWORD(v148) ^ HIDWORD(v99))) >> 32);
            HIDWORD(v130) = (__PAIR64__(HIDWORD(v130), v100) + __PAIR64__(v130, HIDWORD(v148) ^ HIDWORD(v99))) >> 32;
            v104 = v103 >> 25;
            v105 = (v101 >> 25) | (v103 << 7);
            v106 = v104 | (v101 << 7);
            HIDWORD(v81) = (v166 ^ v195) + v99;
            v145 = v105 + HIDWORD(v81);
            v127 = HIDWORD(v99)
                 + __CFADD__(v166 ^ v195, (_DWORD)v99)
                 + (v194 ^ v196)
                 + __CFADD__(v105, HIDWORD(v81))
                 + v106;
            LODWORD(v81) = HIDWORD(v148) ^ HIDWORD(v99) ^ (v105 + HIDWORD(v81));
            v138 = ((v135 ^ HIDWORD(v121)) >> 11) | ((v86 ^ (unsigned int)v121) << 21);
            v107 = v92 ^ ((v90 + __PAIR64__(v97, v58)) >> 32);
            v133 = ((v86 ^ (unsigned int)v121) >> 11) | ((v135 ^ HIDWORD(v121)) << 21);
            LODWORD(v147) = WORD1(v81) | (((unsigned int)v130 ^ v127) << 16);
            v108 = v91 ^ (v90 + v58);
            HIDWORD(v147) = (((unsigned int)v130 ^ v127) >> 16) | ((_DWORD)v81 << 16);
            HIDWORD(v143) = (v107 >> 11) | (v108 << 21);
            LODWORD(v129) = v102 + v147;
            v109 = v105 ^ (v102 + v147);
            v110 = v106 ^ ((__PAIR64__(HIDWORD(v130), v102) + v147) >> 32);
            v111 = v150;
            HIDWORD(v129) = (__PAIR64__(HIDWORD(v130), v102) + v147) >> 32;
            HIDWORD(v58) = *(_DWORD *)&v153[4] ^ ((v167 ^ v197) + v151 + v95);
            v112 = (v167 ^ v197) + v151 + __PAIR64__(v150, v95);
            LODWORD(v143) = (v108 >> 11) | (v107 << 21);
            LODWORD(v149) = (v109 >> 11) | (v110 << 21);
            LODWORD(v58) = v95 ^ (*(_DWORD *)v153 + (*(_DWORD *)&v153[8] ^ HIDWORD(v112)));
            HIDWORD(v149) = (v110 >> 11) | (v109 << 21);
            v113 = __PAIR64__(v132, *(unsigned int *)v153)
                 + __PAIR64__(HIDWORD(v58), *(_DWORD *)&v153[8] ^ HIDWORD(v112));
            v114 = v111
                 ^ ((__PAIR64__(v132, *(unsigned int *)v153)
                   + __PAIR64__(HIDWORD(v58), *(_DWORD *)&v153[8] ^ HIDWORD(v112))) >> 32);
            v115 = ((unsigned int)v58 >> 25) | (v114 << 7);
            LODWORD(v58) = (v114 >> 25) | ((_DWORD)v58 << 7);
            v116 = __PAIR64__(
                     HIDWORD(v112) + __CFADD__(v198 ^ v199, (_DWORD)v112) + (v168 ^ v200),
                     (v198 ^ v199) + (unsigned int)v112)
                 + __PAIR64__(v58, v115);
            LODWORD(v81) = *(_DWORD *)&v153[8] ^ HIDWORD(v112) ^ ((v198 ^ v199) + v112 + v115);
            HIDWORD(v58) ^= (__PAIR64__(
                               HIDWORD(v112) + __CFADD__(v198 ^ v199, (_DWORD)v112) + (v168 ^ v200),
                               (v198 ^ v199) + (unsigned int)v112)
                           + __PAIR64__(v58, v115)) >> 32;
            v152 = __PAIR64__(
                     HIDWORD(v112) + __CFADD__(v198 ^ v199, (_DWORD)v112) + (v168 ^ v200),
                     (v198 ^ v199) + (unsigned int)v112)
                 + __PAIR64__(v58, v115);
            *(_DWORD *)v153 = WORD1(v81) | (HIDWORD(v58) << 16);
            *(_DWORD *)&v153[4] = HIWORD(HIDWORD(v58)) | ((_DWORD)v81 << 16);
            v117 = v115 ^ (v113 + *(_DWORD *)v153);
            LODWORD(v58) = v58 ^ ((v113 + *(_QWORD *)v153) >> 32);
            v131 = v113 + *(_DWORD *)v153;
            *(_DWORD *)&v153[8] = (v113 + *(_QWORD *)v153) >> 32;
            HIDWORD(v154) = ((unsigned int)v58 >> 11) | (v117 << 21);
            LODWORD(v154) = (v117 >> 11) | ((_DWORD)v58 << 21);
            if ( &unk_1904F8 == (_UNKNOWN *)v13 )
              break;
            v15 = *(v13 - 15);
            v16 = *(v13 - 16);
            __pld(v13);
            v17 = 8 * v15;
            v18 = *(v13 - 14);
            __pld(v13 + 1);
            v19 = (char *)&unk_1904B8 + v17;
            __pld(v13 + 2);
            v20 = &v244[v17];
            v21 = 2 * v18;
            v22 = &v244[8 * v16];
            v23 = *(v13 - 13);
            __pld(v13 + 3);
            v13 += 16;
            HIDWORD(v177) = *(_DWORD *)((char *)&unk_1904B8 + v21 * 4 + 4);
            v24 = (char *)&unk_1904B8 + 8 * v23;
            v25 = 2 * *(v13 - 28);
            v26 = &v244[8 * v23];
            v27 = 2 * *(v13 - 27);
            v173 = *((_DWORD *)&unk_1904B8 + 2 * v16);
            v174 = *((_DWORD *)&unk_1904B8 + 2 * v16 + 1);
            v14 = *((_DWORD *)v22 - 32);
            v170 = *((_DWORD *)v22 - 31);
            LODWORD(v177) = *((_DWORD *)&unk_1904B8 + 2 * *(v13 - 30));
            v171 = *((_DWORD *)&unk_1904B8 + 2 * *(v13 - 31));
            v169 = *((_DWORD *)v19 + 1);
            v172 = *((_DWORD *)v20 - 32);
            v157 = *((_DWORD *)v20 - 31);
            v158 = v225[v21 - 1];
            v175 = v225[v21];
            LODWORD(v176) = *((_DWORD *)&unk_1904B8 + 2 * *(v13 - 29));
            HIDWORD(v176) = *((_DWORD *)v24 + 1);
            v159 = *((_QWORD *)v26 - 16);
            v160 = *(_QWORD *)&v225[v25 - 1];
            v178 = *(_QWORD *)((char *)&unk_1904B8 + v27 * 4);
            v161 = *(_QWORD *)&v225[v27 - 1];
            v179 = *(_QWORD *)((char *)&unk_1904B8 + v25 * 4);
            v28 = &v244[8 * *(v13 - 25)];
            v29 = 2 * *(v13 - 24);
            v30 = &v244[8 * *(v13 - 26)];
            v31 = 2 * *(v13 - 22);
            v32 = 2 * *(v13 - 21);
            v33 = 2 * *(v13 - 23);
            v182 = *((_DWORD *)&unk_1904B8 + 2 * *(v13 - 26));
            v183 = *((_DWORD *)&unk_1904B8 + 2 * *(v13 - 26) + 1);
            v162 = *((_DWORD *)v30 - 32);
            v163 = *((_DWORD *)v30 - 31);
            v180 = *((_DWORD *)&unk_1904B8 + 2 * *(v13 - 25));
            v201 = *((_DWORD *)&unk_1904B8 + 2 * *(v13 - 25) + 1);
            v181 = *((_DWORD *)v28 - 32);
            v164 = *((_DWORD *)v28 - 31);
            v187 = *(_QWORD *)((char *)&unk_1904B8 + v29 * 4);
            v184 = *(_QWORD *)&v225[v29 - 1];
            v185 = *(_QWORD *)((char *)&unk_1904B8 + v33 * 4);
            v186 = *(_QWORD *)&v225[v33 - 1];
            v191 = *(_QWORD *)((char *)&unk_1904B8 + v31 * 4);
            v188 = *(_QWORD *)&v225[v31 - 1];
            v189 = *(_QWORD *)((char *)&unk_1904B8 + v32 * 4);
            v190 = *(_QWORD *)&v225[v32 - 1];
            v34 = *((_QWORD *)v13 - 10);
            v35 = *(v13 - 18);
            v36 = *(v13 - 17);
            v37 = 2 * v34;
            v195 = *((_DWORD *)&unk_1904B8 + 2 * v34);
            LODWORD(v34) = 8 * HIDWORD(v34);
            LODWORD(v193) = *((_DWORD *)&unk_1904B8 + 2 * HIDWORD(v34));
            HIDWORD(v34) = &v244[8 * v36];
            v192 = *(_QWORD *)&v225[v37 - 1];
            v38 = *(_DWORD *)((char *)&unk_1904B8 + v34 + 4);
            v196 = *(_DWORD *)((char *)&unk_1904B8 + v37 * 4 + 4);
            LODWORD(v34) = &v244[v34];
            HIDWORD(v193) = v38;
            v166 = *(_DWORD *)(v34 - 128);
            v194 = *(_DWORD *)(v34 - 124);
            v199 = *((_DWORD *)&unk_1904B8 + 2 * v35);
            v200 = *((_DWORD *)&unk_1904B8 + 2 * v35 + 1);
            v167 = *(_QWORD *)&v225[2 * v35 - 1];
            v197 = *((_QWORD *)&unk_1904B8 + v36);
            v198 = *(_DWORD *)(HIDWORD(v34) - 128);
            v168 = *(_DWORD *)(HIDWORD(v34) - 124);
          }
          LODWORD(v118) = v213 ^ v210 ^ *(_DWORD *)v153;
          HIDWORD(v118) = HIDWORD(v213) ^ v222 ^ *(_DWORD *)&v153[4];
          v208 ^= v136 ^ v220 ^ v129;
          LODWORD(v207) = v93 ^ v207 ^ v221 ^ v131;
          v3 = 0;
          HIDWORD(v207) ^= HIDWORD(v93) ^ v209 ^ *(_DWORD *)&v153[8];
          v218 ^= v145 ^ v210 ^ v121;
          v219 ^= v127 ^ v222 ^ HIDWORD(v121);
          v217 ^= v124 ^ v211 ^ v116;
          v216 ^= v141 ^ v154 ^ v220;
          v214 ^= v147 ^ v221 ^ v133;
          v215 ^= HIDWORD(v147) ^ v209 ^ v138;
          v213 = v143 ^ v118;
          v212 ^= v137 ^ v149 ^ v211;
          v6 = na;
          if ( !na )
            break;
        }
        else
        {
          v6 = i - v4;
          if ( !na )
            break;
        }
        v4 = 128 - v3;
      }
    }
    *(_QWORD *)(a1 + 136) = v208;
    *(_QWORD *)(a1 + 144) = v207;
    *(_DWORD *)(a1 + 152) = v218;
    *(_DWORD *)(a1 + 156) = v219;
    *(_QWORD *)(a1 + 160) = v217;
    *(_QWORD *)(a1 + 168) = v216;
    *(_DWORD *)(a1 + 176) = v214;
    *(_DWORD *)(a1 + 180) = v215;
    *(_QWORD *)(a1 + 184) = v213;
    *(_QWORD *)(a1 + 192) = v212;
    *(_DWORD *)(a1 + 128) = v3;
    *(_QWORD *)(a1 + 200) = v220;
    *(_DWORD *)(a1 + 208) = v221;
    *(_DWORD *)(a1 + 212) = v209;
    *(_DWORD *)(a1 + 216) = v210;
    *(_DWORD *)(a1 + 220) = v222;
    *(_QWORD *)(a1 + 224) = v211;
    *(_QWORD *)(a1 + 232) = v205;
    *(_QWORD *)(a1 + 240) = v223;
    return (void *)v205;
  }
  return result;
}
