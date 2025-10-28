void *__fastcall sph_groestl256_0(__int64 *a1, char *a2, size_t a3)
{
  int v3; // r11
  size_t v4; // r4
  __int64 *v5; // r5
  __int64 *v6; // r12
  __int64 *v7; // r6
  int v8; // r0
  int v9; // r1
  __int64 *v10; // lr
  int v11; // r2
  int v12; // r3
  size_t i; // r5
  size_t v14; // r3
  char *v15; // r0
  unsigned int v16; // r0
  unsigned int v17; // r1
  unsigned int v18; // r3
  int v19; // lr
  _QWORD *v20; // r5
  _QWORD *v21; // r6
  _DWORD *v22; // r5
  int v23; // r11
  _DWORD *v24; // r10
  int v25; // r9
  int v26; // r4
  int v27; // r6
  int v28; // r3
  int v29; // lr
  int v30; // r0
  _QWORD *v31; // r1
  int v32; // r8
  int v33; // r9
  int v34; // r1
  int v35; // r4
  int v36; // lr
  int v37; // r4
  int v38; // r12
  int v39; // r0
  int v40; // r5
  int v41; // r12
  int v42; // r3
  int v43; // r9
  int v44; // r11
  int v45; // r12
  int v46; // r6
  __int64 v47; // r0
  _DWORD *v48; // r4
  int v49; // r11
  int v50; // r9
  int v51; // r3
  int v52; // r11
  _DWORD *v53; // r4
  _QWORD *v54; // r6
  _DWORD *v55; // r11
  unsigned int v56; // r8
  unsigned int v57; // r12
  _QWORD *v58; // lr
  _QWORD *v59; // r3
  __int64 v60; // r10
  _QWORD *v61; // r9
  __int64 v62; // r2
  _DWORD *v63; // r5
  __int64 v64; // r2
  int v65; // r5
  int v66; // r5
  int v67; // r1
  int v68; // r2
  int v69; // r4
  int v70; // r5
  int v71; // r3
  _QWORD *v72; // lr
  _DWORD *v73; // r1
  _QWORD *v74; // r7
  _QWORD *v75; // r10
  _DWORD *v76; // r8
  _DWORD *v77; // r4
  int v78; // r2
  unsigned int v79; // r8
  int v80; // r10
  int v81; // r12
  _QWORD *v82; // r11
  int v83; // r1
  int v84; // r4
  int v85; // lr
  bool v86; // zf
  _DWORD *v87; // r7
  int v88; // r5
  int v89; // r1
  int v90; // r2
  int v91; // r0
  int v92; // r1
  _QWORD *v93; // r5
  _DWORD *v94; // r11
  int v95; // r8
  int v96; // r2
  int v97; // r1
  int v98; // lr
  int v99; // r2
  int v100; // r7
  int v101; // r6
  int v102; // r9
  int v103; // r2
  int v104; // r1
  __int64 v105; // r0
  int v106; // r3
  unsigned int v107; // r2
  __int64 v108; // r0
  _QWORD *v109; // r12
  unsigned int v110; // r5
  int *v111; // r3
  int v112; // r2
  _QWORD *v113; // r12
  __int64 v114; // r8
  int v115; // r4
  __int64 v116; // r10
  int v117; // r3
  int v118; // r2
  int v119; // r12
  int v120; // r2
  int v121; // r7
  int v122; // r12
  _QWORD *v123; // r4
  _QWORD *v124; // r12
  __int64 v125; // r0
  int v126; // r4
  __int64 *v127; // r12
  __int64 *v128; // r4
  void *result; // r0
  int v130; // r1
  int v131; // r2
  int v132; // r3
  __int64 v135; // [sp+8h] [bp-1B4h]
  int v136; // [sp+Ch] [bp-1B0h]
  unsigned int v137; // [sp+14h] [bp-1A8h]
  unsigned int v138; // [sp+14h] [bp-1A8h]
  unsigned int v139; // [sp+14h] [bp-1A8h]
  _QWORD *v140; // [sp+14h] [bp-1A8h]
  int v141; // [sp+18h] [bp-1A4h]
  unsigned int v142; // [sp+18h] [bp-1A4h]
  int v143; // [sp+18h] [bp-1A4h]
  unsigned int v144; // [sp+18h] [bp-1A4h]
  _QWORD *v145; // [sp+18h] [bp-1A4h]
  unsigned int v146; // [sp+1Ch] [bp-1A0h]
  int v147; // [sp+1Ch] [bp-1A0h]
  unsigned int v148; // [sp+1Ch] [bp-1A0h]
  _QWORD *v149; // [sp+1Ch] [bp-1A0h]
  unsigned int v150; // [sp+20h] [bp-19Ch]
  _QWORD *v151; // [sp+20h] [bp-19Ch]
  unsigned int v152; // [sp+20h] [bp-19Ch]
  int v153; // [sp+20h] [bp-19Ch]
  unsigned int v154; // [sp+20h] [bp-19Ch]
  _QWORD *v155; // [sp+20h] [bp-19Ch]
  __int64 v156; // [sp+20h] [bp-19Ch]
  unsigned int v157; // [sp+24h] [bp-198h]
  unsigned int v158; // [sp+24h] [bp-198h]
  unsigned int v159; // [sp+24h] [bp-198h]
  int v160; // [sp+24h] [bp-198h]
  unsigned int v161; // [sp+24h] [bp-198h]
  unsigned int v162; // [sp+28h] [bp-194h]
  unsigned int v163; // [sp+28h] [bp-194h]
  int v164; // [sp+28h] [bp-194h]
  unsigned int v165; // [sp+28h] [bp-194h]
  unsigned int v166; // [sp+2Ch] [bp-190h]
  int v167; // [sp+2Ch] [bp-190h]
  unsigned int v168; // [sp+2Ch] [bp-190h]
  _DWORD *v169; // [sp+2Ch] [bp-190h]
  int v170; // [sp+2Ch] [bp-190h]
  unsigned int v171; // [sp+2Ch] [bp-190h]
  unsigned int v172; // [sp+2Ch] [bp-190h]
  unsigned int v173; // [sp+30h] [bp-18Ch]
  unsigned int v174; // [sp+30h] [bp-18Ch]
  unsigned int v175; // [sp+30h] [bp-18Ch]
  unsigned int v176; // [sp+30h] [bp-18Ch]
  __int64 v177; // [sp+34h] [bp-188h]
  int v178; // [sp+34h] [bp-188h]
  unsigned int v179; // [sp+34h] [bp-188h]
  _QWORD *v180; // [sp+34h] [bp-188h]
  int v181; // [sp+34h] [bp-188h]
  unsigned int v182; // [sp+38h] [bp-184h]
  unsigned int v183; // [sp+38h] [bp-184h]
  int v184; // [sp+38h] [bp-184h]
  unsigned int v185; // [sp+3Ch] [bp-180h]
  _QWORD *v186; // [sp+3Ch] [bp-180h]
  unsigned int v187; // [sp+3Ch] [bp-180h]
  unsigned int v188; // [sp+3Ch] [bp-180h]
  unsigned int v189; // [sp+3Ch] [bp-180h]
  unsigned int v190; // [sp+40h] [bp-17Ch]
  int v191; // [sp+40h] [bp-17Ch]
  int v192; // [sp+40h] [bp-17Ch]
  unsigned int v193; // [sp+40h] [bp-17Ch]
  int v194; // [sp+40h] [bp-17Ch]
  unsigned int v195; // [sp+44h] [bp-178h]
  int v196; // [sp+44h] [bp-178h]
  _QWORD *v197; // [sp+44h] [bp-178h]
  unsigned int v198; // [sp+44h] [bp-178h]
  _DWORD *v199; // [sp+44h] [bp-178h]
  size_t na; // [sp+48h] [bp-174h]
  unsigned int v202; // [sp+4Ch] [bp-170h]
  __int16 v203; // [sp+4Ch] [bp-170h]
  unsigned int v204; // [sp+4Ch] [bp-170h]
  _QWORD *v205; // [sp+4Ch] [bp-170h]
  int v206; // [sp+50h] [bp-16Ch]
  unsigned int v207; // [sp+50h] [bp-16Ch]
  int v208; // [sp+50h] [bp-16Ch]
  unsigned int v209; // [sp+50h] [bp-16Ch]
  unsigned int v210; // [sp+54h] [bp-168h]
  int v211; // [sp+54h] [bp-168h]
  _QWORD *v212; // [sp+58h] [bp-164h]
  int v213; // [sp+58h] [bp-164h]
  _QWORD *v214; // [sp+58h] [bp-164h]
  unsigned int v215; // [sp+58h] [bp-164h]
  _QWORD *v216; // [sp+58h] [bp-164h]
  int v217; // [sp+5Ch] [bp-160h]
  _QWORD *v218; // [sp+5Ch] [bp-160h]
  _QWORD *v219; // [sp+5Ch] [bp-160h]
  unsigned int v220; // [sp+5Ch] [bp-160h]
  int v221; // [sp+5Ch] [bp-160h]
  _DWORD *v222; // [sp+60h] [bp-15Ch]
  int v223; // [sp+60h] [bp-15Ch]
  unsigned int v224; // [sp+60h] [bp-15Ch]
  _QWORD *v225; // [sp+64h] [bp-158h]
  _DWORD *v226; // [sp+64h] [bp-158h]
  _QWORD *v227; // [sp+64h] [bp-158h]
  int v228; // [sp+64h] [bp-158h]
  unsigned int v229; // [sp+64h] [bp-158h]
  _QWORD *v230; // [sp+68h] [bp-154h]
  int v231; // [sp+68h] [bp-154h]
  unsigned int v232; // [sp+68h] [bp-154h]
  unsigned int v233; // [sp+6Ch] [bp-150h]
  _QWORD *v234; // [sp+6Ch] [bp-150h]
  int v235; // [sp+6Ch] [bp-150h]
  __int64 v236; // [sp+70h] [bp-14Ch]
  unsigned int v237; // [sp+70h] [bp-14Ch]
  int v238; // [sp+74h] [bp-148h]
  _QWORD *v239; // [sp+74h] [bp-148h]
  __int64 v240; // [sp+78h] [bp-144h]
  _DWORD *v241; // [sp+78h] [bp-144h]
  _QWORD *v242; // [sp+78h] [bp-144h]
  _QWORD *v243; // [sp+7Ch] [bp-140h]
  _QWORD *v244; // [sp+7Ch] [bp-140h]
  __int64 v245; // [sp+80h] [bp-13Ch]
  _QWORD *v246; // [sp+80h] [bp-13Ch]
  _DWORD *v247; // [sp+80h] [bp-13Ch]
  __int64 v248; // [sp+88h] [bp-134h]
  _QWORD *v249; // [sp+88h] [bp-134h]
  unsigned int v250; // [sp+88h] [bp-134h]
  _DWORD *v251; // [sp+88h] [bp-134h]
  _QWORD *v252; // [sp+8Ch] [bp-130h]
  __int64 v253; // [sp+90h] [bp-12Ch]
  _QWORD *v254; // [sp+90h] [bp-12Ch]
  _DWORD *v255; // [sp+90h] [bp-12Ch]
  _DWORD *v256; // [sp+94h] [bp-128h]
  __int64 v257; // [sp+98h] [bp-124h]
  _QWORD *v258; // [sp+98h] [bp-124h]
  _DWORD *v259; // [sp+98h] [bp-124h]
  _QWORD *v260; // [sp+9Ch] [bp-120h]
  __int64 v261; // [sp+A0h] [bp-11Ch]
  _QWORD *v262; // [sp+A0h] [bp-11Ch]
  _QWORD *v263; // [sp+A0h] [bp-11Ch]
  int v264; // [sp+A4h] [bp-118h]
  int v265; // [sp+A4h] [bp-118h]
  __int64 v266; // [sp+A8h] [bp-114h]
  _DWORD *v267; // [sp+A8h] [bp-114h]
  _QWORD *v268; // [sp+A8h] [bp-114h]
  int v269; // [sp+ACh] [bp-110h]
  _QWORD *v270; // [sp+ACh] [bp-110h]
  __int64 v271; // [sp+B0h] [bp-10Ch]
  _QWORD *v272; // [sp+B0h] [bp-10Ch]
  _QWORD *v273; // [sp+B0h] [bp-10Ch]
  int v274; // [sp+B4h] [bp-108h]
  int v275; // [sp+B4h] [bp-108h]
  _QWORD *v276; // [sp+B4h] [bp-108h]
  __int64 v277; // [sp+B8h] [bp-104h]
  int v278; // [sp+B8h] [bp-104h]
  _QWORD *v279; // [sp+B8h] [bp-104h]
  _QWORD *v280; // [sp+BCh] [bp-100h]
  _QWORD *v281; // [sp+BCh] [bp-100h]
  int v282; // [sp+C0h] [bp-FCh]
  _QWORD *v283; // [sp+C0h] [bp-FCh]
  _QWORD *v284; // [sp+C0h] [bp-FCh]
  __int64 v285; // [sp+C4h] [bp-F8h]
  _QWORD *v286; // [sp+C4h] [bp-F8h]
  unsigned int v287; // [sp+C4h] [bp-F8h]
  _DWORD *v288; // [sp+C8h] [bp-F4h]
  __int64 v289; // [sp+CCh] [bp-F0h]
  _QWORD *v290; // [sp+CCh] [bp-F0h]
  int v291; // [sp+CCh] [bp-F0h]
  _QWORD *v292; // [sp+D0h] [bp-ECh]
  int v293; // [sp+D0h] [bp-ECh]
  __int64 v294; // [sp+D4h] [bp-E8h]
  __int64 v295; // [sp+D4h] [bp-E8h]
  char *src; // [sp+E0h] [bp-DCh]
  int v298; // [sp+E4h] [bp-D8h]
  _DWORD *v299; // [sp+E4h] [bp-D8h]
  _DWORD *v300; // [sp+E4h] [bp-D8h]
  _QWORD *v301; // [sp+E8h] [bp-D4h]
  _QWORD *v302; // [sp+E8h] [bp-D4h]
  _QWORD *v303; // [sp+E8h] [bp-D4h]
  _QWORD *v304; // [sp+E8h] [bp-D4h]
  _QWORD *v305; // [sp+ECh] [bp-D0h]
  _DWORD *v306; // [sp+ECh] [bp-D0h]
  _QWORD *v307; // [sp+ECh] [bp-D0h]
  _QWORD *v308; // [sp+F0h] [bp-CCh]
  _DWORD *v309; // [sp+F0h] [bp-CCh]
  int v310; // [sp+F4h] [bp-C8h]
  _QWORD *v311; // [sp+F4h] [bp-C8h]
  int v312; // [sp+F4h] [bp-C8h]
  _DWORD *v313; // [sp+F4h] [bp-C8h]
  _QWORD *v314; // [sp+F8h] [bp-C4h]
  unsigned int v315; // [sp+F8h] [bp-C4h]
  int v316; // [sp+F8h] [bp-C4h]
  _QWORD *v317; // [sp+FCh] [bp-C0h]
  _QWORD *v318; // [sp+FCh] [bp-C0h]
  int v319; // [sp+FCh] [bp-C0h]
  int v320; // [sp+FCh] [bp-C0h]
  _QWORD *v321; // [sp+100h] [bp-BCh]
  int v322; // [sp+100h] [bp-BCh]
  int v323; // [sp+100h] [bp-BCh]
  int v324; // [sp+100h] [bp-BCh]
  int v325; // [sp+104h] [bp-B8h]
  unsigned int v326; // [sp+104h] [bp-B8h]
  int v327; // [sp+108h] [bp-B4h]
  int v328; // [sp+108h] [bp-B4h]
  unsigned int v329; // [sp+108h] [bp-B4h]
  int v330; // [sp+10Ch] [bp-B0h]
  int v331; // [sp+10Ch] [bp-B0h]
  unsigned int v332; // [sp+10Ch] [bp-B0h]
  int v333; // [sp+110h] [bp-ACh]
  unsigned int v334; // [sp+110h] [bp-ACh]
  unsigned int v335; // [sp+110h] [bp-ACh]
  int v336; // [sp+114h] [bp-A8h]
  int v337; // [sp+118h] [bp-A4h]
  __int64 v338; // [sp+154h] [bp-68h]
  int v339; // [sp+15Ch] [bp-60h]
  int v340; // [sp+160h] [bp-5Ch]
  __int64 *v341; // [sp+174h] [bp-48h]
  __int64 v342; // [sp+178h] [bp-44h] BYREF
  __int64 v343; // [sp+180h] [bp-3Ch]
  __int64 v344; // [sp+188h] [bp-34h]
  __int64 v345; // [sp+190h] [bp-2Ch]
  __int64 v346; // [sp+198h] [bp-24h]
  int v347; // [sp+1A0h] [bp-1Ch]
  int v348; // [sp+1A4h] [bp-18h]
  __int64 v349; // [sp+1A8h] [bp-14h]
  __int64 v350; // [sp+1B0h] [bp-Ch]
  char v351; // [sp+1B8h] [bp-4h] BYREF

  v3 = *((_DWORD *)a1 + 16);
  v4 = 64 - v3;
  src = a2;
  if ( 64 - v3 > a3 )
  {
    result = memcpy((char *)a1 + v3, a2, a3);
    *((_DWORD *)a1 + 16) = v3 + a3;
  }
  else
  {
    v5 = &v342;
    v6 = a1 + 9;
    v7 = a1 + 17;
    v341 = a1 + 9;
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
      for ( i = a3; ; i = v14 )
      {
        if ( v4 >= i )
          v4 = i;
        v15 = (char *)a1 + v3;
        v3 += v4;
        memcpy(v15, src, v4);
        na = i - v4;
        src += v4;
        if ( v3 == 64 )
        {
          v135 = 0;
          v294 = *a1 ^ v342;
          v257 = *a1;
          LODWORD(v289) = *((_DWORD *)a1 + 2) ^ v343;
          v261 = a1[1];
          HIDWORD(v289) = HIDWORD(v261) ^ HIDWORD(v343);
          v266 = a1[2];
          v271 = a1[3];
          v285 = v266 ^ v344;
          v236 = v271 ^ v345;
          v338 = v346;
          v240 = a1[4] ^ v346;
          v277 = a1[4];
          v339 = v347;
          LODWORD(v245) = *((_DWORD *)a1 + 10) ^ v347;
          v340 = v348;
          v282 = *((_DWORD *)a1 + 11);
          HIDWORD(v245) = v282 ^ v348;
          v248 = a1[6] ^ v349;
          v253 = a1[7] ^ v350;
          do
          {
            v141 = v294 ^ v135;
            v157 = (v135 + 48) ^ v236;
            v166 = v245 ^ (v135 + 80);
            v137 = HIDWORD(v236) ^ ((unsigned __int64)(v135 + 48) >> 32);
            v162 = HIDWORD(v240) ^ ((unsigned __int64)(v135 + 64) >> 32);
            v173 = v248 ^ (v135 + 96);
            v177 = v253 ^ (v135 + 112);
            v150 = v289 ^ (v135 + 16);
            v16 = (v135 + 32) ^ v285;
            v17 = ((unsigned __int64)(v135 + 80) >> 32) ^ HIDWORD(v245);
            v195 = v240 ^ (v135 + 64);
            v18 = ((unsigned __int64)(v135 + 96) >> 32) ^ HIDWORD(v248);
            v185 = HIDWORD(v289) ^ ((unsigned __int64)(v135 + 16) >> 32);
            v190 = HIDWORD(v285) ^ ((unsigned __int64)(v135 + 32) >> 32);
            v19 = (HIDWORD(v253) ^ ((unsigned __int64)(v135 + 112) >> 32)) >> 24;
            v202 = HIBYTE(v185);
            v212 = &qword_17B6F8[HIBYTE(v157)];
            v252 = &qword_17B6F8[HIBYTE(v166)];
            v222 = &dword_179F00[2 * ((unsigned int)(HIDWORD(v294) ^ HIDWORD(v135)) >> 24)];
            v243 = &qword_17B6F8[HIBYTE(v195)];
            v20 = &qword_17B6F8[((unsigned int)v294 ^ (unsigned int)v135) >> 24];
            v290 = &qword_17B6F8[HIBYTE(v173)];
            v301 = &qword_17B6F8[((unsigned int)v253 ^ ((_DWORD)v135 + 112)) >> 24];
            v237 = HIBYTE(v18);
            LODWORD(v294) = &dword_179F00[2 * HIBYTE(v137)];
            v305 = v20;
            v233 = HIBYTE(v17);
            v21 = &qword_17A708[BYTE1(v150)];
            v22 = &dword_17AF08[2 * BYTE2(v16)];
            v310 = *((_DWORD *)&unk_17C700 + 2 * BYTE1(v17) + 1);
            v321 = &qword_17B6F8[HIBYTE(v16)];
            v298 = *((_DWORD *)&unk_17C700 + 2 * BYTE1(v17));
            v327 = (unsigned __int8)((v135 + 32) ^ v285);
            v230 = &qword_17A708[BYTE1(v16)];
            v241 = &dword_17AF08[2 * BYTE2(v157)];
            v246 = &qword_17BF08[(unsigned __int8)(((unsigned __int64)(v135 + 80) >> 32) ^ BYTE4(v245))];
            v23 = BYTE1(v18);
            v24 = (_DWORD *)((char *)&unk_17CF00 + 8 * BYTE2(v18));
            v238 = BYTE2(v17);
            v25 = *((_DWORD *)v21 - 2);
            v26 = dword_179700[2 * (unsigned __int8)v141 + 1]
                ^ ((unsigned __int64)(v135 + 1) >> 32)
                ^ dword_179F00[2 * v19 + 1]
                ^ *((_DWORD *)v21 - 1);
            v254 = &qword_17BF08[(unsigned __int8)v18];
            v27 = (unsigned __int8)((unsigned int)(HIDWORD(v294) ^ HIDWORD(v135)) >> 16);
            v333 = (unsigned __int8)v157;
            v249 = &qword_17A708[BYTE1(v157)];
            v28 = BYTE6(v177);
            v29 = dword_179700[2 * (unsigned __int8)v141]
                ^ (v135 + 1)
                ^ dword_179F00[2 * v19]
                ^ v25
                ^ *(v22 - 2)
                ^ *((_DWORD *)v212 + 2);
            v30 = v222[1] ^ ((unsigned __int64)(v135 + 17) >> 32) ^ dword_179700[2 * (unsigned __int8)v150 + 1];
            v31 = &qword_17BF08[(unsigned __int8)v162];
            v325 = *v222 ^ (v135 + 17) ^ dword_179700[2 * (unsigned __int8)v150];
            v32 = *((_DWORD *)v31 - 1);
            v33 = *((_DWORD *)v31 - 2);
            v34 = BYTE5(v177);
            v292 = &qword_17BF08[BYTE4(v177)];
            v330 = (unsigned __int8)((unsigned __int16)(WORD2(v294) ^ WORD2(v135)) >> 8);
            HIDWORD(v177) = &qword_17BF08[(unsigned __int8)(BYTE4(v294) ^ BYTE4(v135))];
            v286 = &qword_17A708[BYTE1(v195)];
            v288 = &dword_17AF08[2 * BYTE2(v166)];
            v337 = BYTE2(v185);
            v223 = (unsigned __int8)v166;
            HIDWORD(v294) = &qword_17A708[BYTE1(v166)];
            v35 = v26 ^ *(v22 - 1) ^ *((_DWORD *)v212 + 3) ^ v32 ^ v310;
            v167 = *((_DWORD *)&unk_17CF00 + 2 * v28);
            v36 = v29 ^ v33 ^ v298;
            v299 = &dword_17AF08[2 * BYTE2(v173)];
            v213 = BYTE1(v185);
            v311 = &qword_17BF08[(unsigned __int8)v185];
            v158 = v35 ^ v24[1];
            v217 = BYTE2(v190);
            v146 = v36 ^ *v24;
            v37 = *((_DWORD *)&unk_17CF00 + 2 * v27 + 1);
            v38 = v325 ^ *((_DWORD *)v230 - 2) ^ *(v241 - 2) ^ *((_DWORD *)v243 + 2);
            v39 = v30 ^ *((_DWORD *)v230 - 1) ^ *(v241 - 1) ^ *((_DWORD *)v243 + 3);
            v244 = &qword_17A708[BYTE1(v173)];
            v40 = *((_DWORD *)&unk_17CF00 + 2 * v27);
            v41 = v38 ^ *((_DWORD *)v246 - 2) ^ *((_DWORD *)&unk_17C700 + 2 * v23);
            v42 = *((_DWORD *)&unk_17C700 + 2 * v23 + 1)
                ^ v39
                ^ *((_DWORD *)v246 - 1)
                ^ *((_DWORD *)&unk_17CF00 + 2 * v28 + 1);
            v231 = (unsigned __int8)v173;
            v43 = dword_179F00[2 * HIBYTE(v190)];
            v336 = dword_179F00[2 * HIBYTE(v190) + 1];
            v247 = &dword_17AF08[2 * BYTE2(v177)];
            LOBYTE(v27) = v190;
            v191 = BYTE1(v190);
            v314 = &qword_17BF08[(unsigned __int8)v27];
            v44 = v141;
            v142 = v42;
            v256 = &dword_17AF08[2 * BYTE2(v44)];
            v326 = v41 ^ v167;
            v317 = &qword_17A708[BYTE1(v44)];
            v206 = (unsigned __int8)v177;
            v186 = &qword_17A708[BYTE1(v177)];
            v45 = *((_DWORD *)&unk_17C700 + 2 * v34);
            v46 = *((_DWORD *)&unk_17C700 + 2 * v34 + 1);
            v47 = *(_QWORD *)&dword_17AF08[2 * BYTE2(v195) - 2];
            v168 = dword_179F00[2 * v202]
                 ^ v40
                 ^ dword_179700[2 * v327]
                 ^ (v135 + 33)
                 ^ *((_DWORD *)v249 - 2)
                 ^ v47
                 ^ *((_DWORD *)v252 + 2)
                 ^ *((_DWORD *)v254 - 2)
                 ^ v45;
            v174 = dword_179F00[2 * v202 + 1]
                 ^ v37
                 ^ dword_179700[2 * v327 + 1]
                 ^ ((unsigned __int64)(v135 + 33) >> 32)
                 ^ *((_DWORD *)v249 - 1)
                 ^ HIDWORD(v47)
                 ^ *((_DWORD *)v252 + 3)
                 ^ *((_DWORD *)v254 - 1)
                 ^ v46;
            v48 = &dword_179700[2 * (unsigned __int8)v195];
            v255 = &dword_179700[2 * (unsigned __int8)v177];
            LODWORD(v177) = dword_179700[2 * v333]
                          ^ *((_DWORD *)&unk_17C700 + 2 * v330)
                          ^ (v135 + 49)
                          ^ v43
                          ^ *((_DWORD *)v286 - 2)
                          ^ *(v288 - 2)
                          ^ *((_DWORD *)v290 + 2)
                          ^ *((_DWORD *)v292 - 2)
                          ^ *((_DWORD *)&unk_17CF00 + 2 * v337);
            v49 = *(_DWORD *)(HIDWORD(v177) - 8);
            HIDWORD(v47) = *(_DWORD *)(HIDWORD(v177) - 4);
            HIDWORD(v177) = *((_DWORD *)v290 + 3)
                          ^ dword_179700[2 * v333 + 1]
                          ^ *((_DWORD *)&unk_17C700 + 2 * v330 + 1)
                          ^ ((unsigned __int64)(v135 + 49) >> 32)
                          ^ v336
                          ^ *((_DWORD *)v286 - 1)
                          ^ *(v288 - 1)
                          ^ *((_DWORD *)v292 - 1)
                          ^ *((_DWORD *)&unk_17CF00 + 2 * v337 + 1);
            v50 = *(_DWORD *)v294 ^ v49 ^ *v48 ^ (v135 + 65);
            v51 = *(_DWORD *)(v294 + 4)
                ^ HIDWORD(v47)
                ^ v48[1]
                ^ ((unsigned __int64)(v135 + 65) >> 32)
                ^ *(_DWORD *)(HIDWORD(v294) - 4);
            v293 = *((_DWORD *)&unk_17C700 + 2 * v191 + 1);
            v52 = *(_DWORD *)(HIDWORD(v294) - 8);
            v291 = *((_DWORD *)&unk_17C700 + 2 * v191);
            v295 = *((_QWORD *)&unk_17CF00 + BYTE2(v137));
            v53 = &dword_17AF08[2 * BYTE2(v150)];
            v151 = &qword_17B6F8[HIBYTE(v150)];
            v192 = v50 ^ v52 ^ *(v299 - 2) ^ *((_DWORD *)v301 + 2);
            v54 = &qword_17BF08[(unsigned __int8)v137];
            LODWORD(v47) = *(v256 - 2)
                         ^ dword_179700[2 * v231]
                         ^ (v135 + 97)
                         ^ dword_179F00[2 * v233]
                         ^ *((_DWORD *)v186 - 2)
                         ^ *((_DWORD *)v151 + 2)
                         ^ *((_DWORD *)v314 - 2);
            v55 = (_DWORD *)((char *)&unk_17C700 + 8 * BYTE1(v137));
            v56 = *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v162) + 1)
                ^ dword_179700[2 * v231 + 1]
                ^ *(v256 - 1)
                ^ (__CFADD__((_DWORD)v135, 97) + HIDWORD(v135))
                ^ dword_179F00[2 * v233 + 1]
                ^ *((_DWORD *)v186 - 1)
                ^ *((_DWORD *)v151 + 3)
                ^ *((_DWORD *)v314 - 1)
                ^ v55[1];
            v187 = v255[1]
                 ^ *((_DWORD *)v317 - 1)
                 ^ ((unsigned __int64)(v135 + 113) >> 32)
                 ^ dword_179F00[2 * v237 + 1]
                 ^ *(v53 - 1)
                 ^ *((_DWORD *)v321 + 3)
                 ^ *((_DWORD *)v54 - 1)
                 ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v162) + 1)
                 ^ *((_DWORD *)&unk_17CF00 + 2 * v238 + 1);
            v57 = dword_179700[2 * v223 + 1]
                ^ *((_DWORD *)v305 + 3)
                ^ ((unsigned __int64)(v135 + 81) >> 32)
                ^ dword_179F00[2 * HIBYTE(v162) + 1]
                ^ *((_DWORD *)v244 - 1)
                ^ *(v247 - 1)
                ^ *((_DWORD *)v311 - 1)
                ^ v293
                ^ HIDWORD(v295);
            v287 = v47 ^ *v55 ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v162));
            v250 = (v135 + 81)
                 ^ *((_DWORD *)v305 + 2)
                 ^ dword_179700[2 * v223]
                 ^ dword_179F00[2 * HIBYTE(v162)]
                 ^ *((_DWORD *)v244 - 2)
                 ^ *(v247 - 2)
                 ^ *((_DWORD *)v311 - 2)
                 ^ v291
                 ^ v295;
            v138 = v192 ^ *((_DWORD *)&unk_17C700 + 2 * v213) ^ *((_DWORD *)&unk_17CF00 + 2 * v217);
            v163 = dword_179700[2 * v206]
                 ^ *((_DWORD *)v317 - 2)
                 ^ (v135 + 113)
                 ^ dword_179F00[2 * v237]
                 ^ *(v53 - 2)
                 ^ *((_DWORD *)v321 + 2)
                 ^ *((_DWORD *)v54 - 2)
                 ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v162))
                 ^ *((_DWORD *)&unk_17CF00 + 2 * v238);
            v152 = v51
                 ^ *(v299 - 1)
                 ^ *((_DWORD *)v301 + 3)
                 ^ *((_DWORD *)&unk_17C700 + 2 * v213 + 1)
                 ^ *((_DWORD *)&unk_17CF00 + 2 * v217 + 1);
            v218 = &qword_17B6F8[BYTE3(v177)];
            v234 = &qword_17B6F8[HIBYTE(v250)];
            v239 = &dword_179F00[2 * HIBYTE(v174)];
            v242 = &qword_17B6F8[HIBYTE(v287)];
            v318 = &qword_17B6F8[HIBYTE(v168)];
            v58 = &qword_17A708[BYTE1(v326)];
            v59 = &qword_17A708[BYTE1(v168)];
            v225 = &qword_17BF08[(unsigned __int8)v57];
            v135 += 2;
            v322 = (unsigned __int8)v168;
            v169 = &dword_17AF08[2 * BYTE2(v168)];
            v60 = *(v59 - 1);
            v61 = &qword_17BF08[(unsigned __int8)v152];
            v62 = *(_QWORD *)&dword_17AF08[2 * BYTE2(v177) - 2];
            v331 = (unsigned __int8)v177;
            LODWORD(v47) = dword_179700[2 * (unsigned __int8)v326 + 1]
                         ^ dword_179F00[2 * HIBYTE(v158) + 1]
                         ^ HIDWORD(v60)
                         ^ HIDWORD(v62);
            v214 = &qword_17A708[BYTE1(v177)];
            HIDWORD(v47) = dword_179700[2 * (unsigned __int8)v326] ^ dword_179F00[2 * HIBYTE(v158)] ^ v60 ^ v62;
            v63 = (_DWORD *)((char *)&unk_17CF00 + 8 * BYTE2(v187));
            v64 = qword_17B6F8[HIBYTE(v138) + 1];
            HIDWORD(v289) = v47
                          ^ HIDWORD(v64)
                          ^ *((_DWORD *)v225 - 1)
                          ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v56) + 1)
                          ^ v63[1];
            LODWORD(v289) = HIDWORD(v47)
                          ^ v64
                          ^ *((_DWORD *)v225 - 2)
                          ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v56))
                          ^ *v63;
            v226 = &dword_17AF08[2 * BYTE2(v250)];
            HIDWORD(v47) = *(v169 - 2);
            v65 = dword_179700[2 * (unsigned __int8)v146 + 1]
                ^ *((_DWORD *)v58 - 1)
                ^ dword_179F00[2 * HIBYTE(v187) + 1]
                ^ *(v169 - 1);
            HIDWORD(v64) = *((_DWORD *)v218 + 2);
            v170 = (unsigned __int8)v250;
            v66 = v65 ^ *((_DWORD *)v218 + 3);
            v219 = &qword_17A708[BYTE1(v250)];
            v251 = &dword_17AF08[2 * BYTE2(v287)];
            LODWORD(v177) = (unsigned __int8)v287;
            v302 = &qword_17A708[BYTE1(v287)];
            HIDWORD(v294) = v66
                          ^ *((_DWORD *)v61 - 1)
                          ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v57) + 1)
                          ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v56) + 1);
            LODWORD(v294) = dword_179700[2 * (unsigned __int8)v146]
                          ^ *((_DWORD *)v58 - 2)
                          ^ dword_179F00[2 * HIBYTE(v187)]
                          ^ HIDWORD(v47)
                          ^ HIDWORD(v64)
                          ^ *((_DWORD *)v61 - 2)
                          ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v57))
                          ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v56));
            v285 = *(_QWORD *)&dword_17AF08[2 * BYTE2(v138) - 2]
                 ^ *((_QWORD *)&unk_17CF00 + BYTE2(v158))
                 ^ *(_QWORD *)&dword_179700[2 * v322]
                 ^ *(_QWORD *)&dword_179F00[2 * HIBYTE(v142)]
                 ^ *(v214 - 1)
                 ^ v234[1]
                 ^ qword_17BF08[(unsigned __int8)v56 - 1]
                 ^ *((_QWORD *)&unk_17C700 + BYTE1(v187));
            v236 = *(_QWORD *)&dword_179700[2 * v331]
                 ^ *((_QWORD *)&unk_17C700 + BYTE1(v158))
                 ^ *((_QWORD *)&unk_17CF00 + BYTE2(v142))
                 ^ *v239
                 ^ qword_17A708[BYTE1(v138) - 1]
                 ^ *((_QWORD *)v226 - 1)
                 ^ v242[1]
                 ^ qword_17BF08[(unsigned __int8)v187 - 1];
            v240 = qword_17BF08[(unsigned __int8)v158 - 1]
                 ^ *(_QWORD *)&dword_179700[2 * (unsigned __int8)v138]
                 ^ *((_QWORD *)&unk_17C700 + BYTE1(v142))
                 ^ *(_QWORD *)&dword_179F00[2 * HIBYTE(HIDWORD(v177))]
                 ^ *(v219 - 1)
                 ^ *((_QWORD *)v251 - 1)
                 ^ qword_17B6F8[HIBYTE(v163) + 1]
                 ^ *((_QWORD *)&unk_17CF00 + BYTE2(v174));
            v245 = *(_QWORD *)&dword_179700[2 * v170]
                 ^ qword_17B6F8[HIBYTE(v146) + 1]
                 ^ qword_17BF08[(unsigned __int8)v142 - 1]
                 ^ *(_QWORD *)&dword_179F00[2 * HIBYTE(v152)]
                 ^ *(v302 - 1)
                 ^ *(_QWORD *)&dword_17AF08[2 * BYTE2(v163) - 2]
                 ^ *((_QWORD *)&unk_17C700 + BYTE1(v174))
                 ^ *((_QWORD *)&unk_17CF00 + BYTE6(v177));
            v253 = qword_17A708[BYTE1(v146) - 1]
                 ^ *(_QWORD *)&dword_179700[2 * (unsigned __int8)v163]
                 ^ *(_QWORD *)&dword_17AF08[2 * BYTE2(v326) - 2]
                 ^ *(_QWORD *)&dword_179F00[2 * HIBYTE(v56)]
                 ^ v318[1]
                 ^ qword_17BF08[BYTE4(v177) - 1]
                 ^ *((_QWORD *)&unk_17C700 + BYTE1(v152))
                 ^ *((_QWORD *)&unk_17CF00 + BYTE2(v57));
            v248 = *(_QWORD *)&dword_17AF08[2 * BYTE2(v146) - 2]
                 ^ *(_QWORD *)&dword_179700[2 * v177]
                 ^ qword_17B6F8[HIBYTE(v326) + 1]
                 ^ *(_QWORD *)&dword_179F00[2 * HIBYTE(v57)]
                 ^ qword_17A708[BYTE1(v163) - 1]
                 ^ qword_17BF08[(unsigned __int8)v174 - 1]
                 ^ *((_QWORD *)&unk_17C700 + BYTE5(v177))
                 ^ *((_QWORD *)&unk_17CF00 + BYTE2(v152));
          }
          while ( v135 != 10 );
          v136 = -1;
          v67 = *((_DWORD *)a1 + 13);
          v69 = *((_DWORD *)a1 + 15);
          v68 = *((_DWORD *)a1 + 14);
          v70 = *((_DWORD *)a1 + 10);
          v71 = *((_DWORD *)a1 + 12);
          do
          {
            v143 = HIDWORD(v257) ^ v136;
            v196 = ~v68;
            v147 = ~(_DWORD)v261;
            v159 = HIDWORD(v261) ^ v136 ^ 0x10000000;
            v210 = v136 ^ 0x60000000 ^ v67;
            v164 = ~(_DWORD)v266;
            v182 = ~v70;
            v178 = ~(_DWORD)v277;
            v188 = v282 ^ v136 ^ 0x50000000;
            v175 = HIDWORD(v271) ^ v136 ^ 0x30000000;
            v171 = HIDWORD(v266) ^ v136 ^ 0x20000000;
            v215 = v136 ^ 0x70000000 ^ v69;
            v220 = HIBYTE(v159);
            v203 = ~(_WORD)v257;
            v315 = (HIDWORD(v257) ^ (unsigned int)v136) >> 24;
            v72 = &qword_17B6F8[(unsigned int)~(_DWORD)v257 >> 24];
            v332 = HIBYTE(v171);
            v260 = &qword_17B6F8[(unsigned int)~v68 >> 24];
            HIDWORD(v266) = &qword_17B6F8[(unsigned int)~(_DWORD)v266 >> 24];
            HIDWORD(v261) = &qword_17B6F8[(unsigned int)~(_DWORD)v261 >> 24];
            v334 = HIBYTE(v175);
            v73 = &dword_179F00[2 * HIBYTE(v215)];
            HIDWORD(v271) = &qword_17B6F8[(unsigned int)~(_DWORD)v271 >> 24];
            v232 = HIBYTE(v188);
            v283 = &qword_17B6F8[(unsigned int)~(_DWORD)v277 >> 24];
            v74 = &qword_17BF08[(unsigned __int8)v159];
            v207 = HIDWORD(v277) ^ v136 ^ 0x40000000;
            v75 = &qword_17A708[(unsigned __int8)((unsigned __int16)~(_WORD)v277 >> 8)];
            v224 = HIBYTE(v207);
            v76 = &dword_179700[2 * (unsigned __int8)~(_BYTE)v266];
            v77 = &dword_17AF08[2 * (unsigned __int8)((unsigned int)~v71 >> 16)];
            v278 = (unsigned __int8)~(_BYTE)v261;
            v78 = *(v77 - 2) ^ ~*v76 ^ *v73 ^ *((_DWORD *)v75 - 2);
            v227 = &qword_17A708[(unsigned __int8)((unsigned __int16)~(_WORD)v271 >> 8)];
            v262 = &qword_17BF08[(unsigned __int8)v143];
            v153 = 0xFFFFFF - v136;
            v79 = v76[1] ^ (0xFFFFFF - v136) ^ 0xEFFFFFFF ^ v73[1] ^ *((_DWORD *)v75 - 1);
            v80 = (unsigned __int8)~(_BYTE)v271;
            v300 = &dword_17AF08[2 * (unsigned __int8)((unsigned int)~(_DWORD)v271 >> 16)];
            v81 = (unsigned __int8)v178;
            v306 = &dword_17AF08[2 * BYTE2(v178)];
            v82 = &qword_17A708[(unsigned __int8)((unsigned __int16)~(_WORD)v71 >> 8)];
            v267 = &dword_17AF08[2 * (unsigned __int8)((unsigned int)~(_DWORD)v257 >> 16)];
            v272 = &qword_17BF08[(unsigned __int8)v175];
            v83 = *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v188));
            v323 = BYTE1(v188);
            v235 = BYTE2(v175);
            v280 = &qword_17BF08[(unsigned __int8)v188];
            v189 = v79
                 ^ *(v77 - 1)
                 ^ *((_DWORD *)v72 + 3)
                 ^ *((_DWORD *)v74 - 1)
                 ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v175) + 1)
                 ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v188) + 1);
            v179 = *((_DWORD *)v74 - 2) ^ v78 ^ *((_DWORD *)v72 + 2) ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v175)) ^ v83;
            v84 = dword_179700[2 * v278 + 1]
                ^ dword_179F00[2 * HIBYTE(v210) + 1]
                ^ (v136 - 0xFFFFFF)
                ^ *((_DWORD *)v227 - 1);
            v85 = ~(dword_179700[2 * v278] ^ dword_179F00[2 * HIBYTE(v210)]) ^ *((_DWORD *)v227 - 2);
            v136 -= 0x1FFFFFF;
            v86 = v136 == -167772161;
            v87 = &dword_17AF08[2 * (unsigned __int8)((unsigned int)~v70 >> 16)];
            if ( v136 == -167772161 )
              v86 = 1;
            v258 = &qword_17A708[BYTE1(v182)];
            v88 = *((_DWORD *)v262 - 2);
            v89 = *((_DWORD *)v260 + 3)
                ^ v84
                ^ *(v87 - 1)
                ^ *((_DWORD *)v262 - 1)
                ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v171) + 1);
            v228 = BYTE2(v171);
            v263 = &qword_17BF08[(unsigned __int8)v171];
            v279 = &qword_17BF08[(unsigned __int8)v207];
            v312 = BYTE1(v207);
            v319 = BYTE2(v210);
            v176 = v89 ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v207) + 1);
            v328 = (unsigned __int8)v182;
            v303 = &qword_17B6F8[HIBYTE(v182)];
            v172 = *((_DWORD *)v260 + 2)
                 ^ v85
                 ^ *(v87 - 2)
                 ^ v88
                 ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v171))
                 ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v207));
            v90 = dword_179F00[2 * v220 + 1] ^ dword_179700[2 * v81 + 1] ^ ~(v153 ^ 0x30000000) ^ *((_DWORD *)v82 - 1);
            v91 = *(v267 - 1);
            v208 = (unsigned __int8)v196;
            v92 = *((_DWORD *)v82 - 2) ^ dword_179F00[2 * v220] ^ ~dword_179700[2 * v81] ^ *(v267 - 2);
            v93 = &qword_17A708[BYTE1(v196)];
            v94 = &dword_17AF08[2 * BYTE2(v147)];
            v268 = &qword_17A708[BYTE1(v147)];
            v95 = BYTE1(v210);
            v96 = v90 ^ v91 ^ *(_DWORD *)(v269 + 12) ^ *((_DWORD *)v272 - 1);
            v97 = v92 ^ *(_DWORD *)(v269 + 8) ^ *((_DWORD *)v272 - 2);
            v98 = *((_DWORD *)&unk_17C700 + 2 * v323);
            v270 = &qword_17BF08[(unsigned __int8)v210];
            v99 = v96 ^ *((_DWORD *)&unk_17C700 + 2 * v323 + 1);
            v100 = BYTE2(v143);
            v211 = BYTE1(v143);
            v324 = (unsigned __int8)~(_BYTE)v71;
            v183 = v97 ^ v98 ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v215));
            v308 = &qword_17B6F8[(unsigned int)~v71 >> 24];
            v193 = v99 ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v215) + 1);
            v101 = ~dword_179700[2 * v80] ^ dword_179F00[2 * v315] ^ *((_DWORD *)v258 - 2);
            v102 = dword_179700[2 * v80 + 1] ^ ~(v153 ^ 0x20000000) ^ dword_179F00[2 * v315 + 1] ^ *((_DWORD *)v258 - 1);
            v103 = dword_17AF08[2 * BYTE2(v196) - 1];
            v259 = &dword_17AF08[2 * BYTE2(v164)];
            v273 = &qword_17A708[BYTE1(v164)];
            v104 = dword_17AF08[2 * BYTE2(v196) - 2] ^ v101;
            BYTE1(v101) = BYTE1(v159);
            v197 = &qword_17BF08[(unsigned __int8)v215];
            v160 = BYTE2(v159);
            v144 = v104
                 ^ *(_DWORD *)(v264 + 8)
                 ^ *((_DWORD *)v263 - 2)
                 ^ *((_DWORD *)&unk_17C700 + 2 * v312)
                 ^ *((_DWORD *)&unk_17CF00 + 2 * v319);
            v148 = v103
                 ^ v102
                 ^ *(_DWORD *)(v264 + 12)
                 ^ *((_DWORD *)v263 - 1)
                 ^ *((_DWORD *)&unk_17C700 + 2 * v312 + 1)
                 ^ *((_DWORD *)&unk_17CF00 + 2 * v319 + 1);
            v105 = *(v93 - 1);
            v106 = ~dword_179700[2 * v328] ^ dword_179F00[2 * v332] ^ v105;
            v107 = dword_179700[2 * v328 + 1]
                 ^ v153
                 ^ 0xBFFFFFFF
                 ^ dword_179F00[2 * v332 + 1]
                 ^ HIDWORD(v105)
                 ^ *(v94 - 1);
            v108 = *(_QWORD *)(v274 + 8);
            v265 = *((_DWORD *)&unk_17CF00 + 2 * v160);
            v275 = *((_DWORD *)&unk_17CF00 + 2 * v160 + 1);
            v109 = &qword_17A708[HIBYTE(v203)];
            v165 = v107
                 ^ HIDWORD(v108)
                 ^ *((_DWORD *)v279 - 1)
                 ^ *((_DWORD *)&unk_17C700 + 2 * v95 + 1)
                 ^ *((_DWORD *)&unk_17CF00 + 2 * v100 + 1);
            v161 = v106
                 ^ *(v94 - 2)
                 ^ v108
                 ^ *((_DWORD *)v279 - 2)
                 ^ *((_DWORD *)&unk_17C700 + 2 * v95)
                 ^ *((_DWORD *)&unk_17CF00 + 2 * v100);
            v110 = ~(v153 ^ 0x70000000)
                 ^ dword_179700[2 * (unsigned __int8)v203 + 1]
                 ^ dword_179F00[2 * v232 + 1]
                 ^ *((_DWORD *)v273 - 1)
                 ^ *(v306 - 1)
                 ^ *((_DWORD *)v308 + 3)
                 ^ *((_DWORD *)v197 - 1)
                 ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v101) + 1)
                 ^ *((_DWORD *)&unk_17CF00 + 2 * v235 + 1);
            LODWORD(v108) = ~dword_179700[2 * (unsigned __int8)v203]
                          ^ dword_179F00[2 * v232]
                          ^ *((_DWORD *)v273 - 2)
                          ^ *(v306 - 2)
                          ^ *((_DWORD *)v308 + 2)
                          ^ *((_DWORD *)v197 - 2)
                          ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v101));
            v204 = v153
                 ^ 0x9FFFFFFF
                 ^ dword_179700[2 * v208 + 1]
                 ^ dword_179F00[2 * v224 + 1]
                 ^ *((_DWORD *)v268 - 1)
                 ^ *(v300 - 1)
                 ^ *((_DWORD *)v303 + 3)
                 ^ *((_DWORD *)v270 - 1)
                 ^ *((_DWORD *)&unk_17C700 + 2 * v211 + 1)
                 ^ *((_DWORD *)&unk_17CF00 + 2 * v228 + 1);
            v198 = ~dword_179700[2 * v208]
                 ^ dword_179F00[2 * v224]
                 ^ *((_DWORD *)v268 - 2)
                 ^ *(v300 - 2)
                 ^ *((_DWORD *)v303 + 2)
                 ^ *((_DWORD *)v270 - 2)
                 ^ *((_DWORD *)&unk_17C700 + 2 * v211)
                 ^ *((_DWORD *)&unk_17CF00 + 2 * v228);
            v154 = dword_179F00[2 * v334 + 1]
                 ^ dword_179700[2 * v324 + 1]
                 ^ v153
                 ^ 0xAFFFFFFF
                 ^ *((_DWORD *)v109 - 1)
                 ^ *(v259 - 1)
                 ^ *((_DWORD *)v283 + 3)
                 ^ *((_DWORD *)v280 - 1)
                 ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v215) + 1)
                 ^ v275;
            v139 = *((_DWORD *)v109 - 2)
                 ^ ~dword_179700[2 * v324]
                 ^ dword_179F00[2 * v334]
                 ^ *(v259 - 2)
                 ^ *((_DWORD *)v283 + 2)
                 ^ *((_DWORD *)v280 - 2)
                 ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v215))
                 ^ v265;
            v209 = *((_DWORD *)&unk_17CF00 + 2 * v235) ^ v108;
            v329 = HIBYTE(v148);
            v335 = HIBYTE(v193);
            v229 = HIBYTE(v154);
            v284 = &qword_17B6F8[HIBYTE(v183)];
            v304 = &qword_17B6F8[HIBYTE(v161)];
            v111 = &dword_179F00[2 * HIBYTE(v204)];
            v112 = *v111;
            v113 = &qword_17A708[BYTE1(v183)];
            v114 = qword_17BF08[(unsigned __int8)v176 - 1];
            LODWORD(v108) = &dword_17AF08[2 * BYTE2(v139)];
            v115 = BYTE1(v193);
            v116 = qword_17B6F8[HIBYTE(v209) + 1];
            v117 = v111[1]
                 ^ dword_179700[2 * (unsigned __int8)v179 + 1]
                 ^ *((_DWORD *)v113 - 1)
                 ^ *(_DWORD *)(v108 - 4)
                 ^ HIDWORD(v116)
                 ^ HIDWORD(v114);
            v320 = (unsigned __int8)v183;
            v309 = &dword_17AF08[2 * BYTE2(v183)];
            v118 = v112 ^ dword_179700[2 * (unsigned __int8)v179] ^ *((_DWORD *)v113 - 2) ^ *(_DWORD *)(v108 - 8) ^ v116;
            LODWORD(v116) = &qword_17A708[BYTE1(v139)];
            HIDWORD(v114) = &dword_17AF08[2 * BYTE2(v209)];
            v184 = BYTE2(v148);
            LODWORD(v257) = v118
                          ^ v114
                          ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v148))
                          ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v165));
            HIDWORD(v257) = v117
                          ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v148) + 1)
                          ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v165) + 1);
            v276 = &qword_17A708[BYTE1(v198)];
            v313 = &dword_17AF08[2 * BYTE2(v161)];
            v281 = &qword_17BF08[(unsigned __int8)v193];
            v194 = BYTE2(v193);
            LODWORD(v114) = BYTE1(v154);
            v307 = &qword_17BF08[(unsigned __int8)v154];
            v316 = (unsigned __int8)v139;
            v261 = *(_QWORD *)&dword_179700[2 * (unsigned __int8)v144]
                 ^ *(_QWORD *)&dword_179F00[2 * HIBYTE(v110)]
                 ^ qword_17A708[BYTE1(v161) - 1]
                 ^ *(_QWORD *)&dword_17AF08[2 * BYTE2(v198) - 2]
                 ^ qword_17B6F8[HIBYTE(v172) + 1]
                 ^ qword_17BF08[(unsigned __int8)v189 - 1]
                 ^ *((_QWORD *)&unk_17C700 + v115)
                 ^ *((_QWORD *)&unk_17CF00 + BYTE2(v154));
            v140 = &qword_17B6F8[HIBYTE(v139)];
            v119 = dword_179F00[2 * HIBYTE(v176)] ^ dword_179700[2 * v320] ^ *(_DWORD *)(v116 - 8);
            v120 = dword_179F00[2 * HIBYTE(v176) + 1]
                 ^ dword_179700[2 * v320 + 1]
                 ^ *(_DWORD *)(v116 - 4)
                 ^ *(_DWORD *)(HIDWORD(v114) - 4);
            LODWORD(v116) = &qword_17B6F8[HIBYTE(v179)];
            v121 = *(_DWORD *)(v116 + 12);
            v122 = v119 ^ *(_DWORD *)(HIDWORD(v114) - 8) ^ *(_DWORD *)(v116 + 8);
            v123 = &qword_17BF08[(unsigned __int8)v148];
            LODWORD(v116) = &dword_17AF08[2 * BYTE2(v179)];
            v216 = &qword_17A708[BYTE1(v179)];
            HIDWORD(v116) = BYTE1(v204);
            v149 = &qword_17BF08[(unsigned __int8)v204];
            v221 = (unsigned __int8)v198;
            v155 = &qword_17B6F8[HIBYTE(v198)];
            v180 = &qword_17A708[BYTE1(v172)];
            HIDWORD(v266) = v120
                          ^ v121
                          ^ *((_DWORD *)v123 - 1)
                          ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v165) + 1)
                          ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v204) + 1);
            LODWORD(v266) = v122
                          ^ *((_DWORD *)v123 - 2)
                          ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v165))
                          ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v204));
            v199 = &dword_17AF08[2 * BYTE2(v144)];
            v205 = &qword_17A708[BYTE1(v144)];
            v124 = &qword_17B6F8[HIBYTE(v144)];
            v145 = &qword_17BF08[(unsigned __int8)v110];
            v271 = *(_QWORD *)&dword_179F00[2 * HIBYTE(v189)]
                 ^ *(_QWORD *)&dword_179700[2 * (unsigned __int8)v161]
                 ^ *(v276 - 1)
                 ^ *(_QWORD *)&dword_17AF08[2 * BYTE2(v172) - 2]
                 ^ v124[1]
                 ^ *(v281 - 1)
                 ^ *((_QWORD *)&unk_17C700 + v114)
                 ^ *((_QWORD *)&unk_17CF00 + BYTE2(v110));
            v277 = qword_17BF08[(unsigned __int8)v165 - 1]
                 ^ *(_QWORD *)&dword_179700[2 * v316]
                 ^ *(_QWORD *)&dword_179F00[2 * v329]
                 ^ qword_17A708[BYTE1(v209) - 1]
                 ^ *(_QWORD *)(v116 - 8)
                 ^ v284[1]
                 ^ *((_QWORD *)&unk_17C700 + HIDWORD(v116))
                 ^ *((_QWORD *)&unk_17CF00 + BYTE2(v176));
            v125 = *((_QWORD *)v199 - 1);
            v126 = *((_DWORD *)v304 + 2)
                 ^ dword_179F00[2 * v335]
                 ^ dword_179700[2 * v221]
                 ^ *((_DWORD *)v180 - 2)
                 ^ v125
                 ^ *((_DWORD *)v307 - 2);
            v181 = dword_179F00[2 * v335 + 1]
                 ^ dword_179700[2 * v221 + 1]
                 ^ *((_DWORD *)v180 - 1)
                 ^ HIDWORD(v125)
                 ^ *((_DWORD *)v304 + 3)
                 ^ *((_DWORD *)v307 - 1)
                 ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v110) + 1);
            v71 = dword_179700[2 * (unsigned __int8)v209]
                ^ dword_179F00[2 * HIBYTE(v165)]
                ^ *((_DWORD *)v216 - 2)
                ^ *(v309 - 2)
                ^ *((_DWORD *)v140 + 2)
                ^ *((_DWORD *)v149 - 2)
                ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v176))
                ^ *((_DWORD *)&unk_17CF00 + 2 * v184);
            v68 = dword_179700[2 * (unsigned __int8)v172]
                ^ dword_179F00[2 * v229]
                ^ *((_DWORD *)v205 - 2)
                ^ *(v313 - 2)
                ^ *((_DWORD *)v155 + 2)
                ^ *((_DWORD *)v145 - 2)
                ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v189))
                ^ *((_DWORD *)&unk_17CF00 + 2 * v194);
            v67 = dword_179F00[2 * HIBYTE(v165) + 1]
                ^ dword_179700[2 * (unsigned __int8)v209 + 1]
                ^ *((_DWORD *)v216 - 1)
                ^ *(v309 - 1)
                ^ *((_DWORD *)v140 + 3)
                ^ *((_DWORD *)v149 - 1)
                ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v176) + 1)
                ^ *((_DWORD *)&unk_17CF00 + 2 * v184 + 1);
            v282 = v181 ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v189) + 1);
            v70 = v126 ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v110)) ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v189));
            v69 = dword_179700[2 * (unsigned __int8)v172 + 1]
                ^ dword_179F00[2 * v229 + 1]
                ^ *((_DWORD *)v205 - 1)
                ^ *(v313 - 1)
                ^ *((_DWORD *)v155 + 3)
                ^ *((_DWORD *)v145 - 1)
                ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v189) + 1)
                ^ *((_DWORD *)&unk_17CF00 + 2 * v194 + 1);
          }
          while ( !v86 );
          v156 = a1[17];
          v3 = 0;
          LODWORD(v349) = v248 ^ v349 ^ v71;
          HIDWORD(v349) ^= v67 ^ HIDWORD(v248);
          v342 ^= v294 ^ v257;
          v350 ^= __PAIR64__(v69, v68) ^ v253;
          v343 ^= v289 ^ v261;
          v344 ^= v285 ^ v266;
          v345 ^= v236 ^ v271;
          *((_DWORD *)a1 + 34) = v156 + 1;
          v14 = na;
          v346 = v240 ^ v338 ^ v277;
          v347 = v245 ^ v339 ^ v70;
          v348 = HIDWORD(v245) ^ v340 ^ v282;
          *((_DWORD *)a1 + 35) = (unsigned __int64)(v156 + 1) >> 32;
          if ( !na )
            break;
        }
        else
        {
          v14 = i - v4;
          if ( !na )
            break;
        }
        v4 = 64 - v3;
      }
    }
    v127 = v341;
    v128 = &v342;
    do
    {
      v127 += 2;
      result = *(void **)v128;
      v130 = *((_DWORD *)v128 + 1);
      v131 = *((_DWORD *)v128 + 2);
      v132 = *((_DWORD *)v128 + 3);
      v128 += 2;
      *((_DWORD *)v127 - 4) = result;
      *((_DWORD *)v127 - 3) = v130;
      *((_DWORD *)v127 - 2) = v131;
      *((_DWORD *)v127 - 1) = v132;
    }
    while ( v128 != (__int64 *)&v351 );
    *((_DWORD *)a1 + 16) = v3;
  }
  return result;
}
