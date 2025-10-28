int __fastcall sph_luffa512_0(int result, char *src, size_t a3)
{
  unsigned int v3; // r5
  size_t v4; // r4
  size_t v5; // r6
  char *v6; // r7
  size_t v7; // r3
  char *v8; // r0
  int v9; // r12
  unsigned int v10; // r10
  int v11; // r7
  int v12; // r11
  int v13; // r1
  int v14; // r6
  int v15; // r0
  int v16; // r9
  int v17; // r4
  int v18; // lr
  int v19; // r8
  int v20; // r2
  int v21; // r10
  int v22; // r10
  int v23; // r3
  int v24; // r5
  int v25; // r5
  int v26; // r11
  int v27; // r12
  int v28; // r10
  int v29; // r6
  int v30; // r1
  int v31; // r4
  int v32; // lr
  int v33; // r3
  int v34; // r0
  int v35; // r7
  int v36; // r2
  int v37; // r11
  int v38; // lr
  int v39; // r9
  int v40; // r4
  int v41; // r8
  int v42; // r10
  int v43; // r3
  int v44; // r6
  int v45; // lr
  size_t v46; // r12
  int v47; // r0
  int v48; // r11
  int v49; // r10
  int v50; // r8
  int v51; // r9
  unsigned int v52; // t2
  int v53; // r12
  int v54; // r7
  int v55; // r0
  int v56; // r4
  int v57; // lr
  int v58; // r2
  int v59; // r3
  int v60; // lr
  int v61; // lr
  size_t v62; // r8
  unsigned int v63; // r12
  int v64; // r9
  unsigned int v65; // r1
  int v66; // r0
  int v67; // r5
  int v68; // r7
  int v69; // r12
  int v70; // lr
  unsigned int v71; // r3
  int v72; // r1
  int v73; // r2
  int v74; // r3
  int v75; // r4
  int v76; // r0
  int v77; // r7
  int v78; // r5
  int v79; // r9
  int v80; // r2
  int v81; // r6
  int v82; // r10
  int v83; // lr
  int v84; // r0
  int v85; // r1
  int v86; // r0
  int v87; // r7
  int v88; // r4
  int v89; // r5
  int v90; // r8
  int v91; // r6
  int v92; // r2
  int v93; // r3
  int v94; // r4
  int v95; // r3
  int v96; // r1
  int v97; // r2
  int v98; // r12
  int v99; // r8
  int v100; // r7
  int v101; // r12
  int v102; // r0
  int v103; // r1
  int v104; // lr
  int v105; // r3
  int v106; // r2
  int v107; // r6
  int v108; // r4
  int v109; // r5
  int v110; // r12
  int v111; // r1
  int v112; // lr
  int v113; // r11
  unsigned int v114; // r0
  int v115; // r5
  unsigned int v116; // r12
  int v117; // lr
  int v118; // r3
  int v119; // r2
  int v120; // r1
  unsigned int v121; // r8
  int v122; // r2
  int v123; // r7
  int v124; // r12
  int v125; // r1
  int v126; // r10
  int v127; // r3
  int v128; // r1
  int v129; // r0
  int v130; // r2
  int v131; // r6
  int v132; // r10
  int v133; // r7
  int v134; // r6
  int v135; // r7
  int v136; // r3
  int v137; // r4
  int v138; // lr
  int v139; // r5
  int v140; // r3
  int v141; // r2
  int v142; // r1
  int v143; // r0
  int v144; // r12
  int v145; // r0
  int v146; // r2
  int v147; // r7
  int v148; // r5
  int v149; // r8
  int v150; // r6
  int v151; // r0
  int v152; // r12
  int v153; // r4
  int v154; // r3
  unsigned int v155; // r12
  int v156; // r2
  unsigned int v157; // r1
  int v158; // r4
  unsigned int v159; // lr
  int v160; // r5
  int v161; // r0
  int v162; // r9
  int v163; // r2
  int v164; // r6
  int v165; // r10
  int v166; // lr
  int v167; // r0
  int v168; // r1
  int v169; // r0
  int v170; // r7
  int v171; // r4
  int v172; // r5
  int v173; // r8
  int v174; // r6
  int v175; // r2
  int v176; // r3
  int v177; // r4
  int v178; // r3
  int v179; // r1
  int v180; // r2
  int v181; // r12
  int v182; // r8
  int v183; // r7
  int v184; // r12
  int v185; // r0
  int v186; // r1
  int v187; // lr
  int v188; // r3
  int v189; // r2
  int v190; // r6
  int v191; // r4
  int v192; // r5
  int v193; // r12
  int v194; // r1
  int v195; // lr
  int v196; // r11
  int v197; // r3
  int v198; // r2
  unsigned int v199; // r0
  int v200; // r5
  unsigned int v201; // r12
  int v202; // lr
  int v203; // r1
  unsigned int v204; // r8
  int v205; // r2
  int v206; // r7
  int v207; // r12
  int v208; // r1
  int v209; // r10
  int v210; // r3
  int v211; // r1
  int v212; // r0
  int v213; // r2
  int v214; // r6
  int v215; // r10
  int v216; // r7
  int v217; // r6
  int v218; // r7
  int v219; // r3
  int v220; // r4
  int v221; // lr
  int v222; // r5
  int v223; // r3
  int v224; // r2
  int v225; // r1
  int v226; // r0
  int v227; // r12
  int v228; // r0
  int v229; // r2
  int v230; // r7
  int v231; // r5
  int v232; // r8
  int v233; // r6
  int v234; // r0
  int v235; // r12
  int v236; // r4
  int v237; // r1
  unsigned int v238; // r3
  int v239; // r4
  size_t v240; // r2
  int v241; // lr
  int v242; // r12
  int v243; // r8
  int v244; // r0
  int v245; // r7
  int v246; // r5
  int v247; // r6
  int v248; // r12
  int v249; // r11
  int v250; // r3
  int v251; // r4
  int v252; // r12
  int v253; // lr
  int v254; // r2
  int v255; // r0
  int v256; // r3
  int v257; // r8
  int v258; // r4
  int v259; // r0
  int v260; // r12
  int v261; // r7
  int v262; // r1
  int v263; // r0
  int v264; // lr
  int v265; // r11
  int v266; // r2
  int v267; // r3
  int v268; // r2
  int v269; // r0
  int v270; // r8
  int v271; // r4
  int v272; // r12
  int v273; // r3
  int v274; // r2
  int v275; // r6
  bool v276; // zf
  int v277; // r4
  unsigned int v278; // [sp+0h] [bp-104h]
  int v279; // [sp+0h] [bp-104h]
  unsigned int v280; // [sp+4h] [bp-100h]
  int v281; // [sp+4h] [bp-100h]
  int v282; // [sp+4h] [bp-100h]
  int v283; // [sp+4h] [bp-100h]
  int v284; // [sp+4h] [bp-100h]
  int v285; // [sp+4h] [bp-100h]
  size_t na; // [sp+8h] [bp-FCh]
  unsigned int v288; // [sp+Ch] [bp-F8h]
  int v289; // [sp+Ch] [bp-F8h]
  int v290; // [sp+Ch] [bp-F8h]
  unsigned int *v291; // [sp+10h] [bp-F4h]
  char *v292; // [sp+14h] [bp-F0h]
  int v293; // [sp+20h] [bp-E4h]
  int v294; // [sp+20h] [bp-E4h]
  int v295; // [sp+20h] [bp-E4h]
  int v296; // [sp+24h] [bp-E0h]
  unsigned int v297; // [sp+24h] [bp-E0h]
  int v298; // [sp+28h] [bp-DCh]
  unsigned int v299; // [sp+28h] [bp-DCh]
  int v300; // [sp+28h] [bp-DCh]
  unsigned int v301; // [sp+2Ch] [bp-D8h]
  int v302; // [sp+2Ch] [bp-D8h]
  unsigned int v303; // [sp+2Ch] [bp-D8h]
  int v304; // [sp+30h] [bp-D4h]
  int v305; // [sp+30h] [bp-D4h]
  int v306; // [sp+30h] [bp-D4h]
  int v307; // [sp+30h] [bp-D4h]
  int v308; // [sp+30h] [bp-D4h]
  int v309; // [sp+34h] [bp-D0h]
  int v310; // [sp+34h] [bp-D0h]
  int v311; // [sp+34h] [bp-D0h]
  int v312; // [sp+34h] [bp-D0h]
  int v313; // [sp+38h] [bp-CCh]
  int v314; // [sp+38h] [bp-CCh]
  int v315; // [sp+38h] [bp-CCh]
  int v316; // [sp+3Ch] [bp-C8h]
  int v317; // [sp+3Ch] [bp-C8h]
  int v318; // [sp+3Ch] [bp-C8h]
  int v319; // [sp+3Ch] [bp-C8h]
  unsigned int v320; // [sp+40h] [bp-C4h]
  int v321; // [sp+40h] [bp-C4h]
  int v322; // [sp+40h] [bp-C4h]
  unsigned int v323; // [sp+40h] [bp-C4h]
  int v324; // [sp+44h] [bp-C0h]
  int v325; // [sp+44h] [bp-C0h]
  int v326; // [sp+44h] [bp-C0h]
  int v327; // [sp+44h] [bp-C0h]
  int v328; // [sp+44h] [bp-C0h]
  unsigned int v329; // [sp+48h] [bp-BCh]
  int v330; // [sp+48h] [bp-BCh]
  unsigned int v331; // [sp+48h] [bp-BCh]
  unsigned int v332; // [sp+4Ch] [bp-B8h]
  int v333; // [sp+4Ch] [bp-B8h]
  int v334; // [sp+4Ch] [bp-B8h]
  unsigned int v335; // [sp+4Ch] [bp-B8h]
  int v336; // [sp+50h] [bp-B4h]
  int v337; // [sp+50h] [bp-B4h]
  int v338; // [sp+50h] [bp-B4h]
  int v339; // [sp+50h] [bp-B4h]
  int v340; // [sp+54h] [bp-B0h]
  int v341; // [sp+54h] [bp-B0h]
  int v342; // [sp+54h] [bp-B0h]
  int v343; // [sp+58h] [bp-ACh]
  int v344; // [sp+58h] [bp-ACh]
  int v345; // [sp+58h] [bp-ACh]
  int v346; // [sp+58h] [bp-ACh]
  unsigned int v347; // [sp+5Ch] [bp-A8h]
  int v348; // [sp+5Ch] [bp-A8h]
  unsigned int v349; // [sp+5Ch] [bp-A8h]
  int v350; // [sp+60h] [bp-A4h]
  int v351; // [sp+60h] [bp-A4h]
  int v352; // [sp+60h] [bp-A4h]
  int v353; // [sp+60h] [bp-A4h]
  unsigned int v354; // [sp+64h] [bp-A0h]
  int v355; // [sp+64h] [bp-A0h]
  int v356; // [sp+64h] [bp-A0h]
  unsigned int v357; // [sp+64h] [bp-A0h]
  int v358; // [sp+68h] [bp-9Ch]
  int v359; // [sp+68h] [bp-9Ch]
  int v360; // [sp+68h] [bp-9Ch]
  int v361; // [sp+68h] [bp-9Ch]
  int v362; // [sp+6Ch] [bp-98h]
  int v363; // [sp+6Ch] [bp-98h]
  int v364; // [sp+6Ch] [bp-98h]
  int v365; // [sp+6Ch] [bp-98h]
  int v366; // [sp+70h] [bp-94h]
  int v367; // [sp+70h] [bp-94h]
  int v368; // [sp+70h] [bp-94h]
  int v369; // [sp+74h] [bp-90h]
  int v370; // [sp+74h] [bp-90h]
  int v371; // [sp+74h] [bp-90h]
  int v372; // [sp+74h] [bp-90h]
  unsigned int v373; // [sp+78h] [bp-8Ch]
  int v374; // [sp+78h] [bp-8Ch]
  unsigned int v375; // [sp+78h] [bp-8Ch]
  int v376; // [sp+7Ch] [bp-88h]
  int v377; // [sp+7Ch] [bp-88h]
  int v378; // [sp+7Ch] [bp-88h]
  unsigned int v379; // [sp+80h] [bp-84h]
  int v380; // [sp+80h] [bp-84h]
  unsigned int v381; // [sp+80h] [bp-84h]
  int v382; // [sp+84h] [bp-80h]
  int v383; // [sp+84h] [bp-80h]
  int v384; // [sp+84h] [bp-80h]
  int v385; // [sp+84h] [bp-80h]
  unsigned int v386; // [sp+88h] [bp-7Ch]
  int v387; // [sp+88h] [bp-7Ch]
  unsigned int v388; // [sp+88h] [bp-7Ch]
  int v389; // [sp+8Ch] [bp-78h]
  int v390; // [sp+8Ch] [bp-78h]
  int v391; // [sp+90h] [bp-74h]
  int v392; // [sp+90h] [bp-74h]
  int v393; // [sp+90h] [bp-74h]
  int v394; // [sp+90h] [bp-74h]
  int v395; // [sp+94h] [bp-70h]
  int v396; // [sp+94h] [bp-70h]
  int v397; // [sp+94h] [bp-70h]
  int v398; // [sp+94h] [bp-70h]
  size_t v399; // [sp+98h] [bp-6Ch]
  size_t v400; // [sp+98h] [bp-6Ch]
  size_t v401; // [sp+98h] [bp-6Ch]
  size_t v402; // [sp+98h] [bp-6Ch]
  int v403; // [sp+9Ch] [bp-68h]
  int v404; // [sp+9Ch] [bp-68h]
  int v405; // [sp+9Ch] [bp-68h]
  int v406; // [sp+9Ch] [bp-68h]
  unsigned int v407; // [sp+A0h] [bp-64h]
  int v408; // [sp+A0h] [bp-64h]
  unsigned int v409; // [sp+A0h] [bp-64h]
  int v410; // [sp+A4h] [bp-60h]
  int v411; // [sp+A4h] [bp-60h]
  unsigned int v412; // [sp+A4h] [bp-60h]
  int v413; // [sp+A8h] [bp-5Ch]
  int v414; // [sp+ACh] [bp-58h]
  unsigned int v415; // [sp+ACh] [bp-58h]
  int v416; // [sp+B0h] [bp-54h]
  unsigned int v417; // [sp+B0h] [bp-54h]
  int v418; // [sp+B4h] [bp-50h]
  int v419; // [sp+B4h] [bp-50h]
  int v420; // [sp+B4h] [bp-50h]
  int v421; // [sp+B8h] [bp-4Ch]
  int v422; // [sp+B8h] [bp-4Ch]
  int v423; // [sp+B8h] [bp-4Ch]
  int v424; // [sp+B8h] [bp-4Ch]
  unsigned int v425; // [sp+BCh] [bp-48h]
  int v426; // [sp+C0h] [bp-44h]
  int v427; // [sp+C0h] [bp-44h]
  int v428; // [sp+C0h] [bp-44h]
  int v429; // [sp+C4h] [bp-40h]
  int v430; // [sp+C4h] [bp-40h]
  int v431; // [sp+C4h] [bp-40h]
  int v432; // [sp+C8h] [bp-3Ch]
  int v433; // [sp+C8h] [bp-3Ch]
  int v434; // [sp+CCh] [bp-38h]
  int v435; // [sp+CCh] [bp-38h]
  int v436; // [sp+D0h] [bp-34h]
  int v437; // [sp+D0h] [bp-34h]
  int v438; // [sp+D4h] [bp-30h]
  int v439; // [sp+D4h] [bp-30h]
  int v440; // [sp+D4h] [bp-30h]
  int v441; // [sp+D8h] [bp-2Ch]
  int v442; // [sp+D8h] [bp-2Ch]
  int v443; // [sp+DCh] [bp-28h]
  int v444; // [sp+DCh] [bp-28h]
  int v445; // [sp+E0h] [bp-24h]
  int v446; // [sp+E4h] [bp-20h]
  int v447; // [sp+E8h] [bp-1Ch]
  int v448; // [sp+ECh] [bp-18h]
  int v449; // [sp+F0h] [bp-14h]
  int v450; // [sp+F4h] [bp-10h]
  int v451; // [sp+F8h] [bp-Ch]
  int v452; // [sp+FCh] [bp-8h]

  v3 = *(_DWORD *)(result + 32);
  v291 = (unsigned int *)result;
  v4 = 32 - v3;
  if ( 32 - v3 > a3 )
  {
    v277 = result;
    result = (int)memcpy((void *)(result + v3), src, a3);
    *(_DWORD *)(v277 + 32) = v3 + a3;
  }
  else
  {
    v296 = *(_DWORD *)(result + 36);
    v418 = *(_DWORD *)(result + 40);
    v416 = *(_DWORD *)(result + 44);
    v421 = *(_DWORD *)(result + 48);
    v293 = *(_DWORD *)(result + 52);
    v414 = *(_DWORD *)(result + 56);
    v413 = *(_DWORD *)(result + 60);
    v410 = *(_DWORD *)(result + 64);
    v389 = *(_DWORD *)(result + 68);
    v369 = *(_DWORD *)(result + 72);
    v376 = *(_DWORD *)(result + 76);
    v382 = *(_DWORD *)(result + 80);
    v391 = *(_DWORD *)(result + 84);
    v373 = *(_DWORD *)(result + 88);
    v379 = *(_DWORD *)(result + 92);
    v386 = *(_DWORD *)(result + 96);
    v362 = *(_DWORD *)(result + 100);
    v343 = *(_DWORD *)(result + 104);
    v350 = *(_DWORD *)(result + 108);
    v358 = *(_DWORD *)(result + 112);
    v366 = *(_DWORD *)(result + 116);
    v347 = *(_DWORD *)(result + 120);
    v354 = *(_DWORD *)(result + 124);
    v407 = *(_DWORD *)(result + 128);
    v336 = *(_DWORD *)(result + 132);
    v316 = *(_DWORD *)(result + 136);
    v324 = *(_DWORD *)(result + 140);
    v403 = *(_DWORD *)(result + 144);
    v340 = *(_DWORD *)(result + 148);
    v320 = *(_DWORD *)(result + 152);
    v329 = *(_DWORD *)(result + 156);
    v332 = *(_DWORD *)(result + 160);
    v309 = *(_DWORD *)(result + 164);
    v298 = *(_DWORD *)(result + 168);
    v395 = *(_DWORD *)(result + 172);
    v304 = *(_DWORD *)(result + 176);
    v313 = *(_DWORD *)(result + 180);
    v278 = *(_DWORD *)(result + 184);
    v301 = *(_DWORD *)(result + 188);
    v399 = *(_DWORD *)(result + 192);
    if ( a3 )
    {
      v5 = a3;
      v6 = src;
      while ( 1 )
      {
        if ( v4 >= v5 )
          v4 = v5;
        v8 = (char *)v291 + v3;
        v3 += v4;
        result = (int)memcpy(v8, v6, v4);
        na = v5 - v4;
        v292 = &v6[v4];
        if ( v3 == 32 )
        {
          v9 = v421;
          v10 = v407;
          v11 = v332 ^ v407 ^ v386 ^ v399 ^ v410;
          v12 = v421 ^ v382 ^ v358 ^ v403 ^ v304 ^ v11;
          v13 = v354 ^ v379 ^ v329 ^ v413 ^ v301;
          v14 = v395 ^ v376 ^ v416 ^ v350 ^ v324 ^ v11;
          v15 = v298 ^ v316 ^ v369 ^ v418 ^ v343;
          v408 = v395 ^ v15;
          v16 = v399 ^ v13;
          v17 = v373 ^ v347 ^ v414 ^ v320 ^ v278;
          v422 = v12 ^ v313;
          v18 = v14 ^ v403;
          v19 = v14 ^ v9;
          v400 = v10 ^ v13;
          v396 = v13 ^ v410;
          v387 = v386 ^ v13;
          v333 = v332 ^ v13;
          v404 = v15 ^ v350;
          v351 = v15 ^ v376;
          v411 = v17 ^ v301;
          v377 = v15 ^ v324;
          v20 = v309 ^ v336 ^ v362 ^ v389 ^ v296 ^ v11;
          v21 = v382;
          v383 = v14 ^ v9 ^ v408 ^ v16;
          v325 = v14 ^ v21;
          v426 = v379 ^ v17;
          v429 = v14 ^ v358;
          v432 = v354 ^ v17;
          v22 = v18 ^ v12 ^ v313;
          v438 = v14 ^ v304;
          v355 = v329 ^ v17;
          v302 = v396 ^ v17 ^ v301;
          v23 = v391 ^ v293 ^ v366 ^ v340 ^ v313;
          v359 = v12 ^ v293;
          v24 = v391;
          v392 = v12 ^ v366;
          v25 = v24 ^ v12;
          v26 = v12 ^ v340;
          v305 = v16;
          v27 = v22 ^ v333;
          v380 = v15 ^ v416;
          v441 = v18 ^ v404 ^ v400;
          v28 = v373 ^ v23;
          v29 = v17 ^ v413;
          v425 = bswap32(*v291);
          v288 = bswap32(v291[7]);
          v436 = v298 ^ v20;
          v434 = v336 ^ v11;
          v314 = v11 ^ v296;
          v294 = v329 ^ v17 ^ v16;
          v30 = v23 ^ v414;
          v31 = v347 ^ v23;
          v32 = v23 ^ v320;
          v33 = v23 ^ v278;
          v299 = bswap32(v291[6]);
          v415 = bswap32(v291[2]);
          v280 = bswap32(v291[4]);
          v417 = bswap32(v291[1]);
          v297 = bswap32(v291[5]);
          v34 = v316 ^ v20;
          v317 = v20 ^ v418;
          v321 = v20 ^ v369;
          v330 = v20 ^ v343;
          v374 = v11 ^ v389;
          v370 = v362 ^ v11;
          v35 = v11 ^ v309;
          v367 = v314 ^ v16;
          v341 = v19 ^ v25 ^ v396;
          v443 = v30 ^ v422;
          v348 = v30 ^ v426;
          v310 = v426 ^ v400;
          v419 = v25 ^ v31;
          v423 = v31 ^ v355;
          v36 = v351 ^ v387 ^ v429;
          v427 = v26 ^ v33;
          v445 = v29 ^ v33;
          v37 = v429 ^ v26 ^ v400;
          v430 = v32 ^ v411;
          v412 = bswap32(v291[3]);
          v38 = v32 ^ v392;
          v39 = v392 ^ v325 ^ v387;
          v40 = v29 ^ v387;
          v41 = v377 ^ v333 ^ v438;
          v439 = v359 ^ v438 ^ v305;
          v344 = v359 ^ v28;
          v42 = v28 ^ v432;
          v279 = v432 ^ v333;
          v43 = v383 ^ v302 ^ v27 ^ v280;
          v363 = v34 ^ v408;
          v393 = v321 ^ v404;
          v451 = v38 ^ v27;
          v356 = v42 ^ v38;
          v337 = v317 ^ v351;
          v44 = v29 ^ v387 ^ v42;
          v45 = v35 ^ v305;
          v405 = v333 ^ v35;
          v46 = v400;
          v401 = v434 ^ v400;
          v352 = v387 ^ v370;
          v47 = v34 ^ v370 ^ v46;
          v334 = v436 ^ v434 ^ v333;
          v371 = v380 ^ v436;
          v306 = v396 ^ v374;
          v326 = v325 ^ v380 ^ v396;
          v446 = v36 ^ v310 ^ v341;
          v447 = v441 ^ v279 ^ v39;
          v322 = v321 ^ v314 ^ v396;
          v450 = v41 ^ v294 ^ v37;
          v448 = v37 ^ v419;
          v48 = v337 ^ v383 ^ v40;
          v49 = v374 ^ v387 ^ v330;
          v318 = v45 ^ v317;
          v357 = __ROR4__(v356 ^ v280, 30);
          v397 = v299 ^ v417;
          v50 = v41 ^ v380 ^ v436 ^ v302;
          v375 = __ROR4__(v39 ^ v344 ^ v280, 31);
          v449 = v441 ^ v363 ^ v294;
          v384 = v40 ^ v367;
          v433 = v330 ^ v377 ^ v334;
          v315 = __ROR4__(v43 ^ v288 ^ v425 ^ v297, 28);
          v381 = __ROR4__(v419 ^ v348 ^ v297, 31);
          v51 = v430 ^ v443;
          v452 = v367 ^ v302 ^ v334 ^ v280;
          v388 = __ROR4__(v44 ^ v299, 31);
          v52 = __ROR4__(v279 ^ v430 ^ v280, 29);
          v435 = v341 ^ v443;
          v431 = v337 ^ v49;
          v442 = v36 ^ v330 ^ v377 ^ v279;
          v335 = v52;
          v437 = v344 ^ v445;
          v53 = v423 ^ v427;
          v420 = v363 ^ v318;
          v409 = __ROR4__(v310 ^ v423 ^ v297, 30);
          v360 = v322 ^ v371;
          v444 = v50 ^ v280;
          v338 = v348 ^ v302;
          v345 = v405 ^ v302;
          v54 = v405 ^ v294 ^ v47;
          v364 = v393 ^ v47;
          v55 = v326 ^ v393;
          v327 = v326 ^ v40 ^ v439;
          v424 = v40 ^ v306 ^ v318;
          v331 = __ROR4__(v53 ^ v288 ^ v412, 29);
          v349 = __ROR4__(v448 ^ v288 ^ v412, 30);
          v56 = v288 ^ v415 ^ v299;
          v57 = v299 ^ v417 ^ v297;
          v58 = v427 ^ v439 ^ v57;
          v59 = v450 ^ v57;
          v60 = v352 ^ v310;
          v368 = __ROR4__(v447 ^ v56, 30);
          v428 = v55 ^ v310;
          v311 = v306 ^ v310;
          v61 = v60 ^ v322;
          v62 = v401;
          v402 = __ROR4__(v288 ^ v412 ^ v294 ^ v445, 28);
          v307 = v62 ^ v294;
          v440 = v62 ^ v279 ^ v49;
          v323 = __ROR4__(v451 ^ v56, 29);
          v63 = __ROR4__(v56 ^ v51, 28);
          v64 = v352 ^ v279;
          v65 = v299;
          v66 = v288 ^ v299;
          v394 = __ROR4__(v446 ^ v288 ^ v412, 31);
          v303 = v63;
          v342 = __ROR4__(v59, 29);
          v278 = __ROR4__(v58, 28);
          v67 = v299 ^ v297;
          v68 = v54 ^ v299 ^ v297;
          v406 = v449 ^ v288 ^ v425 ^ v297;
          v300 = v452 ^ v297;
          v353 = v364 ^ v288 ^ v425;
          v69 = v435 ^ v297;
          v372 = v61 ^ v288 ^ v425;
          v295 = v327 ^ v280;
          v70 = v288 ^ v338;
          v390 = v288 ^ v311;
          v312 = v345 ^ v280;
          v71 = v65;
          v339 = v307 ^ v297;
          v72 = v437 ^ v65;
          v365 = v64 ^ v71;
          v308 = v444 ^ v66;
          v346 = v440 ^ v66;
          v328 = v433 ^ v66;
          v73 = v360 ^ v415;
          v74 = v424 ^ v417;
          v378 = v431 ^ v417;
          v319 = v68;
          v75 = v48 ^ v412;
          v76 = v295;
          v361 = v442 ^ v397;
          v77 = v420 ^ v67;
          v78 = v384 ^ v425;
          v79 = 0;
          v385 = v428 ^ v288 ^ v415;
          v398 = v77;
          do
          {
            v80 = v73 ^ v75;
            v81 = v76 ^ v70;
            v82 = ~v74 ^ v78 & v75;
            v83 = (v69 | v72) ^ v76;
            v84 = v76 & v69;
            v85 = ~v72 ^ v84;
            v86 = v84 ^ v81;
            v281 = v80 ^ v78 & v75;
            v87 = v85 | v86;
            v88 = v75 ^ (v78 | v74);
            v89 = v78 ^ (v82 | v281);
            v90 = v81 & v83 ^ v85;
            v91 = v89 ^ v90 ^ v86;
            v92 = v80 & v88 ^ v82;
            v93 = ~v88;
            v94 = v281 ^ v92;
            v95 = v93 ^ (v82 | v281);
            v96 = ~v83 ^ (v85 | v86);
            v97 = v92 & (v82 | v281);
            v98 = v69 ^ v87;
            v99 = v90 & v87;
            v100 = v91 ^ __ROR4__(v89, 30);
            v101 = v98 ^ v95;
            v102 = dword_17A6D8[v79];
            v103 = v96 ^ v97;
            v104 = v94 ^ v99;
            v105 = v101 ^ __ROR4__(v95, 30);
            v106 = v103 ^ __ROR4__(v97, 30);
            v107 = v100 ^ __ROR4__(v91, 18);
            v108 = v94 ^ v99 ^ __ROR4__(v94, 30);
            v109 = dword_17A6B8[v79];
            v110 = v105 ^ __ROR4__(v101, 18);
            ++v79;
            v111 = v106 ^ __ROR4__(v103, 18);
            v112 = v108 ^ __ROR4__(v104, 18);
            v74 = v110 ^ __ROR4__(v105, 22);
            v73 = v111 ^ __ROR4__(v106, 22);
            v75 = v112 ^ __ROR4__(v108, 22);
            v69 = __ROR4__(v110, 31);
            v72 = __ROR4__(v111, 31);
            v70 = __ROR4__(v112, 31);
            v76 = v102 ^ __ROR4__(v107, 31);
            v78 = v109 ^ v107 ^ __ROR4__(v100, 22);
          }
          while ( v79 != 8 );
          v293 = v76;
          v410 = v70;
          v414 = v69;
          v113 = 0;
          v296 = v78;
          v114 = v381;
          v115 = v385;
          v116 = v388;
          v117 = v390;
          v416 = v73;
          v418 = v74;
          v413 = v72;
          v118 = v372;
          v119 = v378;
          v120 = v394;
          v121 = v375;
          v421 = v75;
          do
          {
            v122 = v119 ^ v115;
            v123 = v120 ^ v116;
            v282 = v122 ^ v117 & v115;
            v124 = (v121 | v114) ^ v120;
            v125 = v120 & v121;
            v126 = ~v118 ^ v117 & v115;
            v289 = ~v114 ^ v125;
            v127 = (v117 | v118) ^ v115;
            v128 = v125 ^ v123;
            v129 = v126 | v282;
            v130 = v122 & v127 ^ v126;
            v131 = v123 & v124 ^ v289;
            v132 = v289 | v128;
            v133 = v129 ^ v117 ^ v131;
            v134 = v131 & (v289 | v128);
            v135 = v133 ^ v128;
            v136 = ~v127 ^ v129;
            v137 = v135 ^ __ROR4__(v129 ^ v117, 30);
            v138 = (v289 | v128) ^ v121 ^ v136;
            v139 = v282 ^ v130;
            v140 = v138 ^ __ROR4__(v136, 30);
            v141 = v130 & v129;
            v142 = dword_17A718[v113];
            v143 = ~v124 ^ v132;
            v144 = v139 ^ v134;
            v145 = v143 ^ v141;
            v146 = v145 ^ __ROR4__(v141, 30);
            v147 = v137 ^ __ROR4__(v135, 18);
            v148 = v139 ^ v134 ^ __ROR4__(v139, 30);
            v149 = v140 ^ __ROR4__(v138, 18);
            v150 = dword_17A6F8[v113];
            v151 = v146 ^ __ROR4__(v145, 18);
            ++v113;
            v152 = v148 ^ __ROR4__(v144, 18);
            v153 = v147 ^ __ROR4__(v137, 22);
            v118 = v149 ^ __ROR4__(v140, 22);
            v119 = v151 ^ __ROR4__(v146, 22);
            v115 = v152 ^ __ROR4__(v148, 22);
            v121 = __ROR4__(v149, 31);
            v114 = __ROR4__(v151, 31);
            v116 = __ROR4__(v152, 31);
            v120 = v142 ^ __ROR4__(v147, 31);
            v117 = v153 ^ v150;
          }
          while ( v113 != 8 );
          v369 = v118;
          v376 = v119;
          v379 = v114;
          v382 = v115;
          v386 = v116;
          v389 = v153 ^ v150;
          v391 = v120;
          v154 = v346;
          v155 = v349;
          v156 = v353;
          v157 = v357;
          v158 = v361;
          v159 = v409;
          v160 = v365;
          v161 = v368;
          v373 = v121;
          v162 = 0;
          do
          {
            v163 = v156 ^ v158;
            v164 = v161 ^ v159;
            v165 = ~v154 ^ v160 & v158;
            v166 = (v155 | v157) ^ v161;
            v167 = v161 & v155;
            v168 = ~v157 ^ v167;
            v169 = v167 ^ v164;
            v283 = v163 ^ v160 & v158;
            v170 = v168 | v169;
            v171 = v158 ^ (v160 | v154);
            v172 = v160 ^ (v165 | v283);
            v173 = v164 & v166 ^ v168;
            v174 = v172 ^ v173 ^ v169;
            v175 = v163 & v171 ^ v165;
            v176 = ~v171;
            v177 = v283 ^ v175;
            v178 = v176 ^ (v165 | v283);
            v179 = ~v166 ^ (v168 | v169);
            v180 = v175 & (v165 | v283);
            v181 = v155 ^ v170;
            v182 = v173 & v170;
            v183 = v174 ^ __ROR4__(v172, 30);
            v184 = v181 ^ v178;
            v185 = dword_17A758[v162];
            v186 = v179 ^ v180;
            v187 = v177 ^ v182;
            v188 = v184 ^ __ROR4__(v178, 30);
            v189 = v186 ^ __ROR4__(v180, 30);
            v190 = v183 ^ __ROR4__(v174, 18);
            v191 = v177 ^ v182 ^ __ROR4__(v177, 30);
            v192 = dword_17A738[v162];
            v193 = v188 ^ __ROR4__(v184, 18);
            ++v162;
            v194 = v189 ^ __ROR4__(v186, 18);
            v195 = v191 ^ __ROR4__(v187, 18);
            v154 = v193 ^ __ROR4__(v188, 22);
            v156 = v194 ^ __ROR4__(v189, 22);
            v158 = v195 ^ __ROR4__(v191, 22);
            v155 = __ROR4__(v193, 31);
            v157 = __ROR4__(v194, 31);
            v159 = __ROR4__(v195, 31);
            v161 = v185 ^ __ROR4__(v190, 31);
            v160 = v192 ^ v190 ^ __ROR4__(v183, 22);
          }
          while ( v162 != 8 );
          v343 = v154;
          v347 = v155;
          v196 = 0;
          v350 = v156;
          v354 = v157;
          v407 = v159;
          v362 = v160;
          v366 = v161;
          v197 = v319;
          v198 = v328;
          v199 = v331;
          v200 = v406;
          v201 = v335;
          v202 = v339;
          v203 = v342;
          v204 = v323;
          v358 = v158;
          do
          {
            v205 = v198 ^ v200;
            v206 = v203 ^ v201;
            v284 = v205 ^ v202 & v200;
            v207 = (v204 | v199) ^ v203;
            v208 = v203 & v204;
            v209 = ~v197 ^ v202 & v200;
            v290 = ~v199 ^ v208;
            v210 = (v202 | v197) ^ v200;
            v211 = v208 ^ v206;
            v212 = v209 | v284;
            v213 = v205 & v210 ^ v209;
            v214 = v206 & v207 ^ v290;
            v215 = v290 | v211;
            v216 = v212 ^ v202 ^ v214;
            v217 = v214 & (v290 | v211);
            v218 = v216 ^ v211;
            v219 = ~v210 ^ v212;
            v220 = v218 ^ __ROR4__(v212 ^ v202, 30);
            v221 = (v290 | v211) ^ v204 ^ v219;
            v222 = v284 ^ v213;
            v223 = v221 ^ __ROR4__(v219, 30);
            v224 = v213 & v212;
            v225 = dword_17A798[v196];
            v226 = ~v207 ^ v215;
            v227 = v222 ^ v217;
            v228 = v226 ^ v224;
            v229 = v228 ^ __ROR4__(v224, 30);
            v230 = v220 ^ __ROR4__(v218, 18);
            v231 = v222 ^ v217 ^ __ROR4__(v222, 30);
            v232 = v223 ^ __ROR4__(v221, 18);
            v233 = dword_17A778[v196];
            v234 = v229 ^ __ROR4__(v228, 18);
            ++v196;
            v235 = v231 ^ __ROR4__(v227, 18);
            v236 = v230 ^ __ROR4__(v220, 22);
            v197 = v232 ^ __ROR4__(v223, 22);
            v198 = v234 ^ __ROR4__(v229, 22);
            v200 = v235 ^ __ROR4__(v231, 22);
            v204 = __ROR4__(v232, 31);
            v199 = __ROR4__(v234, 31);
            v201 = __ROR4__(v235, 31);
            v203 = v225 ^ __ROR4__(v230, 31);
            v202 = v236 ^ v233;
          }
          while ( v196 != 8 );
          v316 = v197;
          v324 = v198;
          v329 = v199;
          v332 = v201;
          v336 = v236 ^ v233;
          v340 = v203;
          result = v398;
          v237 = v300;
          v238 = v303;
          v239 = v308;
          v240 = v402;
          v241 = v312;
          v242 = v315;
          v320 = v204;
          v403 = v200;
          v285 = 0;
          do
          {
            v243 = v242 ^ v240;
            v244 = result ^ v239;
            v245 = v244 ^ v241 & v239;
            v246 = (v278 | v238) ^ v242;
            v247 = v241 & v239 ^ ~v237;
            v248 = v242 & v278;
            v249 = v247 | v245;
            v250 = ~v238 ^ v248;
            v251 = v239 ^ (v241 | v237);
            v252 = v248 ^ v243;
            v253 = v241 ^ (v247 | v245);
            v254 = v243 & v246 ^ v250;
            v255 = v244 & v251;
            v256 = v250 | v252;
            v257 = v253 ^ v254 ^ v252;
            v258 = ~v251 ^ (v247 | v245);
            v259 = v255 ^ v247;
            v260 = v256 ^ v278 ^ v258;
            v261 = v245 ^ v259;
            v262 = v260 ^ __ROR4__(v258, 30);
            v263 = v259 & v249;
            v264 = v257 ^ __ROR4__(v253, 30);
            v265 = dword_17A878[v285];
            v266 = v254 & v256;
            v267 = v263 ^ ~v246 ^ v256;
            v268 = v266 ^ v261;
            v269 = v267 ^ __ROR4__(v263, 30);
            v270 = v264 ^ __ROR4__(v257, 18);
            v271 = v268 ^ __ROR4__(v261, 30);
            v272 = v262 ^ __ROR4__(v260, 18);
            v273 = v269 ^ __ROR4__(v267, 18);
            v274 = v271 ^ __ROR4__(v268, 18);
            v237 = v272 ^ __ROR4__(v262, 22);
            result = v273 ^ __ROR4__(v269, 22);
            v239 = v274 ^ __ROR4__(v271, 22);
            v278 = __ROR4__(v272, 31);
            v238 = __ROR4__(v273, 31);
            v275 = dword_17A858[v285];
            v240 = __ROR4__(v274, 31);
            v276 = v285++ == 7;
            v242 = v265 ^ __ROR4__(v270, 31);
            v241 = v270 ^ __ROR4__(v264, 22) ^ v275;
          }
          while ( !v276 );
          v301 = v238;
          v3 = 0;
          v7 = na;
          v298 = v237;
          v395 = result;
          v304 = v239;
          v399 = v240;
          v309 = v241;
          v313 = v242;
          if ( !na )
            break;
        }
        else
        {
          v7 = v5 - v4;
          if ( !na )
            break;
        }
        v6 = v292;
        v4 = 32 - v3;
        v5 = v7;
      }
    }
    v291[9] = v296;
    v291[10] = v418;
    v291[11] = v416;
    v291[12] = v421;
    v291[13] = v293;
    v291[14] = v414;
    v291[15] = v413;
    v291[16] = v410;
    v291[17] = v389;
    v291[18] = v369;
    v291[19] = v376;
    v291[20] = v382;
    v291[21] = v391;
    v291[22] = v373;
    v291[23] = v379;
    v291[24] = v386;
    v291[25] = v362;
    v291[26] = v343;
    v291[27] = v350;
    v291[28] = v358;
    v291[29] = v366;
    v291[30] = v347;
    v291[31] = v354;
    v291[32] = v407;
    v291[33] = v336;
    v291[34] = v316;
    v291[35] = v324;
    v291[36] = v403;
    v291[37] = v340;
    v291[38] = v320;
    v291[39] = v329;
    v291[40] = v332;
    v291[8] = v3;
    v291[41] = v309;
    v291[42] = v298;
    v291[43] = v395;
    v291[44] = v304;
    v291[45] = v313;
    v291[46] = v278;
    v291[47] = v301;
    v291[48] = v399;
  }
  return result;
}
