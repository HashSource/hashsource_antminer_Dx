__int64 __fastcall sub_1464CC(int a1, char a2, char a3, void *a4, size_t n)
{
  unsigned int v5; // r5
  unsigned int v6; // r4
  unsigned int v7; // r6
  size_t v8; // r5
  int v9; // r4
  int v10; // r6
  unsigned __int64 v11; // kr50_8
  char *v12; // r12
  int v13; // r4
  int v14; // r10
  int v15; // r2
  int v16; // r0
  int v17; // r3
  unsigned int v18; // r8
  unsigned int v19; // r0
  unsigned int v20; // r3
  unsigned int v21; // r4
  int v22; // r6
  int *v23; // lr
  _DWORD *v24; // lr
  _QWORD *v25; // r11
  _QWORD *v26; // r12
  _QWORD *v27; // r6
  _QWORD *v28; // r10
  _DWORD *v29; // r9
  int v30; // r0
  int v31; // r8
  _QWORD *v32; // r6
  int v33; // lr
  char *v34; // r2
  __int64 v35; // r8
  int v36; // r2
  int v37; // r2
  _QWORD *v38; // r3
  int v39; // r6
  int v40; // r7
  _QWORD *v41; // r12
  _QWORD *v42; // r3
  int v43; // r0
  _DWORD *v44; // r12
  int v45; // r11
  _QWORD *v46; // r3
  _DWORD *v47; // r10
  _DWORD *v48; // r0
  int v49; // r4
  int v50; // r3
  int v51; // r10
  _QWORD *v52; // lr
  int v53; // r0
  int v54; // r3
  int v55; // r2
  _QWORD *v56; // r12
  _QWORD *v57; // r7
  int v58; // r10
  int v59; // r0
  int v60; // r7
  int v61; // r12
  int v62; // r4
  int v63; // r10
  int v64; // r7
  int v65; // r11
  int v66; // r3
  int v67; // r7
  int v68; // r4
  int v69; // r10
  int v70; // r11
  int v71; // lr
  int v72; // r6
  int v73; // r12
  __int64 v74; // r2
  int v75; // r4
  int v76; // r7
  int v77; // r0
  __int64 v78; // r2
  int v79; // r0
  int v80; // r7
  unsigned int v81; // lr
  int v82; // r11
  int v83; // lr
  int v84; // r0
  unsigned int v85; // r6
  unsigned int v86; // r12
  _QWORD *v87; // r12
  _QWORD *v88; // r10
  _DWORD *v89; // r11
  int v90; // lr
  int v91; // r4
  int v92; // r10
  int v93; // r4
  int v94; // lr
  _QWORD *v95; // r10
  __int64 v96; // r2
  int v97; // r4
  int v98; // lr
  int v99; // r0
  int v100; // r11
  int v101; // r7
  int v102; // r10
  int v103; // r6
  int v104; // r4
  int v105; // r12
  int v106; // r11
  int v107; // r0
  int v108; // r4
  int v109; // lr
  int v110; // r0
  int v111; // r12
  int v112; // r0
  int v113; // r12
  int v114; // r4
  int v115; // r12
  int v116; // lr
  int v117; // r6
  int v118; // r4
  int v119; // lr
  _QWORD *v120; // r0
  int v121; // r10
  int v122; // r4
  int v123; // r12
  int v124; // r4
  int v125; // lr
  int v126; // r7
  int v127; // r6
  int v128; // r4
  int v129; // r11
  int v130; // r11
  unsigned __int64 v132; // kr70_8
  __int64 v133; // [sp+0h] [bp-334h]
  int v134; // [sp+14h] [bp-320h]
  unsigned int v135; // [sp+14h] [bp-320h]
  int v136; // [sp+14h] [bp-320h]
  _QWORD *v137; // [sp+14h] [bp-320h]
  int v138; // [sp+14h] [bp-320h]
  unsigned int v139; // [sp+14h] [bp-320h]
  int v140; // [sp+14h] [bp-320h]
  int v141; // [sp+14h] [bp-320h]
  __int64 v142; // [sp+18h] [bp-31Ch]
  int v143; // [sp+20h] [bp-314h]
  unsigned int v144; // [sp+20h] [bp-314h]
  _DWORD *v145; // [sp+20h] [bp-314h]
  int v146; // [sp+20h] [bp-314h]
  unsigned int v147; // [sp+20h] [bp-314h]
  unsigned int v148; // [sp+24h] [bp-310h]
  unsigned int v149; // [sp+24h] [bp-310h]
  int v150; // [sp+24h] [bp-310h]
  char *v151; // [sp+24h] [bp-310h]
  int v152; // [sp+28h] [bp-30Ch]
  unsigned int v153; // [sp+28h] [bp-30Ch]
  unsigned int v154; // [sp+28h] [bp-30Ch]
  int v155; // [sp+28h] [bp-30Ch]
  int v156; // [sp+2Ch] [bp-308h]
  unsigned int v157; // [sp+2Ch] [bp-308h]
  int v158; // [sp+2Ch] [bp-308h]
  unsigned int v159; // [sp+2Ch] [bp-308h]
  int v160; // [sp+2Ch] [bp-308h]
  int v161; // [sp+2Ch] [bp-308h]
  unsigned int v162; // [sp+30h] [bp-304h]
  unsigned int v163; // [sp+30h] [bp-304h]
  int v164; // [sp+30h] [bp-304h]
  int v165; // [sp+34h] [bp-300h]
  unsigned int v166; // [sp+34h] [bp-300h]
  int v167; // [sp+34h] [bp-300h]
  unsigned int v168; // [sp+34h] [bp-300h]
  int v169; // [sp+34h] [bp-300h]
  _QWORD *v170; // [sp+34h] [bp-300h]
  int v171; // [sp+38h] [bp-2FCh]
  unsigned int v172; // [sp+38h] [bp-2FCh]
  unsigned int v173; // [sp+38h] [bp-2FCh]
  int v174; // [sp+38h] [bp-2FCh]
  _DWORD *v175; // [sp+38h] [bp-2FCh]
  unsigned int v176; // [sp+3Ch] [bp-2F8h]
  unsigned int v177; // [sp+3Ch] [bp-2F8h]
  int v178; // [sp+3Ch] [bp-2F8h]
  unsigned int v179; // [sp+40h] [bp-2F4h]
  unsigned int v180; // [sp+40h] [bp-2F4h]
  int v181; // [sp+40h] [bp-2F4h]
  int v182; // [sp+44h] [bp-2F0h]
  unsigned int v183; // [sp+44h] [bp-2F0h]
  _QWORD *v184; // [sp+44h] [bp-2F0h]
  unsigned int v185; // [sp+44h] [bp-2F0h]
  unsigned int v186; // [sp+48h] [bp-2ECh]
  _DWORD *v187; // [sp+48h] [bp-2ECh]
  unsigned int v188; // [sp+48h] [bp-2ECh]
  int v189; // [sp+48h] [bp-2ECh]
  int v190; // [sp+48h] [bp-2ECh]
  unsigned int v191; // [sp+4Ch] [bp-2E8h]
  int v192; // [sp+4Ch] [bp-2E8h]
  unsigned int v193; // [sp+4Ch] [bp-2E8h]
  int v194; // [sp+4Ch] [bp-2E8h]
  int v195; // [sp+50h] [bp-2E4h]
  unsigned int v196; // [sp+50h] [bp-2E4h]
  int v197; // [sp+50h] [bp-2E4h]
  char *v198; // [sp+50h] [bp-2E4h]
  unsigned int v199; // [sp+50h] [bp-2E4h]
  unsigned int v200; // [sp+54h] [bp-2E0h]
  int v201; // [sp+54h] [bp-2E0h]
  unsigned int v202; // [sp+54h] [bp-2E0h]
  unsigned int v203; // [sp+58h] [bp-2DCh]
  unsigned int v204; // [sp+58h] [bp-2DCh]
  unsigned int v205; // [sp+5Ch] [bp-2D8h]
  unsigned int v206; // [sp+5Ch] [bp-2D8h]
  int v207; // [sp+60h] [bp-2D4h]
  int v208; // [sp+60h] [bp-2D4h]
  unsigned int v209; // [sp+60h] [bp-2D4h]
  int v210; // [sp+60h] [bp-2D4h]
  unsigned int v211; // [sp+64h] [bp-2D0h]
  int v212; // [sp+64h] [bp-2D0h]
  unsigned int v213; // [sp+64h] [bp-2D0h]
  int v214; // [sp+68h] [bp-2CCh]
  unsigned int v215; // [sp+68h] [bp-2CCh]
  int v216; // [sp+6Ch] [bp-2C8h]
  unsigned int v217; // [sp+6Ch] [bp-2C8h]
  unsigned int v218; // [sp+6Ch] [bp-2C8h]
  __int64 v219; // [sp+70h] [bp-2C4h]
  unsigned int v220; // [sp+70h] [bp-2C4h]
  int v221; // [sp+70h] [bp-2C4h]
  _QWORD *v222; // [sp+70h] [bp-2C4h]
  unsigned int v223; // [sp+70h] [bp-2C4h]
  _DWORD *v224; // [sp+70h] [bp-2C4h]
  _QWORD *v225; // [sp+70h] [bp-2C4h]
  unsigned int v226; // [sp+74h] [bp-2C0h]
  unsigned int v227; // [sp+74h] [bp-2C0h]
  _DWORD *v228; // [sp+74h] [bp-2C0h]
  int v229; // [sp+78h] [bp-2BCh]
  unsigned int v230; // [sp+78h] [bp-2BCh]
  unsigned int v231; // [sp+78h] [bp-2BCh]
  int v232; // [sp+7Ch] [bp-2B8h]
  unsigned int v233; // [sp+7Ch] [bp-2B8h]
  int v234; // [sp+7Ch] [bp-2B8h]
  _QWORD *v235; // [sp+7Ch] [bp-2B8h]
  unsigned int v236; // [sp+7Ch] [bp-2B8h]
  int v237; // [sp+80h] [bp-2B4h]
  unsigned int v238; // [sp+80h] [bp-2B4h]
  int v239; // [sp+80h] [bp-2B4h]
  __int64 v240; // [sp+84h] [bp-2B0h]
  unsigned int v241; // [sp+84h] [bp-2B0h]
  int v242; // [sp+84h] [bp-2B0h]
  int v243; // [sp+84h] [bp-2B0h]
  unsigned int v244; // [sp+84h] [bp-2B0h]
  unsigned int v245; // [sp+88h] [bp-2ACh]
  int v246; // [sp+88h] [bp-2ACh]
  unsigned int v247; // [sp+8Ch] [bp-2A8h]
  unsigned int v248; // [sp+8Ch] [bp-2A8h]
  _QWORD *v249; // [sp+8Ch] [bp-2A8h]
  int v250; // [sp+90h] [bp-2A4h]
  int v251; // [sp+94h] [bp-2A0h]
  unsigned int v252; // [sp+94h] [bp-2A0h]
  int v253; // [sp+94h] [bp-2A0h]
  int v254; // [sp+98h] [bp-29Ch]
  _QWORD *v255; // [sp+98h] [bp-29Ch]
  int v256; // [sp+98h] [bp-29Ch]
  int v257; // [sp+98h] [bp-29Ch]
  _DWORD *v258; // [sp+98h] [bp-29Ch]
  __int64 v259; // [sp+9Ch] [bp-298h]
  int v260; // [sp+9Ch] [bp-298h]
  _DWORD *v261; // [sp+9Ch] [bp-298h]
  int v262; // [sp+9Ch] [bp-298h]
  _QWORD *v263; // [sp+A0h] [bp-294h]
  int v264; // [sp+A0h] [bp-294h]
  __int64 v265; // [sp+A4h] [bp-290h]
  unsigned int v266; // [sp+A4h] [bp-290h]
  int v267; // [sp+ACh] [bp-288h]
  int v268; // [sp+ACh] [bp-288h]
  unsigned int v269; // [sp+B0h] [bp-284h]
  int v270; // [sp+B0h] [bp-284h]
  unsigned int v271; // [sp+B4h] [bp-280h]
  unsigned int v272; // [sp+B4h] [bp-280h]
  int v273; // [sp+B4h] [bp-280h]
  unsigned int v274; // [sp+B8h] [bp-27Ch]
  unsigned int v275; // [sp+B8h] [bp-27Ch]
  _QWORD *v276; // [sp+BCh] [bp-278h]
  unsigned int v277; // [sp+BCh] [bp-278h]
  int v278; // [sp+BCh] [bp-278h]
  int v279; // [sp+BCh] [bp-278h]
  int v280; // [sp+C0h] [bp-274h]
  unsigned int v281; // [sp+C0h] [bp-274h]
  unsigned int v282; // [sp+C0h] [bp-274h]
  int v283; // [sp+C4h] [bp-270h]
  _QWORD *v284; // [sp+C4h] [bp-270h]
  int v285; // [sp+C4h] [bp-270h]
  unsigned int v286; // [sp+C4h] [bp-270h]
  _QWORD *v287; // [sp+C8h] [bp-26Ch]
  unsigned int v288; // [sp+C8h] [bp-26Ch]
  _QWORD *v289; // [sp+CCh] [bp-268h]
  _DWORD *v290; // [sp+CCh] [bp-268h]
  _DWORD *v291; // [sp+CCh] [bp-268h]
  _QWORD *v292; // [sp+CCh] [bp-268h]
  _DWORD *v293; // [sp+CCh] [bp-268h]
  _DWORD *v294; // [sp+D0h] [bp-264h]
  _DWORD *v295; // [sp+D0h] [bp-264h]
  _QWORD *v296; // [sp+D0h] [bp-264h]
  _QWORD *v297; // [sp+D0h] [bp-264h]
  _DWORD *v298; // [sp+D0h] [bp-264h]
  int v299; // [sp+D0h] [bp-264h]
  _QWORD *v300; // [sp+D4h] [bp-260h]
  _QWORD *v301; // [sp+D4h] [bp-260h]
  _DWORD *v302; // [sp+D4h] [bp-260h]
  _QWORD *v303; // [sp+D4h] [bp-260h]
  char *v304; // [sp+D4h] [bp-260h]
  _QWORD *v305; // [sp+D8h] [bp-25Ch]
  int v306; // [sp+D8h] [bp-25Ch]
  _QWORD *v307; // [sp+D8h] [bp-25Ch]
  _QWORD *v308; // [sp+D8h] [bp-25Ch]
  _QWORD *v309; // [sp+D8h] [bp-25Ch]
  _DWORD *v310; // [sp+D8h] [bp-25Ch]
  int v311; // [sp+D8h] [bp-25Ch]
  _DWORD *v312; // [sp+DCh] [bp-258h]
  _QWORD *v313; // [sp+DCh] [bp-258h]
  _QWORD *v314; // [sp+E0h] [bp-254h]
  _QWORD *v315; // [sp+E0h] [bp-254h]
  int v316; // [sp+E0h] [bp-254h]
  _QWORD *v317; // [sp+E0h] [bp-254h]
  _QWORD *v318; // [sp+E0h] [bp-254h]
  _QWORD *v319; // [sp+E4h] [bp-250h]
  _QWORD *v320; // [sp+E4h] [bp-250h]
  _QWORD *v321; // [sp+E8h] [bp-24Ch]
  int v322; // [sp+E8h] [bp-24Ch]
  _QWORD *v323; // [sp+E8h] [bp-24Ch]
  _QWORD *v324; // [sp+ECh] [bp-248h]
  _DWORD *v325; // [sp+ECh] [bp-248h]
  _QWORD *v326; // [sp+ECh] [bp-248h]
  _QWORD *v327; // [sp+ECh] [bp-248h]
  _QWORD *v328; // [sp+F0h] [bp-244h]
  _QWORD *v329; // [sp+F0h] [bp-244h]
  _DWORD *v330; // [sp+F0h] [bp-244h]
  _QWORD *v331; // [sp+F4h] [bp-240h]
  _QWORD *v332; // [sp+F8h] [bp-23Ch]
  int v333; // [sp+F8h] [bp-23Ch]
  _QWORD *v334; // [sp+F8h] [bp-23Ch]
  _DWORD *v335; // [sp+F8h] [bp-23Ch]
  int v336; // [sp+FCh] [bp-238h]
  int v337; // [sp+FCh] [bp-238h]
  _QWORD *v338; // [sp+FCh] [bp-238h]
  int v339; // [sp+FCh] [bp-238h]
  _QWORD *v340; // [sp+FCh] [bp-238h]
  _QWORD *v341; // [sp+FCh] [bp-238h]
  unsigned int v342; // [sp+100h] [bp-234h]
  _QWORD *v343; // [sp+100h] [bp-234h]
  int v344; // [sp+100h] [bp-234h]
  _QWORD *v345; // [sp+100h] [bp-234h]
  int v346; // [sp+104h] [bp-230h]
  _DWORD *v347; // [sp+104h] [bp-230h]
  int v348; // [sp+104h] [bp-230h]
  _QWORD *v349; // [sp+104h] [bp-230h]
  _QWORD *v350; // [sp+104h] [bp-230h]
  int v351; // [sp+108h] [bp-22Ch]
  int v352; // [sp+108h] [bp-22Ch]
  _DWORD *v353; // [sp+108h] [bp-22Ch]
  _DWORD *v354; // [sp+108h] [bp-22Ch]
  _QWORD *v355; // [sp+10Ch] [bp-228h]
  _QWORD *v356; // [sp+10Ch] [bp-228h]
  int v357; // [sp+110h] [bp-224h]
  int v358; // [sp+110h] [bp-224h]
  _QWORD *v359; // [sp+110h] [bp-224h]
  int v360; // [sp+114h] [bp-220h]
  _QWORD *v361; // [sp+114h] [bp-220h]
  _DWORD *v362; // [sp+114h] [bp-220h]
  int v363; // [sp+118h] [bp-21Ch]
  _QWORD *v364; // [sp+118h] [bp-21Ch]
  _QWORD *v365; // [sp+11Ch] [bp-218h]
  _QWORD *v366; // [sp+11Ch] [bp-218h]
  _DWORD *v367; // [sp+11Ch] [bp-218h]
  _QWORD *v368; // [sp+120h] [bp-214h]
  unsigned int v369; // [sp+120h] [bp-214h]
  _QWORD *v370; // [sp+120h] [bp-214h]
  _QWORD *v371; // [sp+120h] [bp-214h]
  int v372; // [sp+124h] [bp-210h]
  _DWORD *v373; // [sp+124h] [bp-210h]
  _QWORD *v374; // [sp+128h] [bp-20Ch]
  _QWORD *v375; // [sp+128h] [bp-20Ch]
  int v376; // [sp+12Ch] [bp-208h]
  int v377; // [sp+12Ch] [bp-208h]
  _DWORD *v378; // [sp+12Ch] [bp-208h]
  _QWORD *v379; // [sp+12Ch] [bp-208h]
  _QWORD *v380; // [sp+130h] [bp-204h]
  _DWORD *v381; // [sp+130h] [bp-204h]
  _QWORD *v382; // [sp+134h] [bp-200h]
  _DWORD *v383; // [sp+134h] [bp-200h]
  int v384; // [sp+138h] [bp-1FCh]
  int v385; // [sp+138h] [bp-1FCh]
  _QWORD *v386; // [sp+138h] [bp-1FCh]
  _QWORD *v387; // [sp+138h] [bp-1FCh]
  int v388; // [sp+13Ch] [bp-1F8h]
  _DWORD *v389; // [sp+13Ch] [bp-1F8h]
  int v390; // [sp+13Ch] [bp-1F8h]
  _QWORD *v391; // [sp+13Ch] [bp-1F8h]
  int v392; // [sp+140h] [bp-1F4h]
  _QWORD *v393; // [sp+140h] [bp-1F4h]
  _DWORD *v394; // [sp+140h] [bp-1F4h]
  int v395; // [sp+144h] [bp-1F0h]
  _DWORD *v396; // [sp+144h] [bp-1F0h]
  _QWORD *v397; // [sp+144h] [bp-1F0h]
  __int64 v398; // [sp+148h] [bp-1ECh]
  int v399; // [sp+150h] [bp-1E4h]
  _QWORD *v400; // [sp+150h] [bp-1E4h]
  int v401; // [sp+150h] [bp-1E4h]
  int v402; // [sp+150h] [bp-1E4h]
  _QWORD *v403; // [sp+150h] [bp-1E4h]
  _QWORD *v404; // [sp+154h] [bp-1E0h]
  _QWORD *v405; // [sp+154h] [bp-1E0h]
  int v406; // [sp+158h] [bp-1DCh]
  int v407; // [sp+158h] [bp-1DCh]
  int v408; // [sp+15Ch] [bp-1D8h]
  int v409; // [sp+15Ch] [bp-1D8h]
  int v410; // [sp+15Ch] [bp-1D8h]
  _QWORD *v411; // [sp+15Ch] [bp-1D8h]
  int v412; // [sp+160h] [bp-1D4h]
  int v413; // [sp+160h] [bp-1D4h]
  int v414; // [sp+160h] [bp-1D4h]
  _QWORD *v415; // [sp+160h] [bp-1D4h]
  int v416; // [sp+164h] [bp-1D0h]
  int v417; // [sp+164h] [bp-1D0h]
  int v418; // [sp+164h] [bp-1D0h]
  _QWORD *v419; // [sp+164h] [bp-1D0h]
  int v420; // [sp+168h] [bp-1CCh]
  int v421; // [sp+168h] [bp-1CCh]
  int v422; // [sp+168h] [bp-1CCh]
  _DWORD *v423; // [sp+168h] [bp-1CCh]
  int v424; // [sp+16Ch] [bp-1C8h]
  _QWORD *v425; // [sp+16Ch] [bp-1C8h]
  int v426; // [sp+170h] [bp-1C4h]
  int v427; // [sp+170h] [bp-1C4h]
  int v428; // [sp+174h] [bp-1C0h]
  int v429; // [sp+174h] [bp-1C0h]
  int v430; // [sp+178h] [bp-1BCh]
  int v431; // [sp+178h] [bp-1BCh]
  int v432; // [sp+17Ch] [bp-1B8h]
  int v433; // [sp+184h] [bp-1B0h]
  int v434; // [sp+18Ch] [bp-1A8h]
  int v437; // [sp+1A4h] [bp-190h]
  _QWORD dest[16]; // [sp+1A8h] [bp-18Ch] BYREF
  _QWORD v439[16]; // [sp+228h] [bp-10Ch] BYREF
  _DWORD v440[35]; // [sp+2A8h] [bp-8Ch] BYREF

  v5 = *(_DWORD *)(a1 + 128);
  v437 = a1 + 272;
  v6 = *(_DWORD *)(a1 + 264);
  v7 = *(_DWORD *)(a1 + 268);
  LOBYTE(v440[0]) = (128 >> a3) | a2 & -(128 >> a3);
  if ( v5 > 0x77 )
  {
    v8 = 256 - v5;
    v132 = __PAIR64__(v7, v6) + 2;
    v10 = (__PAIR64__(v7, v6) + 2) >> 32;
    v9 = v132;
  }
  else
  {
    v8 = 128 - v5;
    v11 = __PAIR64__(v7, v6) + 1;
    v10 = (__PAIR64__(v7, v6) + 1) >> 32;
    v9 = v11;
  }
  memset((char *)v440 + 1, 0, v8 - 9);
  v12 = (char *)&v440[-2] + v8;
  *(_DWORD *)v12 = HIBYTE(v10)
                 | (unsigned __int16)(BYTE2(v10) << 8)
                 | (BYTE1(v10) << 16) & 0xFFFFFF
                 | ((unsigned __int8)v10 << 24);
  v12[7] = v9;
  v12[4] = HIBYTE(v9);
  v12[6] = BYTE1(v9);
  v12[5] = BYTE2(v9);
  sph_groestl384_0((__int64 *)a1, (char *)v440, v8);
  memcpy(dest, (const void *)(a1 + 136), sizeof(dest));
  memcpy(v439, dest, sizeof(v439));
  v240 = v439[8];
  v182 = HIDWORD(v439[1]);
  v195 = v439[2];
  v219 = v439[0];
  v214 = v439[9];
  v152 = HIDWORD(v439[2]);
  v134 = v439[4];
  v143 = v439[5];
  v171 = v439[6];
  v133 = 0;
  v237 = HIDWORD(v439[9]);
  v156 = HIDWORD(v439[3]);
  v13 = v439[3];
  v211 = v439[10];
  v14 = HIDWORD(v439[4]);
  v15 = HIDWORD(v439[7]);
  v16 = HIDWORD(v439[6]);
  v17 = v439[7];
  v216 = HIDWORD(v439[10]);
  v165 = HIDWORD(v439[5]);
  v247 = HIDWORD(v439[11]);
  v232 = v439[11];
  v251 = HIDWORD(v439[12]);
  v207 = v439[12];
  v254 = HIDWORD(v439[13]);
  v229 = v439[13];
  v259 = v439[14];
  v265 = v439[15];
  v267 = v439[1];
  do
  {
    v142 = v219 ^ v133;
    v148 = v182 ^ ((unsigned __int64)(v133 + 16) >> 32);
    v220 = v152 ^ ((unsigned __int64)(v133 + 32) >> 32);
    v153 = (v133 + 48) ^ v13;
    v157 = v156 ^ ((unsigned __int64)(v133 + 48) >> 32);
    v18 = v134 ^ (v133 + 64);
    v162 = ((unsigned __int64)(v133 + 64) >> 32) ^ v14;
    v226 = v143 ^ (v133 + 80);
    v166 = v165 ^ ((unsigned __int64)(v133 + 80) >> 32);
    v172 = v171 ^ (v133 + 96);
    v19 = v16 ^ ((unsigned __int64)(v133 + 96) >> 32);
    v176 = (v133 + 112) ^ v17;
    v135 = v15 ^ ((unsigned __int64)(v133 + 112) >> 32);
    v179 = v240 ^ (v133 + 128);
    v20 = HIDWORD(v240) ^ ((unsigned __int64)(v133 + 128) >> 32);
    v183 = v214 ^ (v133 + 144);
    v191 = v211 ^ (v133 + 160);
    v200 = v232 ^ (v133 + 176);
    v203 = v207 ^ (v133 + 192);
    v233 = v229 ^ (v133 + 208);
    v241 = v259 ^ (v133 + 224);
    v205 = HIDWORD(v259) ^ ((unsigned __int64)(v133 + 224) >> 32);
    v245 = v265 ^ (v133 + 240);
    v144 = v267 ^ (v133 + 16);
    v21 = v195 ^ (v133 + 32);
    v186 = v237 ^ ((unsigned __int64)(v133 + 144) >> 32);
    v230 = v251 ^ ((unsigned __int64)(v133 + 192) >> 32);
    v238 = v254 ^ ((unsigned __int64)(v133 + 208) >> 32);
    v22 = v216;
    v217 = v18;
    v342 = v247 ^ ((unsigned __int64)(v133 + 176) >> 32);
    v196 = v22 ^ ((unsigned __int64)(v133 + 160) >> 32);
    v269 = HIBYTE(v19);
    v271 = HIBYTE(v135);
    v260 = (HIDWORD(v265) ^ ((unsigned __int64)(v133 + 240) >> 32)) >> 24;
    v274 = HIBYTE(v20);
    v276 = &qword_17B6F8[HIBYTE(v18)];
    v23 = &dword_179F00[2 * HIBYTE(v342)];
    v268 = *v23;
    v294 = &dword_179F00[2 * HIBYTE(v205)];
    v336 = BYTE2(v19);
    v357 = BYTE1(v19);
    v360 = BYTE2(v135);
    v283 = v23[1];
    v24 = &dword_17AF08[2 * BYTE2(v21)];
    v25 = &qword_17BF08[(unsigned __int8)v166];
    v26 = &qword_17BF08[(unsigned __int8)v162];
    v27 = &qword_17A708[BYTE1(v144)];
    v28 = &qword_17A708[BYTE1(v21)];
    v29 = &dword_17AF08[2 * BYTE2(v153)];
    v289 = &qword_17BF08[(unsigned __int8)v19];
    v404 = &qword_17B6F8[HIBYTE(v21)];
    v324 = &qword_17B6F8[HIBYTE(v183)];
    v212 = BYTE1(v135);
    v305 = &qword_17BF08[(unsigned __int8)v135];
    v136 = BYTE2(v20);
    v314 = &qword_17BF08[(unsigned __int8)v20];
    v328 = &qword_17B6F8[HIBYTE(v191)];
    v30 = dword_179700[2 * (unsigned __int8)v142 + 1]
        ^ ((unsigned __int64)(v133 + 1) >> 32)
        ^ v283
        ^ *((_DWORD *)v27 - 1)
        ^ *(v24 - 1);
    v31 = dword_179700[2 * (unsigned __int8)v142] ^ (v133 + 1) ^ v268 ^ *((_DWORD *)v27 - 2) ^ *(v24 - 2);
    v372 = (unsigned __int8)v153;
    v332 = &qword_17B6F8[HIBYTE(v200)];
    v32 = &qword_17B6F8[HIBYTE(v153)];
    v284 = &qword_17A708[BYTE1(v153)];
    v33 = *((_DWORD *)&unk_17CF00 + 2 * v336);
    v34 = (char *)&unk_17CF00 + 8 * v336;
    v337 = *((_DWORD *)&unk_17C700 + 2 * v357);
    v248 = v30
         ^ *((_DWORD *)v32 + 3)
         ^ *((_DWORD *)v26 - 1)
         ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v166) + 1)
         ^ *((_DWORD *)v34 + 1);
    v154 = v31 ^ *((_DWORD *)v32 + 2) ^ *((_DWORD *)v26 - 2) ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v166)) ^ v33;
    v35 = *((_QWORD *)v29 - 1);
    v36 = dword_179700[2 * (unsigned __int8)v144 + 1]
        ^ dword_179F00[2 * HIBYTE(v230) + 1]
        ^ ((unsigned __int64)(v133 + 17) >> 32)
        ^ *((_DWORD *)v28 - 1)
        ^ HIDWORD(v35)
        ^ *((_DWORD *)v276 + 3)
        ^ *((_DWORD *)v25 - 1);
    v351 = *((_DWORD *)&unk_17C700 + 2 * v212 + 1);
    HIDWORD(v35) = *((_DWORD *)v289 - 1);
    v280 = *((_DWORD *)&unk_17C700 + 2 * v212);
    v376 = *((_DWORD *)v305 - 2);
    v384 = *((_DWORD *)v305 - 1);
    v388 = *((_DWORD *)&unk_17C700 + 2 * BYTE1(v20) + 1);
    v37 = v36 ^ *((_DWORD *)&unk_17C700 + 2 * v357 + 1);
    v395 = *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v186) + 1);
    v358 = *((_DWORD *)&unk_17C700 + 2 * BYTE1(v20));
    v215 = v37 ^ *((_DWORD *)&unk_17CF00 + 2 * v360 + 1);
    v392 = *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v186));
    v213 = dword_179700[2 * (unsigned __int8)v144]
         ^ dword_179F00[2 * HIBYTE(v230)]
         ^ (v133 + 17)
         ^ *((_DWORD *)v28 - 2)
         ^ v35
         ^ *((_DWORD *)v276 + 2)
         ^ *((_DWORD *)v25 - 2)
         ^ v337
         ^ *((_DWORD *)&unk_17CF00 + 2 * v360);
    v38 = &qword_17B6F8[HIBYTE(v226)];
    v39 = *((_DWORD *)v38 + 2);
    v40 = *((_DWORD *)v38 + 3);
    v41 = &qword_17B6F8[HIBYTE(v172)];
    v306 = *((_DWORD *)v41 + 2);
    v338 = &qword_17B6F8[HIBYTE(v203)];
    v346 = *((_DWORD *)v41 + 3);
    v42 = v284;
    v285 = BYTE2(v166);
    v252 = HIBYTE(v166);
    v43 = dword_179700[2 * (unsigned __int8)v21 + 1]
        ^ dword_179F00[2 * HIBYTE(v238) + 1]
        ^ ((unsigned __int64)(v133 + 33) >> 32)
        ^ *((_DWORD *)v42 - 1);
    LODWORD(v35) = dword_179F00[2 * HIBYTE(v238)]
                 ^ dword_179700[2 * (unsigned __int8)v21]
                 ^ (v133 + 33)
                 ^ *((_DWORD *)v42 - 2);
    v355 = &qword_17B6F8[HIBYTE(v233)];
    v365 = &qword_17B6F8[HIBYTE(v241)];
    v44 = &dword_17AF08[2 * BYTE2(v217)];
    v380 = &qword_17B6F8[HIBYTE(v245)];
    v382 = &qword_17B6F8[BYTE3(v142)];
    v45 = (unsigned __int8)v217;
    v46 = &qword_17A708[BYTE1(v217)];
    v47 = &dword_179700[2 * (unsigned __int8)v217];
    v167 = *(v44 - 2) ^ v35 ^ v39 ^ *((_DWORD *)v289 - 2);
    v290 = &dword_17AF08[2 * BYTE2(v172)];
    v218 = *(v44 - 1) ^ v43 ^ v40 ^ HIDWORD(v35) ^ v351 ^ *((_DWORD *)&unk_17CF00 + 2 * v136 + 1);
    v48 = &dword_17AF08[2 * BYTE2(v226)];
    v168 = v167 ^ v280 ^ *((_DWORD *)&unk_17CF00 + 2 * v136);
    v49 = dword_179700[2 * v372] ^ *v294 ^ (v133 + 49) ^ *((_DWORD *)v46 - 2) ^ *(v48 - 2) ^ v306;
    v50 = *((_DWORD *)v46 - 1)
        ^ dword_179700[2 * v372 + 1]
        ^ v294[1]
        ^ ((unsigned __int64)(v133 + 49) >> 32)
        ^ *(v48 - 1)
        ^ v346;
    v363 = *((_DWORD *)&unk_17C700 + 2 * BYTE1(v186) + 1);
    v352 = *((_DWORD *)&unk_17C700 + 2 * BYTE1(v186));
    v51 = v47[1] ^ dword_179F00[2 * v260 + 1];
    v398 = *(_QWORD *)&dword_179F00[2 * HIBYTE(HIDWORD(v142))]
         ^ (v133 + 81)
         ^ *(_QWORD *)&dword_179700[2 * (unsigned __int8)v226];
    HIDWORD(v35) = &qword_17A708[BYTE1(v172)];
    LODWORD(v35) = &dword_17AF08[2 * BYTE2(v176)];
    v52 = &qword_17BF08[(unsigned __int8)v186];
    v277 = HIBYTE(v186);
    v187 = &dword_179700[2 * (unsigned __int8)v172];
    v347 = &dword_179F00[2 * v252];
    v53 = dword_179700[2 * v45] ^ dword_179F00[2 * v260] ^ (v133 + 65);
    v399 = *((_DWORD *)&unk_17C700 + 2 * BYTE1(v196));
    v54 = v50 ^ v384;
    v385 = *((_DWORD *)&unk_17C700 + 2 * BYTE1(v196) + 1);
    v406 = (unsigned __int8)v176;
    v255 = &qword_17A708[BYTE1(v176)];
    v261 = &dword_17AF08[2 * BYTE2(v179)];
    v281 = HIBYTE(v196);
    v55 = BYTE1(v342);
    v263 = &qword_17BF08[(unsigned __int8)v196];
    v307 = &qword_17BF08[(unsigned __int8)v342];
    v56 = &qword_17A708[BYTE1(v226)];
    v227 = v54 ^ v388 ^ v395;
    v173 = v49 ^ v376 ^ v358 ^ v392;
    v377 = BYTE2(v230);
    v57 = &qword_17B6F8[HIBYTE(v176)];
    v58 = v51 ^ ((unsigned __int64)(v133 + 65) >> 32) ^ *((_DWORD *)v56 - 1) ^ *(v290 - 1) ^ *((_DWORD *)v57 + 3);
    v59 = v53 ^ *((_DWORD *)v56 - 2) ^ *(v290 - 2) ^ *((_DWORD *)v57 + 2);
    v416 = (unsigned __int8)v179;
    v291 = &dword_17AF08[2 * BYTE2(v183)];
    v287 = &qword_17A708[BYTE1(v179)];
    v60 = *((_DWORD *)v314 - 1);
    v61 = *((_DWORD *)v314 - 2);
    v408 = BYTE1(v230);
    v315 = &qword_17BF08[(unsigned __int8)v230];
    v62 = *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v342));
    v63 = v58 ^ v60 ^ v363;
    v64 = *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v342) + 1);
    v412 = BYTE2(v238);
    v426 = (unsigned __int8)v183;
    v184 = &qword_17A708[BYTE1(v183)];
    v312 = &dword_17AF08[2 * BYTE2(v191)];
    v420 = BYTE1(v238);
    v343 = &qword_17BF08[(unsigned __int8)v238];
    v65 = *(_DWORD *)(HIDWORD(v35) - 4);
    v177 = v63 ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v196) + 1);
    v231 = v59 ^ v61 ^ v352 ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v196));
    v66 = v398 ^ *(_DWORD *)(HIDWORD(v35) - 8);
    HIDWORD(v35) = &qword_17B6F8[HIBYTE(v179)];
    v424 = BYTE2(v205);
    v197 = (unsigned __int8)v191;
    v321 = &qword_17A708[BYTE1(v191)];
    v67 = *(_DWORD *)(v35 - 4)
        ^ v65
        ^ HIDWORD(v398)
        ^ *(_DWORD *)(HIDWORD(v35) + 12)
        ^ *((_DWORD *)v52 - 1)
        ^ v385
        ^ v64;
    v68 = v66 ^ *(_DWORD *)(v35 - 8) ^ *(_DWORD *)(HIDWORD(v35) + 8) ^ *((_DWORD *)v52 - 2) ^ v399 ^ v62;
    v69 = dword_179F00[2 * HIBYTE(v220)];
    LODWORD(v35) = dword_179F00[2 * HIBYTE(v220) + 1];
    v295 = &dword_17AF08[2 * BYTE2(v200)];
    v70 = *((_DWORD *)&unk_17C700 + 2 * v55);
    v71 = (unsigned __int8)v205;
    v428 = BYTE1(v205);
    v180 = v67;
    v206 = v68;
    v359 = &qword_17BF08[v71];
    v430 = (unsigned __int8)((HIDWORD(v265) ^ ((unsigned __int64)(v133 + 240) >> 32)) >> 16);
    HIDWORD(v35) = *((_DWORD *)&unk_17C700 + 2 * v55 + 1);
    v192 = BYTE6(v142);
    v239 = (unsigned __int8)v200;
    v300 = &qword_17A708[BYTE1(v200)];
    v208 = BYTE5(v142);
    v353 = &dword_17AF08[2 * BYTE2(v203)];
    v201 = (unsigned __int8)((unsigned __int16)(WORD2(v265) ^ ((unsigned __int64)(v133 + 240) >> 32)) >> 8);
    v368 = &qword_17BF08[(unsigned __int8)(BYTE4(v265) ^ ((unsigned __int64)(v133 + 240) >> 32))];
    v137 = &qword_17BF08[BYTE4(v142)];
    v72 = v187[1]
        ^ dword_179F00[2 * HIBYTE(v148) + 1]
        ^ ((unsigned __int64)(v133 + 97) >> 32)
        ^ *((_DWORD *)v255 - 1)
        ^ *(v261 - 1);
    LOWORD(v67) = v233;
    v73 = *((_DWORD *)v255 - 2) ^ dword_179F00[2 * HIBYTE(v148)] ^ *v187 ^ (v133 + 97) ^ *(v261 - 2);
    v256 = (unsigned __int8)v203;
    v364 = &qword_17A708[BYTE1(v203)];
    v74 = v324[1];
    v325 = &dword_17AF08[2 * BYTE2(v233)];
    v234 = BYTE2(v148);
    HIDWORD(v74) ^= v72 ^ *((_DWORD *)v263 - 1);
    LOWORD(v72) = v241;
    v262 = (unsigned __int8)v67;
    v374 = &qword_17A708[BYTE1(v67)];
    v75 = *((_DWORD *)&unk_17CF00 + 2 * v377 + 1);
    v76 = *((_DWORD *)&unk_17CF00 + 2 * v377);
    v378 = &dword_17AF08[2 * BYTE2(v241)];
    HIDWORD(v142) = v74 ^ v73 ^ *((_DWORD *)v263 - 2) ^ v70 ^ v76;
    v242 = BYTE1(v148);
    v393 = &qword_17BF08[(unsigned __int8)v148];
    v77 = HIDWORD(v74) ^ HIDWORD(v35) ^ v75;
    LOWORD(v75) = v220;
    v204 = v77;
    v221 = BYTE2(v220);
    v386 = &qword_17A708[BYTE1(v72)];
    v389 = &dword_17AF08[2 * BYTE2(v245)];
    HIDWORD(v398) = &qword_17BF08[(unsigned __int8)v75];
    v264 = BYTE2(v157);
    v400 = &qword_17A708[BYTE1(v142)];
    v396 = &dword_17AF08[2 * BYTE2(v142)];
    LODWORD(v398) = &qword_17A708[BYTE1(v245)];
    LODWORD(v142) = *((_DWORD *)v307 - 2)
                  ^ *((_DWORD *)v287 - 2)
                  ^ v69
                  ^ dword_179700[2 * v406]
                  ^ (v133 + 113)
                  ^ *(v291 - 2)
                  ^ *((_DWORD *)v328 + 2)
                  ^ *((_DWORD *)&unk_17C700 + 2 * v408)
                  ^ *((_DWORD *)&unk_17CF00 + 2 * v412);
    v149 = *((_DWORD *)v287 - 1)
         ^ v35
         ^ dword_179700[2 * v406 + 1]
         ^ ((unsigned __int64)(v133 + 113) >> 32)
         ^ *(v291 - 1)
         ^ *((_DWORD *)v328 + 3)
         ^ *((_DWORD *)v307 - 1)
         ^ *((_DWORD *)&unk_17C700 + 2 * v408 + 1)
         ^ *((_DWORD *)&unk_17CF00 + 2 * v412 + 1);
    HIDWORD(v74) = dword_179700[2 * v416 + 1]
                 ^ dword_179F00[2 * HIBYTE(v157) + 1]
                 ^ ((unsigned __int64)(v133 + 129) >> 32)
                 ^ *((_DWORD *)v184 - 1)
                 ^ *(v312 - 1)
                 ^ *((_DWORD *)v332 + 3);
    v185 = dword_179700[2 * v416]
         ^ dword_179F00[2 * HIBYTE(v157)]
         ^ (v133 + 129)
         ^ *((_DWORD *)v184 - 2)
         ^ *(v312 - 2)
         ^ *((_DWORD *)v332 + 2)
         ^ *((_DWORD *)v315 - 2)
         ^ *((_DWORD *)&unk_17C700 + 2 * v420)
         ^ *((_DWORD *)&unk_17CF00 + 2 * v424);
    v188 = HIDWORD(v74)
         ^ *((_DWORD *)v315 - 1)
         ^ *((_DWORD *)&unk_17C700 + 2 * v420 + 1)
         ^ *((_DWORD *)&unk_17CF00 + 2 * v424 + 1);
    v78 = *(v343 - 1);
    v79 = dword_179700[2 * v426 + 1]
        ^ dword_179F00[2 * HIBYTE(v162) + 1]
        ^ ((unsigned __int64)(v133 + 145) >> 32)
        ^ *((_DWORD *)v321 - 1)
        ^ *(v295 - 1)
        ^ *((_DWORD *)v338 + 3)
        ^ HIDWORD(v78)
        ^ *((_DWORD *)&unk_17C700 + 2 * v428 + 1);
    v253 = *(v295 - 2)
         ^ *((_DWORD *)v321 - 2)
         ^ dword_179700[2 * v426]
         ^ dword_179F00[2 * HIBYTE(v162)]
         ^ (v133 + 145)
         ^ *((_DWORD *)v338 + 2)
         ^ v78
         ^ *((_DWORD *)&unk_17C700 + 2 * v428);
    v80 = *((_DWORD *)&unk_17CF00 + 2 * v192) ^ dword_179700[2 * v197];
    v322 = *((_DWORD *)&unk_17C700 + 2 * v201);
    HIDWORD(v78) = *((_DWORD *)&unk_17CF00 + 2 * v192 + 1)
                 ^ dword_179700[2 * v197 + 1]
                 ^ (__CFADD__((_DWORD)v133, 161) + HIDWORD(v133))
                 ^ v347[1];
    v198 = (char *)&unk_17CF00 + 8 * BYTE2(v157);
    v333 = *((_DWORD *)&unk_17CF00 + 2 * v234);
    v193 = v79 ^ *((_DWORD *)&unk_17CF00 + 2 * v430 + 1);
    v339 = *((_DWORD *)&unk_17CF00 + 2 * v234 + 1);
    v81 = HIBYTE(v144);
    v145 = &dword_17AF08[2 * BYTE2(v144)];
    v235 = &qword_17B6F8[v81];
    v344 = *((_DWORD *)&unk_17C700 + 2 * v242 + 1);
    LODWORD(v35) = v242;
    v243 = v80 ^ (v133 + 161) ^ *v347 ^ *((_DWORD *)v300 - 2) ^ *(v353 - 2) ^ *((_DWORD *)v355 + 2);
    v348 = *((_DWORD *)&unk_17CF00 + 2 * v221 + 1);
    v82 = dword_179F00[2 * v271 + 1]
        ^ *((_DWORD *)v137 - 1)
        ^ dword_179700[2 * v256 + 1]
        ^ (__CFADD__((_DWORD)v133, 193) + HIDWORD(v133))
        ^ *((_DWORD *)v374 - 1);
    v316 = *((_DWORD *)&unk_17CF00 + 2 * v221);
    v83 = *((_DWORD *)v137 - 2) ^ dword_179700[2 * v256];
    v257 = HIDWORD(v78) ^ *((_DWORD *)v300 - 1) ^ *(v353 - 1) ^ *((_DWORD *)v355 + 3) ^ *((_DWORD *)v359 - 1);
    v222 = &qword_17BF08[(unsigned __int8)v157];
    v138 = BYTE1(v157);
    v158 = BYTE2(v162);
    HIDWORD(v78) = dword_179700[2 * (unsigned __int8)(v265 ^ (v133 - 16)) + 1]
                 ^ *((_DWORD *)v400 - 1)
                 ^ ((unsigned __int64)(v133 + 241) >> 32)
                 ^ dword_179F00[2 * v281 + 1]
                 ^ *(v145 - 1);
    LODWORD(v78) = *((_DWORD *)v400 - 2)
                 ^ dword_179700[2 * (unsigned __int8)(v265 ^ (v133 - 16))]
                 ^ (v133 + 241)
                 ^ dword_179F00[2 * v281]
                 ^ *(v145 - 2)
                 ^ *((_DWORD *)v404 + 2)
                 ^ *((_DWORD *)v222 - 2)
                 ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v162));
    v146 = *(v396 - 2)
         ^ dword_179700[2 * (unsigned __int8)v72]
         ^ (v133 + 225)
         ^ dword_179F00[2 * v277]
         ^ *(_DWORD *)(v398 - 8)
         ^ *((_DWORD *)v235 + 2)
         ^ *(_DWORD *)(HIDWORD(v398) - 8)
         ^ *((_DWORD *)&unk_17C700 + 2 * v138);
    v84 = dword_179700[2 * (unsigned __int8)v72 + 1]
        ^ *(v396 - 1)
        ^ ((unsigned __int64)(v133 + 225) >> 32)
        ^ dword_179F00[2 * v277 + 1]
        ^ *(_DWORD *)(v398 - 4)
        ^ *((_DWORD *)v235 + 3)
        ^ *(_DWORD *)(HIDWORD(v398) - 4)
        ^ *((_DWORD *)&unk_17C700 + 2 * v138 + 1);
    HIDWORD(v78) ^= *((_DWORD *)v404 + 3) ^ *((_DWORD *)v222 - 1) ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v162) + 1);
    v163 = v257 ^ *((_DWORD *)&unk_17C700 + 2 * v201 + 1);
    v139 = *((_DWORD *)v382 + 3)
         ^ dword_179700[2 * v262 + 1]
         ^ ((unsigned __int64)(v133 + 209) >> 32)
         ^ dword_179F00[2 * v274 + 1]
         ^ *((_DWORD *)v386 - 1)
         ^ *(v389 - 1)
         ^ *((_DWORD *)v393 - 1)
         ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v75) + 1)
         ^ *((_DWORD *)v198 + 1);
    v199 = dword_179700[2 * v239 + 1]
         ^ *((_DWORD *)&unk_17C700 + 2 * v208 + 1)
         ^ ((unsigned __int64)(v133 + 177) >> 32)
         ^ dword_179F00[2 * v269 + 1]
         ^ *((_DWORD *)v364 - 1)
         ^ *(v325 - 1)
         ^ *((_DWORD *)v365 + 3)
         ^ *((_DWORD *)v368 - 1)
         ^ v339;
    v202 = v82 ^ *(v378 - 1) ^ *((_DWORD *)v380 + 3) ^ v344 ^ v348;
    v85 = v146 ^ *((_DWORD *)&unk_17CF00 + 2 * v158);
    v223 = *((_DWORD *)v374 - 2)
         ^ dword_179F00[2 * v271]
         ^ v83
         ^ (v133 + 193)
         ^ *(v378 - 2)
         ^ *((_DWORD *)v380 + 2)
         ^ *((_DWORD *)&unk_17C700 + 2 * v35)
         ^ v316;
    v86 = v84 ^ *((_DWORD *)&unk_17CF00 + 2 * v158 + 1);
    v209 = *((_DWORD *)&unk_17C700 + 2 * v208)
         ^ dword_179700[2 * v239]
         ^ (v133 + 177)
         ^ dword_179F00[2 * v269]
         ^ *((_DWORD *)v364 - 2)
         ^ *(v325 - 2)
         ^ *((_DWORD *)v365 + 2)
         ^ *((_DWORD *)v368 - 2)
         ^ v333;
    HIDWORD(v78) ^= *((_DWORD *)&unk_17CF00 + 2 * v285 + 1);
    v147 = v253 ^ *((_DWORD *)&unk_17CF00 + 2 * v430);
    v159 = v243 ^ *((_DWORD *)v359 - 2) ^ v322;
    v236 = *((_DWORD *)v382 + 2)
         ^ dword_179700[2 * v262]
         ^ (v133 + 209)
         ^ dword_179F00[2 * v274]
         ^ *((_DWORD *)v386 - 2)
         ^ *(v389 - 2)
         ^ *((_DWORD *)v393 - 2)
         ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v75))
         ^ *((_DWORD *)&unk_17CF00 + 2 * v264);
    v369 = v78 ^ *((_DWORD *)&unk_17CF00 + 2 * v285);
    v278 = HIBYTE(HIDWORD(v78));
    v246 = HIDWORD(v78);
    v275 = HIBYTE(v86);
    v282 = HIBYTE(v248);
    v266 = HIBYTE(v193);
    v244 = v86;
    v288 = HIBYTE(v218);
    v286 = HIBYTE(v215);
    v272 = HIBYTE(v139);
    v296 = &qword_17B6F8[HIBYTE(v209)];
    v334 = &qword_17B6F8[HIBYTE(v369)];
    v340 = &qword_17B6F8[HIBYTE(v154)];
    v308 = &qword_17B6F8[HIBYTE(v223)];
    v326 = &qword_17B6F8[HIBYTE(v85)];
    v317 = &qword_17B6F8[HIBYTE(v236)];
    v361 = &qword_17B6F8[HIBYTE(v168)];
    v366 = &qword_17B6F8[HIBYTE(v173)];
    v356 = &qword_17B6F8[HIBYTE(v213)];
    v375 = &qword_17B6F8[HIBYTE(v231)];
    v394 = &dword_179F00[2 * HIBYTE(HIDWORD(v78))];
    v397 = &qword_17B6F8[BYTE3(v142)];
    v379 = &qword_17B6F8[HIBYTE(v206)];
    v387 = &qword_17B6F8[HIBYTE(HIDWORD(v142))];
    v381 = &dword_179F00[2 * HIBYTE(v139)];
    v383 = &dword_179F00[2 * HIBYTE(v86)];
    v405 = &qword_17B6F8[HIBYTE(v185)];
    v87 = &qword_17BF08[(unsigned __int8)v202];
    HIDWORD(v78) = &dword_17AF08[2 * BYTE2(v159)];
    HIDWORD(v398) = &dword_179F00[2 * HIBYTE(v248)];
    v88 = &qword_17A708[BYTE1(v147)];
    v133 += 2;
    v89 = &dword_17AF08[2 * BYTE2(v209)];
    v301 = &qword_17BF08[(unsigned __int8)v139];
    v90 = *((_DWORD *)v88 - 1)
        ^ dword_179700[2 * (unsigned __int8)v185 + 1]
        ^ dword_179F00[2 * HIBYTE(v227) + 1]
        ^ *(_DWORD *)(HIDWORD(v78) - 4);
    v91 = dword_179700[2 * (unsigned __int8)v185]
        ^ dword_179F00[2 * HIBYTE(v227)]
        ^ *((_DWORD *)v88 - 2)
        ^ *(_DWORD *)(HIDWORD(v78) - 8);
    v250 = BYTE2(v139);
    HIDWORD(v35) = *((_DWORD *)&unk_17C700 + 2 * BYTE1(v139));
    v92 = *((_DWORD *)&unk_17C700 + 2 * BYTE1(v139) + 1);
    v401 = BYTE1(v244);
    v319 = &qword_17BF08[(unsigned __int8)v244];
    v407 = BYTE2(v246);
    v409 = BYTE2(v248);
    v140 = BYTE1(v248);
    v93 = v91 ^ *((_DWORD *)v296 + 2);
    v329 = &qword_17BF08[(unsigned __int8)v248];
    v417 = (unsigned __int8)v209;
    v94 = v90 ^ *((_DWORD *)v296 + 3) ^ *((_DWORD *)v87 - 1) ^ v92;
    v95 = &qword_17A708[BYTE1(v223)];
    v297 = &qword_17A708[BYTE1(v209)];
    LODWORD(v35) = *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v244) + 1);
    LODWORD(v240) = v93 ^ *((_DWORD *)v87 - 2) ^ HIDWORD(v35) ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v244));
    v413 = BYTE1(v246);
    v249 = &qword_17BF08[(unsigned __int8)v246];
    HIDWORD(v240) = v94 ^ v35;
    v421 = BYTE2(v215);
    v96 = qword_17A708[BYTE1(v159) - 1];
    v390 = (unsigned __int8)v159;
    v425 = &qword_17B6F8[HIBYTE(v159)];
    v160 = (unsigned __int8)v223;
    v224 = &dword_17AF08[2 * BYTE2(v223)];
    v427 = (unsigned __int8)v236;
    v292 = &qword_17A708[BYTE1(v236)];
    v97 = *((_DWORD *)v301 - 1);
    v98 = *((_DWORD *)v301 - 2);
    v302 = &dword_17AF08[2 * BYTE2(v85)];
    v210 = BYTE1(v215);
    HIDWORD(v96) ^= dword_179700[2 * (unsigned __int8)v147 + 1]
                  ^ dword_179F00[2 * HIBYTE(v177) + 1]
                  ^ *(v89 - 1)
                  ^ *((_DWORD *)v308 + 3)
                  ^ v97;
    v349 = &qword_17BF08[(unsigned __int8)v215];
    v99 = dword_179700[2 * (unsigned __int8)v147]
        ^ dword_179F00[2 * HIBYTE(v177)]
        ^ v96
        ^ *(v89 - 2)
        ^ *((_DWORD *)v308 + 2)
        ^ v98
        ^ *((_DWORD *)&unk_17C700 + 2 * v401);
    LODWORD(v398) = BYTE2(v218);
    v429 = (unsigned __int8)v85;
    v309 = &qword_17A708[BYTE1(v85)];
    v214 = v99 ^ *((_DWORD *)&unk_17CF00 + 2 * v407);
    v100 = *((_DWORD *)&unk_17CF00 + 2 * v409);
    v237 = HIDWORD(v96) ^ *((_DWORD *)&unk_17C700 + 2 * v401 + 1) ^ *((_DWORD *)&unk_17CF00 + 2 * v407 + 1);
    v101 = *((_DWORD *)&unk_17CF00 + 2 * v409 + 1);
    LODWORD(v35) = *((_DWORD *)v95 - 1);
    HIDWORD(v96) = dword_179700[2 * v417]
                 ^ *((_DWORD *)&unk_17C700 + 2 * v140)
                 ^ dword_179F00[2 * HIBYTE(v204)]
                 ^ *((_DWORD *)v95 - 2);
    v258 = &dword_17AF08[2 * BYTE2(v369)];
    v102 = BYTE1(v218);
    LODWORD(v96) = *((_DWORD *)&unk_17C700 + 2 * v140 + 1)
                 ^ dword_179700[2 * v417 + 1]
                 ^ dword_179F00[2 * HIBYTE(v204) + 1]
                 ^ v35
                 ^ dword_17AF08[2 * BYTE2(v236) - 1];
    LOWORD(v35) = v227;
    v323 = &qword_17BF08[(unsigned __int8)v218];
    v103 = *((_DWORD *)v326 + 2);
    v402 = BYTE2(v227);
    v228 = &dword_17AF08[2 * BYTE2(v154)];
    v418 = (unsigned __int8)v369;
    LODWORD(v96) = v96 ^ *((_DWORD *)v326 + 3) ^ *((_DWORD *)v249 - 1);
    v313 = &qword_17A708[BYTE1(v369)];
    v327 = &qword_17BF08[(unsigned __int8)v35];
    v232 = HIDWORD(v96)
         ^ dword_17AF08[2 * BYTE2(v236) - 2]
         ^ v103
         ^ *((_DWORD *)v249 - 2)
         ^ *((_DWORD *)&unk_17CF00 + 2 * v421);
    v410 = BYTE2(v177);
    v247 = v96 ^ *((_DWORD *)&unk_17CF00 + 2 * v421 + 1);
    v104 = dword_179F00[2 * HIBYTE(v180) + 1] ^ v101 ^ dword_179700[2 * v390 + 1] ^ *((_DWORD *)v297 - 1);
    v105 = *((_DWORD *)v297 - 2) ^ v100 ^ dword_179700[2 * v390] ^ dword_179F00[2 * HIBYTE(v180)];
    HIDWORD(v96) = *(v224 - 1);
    v106 = *(v224 - 2);
    v298 = &dword_17AF08[2 * BYTE2(v213)];
    v432 = (unsigned __int8)v154;
    v225 = &qword_17A708[BYTE1(v154)];
    LODWORD(v96) = *((_DWORD *)&unk_17C700 + 2 * v413);
    HIDWORD(v35) = *((_DWORD *)v317 + 2);
    v107 = *((_DWORD *)&unk_17C700 + 2 * v413 + 1);
    v422 = BYTE1(v177);
    v108 = v104 ^ HIDWORD(v96) ^ *((_DWORD *)v317 + 3);
    v414 = BYTE2(v180);
    HIDWORD(v96) = *((_DWORD *)v319 - 2);
    v370 = &qword_17BF08[(unsigned __int8)v177];
    v431 = BYTE1(v180);
    v216 = v108 ^ *((_DWORD *)v319 - 1) ^ v107;
    v320 = &qword_17BF08[(unsigned __int8)v180];
    v433 = (unsigned __int8)v213;
    v318 = &qword_17A708[BYTE1(v213)];
    v211 = v105 ^ v106 ^ HIDWORD(v35) ^ HIDWORD(v96) ^ v96;
    v109 = *((_DWORD *)&unk_17C700 + 2 * v210 + 1);
    v110 = *((_DWORD *)v329 - 2) ^ dword_179700[2 * v160] ^ dword_179F00[2 * HIBYTE(v149)] ^ *((_DWORD *)v292 - 2);
    v111 = *((_DWORD *)v329 - 1)
         ^ dword_179700[2 * v160 + 1]
         ^ dword_179F00[2 * HIBYTE(v149) + 1]
         ^ *((_DWORD *)v292 - 1);
    v293 = &dword_17AF08[2 * BYTE2(v168)];
    v112 = v110 ^ *(v302 - 2);
    v345 = &qword_17BF08[(unsigned __int8)v204];
    v113 = v111 ^ *(v302 - 1) ^ *((_DWORD *)v334 + 3);
    v155 = (unsigned __int8)v168;
    v303 = &qword_17A708[BYTE1(v168)];
    v330 = &dword_17AF08[2 * BYTE2(v173)];
    v207 = v112 ^ *((_DWORD *)v334 + 2) ^ *((_DWORD *)&unk_17C700 + 2 * v210) ^ *((_DWORD *)&unk_17CF00 + 2 * v398);
    v434 = BYTE2(v149);
    v251 = v113 ^ v109 ^ *((_DWORD *)&unk_17CF00 + 2 * v398 + 1);
    v169 = (unsigned __int8)v173;
    v331 = &qword_17A708[BYTE1(v173)];
    v114 = *((_DWORD *)v309 - 2);
    v115 = *((_DWORD *)v309 - 1);
    v310 = &dword_17AF08[2 * BYTE2(v231)];
    v116 = dword_179700[2 * v427 + 1] ^ *((_DWORD *)v340 + 3) ^ dword_179F00[2 * HIBYTE(v188) + 1] ^ v115;
    v117 = (unsigned __int8)v149;
    v150 = BYTE1(v149);
    v391 = &qword_17BF08[v117];
    v161 = BYTE2(v188);
    v181 = (unsigned __int8)v231;
    v118 = *(v258 - 2)
         ^ dword_179F00[2 * HIBYTE(v188)]
         ^ dword_179700[2 * v427]
         ^ *((_DWORD *)v340 + 2)
         ^ v114
         ^ *((_DWORD *)v349 - 2)
         ^ *((_DWORD *)&unk_17C700 + 2 * v102);
    v341 = &qword_17A708[BYTE1(v231)];
    v254 = v116
         ^ *(v258 - 1)
         ^ *((_DWORD *)v349 - 1)
         ^ *((_DWORD *)&unk_17C700 + 2 * v102 + 1)
         ^ *((_DWORD *)&unk_17CF00 + 2 * v402 + 1);
    v335 = &dword_17AF08[2 * BYTE2(v206)];
    LODWORD(v398) = &qword_17BF08[(unsigned __int8)v188];
    v229 = v118 ^ *((_DWORD *)&unk_17CF00 + 2 * v402);
    v178 = BYTE2(v193);
    v174 = BYTE1(v188);
    v350 = &qword_17A708[BYTE1(v206)];
    v119 = *((_DWORD *)v313 - 1)
         ^ dword_179F00[2 * HIBYTE(v193) + 1]
         ^ *(v228 - 1)
         ^ dword_179700[2 * v429 + 1]
         ^ *((_DWORD *)v356 + 3);
    v354 = &dword_17AF08[2 * BYTE6(v142)];
    v141 = BYTE1(v193);
    v189 = BYTE2(v163);
    v120 = &qword_17BF08[(unsigned __int8)v193];
    v194 = BYTE4(v142);
    v403 = &qword_17A708[BYTE5(v142)];
    LODWORD(v259) = dword_179700[2 * v429]
                  ^ *(v228 - 2)
                  ^ dword_179F00[2 * v266]
                  ^ *((_DWORD *)v313 - 2)
                  ^ *((_DWORD *)v356 + 2)
                  ^ *((_DWORD *)v323 - 2)
                  ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v35))
                  ^ *((_DWORD *)&unk_17CF00 + 2 * v410);
    HIDWORD(v259) = v119
                  ^ *((_DWORD *)v323 - 1)
                  ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v35) + 1)
                  ^ *((_DWORD *)&unk_17CF00 + 2 * v410 + 1);
    v121 = dword_179F00[2 * HIBYTE(v163)]
         ^ *((_DWORD *)v225 - 2)
         ^ dword_179700[2 * v418]
         ^ *((_DWORD *)&unk_17CF00 + 2 * v414)
         ^ *(v298 - 2)
         ^ *((_DWORD *)v361 + 2);
    v122 = *((_DWORD *)v361 + 3)
         ^ dword_179700[2 * v418 + 1]
         ^ *((_DWORD *)v225 - 1)
         ^ *((_DWORD *)&unk_17CF00 + 2 * v414 + 1)
         ^ dword_179F00[2 * HIBYTE(v163) + 1]
         ^ *(v298 - 1);
    v362 = &dword_17AF08[2 * BYTE2(v142)];
    HIDWORD(v142) = BYTE1(v163);
    v415 = &qword_17BF08[(unsigned __int8)v163];
    v164 = BYTE2(v199);
    HIDWORD(v265) = v122 ^ *((_DWORD *)v327 - 1) ^ *((_DWORD *)&unk_17C700 + 2 * v422 + 1);
    LODWORD(v265) = v121 ^ *((_DWORD *)v327 - 2) ^ *((_DWORD *)&unk_17C700 + 2 * v422);
    v411 = &qword_17A708[BYTE1(v142)];
    v219 = *((_QWORD *)&unk_17C700 + v431)
         ^ *(_QWORD *)&dword_179F00[2 * HIBYTE(v199)]
         ^ *(_QWORD *)&dword_179700[2 * v432]
         ^ *(v318 - 1)
         ^ *((_QWORD *)v293 - 1)
         ^ v366[1]
         ^ *(v370 - 1)
         ^ *((_QWORD *)&unk_17CF00 + BYTE2(v204));
    v123 = dword_179F00[2 * HIBYTE(v202)] ^ dword_179700[2 * v433] ^ *((_DWORD *)v320 - 2) ^ *((_DWORD *)v303 - 2);
    v124 = dword_179700[2 * v433 + 1]
         ^ *((_DWORD *)v320 - 1)
         ^ dword_179F00[2 * HIBYTE(v202) + 1]
         ^ *((_DWORD *)v303 - 1);
    v304 = (char *)&unk_17CF00 + 8 * BYTE2(v199);
    v419 = &qword_17A708[BYTE1(v185)];
    v367 = &dword_17AF08[2 * BYTE2(v185)];
    v373 = &dword_179700[2 * (unsigned __int8)v142];
    v423 = &dword_17AF08[2 * BYTE2(v147)];
    v371 = &qword_17B6F8[HIBYTE(v147)];
    v182 = v124
         ^ *(v330 - 1)
         ^ *((_DWORD *)v375 + 3)
         ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v204) + 1)
         ^ *((_DWORD *)&unk_17CF00 + 2 * v434 + 1);
    v267 = v123
         ^ *(v330 - 2)
         ^ *((_DWORD *)v375 + 2)
         ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v204))
         ^ *((_DWORD *)&unk_17CF00 + 2 * v434);
    v125 = dword_179700[2 * v169];
    v270 = dword_179700[2 * v169 + 1];
    v126 = *((_DWORD *)&unk_17C700 + 2 * v150)
         ^ *((_DWORD *)v345 - 2)
         ^ *(v310 - 2)
         ^ *((_DWORD *)v379 + 2)
         ^ dword_179700[2 * v155]
         ^ dword_179F00[2 * v272]
         ^ *((_DWORD *)v331 - 2);
    v127 = *((_DWORD *)&unk_17C700 + 2 * v150 + 1)
         ^ dword_179700[2 * v155 + 1]
         ^ *((_DWORD *)v379 + 3)
         ^ v381[1]
         ^ *((_DWORD *)v331 - 1)
         ^ *(v310 - 1)
         ^ *((_DWORD *)v345 - 1)
         ^ *((_DWORD *)&unk_17CF00 + 2 * v161 + 1);
    v311 = *((_DWORD *)&unk_17C700 + 2 * v174 + 1);
    v299 = *((_DWORD *)&unk_17C700 + 2 * v174);
    v152 = v127;
    v170 = &qword_17BF08[(unsigned __int8)v199];
    v128 = BYTE1(v199);
    v151 = (char *)&unk_17C700 + 8 * BYTE1(v199);
    v195 = v126 ^ *((_DWORD *)&unk_17CF00 + 2 * v161);
    v175 = (_DWORD *)((char *)&unk_17C700 + 8 * BYTE1(v202));
    v129 = *((_DWORD *)v350 - 2)
         ^ dword_179700[2 * v181]
         ^ dword_179F00[2 * v278]
         ^ *(v354 - 2)
         ^ *((_DWORD *)v397 + 2)
         ^ *(_DWORD *)(v398 - 8)
         ^ *((_DWORD *)&unk_17C700 + 2 * v141);
    v279 = *((_DWORD *)&unk_17CF00 + 2 * v189 + 1);
    v273 = *((_DWORD *)&unk_17CF00 + 2 * v189);
    v190 = v129;
    v130 = *((_DWORD *)&unk_17C700 + 2 * HIDWORD(v142))
         ^ *(v362 - 2)
         ^ dword_179700[2 * (unsigned __int8)v206]
         ^ dword_179F00[2 * v282]
         ^ *((_DWORD *)v403 - 2)
         ^ *((_DWORD *)v405 + 2)
         ^ *((_DWORD *)v120 - 2);
    HIDWORD(v142) = *(v362 - 1)
                  ^ dword_179700[2 * (unsigned __int8)v206 + 1]
                  ^ *(_DWORD *)(HIDWORD(v398) + 4)
                  ^ *((_DWORD *)v403 - 1)
                  ^ *((_DWORD *)v405 + 3)
                  ^ *((_DWORD *)v120 - 1)
                  ^ *((_DWORD *)&unk_17C700 + 2 * HIDWORD(v142) + 1);
    HIDWORD(v35) = dword_179700[2 * v194]
                 ^ dword_179F00[2 * v286]
                 ^ *((_DWORD *)v411 - 2)
                 ^ *(v367 - 2)
                 ^ *((_DWORD *)v371 + 2)
                 ^ *((_DWORD *)v415 - 2)
                 ^ *((_DWORD *)&unk_17C700 + 2 * v128);
    v156 = *(v335 - 1)
         ^ v270
         ^ v383[1]
         ^ *((_DWORD *)v341 - 1)
         ^ *((_DWORD *)v387 + 3)
         ^ *((_DWORD *)v391 - 1)
         ^ v311
         ^ *((_DWORD *)&unk_17CF00 + 2 * v178 + 1);
    LODWORD(v142) = *((_DWORD *)v170 - 2)
                  ^ *(v423 - 2)
                  ^ *v373
                  ^ dword_179F00[2 * v288]
                  ^ *((_DWORD *)v419 - 2)
                  ^ *((_DWORD *)v425 + 2)
                  ^ *v175;
    v13 = *(v335 - 2)
        ^ v125
        ^ dword_179F00[2 * v275]
        ^ *((_DWORD *)v341 - 2)
        ^ *((_DWORD *)v387 + 2)
        ^ *((_DWORD *)v391 - 2)
        ^ v299
        ^ *((_DWORD *)&unk_17CF00 + 2 * v178);
    v14 = dword_179700[2 * v181 + 1]
        ^ *((_DWORD *)v350 - 1)
        ^ v394[1]
        ^ *(v354 - 1)
        ^ *((_DWORD *)v397 + 3)
        ^ *(_DWORD *)(v398 - 4)
        ^ *((_DWORD *)&unk_17C700 + 2 * v141 + 1)
        ^ v279;
    v134 = v190 ^ v273;
    v16 = *((_DWORD *)v151 + 1)
        ^ dword_179F00[2 * v286 + 1]
        ^ dword_179700[2 * v194 + 1]
        ^ *((_DWORD *)v411 - 1)
        ^ *(v367 - 1)
        ^ *((_DWORD *)v371 + 3)
        ^ *((_DWORD *)v415 - 1)
        ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v202) + 1);
    v15 = v175[1]
        ^ *((_DWORD *)v425 + 3)
        ^ dword_179F00[2 * v288 + 1]
        ^ v373[1]
        ^ *((_DWORD *)v419 - 1)
        ^ *(v423 - 1)
        ^ *((_DWORD *)v170 - 1)
        ^ *((_DWORD *)&unk_17CF00 + 2 * v250 + 1);
    v165 = HIDWORD(v142) ^ *((_DWORD *)v304 + 1);
    v143 = v130 ^ *((_DWORD *)&unk_17CF00 + 2 * v164);
    v171 = HIDWORD(v35) ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v202));
    v17 = v142 ^ *((_DWORD *)&unk_17CF00 + 2 * v250);
  }
  while ( v133 != 14 );
  v440[0] = (unsigned __int8)(v240 ^ LOBYTE(dest[8]))
          | (unsigned __int16)((unsigned __int8)((unsigned __int16)(v240 ^ LOWORD(dest[8])) >> 8) << 8)
          | ((unsigned __int8)(((unsigned int)v240 ^ LODWORD(dest[8])) >> 16) << 16) & 0xFFFFFF
          | (((unsigned int)v240 ^ LODWORD(dest[8])) >> 24 << 24);
  v440[2] = (unsigned __int8)(v214 ^ LOBYTE(dest[9]))
          | (unsigned __int16)((unsigned __int8)((unsigned __int16)(v214 ^ LOWORD(dest[9])) >> 8) << 8)
          | ((unsigned __int8)(((unsigned int)v214 ^ LODWORD(dest[9])) >> 16) << 16) & 0xFFFFFF
          | (((unsigned int)v214 ^ LODWORD(dest[9])) >> 24 << 24);
  v440[4] = (unsigned __int8)(v211 ^ LOBYTE(dest[10]))
          | (unsigned __int16)((unsigned __int8)((unsigned __int16)(v211 ^ LOWORD(dest[10])) >> 8) << 8)
          | ((unsigned __int8)((v211 ^ LODWORD(dest[10])) >> 16) << 16) & 0xFFFFFF
          | ((v211 ^ LODWORD(dest[10])) >> 24 << 24);
  v440[6] = (unsigned __int8)(v232 ^ LOBYTE(dest[11]))
          | (unsigned __int16)((unsigned __int8)((unsigned __int16)(v232 ^ LOWORD(dest[11])) >> 8) << 8)
          | ((unsigned __int8)(((unsigned int)v232 ^ LODWORD(dest[11])) >> 16) << 16) & 0xFFFFFF
          | (((unsigned int)v232 ^ LODWORD(dest[11])) >> 24 << 24);
  v440[8] = (unsigned __int8)(v207 ^ LOBYTE(dest[12]))
          | (unsigned __int16)((unsigned __int8)((unsigned __int16)(v207 ^ LOWORD(dest[12])) >> 8) << 8)
          | ((unsigned __int8)(((unsigned int)v207 ^ LODWORD(dest[12])) >> 16) << 16) & 0xFFFFFF
          | (((unsigned int)v207 ^ LODWORD(dest[12])) >> 24 << 24);
  v440[10] = (unsigned __int8)(v229 ^ LOBYTE(dest[13]))
           | (unsigned __int16)((unsigned __int8)((unsigned __int16)(v229 ^ LOWORD(dest[13])) >> 8) << 8)
           | ((unsigned __int8)(((unsigned int)v229 ^ LODWORD(dest[13])) >> 16) << 16) & 0xFFFFFF
           | (((unsigned int)v229 ^ LODWORD(dest[13])) >> 24 << 24);
  v440[12] = (unsigned __int8)(v259 ^ LOBYTE(dest[14]))
           | (unsigned __int16)((unsigned __int8)((unsigned __int16)(v259 ^ LOWORD(dest[14])) >> 8) << 8)
           | ((unsigned __int8)(((unsigned int)v259 ^ LODWORD(dest[14])) >> 16) << 16) & 0xFFFFFF
           | (((unsigned int)v259 ^ LODWORD(dest[14])) >> 24 << 24);
  v440[14] = (unsigned __int8)(v265 ^ LOBYTE(dest[15]))
           | (unsigned __int16)((unsigned __int8)((unsigned __int16)(v265 ^ LOWORD(dest[15])) >> 8) << 8)
           | ((unsigned __int8)(((unsigned int)v265 ^ LODWORD(dest[15])) >> 16) << 16) & 0xFFFFFF
           | (((unsigned int)v265 ^ LODWORD(dest[15])) >> 24 << 24);
  v440[1] = (unsigned __int8)(BYTE4(v240) ^ BYTE4(dest[8]))
          | (unsigned __int16)((unsigned __int8)((unsigned __int16)(WORD2(v240) ^ WORD2(dest[8])) >> 8) << 8)
          | ((unsigned __int8)((unsigned int)(HIDWORD(v240) ^ HIDWORD(dest[8])) >> 16) << 16) & 0xFFFFFF
          | ((unsigned int)(HIDWORD(v240) ^ HIDWORD(dest[8])) >> 24 << 24);
  v440[9] = (unsigned __int8)(v251 ^ BYTE4(dest[12]))
          | (unsigned __int16)((unsigned __int8)((unsigned __int16)(v251 ^ WORD2(dest[12])) >> 8) << 8)
          | ((unsigned __int8)(((unsigned int)v251 ^ HIDWORD(dest[12])) >> 16) << 16) & 0xFFFFFF
          | (((unsigned int)v251 ^ HIDWORD(dest[12])) >> 24 << 24);
  v440[13] = (unsigned __int8)(BYTE4(v259) ^ BYTE4(dest[14]))
           | (unsigned __int16)((unsigned __int8)((unsigned __int16)(WORD2(v259) ^ WORD2(dest[14])) >> 8) << 8)
           | ((unsigned __int8)((unsigned int)(HIDWORD(v259) ^ HIDWORD(dest[14])) >> 16) << 16) & 0xFFFFFF
           | ((unsigned int)(HIDWORD(v259) ^ HIDWORD(dest[14])) >> 24 << 24);
  v440[15] = (unsigned __int8)(BYTE4(v265) ^ BYTE4(dest[15]))
           | (unsigned __int16)((unsigned __int8)((unsigned __int16)(WORD2(v265) ^ WORD2(dest[15])) >> 8) << 8)
           | ((unsigned __int8)((unsigned int)(HIDWORD(v265) ^ HIDWORD(dest[15])) >> 16) << 16) & 0xFFFFFF
           | ((unsigned int)(HIDWORD(v265) ^ HIDWORD(dest[15])) >> 24 << 24);
  v440[11] = (unsigned __int8)(v254 ^ BYTE4(dest[13]))
           | (unsigned __int16)((unsigned __int8)((unsigned __int16)(v254 ^ WORD2(dest[13])) >> 8) << 8)
           | ((unsigned __int8)(((unsigned int)v254 ^ HIDWORD(dest[13])) >> 16) << 16) & 0xFFFFFF
           | (((unsigned int)v254 ^ HIDWORD(dest[13])) >> 24 << 24);
  v440[3] = (unsigned __int8)(v237 ^ BYTE4(dest[9]))
          | (unsigned __int16)((unsigned __int8)((unsigned __int16)(v237 ^ WORD2(dest[9])) >> 8) << 8)
          | ((unsigned __int8)(((unsigned int)v237 ^ HIDWORD(dest[9])) >> 16) << 16) & 0xFFFFFF
          | (((unsigned int)v237 ^ HIDWORD(dest[9])) >> 24 << 24);
  v440[5] = (unsigned __int8)(v216 ^ BYTE4(dest[10]))
          | (unsigned __int16)((unsigned __int8)((unsigned __int16)(v216 ^ WORD2(dest[10])) >> 8) << 8)
          | ((unsigned __int8)(((unsigned int)v216 ^ HIDWORD(dest[10])) >> 16) << 16) & 0xFFFFFF
          | (((unsigned int)v216 ^ HIDWORD(dest[10])) >> 24 << 24);
  v440[7] = (unsigned __int8)(v247 ^ BYTE4(dest[11]))
          | (unsigned __int16)((unsigned __int8)((unsigned __int16)(v247 ^ WORD2(dest[11])) >> 8) << 8)
          | ((unsigned __int8)((v247 ^ HIDWORD(dest[11])) >> 16) << 16) & 0xFFFFFF
          | ((v247 ^ HIDWORD(dest[11])) >> 24 << 24);
  memcpy(a4, (char *)v440 + 64 - n, n);
  *(_DWORD *)(a1 + 128) = 0;
  memset((void *)(a1 + 136), 0, 0x78u);
  *(_DWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 260) = (n << 11) & 0xFF0000 | (n << 27);
  *(_QWORD *)(v437 - 8) = 0;
  return 0;
}
