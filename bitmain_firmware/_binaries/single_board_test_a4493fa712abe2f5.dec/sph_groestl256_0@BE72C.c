void *__fastcall sph_groestl256_0(__int64 *a1, char *a2, size_t a3)
{
  int v3; // r8
  size_t v4; // r4
  __int64 *v5; // r7
  __int64 *v6; // r5
  __int64 *v7; // r12
  int v8; // r0
  int v9; // r1
  __int64 *v10; // r6
  int v11; // r2
  int v12; // r3
  size_t v13; // r3
  char *v14; // r0
  char *v15; // r1
  unsigned int v16; // r11
  unsigned int v17; // r9
  unsigned int v18; // lr
  unsigned int v19; // r0
  __int64 v20; // kr00_8
  int v21; // r2
  int v22; // r3
  __int64 v23; // kr40_8
  int v24; // r1
  int v25; // r12
  int v26; // r10
  int v27; // r0
  int v28; // r1
  int v29; // r2
  int v30; // r2
  int v31; // r4
  int v32; // r1
  unsigned int v33; // r11
  int v34; // r6
  unsigned int v35; // lr
  int v36; // r9
  int v37; // r7
  int v38; // r5
  int v39; // r3
  int v40; // r10
  int v41; // r1
  unsigned int v42; // r0
  int v43; // lr
  int v44; // r4
  _DWORD *v45; // r12
  int v46; // r7
  int v47; // r0
  int v48; // r11
  int v49; // r1
  unsigned int v50; // r4
  unsigned int v51; // r9
  unsigned int v52; // lr
  unsigned int v53; // r5
  unsigned int v54; // r11
  _QWORD *v55; // r7
  _QWORD *v56; // r1
  _DWORD *v57; // r0
  int v58; // r3
  int v59; // r2
  int v60; // r6
  int v61; // r7
  int v62; // r0
  int v63; // r10
  int v64; // r1
  int v65; // r1
  int v66; // r2
  int v67; // r0
  int v68; // r3
  int v69; // r9
  unsigned int v70; // r6
  unsigned int v71; // r1
  _QWORD *v72; // r2
  int v73; // r0
  int v74; // r3
  int v75; // lr
  unsigned int v76; // r12
  __int64 v77; // r2
  int v78; // r12
  int v79; // lr
  __int64 v80; // r2
  __int64 v81; // kr50_8
  int v82; // r0
  int v83; // lr
  int v84; // r5
  __int64 v85; // kr58_8
  int v86; // r6
  int v87; // r10
  unsigned int v88; // r12
  int v89; // r4
  int v90; // r5
  int v91; // r0
  int v92; // r1
  int v93; // lr
  int v94; // r6
  int v95; // r12
  int v96; // r1
  unsigned int v97; // kr3C_4
  __int64 *v98; // r4
  __int64 *v99; // r6
  void *result; // r0
  int v101; // r1
  int v102; // r2
  int v103; // r3
  size_t v105; // r5
  unsigned __int64 v106; // [sp+8h] [bp-1C4h]
  __int64 v107; // [sp+8h] [bp-1C4h]
  unsigned int v108; // [sp+10h] [bp-1BCh]
  _DWORD *v109; // [sp+10h] [bp-1BCh]
  unsigned int v110; // [sp+10h] [bp-1BCh]
  unsigned int v111; // [sp+14h] [bp-1B8h]
  int v112; // [sp+14h] [bp-1B8h]
  unsigned int v113; // [sp+14h] [bp-1B8h]
  int v114; // [sp+14h] [bp-1B8h]
  unsigned int v115; // [sp+18h] [bp-1B4h]
  int v116; // [sp+18h] [bp-1B4h]
  int v117; // [sp+18h] [bp-1B4h]
  unsigned int v118; // [sp+18h] [bp-1B4h]
  int v119; // [sp+18h] [bp-1B4h]
  unsigned int v120; // [sp+18h] [bp-1B4h]
  unsigned int v121; // [sp+1Ch] [bp-1B0h]
  unsigned int v122; // [sp+1Ch] [bp-1B0h]
  unsigned int v123; // [sp+1Ch] [bp-1B0h]
  unsigned int v124; // [sp+1Ch] [bp-1B0h]
  unsigned int v125; // [sp+20h] [bp-1ACh]
  unsigned int v126; // [sp+20h] [bp-1ACh]
  unsigned int v127; // [sp+20h] [bp-1ACh]
  int v128; // [sp+20h] [bp-1ACh]
  unsigned int v129; // [sp+20h] [bp-1ACh]
  unsigned int v130; // [sp+24h] [bp-1A8h]
  int v131; // [sp+24h] [bp-1A8h]
  unsigned int v132; // [sp+24h] [bp-1A8h]
  unsigned int v133; // [sp+24h] [bp-1A8h]
  unsigned int v134; // [sp+28h] [bp-1A4h]
  int v135; // [sp+28h] [bp-1A4h]
  unsigned int v136; // [sp+28h] [bp-1A4h]
  unsigned int v137; // [sp+28h] [bp-1A4h]
  unsigned int v138; // [sp+2Ch] [bp-1A0h]
  unsigned int v139; // [sp+2Ch] [bp-1A0h]
  unsigned int v140; // [sp+2Ch] [bp-1A0h]
  unsigned int v141; // [sp+2Ch] [bp-1A0h]
  unsigned int v142; // [sp+2Ch] [bp-1A0h]
  unsigned int v143; // [sp+30h] [bp-19Ch]
  int v144; // [sp+30h] [bp-19Ch]
  unsigned int v145; // [sp+30h] [bp-19Ch]
  unsigned int v146; // [sp+30h] [bp-19Ch]
  unsigned int v147; // [sp+30h] [bp-19Ch]
  int v148; // [sp+30h] [bp-19Ch]
  int v149; // [sp+34h] [bp-198h]
  unsigned int v150; // [sp+34h] [bp-198h]
  unsigned int v151; // [sp+34h] [bp-198h]
  unsigned int v152; // [sp+34h] [bp-198h]
  unsigned int v153; // [sp+38h] [bp-194h]
  int v154; // [sp+38h] [bp-194h]
  _QWORD *v155; // [sp+38h] [bp-194h]
  unsigned int v156; // [sp+38h] [bp-194h]
  unsigned int v157; // [sp+38h] [bp-194h]
  unsigned int v158; // [sp+3Ch] [bp-190h]
  int v159; // [sp+3Ch] [bp-190h]
  int v160; // [sp+3Ch] [bp-190h]
  unsigned int v161; // [sp+3Ch] [bp-190h]
  _QWORD *v162; // [sp+3Ch] [bp-190h]
  int v163; // [sp+40h] [bp-18Ch]
  unsigned int v164; // [sp+40h] [bp-18Ch]
  unsigned int v165; // [sp+40h] [bp-18Ch]
  size_t na; // [sp+44h] [bp-188h]
  unsigned int v168; // [sp+48h] [bp-184h]
  _QWORD *v169; // [sp+48h] [bp-184h]
  int v170; // [sp+48h] [bp-184h]
  unsigned int v171; // [sp+4Ch] [bp-180h]
  __int16 v172; // [sp+4Ch] [bp-180h]
  unsigned int v173; // [sp+4Ch] [bp-180h]
  unsigned int v174; // [sp+50h] [bp-17Ch]
  unsigned int v175; // [sp+50h] [bp-17Ch]
  unsigned int v176; // [sp+50h] [bp-17Ch]
  unsigned int v177; // [sp+54h] [bp-178h]
  unsigned int v178; // [sp+54h] [bp-178h]
  int v179; // [sp+58h] [bp-174h]
  int v180; // [sp+58h] [bp-174h]
  int v181; // [sp+58h] [bp-174h]
  unsigned int v182; // [sp+5Ch] [bp-170h]
  unsigned int v183; // [sp+5Ch] [bp-170h]
  int v184; // [sp+60h] [bp-16Ch]
  int v185; // [sp+60h] [bp-16Ch]
  unsigned int v186; // [sp+60h] [bp-16Ch]
  int v187; // [sp+64h] [bp-168h]
  int v188; // [sp+64h] [bp-168h]
  int v189; // [sp+68h] [bp-164h]
  unsigned int v190; // [sp+68h] [bp-164h]
  __int64 v191; // [sp+6Ch] [bp-160h]
  int v192; // [sp+6Ch] [bp-160h]
  int v193; // [sp+6Ch] [bp-160h]
  int v194; // [sp+70h] [bp-15Ch]
  int v195; // [sp+74h] [bp-158h]
  unsigned int v196; // [sp+74h] [bp-158h]
  int v197; // [sp+74h] [bp-158h]
  int v198; // [sp+78h] [bp-154h]
  int v199; // [sp+78h] [bp-154h]
  int v200; // [sp+78h] [bp-154h]
  int v201; // [sp+7Ch] [bp-150h]
  _QWORD *v202; // [sp+7Ch] [bp-150h]
  int v203; // [sp+7Ch] [bp-150h]
  int v204; // [sp+7Ch] [bp-150h]
  _QWORD *v205; // [sp+7Ch] [bp-150h]
  __int64 v206; // [sp+80h] [bp-14Ch]
  char *v207; // [sp+80h] [bp-14Ch]
  char *v208; // [sp+84h] [bp-148h]
  int v209; // [sp+84h] [bp-148h]
  __int64 v210; // [sp+88h] [bp-144h]
  _QWORD *v211; // [sp+88h] [bp-144h]
  int v212; // [sp+88h] [bp-144h]
  int v213; // [sp+8Ch] [bp-140h]
  __int64 v214; // [sp+90h] [bp-13Ch]
  _QWORD *v215; // [sp+90h] [bp-13Ch]
  _QWORD *v216; // [sp+94h] [bp-138h]
  __int64 v217; // [sp+98h] [bp-134h]
  _QWORD *v218; // [sp+98h] [bp-134h]
  _QWORD *v219; // [sp+9Ch] [bp-130h]
  __int64 v220; // [sp+A0h] [bp-12Ch]
  _QWORD *v221; // [sp+A0h] [bp-12Ch]
  char *v222; // [sp+A0h] [bp-12Ch]
  __int64 v223; // [sp+A8h] [bp-124h]
  _QWORD *v224; // [sp+A8h] [bp-124h]
  __int64 v225; // [sp+B0h] [bp-11Ch]
  int v226; // [sp+B0h] [bp-11Ch]
  int v227; // [sp+B0h] [bp-11Ch]
  __int64 v228; // [sp+B8h] [bp-114h]
  unsigned int v229; // [sp+B8h] [bp-114h]
  _QWORD *v230; // [sp+B8h] [bp-114h]
  unsigned int v231; // [sp+BCh] [bp-110h]
  __int64 v232; // [sp+C0h] [bp-10Ch]
  unsigned int v233; // [sp+C0h] [bp-10Ch]
  int v234; // [sp+C4h] [bp-108h]
  __int64 v235; // [sp+C8h] [bp-104h]
  int v236; // [sp+CCh] [bp-100h]
  __int64 v237; // [sp+D0h] [bp-FCh]
  char *src; // [sp+DCh] [bp-F0h]
  int v240; // [sp+E0h] [bp-ECh]
  _QWORD *v241; // [sp+E0h] [bp-ECh]
  int v242; // [sp+E0h] [bp-ECh]
  int v243; // [sp+E0h] [bp-ECh]
  int v244; // [sp+E4h] [bp-E8h]
  int v245; // [sp+E4h] [bp-E8h]
  int v246; // [sp+E4h] [bp-E8h]
  unsigned int v247; // [sp+E4h] [bp-E8h]
  int v248; // [sp+E4h] [bp-E8h]
  int v249; // [sp+E8h] [bp-E4h]
  int v250; // [sp+E8h] [bp-E4h]
  int v251; // [sp+ECh] [bp-E0h]
  int v252; // [sp+ECh] [bp-E0h]
  _QWORD *v253; // [sp+F0h] [bp-DCh]
  int v254; // [sp+F0h] [bp-DCh]
  int v255; // [sp+F4h] [bp-D8h]
  int v256; // [sp+F4h] [bp-D8h]
  int v257; // [sp+F4h] [bp-D8h]
  int v258; // [sp+F8h] [bp-D4h]
  unsigned int v259; // [sp+F8h] [bp-D4h]
  unsigned int v260; // [sp+FCh] [bp-D0h]
  int v261; // [sp+100h] [bp-CCh]
  int v262; // [sp+100h] [bp-CCh]
  int v263; // [sp+104h] [bp-C8h]
  unsigned int v264; // [sp+104h] [bp-C8h]
  unsigned int v265; // [sp+104h] [bp-C8h]
  int v266; // [sp+108h] [bp-C4h]
  unsigned int v267; // [sp+108h] [bp-C4h]
  int v268; // [sp+10Ch] [bp-C0h]
  int v269; // [sp+10Ch] [bp-C0h]
  int v270; // [sp+110h] [bp-BCh]
  int v271; // [sp+110h] [bp-BCh]
  int v272; // [sp+110h] [bp-BCh]
  unsigned int v273; // [sp+110h] [bp-BCh]
  int v274; // [sp+114h] [bp-B8h]
  unsigned int v275; // [sp+114h] [bp-B8h]
  int v276; // [sp+114h] [bp-B8h]
  int v277; // [sp+118h] [bp-B4h]
  int v278; // [sp+118h] [bp-B4h]
  int v279; // [sp+118h] [bp-B4h]
  unsigned int v280; // [sp+11Ch] [bp-B0h]
  unsigned int v281; // [sp+124h] [bp-A8h]
  int v282; // [sp+128h] [bp-A4h]
  unsigned int v283; // [sp+12Ch] [bp-A0h]
  int v284; // [sp+170h] [bp-5Ch]
  __int64 *v285; // [sp+184h] [bp-48h]
  __int64 v286; // [sp+188h] [bp-44h] BYREF
  __int64 v287; // [sp+190h] [bp-3Ch]
  __int64 v288; // [sp+198h] [bp-34h]
  int v289; // [sp+1A0h] [bp-2Ch]
  int v290; // [sp+1A4h] [bp-28h]
  __int64 v291; // [sp+1A8h] [bp-24h]
  int v292; // [sp+1B0h] [bp-1Ch]
  int v293; // [sp+1B4h] [bp-18h]
  __int64 v294; // [sp+1B8h] [bp-14h]
  __int64 v295; // [sp+1C0h] [bp-Ch]
  char v296; // [sp+1C8h] [bp-4h] BYREF

  v3 = *((_DWORD *)a1 + 16);
  v4 = 64 - v3;
  src = a2;
  if ( 64 - v3 > a3 )
  {
    v105 = a3 + v3;
    result = memcpy((char *)a1 + v3, a2, a3);
    *((_DWORD *)a1 + 16) = v105;
  }
  else
  {
    v5 = &v286;
    v6 = a1 + 9;
    v7 = a1 + 17;
    v285 = a1 + 9;
    do
    {
      v8 = *(_DWORD *)v6;
      v6 += 2;
      v9 = *((_DWORD *)v6 - 3);
      v10 = v5;
      v11 = *((_DWORD *)v6 - 2);
      v5 += 2;
      v12 = *((_DWORD *)v6 - 1);
      *(_DWORD *)v10 = v8;
      *((_DWORD *)v10 + 1) = v9;
      *((_DWORD *)v10 + 2) = v11;
      *((_DWORD *)v10 + 3) = v12;
    }
    while ( v6 != v7 );
    if ( a3 )
    {
      v13 = a3;
      while ( 1 )
      {
        if ( v4 >= v13 )
          v4 = v13;
        na = v13 - v4;
        v14 = (char *)a1 + v3;
        v15 = src;
        v3 += v4;
        src += v4;
        memcpy(v14, v15, v4);
        if ( v3 == 64 )
        {
          v106 = 0;
          v214 = *a1;
          v237 = *a1 ^ v286;
          v217 = a1[1];
          v235 = v217 ^ v287;
          v220 = a1[2];
          v223 = a1[3];
          v232 = v220 ^ v288;
          v189 = v223 ^ v289;
          v198 = HIDWORD(v223) ^ v290;
          LODWORD(v191) = *((_DWORD *)a1 + 8) ^ v291;
          v225 = a1[4];
          HIDWORD(v191) = HIDWORD(v225) ^ HIDWORD(v291);
          v284 = v293;
          v195 = *((_DWORD *)a1 + 10) ^ v292;
          v228 = a1[5];
          v201 = HIDWORD(v228) ^ v293;
          v206 = v294 ^ a1[6];
          v210 = a1[7] ^ v295;
          do
          {
            v16 = ((v106 + 16) >> 32) ^ HIDWORD(v235);
            v121 = ((v106 + 32) >> 32) ^ HIDWORD(v232);
            v125 = (v106 + 48) ^ v189;
            v130 = ((v106 + 64) >> 32) ^ HIDWORD(v191);
            v138 = v206 ^ (v106 + 96);
            v17 = (v106 + 112) ^ v210;
            v143 = ((v106 + 112) >> 32) ^ HIDWORD(v210);
            v190 = v191 ^ (v106 + 64);
            v115 = v235 ^ (v106 + 16);
            v153 = v198 ^ ((v106 + 48) >> 32);
            v18 = (v106 + 32) ^ v232;
            LODWORD(v191) = v195 ^ (v106 + 80);
            v134 = v201 ^ ((v106 + 80) >> 32);
            v19 = ((v106 + 96) >> 32) ^ HIDWORD(v206);
            v168 = BYTE3(v191);
            v171 = HIBYTE(v121);
            v174 = HIBYTE(v138);
            v182 = ((unsigned int)v237 ^ (unsigned int)v106) >> 24;
            v196 = HIBYTE(v19);
            v207 = (char *)&unk_10A680 + 8 * BYTE3(v191);
            v208 = (char *)&unk_108E80 + 8 * HIBYTE(v121);
            v240 = (unsigned __int8)(((v106 + 64) >> 32) ^ BYTE4(v191));
            v20 = qword_109778[BYTE1(v115) - 31];
            v244 = BYTE2(v125);
            v21 = *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)(v237 ^ v106) + 1)
                ^ ((v106 + 1) >> 32)
                ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v143) + 1)
                ^ HIDWORD(v20);
            v261 = (unsigned __int8)v19;
            v255 = BYTE2(v143);
            v283 = HIBYTE(v18);
            v258 = (unsigned __int8)((v237 ^ v106) >> 48);
            v266 = (unsigned __int8)v125;
            v202 = &qword_109778[BYTE1(v125)];
            v22 = *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)(v237 ^ v106))
                ^ (v106 + 1)
                ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v143))
                ^ v20
                ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v18))
                ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v125))
                ^ *((_DWORD *)&unk_10AE80 + 2 * v240)
                ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v134));
            v263 = BYTE1(v143);
            v270 = (unsigned __int8)(((v106 + 112) >> 32) ^ BYTE4(v210));
            v144 = (unsigned __int8)((unsigned __int16)((v237 ^ v106) >> 32) >> 8);
            v277 = (unsigned __int8)((v237 ^ v106) >> 32);
            v211 = &qword_109778[BYTE1(v190)];
            v268 = BYTE2(v191);
            v149 = (unsigned __int8)v191;
            HIDWORD(v232) = &qword_109778[BYTE1(v191)];
            v126 = v21
                 ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v18) + 1)
                 ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v125) + 1)
                 ^ *((_DWORD *)&unk_10AE80 + 2 * v240 + 1)
                 ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v134) + 1)
                 ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v19) + 1);
            v111 = v22 ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v19));
            v23 = qword_109778[BYTE1(v18) - 31];
            v24 = *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v115)
                ^ (v106 + 17)
                ^ *((_DWORD *)&unk_108E80 + 2 * ((unsigned int)(HIDWORD(v237) ^ HIDWORD(v106)) >> 24))
                ^ v23
                ^ *((_DWORD *)&unk_109E80 + 2 * v244)
                ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v190));
            v25 = ((v106 + 17) >> 32)
                ^ *((_DWORD *)&unk_108E80 + 2 * ((unsigned int)(HIDWORD(v237) ^ HIDWORD(v106)) >> 24) + 1)
                ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v115 + 1)
                ^ HIDWORD(v23)
                ^ *((_DWORD *)&unk_109E80 + 2 * v244 + 1);
            v245 = BYTE2(v138);
            v251 = BYTE2(v121);
            HIDWORD(v237) = &qword_109778[BYTE1(v138)];
            v194 = (unsigned __int8)v138;
            v187 = BYTE1(v121);
            v282 = (unsigned __int8)v121;
            v192 = (unsigned __int8)(((unsigned int)v237 ^ (unsigned int)v106) >> 16);
            v241 = &qword_109778[(unsigned __int8)((unsigned __int16)(v237 ^ v106) >> 8)];
            v26 = v24
                ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v134)
                ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v19))
                ^ *((_DWORD *)&unk_10BE80 + 2 * v255);
            v122 = v25
                 ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v190) + 1)
                 ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v134 + 1)
                 ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v19) + 1)
                 ^ *((_DWORD *)&unk_10BE80 + 2 * v255 + 1);
            v27 = *((_DWORD *)&unk_10A680 + 2 * v168);
            v108 = v26;
            v163 = (unsigned __int8)v17;
            v169 = &qword_109778[BYTE1(v17)];
            v158 = *((_DWORD *)&unk_10AE80 + 2 * v261)
                 ^ v27
                 ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)((v106 + 32) ^ v232))
                 ^ *((_DWORD *)&unk_10BE80 + 2 * v258)
                 ^ (v106 + 33)
                 ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v16))
                 ^ *((_DWORD *)v202 - 62)
                 ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v190))
                 ^ *((_DWORD *)&unk_10B680 + 2 * v263);
            v139 = *((_DWORD *)v202 - 61)
                 ^ *((_DWORD *)&unk_10BE80 + 2 * v258 + 1)
                 ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)((v106 + 32) ^ v232) + 1)
                 ^ (__CFADD__((_DWORD)v106, 33) + HIDWORD(v106))
                 ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v16) + 1)
                 ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v190) + 1)
                 ^ *((_DWORD *)v207 + 1)
                 ^ *((_DWORD *)&unk_10AE80 + 2 * v261 + 1)
                 ^ *((_DWORD *)&unk_10B680 + 2 * v263 + 1);
            v28 = *((_DWORD *)&unk_10B680 + 2 * v144 + 1) ^ *((_DWORD *)&unk_108680 + 2 * v266 + 1);
            v29 = *((_DWORD *)v211 - 61);
            v145 = *((_DWORD *)&unk_10B680 + 2 * v144)
                 ^ *((_DWORD *)&unk_108680 + 2 * v266)
                 ^ (v106 + 49)
                 ^ *((_DWORD *)&unk_108E80 + 2 * v171)
                 ^ *((_DWORD *)v211 - 62)
                 ^ *((_DWORD *)&unk_109E80 + 2 * v268)
                 ^ *((_DWORD *)&unk_10A680 + 2 * v174)
                 ^ *((_DWORD *)&unk_10AE80 + 2 * v270)
                 ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v16));
            v212 = *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v17) + 1);
            v203 = *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v17));
            v30 = v28 ^ ((v106 + 49) >> 32) ^ *((_DWORD *)v208 + 1) ^ v29;
            v179 = *((_DWORD *)&unk_109E80 + 2 * v245);
            v199 = *((_DWORD *)&unk_109E80 + 2 * v245 + 1);
            v213 = *((_DWORD *)&unk_10B680 + 2 * BYTE1(v16));
            LODWORD(v232) = *((_DWORD *)&unk_10B680 + 2 * BYTE1(v16) + 1);
            v246 = *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)(((v106 + 16) >> 32) ^ BYTE4(v235)));
            v31 = v149;
            v249 = *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)(((v106 + 16) >> 32) ^ BYTE4(v235)) + 1);
            v32 = v149;
            v150 = v30
                 ^ *((_DWORD *)&unk_109E80 + 2 * v268 + 1)
                 ^ *((_DWORD *)&unk_10A680 + 2 * v174 + 1)
                 ^ *((_DWORD *)&unk_10AE80 + 2 * v270 + 1)
                 ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v16) + 1);
            v236 = *((_DWORD *)&unk_109E80 + 2 * BYTE2(v17) + 1);
            v184 = *((_DWORD *)&unk_109E80 + 2 * BYTE2(v17));
            v256 = *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v153) + 1);
            v33 = HIBYTE(v134);
            v135 = BYTE2(v134);
            v34 = (v106 + 81)
                ^ *((_DWORD *)&unk_108680 + 2 * v31)
                ^ *((_DWORD *)&unk_10A680 + 2 * v182)
                ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v130));
            v35 = HIBYTE(v115);
            v36 = BYTE2(v115);
            v37 = *((_DWORD *)&unk_108E80 + 2 * v196 + 1);
            v38 = *((_DWORD *)&unk_108E80 + 2 * v196);
            v116 = *((_DWORD *)&unk_108680 + 2 * v32 + 1)
                 ^ *((_DWORD *)&unk_10A680 + 2 * v182 + 1)
                 ^ (__CFADD__((_DWORD)v106, 81) + HIDWORD(v106))
                 ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v130) + 1);
            v197 = *((_DWORD *)&unk_10A680 + 2 * v283 + 1);
            v39 = *((_DWORD *)&unk_109E80 + 2 * v192)
                ^ *((_DWORD *)&unk_108680 + 2 * v194)
                ^ (v106 + 97)
                ^ *((_DWORD *)&unk_108E80 + 2 * v33);
            v40 = *((_DWORD *)&unk_109E80 + 2 * v192 + 1)
                ^ *((_DWORD *)&unk_108680 + 2 * v194 + 1)
                ^ ((v106 + 97) >> 32)
                ^ *((_DWORD *)&unk_108E80 + 2 * v33 + 1);
            v41 = *((_DWORD *)&unk_10A680 + 2 * v35);
            v209 = *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v153 + 1);
            v42 = v130;
            v131 = *((_DWORD *)&unk_10A680 + 2 * v35 + 1);
            v43 = BYTE2(v42);
            v44 = v199
                ^ *((_DWORD *)&unk_10AE80 + 2 * v277 + 1)
                ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v190 + 1)
                ^ ((v106 + 65) >> 32)
                ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v153) + 1)
                ^ *(_DWORD *)(HIDWORD(v232) - 244);
            v193 = *((_DWORD *)&unk_109E80 + 2 * v36 + 1)
                 ^ (__CFADD__((_DWORD)v106, 113) + HIDWORD(v106))
                 ^ *((_DWORD *)v241 - 61)
                 ^ *((_DWORD *)&unk_108680 + 2 * v163 + 1)
                 ^ v37;
            v45 = (_DWORD *)((char *)&unk_10B680 + 8 * BYTE1(v153));
            v200 = *((_DWORD *)&unk_10B680 + 2 * BYTE1(v42));
            v46 = *((_DWORD *)&unk_10AE80 + 2 * v277)
                ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v190)
                ^ (v106 + 65)
                ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v153))
                ^ *(_DWORD *)(HIDWORD(v232) - 248)
                ^ v179;
            v180 = *((_DWORD *)&unk_10B680 + 2 * BYTE1(v42) + 1);
            v47 = v116 ^ *(_DWORD *)(HIDWORD(v237) - 244);
            v48 = *((_DWORD *)&unk_10BE80 + 2 * v43 + 1);
            v183 = *((_DWORD *)&unk_10BE80 + 2 * v135 + 1);
            v117 = v39 ^ *((_DWORD *)v169 - 62) ^ v41 ^ *((_DWORD *)&unk_10AE80 + 2 * v282) ^ *v45;
            v49 = v40 ^ *((_DWORD *)v169 - 61) ^ v131 ^ *((_DWORD *)&unk_10AE80 + 2 * v282 + 1);
            v132 = *((_DWORD *)v241 - 62)
                 ^ *((_DWORD *)&unk_108680 + 2 * v163)
                 ^ (v106 + 113)
                 ^ v38
                 ^ *((_DWORD *)&unk_109E80 + 2 * v36)
                 ^ *((_DWORD *)&unk_10A680 + 2 * v283)
                 ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v153)
                 ^ v200
                 ^ *((_DWORD *)&unk_10BE80 + 2 * v135);
            v50 = v44 ^ v212 ^ v232 ^ *((_DWORD *)&unk_10BE80 + 2 * v251 + 1);
            v51 = v46 ^ v203 ^ v213 ^ *((_DWORD *)&unk_10BE80 + 2 * v251);
            v233 = v34
                 ^ *(_DWORD *)(HIDWORD(v237) - 248)
                 ^ v184
                 ^ v246
                 ^ *((_DWORD *)&unk_10B680 + 2 * v187)
                 ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v153));
            v52 = v117 ^ *((_DWORD *)&unk_10BE80 + 2 * v43);
            v53 = (v193 ^ v197 ^ v209 ^ v180 ^ v183) >> 24;
            v154 = v193 ^ v197 ^ v209 ^ v180 ^ v183;
            v54 = v49 ^ v45[1] ^ v48;
            v118 = v47 ^ v236 ^ v249 ^ *((_DWORD *)&unk_10B680 + 2 * v187 + 1) ^ v256;
            v55 = &qword_109778[BYTE1(v108)];
            v234 = *((_DWORD *)v55 - 62);
            v56 = &qword_109778[BYTE1(v158)];
            v106 += 2LL;
            v204 = *((_DWORD *)v55 - 61) ^ *((_DWORD *)&unk_108E80 + 2 * v53 + 1);
            v57 = (_DWORD *)((char *)&unk_10B680 + 8 * BYTE1(v54));
            v58 = *((_DWORD *)v56 - 62)
                ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v108)
                ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v126))
                ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v145))
                ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v51))
                ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v118)
                ^ *v57;
            v59 = *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v108 + 1)
                ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v126) + 1)
                ^ *((_DWORD *)v56 - 61)
                ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v145) + 1)
                ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v51) + 1)
                ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v118 + 1)
                ^ v57[1];
            v60 = BYTE1(v154);
            v61 = *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v154));
            v274 = (unsigned __int8)v154;
            v62 = *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v154) + 1);
            v155 = &qword_109778[BYTE1(v51)];
            LODWORD(v235) = v58 ^ v61;
            HIDWORD(v235) = v59 ^ v62;
            v271 = BYTE2(v233);
            v63 = (unsigned __int8)v233;
            v64 = *((_DWORD *)&unk_109E80 + 2 * BYTE2(v158) + 1)
                ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v111 + 1)
                ^ v204
                ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v145) + 1)
                ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v50 + 1);
            v205 = &qword_109778[BYTE1(v233)];
            v253 = &qword_109778[BYTE1(v52)];
            LODWORD(v237) = v234
                          ^ *((_DWORD *)&unk_108E80 + 2 * v53)
                          ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v111)
                          ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v158))
                          ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v145))
                          ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v50)
                          ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v118))
                          ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v54));
            HIDWORD(v237) = v64
                          ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v118) + 1)
                          ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v54) + 1);
            v232 = *((_QWORD *)&unk_109E80 + BYTE2(v51))
                 ^ *((_QWORD *)&unk_10BE80 + BYTE2(v126))
                 ^ *((_QWORD *)&unk_108680 + (unsigned __int8)v158)
                 ^ *((_QWORD *)&unk_108E80 + HIBYTE(v122))
                 ^ qword_109778[BYTE1(v145) - 31]
                 ^ *((_QWORD *)&unk_10A680 + HIBYTE(v233))
                 ^ *((_QWORD *)&unk_10AE80 + (unsigned __int8)v54)
                 ^ *((_QWORD *)&unk_10B680 + v60);
            v198 = *((_DWORD *)&unk_109E80 + 2 * v271 + 1)
                 ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v145 + 1)
                 ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v126) + 1)
                 ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v122) + 1)
                 ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v139) + 1)
                 ^ *((_DWORD *)v155 - 61)
                 ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v52) + 1)
                 ^ *((_DWORD *)&unk_10AE80 + 2 * v274 + 1);
            v210 = *((_QWORD *)&unk_108680 + (unsigned __int8)v132)
                 ^ qword_109778[BYTE1(v111) - 31]
                 ^ *((_QWORD *)&unk_109E80 + BYTE2(v108))
                 ^ *((_QWORD *)&unk_108E80 + HIBYTE(v54))
                 ^ *((_QWORD *)&unk_10A680 + HIBYTE(v158))
                 ^ *((_QWORD *)&unk_10AE80 + (unsigned __int8)v150)
                 ^ *((_QWORD *)&unk_10B680 + BYTE1(v50))
                 ^ *((_QWORD *)&unk_10BE80 + BYTE2(v118));
            v189 = *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v122))
                 ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v126))
                 ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v145)
                 ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v139))
                 ^ *((_DWORD *)v155 - 62)
                 ^ *((_DWORD *)&unk_109E80 + 2 * v271)
                 ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v52))
                 ^ *((_DWORD *)&unk_10AE80 + 2 * v274);
            v191 = *((_QWORD *)&unk_108E80 + HIBYTE(v150))
                 ^ *((_QWORD *)&unk_108680 + (unsigned __int8)v51)
                 ^ *((_QWORD *)&unk_10AE80 + (unsigned __int8)v126)
                 ^ *((_QWORD *)&unk_10B680 + BYTE1(v122))
                 ^ *(v205 - 31)
                 ^ *((_QWORD *)&unk_109E80 + BYTE2(v52))
                 ^ *((_QWORD *)&unk_10A680 + HIBYTE(v132))
                 ^ *((_QWORD *)&unk_10BE80 + BYTE2(v139));
            v201 = *((_DWORD *)&unk_109E80 + 2 * BYTE2(v132) + 1)
                 ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v111) + 1)
                 ^ *((_DWORD *)&unk_108680 + 2 * v63 + 1)
                 ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v122 + 1)
                 ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v50) + 1)
                 ^ *((_DWORD *)v253 - 61)
                 ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v139) + 1)
                 ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v150) + 1);
            v195 = *((_DWORD *)&unk_108680 + 2 * v63)
                 ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v111))
                 ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v122)
                 ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v50))
                 ^ *((_DWORD *)v253 - 62)
                 ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v132))
                 ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v139))
                 ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v150));
            v206 = *((_QWORD *)&unk_108680 + (unsigned __int8)v52)
                 ^ *((_QWORD *)&unk_109E80 + BYTE2(v111))
                 ^ *((_QWORD *)&unk_10A680 + HIBYTE(v108))
                 ^ *((_QWORD *)&unk_108E80 + HIBYTE(v118))
                 ^ qword_109778[BYTE1(v132) - 31]
                 ^ *((_QWORD *)&unk_10AE80 + (unsigned __int8)v139)
                 ^ *((_QWORD *)&unk_10B680 + BYTE1(v150))
                 ^ *((_QWORD *)&unk_10BE80 + BYTE2(v50));
          }
          while ( v106 != 10 );
          v107 = -1;
          v65 = *((_DWORD *)a1 + 13);
          v66 = *((_DWORD *)a1 + 12);
          v68 = *((_DWORD *)a1 + 14);
          v67 = *((_DWORD *)a1 + 15);
          do
          {
            v119 = ~(_DWORD)v214;
            v175 = v67 ^ HIDWORD(v107) ^ 0x70000000;
            v123 = ~(_DWORD)v217;
            v69 = ~(_DWORD)v225;
            v159 = ~v68;
            v70 = HIDWORD(v107) ^ 0x60000000 ^ v65;
            v127 = HIDWORD(v107) ^ 0x10000000 ^ HIDWORD(v217);
            v136 = HIDWORD(v220) ^ HIDWORD(v107) ^ 0x20000000;
            v146 = ~(_DWORD)v228;
            v156 = ~v66;
            v71 = (unsigned int)~(_DWORD)v214 >> 24;
            v151 = HIDWORD(v228) ^ HIDWORD(v107) ^ 0x50000000;
            v172 = v70;
            v164 = HIDWORD(v223) ^ HIDWORD(v107) ^ 0x30000000;
            v260 = (unsigned int)~(_DWORD)v223 >> 24;
            v264 = HIBYTE(v164);
            LODWORD(v217) = (unsigned int)~v68 >> 24;
            v267 = (unsigned int)~(_DWORD)v225 >> 24;
            v247 = (unsigned int)~(_DWORD)v220 >> 24;
            v170 = HIDWORD(v214) ^ HIDWORD(v107);
            v229 = (unsigned int)(HIDWORD(v214) ^ HIDWORD(v107)) >> 24;
            v259 = HIBYTE(v136);
            v231 = HIBYTE(v123);
            v280 = HIBYTE(v151);
            v140 = HIDWORD(v225) ^ HIDWORD(v107) ^ 0x40000000;
            v72 = &qword_109778[(unsigned __int8)((unsigned __int16)~(_WORD)v225 >> 8)];
            v73 = (unsigned __int8)(BYTE4(v107) ^ BYTE4(v217));
            v74 = (unsigned __int8)~(_BYTE)v220;
            v275 = HIBYTE(v140);
            v112 = 0xFFFFFF - HIDWORD(v107);
            v226 = BYTE2(v151);
            v75 = ~*((_DWORD *)&unk_108680 + 2 * v74) ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v175));
            v76 = (0xFFFFFF - HIDWORD(v107))
                ^ 0xEFFFFFFF
                ^ *((_DWORD *)&unk_108680 + 2 * v74 + 1)
                ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v175) + 1);
            v77 = *(v72 - 31);
            v78 = v76 ^ HIDWORD(v77);
            v79 = v75 ^ v77;
            v80 = *((_QWORD *)&unk_109E80 + BYTE2(v156));
            v185 = (unsigned __int8)((unsigned int)~(_DWORD)v223 >> 16);
            v250 = (unsigned __int8)(BYTE4(v223) ^ BYTE4(v107));
            v188 = BYTE2(v164);
            v252 = BYTE1(v151);
            v269 = (unsigned __int8)v151;
            v152 = v79
                 ^ v80
                 ^ *((_DWORD *)&unk_10A680 + 2 * v71)
                 ^ *((_DWORD *)&unk_10AE80 + 2 * v73)
                 ^ *((_DWORD *)&unk_10B680 + 2 * (unsigned __int8)((unsigned __int16)(WORD2(v223) ^ WORD2(v107)) >> 8))
                 ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v151));
            v165 = v78
                 ^ HIDWORD(v80)
                 ^ *((_DWORD *)&unk_10A680 + 2 * v71 + 1)
                 ^ *((_DWORD *)&unk_10AE80 + 2 * v73 + 1)
                 ^ *((_DWORD *)&unk_10B680
                   + 2 * (unsigned __int8)((unsigned __int16)(WORD2(v223) ^ WORD2(v107)) >> 8)
                   + 1)
                 ^ *((_DWORD *)&unk_10BE80 + 2 * v226 + 1);
            v81 = qword_109778[(unsigned __int8)((unsigned __int16)~(_WORD)v223 >> 8) - 31];
            v82 = *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v70) + 1)
                ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v123 + 1)
                ^ (HIDWORD(v107) - 0xFFFFFF)
                ^ HIDWORD(v81);
            HIDWORD(v107) -= 0x1FFFFFF;
            v215 = &qword_109778[BYTE1(v146)];
            v227 = (unsigned __int8)v136;
            v181 = BYTE2(v136);
            v242 = BYTE1(v140);
            v262 = (unsigned __int8)v140;
            v83 = BYTE2(v70);
            v177 = HIBYTE(v146);
            v84 = *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v140));
            v272 = (unsigned __int8)v159;
            v216 = &qword_109778[BYTE1(v159)];
            v141 = *((_DWORD *)&unk_10B680 + 2 * BYTE1(v136) + 1)
                 ^ v82
                 ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v146) + 1)
                 ^ *((_DWORD *)&unk_10A680 + 2 * v217 + 1)
                 ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v170 + 1)
                 ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v140) + 1);
            v137 = ~(*((_DWORD *)&unk_108E80 + 2 * HIBYTE(v70)) ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v123))
                 ^ v81
                 ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v146))
                 ^ *((_DWORD *)&unk_10A680 + 2 * v217)
                 ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v170)
                 ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v136))
                 ^ v84;
            v85 = qword_109778[BYTE1(v156) - 31];
            v86 = BYTE2(v123);
            v219 = &qword_109778[BYTE1(v123)];
            v281 = HIBYTE(v156);
            v278 = (unsigned __int8)v119;
            v218 = &qword_109778[BYTE1(v119)];
            v87 = (unsigned __int8)((unsigned int)~(_DWORD)v220 >> 16);
            v221 = &qword_109778[(unsigned __int8)((unsigned __int16)~(_WORD)v220 >> 8)];
            v88 = v85
                ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v127))
                ^ ~*((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v69)
                ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v119))
                ^ *((_DWORD *)&unk_10A680 + 2 * v247)
                ^ *((_DWORD *)&unk_10AE80 + 2 * v250)
                ^ *((_DWORD *)&unk_10B680 + 2 * v252)
                ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v175));
            v133 = *((_DWORD *)&unk_10AE80 + 2 * v250 + 1)
                 ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v127) + 1)
                 ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v69 + 1)
                 ^ v112
                 ^ 0xCFFFFFFF
                 ^ HIDWORD(v85)
                 ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v119) + 1)
                 ^ *((_DWORD *)&unk_10A680 + 2 * v247 + 1)
                 ^ *((_DWORD *)&unk_10B680 + 2 * v252 + 1)
                 ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v175) + 1);
            v124 = *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)~(_BYTE)v223 + 1)
                 ^ v112
                 ^ 0xDFFFFFFF
                 ^ *((_DWORD *)&unk_108E80 + 2 * v229 + 1)
                 ^ *((_DWORD *)v215 - 61)
                 ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v159) + 1)
                 ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v123) + 1)
                 ^ *((_DWORD *)&unk_10AE80 + 2 * v227 + 1)
                 ^ *((_DWORD *)&unk_10B680 + 2 * v242 + 1)
                 ^ *((_DWORD *)&unk_10BE80 + 2 * v83 + 1);
            v120 = ~*((_DWORD *)&unk_108680 + 2 * (unsigned __int8)~(_BYTE)v223)
                 ^ *((_DWORD *)&unk_108E80 + 2 * v229)
                 ^ *((_DWORD *)v215 - 62)
                 ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v159))
                 ^ *((_DWORD *)&unk_10A680 + 2 * v231)
                 ^ *((_DWORD *)&unk_10AE80 + 2 * v227)
                 ^ *((_DWORD *)&unk_10B680 + 2 * v242)
                 ^ *((_DWORD *)&unk_10BE80 + 2 * v83);
            v89 = *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v156);
            v160 = *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v156 + 1);
            v157 = *((_DWORD *)&unk_108E80 + 2 * v259 + 1)
                 ^ v112
                 ^ 0xBFFFFFFF
                 ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v146 + 1)
                 ^ *((_DWORD *)v216 - 61)
                 ^ *((_DWORD *)&unk_109E80 + 2 * v86 + 1)
                 ^ *((_DWORD *)&unk_10A680 + 2 * v260 + 1)
                 ^ *((_DWORD *)&unk_10AE80 + 2 * v262 + 1)
                 ^ *((_DWORD *)&unk_10B680 + 2 * HIBYTE(v172) + 1)
                 ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v170) + 1);
            v147 = ~*((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v146)
                 ^ *((_DWORD *)&unk_108E80 + 2 * v259)
                 ^ *((_DWORD *)v216 - 62)
                 ^ *((_DWORD *)&unk_109E80 + 2 * v86)
                 ^ *((_DWORD *)&unk_10A680 + 2 * v260)
                 ^ *((_DWORD *)&unk_10AE80 + 2 * v262)
                 ^ *((_DWORD *)&unk_10B680 + 2 * HIBYTE(v172))
                 ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v170));
            HIDWORD(v80) = *((_DWORD *)&unk_108680 + 2 * v278 + 1) ^ v112 ^ 0x8FFFFFFF;
            v109 = (_DWORD *)((char *)&unk_10B680 + 8 * BYTE1(v170));
            v90 = *((_DWORD *)&unk_10BE80 + 2 * v181 + 1);
            LODWORD(v80) = ~(v112 ^ 0x60000000)
                         ^ *((_DWORD *)&unk_108680 + 2 * v272 + 1)
                         ^ *((_DWORD *)&unk_108E80 + 2 * v275 + 1)
                         ^ *((_DWORD *)v219 - 61)
                         ^ *((_DWORD *)&unk_109E80 + 2 * v185 + 1)
                         ^ *((_DWORD *)&unk_10A680 + 2 * v177 + 1)
                         ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v172 + 1)
                         ^ v109[1];
            v113 = *((_DWORD *)&unk_10AE80 + 2 * v269 + 1)
                 ^ *((_DWORD *)&unk_109E80 + 2 * v87 + 1)
                 ^ v160
                 ^ v112
                 ^ 0xAFFFFFFF
                 ^ *((_DWORD *)&unk_108E80 + 2 * v264 + 1)
                 ^ *((_DWORD *)v218 - 61)
                 ^ *((_DWORD *)&unk_10A680 + 2 * v267 + 1)
                 ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v175) + 1)
                 ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v127) + 1);
            v91 = *((_DWORD *)v219 - 62)
                ^ ~*((_DWORD *)&unk_108680 + 2 * v272)
                ^ *((_DWORD *)&unk_108E80 + 2 * v275)
                ^ *((_DWORD *)&unk_109E80 + 2 * v185)
                ^ *((_DWORD *)&unk_10A680 + 2 * v177)
                ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v172)
                ^ *v109;
            v173 = ~*((_DWORD *)&unk_108680 + 2 * v278)
                 ^ *((_DWORD *)&unk_108E80 + 2 * v280)
                 ^ *((_DWORD *)v221 - 62)
                 ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v69))
                 ^ *((_DWORD *)&unk_10A680 + 2 * v281)
                 ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v175)
                 ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v127))
                 ^ *((_DWORD *)&unk_10BE80 + 2 * v188);
            v110 = *((_DWORD *)&unk_108E80 + 2 * v264)
                 ^ ~v89
                 ^ *((_DWORD *)v218 - 62)
                 ^ *((_DWORD *)&unk_109E80 + 2 * v87)
                 ^ *((_DWORD *)&unk_10A680 + 2 * v267)
                 ^ *((_DWORD *)&unk_10AE80 + 2 * v269)
                 ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v175))
                 ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v127));
            v176 = HIDWORD(v80)
                 ^ *((_DWORD *)&unk_108E80 + 2 * v280 + 1)
                 ^ *((_DWORD *)v221 - 61)
                 ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v69) + 1)
                 ^ *((_DWORD *)&unk_10A680 + 2 * v281 + 1)
                 ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v175 + 1)
                 ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v127) + 1)
                 ^ *((_DWORD *)&unk_10BE80 + 2 * v188 + 1);
            v161 = v91 ^ *((_DWORD *)&unk_10BE80 + 2 * v181);
            v178 = HIBYTE(v141);
            v265 = HIBYTE(v88);
            v273 = HIBYTE(v147);
            v186 = HIBYTE(v113);
            v222 = (char *)&unk_108E80 + 8 * HIBYTE(v141);
            HIDWORD(v80) = &qword_109778[BYTE1(v88)];
            v92 = *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v152 + 1)
                ^ *((_DWORD *)&unk_108E80 + 2 * (((unsigned int)v80 ^ v90) >> 24) + 1)
                ^ *(_DWORD *)(HIDWORD(v80) - 244);
            v93 = *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v152)
                ^ *((_DWORD *)&unk_108E80 + 2 * (((unsigned int)v80 ^ v90) >> 24))
                ^ *(_DWORD *)(HIDWORD(v80) - 248)
                ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v110));
            HIDWORD(v80) = &qword_109778[BYTE1(v147)];
            v243 = BYTE2(v113);
            v248 = (unsigned __int8)v88;
            v279 = BYTE2(v88);
            v254 = (unsigned __int8)(((unsigned int)v80 ^ v90) >> 16);
            LODWORD(v214) = v93
                          ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v173))
                          ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v141)
                          ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v124))
                          ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v157));
            v257 = (unsigned __int8)v147;
            v148 = BYTE2(v147);
            v224 = &qword_109778[BYTE1(v161)];
            HIDWORD(v214) = v92
                          ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v110) + 1)
                          ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v173) + 1)
                          ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v141 + 1)
                          ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v124) + 1)
                          ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v157) + 1);
            v94 = BYTE1(v113);
            v276 = (unsigned __int8)v113;
            v114 = BYTE2(v141);
            v128 = BYTE1(v141);
            v230 = &qword_109778[BYTE1(v152)];
            v217 = *((_QWORD *)&unk_108680 + (unsigned __int8)v120)
                 ^ *((_QWORD *)&unk_108E80 + HIBYTE(v176))
                 ^ *(_QWORD *)(HIDWORD(v80) - 248)
                 ^ *((_QWORD *)&unk_109E80 + BYTE2(v161))
                 ^ *((_QWORD *)&unk_10A680 + HIBYTE(v137))
                 ^ *((_QWORD *)&unk_10AE80 + (unsigned __int8)v165)
                 ^ *((_QWORD *)&unk_10B680 + BYTE1(v133))
                 ^ *((_QWORD *)&unk_10BE80 + v243);
            v95 = (unsigned __int8)(v80 ^ v90);
            v142 = HIBYTE(v161);
            v96 = *((_DWORD *)v222 + 1)
                ^ *((_DWORD *)&unk_108680 + 2 * v248 + 1)
                ^ *((_DWORD *)&qword_109778[BYTE1(v110) - 30] - 1)
                ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v173) + 1)
                ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v152) + 1)
                ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v124 + 1)
                ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v157) + 1);
            v162 = &qword_109778[BYTE1(v120)];
            LODWORD(v220) = LODWORD(qword_109778[BYTE1(v110) - 31])
                          ^ *((_DWORD *)&unk_108E80 + 2 * v178)
                          ^ *((_DWORD *)&unk_108680 + 2 * v248)
                          ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v173))
                          ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v152))
                          ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v124)
                          ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v157))
                          ^ *((_DWORD *)&unk_10BE80 + 2 * v254);
            HIDWORD(v220) = v96 ^ *((_DWORD *)&unk_10BE80 + 2 * v254 + 1);
            v223 = *((_QWORD *)&unk_108680 + v257)
                 ^ *((_QWORD *)&unk_108E80 + HIBYTE(v165))
                 ^ *(v224 - 31)
                 ^ *((_QWORD *)&unk_109E80 + BYTE2(v137))
                 ^ *((_QWORD *)&unk_10A680 + HIBYTE(v120))
                 ^ *((_QWORD *)&unk_10AE80 + (unsigned __int8)v133)
                 ^ *((_QWORD *)&unk_10B680 + v94)
                 ^ *((_QWORD *)&unk_10BE80 + BYTE2(v176));
            v225 = *((_QWORD *)&unk_10BE80 + v114)
                 ^ *((_QWORD *)&unk_108680 + (unsigned __int8)v110)
                 ^ *((_QWORD *)&unk_108E80 + HIBYTE(v124))
                 ^ qword_109778[BYTE1(v173) - 31]
                 ^ *((_QWORD *)&unk_109E80 + BYTE2(v152))
                 ^ *((_QWORD *)&unk_10A680 + v265)
                 ^ *((_QWORD *)&unk_10AE80 + (unsigned __int8)v157)
                 ^ *((_QWORD *)&unk_10B680 + (unsigned __int8)((unsigned __int16)(v80 ^ v90) >> 8));
            v68 = *((_DWORD *)&unk_108E80 + 2 * v186)
                ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v137)
                ^ *((_DWORD *)v162 - 62)
                ^ *((_DWORD *)&unk_109E80 + 2 * v148)
                ^ *((_DWORD *)&unk_10A680 + 2 * v142)
                ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v176)
                ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v165))
                ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v133));
            v65 = *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v173 + 1)
                ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v157) + 1)
                ^ *((_DWORD *)v230 - 61)
                ^ *((_DWORD *)&unk_109E80 + 2 * v279 + 1)
                ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v110) + 1)
                ^ *((_DWORD *)&unk_10AE80 + 2 * v95 + 1)
                ^ *((_DWORD *)&unk_10B680 + 2 * v128 + 1)
                ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v124) + 1);
            v66 = *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v173)
                ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v157))
                ^ *((_DWORD *)v230 - 62)
                ^ *((_DWORD *)&unk_109E80 + 2 * v279)
                ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v110))
                ^ *((_DWORD *)&unk_10AE80 + 2 * v95)
                ^ *((_DWORD *)&unk_10B680 + 2 * v128)
                ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v124));
            v228 = *((_QWORD *)&unk_10BE80 + BYTE2(v165))
                 ^ *((_QWORD *)&unk_10B680 + BYTE1(v176))
                 ^ *((_QWORD *)&unk_108680 + (unsigned __int8)(v91 ^ *((_BYTE *)&unk_10BE80 + 8 * v181)))
                 ^ *((_QWORD *)&unk_108E80 + HIBYTE(v133))
                 ^ qword_109778[BYTE1(v137) - 31]
                 ^ *((_QWORD *)&unk_109E80 + BYTE2(v120))
                 ^ *((_QWORD *)&unk_10A680 + v273)
                 ^ *((_QWORD *)&unk_10AE80 + v276);
            v67 = *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v137 + 1)
                ^ *((_DWORD *)&unk_108E80 + 2 * v186 + 1)
                ^ *((_DWORD *)v162 - 61)
                ^ *((_DWORD *)&unk_109E80 + 2 * v148 + 1)
                ^ *((_DWORD *)&unk_10A680 + 2 * v142 + 1)
                ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v176 + 1)
                ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v165) + 1)
                ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v133) + 1);
          }
          while ( v107 != 0xF5FFFFFFFFFFFFFFLL );
          v3 = 0;
          v129 = *((_DWORD *)a1 + 35);
          v97 = *((_DWORD *)a1 + 34);
          v289 ^= v189 ^ v223;
          v294 ^= __PAIR64__(v65, v66) ^ v206;
          v290 ^= v198 ^ HIDWORD(v223);
          v291 ^= v191 ^ v225;
          v286 ^= v237 ^ v214;
          LODWORD(v295) = v68 ^ v210 ^ v295;
          v287 ^= v235 ^ v217;
          HIDWORD(v295) ^= v67 ^ HIDWORD(v210);
          v288 ^= v232 ^ v220;
          v292 ^= v195 ^ v228;
          *((_DWORD *)a1 + 35) = (__PAIR64__(v129, v97) + 1) >> 32;
          v13 = na;
          v293 = v201 ^ v284 ^ HIDWORD(v228);
          *((_DWORD *)a1 + 34) = v97 + 1;
          if ( !na )
            break;
        }
        else
        {
          v13 = na;
          if ( !na )
            break;
        }
        v4 = 64 - v3;
      }
    }
    v98 = v285;
    v99 = &v286;
    do
    {
      v98 += 2;
      result = *(void **)v99;
      v101 = *((_DWORD *)v99 + 1);
      v102 = *((_DWORD *)v99 + 2);
      v103 = *((_DWORD *)v99 + 3);
      v99 += 2;
      *((_DWORD *)v98 - 4) = result;
      *((_DWORD *)v98 - 3) = v101;
      *((_DWORD *)v98 - 2) = v102;
      *((_DWORD *)v98 - 1) = v103;
    }
    while ( v99 != (__int64 *)&v296 );
    *((_DWORD *)a1 + 16) = v3;
  }
  return result;
}
