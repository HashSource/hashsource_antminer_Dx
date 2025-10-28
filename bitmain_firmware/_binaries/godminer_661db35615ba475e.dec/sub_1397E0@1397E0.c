int __fastcall sub_1397E0(int a1, char a2, char a3, void *a4, size_t n)
{
  unsigned int v5; // r5
  unsigned int v6; // r4
  unsigned int v7; // r7
  size_t v8; // r5
  unsigned int v9; // r4
  int v10; // r7
  char *v11; // r3
  int *v12; // r12
  int *v13; // r4
  int v14; // r0
  int v15; // r1
  int *v16; // lr
  int v17; // r2
  int v18; // r3
  int v19; // r5
  int v20; // r6
  int v21; // r3
  int v22; // r12
  int v23; // r11
  int v24; // r4
  int v25; // r8
  unsigned int v26; // r4
  unsigned int v27; // r8
  unsigned int v28; // r5
  unsigned int v29; // r2
  int v30; // r0
  _DWORD *v31; // lr
  _QWORD *v32; // r4
  _QWORD *v33; // r11
  int v34; // r12
  _DWORD *v35; // r2
  int v36; // r0
  int v37; // r3
  int v38; // r4
  int v39; // r7
  int v40; // r10
  int v41; // r12
  _QWORD *v42; // r7
  int v43; // r9
  int v44; // r8
  int v45; // r5
  __int64 v46; // r6
  int v47; // r9
  int v48; // lr
  int v49; // r8
  int v50; // r11
  int v51; // r1
  int v52; // r5
  unsigned int v53; // r1
  _DWORD *v54; // r4
  int v55; // r3
  _QWORD *v56; // lr
  _DWORD *v57; // r12
  int v58; // r2
  unsigned int v59; // r10
  unsigned int v60; // r9
  _QWORD *v61; // r12
  int v62; // r3
  int v63; // r5
  int v64; // r12
  int v65; // r0
  _DWORD *v66; // r3
  int v67; // r12
  int v68; // r0
  int v69; // lr
  _QWORD *v70; // r9
  _DWORD *v71; // r8
  int v72; // r10
  _QWORD *v73; // lr
  int v74; // lr
  int v75; // r5
  int v76; // r4
  int v77; // r12
  _QWORD *v78; // r5
  int v79; // r3
  _DWORD *v80; // r9
  __int64 v82; // [sp+0h] [bp-1BCh]
  unsigned int v83; // [sp+14h] [bp-1A8h]
  unsigned int v84; // [sp+14h] [bp-1A8h]
  int v85; // [sp+14h] [bp-1A8h]
  int v86; // [sp+18h] [bp-1A4h]
  unsigned int v87; // [sp+18h] [bp-1A4h]
  int v88; // [sp+18h] [bp-1A4h]
  int v89; // [sp+18h] [bp-1A4h]
  int v90; // [sp+1Ch] [bp-1A0h]
  unsigned int v91; // [sp+1Ch] [bp-1A0h]
  _QWORD *v92; // [sp+1Ch] [bp-1A0h]
  int v93; // [sp+1Ch] [bp-1A0h]
  unsigned int v94; // [sp+20h] [bp-19Ch]
  int v95; // [sp+20h] [bp-19Ch]
  unsigned int v96; // [sp+24h] [bp-198h]
  unsigned int v97; // [sp+24h] [bp-198h]
  unsigned int v98; // [sp+28h] [bp-194h]
  unsigned int v99; // [sp+28h] [bp-194h]
  unsigned int v100; // [sp+2Ch] [bp-190h]
  unsigned int v101; // [sp+2Ch] [bp-190h]
  unsigned int v102; // [sp+30h] [bp-18Ch]
  _QWORD *v103; // [sp+30h] [bp-18Ch]
  unsigned int v104; // [sp+30h] [bp-18Ch]
  unsigned int v105; // [sp+34h] [bp-188h]
  _QWORD *v106; // [sp+34h] [bp-188h]
  unsigned int v107; // [sp+34h] [bp-188h]
  int v108; // [sp+34h] [bp-188h]
  unsigned int v109; // [sp+38h] [bp-184h]
  unsigned int v110; // [sp+38h] [bp-184h]
  int v111; // [sp+3Ch] [bp-180h]
  unsigned int v112; // [sp+3Ch] [bp-180h]
  unsigned int v113; // [sp+3Ch] [bp-180h]
  int v114; // [sp+40h] [bp-17Ch]
  unsigned int v115; // [sp+40h] [bp-17Ch]
  unsigned int v116; // [sp+40h] [bp-17Ch]
  int v117; // [sp+44h] [bp-178h]
  unsigned int v118; // [sp+44h] [bp-178h]
  int v119; // [sp+44h] [bp-178h]
  _DWORD *v120; // [sp+44h] [bp-178h]
  unsigned int v121; // [sp+44h] [bp-178h]
  int v122; // [sp+48h] [bp-174h]
  unsigned int v123; // [sp+48h] [bp-174h]
  int v124; // [sp+4Ch] [bp-170h]
  int v125; // [sp+4Ch] [bp-170h]
  unsigned int v126; // [sp+4Ch] [bp-170h]
  int v127; // [sp+50h] [bp-16Ch]
  unsigned int v128; // [sp+50h] [bp-16Ch]
  _QWORD *v129; // [sp+58h] [bp-164h]
  int v130; // [sp+58h] [bp-164h]
  int v131; // [sp+58h] [bp-164h]
  int v132; // [sp+5Ch] [bp-160h]
  unsigned int v133; // [sp+5Ch] [bp-160h]
  _QWORD *v134; // [sp+60h] [bp-15Ch]
  int v135; // [sp+60h] [bp-15Ch]
  int v136; // [sp+60h] [bp-15Ch]
  int v137; // [sp+64h] [bp-158h]
  unsigned int v138; // [sp+64h] [bp-158h]
  _QWORD *v139; // [sp+64h] [bp-158h]
  int v140; // [sp+68h] [bp-154h]
  _QWORD *v141; // [sp+68h] [bp-154h]
  _QWORD *v142; // [sp+68h] [bp-154h]
  int v143; // [sp+6Ch] [bp-150h]
  unsigned int v144; // [sp+6Ch] [bp-150h]
  _QWORD *v145; // [sp+6Ch] [bp-150h]
  int v146; // [sp+70h] [bp-14Ch]
  _QWORD *v147; // [sp+70h] [bp-14Ch]
  _DWORD *v148; // [sp+70h] [bp-14Ch]
  _DWORD *v149; // [sp+74h] [bp-148h]
  _DWORD *v150; // [sp+78h] [bp-144h]
  _DWORD *v151; // [sp+78h] [bp-144h]
  _DWORD *v152; // [sp+78h] [bp-144h]
  _QWORD *v153; // [sp+7Ch] [bp-140h]
  _QWORD *v154; // [sp+7Ch] [bp-140h]
  _DWORD *v155; // [sp+7Ch] [bp-140h]
  _QWORD *v156; // [sp+80h] [bp-13Ch]
  _DWORD *v157; // [sp+80h] [bp-13Ch]
  _DWORD *v158; // [sp+80h] [bp-13Ch]
  _QWORD *v159; // [sp+84h] [bp-138h]
  _QWORD *v160; // [sp+84h] [bp-138h]
  _QWORD *v161; // [sp+84h] [bp-138h]
  _QWORD *v162; // [sp+88h] [bp-134h]
  _QWORD *v163; // [sp+88h] [bp-134h]
  _DWORD *v164; // [sp+88h] [bp-134h]
  _DWORD *v165; // [sp+8Ch] [bp-130h]
  _QWORD *v166; // [sp+8Ch] [bp-130h]
  _DWORD *v167; // [sp+8Ch] [bp-130h]
  unsigned __int8 v168; // [sp+8Eh] [bp-12Eh]
  _QWORD *v169; // [sp+90h] [bp-12Ch]
  _QWORD *v170; // [sp+90h] [bp-12Ch]
  _QWORD *v171; // [sp+94h] [bp-128h]
  _QWORD *v172; // [sp+94h] [bp-128h]
  _QWORD *v173; // [sp+98h] [bp-124h]
  int v174; // [sp+98h] [bp-124h]
  _QWORD *v175; // [sp+98h] [bp-124h]
  __int64 v176; // [sp+98h] [bp-124h]
  __int64 v177; // [sp+A0h] [bp-11Ch]
  _QWORD *v178; // [sp+A8h] [bp-114h]
  _QWORD *v179; // [sp+ACh] [bp-110h]
  _QWORD *v180; // [sp+ACh] [bp-110h]
  _QWORD *v181; // [sp+B0h] [bp-10Ch]
  _DWORD *v182; // [sp+B4h] [bp-108h]
  _QWORD *v183; // [sp+B4h] [bp-108h]
  _QWORD *v184; // [sp+B8h] [bp-104h]
  _DWORD *v185; // [sp+B8h] [bp-104h]
  int v186; // [sp+BCh] [bp-100h]
  _DWORD *v187; // [sp+BCh] [bp-100h]
  _QWORD *v188; // [sp+BCh] [bp-100h]
  _QWORD *v189; // [sp+C0h] [bp-FCh]
  _QWORD *v190; // [sp+C4h] [bp-F8h]
  _DWORD *v191; // [sp+C4h] [bp-F8h]
  int v192; // [sp+C8h] [bp-F4h]
  _QWORD *v193; // [sp+C8h] [bp-F4h]
  _QWORD *v194; // [sp+CCh] [bp-F0h]
  int v195; // [sp+CCh] [bp-F0h]
  int v196; // [sp+D0h] [bp-ECh]
  int v197; // [sp+D0h] [bp-ECh]
  int v198; // [sp+D4h] [bp-E8h]
  int v199; // [sp+D8h] [bp-E4h]
  int v202; // [sp+F0h] [bp-CCh] BYREF
  int v203; // [sp+F4h] [bp-C8h]
  int v204; // [sp+F8h] [bp-C4h]
  int v205; // [sp+FCh] [bp-C0h]
  int v206; // [sp+100h] [bp-BCh]
  int v207; // [sp+104h] [bp-B8h]
  int v208; // [sp+108h] [bp-B4h]
  int v209; // [sp+10Ch] [bp-B0h]
  int v210; // [sp+110h] [bp-ACh]
  int v211; // [sp+114h] [bp-A8h]
  int v212; // [sp+118h] [bp-A4h]
  int v213; // [sp+11Ch] [bp-A0h]
  int v214; // [sp+120h] [bp-9Ch]
  int v215; // [sp+124h] [bp-98h]
  int v216; // [sp+128h] [bp-94h]
  int v217; // [sp+12Ch] [bp-90h]
  int v218; // [sp+130h] [bp-8Ch]
  int v219; // [sp+134h] [bp-88h]
  int v220; // [sp+138h] [bp-84h]
  int v221; // [sp+13Ch] [bp-80h]
  int v222; // [sp+140h] [bp-7Ch]
  int v223; // [sp+144h] [bp-78h]
  int v224; // [sp+148h] [bp-74h]
  int v225; // [sp+14Ch] [bp-70h]
  int v226; // [sp+150h] [bp-6Ch]
  int v227; // [sp+154h] [bp-68h]
  int v228; // [sp+158h] [bp-64h]
  int v229; // [sp+15Ch] [bp-60h]
  int v230; // [sp+160h] [bp-5Ch]
  int v231; // [sp+164h] [bp-58h]
  int v232; // [sp+168h] [bp-54h]
  int v233; // [sp+16Ch] [bp-50h]
  _DWORD v234[19]; // [sp+170h] [bp-4Ch] BYREF

  v5 = *(_DWORD *)(a1 + 64);
  v6 = *(_DWORD *)(a1 + 136);
  v7 = *(_DWORD *)(a1 + 140);
  LOBYTE(v234[0]) = (128 >> a3) | a2 & -(128 >> a3);
  if ( v5 > 0x37 )
  {
    v8 = 128 - v5;
    v10 = (__PAIR64__(v7, v6) + 2) >> 32;
    v9 = v6 + 2;
  }
  else
  {
    v8 = 64 - v5;
    v10 = (__PAIR64__(v7, v6) + 1) >> 32;
    v9 = v6 + 1;
  }
  memset((char *)v234 + 1, 0, v8 - 9);
  *(_DWORD *)((char *)&v234[-2] + v8) = HIBYTE(v10)
                                      | (unsigned __int16)(BYTE2(v10) << 8)
                                      | (BYTE1(v10) << 16) & 0xFFFFFF
                                      | ((unsigned __int8)v10 << 24);
  v11 = (char *)&v234[-2] + v8;
  v11[5] = BYTE2(v9);
  v11[7] = v9;
  v11[6] = BYTE1(v9);
  v11[4] = HIBYTE(v9);
  sph_groestl256_0((__int64 *)a1, (char *)v234, v8);
  v12 = (int *)(a1 + 72);
  v13 = &v202;
  do
  {
    v14 = *v12;
    v12 += 4;
    v15 = *(v12 - 3);
    v16 = v13;
    v17 = *(v12 - 2);
    v13 += 4;
    v18 = *(v12 - 1);
    *v16 = v14;
    v16[1] = v15;
    v16[2] = v17;
    v16[3] = v18;
  }
  while ( v12 != (int *)(a1 + 136) );
  v218 = v202;
  v219 = v203;
  v220 = v204;
  v221 = v205;
  v82 = 0;
  v222 = v206;
  v223 = v207;
  v224 = v208;
  v225 = v209;
  v226 = v210;
  v227 = v211;
  v228 = v212;
  v229 = v213;
  v230 = v214;
  v231 = v215;
  v232 = v216;
  v233 = v217;
  v90 = v203;
  v19 = v207;
  v117 = v210;
  v20 = v204;
  v21 = v202;
  v22 = v206;
  v23 = v205;
  v137 = v211;
  v24 = v208;
  v25 = v209;
  v114 = v212;
  v140 = v213;
  v111 = v214;
  v124 = v215;
  v127 = v216;
  v143 = v217;
  do
  {
    v86 = v21 ^ v82;
    v96 = (v82 + 48) ^ v24;
    v105 = ((unsigned __int64)(v82 + 32) >> 32) ^ v19;
    v26 = v117 ^ (v82 + 64);
    v102 = v90 ^ HIDWORD(v82);
    v83 = ((unsigned __int64)(v82 + 48) >> 32) ^ v25;
    v94 = ((unsigned __int64)(v82 + 16) >> 32) ^ v23;
    v27 = v114 ^ (v82 + 80);
    v98 = v111 ^ (v82 + 96);
    v115 = v127 ^ (v82 + 112);
    v118 = v143 ^ ((unsigned __int64)(v82 + 112) >> 32);
    v91 = (v82 + 16) ^ v20;
    v28 = (v82 + 32) ^ v22;
    v109 = v26;
    v29 = ((unsigned __int64)(v82 + 80) >> 32) ^ v140;
    v100 = ((unsigned __int64)(v82 + 96) >> 32) ^ v124;
    v112 = v137 ^ ((unsigned __int64)(v82 + 64) >> 32);
    v168 = BYTE2(v27);
    v134 = &qword_17B6F8[HIBYTE(v26)];
    v153 = &qword_17B6F8[HIBYTE(v27)];
    v144 = HIBYTE(v100);
    v169 = &qword_17B6F8[HIBYTE(v98)];
    v178 = &qword_17B6F8[HIBYTE(v115)];
    v30 = (unsigned __int8)(v137 ^ ((unsigned __int64)(v82 + 64) >> 32));
    v179 = &qword_17B6F8[(v21 ^ (unsigned int)v82) >> 24];
    v194 = &qword_17B6F8[HIBYTE(v28)];
    v138 = HIBYTE(v29);
    v141 = &qword_17BF08[(unsigned __int8)(((unsigned __int64)(v82 + 80) >> 32) ^ v140)];
    v31 = &dword_17AF08[2 * BYTE2(v28)];
    v32 = &qword_17A708[BYTE1(v91)];
    v129 = &qword_17BF08[v30];
    v177 = *((_QWORD *)&unk_17C700 + BYTE1(v29));
    v192 = (unsigned __int8)((v82 + 32) ^ v22);
    v33 = &qword_17A708[BYTE1(v28)];
    v146 = BYTE2(v29);
    v34 = dword_179700[2 * (unsigned __int8)(v21 ^ v82) + 1]
        ^ ((unsigned __int64)(v82 + 1) >> 32)
        ^ dword_179F00[2 * HIBYTE(v118) + 1]
        ^ *((_DWORD *)v32 - 1);
    v35 = &dword_17AF08[2 * BYTE2(v96)];
    v36 = dword_179700[2 * (unsigned __int8)(v21 ^ v82)]
        ^ (v82 + 1)
        ^ dword_179F00[2 * HIBYTE(v118)]
        ^ *((_DWORD *)v32 - 2);
    v156 = &qword_17BF08[(unsigned __int8)(((unsigned __int64)(v82 + 96) >> 32) ^ v124)];
    v37 = BYTE2(v118);
    v38 = *(v31 - 2);
    v39 = *(v31 - 1);
    LOWORD(v31) = v102;
    v40 = dword_179700[2 * (unsigned __int8)v91] ^ (v82 + 17) ^ dword_179F00[2 * HIBYTE(v102)];
    v41 = v34 ^ v39;
    v42 = &qword_17B6F8[HIBYTE(v96)];
    v186 = BYTE2(v102);
    v43 = dword_179700[2 * (unsigned __int8)v91 + 1]
        ^ ((unsigned __int64)(v82 + 17) >> 32)
        ^ dword_179F00[2 * HIBYTE(v102) + 1];
    v199 = (unsigned __int8)v96;
    v103 = &qword_17A708[BYTE1(v96)];
    v150 = &dword_17AF08[2 * BYTE2(v109)];
    v196 = BYTE1(v118);
    v171 = &qword_17BF08[(unsigned __int8)v118];
    v198 = BYTE1(v31);
    v173 = &qword_17BF08[(unsigned __int8)v31];
    LOWORD(v31) = v27;
    v119 = (unsigned __int8)v109;
    v162 = &qword_17A708[BYTE1(v109)];
    v44 = *((_DWORD *)&unk_17C700 + 2 * BYTE1(v100));
    v45 = *((_DWORD *)&unk_17C700 + 2 * BYTE1(v100) + 1);
    v165 = &dword_17AF08[2 * v168];
    v97 = v36 ^ v38 ^ *((_DWORD *)v42 + 2) ^ *((_DWORD *)v129 - 2) ^ v177 ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v100));
    v101 = v41
         ^ *((_DWORD *)v42 + 3)
         ^ *((_DWORD *)v129 - 1)
         ^ HIDWORD(v177)
         ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v100) + 1);
    v130 = (unsigned __int8)v31;
    v46 = *((_QWORD *)v35 - 1);
    LODWORD(v177) = &qword_17A708[BYTE1(v31)];
    v47 = v43 ^ *((_DWORD *)v33 - 1) ^ HIDWORD(v46) ^ *((_DWORD *)v134 + 3);
    HIDWORD(v177) = &dword_17AF08[2 * BYTE2(v98)];
    v48 = *((_DWORD *)&unk_17CF00 + 2 * v186);
    v184 = &qword_17BF08[(unsigned __int8)v94];
    v110 = v40
         ^ *((_DWORD *)v33 - 2)
         ^ v46
         ^ *((_DWORD *)v134 + 2)
         ^ *((_DWORD *)v141 - 2)
         ^ v44
         ^ *((_DWORD *)&unk_17CF00 + 2 * v37);
    v49 = dword_179F00[2 * HIBYTE(v105)];
    v50 = dword_179F00[2 * HIBYTE(v105) + 1];
    v159 = &qword_17A708[BYTE1(v98)];
    v51 = *((_DWORD *)&unk_17CF00 + 2 * v186 + 1);
    v122 = BYTE2(v105);
    v135 = (unsigned __int8)v98;
    v182 = &dword_17AF08[2 * BYTE2(v115)];
    v125 = BYTE1(v105);
    v189 = &qword_17BF08[(unsigned __int8)v105];
    v187 = &dword_17AF08[2 * BYTE2(v86)];
    v190 = &qword_17A708[BYTE1(v86)];
    v106 = &qword_17A708[BYTE1(v115)];
    v87 = v47 ^ *((_DWORD *)v141 - 1) ^ v45 ^ *((_DWORD *)&unk_17CF00 + 2 * v37 + 1);
    v52 = dword_179700[2 * v192]
        ^ v48
        ^ (v82 + 33)
        ^ dword_179F00[2 * HIBYTE(v94)]
        ^ *((_DWORD *)v103 - 2)
        ^ *(v150 - 2)
        ^ *((_DWORD *)v153 + 2)
        ^ *((_DWORD *)v156 - 2);
    v53 = v51
        ^ dword_179700[2 * v192 + 1]
        ^ ((unsigned __int64)(v82 + 33) >> 32)
        ^ dword_179F00[2 * HIBYTE(v94) + 1]
        ^ *((_DWORD *)v103 - 1)
        ^ *(v150 - 1)
        ^ *((_DWORD *)v153 + 3)
        ^ *((_DWORD *)v156 - 1)
        ^ *((_DWORD *)&unk_17C700 + 2 * v196 + 1);
    v54 = (_DWORD *)((char *)&unk_17C700 + 8 * BYTE1(v94));
    v157 = &dword_179700[2 * (unsigned __int8)v98];
    v116 = *((_DWORD *)&unk_17C700 + 2 * v196) ^ v52;
    v104 = *((_DWORD *)v171 - 1)
         ^ *((_DWORD *)&unk_17C700 + 2 * v198 + 1)
         ^ dword_179700[2 * v199 + 1]
         ^ ((unsigned __int64)(v82 + 49) >> 32)
         ^ v50
         ^ *((_DWORD *)v162 - 1)
         ^ *(v165 - 1)
         ^ *((_DWORD *)v169 + 3)
         ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v94) + 1);
    v99 = *((_DWORD *)v162 - 2)
        ^ dword_179700[2 * v199]
        ^ *((_DWORD *)&unk_17C700 + 2 * v198)
        ^ (v82 + 49)
        ^ v49
        ^ *(v165 - 2)
        ^ *((_DWORD *)v169 + 2)
        ^ *((_DWORD *)v171 - 2)
        ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v94));
    HIDWORD(v46) = dword_179700[2 * v119]
                 ^ *((_DWORD *)v173 - 2)
                 ^ (v82 + 65)
                 ^ dword_179F00[2 * HIBYTE(v83)]
                 ^ *(_DWORD *)(v177 - 8);
    v55 = ((unsigned __int64)(v82 + 65) >> 32)
        ^ *((_DWORD *)v173 - 1)
        ^ dword_179700[2 * v119 + 1]
        ^ dword_179F00[2 * HIBYTE(v83) + 1]
        ^ *(_DWORD *)(v177 - 4)
        ^ *(_DWORD *)(HIDWORD(v177) - 4);
    v174 = *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v83));
    v120 = &dword_17AF08[2 * BYTE2(v91)];
    v92 = &qword_17B6F8[HIBYTE(v91)];
    v132 = dword_179F00[2 * HIBYTE(v112) + 1]
         ^ *((_DWORD *)v179 + 3)
         ^ dword_179700[2 * v130 + 1]
         ^ (__CFADD__((_DWORD)v82, 81) + HIDWORD(v82))
         ^ *((_DWORD *)v159 - 1);
    v131 = *((_DWORD *)v179 + 2)
         ^ dword_179700[2 * v130]
         ^ (v82 + 81)
         ^ dword_179F00[2 * HIBYTE(v112)]
         ^ *((_DWORD *)v159 - 2);
    v56 = &qword_17BF08[(unsigned __int8)v83];
    v57 = (_DWORD *)((char *)&unk_17C700 + 8 * BYTE1(v112));
    v58 = dword_179700[2 * (unsigned __int8)(v127 ^ (v82 + 112)) + 1]
        ^ *((_DWORD *)v190 - 1)
        ^ ((unsigned __int64)(v82 + 113) >> 32)
        ^ dword_179F00[2 * v144 + 1]
        ^ *(v120 - 1);
    v59 = *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v112))
        ^ dword_179700[2 * v135]
        ^ *(v187 - 2)
        ^ (v82 + 97)
        ^ dword_179F00[2 * v138]
        ^ *((_DWORD *)v106 - 2)
        ^ *((_DWORD *)v92 + 2)
        ^ *((_DWORD *)v189 - 2)
        ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v83));
    HIDWORD(v46) ^= *(_DWORD *)(HIDWORD(v177) - 8) ^ *((_DWORD *)v178 + 2) ^ *v54 ^ *((_DWORD *)&unk_17CF00 + 2 * v122);
    v113 = *(v187 - 1)
         ^ v157[1]
         ^ ((unsigned __int64)(v82 + 97) >> 32)
         ^ dword_179F00[2 * v138 + 1]
         ^ *((_DWORD *)v106 - 1)
         ^ *((_DWORD *)v92 + 3)
         ^ *((_DWORD *)v189 - 1)
         ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v83) + 1)
         ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v112) + 1);
    v84 = v132
        ^ *(v182 - 1)
        ^ *((_DWORD *)v184 - 1)
        ^ *((_DWORD *)&unk_17C700 + 2 * v125 + 1)
        ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v83) + 1);
    v121 = dword_179700[2 * (unsigned __int8)(v127 ^ (v82 + 112))]
         ^ *((_DWORD *)v190 - 2)
         ^ (v82 + 113)
         ^ dword_179F00[2 * v144]
         ^ *(v120 - 2)
         ^ *((_DWORD *)v194 + 2)
         ^ *((_DWORD *)v56 - 2)
         ^ *v57
         ^ *((_DWORD *)&unk_17CF00 + 2 * v146);
    v128 = HIBYTE(v113);
    v107 = v55 ^ *((_DWORD *)v178 + 3) ^ v54[1] ^ *((_DWORD *)&unk_17CF00 + 2 * v122 + 1);
    v60 = v131 ^ *(v182 - 2) ^ *((_DWORD *)v184 - 2) ^ *((_DWORD *)&unk_17C700 + 2 * v125) ^ v174;
    v126 = HIBYTE(v84);
    v123 = v58 ^ *((_DWORD *)v194 + 3) ^ *((_DWORD *)v56 - 1) ^ v57[1] ^ *((_DWORD *)&unk_17CF00 + 2 * v146 + 1);
    v93 = HIDWORD(v46);
    v133 = HIBYTE(v87);
    v145 = &qword_17B6F8[HIBYTE(v97)];
    v154 = &qword_17B6F8[HIBYTE(v110)];
    v142 = &qword_17B6F8[HIBYTE(v121)];
    v158 = &dword_179F00[2 * HIBYTE(v84)];
    v172 = &qword_17B6F8[HIBYTE(v116)];
    v181 = &qword_17B6F8[HIBYTE(HIDWORD(v46))];
    LODWORD(v177) = &qword_17B6F8[HIBYTE(v99)];
    v185 = &dword_179F00[2 * HIBYTE(v87)];
    v188 = &qword_17B6F8[HIBYTE(v60)];
    v61 = &qword_17BF08[(unsigned __int8)v101];
    v139 = &qword_17A708[BYTE1(v60)];
    v62 = BYTE4(v46);
    HIDWORD(v46) = *((_DWORD *)v61 - 2);
    v63 = *((_DWORD *)v61 - 1);
    v64 = dword_179700[2 * v62];
    v65 = dword_179700[2 * v62 + 1] ^ v63;
    v66 = &dword_17AF08[2 * BYTE2(v59)];
    v67 = v64 ^ HIDWORD(v46) ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v87)) ^ dword_179F00[2 * HIBYTE(v104)];
    v68 = v65 ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v87) + 1);
    v193 = &qword_17B6F8[HIBYTE(v59)];
    v69 = (unsigned __int8)v60;
    v191 = &dword_17AF08[2 * BYTE2(v60)];
    v82 += 2;
    v70 = &qword_17BF08[(unsigned __int8)v87];
    v136 = BYTE2(v87);
    v147 = &qword_17A708[BYTE1(v59)];
    v88 = (unsigned __int8)v59;
    v163 = &qword_17BF08[(unsigned __int8)v53];
    v149 = &dword_17AF08[2 * BYTE2(v121)];
    v151 = &dword_17AF08[2 * BYTE2(v97)];
    v197 = (unsigned __int8)v121;
    v160 = &qword_17A708[BYTE1(v121)];
    v175 = &qword_17BF08[(unsigned __int8)v104];
    v195 = BYTE2(v107);
    v166 = &qword_17A708[BYTE1(v97)];
    v117 = *((_DWORD *)v142 + 2) ^ v67 ^ *((_DWORD *)v139 - 2) ^ *(v66 - 2) ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v53));
    v137 = *((_DWORD *)v142 + 3)
         ^ dword_179F00[2 * HIBYTE(v104) + 1]
         ^ v68
         ^ *((_DWORD *)v139 - 1)
         ^ *(v66 - 1)
         ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v53) + 1);
    v71 = &dword_17AF08[2 * BYTE2(v110)];
    LODWORD(v46) = BYTE1(v107);
    HIDWORD(v46) = dword_179700[2 * v69]
                 ^ *((_DWORD *)v145 + 2)
                 ^ *((_DWORD *)v70 - 2)
                 ^ dword_179F00[2 * HIBYTE(v107)]
                 ^ *((_DWORD *)v147 - 2);
    HIDWORD(v177) = &qword_17BF08[(unsigned __int8)v107];
    v72 = BYTE2(v84);
    v140 = *((_DWORD *)v147 - 1)
         ^ dword_179700[2 * v69 + 1]
         ^ *((_DWORD *)v145 + 3)
         ^ *((_DWORD *)v70 - 1)
         ^ dword_179F00[2 * HIBYTE(v107) + 1]
         ^ *(v149 - 1)
         ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v53) + 1)
         ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v104) + 1);
    v148 = &dword_17AF08[2 * BYTE2(v116)];
    LOBYTE(v69) = v84;
    v85 = BYTE1(v84);
    v183 = &qword_17BF08[(unsigned __int8)v69];
    v95 = BYTE2(v113);
    v108 = (unsigned __int8)v116;
    v73 = &qword_17A708[BYTE1(v116)];
    v114 = HIDWORD(v46)
         ^ *(v149 - 2)
         ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v53))
         ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v104));
    v180 = v73;
    v74 = dword_179F00[2 * HIBYTE(v113) + 1];
    v75 = dword_179F00[2 * v126] ^ dword_179700[2 * v88] ^ *(v151 - 2) ^ *((_DWORD *)v154 + 2);
    v76 = v158[1] ^ *(v151 - 1) ^ dword_179700[2 * v88 + 1] ^ *((_DWORD *)v154 + 3) ^ *((_DWORD *)v160 - 1);
    v152 = &dword_17AF08[2 * BYTE2(v99)];
    v89 = BYTE1(v113);
    v170 = &qword_17BF08[(unsigned __int8)v113];
    v77 = *((_DWORD *)&unk_17C700 + 2 * BYTE1(v104)) ^ v75 ^ *((_DWORD *)v160 - 2) ^ *((_DWORD *)v163 - 2);
    v161 = &qword_17A708[BYTE1(v99)];
    v111 = v77 ^ *((_DWORD *)&unk_17CF00 + 2 * v195);
    v124 = *((_DWORD *)&unk_17C700 + 2 * BYTE1(v104) + 1)
         ^ v76
         ^ *((_DWORD *)v163 - 1)
         ^ *((_DWORD *)&unk_17CF00 + 2 * v195 + 1);
    v127 = *((_DWORD *)v175 - 2)
         ^ *((_DWORD *)v172 + 2)
         ^ dword_179F00[2 * v128]
         ^ dword_179700[2 * v197]
         ^ *((_DWORD *)v166 - 2)
         ^ *(v71 - 2)
         ^ *((_DWORD *)&unk_17C700 + 2 * v46)
         ^ *((_DWORD *)&unk_17CF00 + 2 * v72);
    v78 = &qword_17A708[BYTE1(v110)];
    v155 = (_DWORD *)((char *)&unk_17CF00 + 8 * BYTE2(v101));
    v143 = *((_DWORD *)&unk_17C700 + 2 * v46 + 1)
         ^ *((_DWORD *)v172 + 3)
         ^ v74
         ^ *(v71 - 1)
         ^ dword_179700[2 * v197 + 1]
         ^ *((_DWORD *)v166 - 1)
         ^ *((_DWORD *)v175 - 1)
         ^ *((_DWORD *)&unk_17CF00 + 2 * v72 + 1);
    v164 = (_DWORD *)((char *)&unk_17C700 + 8 * BYTE1(v101));
    v167 = &dword_179700[2 * (unsigned __int8)v99];
    v79 = dword_179F00[2 * HIBYTE(v123)] ^ *((_DWORD *)v78 - 2) ^ dword_179700[2 * (unsigned __int8)v97] ^ *(v148 - 2);
    v176 = *((_QWORD *)&unk_17CF00 + BYTE2(v123));
    HIDWORD(v46) = v93;
    v90 = dword_179F00[2 * HIBYTE(v123) + 1]
        ^ *((_DWORD *)v78 - 1)
        ^ dword_179700[2 * (unsigned __int8)v97 + 1]
        ^ *(v148 - 1)
        ^ *(_DWORD *)(v177 + 12)
        ^ *(_DWORD *)(HIDWORD(v177) - 4)
        ^ *((_DWORD *)&unk_17C700 + 2 * v85 + 1)
        ^ *((_DWORD *)&unk_17CF00 + 2 * v95 + 1);
    v80 = &dword_17AF08[2 * BYTE6(v46)];
    HIDWORD(v46) = &qword_17A708[BYTE5(v46)];
    v23 = dword_179700[2 * (unsigned __int8)v110 + 1]
        ^ dword_179F00[2 * HIBYTE(v101) + 1]
        ^ *((_DWORD *)v180 - 1)
        ^ *(v152 - 1)
        ^ *((_DWORD *)v181 + 3)
        ^ *((_DWORD *)v183 - 1)
        ^ *((_DWORD *)&unk_17C700 + 2 * v89 + 1)
        ^ HIDWORD(v176);
    v19 = *((_DWORD *)&unk_17C700 + 2 * BYTE1(v123) + 1)
        ^ v155[1]
        ^ dword_179700[2 * v108 + 1]
        ^ v185[1]
        ^ *((_DWORD *)v161 - 1)
        ^ *(v80 - 1)
        ^ *((_DWORD *)v188 + 3)
        ^ *((_DWORD *)v170 - 1);
    v22 = *((_DWORD *)&unk_17C700 + 2 * BYTE1(v123))
        ^ *v155
        ^ dword_179700[2 * v108]
        ^ dword_179F00[2 * v133]
        ^ *((_DWORD *)v161 - 2)
        ^ *(v80 - 2)
        ^ *((_DWORD *)v188 + 2)
        ^ *((_DWORD *)v170 - 2);
    v25 = v164[1]
        ^ v167[1]
        ^ *((_DWORD *)&unk_17CF00 + 2 * v136 + 1)
        ^ dword_179F00[2 * HIBYTE(v53) + 1]
        ^ *(_DWORD *)(HIDWORD(v46) - 4)
        ^ *(v191 - 1)
        ^ *((_DWORD *)v193 + 3)
        ^ HIDWORD(qword_17BF08[(unsigned __int8)v123 - 1]);
    v21 = v79
        ^ *(_DWORD *)(v177 + 8)
        ^ *(_DWORD *)(HIDWORD(v177) - 8)
        ^ *((_DWORD *)&unk_17C700 + 2 * v85)
        ^ *((_DWORD *)&unk_17CF00 + 2 * v95);
    v20 = *(v152 - 2)
        ^ dword_179700[2 * (unsigned __int8)v110]
        ^ dword_179F00[2 * HIBYTE(v101)]
        ^ *((_DWORD *)v180 - 2)
        ^ *((_DWORD *)v181 + 2)
        ^ *((_DWORD *)v183 - 2)
        ^ *((_DWORD *)&unk_17C700 + 2 * v89)
        ^ v176;
    v24 = *v164
        ^ *v167
        ^ *((_DWORD *)&unk_17CF00 + 2 * v136)
        ^ dword_179F00[2 * HIBYTE(v53)]
        ^ *(_DWORD *)(HIDWORD(v46) - 8)
        ^ *(v191 - 2)
        ^ *((_DWORD *)v193 + 2)
        ^ LODWORD(qword_17BF08[(unsigned __int8)v123 - 1]);
  }
  while ( v82 != 10 );
  v234[0] = (unsigned __int8)(v117 ^ v210)
          | (unsigned __int16)((unsigned __int8)((unsigned __int16)(v117 ^ v210) >> 8) << 8)
          | ((unsigned __int8)((v117 ^ (unsigned int)v210) >> 16) << 16) & 0xFFFFFF
          | ((v117 ^ (unsigned int)v210) >> 24 << 24);
  v234[6] = (unsigned __int8)(v127 ^ v216)
          | (unsigned __int16)((unsigned __int8)((unsigned __int16)(v127 ^ v216) >> 8) << 8)
          | ((unsigned __int8)((v127 ^ (unsigned int)v216) >> 16) << 16) & 0xFFFFFF
          | ((v127 ^ (unsigned int)v216) >> 24 << 24);
  v234[4] = (unsigned __int8)(v111 ^ v214)
          | (unsigned __int16)((unsigned __int8)((unsigned __int16)(v111 ^ v214) >> 8) << 8)
          | ((unsigned __int8)((v111 ^ (unsigned int)v214) >> 16) << 16) & 0xFFFFFF
          | ((v111 ^ (unsigned int)v214) >> 24 << 24);
  v234[2] = (unsigned __int8)(v114 ^ v212)
          | (unsigned __int16)((unsigned __int8)((unsigned __int16)(v114 ^ v212) >> 8) << 8)
          | ((unsigned __int8)((v114 ^ (unsigned int)v212) >> 16) << 16) & 0xFFFFFF
          | ((v114 ^ (unsigned int)v212) >> 24 << 24);
  v234[1] = (unsigned __int8)(v137 ^ v211)
          | (unsigned __int16)((unsigned __int8)((unsigned __int16)(v137 ^ v211) >> 8) << 8)
          | ((unsigned __int8)((v137 ^ (unsigned int)v211) >> 16) << 16) & 0xFFFFFF
          | ((v137 ^ (unsigned int)v211) >> 24 << 24);
  v234[3] = (unsigned __int8)(v140 ^ v213)
          | (unsigned __int16)((unsigned __int8)((unsigned __int16)(v140 ^ v213) >> 8) << 8)
          | ((unsigned __int8)((v140 ^ (unsigned int)v213) >> 16) << 16) & 0xFFFFFF
          | ((v140 ^ (unsigned int)v213) >> 24 << 24);
  v234[5] = (unsigned __int8)(v124 ^ v215)
          | (unsigned __int16)((unsigned __int8)((unsigned __int16)(v124 ^ v215) >> 8) << 8)
          | ((unsigned __int8)((v124 ^ (unsigned int)v215) >> 16) << 16) & 0xFFFFFF
          | ((v124 ^ (unsigned int)v215) >> 24 << 24);
  v234[7] = (unsigned __int8)(v143 ^ v217)
          | (unsigned __int16)((unsigned __int8)((unsigned __int16)(v143 ^ v217) >> 8) << 8)
          | ((unsigned __int8)((v143 ^ (unsigned int)v217) >> 16) << 16) & 0xFFFFFF
          | ((v143 ^ (unsigned int)v217) >> 24 << 24);
  memcpy(a4, (char *)v234 + 32 - n, n);
  *(_DWORD *)(a1 + 64) = 0;
  memset((void *)(a1 + 72), 0, 0x38u);
  *(_DWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 132) = (n << 11) & 0xFF0000 | (n << 27);
  return 0;
}
