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
  int v48; // r11
  int v49; // r9
  int v50; // r3
  int v51; // r11
  _DWORD *v52; // r4
  _QWORD *v53; // r6
  _DWORD *v54; // r11
  unsigned int v55; // r8
  unsigned int v56; // r12
  _QWORD *v57; // lr
  _QWORD *v58; // r3
  int v59; // r6
  __int64 v60; // r10
  _QWORD *v61; // r9
  __int64 v62; // r2
  _DWORD *v63; // r5
  __int64 v64; // r2
  _QWORD *v65; // r12
  int v66; // r5
  int v67; // r5
  int v68; // r4
  int v69; // r5
  int v70; // r1
  int v71; // r2
  int v72; // r4
  int v73; // r5
  int v74; // r3
  _QWORD *v75; // lr
  _DWORD *v76; // r1
  _QWORD *v77; // r7
  _QWORD *v78; // r10
  _DWORD *v79; // r4
  int v80; // r2
  unsigned int v81; // r8
  int v82; // r10
  int v83; // r12
  _QWORD *v84; // r11
  int v85; // r1
  int v86; // r4
  int v87; // lr
  bool v88; // zf
  _DWORD *v89; // r7
  int v90; // r5
  int v91; // r1
  int v92; // r2
  int v93; // r0
  int v94; // r1
  _QWORD *v95; // r5
  _DWORD *v96; // r11
  int v97; // r8
  int v98; // r2
  int v99; // r1
  int v100; // lr
  int v101; // r2
  int v102; // r7
  int v103; // r6
  int v104; // r9
  int v105; // r2
  int v106; // r1
  __int64 v107; // r0
  int v108; // r3
  unsigned int v109; // r2
  __int64 v110; // r0
  _QWORD *v111; // r12
  unsigned int v112; // r5
  int *v113; // r3
  int v114; // r2
  _QWORD *v115; // r12
  __int64 v116; // r8
  int v117; // r4
  __int64 v118; // r10
  int v119; // r3
  int v120; // r2
  int v121; // r12
  int v122; // r2
  int v123; // r7
  int v124; // r12
  _QWORD *v125; // r4
  _QWORD *v126; // r12
  __int64 v127; // r0
  int v128; // r4
  __int64 *v129; // r12
  __int64 *v130; // r4
  void *result; // r0
  int v132; // r1
  int v133; // r2
  int v134; // r3
  __int64 v137; // [sp+8h] [bp-1B4h]
  int v138; // [sp+Ch] [bp-1B0h]
  unsigned int v139; // [sp+14h] [bp-1A8h]
  unsigned int v140; // [sp+14h] [bp-1A8h]
  unsigned int v141; // [sp+14h] [bp-1A8h]
  _QWORD *v142; // [sp+14h] [bp-1A8h]
  int v143; // [sp+18h] [bp-1A4h]
  unsigned int v144; // [sp+18h] [bp-1A4h]
  int v145; // [sp+18h] [bp-1A4h]
  int v146; // [sp+18h] [bp-1A4h]
  unsigned int v147; // [sp+18h] [bp-1A4h]
  _QWORD *v148; // [sp+18h] [bp-1A4h]
  unsigned int v149; // [sp+1Ch] [bp-1A0h]
  int v150; // [sp+1Ch] [bp-1A0h]
  unsigned int v151; // [sp+1Ch] [bp-1A0h]
  _QWORD *v152; // [sp+1Ch] [bp-1A0h]
  unsigned int v153; // [sp+20h] [bp-19Ch]
  _QWORD *v154; // [sp+20h] [bp-19Ch]
  unsigned int v155; // [sp+20h] [bp-19Ch]
  int v156; // [sp+20h] [bp-19Ch]
  unsigned int v157; // [sp+20h] [bp-19Ch]
  _QWORD *v158; // [sp+20h] [bp-19Ch]
  __int64 v159; // [sp+20h] [bp-19Ch]
  unsigned int v160; // [sp+24h] [bp-198h]
  unsigned int v161; // [sp+24h] [bp-198h]
  unsigned int v162; // [sp+24h] [bp-198h]
  int v163; // [sp+24h] [bp-198h]
  unsigned int v164; // [sp+24h] [bp-198h]
  unsigned int v165; // [sp+28h] [bp-194h]
  unsigned int v166; // [sp+28h] [bp-194h]
  int v167; // [sp+28h] [bp-194h]
  unsigned int v168; // [sp+28h] [bp-194h]
  unsigned int v169; // [sp+2Ch] [bp-190h]
  int v170; // [sp+2Ch] [bp-190h]
  unsigned int v171; // [sp+2Ch] [bp-190h]
  _DWORD *v172; // [sp+2Ch] [bp-190h]
  int v173; // [sp+2Ch] [bp-190h]
  unsigned int v174; // [sp+2Ch] [bp-190h]
  unsigned int v175; // [sp+2Ch] [bp-190h]
  unsigned int v176; // [sp+30h] [bp-18Ch]
  unsigned int v177; // [sp+30h] [bp-18Ch]
  unsigned int v178; // [sp+30h] [bp-18Ch]
  unsigned int v179; // [sp+30h] [bp-18Ch]
  __int64 v180; // [sp+34h] [bp-188h]
  int v181; // [sp+34h] [bp-188h]
  unsigned int v182; // [sp+34h] [bp-188h]
  _QWORD *v183; // [sp+34h] [bp-188h]
  int v184; // [sp+34h] [bp-188h]
  unsigned int v185; // [sp+38h] [bp-184h]
  unsigned int v186; // [sp+38h] [bp-184h]
  int v187; // [sp+38h] [bp-184h]
  unsigned int v188; // [sp+3Ch] [bp-180h]
  _QWORD *v189; // [sp+3Ch] [bp-180h]
  unsigned int v190; // [sp+3Ch] [bp-180h]
  _QWORD *v191; // [sp+3Ch] [bp-180h]
  unsigned int v192; // [sp+3Ch] [bp-180h]
  unsigned int v193; // [sp+3Ch] [bp-180h]
  unsigned int v194; // [sp+40h] [bp-17Ch]
  int v195; // [sp+40h] [bp-17Ch]
  int v196; // [sp+40h] [bp-17Ch]
  int v197; // [sp+40h] [bp-17Ch]
  unsigned int v198; // [sp+40h] [bp-17Ch]
  int v199; // [sp+40h] [bp-17Ch]
  unsigned int v200; // [sp+44h] [bp-178h]
  unsigned int v201; // [sp+44h] [bp-178h]
  _DWORD *v202; // [sp+44h] [bp-178h]
  int v203; // [sp+44h] [bp-178h]
  _QWORD *v204; // [sp+44h] [bp-178h]
  unsigned int v205; // [sp+44h] [bp-178h]
  _DWORD *v206; // [sp+44h] [bp-178h]
  size_t na; // [sp+48h] [bp-174h]
  unsigned int v209; // [sp+4Ch] [bp-170h]
  _DWORD *v210; // [sp+4Ch] [bp-170h]
  __int16 v211; // [sp+4Ch] [bp-170h]
  unsigned int v212; // [sp+4Ch] [bp-170h]
  _QWORD *v213; // [sp+4Ch] [bp-170h]
  int v214; // [sp+50h] [bp-16Ch]
  unsigned int v215; // [sp+50h] [bp-16Ch]
  int v216; // [sp+50h] [bp-16Ch]
  unsigned int v217; // [sp+50h] [bp-16Ch]
  unsigned int v218; // [sp+54h] [bp-168h]
  int v219; // [sp+54h] [bp-168h]
  _QWORD *v220; // [sp+58h] [bp-164h]
  int v221; // [sp+58h] [bp-164h]
  _QWORD *v222; // [sp+58h] [bp-164h]
  _QWORD *v223; // [sp+58h] [bp-164h]
  unsigned int v224; // [sp+58h] [bp-164h]
  _QWORD *v225; // [sp+58h] [bp-164h]
  int v226; // [sp+5Ch] [bp-160h]
  _QWORD *v227; // [sp+5Ch] [bp-160h]
  _QWORD *v228; // [sp+5Ch] [bp-160h]
  unsigned int v229; // [sp+5Ch] [bp-160h]
  int v230; // [sp+5Ch] [bp-160h]
  _DWORD *v231; // [sp+60h] [bp-15Ch]
  int v232; // [sp+60h] [bp-15Ch]
  _DWORD *v233; // [sp+60h] [bp-15Ch]
  unsigned int v234; // [sp+60h] [bp-15Ch]
  _QWORD *v235; // [sp+64h] [bp-158h]
  _DWORD *v236; // [sp+64h] [bp-158h]
  _QWORD *v237; // [sp+64h] [bp-158h]
  int v238; // [sp+64h] [bp-158h]
  unsigned int v239; // [sp+64h] [bp-158h]
  _QWORD *v240; // [sp+68h] [bp-154h]
  int v241; // [sp+68h] [bp-154h]
  _DWORD *v242; // [sp+68h] [bp-154h]
  _QWORD *v243; // [sp+68h] [bp-154h]
  unsigned int v244; // [sp+68h] [bp-154h]
  unsigned int v245; // [sp+6Ch] [bp-150h]
  _QWORD *v246; // [sp+6Ch] [bp-150h]
  int v247; // [sp+6Ch] [bp-150h]
  __int64 v248; // [sp+70h] [bp-14Ch]
  unsigned int v249; // [sp+70h] [bp-14Ch]
  _QWORD *v250; // [sp+70h] [bp-14Ch]
  int v251; // [sp+74h] [bp-148h]
  _DWORD *v252; // [sp+74h] [bp-148h]
  __int64 v253; // [sp+78h] [bp-144h]
  _DWORD *v254; // [sp+78h] [bp-144h]
  _QWORD *v255; // [sp+78h] [bp-144h]
  _QWORD *v256; // [sp+7Ch] [bp-140h]
  _QWORD *v257; // [sp+7Ch] [bp-140h]
  _QWORD *v258; // [sp+7Ch] [bp-140h]
  int v259; // [sp+80h] [bp-13Ch]
  _QWORD *v260; // [sp+80h] [bp-13Ch]
  _DWORD *v261; // [sp+80h] [bp-13Ch]
  _QWORD *v262; // [sp+80h] [bp-13Ch]
  int v263; // [sp+84h] [bp-138h]
  int v264; // [sp+88h] [bp-134h]
  _QWORD *v265; // [sp+88h] [bp-134h]
  unsigned int v266; // [sp+88h] [bp-134h]
  _DWORD *v267; // [sp+88h] [bp-134h]
  int v268; // [sp+8Ch] [bp-130h]
  _QWORD *v269; // [sp+8Ch] [bp-130h]
  _QWORD *v270; // [sp+8Ch] [bp-130h]
  __int64 v271; // [sp+90h] [bp-12Ch]
  _QWORD *v272; // [sp+90h] [bp-12Ch]
  int v273; // [sp+90h] [bp-12Ch]
  _QWORD *v274; // [sp+90h] [bp-12Ch]
  _DWORD *v275; // [sp+94h] [bp-128h]
  int v276; // [sp+94h] [bp-128h]
  __int64 v277; // [sp+98h] [bp-124h]
  _QWORD *v278; // [sp+98h] [bp-124h]
  _DWORD *v279; // [sp+98h] [bp-124h]
  _QWORD *v280; // [sp+9Ch] [bp-120h]
  __int64 v281; // [sp+A0h] [bp-11Ch]
  _QWORD *v282; // [sp+A0h] [bp-11Ch]
  _QWORD *v283; // [sp+A0h] [bp-11Ch]
  int v284; // [sp+A4h] [bp-118h]
  int v285; // [sp+A4h] [bp-118h]
  int v286; // [sp+A8h] [bp-114h]
  _DWORD *v287; // [sp+A8h] [bp-114h]
  _QWORD *v288; // [sp+A8h] [bp-114h]
  int v289; // [sp+ACh] [bp-110h]
  _QWORD *v290; // [sp+ACh] [bp-110h]
  _QWORD *v291; // [sp+ACh] [bp-110h]
  __int64 v292; // [sp+B0h] [bp-10Ch]
  _QWORD *v293; // [sp+B0h] [bp-10Ch]
  _QWORD *v294; // [sp+B0h] [bp-10Ch]
  int v295; // [sp+B4h] [bp-108h]
  int v296; // [sp+B4h] [bp-108h]
  _QWORD *v297; // [sp+B4h] [bp-108h]
  __int64 v298; // [sp+B8h] [bp-104h]
  int v299; // [sp+B8h] [bp-104h]
  _QWORD *v300; // [sp+B8h] [bp-104h]
  _QWORD *v301; // [sp+BCh] [bp-100h]
  _QWORD *v302; // [sp+BCh] [bp-100h]
  int v303; // [sp+C0h] [bp-FCh]
  _QWORD *v304; // [sp+C0h] [bp-FCh]
  _QWORD *v305; // [sp+C0h] [bp-FCh]
  int v306; // [sp+C4h] [bp-F8h]
  _QWORD *v307; // [sp+C4h] [bp-F8h]
  unsigned int v308; // [sp+C4h] [bp-F8h]
  int v309; // [sp+C8h] [bp-F4h]
  _DWORD *v310; // [sp+C8h] [bp-F4h]
  int v311; // [sp+C8h] [bp-F4h]
  __int64 v312; // [sp+CCh] [bp-F0h]
  _QWORD *v313; // [sp+CCh] [bp-F0h]
  int v314; // [sp+CCh] [bp-F0h]
  _QWORD *v315; // [sp+D0h] [bp-ECh]
  int v316; // [sp+D0h] [bp-ECh]
  __int64 v317; // [sp+D4h] [bp-E8h]
  __int64 v318; // [sp+D4h] [bp-E8h]
  char *src; // [sp+E0h] [bp-DCh]
  int v321; // [sp+E4h] [bp-D8h]
  _DWORD *v322; // [sp+E4h] [bp-D8h]
  _DWORD *v323; // [sp+E4h] [bp-D8h]
  _QWORD *v324; // [sp+E8h] [bp-D4h]
  _QWORD *v325; // [sp+E8h] [bp-D4h]
  _QWORD *v326; // [sp+E8h] [bp-D4h]
  _QWORD *v327; // [sp+E8h] [bp-D4h]
  _QWORD *v328; // [sp+ECh] [bp-D0h]
  _QWORD *v329; // [sp+ECh] [bp-D0h]
  _DWORD *v330; // [sp+ECh] [bp-D0h]
  _QWORD *v331; // [sp+ECh] [bp-D0h]
  _DWORD *v332; // [sp+F0h] [bp-CCh]
  _QWORD *v333; // [sp+F0h] [bp-CCh]
  _DWORD *v334; // [sp+F0h] [bp-CCh]
  int v335; // [sp+F4h] [bp-C8h]
  _QWORD *v336; // [sp+F4h] [bp-C8h]
  _DWORD *v337; // [sp+F4h] [bp-C8h]
  int v338; // [sp+F4h] [bp-C8h]
  _DWORD *v339; // [sp+F4h] [bp-C8h]
  _QWORD *v340; // [sp+F8h] [bp-C4h]
  unsigned int v341; // [sp+F8h] [bp-C4h]
  int v342; // [sp+F8h] [bp-C4h]
  _QWORD *v343; // [sp+FCh] [bp-C0h]
  _QWORD *v344; // [sp+FCh] [bp-C0h]
  int v345; // [sp+FCh] [bp-C0h]
  int v346; // [sp+FCh] [bp-C0h]
  _QWORD *v347; // [sp+100h] [bp-BCh]
  int v348; // [sp+100h] [bp-BCh]
  int v349; // [sp+100h] [bp-BCh]
  int v350; // [sp+100h] [bp-BCh]
  int v351; // [sp+104h] [bp-B8h]
  unsigned int v352; // [sp+104h] [bp-B8h]
  int v353; // [sp+104h] [bp-B8h]
  int v354; // [sp+108h] [bp-B4h]
  int v355; // [sp+108h] [bp-B4h]
  unsigned int v356; // [sp+108h] [bp-B4h]
  int v357; // [sp+10Ch] [bp-B0h]
  int v358; // [sp+10Ch] [bp-B0h]
  unsigned int v359; // [sp+10Ch] [bp-B0h]
  int v360; // [sp+110h] [bp-ACh]
  unsigned int v361; // [sp+110h] [bp-ACh]
  unsigned int v362; // [sp+110h] [bp-ACh]
  unsigned int v363; // [sp+110h] [bp-ACh]
  int v364; // [sp+114h] [bp-A8h]
  int v365; // [sp+118h] [bp-A4h]
  __int64 v366; // [sp+154h] [bp-68h]
  int v367; // [sp+15Ch] [bp-60h]
  int v368; // [sp+160h] [bp-5Ch]
  __int64 *v369; // [sp+174h] [bp-48h]
  __int64 v370; // [sp+178h] [bp-44h] BYREF
  __int64 v371; // [sp+180h] [bp-3Ch]
  int v372; // [sp+188h] [bp-34h]
  int v373; // [sp+18Ch] [bp-30h]
  __int64 v374; // [sp+190h] [bp-2Ch]
  __int64 v375; // [sp+198h] [bp-24h]
  int v376; // [sp+1A0h] [bp-1Ch]
  int v377; // [sp+1A4h] [bp-18h]
  int v378; // [sp+1A8h] [bp-14h]
  int v379; // [sp+1ACh] [bp-10h]
  __int64 v380; // [sp+1B0h] [bp-Ch]
  char v381; // [sp+1B8h] [bp-4h] BYREF

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
    v5 = &v370;
    v6 = a1 + 9;
    v7 = a1 + 17;
    v369 = a1 + 9;
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
          v137 = 0;
          v317 = *a1 ^ v370;
          v277 = *a1;
          LODWORD(v312) = *((_DWORD *)a1 + 2) ^ v371;
          v281 = a1[1];
          HIDWORD(v312) = HIDWORD(v281) ^ HIDWORD(v371);
          v286 = *((_DWORD *)a1 + 4);
          v289 = *((_DWORD *)a1 + 5);
          v292 = a1[3];
          v306 = v286 ^ v372;
          v309 = v289 ^ v373;
          v248 = v292 ^ v374;
          v366 = v375;
          v253 = a1[4] ^ v375;
          v298 = a1[4];
          v367 = v376;
          v259 = *((_DWORD *)a1 + 10) ^ v376;
          v368 = v377;
          v303 = *((_DWORD *)a1 + 11);
          v263 = v303 ^ v377;
          v264 = *((_DWORD *)a1 + 12) ^ v378;
          v268 = *((_DWORD *)a1 + 13) ^ v379;
          v271 = a1[7] ^ v380;
          do
          {
            v143 = v317 ^ v137;
            v160 = (v137 + 48) ^ v248;
            v169 = v259 ^ (v137 + 80);
            v139 = HIDWORD(v248) ^ ((unsigned __int64)(v137 + 48) >> 32);
            v165 = HIDWORD(v253) ^ ((unsigned __int64)(v137 + 64) >> 32);
            v176 = v264 ^ (v137 + 96);
            v180 = v271 ^ (v137 + 112);
            v153 = v312 ^ (v137 + 16);
            v16 = (v137 + 32) ^ v306;
            v17 = ((unsigned __int64)(v137 + 80) >> 32) ^ v263;
            v200 = v253 ^ (v137 + 64);
            v18 = ((unsigned __int64)(v137 + 96) >> 32) ^ v268;
            v188 = HIDWORD(v312) ^ ((unsigned __int64)(v137 + 16) >> 32);
            v194 = v309 ^ ((unsigned __int64)(v137 + 32) >> 32);
            v19 = (HIDWORD(v271) ^ ((unsigned __int64)(v137 + 112) >> 32)) >> 24;
            v209 = HIBYTE(v188);
            v220 = &qword_18DAB0[HIBYTE(v160)];
            v269 = &qword_18DAB0[HIBYTE(v169)];
            v231 = &dword_18C2B8[2 * ((unsigned int)(HIDWORD(v317) ^ HIDWORD(v137)) >> 24)];
            v256 = &qword_18DAB0[HIBYTE(v200)];
            v20 = &qword_18DAB0[((unsigned int)v317 ^ (unsigned int)v137) >> 24];
            v313 = &qword_18DAB0[HIBYTE(v176)];
            v324 = &qword_18DAB0[((unsigned int)v271 ^ ((_DWORD)v137 + 112)) >> 24];
            v249 = HIBYTE(v18);
            LODWORD(v317) = &dword_18C2B8[2 * HIBYTE(v139)];
            v328 = v20;
            v245 = HIBYTE(v17);
            v21 = &qword_18CAC0[BYTE1(v153)];
            v22 = &dword_18D2C0[2 * BYTE2(v16)];
            v335 = *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v17) + 1);
            v347 = &qword_18DAB0[HIBYTE(v16)];
            v321 = *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v17));
            v354 = (unsigned __int8)((v137 + 32) ^ v306);
            v240 = &qword_18CAC0[BYTE1(v16)];
            v254 = &dword_18D2C0[2 * BYTE2(v160)];
            v260 = &qword_18E2C0[(unsigned __int8)(((unsigned __int64)(v137 + 80) >> 32) ^ v263)];
            v23 = BYTE1(v18);
            v24 = (_DWORD *)((char *)&unk_18F2B8 + 8 * BYTE2(v18));
            v251 = BYTE2(v17);
            v25 = *((_DWORD *)v21 - 2);
            v26 = HIDWORD(qword_18BAB8[(unsigned __int8)v143])
                ^ ((unsigned __int64)(v137 + 1) >> 32)
                ^ dword_18C2B8[2 * v19 + 1]
                ^ *((_DWORD *)v21 - 1);
            v272 = &qword_18E2C0[(unsigned __int8)v18];
            v27 = (unsigned __int8)((unsigned int)(HIDWORD(v317) ^ HIDWORD(v137)) >> 16);
            v360 = (unsigned __int8)v160;
            v265 = &qword_18CAC0[BYTE1(v160)];
            v28 = BYTE6(v180);
            v29 = LODWORD(qword_18BAB8[(unsigned __int8)v143])
                ^ (v137 + 1)
                ^ dword_18C2B8[2 * v19]
                ^ v25
                ^ *(v22 - 2)
                ^ *((_DWORD *)v220 + 2);
            v30 = v231[1] ^ ((unsigned __int64)(v137 + 17) >> 32) ^ HIDWORD(qword_18BAB8[(unsigned __int8)v153]);
            v31 = &qword_18E2C0[(unsigned __int8)v165];
            v351 = *v231 ^ (v137 + 17) ^ LODWORD(qword_18BAB8[(unsigned __int8)v153]);
            v32 = *((_DWORD *)v31 - 1);
            v33 = *((_DWORD *)v31 - 2);
            v34 = BYTE5(v180);
            v315 = &qword_18E2C0[BYTE4(v180)];
            v357 = (unsigned __int8)((unsigned __int16)(WORD2(v317) ^ WORD2(v137)) >> 8);
            HIDWORD(v180) = &qword_18E2C0[(unsigned __int8)(BYTE4(v317) ^ BYTE4(v137))];
            v307 = &qword_18CAC0[BYTE1(v200)];
            v310 = &dword_18D2C0[2 * BYTE2(v169)];
            v365 = BYTE2(v188);
            v232 = (unsigned __int8)v169;
            HIDWORD(v317) = &qword_18CAC0[BYTE1(v169)];
            v35 = v26 ^ *(v22 - 1) ^ *((_DWORD *)v220 + 3) ^ v32 ^ v335;
            v170 = *((_DWORD *)&unk_18F2B8 + 2 * v28);
            v36 = v29 ^ v33 ^ v321;
            v322 = &dword_18D2C0[2 * BYTE2(v176)];
            v221 = BYTE1(v188);
            v336 = &qword_18E2C0[(unsigned __int8)v188];
            v161 = v35 ^ v24[1];
            v226 = BYTE2(v194);
            v149 = v36 ^ *v24;
            v37 = *((_DWORD *)&unk_18F2B8 + 2 * v27 + 1);
            v38 = v351 ^ *((_DWORD *)v240 - 2) ^ *(v254 - 2) ^ *((_DWORD *)v256 + 2);
            v39 = v30 ^ *((_DWORD *)v240 - 1) ^ *(v254 - 1) ^ *((_DWORD *)v256 + 3);
            v257 = &qword_18CAC0[BYTE1(v176)];
            v40 = *((_DWORD *)&unk_18F2B8 + 2 * v27);
            v41 = v38 ^ *((_DWORD *)v260 - 2) ^ *((_DWORD *)&unk_18EAB8 + 2 * v23);
            v42 = *((_DWORD *)&unk_18EAB8 + 2 * v23 + 1)
                ^ v39
                ^ *((_DWORD *)v260 - 1)
                ^ *((_DWORD *)&unk_18F2B8 + 2 * v28 + 1);
            v241 = (unsigned __int8)v176;
            v43 = dword_18C2B8[2 * HIBYTE(v194)];
            v364 = dword_18C2B8[2 * HIBYTE(v194) + 1];
            v261 = &dword_18D2C0[2 * BYTE2(v180)];
            LOBYTE(v27) = v194;
            v195 = BYTE1(v194);
            v340 = &qword_18E2C0[(unsigned __int8)v27];
            v44 = v143;
            v144 = v42;
            v275 = &dword_18D2C0[2 * BYTE2(v44)];
            v352 = v41 ^ v170;
            v343 = &qword_18CAC0[BYTE1(v44)];
            v214 = (unsigned __int8)v180;
            v189 = &qword_18CAC0[BYTE1(v180)];
            v45 = *((_DWORD *)&unk_18EAB8 + 2 * v34);
            v46 = *((_DWORD *)&unk_18EAB8 + 2 * v34 + 1);
            v47 = *(_QWORD *)&dword_18D2C0[2 * BYTE2(v200) - 2];
            v171 = dword_18C2B8[2 * v209]
                 ^ v40
                 ^ LODWORD(qword_18BAB8[v354])
                 ^ (v137 + 33)
                 ^ *((_DWORD *)v265 - 2)
                 ^ v47
                 ^ *((_DWORD *)v269 + 2)
                 ^ *((_DWORD *)v272 - 2)
                 ^ v45;
            v177 = dword_18C2B8[2 * v209 + 1]
                 ^ v37
                 ^ HIDWORD(qword_18BAB8[v354])
                 ^ ((unsigned __int64)(v137 + 33) >> 32)
                 ^ *((_DWORD *)v265 - 1)
                 ^ HIDWORD(v47)
                 ^ *((_DWORD *)v269 + 3)
                 ^ *((_DWORD *)v272 - 1)
                 ^ v46;
            v273 = 8 * (unsigned __int8)v180 + 1620664;
            LODWORD(v180) = LODWORD(qword_18BAB8[v360])
                          ^ *((_DWORD *)&unk_18EAB8 + 2 * v357)
                          ^ (v137 + 49)
                          ^ v43
                          ^ *((_DWORD *)v307 - 2)
                          ^ *(v310 - 2)
                          ^ *((_DWORD *)v313 + 2)
                          ^ *((_DWORD *)v315 - 2)
                          ^ *((_DWORD *)&unk_18F2B8 + 2 * v365);
            v48 = *(_DWORD *)(HIDWORD(v180) - 8);
            HIDWORD(v47) = *(_DWORD *)(HIDWORD(v180) - 4);
            HIDWORD(v180) = *((_DWORD *)v313 + 3)
                          ^ HIDWORD(qword_18BAB8[v360])
                          ^ *((_DWORD *)&unk_18EAB8 + 2 * v357 + 1)
                          ^ ((unsigned __int64)(v137 + 49) >> 32)
                          ^ v364
                          ^ *((_DWORD *)v307 - 1)
                          ^ *(v310 - 1)
                          ^ *((_DWORD *)v315 - 1)
                          ^ *((_DWORD *)&unk_18F2B8 + 2 * v365 + 1);
            v49 = *(_DWORD *)v317 ^ v48 ^ LODWORD(qword_18BAB8[(unsigned __int8)v200]) ^ (v137 + 65);
            v50 = *(_DWORD *)(v317 + 4)
                ^ HIDWORD(v47)
                ^ HIDWORD(qword_18BAB8[(unsigned __int8)v200])
                ^ ((unsigned __int64)(v137 + 65) >> 32)
                ^ *(_DWORD *)(HIDWORD(v317) - 4);
            v316 = *((_DWORD *)&unk_18EAB8 + 2 * v195 + 1);
            v51 = *(_DWORD *)(HIDWORD(v317) - 8);
            v314 = *((_DWORD *)&unk_18EAB8 + 2 * v195);
            v318 = *((_QWORD *)&unk_18F2B8 + BYTE2(v139));
            v52 = &dword_18D2C0[2 * BYTE2(v153)];
            v154 = &qword_18DAB0[HIBYTE(v153)];
            v196 = v49 ^ v51 ^ *(v322 - 2) ^ *((_DWORD *)v324 + 2);
            v53 = &qword_18E2C0[(unsigned __int8)v139];
            LODWORD(v47) = *(v275 - 2)
                         ^ LODWORD(qword_18BAB8[v241])
                         ^ (v137 + 97)
                         ^ dword_18C2B8[2 * v245]
                         ^ *((_DWORD *)v189 - 2)
                         ^ *((_DWORD *)v154 + 2)
                         ^ *((_DWORD *)v340 - 2);
            v54 = (_DWORD *)((char *)&unk_18EAB8 + 8 * BYTE1(v139));
            v55 = *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v165) + 1)
                ^ HIDWORD(qword_18BAB8[v241])
                ^ *(v275 - 1)
                ^ (__CFADD__((_DWORD)v137, 97) + HIDWORD(v137))
                ^ dword_18C2B8[2 * v245 + 1]
                ^ *((_DWORD *)v189 - 1)
                ^ *((_DWORD *)v154 + 3)
                ^ *((_DWORD *)v340 - 1)
                ^ v54[1];
            v190 = *(_DWORD *)(v273 + 4)
                 ^ *((_DWORD *)v343 - 1)
                 ^ ((unsigned __int64)(v137 + 113) >> 32)
                 ^ dword_18C2B8[2 * v249 + 1]
                 ^ *(v52 - 1)
                 ^ *((_DWORD *)v347 + 3)
                 ^ *((_DWORD *)v53 - 1)
                 ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v165) + 1)
                 ^ *((_DWORD *)&unk_18F2B8 + 2 * v251 + 1);
            v56 = HIDWORD(qword_18BAB8[v232])
                ^ *((_DWORD *)v328 + 3)
                ^ ((unsigned __int64)(v137 + 81) >> 32)
                ^ dword_18C2B8[2 * HIBYTE(v165) + 1]
                ^ *((_DWORD *)v257 - 1)
                ^ *(v261 - 1)
                ^ *((_DWORD *)v336 - 1)
                ^ v316
                ^ HIDWORD(v318);
            v308 = v47 ^ *v54 ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v165));
            v266 = (v137 + 81)
                 ^ *((_DWORD *)v328 + 2)
                 ^ LODWORD(qword_18BAB8[v232])
                 ^ dword_18C2B8[2 * HIBYTE(v165)]
                 ^ *((_DWORD *)v257 - 2)
                 ^ *(v261 - 2)
                 ^ *((_DWORD *)v336 - 2)
                 ^ v314
                 ^ v318;
            v140 = v196 ^ *((_DWORD *)&unk_18EAB8 + 2 * v221) ^ *((_DWORD *)&unk_18F2B8 + 2 * v226);
            v201 = HIBYTE(v144);
            v166 = LODWORD(qword_18BAB8[v214])
                 ^ *((_DWORD *)v343 - 2)
                 ^ (v137 + 113)
                 ^ dword_18C2B8[2 * v249]
                 ^ *(v52 - 2)
                 ^ *((_DWORD *)v347 + 2)
                 ^ *((_DWORD *)v53 - 2)
                 ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v165))
                 ^ *((_DWORD *)&unk_18F2B8 + 2 * v251);
            v155 = v50
                 ^ *(v322 - 1)
                 ^ *((_DWORD *)v324 + 3)
                 ^ *((_DWORD *)&unk_18EAB8 + 2 * v221 + 1)
                 ^ *((_DWORD *)&unk_18F2B8 + 2 * v226 + 1);
            v227 = &qword_18DAB0[BYTE3(v180)];
            v246 = &qword_18DAB0[HIBYTE(v266)];
            v252 = &dword_18C2B8[2 * HIBYTE(v177)];
            v242 = &dword_18C2B8[2 * HIBYTE(v144)];
            v255 = &qword_18DAB0[HIBYTE(v308)];
            v270 = &qword_18DAB0[HIBYTE(v166)];
            v274 = &qword_18DAB0[HIBYTE(v149)];
            v329 = &qword_18DAB0[HIBYTE(v352)];
            v332 = &dword_18C2B8[2 * HIBYTE(v56)];
            v344 = &qword_18DAB0[HIBYTE(v171)];
            v361 = HIBYTE(v56);
            v57 = &qword_18CAC0[BYTE1(v352)];
            v337 = &dword_18D2C0[2 * BYTE2(v352)];
            v58 = &qword_18CAC0[BYTE1(v171)];
            v235 = &qword_18E2C0[(unsigned __int8)v56];
            v137 += 2;
            v311 = *((_DWORD *)v57 - 1) ^ dword_18C2B8[2 * HIBYTE(v190) + 1];
            v59 = BYTE1(v56);
            v197 = BYTE2(v56);
            v348 = (unsigned __int8)v171;
            v172 = &dword_18D2C0[2 * BYTE2(v171)];
            v60 = *(v58 - 1);
            v276 = *((_DWORD *)v57 - 2) ^ dword_18C2B8[2 * HIBYTE(v190)];
            v250 = &qword_18E2C0[(unsigned __int8)v55];
            v61 = &qword_18E2C0[(unsigned __int8)v155];
            v62 = *(_QWORD *)&dword_18D2C0[2 * BYTE2(v180) - 2];
            v358 = (unsigned __int8)v180;
            LODWORD(v47) = HIDWORD(qword_18BAB8[(unsigned __int8)v352])
                         ^ dword_18C2B8[2 * HIBYTE(v161) + 1]
                         ^ HIDWORD(v60)
                         ^ HIDWORD(v62);
            v222 = &qword_18CAC0[BYTE1(v180)];
            HIDWORD(v47) = LODWORD(qword_18BAB8[(unsigned __int8)v352]) ^ dword_18C2B8[2 * HIBYTE(v161)] ^ v60 ^ v62;
            v63 = (_DWORD *)((char *)&unk_18F2B8 + 8 * BYTE2(v190));
            v64 = qword_18DAB0[HIBYTE(v140) + 1];
            v233 = &dword_18D2C0[2 * BYTE2(v140)];
            v353 = BYTE1(v190);
            v258 = &qword_18E2C0[(unsigned __int8)v190];
            v262 = &qword_18E2C0[(unsigned __int8)v161];
            HIDWORD(v312) = v47
                          ^ HIDWORD(v64)
                          ^ *((_DWORD *)v235 - 1)
                          ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v55) + 1)
                          ^ v63[1];
            LODWORD(v60) = BYTE2(v144);
            LODWORD(v312) = HIDWORD(v47)
                          ^ v64
                          ^ *((_DWORD *)v235 - 2)
                          ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v55))
                          ^ *v63;
            v191 = &qword_18CAC0[BYTE1(v140)];
            v236 = &dword_18D2C0[2 * BYTE2(v266)];
            HIDWORD(v47) = *(v172 - 2);
            HIDWORD(v64) = (unsigned __int8)v144;
            v145 = BYTE1(v144);
            v65 = &qword_18E2C0[HIDWORD(v64)];
            v66 = HIDWORD(qword_18BAB8[(unsigned __int8)v149]) ^ v311 ^ *(v172 - 1);
            HIDWORD(v64) = *((_DWORD *)v227 + 2);
            v173 = (unsigned __int8)v266;
            v67 = v66 ^ *((_DWORD *)v227 + 3);
            v228 = &qword_18CAC0[BYTE1(v266)];
            v267 = &dword_18D2C0[2 * BYTE2(v308)];
            LODWORD(v180) = (unsigned __int8)v308;
            v325 = &qword_18CAC0[BYTE1(v308)];
            HIDWORD(v317) = v67
                          ^ *((_DWORD *)v61 - 1)
                          ^ *((_DWORD *)&unk_18EAB8 + 2 * v59 + 1)
                          ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v55) + 1);
            LODWORD(v317) = LODWORD(qword_18BAB8[(unsigned __int8)v149])
                          ^ v276
                          ^ HIDWORD(v47)
                          ^ HIDWORD(v64)
                          ^ *((_DWORD *)v61 - 2)
                          ^ *((_DWORD *)&unk_18EAB8 + 2 * v59)
                          ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v55));
            LODWORD(v47) = dword_18C2B8[2 * v201];
            v202 = &dword_18D2C0[2 * BYTE2(v166)];
            v68 = HIDWORD(qword_18BAB8[v348])
                ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v161) + 1)
                ^ v242[1]
                ^ *((_DWORD *)v222 - 1);
            v243 = &qword_18E2C0[(unsigned __int8)v177];
            v69 = *(v233 - 2)
                ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v161))
                ^ LODWORD(qword_18BAB8[v348])
                ^ v47
                ^ *((_DWORD *)v222 - 2);
            v210 = &dword_18D2C0[2 * BYTE2(v149)];
            v223 = &qword_18CAC0[BYTE1(v166)];
            v309 = *(v233 - 1)
                 ^ v68
                 ^ *((_DWORD *)v246 + 3)
                 ^ *((_DWORD *)v250 - 1)
                 ^ *((_DWORD *)&unk_18EAB8 + 2 * v353 + 1);
            v306 = v69 ^ *((_DWORD *)v246 + 2) ^ *((_DWORD *)v250 - 2) ^ *((_DWORD *)&unk_18EAB8 + 2 * v353);
            LODWORD(v64) = LODWORD(qword_18BAB8[v358])
                         ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v161))
                         ^ *((_DWORD *)&unk_18F2B8 + 2 * v60)
                         ^ *v252
                         ^ *((_DWORD *)v191 - 2)
                         ^ *(v236 - 2);
            HIDWORD(v248) = *((_DWORD *)&unk_18F2B8 + 2 * v60 + 1)
                          ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v161) + 1)
                          ^ HIDWORD(qword_18BAB8[v358])
                          ^ v252[1]
                          ^ *((_DWORD *)v191 - 1)
                          ^ *(v236 - 1)
                          ^ *((_DWORD *)v255 + 3)
                          ^ *((_DWORD *)v258 - 1);
            LODWORD(v248) = v64 ^ *((_DWORD *)v255 + 2) ^ *((_DWORD *)v258 - 2);
            LODWORD(v253) = *((_DWORD *)v262 - 2)
                          ^ LODWORD(qword_18BAB8[(unsigned __int8)v140])
                          ^ *((_DWORD *)&unk_18EAB8 + 2 * v145)
                          ^ dword_18C2B8[2 * HIBYTE(HIDWORD(v180))]
                          ^ *((_DWORD *)v228 - 2)
                          ^ *(v267 - 2)
                          ^ *((_DWORD *)v270 + 2)
                          ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v177));
            HIDWORD(v253) = *((_DWORD *)v228 - 1)
                          ^ *((_DWORD *)v262 - 1)
                          ^ HIDWORD(qword_18BAB8[(unsigned __int8)v140])
                          ^ *((_DWORD *)&unk_18EAB8 + 2 * v145 + 1)
                          ^ dword_18C2B8[2 * HIBYTE(HIDWORD(v180)) + 1]
                          ^ *(v267 - 1)
                          ^ *((_DWORD *)v270 + 3)
                          ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v177) + 1);
            v259 = LODWORD(qword_18BAB8[v173])
                 ^ *((_DWORD *)v274 + 2)
                 ^ *((_DWORD *)v65 - 2)
                 ^ dword_18C2B8[2 * HIBYTE(v155)]
                 ^ *((_DWORD *)v325 - 2)
                 ^ *(v202 - 2)
                 ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v177))
                 ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE6(v180));
            v268 = *(v210 - 1)
                 ^ HIDWORD(qword_18BAB8[v180])
                 ^ *((_DWORD *)v329 + 3)
                 ^ v332[1]
                 ^ *((_DWORD *)v223 - 1)
                 ^ *((_DWORD *)v243 - 1)
                 ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE5(v180) + 1)
                 ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v155) + 1);
            v263 = HIDWORD(qword_18BAB8[v173])
                 ^ *((_DWORD *)v274 + 3)
                 ^ *((_DWORD *)v65 - 1)
                 ^ dword_18C2B8[2 * HIBYTE(v155) + 1]
                 ^ *((_DWORD *)v325 - 1)
                 ^ *(v202 - 1)
                 ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v177) + 1)
                 ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE6(v180) + 1);
            v271 = qword_18CAC0[BYTE1(v149) - 1]
                 ^ qword_18BAB8[(unsigned __int8)v166]
                 ^ *((_QWORD *)v337 - 1)
                 ^ *(_QWORD *)&dword_18C2B8[2 * HIBYTE(v55)]
                 ^ v344[1]
                 ^ qword_18E2C0[BYTE4(v180) - 1]
                 ^ *((_QWORD *)&unk_18EAB8 + BYTE1(v155))
                 ^ *((_QWORD *)&unk_18F2B8 + v197);
            v264 = *(v210 - 2)
                 ^ LODWORD(qword_18BAB8[v180])
                 ^ *((_DWORD *)v329 + 2)
                 ^ dword_18C2B8[2 * v361]
                 ^ *((_DWORD *)v223 - 2)
                 ^ *((_DWORD *)v243 - 2)
                 ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE5(v180))
                 ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v155));
          }
          while ( v137 != 10 );
          v138 = -1;
          v70 = *((_DWORD *)a1 + 13);
          v72 = *((_DWORD *)a1 + 15);
          v71 = *((_DWORD *)a1 + 14);
          v73 = *((_DWORD *)a1 + 10);
          v74 = *((_DWORD *)a1 + 12);
          do
          {
            v146 = HIDWORD(v277) ^ v138;
            v203 = ~v71;
            v150 = ~(_DWORD)v281;
            v162 = HIDWORD(v281) ^ v138 ^ 0x10000000;
            v218 = v138 ^ 0x60000000 ^ v70;
            v167 = ~v286;
            v185 = ~v73;
            v181 = ~(_DWORD)v298;
            v192 = v303 ^ v138 ^ 0x50000000;
            v178 = HIDWORD(v292) ^ v138 ^ 0x30000000;
            v174 = v289 ^ v138 ^ 0x20000000;
            v224 = v138 ^ 0x70000000 ^ v72;
            v229 = HIBYTE(v162);
            v211 = ~(_WORD)v277;
            v341 = (HIDWORD(v277) ^ (unsigned int)v138) >> 24;
            v75 = &qword_18DAB0[(unsigned int)~(_DWORD)v277 >> 24];
            v359 = HIBYTE(v174);
            v280 = &qword_18DAB0[(unsigned int)~v71 >> 24];
            v290 = &qword_18DAB0[(unsigned int)~v286 >> 24];
            HIDWORD(v281) = &qword_18DAB0[(unsigned int)~(_DWORD)v281 >> 24];
            v362 = HIBYTE(v178);
            v76 = &dword_18C2B8[2 * HIBYTE(v224)];
            HIDWORD(v292) = &qword_18DAB0[(unsigned int)~(_DWORD)v292 >> 24];
            v244 = HIBYTE(v192);
            v304 = &qword_18DAB0[(unsigned int)~(_DWORD)v298 >> 24];
            v77 = &qword_18E2C0[(unsigned __int8)v162];
            v215 = HIDWORD(v298) ^ v138 ^ 0x40000000;
            v78 = &qword_18CAC0[(unsigned __int8)((unsigned __int16)~(_WORD)v298 >> 8)];
            v234 = HIBYTE(v215);
            v79 = &dword_18D2C0[2 * (unsigned __int8)((unsigned int)~v74 >> 16)];
            v299 = (unsigned __int8)~(_BYTE)v281;
            v80 = *(v79 - 2) ^ ~LODWORD(qword_18BAB8[(unsigned __int8)~(_BYTE)v286]) ^ *v76 ^ *((_DWORD *)v78 - 2);
            v237 = &qword_18CAC0[(unsigned __int8)((unsigned __int16)~(_WORD)v292 >> 8)];
            v282 = &qword_18E2C0[(unsigned __int8)v146];
            v156 = 0xFFFFFF - v138;
            v81 = HIDWORD(qword_18BAB8[(unsigned __int8)~(_BYTE)v286])
                ^ (0xFFFFFF - v138)
                ^ 0xEFFFFFFF
                ^ v76[1]
                ^ *((_DWORD *)v78 - 1);
            v82 = (unsigned __int8)~(_BYTE)v292;
            v323 = &dword_18D2C0[2 * (unsigned __int8)((unsigned int)~(_DWORD)v292 >> 16)];
            v83 = (unsigned __int8)v181;
            v330 = &dword_18D2C0[2 * BYTE2(v181)];
            v84 = &qword_18CAC0[(unsigned __int8)((unsigned __int16)~(_WORD)v74 >> 8)];
            v287 = &dword_18D2C0[2 * (unsigned __int8)((unsigned int)~(_DWORD)v277 >> 16)];
            v293 = &qword_18E2C0[(unsigned __int8)v178];
            v85 = *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v192));
            v349 = BYTE1(v192);
            v247 = BYTE2(v178);
            v301 = &qword_18E2C0[(unsigned __int8)v192];
            v193 = v81
                 ^ *(v79 - 1)
                 ^ *((_DWORD *)v75 + 3)
                 ^ *((_DWORD *)v77 - 1)
                 ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v178) + 1)
                 ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v192) + 1);
            v182 = *((_DWORD *)v77 - 2) ^ v80 ^ *((_DWORD *)v75 + 2) ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v178)) ^ v85;
            v86 = HIDWORD(qword_18BAB8[v299])
                ^ dword_18C2B8[2 * HIBYTE(v218) + 1]
                ^ (v138 - 0xFFFFFF)
                ^ *((_DWORD *)v237 - 1);
            v87 = ~(LODWORD(qword_18BAB8[v299]) ^ dword_18C2B8[2 * HIBYTE(v218)]) ^ *((_DWORD *)v237 - 2);
            v138 -= 0x1FFFFFF;
            v88 = v138 == -167772161;
            v89 = &dword_18D2C0[2 * (unsigned __int8)((unsigned int)~v73 >> 16)];
            if ( v138 == -167772161 )
              v88 = 1;
            v278 = &qword_18CAC0[BYTE1(v185)];
            v90 = *((_DWORD *)v282 - 2);
            v91 = *((_DWORD *)v280 + 3)
                ^ v86
                ^ *(v89 - 1)
                ^ *((_DWORD *)v282 - 1)
                ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v174) + 1);
            v238 = BYTE2(v174);
            v283 = &qword_18E2C0[(unsigned __int8)v174];
            v300 = &qword_18E2C0[(unsigned __int8)v215];
            v338 = BYTE1(v215);
            v345 = BYTE2(v218);
            v179 = v91 ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v215) + 1);
            v355 = (unsigned __int8)v185;
            v326 = &qword_18DAB0[HIBYTE(v185)];
            v175 = *((_DWORD *)v280 + 2)
                 ^ v87
                 ^ *(v89 - 2)
                 ^ v90
                 ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v174))
                 ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v215));
            v92 = dword_18C2B8[2 * v229 + 1] ^ HIDWORD(qword_18BAB8[v83]) ^ ~(v156 ^ 0x30000000) ^ *((_DWORD *)v84 - 1);
            v93 = *(v287 - 1);
            v216 = (unsigned __int8)v203;
            v94 = *((_DWORD *)v84 - 2) ^ dword_18C2B8[2 * v229] ^ ~LODWORD(qword_18BAB8[v83]) ^ *(v287 - 2);
            v95 = &qword_18CAC0[BYTE1(v203)];
            v96 = &dword_18D2C0[2 * BYTE2(v150)];
            v288 = &qword_18CAC0[BYTE1(v150)];
            v97 = BYTE1(v218);
            v98 = v92 ^ v93 ^ *((_DWORD *)v290 + 3) ^ *((_DWORD *)v293 - 1);
            v99 = v94 ^ *((_DWORD *)v290 + 2) ^ *((_DWORD *)v293 - 2);
            v100 = *((_DWORD *)&unk_18EAB8 + 2 * v349);
            v291 = &qword_18E2C0[(unsigned __int8)v218];
            v101 = v98 ^ *((_DWORD *)&unk_18EAB8 + 2 * v349 + 1);
            v102 = BYTE2(v146);
            v219 = BYTE1(v146);
            v350 = (unsigned __int8)~(_BYTE)v74;
            v186 = v99 ^ v100 ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v224));
            v333 = &qword_18DAB0[(unsigned int)~v74 >> 24];
            v198 = v101 ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v224) + 1);
            v103 = ~LODWORD(qword_18BAB8[v82]) ^ dword_18C2B8[2 * v341] ^ *((_DWORD *)v278 - 2);
            v104 = HIDWORD(qword_18BAB8[v82])
                 ^ ~(v156 ^ 0x20000000)
                 ^ dword_18C2B8[2 * v341 + 1]
                 ^ *((_DWORD *)v278 - 1);
            v105 = dword_18D2C0[2 * BYTE2(v203) - 1];
            v279 = &dword_18D2C0[2 * BYTE2(v167)];
            v294 = &qword_18CAC0[BYTE1(v167)];
            v106 = dword_18D2C0[2 * BYTE2(v203) - 2] ^ v103;
            BYTE1(v103) = BYTE1(v162);
            v204 = &qword_18E2C0[(unsigned __int8)v224];
            v163 = BYTE2(v162);
            v147 = v106
                 ^ *(_DWORD *)(v284 + 8)
                 ^ *((_DWORD *)v283 - 2)
                 ^ *((_DWORD *)&unk_18EAB8 + 2 * v338)
                 ^ *((_DWORD *)&unk_18F2B8 + 2 * v345);
            v151 = v105
                 ^ v104
                 ^ *(_DWORD *)(v284 + 12)
                 ^ *((_DWORD *)v283 - 1)
                 ^ *((_DWORD *)&unk_18EAB8 + 2 * v338 + 1)
                 ^ *((_DWORD *)&unk_18F2B8 + 2 * v345 + 1);
            v107 = *(v95 - 1);
            v108 = ~LODWORD(qword_18BAB8[v355]) ^ dword_18C2B8[2 * v359] ^ v107;
            v109 = HIDWORD(qword_18BAB8[v355])
                 ^ v156
                 ^ 0xBFFFFFFF
                 ^ dword_18C2B8[2 * v359 + 1]
                 ^ HIDWORD(v107)
                 ^ *(v96 - 1);
            v110 = *(_QWORD *)(v295 + 8);
            v285 = *((_DWORD *)&unk_18F2B8 + 2 * v163);
            v296 = *((_DWORD *)&unk_18F2B8 + 2 * v163 + 1);
            v111 = &qword_18CAC0[HIBYTE(v211)];
            v168 = v109
                 ^ HIDWORD(v110)
                 ^ *((_DWORD *)v300 - 1)
                 ^ *((_DWORD *)&unk_18EAB8 + 2 * v97 + 1)
                 ^ *((_DWORD *)&unk_18F2B8 + 2 * v102 + 1);
            v164 = v108
                 ^ *(v96 - 2)
                 ^ v110
                 ^ *((_DWORD *)v300 - 2)
                 ^ *((_DWORD *)&unk_18EAB8 + 2 * v97)
                 ^ *((_DWORD *)&unk_18F2B8 + 2 * v102);
            v112 = ~(v156 ^ 0x70000000)
                 ^ HIDWORD(qword_18BAB8[(unsigned __int8)v211])
                 ^ dword_18C2B8[2 * v244 + 1]
                 ^ *((_DWORD *)v294 - 1)
                 ^ *(v330 - 1)
                 ^ *((_DWORD *)v333 + 3)
                 ^ *((_DWORD *)v204 - 1)
                 ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v103) + 1)
                 ^ *((_DWORD *)&unk_18F2B8 + 2 * v247 + 1);
            LODWORD(v110) = ~LODWORD(qword_18BAB8[(unsigned __int8)v211])
                          ^ dword_18C2B8[2 * v244]
                          ^ *((_DWORD *)v294 - 2)
                          ^ *(v330 - 2)
                          ^ *((_DWORD *)v333 + 2)
                          ^ *((_DWORD *)v204 - 2)
                          ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v103));
            v212 = v156
                 ^ 0x9FFFFFFF
                 ^ HIDWORD(qword_18BAB8[v216])
                 ^ dword_18C2B8[2 * v234 + 1]
                 ^ *((_DWORD *)v288 - 1)
                 ^ *(v323 - 1)
                 ^ *((_DWORD *)v326 + 3)
                 ^ *((_DWORD *)v291 - 1)
                 ^ *((_DWORD *)&unk_18EAB8 + 2 * v219 + 1)
                 ^ *((_DWORD *)&unk_18F2B8 + 2 * v238 + 1);
            v205 = ~LODWORD(qword_18BAB8[v216])
                 ^ dword_18C2B8[2 * v234]
                 ^ *((_DWORD *)v288 - 2)
                 ^ *(v323 - 2)
                 ^ *((_DWORD *)v326 + 2)
                 ^ *((_DWORD *)v291 - 2)
                 ^ *((_DWORD *)&unk_18EAB8 + 2 * v219)
                 ^ *((_DWORD *)&unk_18F2B8 + 2 * v238);
            v157 = dword_18C2B8[2 * v362 + 1]
                 ^ HIDWORD(qword_18BAB8[v350])
                 ^ v156
                 ^ 0xAFFFFFFF
                 ^ *((_DWORD *)v111 - 1)
                 ^ *(v279 - 1)
                 ^ *((_DWORD *)v304 + 3)
                 ^ *((_DWORD *)v301 - 1)
                 ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v224) + 1)
                 ^ v296;
            v141 = *((_DWORD *)v111 - 2)
                 ^ ~LODWORD(qword_18BAB8[v350])
                 ^ dword_18C2B8[2 * v362]
                 ^ *(v279 - 2)
                 ^ *((_DWORD *)v304 + 2)
                 ^ *((_DWORD *)v301 - 2)
                 ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v224))
                 ^ v285;
            v217 = *((_DWORD *)&unk_18F2B8 + 2 * v247) ^ v110;
            v356 = HIBYTE(v151);
            v363 = HIBYTE(v198);
            v239 = HIBYTE(v157);
            v305 = &qword_18DAB0[HIBYTE(v186)];
            v327 = &qword_18DAB0[HIBYTE(v164)];
            v113 = &dword_18C2B8[2 * HIBYTE(v212)];
            v114 = *v113;
            v115 = &qword_18CAC0[BYTE1(v186)];
            v116 = qword_18E2C0[(unsigned __int8)v179 - 1];
            LODWORD(v110) = &dword_18D2C0[2 * BYTE2(v141)];
            v117 = BYTE1(v198);
            v118 = qword_18DAB0[HIBYTE(v217) + 1];
            v119 = v113[1]
                 ^ HIDWORD(qword_18BAB8[(unsigned __int8)v182])
                 ^ *((_DWORD *)v115 - 1)
                 ^ *(_DWORD *)(v110 - 4)
                 ^ HIDWORD(v118)
                 ^ HIDWORD(v116);
            v346 = (unsigned __int8)v186;
            v334 = &dword_18D2C0[2 * BYTE2(v186)];
            v120 = v114
                 ^ LODWORD(qword_18BAB8[(unsigned __int8)v182])
                 ^ *((_DWORD *)v115 - 2)
                 ^ *(_DWORD *)(v110 - 8)
                 ^ v118;
            LODWORD(v118) = &qword_18CAC0[BYTE1(v141)];
            HIDWORD(v116) = &dword_18D2C0[2 * BYTE2(v217)];
            v187 = BYTE2(v151);
            LODWORD(v277) = v120
                          ^ v116
                          ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v151))
                          ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v168));
            HIDWORD(v277) = v119
                          ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v151) + 1)
                          ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v168) + 1);
            v297 = &qword_18CAC0[BYTE1(v205)];
            v339 = &dword_18D2C0[2 * BYTE2(v164)];
            v302 = &qword_18E2C0[(unsigned __int8)v198];
            v199 = BYTE2(v198);
            LODWORD(v116) = BYTE1(v157);
            v331 = &qword_18E2C0[(unsigned __int8)v157];
            v342 = (unsigned __int8)v141;
            v281 = qword_18BAB8[(unsigned __int8)v147]
                 ^ *(_QWORD *)&dword_18C2B8[2 * HIBYTE(v112)]
                 ^ qword_18CAC0[BYTE1(v164) - 1]
                 ^ *(_QWORD *)&dword_18D2C0[2 * BYTE2(v205) - 2]
                 ^ qword_18DAB0[HIBYTE(v175) + 1]
                 ^ qword_18E2C0[(unsigned __int8)v193 - 1]
                 ^ *((_QWORD *)&unk_18EAB8 + v117)
                 ^ *((_QWORD *)&unk_18F2B8 + BYTE2(v157));
            v142 = &qword_18DAB0[HIBYTE(v141)];
            v121 = dword_18C2B8[2 * HIBYTE(v179)] ^ LODWORD(qword_18BAB8[v346]) ^ *(_DWORD *)(v118 - 8);
            v122 = dword_18C2B8[2 * HIBYTE(v179) + 1]
                 ^ HIDWORD(qword_18BAB8[v346])
                 ^ *(_DWORD *)(v118 - 4)
                 ^ *(_DWORD *)(HIDWORD(v116) - 4);
            LODWORD(v118) = &qword_18DAB0[HIBYTE(v182)];
            v123 = *(_DWORD *)(v118 + 12);
            v124 = v121 ^ *(_DWORD *)(HIDWORD(v116) - 8) ^ *(_DWORD *)(v118 + 8);
            v125 = &qword_18E2C0[(unsigned __int8)v151];
            LODWORD(v118) = &dword_18D2C0[2 * BYTE2(v182)];
            v225 = &qword_18CAC0[BYTE1(v182)];
            HIDWORD(v118) = BYTE1(v212);
            v152 = &qword_18E2C0[(unsigned __int8)v212];
            v230 = (unsigned __int8)v205;
            v158 = &qword_18DAB0[HIBYTE(v205)];
            v183 = &qword_18CAC0[BYTE1(v175)];
            v289 = v122
                 ^ v123
                 ^ *((_DWORD *)v125 - 1)
                 ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v168) + 1)
                 ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v212) + 1);
            v286 = v124
                 ^ *((_DWORD *)v125 - 2)
                 ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v168))
                 ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v212));
            v206 = &dword_18D2C0[2 * BYTE2(v147)];
            v213 = &qword_18CAC0[BYTE1(v147)];
            v126 = &qword_18DAB0[HIBYTE(v147)];
            v148 = &qword_18E2C0[(unsigned __int8)v112];
            v292 = *(_QWORD *)&dword_18C2B8[2 * HIBYTE(v193)]
                 ^ qword_18BAB8[(unsigned __int8)v164]
                 ^ *(v297 - 1)
                 ^ *(_QWORD *)&dword_18D2C0[2 * BYTE2(v175) - 2]
                 ^ v126[1]
                 ^ *(v302 - 1)
                 ^ *((_QWORD *)&unk_18EAB8 + v116)
                 ^ *((_QWORD *)&unk_18F2B8 + BYTE2(v112));
            v298 = qword_18E2C0[(unsigned __int8)v168 - 1]
                 ^ qword_18BAB8[v342]
                 ^ *(_QWORD *)&dword_18C2B8[2 * v356]
                 ^ qword_18CAC0[BYTE1(v217) - 1]
                 ^ *(_QWORD *)(v118 - 8)
                 ^ v305[1]
                 ^ *((_QWORD *)&unk_18EAB8 + HIDWORD(v118))
                 ^ *((_QWORD *)&unk_18F2B8 + BYTE2(v179));
            v127 = *((_QWORD *)v206 - 1);
            v128 = *((_DWORD *)v327 + 2)
                 ^ dword_18C2B8[2 * v363]
                 ^ LODWORD(qword_18BAB8[v230])
                 ^ *((_DWORD *)v183 - 2)
                 ^ v127
                 ^ *((_DWORD *)v331 - 2);
            v184 = dword_18C2B8[2 * v363 + 1]
                 ^ HIDWORD(qword_18BAB8[v230])
                 ^ *((_DWORD *)v183 - 1)
                 ^ HIDWORD(v127)
                 ^ *((_DWORD *)v327 + 3)
                 ^ *((_DWORD *)v331 - 1)
                 ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v112) + 1);
            v74 = LODWORD(qword_18BAB8[(unsigned __int8)v217])
                ^ dword_18C2B8[2 * HIBYTE(v168)]
                ^ *((_DWORD *)v225 - 2)
                ^ *(v334 - 2)
                ^ *((_DWORD *)v142 + 2)
                ^ *((_DWORD *)v152 - 2)
                ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v179))
                ^ *((_DWORD *)&unk_18F2B8 + 2 * v187);
            v71 = LODWORD(qword_18BAB8[(unsigned __int8)v175])
                ^ dword_18C2B8[2 * v239]
                ^ *((_DWORD *)v213 - 2)
                ^ *(v339 - 2)
                ^ *((_DWORD *)v158 + 2)
                ^ *((_DWORD *)v148 - 2)
                ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v193))
                ^ *((_DWORD *)&unk_18F2B8 + 2 * v199);
            v70 = dword_18C2B8[2 * HIBYTE(v168) + 1]
                ^ HIDWORD(qword_18BAB8[(unsigned __int8)v217])
                ^ *((_DWORD *)v225 - 1)
                ^ *(v334 - 1)
                ^ *((_DWORD *)v142 + 3)
                ^ *((_DWORD *)v152 - 1)
                ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v179) + 1)
                ^ *((_DWORD *)&unk_18F2B8 + 2 * v187 + 1);
            v303 = v184 ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v193) + 1);
            v73 = v128 ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v112)) ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v193));
            v72 = HIDWORD(qword_18BAB8[(unsigned __int8)v175])
                ^ dword_18C2B8[2 * v239 + 1]
                ^ *((_DWORD *)v213 - 1)
                ^ *(v339 - 1)
                ^ *((_DWORD *)v158 + 3)
                ^ *((_DWORD *)v148 - 1)
                ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v193) + 1)
                ^ *((_DWORD *)&unk_18F2B8 + 2 * v199 + 1);
          }
          while ( !v88 );
          v159 = a1[17];
          v3 = 0;
          v373 ^= v309 ^ v289;
          v378 ^= v264 ^ v74;
          v379 ^= v70 ^ v268;
          v370 ^= v317 ^ v277;
          v380 ^= __PAIR64__(v72, v71) ^ v271;
          v371 ^= v312 ^ v281;
          v372 ^= v306 ^ v286;
          v374 ^= v248 ^ v292;
          *((_DWORD *)a1 + 34) = v159 + 1;
          v14 = na;
          v375 = v253 ^ v366 ^ v298;
          v376 = v259 ^ v367 ^ v73;
          v377 = v263 ^ v368 ^ v303;
          *((_DWORD *)a1 + 35) = (unsigned __int64)(v159 + 1) >> 32;
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
    v129 = v369;
    v130 = &v370;
    do
    {
      v129 += 2;
      result = *(void **)v130;
      v132 = *((_DWORD *)v130 + 1);
      v133 = *((_DWORD *)v130 + 2);
      v134 = *((_DWORD *)v130 + 3);
      v130 += 2;
      *((_DWORD *)v129 - 4) = result;
      *((_DWORD *)v129 - 3) = v132;
      *((_DWORD *)v129 - 2) = v133;
      *((_DWORD *)v129 - 1) = v134;
    }
    while ( v130 != (__int64 *)&v381 );
    *((_DWORD *)a1 + 16) = v3;
  }
  return result;
}
