void *__fastcall sph_groestl384_0(__int64 *a1, char *a2, size_t a3)
{
  int v3; // r5
  size_t v4; // r4
  int v5; // r6
  size_t v6; // r3
  char *v7; // r0
  char *v8; // r1
  __int64 v9; // r6
  unsigned int v10; // r8
  unsigned int v11; // r7
  int v12; // r1
  _QWORD *v13; // r4
  int v14; // r2
  int v15; // r6
  int v16; // r4
  int v17; // lr
  int v18; // r12
  int v19; // r0
  int v20; // r3
  int v21; // r5
  _DWORD *v22; // r2
  int v23; // r1
  int v24; // r5
  int v25; // r3
  _DWORD *v26; // r7
  __int64 v27; // kr28_8
  int v28; // r8
  _QWORD *v29; // r4
  int v30; // r12
  int v31; // r10
  int v32; // r2
  int v33; // r9
  int v34; // r7
  int v35; // r12
  int v36; // r10
  int v37; // r5
  unsigned int v38; // r2
  __int64 v39; // kr38_8
  int v40; // r7
  int v41; // r1
  int v42; // r0
  int v43; // lr
  int v44; // r8
  int v45; // r1
  char *v46; // r6
  __int64 v47; // r0
  int v48; // r10
  int v49; // r9
  int v50; // r5
  int v51; // r4
  int v52; // r8
  __int64 v53; // kr40_8
  int v54; // r4
  int v55; // r5
  int v56; // r2
  int v57; // r7
  __int64 v58; // kr48_8
  __int64 v59; // kr50_8
  __int64 v60; // kr58_8
  int v61; // lr
  int v62; // r10
  int v63; // r12
  int v64; // r5
  int v65; // lr
  int v66; // r12
  int v67; // r10
  int v68; // r5
  int v69; // r4
  int v70; // r9
  int v71; // r6
  int v72; // r2
  int v73; // r12
  int v74; // lr
  _DWORD *v75; // r2
  int v76; // r3
  _QWORD *v77; // r10
  __int64 v78; // kr60_8
  int v79; // r8
  int v80; // r6
  int v81; // r3
  int v82; // lr
  int v83; // r5
  int v84; // r6
  __int64 v85; // kr68_8
  int v86; // r8
  int v87; // r6
  int v88; // r7
  int v89; // r7
  int v90; // r6
  int v91; // r5
  _QWORD *v92; // lr
  __int64 v93; // kr70_8
  int v94; // r2
  __int64 v95; // kr80_8
  __int64 v96; // kr88_8
  int v97; // r12
  int v98; // r9
  int v99; // r5
  int v100; // r3
  int v101; // r12
  int v102; // r7
  int v103; // r8
  int v104; // r10
  int v105; // r2
  int v106; // r9
  unsigned int v107; // r12
  unsigned int v108; // r10
  int v109; // r8
  unsigned int v110; // r1
  _DWORD *v111; // r6
  int v112; // r0
  int v113; // r8
  int v114; // r5
  int v115; // r7
  _QWORD *v116; // r6
  int v117; // r2
  int v118; // r3
  int v119; // r9
  int v120; // r3
  int v121; // r5
  int v122; // r0
  int v123; // r4
  int v124; // r1
  int v125; // r3
  int v126; // r5
  int v127; // r6
  __int64 v128; // kr90_8
  int v129; // r8
  int v130; // lr
  int v131; // r7
  unsigned int v132; // r1
  __int64 v133; // kr98_8
  int v134; // r12
  int v135; // r6
  unsigned int v136; // r4
  int v137; // r3
  int v138; // r2
  int v139; // lr
  int v140; // r1
  int v141; // r4
  __int64 v142; // krA0_8
  int v143; // r3
  unsigned int v144; // r1
  int v145; // r1
  unsigned int v146; // r5
  int v147; // r0
  int v148; // r5
  int v149; // r6
  __int64 v150; // krB0_8
  __int64 v151; // krB8_8
  __int64 v152; // krC0_8
  _DWORD *v153; // r6
  __int64 v154; // krD0_8
  unsigned int v155; // r0
  unsigned int v156; // r1
  unsigned int v157; // r2
  unsigned int v158; // r3
  unsigned int v159; // r0
  _QWORD *v160; // r12
  bool v161; // zf
  int v162; // r3
  int v163; // r2
  int v164; // r2
  void *result; // r0
  char *v167; // r0
  size_t v168; // r5
  __int64 v169; // [sp+8h] [bp-344h]
  __int64 v170; // [sp+8h] [bp-344h]
  unsigned int v171; // [sp+10h] [bp-33Ch]
  int v172; // [sp+10h] [bp-33Ch]
  unsigned int v173; // [sp+10h] [bp-33Ch]
  __int64 v174; // [sp+14h] [bp-338h]
  int v175; // [sp+14h] [bp-338h]
  unsigned int v176; // [sp+14h] [bp-338h]
  unsigned int v177; // [sp+18h] [bp-334h]
  unsigned int v178; // [sp+18h] [bp-334h]
  unsigned int v179; // [sp+1Ch] [bp-330h]
  unsigned int v180; // [sp+1Ch] [bp-330h]
  int v181; // [sp+1Ch] [bp-330h]
  unsigned int v182; // [sp+1Ch] [bp-330h]
  __int64 v183; // [sp+20h] [bp-32Ch]
  __int64 v184; // [sp+20h] [bp-32Ch]
  unsigned int v185; // [sp+28h] [bp-324h]
  int v186; // [sp+28h] [bp-324h]
  int v187; // [sp+28h] [bp-324h]
  unsigned int v188; // [sp+28h] [bp-324h]
  unsigned int v189; // [sp+28h] [bp-324h]
  unsigned int v190; // [sp+28h] [bp-324h]
  unsigned int v191; // [sp+2Ch] [bp-320h]
  int v192; // [sp+2Ch] [bp-320h]
  int v193; // [sp+2Ch] [bp-320h]
  unsigned int v194; // [sp+2Ch] [bp-320h]
  unsigned int v195; // [sp+30h] [bp-31Ch]
  unsigned int v196; // [sp+30h] [bp-31Ch]
  unsigned int v197; // [sp+30h] [bp-31Ch]
  unsigned int v198; // [sp+34h] [bp-318h]
  unsigned int v199; // [sp+34h] [bp-318h]
  int v200; // [sp+34h] [bp-318h]
  unsigned int v201; // [sp+34h] [bp-318h]
  unsigned int v202; // [sp+34h] [bp-318h]
  unsigned int v203; // [sp+38h] [bp-314h]
  unsigned int v204; // [sp+38h] [bp-314h]
  int v205; // [sp+38h] [bp-314h]
  _QWORD *v206; // [sp+38h] [bp-314h]
  unsigned int v207; // [sp+38h] [bp-314h]
  __int64 v208; // [sp+3Ch] [bp-310h]
  unsigned int v209; // [sp+3Ch] [bp-310h]
  unsigned int v210; // [sp+40h] [bp-30Ch]
  unsigned int v211; // [sp+40h] [bp-30Ch]
  unsigned int v212; // [sp+44h] [bp-308h]
  unsigned int v213; // [sp+44h] [bp-308h]
  int v214; // [sp+44h] [bp-308h]
  _QWORD *v215; // [sp+44h] [bp-308h]
  int *v216; // [sp+44h] [bp-308h]
  int v217; // [sp+44h] [bp-308h]
  unsigned int v218; // [sp+44h] [bp-308h]
  unsigned __int8 v219; // [sp+45h] [bp-307h]
  unsigned int v220; // [sp+48h] [bp-304h]
  int v221; // [sp+48h] [bp-304h]
  unsigned int v222; // [sp+48h] [bp-304h]
  _DWORD *v223; // [sp+48h] [bp-304h]
  unsigned int v224; // [sp+48h] [bp-304h]
  unsigned int v225; // [sp+48h] [bp-304h]
  unsigned int v226; // [sp+4Ch] [bp-300h]
  int v227; // [sp+4Ch] [bp-300h]
  unsigned int v228; // [sp+4Ch] [bp-300h]
  unsigned int v229; // [sp+4Ch] [bp-300h]
  unsigned int v230; // [sp+4Ch] [bp-300h]
  __int64 v231; // [sp+50h] [bp-2FCh]
  unsigned int v232; // [sp+50h] [bp-2FCh]
  unsigned int v233; // [sp+54h] [bp-2F8h]
  unsigned int v234; // [sp+54h] [bp-2F8h]
  unsigned int v235; // [sp+58h] [bp-2F4h]
  unsigned int v236; // [sp+58h] [bp-2F4h]
  int v237; // [sp+58h] [bp-2F4h]
  int v238; // [sp+58h] [bp-2F4h]
  unsigned int v239; // [sp+58h] [bp-2F4h]
  unsigned int v240; // [sp+5Ch] [bp-2F0h]
  unsigned int v241; // [sp+5Ch] [bp-2F0h]
  int v242; // [sp+5Ch] [bp-2F0h]
  _QWORD *v243; // [sp+5Ch] [bp-2F0h]
  _DWORD *v244; // [sp+5Ch] [bp-2F0h]
  unsigned int v245; // [sp+5Ch] [bp-2F0h]
  unsigned int v246; // [sp+5Ch] [bp-2F0h]
  unsigned int v247; // [sp+60h] [bp-2ECh]
  int v248; // [sp+60h] [bp-2ECh]
  unsigned int v249; // [sp+60h] [bp-2ECh]
  int v250; // [sp+60h] [bp-2ECh]
  __int16 v251; // [sp+60h] [bp-2ECh]
  unsigned int v252; // [sp+60h] [bp-2ECh]
  unsigned int v253; // [sp+64h] [bp-2E8h]
  int v254; // [sp+64h] [bp-2E8h]
  unsigned int v255; // [sp+64h] [bp-2E8h]
  int v256; // [sp+64h] [bp-2E8h]
  unsigned int v257; // [sp+64h] [bp-2E8h]
  unsigned int v258; // [sp+68h] [bp-2E4h]
  int v259; // [sp+68h] [bp-2E4h]
  unsigned int v260; // [sp+68h] [bp-2E4h]
  _DWORD *v261; // [sp+68h] [bp-2E4h]
  unsigned int v262; // [sp+68h] [bp-2E4h]
  int v263; // [sp+68h] [bp-2E4h]
  unsigned int v264; // [sp+68h] [bp-2E4h]
  unsigned int v265; // [sp+6Ch] [bp-2E0h]
  int v266; // [sp+6Ch] [bp-2E0h]
  __int64 v267; // [sp+6Ch] [bp-2E0h]
  int v268; // [sp+6Ch] [bp-2E0h]
  unsigned int v269; // [sp+6Ch] [bp-2E0h]
  int v270; // [sp+70h] [bp-2DCh]
  _QWORD *v271; // [sp+70h] [bp-2DCh]
  unsigned int v272; // [sp+70h] [bp-2DCh]
  unsigned int v273; // [sp+70h] [bp-2DCh]
  unsigned int v274; // [sp+74h] [bp-2D8h]
  int v275; // [sp+74h] [bp-2D8h]
  __int64 v276; // [sp+74h] [bp-2D8h]
  int v277; // [sp+74h] [bp-2D8h]
  unsigned int v278; // [sp+74h] [bp-2D8h]
  unsigned int v279; // [sp+78h] [bp-2D4h]
  int v280; // [sp+78h] [bp-2D4h]
  unsigned int v281; // [sp+78h] [bp-2D4h]
  int v282; // [sp+78h] [bp-2D4h]
  unsigned int v283; // [sp+78h] [bp-2D4h]
  __int64 v284; // [sp+7Ch] [bp-2D0h]
  int v285; // [sp+7Ch] [bp-2D0h]
  int v286; // [sp+7Ch] [bp-2D0h]
  unsigned int v287; // [sp+7Ch] [bp-2D0h]
  int v288; // [sp+80h] [bp-2CCh]
  int v289; // [sp+80h] [bp-2CCh]
  int v290; // [sp+80h] [bp-2CCh]
  int v291; // [sp+80h] [bp-2CCh]
  unsigned int v292; // [sp+80h] [bp-2CCh]
  unsigned int v293; // [sp+84h] [bp-2C8h]
  int v294; // [sp+84h] [bp-2C8h]
  unsigned int v295; // [sp+84h] [bp-2C8h]
  int v296; // [sp+84h] [bp-2C8h]
  unsigned int v297; // [sp+84h] [bp-2C8h]
  int v298; // [sp+84h] [bp-2C8h]
  int v299; // [sp+84h] [bp-2C8h]
  unsigned int v300; // [sp+84h] [bp-2C8h]
  unsigned int v301; // [sp+88h] [bp-2C4h]
  int v302; // [sp+88h] [bp-2C4h]
  unsigned int v303; // [sp+88h] [bp-2C4h]
  unsigned int v304; // [sp+88h] [bp-2C4h]
  int v305; // [sp+88h] [bp-2C4h]
  unsigned int v306; // [sp+88h] [bp-2C4h]
  _QWORD *v307; // [sp+8Ch] [bp-2C0h]
  int v308; // [sp+8Ch] [bp-2C0h]
  unsigned int v309; // [sp+8Ch] [bp-2C0h]
  unsigned int v310; // [sp+8Ch] [bp-2C0h]
  int v311; // [sp+90h] [bp-2BCh]
  _QWORD *v312; // [sp+90h] [bp-2BCh]
  int v313; // [sp+90h] [bp-2BCh]
  int v314; // [sp+90h] [bp-2BCh]
  int v315; // [sp+94h] [bp-2B8h]
  int v316; // [sp+94h] [bp-2B8h]
  int v317; // [sp+94h] [bp-2B8h]
  int v318; // [sp+94h] [bp-2B8h]
  __int64 v319; // [sp+98h] [bp-2B4h]
  _QWORD *v320; // [sp+98h] [bp-2B4h]
  int v321; // [sp+98h] [bp-2B4h]
  int v322; // [sp+98h] [bp-2B4h]
  unsigned int v323; // [sp+9Ch] [bp-2B0h]
  int v324; // [sp+A0h] [bp-2ACh]
  int v325; // [sp+A0h] [bp-2ACh]
  _QWORD *v326; // [sp+A0h] [bp-2ACh]
  unsigned int v327; // [sp+A0h] [bp-2ACh]
  int v328; // [sp+A4h] [bp-2A8h]
  int v329; // [sp+A4h] [bp-2A8h]
  int v330; // [sp+A4h] [bp-2A8h]
  _QWORD *v331; // [sp+A4h] [bp-2A8h]
  int v332; // [sp+A4h] [bp-2A8h]
  unsigned int v333; // [sp+A4h] [bp-2A8h]
  unsigned int v334; // [sp+A8h] [bp-2A4h]
  int v335; // [sp+A8h] [bp-2A4h]
  int v336; // [sp+A8h] [bp-2A4h]
  unsigned int v337; // [sp+A8h] [bp-2A4h]
  int v338; // [sp+ACh] [bp-2A0h]
  int v339; // [sp+ACh] [bp-2A0h]
  unsigned int v340; // [sp+ACh] [bp-2A0h]
  unsigned int v341; // [sp+ACh] [bp-2A0h]
  unsigned int v342; // [sp+B0h] [bp-29Ch]
  int v343; // [sp+B0h] [bp-29Ch]
  int v344; // [sp+B0h] [bp-29Ch]
  int v345; // [sp+B0h] [bp-29Ch]
  _QWORD *v346; // [sp+B0h] [bp-29Ch]
  _QWORD *v347; // [sp+B0h] [bp-29Ch]
  _QWORD *v348; // [sp+B0h] [bp-29Ch]
  int v349; // [sp+B0h] [bp-29Ch]
  unsigned int v350; // [sp+B4h] [bp-298h]
  int v351; // [sp+B4h] [bp-298h]
  _QWORD *v352; // [sp+B4h] [bp-298h]
  int v353; // [sp+B4h] [bp-298h]
  unsigned int v354; // [sp+B8h] [bp-294h]
  int *v355; // [sp+B8h] [bp-294h]
  int v356; // [sp+B8h] [bp-294h]
  int v357; // [sp+B8h] [bp-294h]
  _QWORD *v358; // [sp+B8h] [bp-294h]
  int v359; // [sp+B8h] [bp-294h]
  int v360; // [sp+BCh] [bp-290h]
  _QWORD *v361; // [sp+BCh] [bp-290h]
  unsigned int v362; // [sp+BCh] [bp-290h]
  int v363; // [sp+BCh] [bp-290h]
  unsigned int v364; // [sp+C0h] [bp-28Ch]
  _QWORD *v365; // [sp+C0h] [bp-28Ch]
  unsigned int v366; // [sp+C0h] [bp-28Ch]
  int v367; // [sp+C4h] [bp-288h]
  int v368; // [sp+C4h] [bp-288h]
  int v369; // [sp+C4h] [bp-288h]
  unsigned int v370; // [sp+CCh] [bp-280h]
  int v371; // [sp+CCh] [bp-280h]
  int v372; // [sp+CCh] [bp-280h]
  int v373; // [sp+D0h] [bp-27Ch]
  int v374; // [sp+D0h] [bp-27Ch]
  int v375; // [sp+D0h] [bp-27Ch]
  _QWORD *v376; // [sp+D4h] [bp-278h]
  int v377; // [sp+D4h] [bp-278h]
  unsigned int v378; // [sp+D4h] [bp-278h]
  int v379; // [sp+D4h] [bp-278h]
  int v380; // [sp+D4h] [bp-278h]
  int v381; // [sp+D8h] [bp-274h]
  _QWORD *v382; // [sp+D8h] [bp-274h]
  int v383; // [sp+D8h] [bp-274h]
  int v384; // [sp+D8h] [bp-274h]
  int v385; // [sp+D8h] [bp-274h]
  int v386; // [sp+D8h] [bp-274h]
  int v387; // [sp+DCh] [bp-270h]
  __int64 v388; // [sp+DCh] [bp-270h]
  __int64 v389; // [sp+E0h] [bp-26Ch]
  int v390; // [sp+E4h] [bp-268h]
  __int64 v391; // [sp+E4h] [bp-268h]
  unsigned __int64 v392; // [sp+E8h] [bp-264h]
  unsigned int v393; // [sp+ECh] [bp-260h]
  __int64 v394; // [sp+F0h] [bp-25Ch]
  int v395; // [sp+F0h] [bp-25Ch]
  int v396; // [sp+F0h] [bp-25Ch]
  int v397; // [sp+F4h] [bp-258h]
  _QWORD *v398; // [sp+F4h] [bp-258h]
  _DWORD *v399; // [sp+F4h] [bp-258h]
  int v400; // [sp+F4h] [bp-258h]
  unsigned __int64 v401; // [sp+F8h] [bp-254h]
  _QWORD *v402; // [sp+F8h] [bp-254h]
  int v403; // [sp+F8h] [bp-254h]
  int v404; // [sp+F8h] [bp-254h]
  _QWORD *v405; // [sp+FCh] [bp-250h]
  unsigned int v406; // [sp+FCh] [bp-250h]
  int v407; // [sp+100h] [bp-24Ch]
  int v408; // [sp+100h] [bp-24Ch]
  int v409; // [sp+100h] [bp-24Ch]
  _QWORD *v410; // [sp+100h] [bp-24Ch]
  unsigned int v411; // [sp+100h] [bp-24Ch]
  size_t na; // [sp+104h] [bp-248h]
  __int64 v414; // [sp+108h] [bp-244h]
  int v415; // [sp+108h] [bp-244h]
  int v416; // [sp+108h] [bp-244h]
  int v417; // [sp+10Ch] [bp-240h]
  _QWORD *v418; // [sp+10Ch] [bp-240h]
  int v419; // [sp+10Ch] [bp-240h]
  __int64 v420; // [sp+110h] [bp-23Ch]
  int v421; // [sp+110h] [bp-23Ch]
  int v422; // [sp+110h] [bp-23Ch]
  int v423; // [sp+114h] [bp-238h]
  __int64 v424; // [sp+118h] [bp-234h]
  int v425; // [sp+118h] [bp-234h]
  int v426; // [sp+118h] [bp-234h]
  int v427; // [sp+11Ch] [bp-230h]
  __int64 v428; // [sp+120h] [bp-22Ch]
  int v429; // [sp+120h] [bp-22Ch]
  char *v430; // [sp+120h] [bp-22Ch]
  int v431; // [sp+124h] [bp-228h]
  int v432; // [sp+124h] [bp-228h]
  __int64 v433; // [sp+128h] [bp-224h]
  __int64 v434; // [sp+130h] [bp-21Ch]
  int v435; // [sp+130h] [bp-21Ch]
  int v436; // [sp+134h] [bp-218h]
  _QWORD *v437; // [sp+134h] [bp-218h]
  char *v438; // [sp+134h] [bp-218h]
  int v439; // [sp+138h] [bp-214h]
  _QWORD *v440; // [sp+138h] [bp-214h]
  _BYTE v441[12]; // [sp+13Ch] [bp-210h]
  __int64 v442; // [sp+148h] [bp-204h]
  _QWORD *v443; // [sp+148h] [bp-204h]
  _QWORD *v444; // [sp+148h] [bp-204h]
  unsigned int v445; // [sp+14Ch] [bp-200h]
  _QWORD *v446; // [sp+14Ch] [bp-200h]
  __int64 v447; // [sp+150h] [bp-1FCh]
  int v448; // [sp+150h] [bp-1FCh]
  int v449; // [sp+150h] [bp-1FCh]
  _QWORD *v450; // [sp+150h] [bp-1FCh]
  int v451; // [sp+154h] [bp-1F8h]
  _QWORD *v452; // [sp+154h] [bp-1F8h]
  __int64 v453; // [sp+158h] [bp-1F4h]
  int v454; // [sp+158h] [bp-1F4h]
  int v455; // [sp+158h] [bp-1F4h]
  _QWORD *v456; // [sp+158h] [bp-1F4h]
  int v457; // [sp+15Ch] [bp-1F0h]
  _QWORD *v458; // [sp+15Ch] [bp-1F0h]
  __int64 v459; // [sp+160h] [bp-1ECh]
  _QWORD *v460; // [sp+160h] [bp-1ECh]
  __int64 v461; // [sp+168h] [bp-1E4h]
  int v462; // [sp+168h] [bp-1E4h]
  int v463; // [sp+168h] [bp-1E4h]
  int v464; // [sp+16Ch] [bp-1E0h]
  __int64 v465; // [sp+170h] [bp-1DCh]
  unsigned int v466; // [sp+170h] [bp-1DCh]
  int v467; // [sp+170h] [bp-1DCh]
  __int64 v468; // [sp+178h] [bp-1D4h]
  __int64 v469; // [sp+180h] [bp-1CCh]
  int v470; // [sp+180h] [bp-1CCh]
  int v471; // [sp+180h] [bp-1CCh]
  int v472; // [sp+184h] [bp-1C8h]
  __int64 v473; // [sp+188h] [bp-1C4h]
  int v474; // [sp+188h] [bp-1C4h]
  int v475; // [sp+18Ch] [bp-1C0h]
  __int64 v476; // [sp+190h] [bp-1BCh]
  unsigned int v477; // [sp+190h] [bp-1BCh]
  int v478; // [sp+190h] [bp-1BCh]
  int v479; // [sp+194h] [bp-1B8h]
  __int64 v480; // [sp+198h] [bp-1B4h]
  __int64 v481; // [sp+1A0h] [bp-1ACh]
  unsigned int v482; // [sp+1A0h] [bp-1ACh]
  int v483; // [sp+1A4h] [bp-1A8h]
  __int64 v484; // [sp+1A8h] [bp-1A4h]
  __int64 v485; // [sp+1B0h] [bp-19Ch]
  unsigned int v486; // [sp+1B0h] [bp-19Ch]
  int v487; // [sp+1B4h] [bp-198h]
  __int128 v488; // [sp+1B8h] [bp-194h]
  unsigned int v489; // [sp+1B8h] [bp-194h]
  unsigned int v490; // [sp+1BCh] [bp-190h]
  int v491; // [sp+1C0h] [bp-18Ch]
  int v492; // [sp+1C4h] [bp-188h]
  __int64 v493; // [sp+1C8h] [bp-184h]
  int v494; // [sp+1C8h] [bp-184h]
  unsigned __int64 v495; // [sp+1D0h] [bp-17Ch]
  int v496; // [sp+1D0h] [bp-17Ch]
  __int64 v497; // [sp+1D8h] [bp-174h]
  int v498; // [sp+1D8h] [bp-174h]
  int v499; // [sp+1D8h] [bp-174h]
  int v500; // [sp+1DCh] [bp-170h]
  int v501; // [sp+1E0h] [bp-16Ch]
  char *v502; // [sp+1E0h] [bp-16Ch]
  unsigned int v503; // [sp+1E0h] [bp-16Ch]
  unsigned int v504; // [sp+1E4h] [bp-168h]
  _QWORD *v505; // [sp+1E4h] [bp-168h]
  int v506; // [sp+1E4h] [bp-168h]
  int v507; // [sp+1E8h] [bp-164h]
  int v508; // [sp+1E8h] [bp-164h]
  unsigned int v509; // [sp+1E8h] [bp-164h]
  int v510; // [sp+1ECh] [bp-160h]
  int v511; // [sp+1F0h] [bp-15Ch]
  int v512; // [sp+1F4h] [bp-158h]
  int v513; // [sp+1F4h] [bp-158h]
  int v514; // [sp+1F4h] [bp-158h]
  int v515; // [sp+1F8h] [bp-154h]
  int v516; // [sp+1F8h] [bp-154h]
  int v517; // [sp+1FCh] [bp-150h]
  int v518; // [sp+1FCh] [bp-150h]
  int v519; // [sp+1FCh] [bp-150h]
  unsigned int v520; // [sp+200h] [bp-14Ch]
  int v521; // [sp+204h] [bp-148h]
  int v522; // [sp+208h] [bp-144h]
  int v523; // [sp+20Ch] [bp-140h]
  int v524; // [sp+214h] [bp-138h]
  int v525; // [sp+218h] [bp-134h]
  char *src; // [sp+238h] [bp-114h]
  __int64 *v528; // [sp+2C4h] [bp-88h]
  _QWORD dest[16]; // [sp+2C8h] [bp-84h] BYREF

  v3 = *((_DWORD *)a1 + 32);
  v4 = 128 - v3;
  src = a2;
  if ( 128 - v3 > a3 )
  {
    v167 = (char *)a1 + v3;
    v168 = v3 + a3;
    result = memcpy(v167, a2, a3);
    *((_DWORD *)a1 + 32) = v168;
    return result;
  }
  v528 = a1 + 17;
  memcpy(dest, a1 + 17, sizeof(dest));
  if ( !a3 )
    goto LABEL_18;
  v5 = v3;
  v6 = a3;
  while ( 1 )
  {
    if ( v4 >= v6 )
      v4 = v6;
    na = v6 - v4;
    v7 = (char *)a1 + v5;
    v8 = src;
    v5 += v4;
    src += v4;
    memcpy(v7, v8, v4);
    if ( v5 == 128 )
      break;
    v6 = na;
    if ( !na )
      goto LABEL_17;
LABEL_5:
    v4 = 128 - v5;
  }
  v169 = 0;
  v442 = *a1;
  v497 = *a1 ^ dest[0];
  v447 = a1[1];
  v9 = a1[3];
  v495 = __PAIR64__(*((_DWORD *)a1 + 3), v447) ^ dest[1];
  v453 = a1[2];
  v459 = v9;
  v493 = v453 ^ dest[2];
  v414 = v9 ^ dest[3];
  v461 = a1[4];
  v420 = v461 ^ dest[4];
  v465 = a1[5];
  v468 = a1[6];
  v424 = v465 ^ dest[5];
  v428 = v468 ^ dest[6];
  v433 = a1[7] ^ dest[7];
  v469 = a1[7];
  v473 = a1[8];
  v434 = v473 ^ dest[8];
  v476 = a1[9];
  v387 = v476 ^ LODWORD(dest[9]);
  v439 = HIDWORD(v476) ^ HIDWORD(dest[9]);
  v480 = a1[10];
  v389 = v480 ^ dest[10];
  v481 = a1[11];
  v392 = __PAIR64__(*((_DWORD *)a1 + 23), v481) ^ dest[11];
  v484 = a1[12];
  v394 = v484 ^ dest[12];
  v485 = a1[13];
  v401 = __PAIR64__(*((_DWORD *)a1 + 27), v485) ^ dest[13];
  v407 = LODWORD(dest[14]) ^ *((_DWORD *)a1 + 28);
  *(_DWORD *)v441 = HIDWORD(dest[14]) ^ *((_DWORD *)a1 + 29);
  v488 = *((_OWORD *)a1 + 7);
  *(_QWORD *)&v441[4] = *((_QWORD *)&v488 + 1) ^ dest[15];
  do
  {
    v174 = v497 ^ v169;
    v235 = HIDWORD(v495) ^ ((unsigned __int64)(v169 + 16) >> 32);
    v240 = ((unsigned __int64)(v169 + 32) >> 32) ^ HIDWORD(v493);
    v183 = v414 ^ (v169 + 48);
    v247 = v420 ^ (v169 + 64);
    v185 = HIDWORD(v420) ^ ((unsigned __int64)(v169 + 64) >> 32);
    v253 = v424 ^ (v169 + 80);
    v10 = ((unsigned __int64)(v169 + 80) >> 32) ^ HIDWORD(v424);
    v258 = v428 ^ (v169 + 96);
    v198 = v434 ^ (v169 + 128);
    v274 = v387 ^ (v169 + 144);
    v208 = (v169 + 160) ^ v389;
    v279 = v392 ^ (v169 + 176);
    v212 = ((unsigned __int64)(v169 + 176) >> 32) ^ HIDWORD(v392);
    v284 = v394 ^ (v169 + 192);
    v220 = (v169 + 208) ^ v401;
    v301 = v407 ^ (v169 + 224);
    v226 = *(_DWORD *)v441 ^ ((unsigned __int64)(v169 + 224) >> 32);
    v231 = *(_QWORD *)&v441[4] ^ (v169 + 240);
    v179 = v495 ^ (v169 + 16);
    v293 = HIDWORD(v401) ^ ((unsigned __int64)(v169 + 208) >> 32);
    v203 = v439 ^ ((unsigned __int64)(v169 + 144) >> 32);
    v11 = ((unsigned int)v414 ^ ((_DWORD)v169 + 48)) >> 24;
    v265 = v433 ^ (v169 + 112);
    v334 = HIBYTE(v265);
    v360 = (((unsigned __int64)(v169 + 96) >> 32) ^ HIDWORD(v428)) >> 24;
    v367 = (HIDWORD(v433) ^ ((unsigned __int64)(v169 + 112) >> 32)) >> 24;
    v328 = (*(_DWORD *)&v441[8] ^ ((unsigned __int64)(v169 + 240) >> 32)) >> 24;
    v373 = (HIDWORD(v434) ^ ((unsigned __int64)(v169 + 128) >> 32)) >> 24;
    v342 = (unsigned int)(HIDWORD(v497) ^ HIDWORD(v169)) >> 24;
    v350 = HIBYTE(v10);
    LODWORD(v433) = HIBYTE(v198);
    *(_DWORD *)&v441[4] = HIBYTE(v274);
    HIDWORD(v493) = HIBYTE(v240);
    HIDWORD(v495) = (((_DWORD)v169 + 160) ^ (unsigned int)v389) >> 24;
    v501 = (HIDWORD(v414) ^ ((unsigned __int64)(v169 + 48) >> 32)) >> 24;
    v504 = HIBYTE(v279);
    v520 = ((unsigned int)v394 ^ ((_DWORD)v169 + 192)) >> 24;
    v354 = HIBYTE(v220);
    v370 = ((unsigned int)v497 ^ (unsigned int)v169) >> 24;
    v12 = (unsigned __int8)((((_DWORD)v169 + 32) ^ (unsigned int)v493) >> 16);
    v13 = &qword_109778[(unsigned __int8)((unsigned __int16)(v495 ^ (v169 + 16)) >> 8)];
    v388 = *((_QWORD *)&unk_108E80 + HIBYTE(HIDWORD(v284)));
    v14 = *((_DWORD *)v13 - 61);
    v15 = *((_DWORD *)v13 - 62)
        ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)(v497 ^ v169))
        ^ (v169 + 1)
        ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v212));
    v16 = (unsigned __int8)((((unsigned __int64)(v169 + 96) >> 32) ^ HIDWORD(v428)) >> 16);
    v17 = (unsigned __int8)((unsigned __int16)(((unsigned __int64)(v169 + 96) >> 32) ^ WORD2(v428)) >> 8);
    v18 = (unsigned __int8)((HIDWORD(v433) ^ ((unsigned __int64)(v169 + 112) >> 32)) >> 16);
    v395 = BYTE2(v10);
    v19 = (unsigned __int8)(v495 ^ (v169 + 16));
    v20 = *((_DWORD *)&unk_109E80 + 2 * v12) ^ v15;
    v21 = *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)(v497 ^ v169) + 1)
        ^ ((unsigned __int64)(v169 + 1) >> 32)
        ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v212) + 1)
        ^ v14
        ^ *((_DWORD *)&unk_109E80 + 2 * v12 + 1);
    v390 = (unsigned __int8)(((unsigned int)v414 ^ ((_DWORD)v169 + 48)) >> 16);
    v393 = (((_DWORD)v169 + 32) ^ (unsigned int)v493) >> 24;
    v22 = (_DWORD *)((char *)&unk_10B680 + 8 * BYTE1(v10));
    v23 = HIDWORD(v434) ^ ((unsigned __int64)(v169 + 128) >> 32);
    v24 = v21 ^ *((_DWORD *)&unk_10A680 + 2 * v11 + 1) ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v185 + 1);
    v338 = (unsigned __int8)(BYTE4(v434) ^ ((unsigned __int64)(v169 + 128) >> 32));
    v25 = v20 ^ *((_DWORD *)&unk_10A680 + 2 * v11) ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v185);
    v26 = (_DWORD *)((char *)&unk_10AE80 + 8 * (unsigned __int8)(((unsigned __int64)(v169 + 80) >> 32) ^ BYTE4(v424)));
    v171 = v25 ^ *v22 ^ *((_DWORD *)&unk_10BE80 + 2 * v16);
    v415 = *((_DWORD *)&unk_10BE80 + 2 * v18 + 1);
    v408 = *((_DWORD *)&unk_10BE80 + 2 * v18);
    v191 = v24 ^ v22[1] ^ *((_DWORD *)&unk_10BE80 + 2 * v16 + 1);
    v27 = qword_109778[(unsigned __int8)((unsigned __int16)((v169 + 32) ^ v493) >> 8) - 31];
    v28 = (unsigned __int8)v183;
    v29 = &qword_109778[BYTE1(v183)];
    v30 = *((_DWORD *)&unk_108680 + 2 * v19 + 1) ^ HIDWORD(v388) ^ ((unsigned __int64)(v169 + 17) >> 32) ^ HIDWORD(v27);
    v31 = *((_DWORD *)&unk_108680 + 2 * v19) ^ v388 ^ (v169 + 17) ^ v27;
    v32 = (unsigned __int8)((v169 + 32) ^ v493);
    v324 = (unsigned __int8)v247;
    HIDWORD(v388) = BYTE2(v247);
    LODWORD(v388) = &qword_109778[BYTE1(v247)];
    v33 = v31 ^ *((_DWORD *)&unk_109E80 + 2 * v390) ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v247)) ^ *v26;
    v34 = v30 ^ *((_DWORD *)&unk_109E80 + 2 * v390 + 1) ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v247) + 1) ^ v26[1];
    v35 = *((_DWORD *)&unk_108680 + 2 * v32 + 1) ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v293) + 1);
    v381 = *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)(((unsigned __int64)(v169 + 96) >> 32) ^ BYTE4(v428)) + 1);
    v315 = *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)(((unsigned __int64)(v169 + 96) >> 32) ^ BYTE4(v428)));
    v391 = *((_QWORD *)&unk_10B680
           + (unsigned __int8)((unsigned __int16)(WORD2(v433) ^ ((unsigned __int64)(v169 + 112) >> 32)) >> 8));
    v36 = (unsigned __int8)(BYTE4(v433) ^ ((unsigned __int64)(v169 + 112) >> 32));
    v417 = *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v23) + 1);
    v397 = *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v23));
    v248 = *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v293)) ^ *((_DWORD *)&unk_108680 + 2 * v32) ^ (v169 + 33);
    v37 = *((_DWORD *)&unk_10AE80 + 2 * v36);
    v425 = *((_DWORD *)&unk_10AE80 + 2 * v36 + 1);
    v429 = *((_DWORD *)&unk_10B680 + 2 * BYTE1(v23) + 1);
    v431 = *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v203) + 1);
    v427 = *((_DWORD *)&unk_10B680 + 2 * BYTE1(v23));
    v38 = HIBYTE(v253);
    v421 = *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v203));
    v195 = v34 ^ *((_DWORD *)&unk_10B680 + 2 * v17 + 1) ^ v415;
    LODWORD(v183) = v33 ^ *((_DWORD *)&unk_10B680 + 2 * v17) ^ v408;
    v39 = *(v29 - 31);
    v270 = (unsigned __int8)v253;
    v40 = BYTE2(v253);
    v319 = *((_QWORD *)&unk_108680 + v28) ^ *((_QWORD *)&unk_108E80 + HIBYTE(v226)) ^ (v169 + 49);
    v307 = &qword_109778[BYTE1(v253)];
    v254 = BYTE1(v203);
    v436 = (unsigned __int8)v258;
    v41 = *((_DWORD *)&unk_109E80 + 2 * HIDWORD(v388));
    v42 = *((_DWORD *)&unk_109E80 + 2 * HIDWORD(v388) + 1);
    v43 = BYTE2(v265);
    v376 = &qword_109778[BYTE1(v258)];
    v44 = (unsigned __int8)(v439 ^ ((unsigned __int64)(v169 + 144) >> 32));
    HIDWORD(v388) = HIBYTE(v203);
    HIDWORD(v433) = BYTE5(v208);
    v45 = v41 ^ v248 ^ v39 ^ *((_DWORD *)&unk_10A680 + 2 * v38);
    v435 = BYTE2(v212);
    v46 = (char *)&unk_10B680 + 8 * BYTE1(v203);
    v249 = v42
         ^ v35
         ^ ((unsigned __int64)(v169 + 33) >> 32)
         ^ HIDWORD(v39)
         ^ *((_DWORD *)&unk_10A680 + 2 * v38 + 1)
         ^ v381
         ^ HIDWORD(v391)
         ^ v417;
    LODWORD(v493) = (unsigned __int8)v265;
    v382 = &qword_109778[BYTE1(v265)];
    v204 = v45 ^ v315 ^ v391 ^ v397;
    v47 = *(_QWORD *)(v388 - 248);
    LODWORD(v47) = v47 ^ v319 ^ *((_DWORD *)&unk_109E80 + 2 * v40);
    LODWORD(v319) = *((_DWORD *)&unk_109E80 + 2 * BYTE2(v258) + 1);
    v48 = *((_DWORD *)&unk_109E80 + 2 * BYTE2(v258));
    v416 = BYTE2(v198);
    LODWORD(v391) = *((_DWORD *)&unk_10BE80 + 2 * BYTE6(v208) + 1);
    v423 = BYTE4(v208);
    LODWORD(v388) = *((_DWORD *)&unk_10BE80 + 2 * BYTE6(v208));
    HIDWORD(v391) = HIBYTE(HIDWORD(v208));
    LODWORD(v47) = v47 ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v258)) ^ v37;
    HIDWORD(v208) = HIDWORD(v47)
                  ^ HIDWORD(v319)
                  ^ *((_DWORD *)&unk_109E80 + 2 * v40 + 1)
                  ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v258) + 1)
                  ^ v425;
    v426 = BYTE1(v212);
    v259 = (unsigned __int8)v212;
    *(_DWORD *)&v441[8] = BYTE6(v284);
    v49 = (unsigned __int8)v198;
    v50 = *((_DWORD *)&unk_108E80 + 2 * v342) ^ (v169 + 81) ^ *((_DWORD *)&unk_108680 + 2 * v270);
    v51 = *((_DWORD *)&unk_108E80 + 2 * v342 + 1)
        ^ ((unsigned __int64)(v169 + 81) >> 32)
        ^ *((_DWORD *)&unk_108680 + 2 * v270 + 1);
    v271 = &qword_109778[BYTE1(v198)];
    LODWORD(v495) = BYTE2(v274);
    v498 = BYTE5(v284);
    v507 = BYTE4(v284);
    v500 = BYTE2(v293);
    v512 = (unsigned __int8)v274;
    v398 = &qword_109778[BYTE1(v274)];
    v266 = BYTE2(v208);
    v510 = BYTE1(v293);
    v521 = (unsigned __int8)(BYTE4(v401) ^ ((unsigned __int64)(v169 + 208) >> 32));
    v511 = BYTE2(v226);
    v275 = (unsigned __int8)v208;
    v402 = &qword_109778[BYTE1(v208)];
    v517 = BYTE2(v279);
    v199 = v47 ^ v427 ^ v421;
    LODWORD(v47) = *((_DWORD *)&unk_10AE80 + 2 * v44);
    LODWORD(v208) = HIDWORD(v208) ^ v429 ^ v431;
    v343 = *((_DWORD *)&unk_10AE80 + 2 * v44 + 1);
    v432 = BYTE1(v226);
    HIDWORD(v284) = (unsigned __int8)(v441[0] ^ ((unsigned __int64)(v169 + 224) >> 32));
    v522 = BYTE6(v231);
    v227 = BYTE6(v174);
    v294 = (unsigned __int8)v279;
    v405 = &qword_109778[BYTE1(v279)];
    LOBYTE(v40) = BYTE4(v231);
    HIDWORD(v208) = *((_DWORD *)&unk_108680 + 2 * v324 + 1)
                  ^ *((_DWORD *)&unk_108E80 + 2 * v328 + 1)
                  ^ ((unsigned __int64)(v169 + 65) >> 32)
                  ^ *((_DWORD *)v307 - 61)
                  ^ v319
                  ^ *((_DWORD *)&unk_10A680 + 2 * v334 + 1)
                  ^ *((_DWORD *)&unk_10AE80 + 2 * v338 + 1)
                  ^ *((_DWORD *)v46 + 1);
    LOBYTE(v25) = v284;
    v52 = BYTE1(v284);
    v280 = BYTE2(v284);
    HIDWORD(v231) = BYTE5(v231);
    v311 = (unsigned __int8)v40;
    LODWORD(v284) = BYTE5(v174);
    LODWORD(v319) = BYTE4(v174);
    v418 = &qword_109778[v52];
    HIDWORD(v174) = HIDWORD(v208) ^ v391;
    v255 = *((_DWORD *)&unk_108E80 + 2 * v328)
         ^ *((_DWORD *)&unk_108680 + 2 * v324)
         ^ (v169 + 65)
         ^ *((_DWORD *)v307 - 62)
         ^ v48
         ^ *((_DWORD *)&unk_10A680 + 2 * v334)
         ^ *((_DWORD *)&unk_10AE80 + 2 * v338)
         ^ *((_DWORD *)&unk_10B680 + 2 * v254)
         ^ v388;
    v53 = *(v376 - 31);
    v308 = BYTE2(v220);
    v316 = BYTE2(v235);
    v325 = BYTE1(v235);
    v54 = v51 ^ HIDWORD(v53) ^ *((_DWORD *)&unk_109E80 + 2 * v43 + 1) ^ *((_DWORD *)&unk_10A680 + 2 * v433 + 1) ^ v343;
    v339 = (unsigned __int8)v235;
    v55 = v50 ^ v53 ^ *((_DWORD *)&unk_109E80 + 2 * v43) ^ *((_DWORD *)&unk_10A680 + 2 * v433) ^ v47;
    v329 = BYTE2(v240);
    v344 = BYTE1(v240);
    LODWORD(v391) = (unsigned __int8)v240;
    v56 = v436;
    v335 = (unsigned __int8)v220;
    LODWORD(v433) = &qword_109778[BYTE1(v220)];
    v221 = BYTE2(v301);
    v57 = *((_DWORD *)&unk_108680 + 2 * v436 + 1);
    v437 = &qword_109778[BYTE1(v301)];
    v213 = v54 ^ *((_DWORD *)&unk_10B680 + 2 * HIDWORD(v433) + 1) ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v212) + 1);
    HIDWORD(v208) = v55 ^ *((_DWORD *)&unk_10B680 + 2 * HIDWORD(v433)) ^ *((_DWORD *)&unk_10BE80 + 2 * v435);
    v58 = *(v382 - 31);
    v383 = BYTE2(v174);
    *(_DWORD *)v441 = &qword_109778[BYTE1(v174)];
    v440 = &qword_109778[BYTE1(v231)];
    v241 = HIDWORD(v58)
         ^ v57
         ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v235) + 1)
         ^ ((unsigned __int64)(v169 + 97) >> 32)
         ^ *((_DWORD *)&unk_109E80 + 2 * v416 + 1)
         ^ *((_DWORD *)&unk_10A680 + 2 * *(_DWORD *)&v441[4] + 1)
         ^ *((_DWORD *)&unk_10AE80 + 2 * v423 + 1)
         ^ *((_DWORD *)&unk_10B680 + 2 * v426 + 1)
         ^ *((_DWORD *)&unk_10BE80 + 2 * *(_DWORD *)&v441[8] + 1);
    v236 = v58
         ^ *((_DWORD *)&unk_108680 + 2 * v56)
         ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v235))
         ^ (v169 + 97)
         ^ *((_DWORD *)&unk_109E80 + 2 * v416)
         ^ *((_DWORD *)&unk_10A680 + 2 * *(_DWORD *)&v441[4])
         ^ *((_DWORD *)&unk_10AE80 + 2 * v423)
         ^ *((_DWORD *)&unk_10B680 + 2 * v426)
         ^ *((_DWORD *)&unk_10BE80 + 2 * *(_DWORD *)&v441[8]);
    v59 = *(v271 - 31);
    LODWORD(v174) = *((_DWORD *)&unk_108680 + 2 * v493 + 1)
                  ^ *((_DWORD *)&unk_108E80 + 2 * HIDWORD(v493) + 1)
                  ^ ((unsigned __int64)(v169 + 113) >> 32)
                  ^ HIDWORD(v59)
                  ^ *((_DWORD *)&unk_109E80 + 2 * v495 + 1)
                  ^ *((_DWORD *)&unk_10A680 + 2 * HIDWORD(v495) + 1)
                  ^ *((_DWORD *)&unk_10AE80 + 2 * v259 + 1)
                  ^ *((_DWORD *)&unk_10B680 + 2 * v498 + 1)
                  ^ *((_DWORD *)&unk_10BE80 + 2 * v500 + 1);
    v260 = *((_DWORD *)&unk_108680 + 2 * v493)
         ^ *((_DWORD *)&unk_108E80 + 2 * HIDWORD(v493))
         ^ (v169 + 113)
         ^ v59
         ^ *((_DWORD *)&unk_109E80 + 2 * v495)
         ^ *((_DWORD *)&unk_10A680 + 2 * HIDWORD(v495))
         ^ *((_DWORD *)&unk_10AE80 + 2 * v259)
         ^ *((_DWORD *)&unk_10B680 + 2 * v498)
         ^ *((_DWORD *)&unk_10BE80 + 2 * v500);
    v267 = *((_QWORD *)&unk_108680 + v49)
         ^ *((_QWORD *)&unk_108E80 + v501)
         ^ (v169 + 129)
         ^ *(v398 - 31)
         ^ *((_QWORD *)&unk_109E80 + v266)
         ^ *((_QWORD *)&unk_10A680 + v504)
         ^ *((_QWORD *)&unk_10AE80 + v507)
         ^ *((_QWORD *)&unk_10B680 + v510)
         ^ *((_QWORD *)&unk_10BE80 + v511);
    v60 = *(v402 - 31);
    v515 = *((_DWORD *)&unk_10AE80 + 2 * HIDWORD(v284) + 1);
    v61 = *((_DWORD *)&unk_108680 + 2 * v275 + 1);
    v494 = *((_DWORD *)&unk_10A680 + 2 * v354 + 1);
    v62 = *((_DWORD *)&unk_108680 + 2 * v275);
    *(_DWORD *)&v441[4] = *((_DWORD *)&unk_109E80 + 2 * v280 + 1);
    v403 = *((_DWORD *)&unk_109E80 + 2 * v280);
    *(_DWORD *)&v441[8] = *((_DWORD *)&unk_10A680 + 2 * v354);
    v496 = *((_DWORD *)&unk_10B680 + 2 * HIDWORD(v231) + 1);
    v355 = (int *)((char *)&unk_10BE80 + 8 * BYTE6(v183));
    v276 = *((_QWORD *)&unk_108680 + v512)
         ^ *((_QWORD *)&unk_108E80 + HIBYTE(v185))
         ^ (v169 + 145)
         ^ v60
         ^ *((_QWORD *)&unk_109E80 + v517)
         ^ *((_QWORD *)&unk_10A680 + v520)
         ^ *((_QWORD *)&unk_10AE80 + v521)
         ^ *((_QWORD *)&unk_10B680 + v432)
         ^ *((_QWORD *)&unk_10BE80 + v522);
    v399 = (_DWORD *)((char *)&unk_108680 + 8 * (unsigned __int8)v231);
    v63 = *((_DWORD *)&unk_10BE80 + 2 * v227 + 1)
        ^ v61
        ^ (__CFADD__((_DWORD)v169, 161) + HIDWORD(v169))
        ^ *((_DWORD *)&unk_108E80 + 2 * v350 + 1)
        ^ *((_DWORD *)v405 - 61);
    LODWORD(v47) = *((_DWORD *)&unk_108E80 + 2 * v360 + 1)
                 ^ *((_DWORD *)&unk_10B680 + 2 * v284 + 1)
                 ^ *((_DWORD *)&unk_108680 + 2 * v294 + 1)
                 ^ ((unsigned __int64)(v169 + 177) >> 32)
                 ^ *((_DWORD *)v418 - 61)
                 ^ *((_DWORD *)&unk_109E80 + 2 * v308 + 1);
    v64 = *((_DWORD *)&unk_10B680 + 2 * v284)
        ^ *((_DWORD *)&unk_108680 + 2 * v294)
        ^ (v169 + 177)
        ^ *((_DWORD *)&unk_108E80 + 2 * v360)
        ^ *((_DWORD *)v418 - 62)
        ^ *((_DWORD *)&unk_109E80 + 2 * v308);
    v65 = BYTE2(v179);
    v179 >>= 24;
    v66 = v63 ^ *(_DWORD *)&v441[4];
    v419 = *((_DWORD *)&unk_10BE80 + 2 * v329 + 1);
    v409 = *((_DWORD *)&unk_10BE80 + 2 * v329);
    v330 = *((_DWORD *)&unk_10BE80 + 2 * v227)
         ^ v62
         ^ (v169 + 161)
         ^ *((_DWORD *)&unk_108E80 + 2 * v350)
         ^ *((_DWORD *)v405 - 62)
         ^ v403
         ^ *(_DWORD *)&v441[8];
    *(_DWORD *)&v441[8] = *((_DWORD *)&unk_10B680 + 2 * v344 + 1);
    *(_DWORD *)&v441[4] = *((_DWORD *)&unk_10B680 + 2 * v344);
    v351 = v47 ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v301) + 1);
    v499 = v355[1];
    v422 = *v355;
    v345 = v64 ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v301));
    v67 = BYTE5(v183);
    v356 = *((_DWORD *)&unk_10A680 + 2 * BYTE3(v231));
    HIDWORD(v47) = *((_DWORD *)&unk_108680 + 2 * v335 + 1);
    v68 = v335;
    v336 = *((_DWORD *)&unk_109E80 + 2 * BYTE2(v301) + 1);
    v377 = *((_DWORD *)&unk_109E80 + 2 * BYTE2(v231));
    LODWORD(v47) = *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v301 + 1) ^ *((_DWORD *)&unk_109E80 + 2 * v383 + 1);
    v69 = *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v301) ^ *((_DWORD *)&unk_109E80 + 2 * v383);
    v70 = BYTE2(v185);
    v186 = BYTE1(v185);
    HIDWORD(v319) = *((_DWORD *)&unk_10AE80 + 2 * v391 + 1);
    LODWORD(v284) = *((_DWORD *)&unk_10AE80 + 2 * v391);
    LODWORD(v391) = *((_DWORD *)&unk_10AE80 + 2 * BYTE4(v183));
    v302 = *((_DWORD *)&unk_10B680 + 2 * v186 + 1);
    v71 = *((_DWORD *)&unk_10B680 + 2 * v186);
    v187 = v69
         ^ (v169 + 225)
         ^ *((_DWORD *)&unk_108E80 + 2 * HIDWORD(v388))
         ^ *((_DWORD *)v440 - 62)
         ^ *((_DWORD *)&unk_10A680 + 2 * v179)
         ^ v284
         ^ *((_DWORD *)&unk_10B680 + 2 * BYTE5(v183));
    v72 = *(_DWORD *)(*(_DWORD *)v441 - 244)
        ^ v399[1]
        ^ ((unsigned __int64)(v169 + 241) >> 32)
        ^ *((_DWORD *)&unk_108E80 + 2 * HIDWORD(v391) + 1)
        ^ *((_DWORD *)&unk_109E80 + 2 * v65 + 1)
        ^ *((_DWORD *)&unk_10A680 + 2 * v393 + 1)
        ^ *((_DWORD *)&unk_10AE80 + 2 * BYTE4(v183) + 1)
        ^ v302;
    LODWORD(v284) = v330 ^ *((_DWORD *)&unk_10AE80 + 2 * HIDWORD(v284)) ^ *((_DWORD *)&unk_10B680 + 2 * HIDWORD(v231));
    HIDWORD(v284) = v351 ^ *((_DWORD *)&unk_10AE80 + 2 * v311 + 1) ^ *((_DWORD *)&unk_10BE80 + 2 * v316 + 1);
    v228 = *(_DWORD *)&v441[8]
         ^ *((_DWORD *)&unk_10A680 + 2 * v370 + 1)
         ^ HIDWORD(v47)
         ^ ((unsigned __int64)(v169 + 209) >> 32)
         ^ *((_DWORD *)&unk_108E80 + 2 * v373 + 1)
         ^ *((_DWORD *)v437 - 61)
         ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v231) + 1)
         ^ *((_DWORD *)&unk_10AE80 + 2 * v339 + 1)
         ^ v499;
    HIDWORD(v183) = v345 ^ *((_DWORD *)&unk_10AE80 + 2 * v311) ^ *((_DWORD *)&unk_10BE80 + 2 * v316);
    v303 = v187 ^ *((_DWORD *)&unk_10BE80 + 2 * v70);
    v295 = *((_DWORD *)&unk_10AE80 + 2 * v319 + 1)
         ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v25 + 1)
         ^ (__CFADD__((_DWORD)v169, 193) + HIDWORD(v169))
         ^ *((_DWORD *)&unk_108E80 + 2 * v367 + 1)
         ^ *(_DWORD *)(v433 - 244)
         ^ v336
         ^ *((_DWORD *)&unk_10A680 + 2 * BYTE3(v231) + 1)
         ^ *((_DWORD *)&unk_10B680 + 2 * v325 + 1)
         ^ v419;
    LODWORD(v231) = v47
                  ^ (__CFADD__((_DWORD)v169, 225) + HIDWORD(v169))
                  ^ *((_DWORD *)&unk_108E80 + 2 * HIDWORD(v388) + 1)
                  ^ *((_DWORD *)v440 - 61)
                  ^ *((_DWORD *)&unk_10A680 + 2 * v179 + 1)
                  ^ HIDWORD(v319)
                  ^ *((_DWORD *)&unk_10B680 + 2 * v67 + 1)
                  ^ *((_DWORD *)&unk_10BE80 + 2 * v70 + 1);
    HIDWORD(v231) = *v399
                  ^ *(_DWORD *)(*(_DWORD *)v441 - 248)
                  ^ (v169 + 241)
                  ^ *((_DWORD *)&unk_108E80 + 2 * HIDWORD(v391))
                  ^ *((_DWORD *)&unk_109E80 + 2 * v65)
                  ^ *((_DWORD *)&unk_10A680 + 2 * v393)
                  ^ v391
                  ^ v71
                  ^ *((_DWORD *)&unk_10BE80 + 2 * v395);
    v188 = *((_DWORD *)&unk_10AE80 + 2 * v319)
         ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v25)
         ^ (v169 + 193)
         ^ *((_DWORD *)&unk_108E80 + 2 * v367)
         ^ *(_DWORD *)(v433 - 248)
         ^ *((_DWORD *)&unk_109E80 + 2 * v221)
         ^ v356
         ^ *((_DWORD *)&unk_10B680 + 2 * v325)
         ^ v409;
    v222 = *((_DWORD *)&unk_108680 + 2 * v68)
         ^ *((_DWORD *)&unk_10A680 + 2 * v370)
         ^ (v169 + 209)
         ^ *((_DWORD *)&unk_108E80 + 2 * v373)
         ^ *((_DWORD *)v437 - 62)
         ^ v377
         ^ *((_DWORD *)&unk_10AE80 + 2 * v339)
         ^ *(_DWORD *)&v441[4]
         ^ v422;
    v180 = v66 ^ v494 ^ v515 ^ v496;
    LODWORD(v388) = HIBYTE(v241);
    v309 = v72 ^ *((_DWORD *)&unk_10BE80 + 2 * v395 + 1);
    v340 = HIBYTE(v191);
    v396 = HIBYTE(HIDWORD(v267));
    v364 = BYTE3(v284);
    v378 = HIBYTE(v213);
    v400 = HIBYTE(HIDWORD(v276));
    v430 = (char *)&unk_108E80 + 8 * HIBYTE(v191);
    v406 = HIBYTE(v180);
    v438 = (char *)&unk_10A680 + 8 * BYTE3(v284);
    v502 = (char *)&unk_108E80 + 8 * HIBYTE(v213);
    v410 = &qword_109778[BYTE1(v183)];
    v169 += 2;
    v73 = BYTE1(v241);
    v74 = BYTE2(v241);
    v513 = (unsigned __int8)v241;
    v242 = (unsigned __int8)v213;
    v404 = BYTE2(v213);
    HIDWORD(v47) = *((_DWORD *)&unk_10B680 + 2 * BYTE1(v213) + 1)
                 ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(HIDWORD(v284)) + 1)
                 ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v171 + 1)
                 ^ *((_DWORD *)v410 - 61);
    v75 = (_DWORD *)((char *)&unk_109E80 + 8 * BYTE2(v204));
    v214 = *((_DWORD *)v410 - 62)
         ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(HIDWORD(v284)))
         ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v213))
         ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v171);
    LOWORD(v69) = WORD2(v267);
    v411 = HIBYTE(v204);
    v76 = v214 ^ *v75 ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v199));
    v518 = (unsigned __int8)v199;
    v77 = &qword_109778[BYTE1(v199)];
    HIDWORD(v267) = BYTE6(v267);
    v215 = &qword_109778[BYTE1(v255)];
    HIDWORD(v497) = v75[1]
                  ^ HIDWORD(v47)
                  ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v199) + 1)
                  ^ *((_DWORD *)&unk_10AE80 + 2 * BYTE4(v174) + 1)
                  ^ *((_DWORD *)&unk_10BE80 + 2 * v74 + 1);
    LODWORD(v497) = v76 ^ *((_DWORD *)&unk_10AE80 + 2 * BYTE4(v174)) ^ *((_DWORD *)&unk_10BE80 + 2 * v74);
    v78 = qword_109778[BYTE1(v204) - 31];
    v79 = *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v183 + 1)
        ^ *((_DWORD *)&unk_10AE80 + 2 * v242 + 1)
        ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v295) + 1)
        ^ HIDWORD(v78);
    v80 = *((_DWORD *)&unk_109E80 + 2 * BYTE2(v199))
        ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v183)
        ^ *((_DWORD *)&unk_10AE80 + 2 * v242)
        ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v295))
        ^ v78;
    v81 = *((_DWORD *)&unk_109E80 + 2 * BYTE2(v199) + 1);
    v243 = &qword_109778[BYTE5(v208)];
    v200 = BYTE2(v236);
    v524 = BYTE4(v276);
    v523 = BYTE2(v180);
    v525 = (unsigned __int8)v236;
    v312 = &qword_109778[BYTE1(v236)];
    v82 = v80
        ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v255))
        ^ *((_DWORD *)&unk_10B680 + 2 * v73)
        ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v174));
    v83 = *((_DWORD *)&unk_10AE80 + 2 * v513);
    HIDWORD(v495) = v81
                  ^ v79
                  ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v255) + 1)
                  ^ *((_DWORD *)&unk_10B680 + 2 * v73 + 1)
                  ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v174) + 1);
    v84 = *((_DWORD *)&unk_10AE80 + 2 * v513 + 1);
    LODWORD(v495) = v82;
    v85 = *(v77 - 31);
    v508 = BYTE1(v180);
    v514 = (unsigned __int8)v180;
    v86 = BYTE2(v295);
    HIDWORD(v493) = *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v228) + 1)
                  ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(HIDWORD(v208)) + 1)
                  ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v204 + 1)
                  ^ HIDWORD(v85)
                  ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v255) + 1)
                  ^ v84
                  ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v174) + 1)
                  ^ *((_DWORD *)&unk_10BE80 + 2 * HIDWORD(v267) + 1);
    LODWORD(v493) = *((_DWORD *)&unk_10A680 + 2 * HIBYTE(HIDWORD(v208)))
                  ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v204)
                  ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v228))
                  ^ v85
                  ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v255))
                  ^ v83
                  ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v174))
                  ^ *((_DWORD *)&unk_10BE80 + 2 * HIDWORD(v267));
    v87 = *((_DWORD *)&unk_108680 + 2 * v518 + 1)
        ^ *((_DWORD *)&unk_109E80 + 2 * BYTE6(v208) + 1)
        ^ *((_DWORD *)&unk_108E80 + 2 * BYTE3(v231) + 1);
    v88 = *((_DWORD *)&unk_109E80 + 2 * BYTE6(v208))
        ^ *((_DWORD *)&unk_108680 + 2 * v518)
        ^ *((_DWORD *)&unk_108E80 + 2 * BYTE3(v231));
    v181 = BYTE1(v295);
    v519 = (unsigned __int8)v295;
    v89 = v88
        ^ *((_DWORD *)v215 - 62)
        ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v236))
        ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v174)
        ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v69));
    v516 = BYTE2(v284);
    v90 = v87
        ^ *((_DWORD *)v215 - 61)
        ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v236) + 1)
        ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v174 + 1)
        ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v69) + 1);
    v237 = (unsigned __int8)v284;
    v326 = &qword_109778[BYTE1(v284)];
    LODWORD(v414) = v89 ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE6(v276));
    HIDWORD(v414) = v90 ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE6(v276) + 1);
    v205 = BYTE2(v191);
    v331 = &qword_109778[BYTE5(v183)];
    v91 = *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v69)
        ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v255)
        ^ *((_DWORD *)v243 - 62)
        ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v309))
        ^ *((_DWORD *)&unk_109E80 + 2 * v200)
        ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v260))
        ^ *((_DWORD *)&unk_10B680 + 2 * BYTE5(v276));
    LOBYTE(v81) = v191;
    LODWORD(v284) = *((_DWORD *)&unk_10B680 + 2 * BYTE5(v276) + 1)
                  ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v309) + 1)
                  ^ *((_DWORD *)v243 - 61)
                  ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v255 + 1)
                  ^ *((_DWORD *)&unk_109E80 + 2 * v200 + 1)
                  ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v260) + 1)
                  ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v69 + 1);
    v192 = BYTE1(v191);
    HIDWORD(v267) = (unsigned __int8)v81;
    v92 = &qword_109778[BYTE1(v188)];
    HIDWORD(v276) = (unsigned __int8)v222;
    v346 = &qword_109778[BYTE1(v222)];
    HIDWORD(v420) = v284 ^ *((_DWORD *)&unk_10BE80 + 2 * v523 + 1);
    LODWORD(v420) = v91 ^ *((_DWORD *)&unk_10BE80 + 2 * v523);
    v93 = *(v312 - 31);
    v505 = &qword_109778[BYTE1(v303)];
    v296 = BYTE1(v249);
    LODWORD(v424) = *((_DWORD *)&unk_108E80 + 2 * v340)
                  ^ *((_DWORD *)&unk_108680 + 2 * BYTE4(v208))
                  ^ v93
                  ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v260))
                  ^ *((_DWORD *)&unk_10A680 + 2 * BYTE3(v267))
                  ^ *((_DWORD *)&unk_10AE80 + 2 * v524)
                  ^ *((_DWORD *)&unk_10B680 + 2 * v508)
                  ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE6(v284));
    HIDWORD(v424) = *((_DWORD *)&unk_10AE80 + 2 * v524 + 1)
                  ^ *((_DWORD *)v430 + 1)
                  ^ *((_DWORD *)&unk_108680 + 2 * BYTE4(v208) + 1)
                  ^ HIDWORD(v93)
                  ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v260) + 1)
                  ^ *((_DWORD *)&unk_10A680 + 2 * BYTE3(v267) + 1)
                  ^ *((_DWORD *)&unk_10B680 + 2 * v508 + 1)
                  ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE6(v284) + 1);
    v94 = *((_DWORD *)&unk_10A680 + 2 * v364);
    v365 = &qword_109778[BYTE1(v171)];
    v361 = &qword_109778[BYTE5(v231)];
    v428 = *((_QWORD *)&unk_10A680 + BYTE3(v276))
         ^ *((_QWORD *)&unk_108680 + v525)
         ^ *((_QWORD *)&unk_108E80 + HIBYTE(v195))
         ^ qword_109778[BYTE1(v260) - 31]
         ^ *((_QWORD *)&unk_109E80 + BYTE2(v267))
         ^ *((_QWORD *)&unk_10AE80 + v514)
         ^ *((_QWORD *)&unk_10B680 + BYTE5(v284))
         ^ *((_QWORD *)&unk_10BE80 + v86);
    v95 = qword_109778[BYTE1(v267) - 31];
    HIDWORD(v433) = HIDWORD(v95)
                  ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v260 + 1)
                  ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v249) + 1)
                  ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v276) + 1)
                  ^ *((_DWORD *)v438 + 1)
                  ^ *((_DWORD *)&unk_10AE80 + 2 * BYTE4(v284) + 1)
                  ^ *((_DWORD *)&unk_10B680 + 2 * v181 + 1)
                  ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v228) + 1);
    LODWORD(v433) = *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v249))
                  ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v260)
                  ^ v95
                  ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v276))
                  ^ v94
                  ^ *((_DWORD *)&unk_10AE80 + 2 * BYTE4(v284))
                  ^ *((_DWORD *)&unk_10B680 + 2 * v181)
                  ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v228));
    v434 = *((_QWORD *)&unk_108680 + (unsigned __int8)v267)
         ^ *((_QWORD *)&unk_108E80 + BYTE3(v208))
         ^ qword_109778[BYTE1(v276) - 31]
         ^ *((_QWORD *)&unk_109E80 + v516)
         ^ *((_QWORD *)&unk_10A680 + HIBYTE(HIDWORD(v183)))
         ^ *((_QWORD *)&unk_10AE80 + v519)
         ^ *((_QWORD *)&unk_10B680 + BYTE1(v228))
         ^ *((_QWORD *)&unk_10BE80 + BYTE2(v231));
    v96 = *(v326 - 31);
    v368 = *((_DWORD *)&unk_10BE80 + 2 * v205 + 1) ^ *((_DWORD *)&unk_108680 + 2 * v237 + 1) ^ *((_DWORD *)v502 + 1);
    v97 = *((_DWORD *)&unk_10BE80 + 2 * v205)
        ^ *((_DWORD *)&unk_108680 + 2 * v237)
        ^ *((_DWORD *)&unk_108E80 + 2 * v378);
    v206 = (_QWORD *)((char *)&unk_10BE80 + 8 * BYTE2(v249));
    v98 = *((_DWORD *)&unk_10B680 + 2 * v192)
        ^ *((_DWORD *)&unk_108680 + 2 * BYTE4(v183))
        ^ *((_DWORD *)&unk_108E80 + 2 * v388);
    v439 = *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v309) + 1)
         ^ HIDWORD(v96)
         ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v276 + 1)
         ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(HIDWORD(v174)) + 1)
         ^ *((_DWORD *)&unk_109E80 + 2 * BYTE6(v183) + 1)
         ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v188) + 1)
         ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v228 + 1)
         ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v231) + 1);
    v384 = *((_DWORD *)&unk_109E80 + 2 * BYTE2(v222));
    v216 = (int *)((char *)&unk_10BE80 + 8 * BYTE2(v208));
    v244 = (_DWORD *)((char *)&unk_108680 + 8 * (unsigned __int8)v303);
    LODWORD(v267) = (char *)&unk_108680 + 8 * BYTE4(v231);
    v99 = *((_DWORD *)&unk_10B680 + 2 * v192 + 1)
        ^ *((_DWORD *)&unk_108680 + 2 * BYTE4(v183) + 1)
        ^ *((_DWORD *)&unk_108E80 + 2 * v388 + 1);
    v387 = *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v276)
         ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(HIDWORD(v174)))
         ^ v96
         ^ *((_DWORD *)&unk_109E80 + 2 * BYTE6(v183))
         ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v188))
         ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v228)
         ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v231))
         ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v309));
    v100 = v97 ^ *((_DWORD *)v331 - 62);
    v101 = v368
         ^ *((_DWORD *)v331 - 61)
         ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v188) + 1)
         ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v222) + 1);
    v332 = v100 ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v188)) ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v222));
    v102 = v98 ^ *((_DWORD *)v92 - 62);
    v103 = v99 ^ *((_DWORD *)v92 - 61) ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v222) + 1);
    v261 = (_DWORD *)((char *)&unk_10A680 + 8 * BYTE3(v183));
    v223 = (_DWORD *)((char *)&unk_10AE80 + 8 * (unsigned __int8)v249);
    BYTE1(v100) = BYTE5(v174);
    HIDWORD(v174) = BYTE6(v174);
    LODWORD(v284) = v216[1];
    v250 = *v216;
    v217 = *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v171))
         ^ *((_DWORD *)&unk_108680 + 2 * HIDWORD(v276))
         ^ *((_DWORD *)&unk_108E80 + 2 * v396)
         ^ *((_DWORD *)v505 - 62)
         ^ *((_DWORD *)&unk_109E80 + 2 * BYTE6(v231))
         ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v195);
    v104 = *((_DWORD *)&unk_109E80 + 2 * BYTE2(v171) + 1)
         ^ v244[1]
         ^ *((_DWORD *)&unk_108E80 + 2 * v400 + 1)
         ^ *((_DWORD *)v361 - 61)
         ^ v261[1]
         ^ v223[1];
    v105 = *(_DWORD *)v267
         ^ *((_DWORD *)v365 - 62)
         ^ *((_DWORD *)&unk_10BE80 + 2 * v404)
         ^ *((_DWORD *)&unk_108E80 + 2 * v406)
         ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v183))
         ^ *((_DWORD *)&unk_10A680 + 2 * v411);
    LODWORD(v183) = *(_DWORD *)(v267 + 4)
                  ^ *((_DWORD *)v365 - 61)
                  ^ *((_DWORD *)&unk_10BE80 + 2 * v404 + 1)
                  ^ *((_DWORD *)&unk_108E80 + 2 * v406 + 1)
                  ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v183) + 1)
                  ^ *((_DWORD *)&unk_10A680 + 2 * v411 + 1);
    v106 = *((_DWORD *)&unk_109E80 + 2 * BYTE2(v171))
         ^ *v244
         ^ *((_DWORD *)&unk_108E80 + 2 * v400)
         ^ *((_DWORD *)v361 - 62)
         ^ *v261
         ^ *v223
         ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v208));
    v172 = *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v171) + 1)
         ^ *((_DWORD *)&unk_108680 + 2 * HIDWORD(v276) + 1)
         ^ *((_DWORD *)&unk_108E80 + 2 * v396 + 1)
         ^ *((_DWORD *)v505 - 61)
         ^ *((_DWORD *)&unk_109E80 + 2 * BYTE6(v231) + 1)
         ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v195 + 1)
         ^ *((_DWORD *)&unk_10B680 + 2 * v296 + 1);
    HIDWORD(v389) = v101
                  ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v231 + 1)
                  ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v309) + 1);
    LODWORD(v389) = v332
                  ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v231)
                  ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v309));
    HIDWORD(v392) = v103
                  ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v303) + 1)
                  ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v309 + 1)
                  ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v195) + 1);
    LODWORD(v392) = *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v303))
                  ^ v102
                  ^ v384
                  ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v309)
                  ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v195));
    *(_DWORD *)&v441[4] = v105
                        ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v208)
                        ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v100));
    v394 = *v206
         ^ *((_QWORD *)&unk_10B680 + BYTE1(v195))
         ^ *((_QWORD *)&unk_10A680 + HIBYTE(HIDWORD(v231)))
         ^ *((_QWORD *)&unk_108680 + (unsigned __int8)v188)
         ^ *((_QWORD *)&unk_10AE80 + HIDWORD(v267))
         ^ *((_QWORD *)&unk_108E80 + BYTE3(v174))
         ^ *(v346 - 31)
         ^ *((_QWORD *)&unk_109E80 + BYTE2(v303));
    HIDWORD(v401) = v172 ^ v284;
    LODWORD(v401) = v217 ^ *((_DWORD *)&unk_10B680 + 2 * v296) ^ v250;
    *(_DWORD *)&v441[8] = v183
                        ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v208 + 1)
                        ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v100) + 1);
    *(_DWORD *)v441 = v104
                    ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v208) + 1)
                    ^ *((_DWORD *)&unk_10BE80 + 2 * HIDWORD(v174) + 1);
    v407 = v106 ^ *((_DWORD *)&unk_10BE80 + 2 * HIDWORD(v174));
  }
  while ( v169 != 14 );
  v170 = -1;
  do
  {
    v193 = ~(_DWORD)v453;
    v196 = ~(_DWORD)v459;
    v288 = ~(_DWORD)v465;
    v238 = ~(_DWORD)v481;
    v251 = ~(_WORD)v484;
    v219 = ~BYTE1(v473);
    v256 = ~(_DWORD)v485;
    v268 = ~(_DWORD)v488;
    v184 = v442 ^ v170;
    v277 = ~DWORD2(v488);
    v189 = HIDWORD(v170) ^ 0x10000000 ^ HIDWORD(v447);
    v210 = HIDWORD(v170) ^ 0x70000000 ^ HIDWORD(v469);
    v201 = HIDWORD(v170) ^ 0x30000000 ^ HIDWORD(v459);
    v177 = HIDWORD(v170) ^ 0x20000000 ^ HIDWORD(v453);
    v229 = HIDWORD(v476) ^ HIDWORD(v170) ^ 0x90000000;
    v233 = HIDWORD(v480) ^ HIDWORD(v170) ^ 0xA0000000;
    v245 = HIDWORD(v481) ^ HIDWORD(v170) ^ 0xB0000000;
    v262 = HIDWORD(v485) ^ HIDWORD(v170) ^ 0xD0000000;
    v272 = DWORD1(v488) ^ HIDWORD(v170) ^ 0xE0000000;
    v281 = HIDWORD(v170) ^ 0xF0000000 ^ HIDWORD(v488);
    v304 = HIDWORD(v473) ^ (HIDWORD(v170) + 0x80000000);
    v297 = HIDWORD(v468) ^ HIDWORD(v170) ^ 0x60000000;
    v224 = ~(_DWORD)v476;
    v107 = (unsigned int)~(_DWORD)v484 >> 24;
    v108 = HIDWORD(v170) ^ 0x50000000 ^ HIDWORD(v465);
    v445 = (unsigned int)~(_DWORD)v485 >> 24;
    v362 = (unsigned int)~(_DWORD)v481 >> 24;
    LODWORD(v459) = (unsigned int)~(_DWORD)v488 >> 24;
    v486 = (unsigned int)~(_DWORD)v465 >> 24;
    v466 = (unsigned int)~DWORD2(v488) >> 24;
    v490 = (unsigned int)~(_DWORD)v468 >> 24;
    v310 = HIDWORD(v170) ^ 0xC0000000 ^ HIDWORD(v484);
    v285 = ~(_DWORD)v447;
    HIDWORD(v469) = (unsigned int)~(_DWORD)v447 >> 24;
    v333 = (unsigned int)~(_DWORD)v469 >> 24;
    v109 = (unsigned __int8)(BYTE4(v170) ^ BYTE4(v447));
    HIDWORD(v473) = HIBYTE(v262);
    v341 = (unsigned int)~(_DWORD)v473 >> 24;
    v477 = (unsigned int)~(_DWORD)v453 >> 24;
    v323 = HIBYTE(v281);
    HIDWORD(v480) = HIBYTE(v196);
    HIDWORD(v484) = HIBYTE(HIDWORD(v184));
    v482 = (unsigned int)~(_DWORD)v461 >> 24;
    v489 = HIBYTE(v189);
    v327 = HIBYTE(v177);
    v337 = HIBYTE(v201);
    v110 = HIDWORD(v461) ^ HIDWORD(v170) ^ 0x40000000;
    v111 = (_DWORD *)((char *)&unk_108680 + 8 * (unsigned __int8)~(_BYTE)v453);
    v385 = *((_DWORD *)&unk_10AE80 + 2 * v109 + 1);
    v371 = *((_DWORD *)&unk_10AE80 + 2 * v109);
    v366 = HIBYTE(v110);
    v112 = ~*v111 ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v210));
    v175 = 0xFFFFFF - HIDWORD(v170);
    v113 = (unsigned __int8)((unsigned __int16)(WORD2(v170) ^ WORD2(v459)) >> 8);
    v114 = ~((0xFFFFFF - HIDWORD(v170)) ^ 0x10000000) ^ v111[1] ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v210) + 1);
    v115 = (unsigned __int8)~(_BYTE)v447;
    v116 = &qword_109778[(unsigned __int8)((unsigned __int16)~(_WORD)v461 >> 8)];
    v320 = &qword_109778[BYTE1(v196)];
    v117 = *((_DWORD *)v116 - 61);
    v118 = *((_DWORD *)v116 - 62);
    LOWORD(v116) = v288;
    v357 = BYTE2(v288);
    v379 = BYTE2(v110);
    v289 = (unsigned __int8)(BYTE4(v170) ^ BYTE4(v453));
    v369 = BYTE2(v177);
    v119 = (unsigned __int8)v196;
    v492 = BYTE2(v196);
    HIDWORD(v459) = (unsigned __int8)v116;
    v347 = &qword_109778[BYTE1(v116)];
    v120 = v118
         ^ v112
         ^ *((_DWORD *)&unk_109E80 + 2 * (unsigned __int8)((unsigned int)~(_DWORD)v468 >> 16))
         ^ *((_DWORD *)&unk_10A680 + 2 * v107)
         ^ v371
         ^ *((_DWORD *)&unk_10B680 + 2 * v113);
    v121 = *((_DWORD *)&unk_10B680 + 2 * v113 + 1)
         ^ v385
         ^ v117
         ^ v114
         ^ *((_DWORD *)&unk_109E80 + 2 * (unsigned __int8)((unsigned int)~(_DWORD)v468 >> 16) + 1)
         ^ *((_DWORD *)&unk_10A680 + 2 * v107 + 1);
    v448 = (unsigned __int8)((unsigned __int16)(WORD2(v461) ^ WORD2(v170)) >> 8);
    v317 = (unsigned __int8)(BYTE4(v461) ^ BYTE4(v170));
    v386 = BYTE2(v201);
    v313 = (unsigned __int8)v201;
    v122 = *((_DWORD *)&unk_10B680 + 2 * (unsigned __int8)((unsigned __int16)(WORD2(v170) ^ WORD2(v453)) >> 8) + 1);
    v454 = (unsigned __int8)~(_BYTE)v461;
    v372 = (unsigned __int8)((unsigned int)~(_DWORD)v461 >> 16);
    v202 = v121 ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v108) + 1);
    v197 = v120 ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v108));
    v123 = ~(*((_DWORD *)&unk_108E80 + 2 * HIBYTE(v297)) ^ *((_DWORD *)&unk_108680 + 2 * v115)) ^ *((_DWORD *)v320 - 62);
    v124 = *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v297) + 1)
         ^ *((_DWORD *)&unk_108680 + 2 * v115 + 1)
         ^ (HIDWORD(v170) - 0xFFFFFF)
         ^ *((_DWORD *)v320 - 61);
    HIDWORD(v170) -= 0x1FFFFFF;
    v321 = (unsigned __int8)~(_BYTE)v468;
    v125 = (unsigned __int8)((unsigned int)~(_DWORD)v473 >> 16);
    v374 = BYTE2(v210);
    HIDWORD(v468) = (unsigned __int8)~(_BYTE)v469;
    v352 = &qword_109778[(unsigned __int8)((unsigned __int16)~(_WORD)v469 >> 8)];
    v178 = *((_DWORD *)&unk_109E80 + 2 * v357)
         ^ v123
         ^ *((_DWORD *)&unk_10A680 + 2 * v362)
         ^ *((_DWORD *)&unk_10AE80 + 2 * BYTE4(v184))
         ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v177))
         ^ *((_DWORD *)&unk_10BE80 + 2 * v379);
    v126 = *((_DWORD *)&unk_10AE80 + 2 * v289 + 1);
    v127 = *((_DWORD *)&unk_10AE80 + 2 * v289);
    v182 = v124
         ^ *((_DWORD *)&unk_109E80 + 2 * v357 + 1)
         ^ *((_DWORD *)&unk_10A680 + 2 * v362 + 1)
         ^ *((_DWORD *)&unk_10AE80 + 2 * BYTE4(v184) + 1)
         ^ v122
         ^ *((_DWORD *)&unk_10BE80 + 2 * v379 + 1);
    v128 = *(v347 - 31);
    v129 = BYTE1(v297);
    v290 = (unsigned __int8)v297;
    v130 = BYTE2(v304);
    LODWORD(v473) = (unsigned __int8)~(_BYTE)v473;
    v348 = &qword_109778[v219];
    v131 = *((_DWORD *)&unk_10B680 + 2 * v448)
         ^ *((_DWORD *)&unk_10A680 + 2 * v445)
         ^ ~*((_DWORD *)&unk_108680 + 2 * v119)
         ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v304))
         ^ v128
         ^ *((_DWORD *)&unk_109E80 + 2 * (unsigned __int8)((unsigned int)~(_DWORD)v469 >> 16))
         ^ v127;
    v132 = *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v304) + 1)
         ^ *((_DWORD *)&unk_108680 + 2 * v119 + 1)
         ^ v175
         ^ 0xDFFFFFFF
         ^ HIDWORD(v128)
         ^ *((_DWORD *)&unk_109E80 + 2 * (unsigned __int8)((unsigned int)~(_DWORD)v469 >> 16) + 1)
         ^ *((_DWORD *)&unk_10A680 + 2 * v445 + 1)
         ^ v126
         ^ *((_DWORD *)&unk_10B680 + 2 * v448 + 1);
    v449 = BYTE1(v210);
    v479 = (unsigned __int8)v210;
    v207 = v131 ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v297));
    v209 = v132 ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v297) + 1);
    v133 = qword_109778[(unsigned __int8)((unsigned __int16)~(_WORD)v468 >> 8) - 31];
    v134 = BYTE2(v229);
    v358 = &qword_109778[BYTE1(v224)];
    v135 = *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v229))
         ^ ~*((_DWORD *)&unk_108680 + 2 * v454)
         ^ v133
         ^ *((_DWORD *)&unk_109E80 + 2 * v125)
         ^ *((_DWORD *)&unk_10A680 + 2 * v459)
         ^ *((_DWORD *)&unk_10AE80 + 2 * v313);
    v136 = *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v229) + 1)
         ^ *((_DWORD *)&unk_108680 + 2 * v454 + 1)
         ^ v175
         ^ 0xCFFFFFFF
         ^ HIDWORD(v133)
         ^ *((_DWORD *)&unk_109E80 + 2 * v125 + 1)
         ^ *((_DWORD *)&unk_10A680 + 2 * v459 + 1);
    v451 = BYTE1(v304);
    v298 = (unsigned __int8)v304;
    v455 = BYTE2(v233);
    v457 = (unsigned __int8)((unsigned int)~(_DWORD)v484 >> 16);
    LODWORD(v459) = BYTE1(v229);
    v305 = (unsigned __int8)v229;
    v211 = v135 ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v108)) ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v210));
    v218 = *((_DWORD *)&unk_10AE80 + 2 * v313 + 1)
         ^ v136
         ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v108) + 1)
         ^ *((_DWORD *)&unk_10BE80 + 2 * v374 + 1);
    v137 = *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v233))
         ^ ~*((_DWORD *)&unk_108680 + 2 * HIDWORD(v459))
         ^ *((_DWORD *)v352 - 62)
         ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v224));
    v138 = *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v233) + 1)
         ^ *((_DWORD *)&unk_108680 + 2 * HIDWORD(v459) + 1)
         ^ ~(v175 ^ 0x40000000)
         ^ *((_DWORD *)v352 - 61)
         ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v224) + 1);
    HIDWORD(v459) = BYTE2(v245);
    v462 = (unsigned __int8)v224;
    v503 = HIBYTE(v224);
    LODWORD(v484) = (unsigned __int8)v238;
    v443 = &qword_109778[BYTE1(v238)];
    v225 = *((_DWORD *)&unk_10B680 + 2 * v129)
         ^ v137
         ^ *((_DWORD *)&unk_10A680 + 2 * v466)
         ^ *((_DWORD *)&unk_10AE80 + 2 * v317)
         ^ *((_DWORD *)&unk_10BE80 + 2 * v130);
    v230 = v138
         ^ *((_DWORD *)&unk_10A680 + 2 * v466 + 1)
         ^ *((_DWORD *)&unk_10AE80 + 2 * v317 + 1)
         ^ *((_DWORD *)&unk_10B680 + 2 * v129 + 1)
         ^ *((_DWORD *)&unk_10BE80 + 2 * v130 + 1);
    v139 = BYTE1(v233);
    v314 = (unsigned __int8)v233;
    v467 = (unsigned __int8)~(_BYTE)v480;
    v509 = (unsigned int)~(_DWORD)v480 >> 24;
    v487 = (unsigned __int8)v251;
    v446 = &qword_109778[HIBYTE(v251)];
    LODWORD(v468) = BYTE1(v245);
    v491 = (unsigned __int8)v245;
    v483 = BYTE2(v262);
    v232 = *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v108)
         ^ ~*((_DWORD *)&unk_108680 + 2 * v321)
         ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v245))
         ^ *((_DWORD *)v348 - 62)
         ^ *((_DWORD *)&unk_109E80 + 2 * (unsigned __int8)((unsigned int)~(_DWORD)v480 >> 16))
         ^ *((_DWORD *)&unk_10A680 + 2 * BYTE3(v184))
         ^ *((_DWORD *)&unk_10B680 + 2 * v449)
         ^ *((_DWORD *)&unk_10BE80 + 2 * v134);
    v140 = *((_DWORD *)&unk_10AE80 + 2 * v290 + 1);
    v141 = *((_DWORD *)&unk_10AE80 + 2 * v290);
    v234 = *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v108 + 1)
         ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v245) + 1)
         ^ *((_DWORD *)&unk_108680 + 2 * v321 + 1)
         ^ ~(v175 ^ 0x50000000)
         ^ *((_DWORD *)v348 - 61)
         ^ *((_DWORD *)&unk_109E80 + 2 * (unsigned __int8)((unsigned int)~(_DWORD)v480 >> 16) + 1)
         ^ *((_DWORD *)&unk_10A680 + 2 * BYTE3(v184) + 1)
         ^ *((_DWORD *)&unk_10B680 + 2 * v449 + 1)
         ^ *((_DWORD *)&unk_10BE80 + 2 * v134 + 1);
    v291 = (unsigned __int8)v256;
    v142 = *(v358 - 31);
    v450 = &qword_109778[BYTE1(v256)];
    v322 = (unsigned __int8)v268;
    v143 = ~*((_DWORD *)&unk_108680 + 2 * HIDWORD(v468))
         ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v310))
         ^ v142
         ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v238))
         ^ *((_DWORD *)&unk_10A680 + 2 * HIDWORD(v469))
         ^ v141
         ^ *((_DWORD *)&unk_10B680 + 2 * v451);
    v144 = v140
         ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v310) + 1)
         ^ v175
         ^ 0x9FFFFFFF
         ^ *((_DWORD *)&unk_108680 + 2 * HIDWORD(v468) + 1)
         ^ HIDWORD(v142)
         ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v238) + 1)
         ^ *((_DWORD *)&unk_10A680 + 2 * HIDWORD(v469) + 1)
         ^ *((_DWORD *)&unk_10B680 + 2 * v451 + 1);
    v452 = &qword_109778[BYTE1(v268)];
    v470 = BYTE2(v184);
    v246 = v144 ^ *((_DWORD *)&unk_10BE80 + 2 * v455 + 1);
    v239 = v143 ^ *((_DWORD *)&unk_10BE80 + 2 * v455);
    v145 = *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v262))
         ^ ~*((_DWORD *)&unk_108680 + 2 * v473)
         ^ LODWORD(qword_109778[(unsigned __int8)((unsigned __int16)~(_WORD)v480 >> 8) - 31]);
    LOBYTE(v135) = v262;
    v263 = BYTE1(v262);
    v349 = (unsigned __int8)v135;
    v146 = *((_DWORD *)&unk_108E80 + 2 * HIDWORD(v473) + 1)
         ^ *((_DWORD *)&unk_108680 + 2 * v473 + 1)
         ^ v175
         ^ 0x8FFFFFFF
         ^ *((_DWORD *)&qword_109778[(unsigned __int8)((unsigned __int16)~(_WORD)v480 >> 8) - 30] - 1)
         ^ *((_DWORD *)&unk_109E80 + 2 * v457 + 1)
         ^ *((_DWORD *)&unk_10A680 + 2 * v477 + 1);
    v474 = BYTE2(v281);
    v318 = BYTE1(v272);
    v506 = (unsigned __int8)v272;
    v353 = BYTE1(v281);
    v375 = (unsigned __int8)v281;
    v359 = BYTE2(v189);
    v147 = *((_DWORD *)&unk_10AE80 + 2 * v479 + 1) ^ v146 ^ *((_DWORD *)&unk_10B680 + 2 * v459 + 1);
    v380 = BYTE1(v189);
    v363 = (unsigned __int8)v277;
    v148 = *((_DWORD *)&unk_10AE80 + 2 * v298 + 1);
    v456 = &qword_109778[BYTE1(v277)];
    v190 = v145
         ^ *((_DWORD *)&unk_109E80 + 2 * v457)
         ^ *((_DWORD *)&unk_10A680 + 2 * v477)
         ^ *((_DWORD *)&unk_10AE80 + 2 * v479)
         ^ *((_DWORD *)&unk_10B680 + 2 * v459)
         ^ *((_DWORD *)&unk_10BE80 + 2 * HIDWORD(v459));
    v252 = v147 ^ *((_DWORD *)&unk_10BE80 + 2 * HIDWORD(v459) + 1);
    v149 = *((_DWORD *)&unk_10AE80 + 2 * v298);
    v150 = *(v443 - 31);
    v282 = BYTE2(v285);
    v458 = &qword_109778[BYTE1(v285)];
    v475 = BYTE6(v184);
    v286 = BYTE5(v184);
    v299 = (unsigned __int8)v184;
    v444 = &qword_109778[BYTE1(v184)];
    LODWORD(v184) = *((_DWORD *)&unk_109E80 + 2 * BYTE2(v256))
                  ^ ~*((_DWORD *)&unk_108680 + 2 * v462)
                  ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v272))
                  ^ v150
                  ^ *((_DWORD *)&unk_10A680 + 2 * HIDWORD(v480))
                  ^ v149
                  ^ *((_DWORD *)&unk_10B680 + 2 * v139)
                  ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v310));
    HIDWORD(v184) = *((_DWORD *)&unk_109E80 + 2 * BYTE2(v256) + 1)
                  ^ ~(v175 ^ 0x80000000)
                  ^ *((_DWORD *)&unk_108680 + 2 * v462 + 1)
                  ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v272) + 1)
                  ^ HIDWORD(v150)
                  ^ *((_DWORD *)&unk_10A680 + 2 * HIDWORD(v480) + 1)
                  ^ v148
                  ^ *((_DWORD *)&unk_10B680 + 2 * v139 + 1)
                  ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v310) + 1);
    v151 = *(v446 - 31);
    v478 = BYTE2(v193);
    v460 = &qword_109778[BYTE1(v193)];
    v257 = ~(v175 ^ 0x90000000)
         ^ *((_DWORD *)&unk_108680 + 2 * v467 + 1)
         ^ *((_DWORD *)&unk_108E80 + 2 * v323 + 1)
         ^ HIDWORD(v151)
         ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v268) + 1)
         ^ *((_DWORD *)&unk_10A680 + 2 * v482 + 1)
         ^ *((_DWORD *)&unk_10AE80 + 2 * v305 + 1)
         ^ *((_DWORD *)&unk_10B680 + 2 * v468 + 1)
         ^ *((_DWORD *)&unk_10BE80 + 2 * v483 + 1);
    v194 = ~*((_DWORD *)&unk_108680 + 2 * v467)
         ^ *((_DWORD *)&unk_108E80 + 2 * v323)
         ^ v151
         ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v268))
         ^ *((_DWORD *)&unk_10A680 + 2 * v482)
         ^ *((_DWORD *)&unk_10AE80 + 2 * v305)
         ^ *((_DWORD *)&unk_10B680 + 2 * v468)
         ^ *((_DWORD *)&unk_10BE80 + 2 * v483);
    v152 = *(v450 - 31);
    v463 = *((_DWORD *)&unk_109E80 + 2 * v470);
    v464 = *((_DWORD *)&unk_109E80 + 2 * v470 + 1);
    v471 = *((_DWORD *)&unk_10B680 + 2 * v263);
    v472 = *((_DWORD *)&unk_10B680 + 2 * v263 + 1);
    v269 = *((_DWORD *)&unk_10AE80 + 2 * v314 + 1)
         ^ HIDWORD(v152)
         ^ *((_DWORD *)&unk_108E80 + 2 * HIDWORD(v484) + 1)
         ^ *((_DWORD *)&unk_108680 + 2 * v484 + 1)
         ^ ~(v175 ^ 0xA0000000)
         ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v277) + 1)
         ^ *((_DWORD *)&unk_10A680 + 2 * v486 + 1)
         ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v310) + 1)
         ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v272) + 1);
    v264 = ~*((_DWORD *)&unk_108680 + 2 * v484)
         ^ *((_DWORD *)&unk_108E80 + 2 * HIDWORD(v484))
         ^ v152
         ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v277))
         ^ *((_DWORD *)&unk_10A680 + 2 * v486)
         ^ *((_DWORD *)&unk_10AE80 + 2 * v314)
         ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v310))
         ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v272));
    v273 = ~*((_DWORD *)&unk_108680 + 2 * v487)
         ^ *((_DWORD *)&unk_108E80 + 2 * v489)
         ^ *((_DWORD *)v452 - 62)
         ^ v463
         ^ *((_DWORD *)&unk_10A680 + 2 * v490)
         ^ *((_DWORD *)&unk_10AE80 + 2 * v491)
         ^ v471
         ^ *((_DWORD *)&unk_10BE80 + 2 * v474);
    v278 = ~(v175 ^ 0xB0000000)
         ^ *((_DWORD *)&unk_108680 + 2 * v487 + 1)
         ^ *((_DWORD *)&unk_108E80 + 2 * v489 + 1)
         ^ *((_DWORD *)v452 - 61)
         ^ v464
         ^ *((_DWORD *)&unk_10A680 + 2 * v490 + 1)
         ^ *((_DWORD *)&unk_10AE80 + 2 * v491 + 1)
         ^ v472
         ^ *((_DWORD *)&unk_10BE80 + 2 * v474 + 1);
    v153 = (_DWORD *)((char *)&unk_109E80 + 8 * v478);
    v154 = *(v458 - 31);
    v155 = ~(v175 ^ 0xC0000000) ^ *((_DWORD *)&unk_108680 + 2 * v291 + 1) ^ *((_DWORD *)&unk_108E80 + 2 * v327 + 1);
    v156 = ~(v175 ^ 0xD0000000) ^ *((_DWORD *)&unk_108680 + 2 * v322 + 1) ^ *((_DWORD *)&unk_108E80 + 2 * v337 + 1);
    v157 = ~(v175 ^ 0xE0000000)
         ^ *((_DWORD *)&unk_108680 + 2 * v363 + 1)
         ^ *((_DWORD *)&unk_108E80 + 2 * v366 + 1)
         ^ HIDWORD(v154)
         ^ *((_DWORD *)&unk_109E80 + 2 * v492 + 1)
         ^ *((_DWORD *)&unk_10A680 + 2 * v503 + 1)
         ^ *((_DWORD *)&unk_10AE80 + 2 * v506 + 1)
         ^ *((_DWORD *)&unk_10B680 + 2 * v286 + 1);
    v158 = ~(v175 ^ 0xF0000000)
         ^ *((_DWORD *)&unk_108680 + 2 * v299 + 1)
         ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v108) + 1)
         ^ *((_DWORD *)v460 - 61)
         ^ *((_DWORD *)&unk_109E80 + 2 * v372 + 1)
         ^ *((_DWORD *)&unk_10A680 + 2 * v509 + 1)
         ^ *((_DWORD *)&unk_10AE80 + 2 * v375 + 1)
         ^ *((_DWORD *)&unk_10B680 + 2 * v380 + 1);
    v173 = ~*((_DWORD *)&unk_108680 + 2 * v291)
         ^ *((_DWORD *)&unk_108E80 + 2 * v327)
         ^ *((_DWORD *)v456 - 62)
         ^ *((_DWORD *)&unk_109E80 + 2 * v282)
         ^ *((_DWORD *)&unk_10A680 + 2 * v333)
         ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v310)
         ^ *((_DWORD *)&unk_10B680 + 2 * v318)
         ^ *((_DWORD *)&unk_10BE80 + 2 * v475);
    v176 = ~*((_DWORD *)&unk_108680 + 2 * v322)
         ^ *((_DWORD *)&unk_108E80 + 2 * v337)
         ^ *((_DWORD *)v444 - 62)
         ^ *v153
         ^ *((_DWORD *)&unk_10A680 + 2 * v341)
         ^ *((_DWORD *)&unk_10AE80 + 2 * v349)
         ^ *((_DWORD *)&unk_10B680 + 2 * v353)
         ^ *((_DWORD *)&unk_10BE80 + 2 * v359);
    v300 = ~*((_DWORD *)&unk_108680 + 2 * v299)
         ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v108))
         ^ *((_DWORD *)v460 - 62)
         ^ *((_DWORD *)&unk_109E80 + 2 * v372)
         ^ *((_DWORD *)&unk_10A680 + 2 * v509)
         ^ *((_DWORD *)&unk_10AE80 + 2 * v375)
         ^ *((_DWORD *)&unk_10B680 + 2 * v380)
         ^ *((_DWORD *)&unk_10BE80 + 2 * v386);
    v287 = ~*((_DWORD *)&unk_108680 + 2 * v363)
         ^ *((_DWORD *)&unk_108E80 + 2 * v366)
         ^ v154
         ^ *((_DWORD *)&unk_109E80 + 2 * v492)
         ^ *((_DWORD *)&unk_10A680 + 2 * v503)
         ^ *((_DWORD *)&unk_10AE80 + 2 * v506)
         ^ *((_DWORD *)&unk_10B680 + 2 * v286)
         ^ *((_DWORD *)&unk_10BE80 + 2 * v369);
    v159 = v155
         ^ *((_DWORD *)v456 - 61)
         ^ *((_DWORD *)&unk_109E80 + 2 * v282 + 1)
         ^ *((_DWORD *)&unk_10A680 + 2 * v333 + 1)
         ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v310 + 1)
         ^ *((_DWORD *)&unk_10B680 + 2 * v318 + 1)
         ^ *((_DWORD *)&unk_10BE80 + 2 * v475 + 1);
    v283 = v156
         ^ *((_DWORD *)v444 - 61)
         ^ v153[1]
         ^ *((_DWORD *)&unk_10A680 + 2 * v341 + 1)
         ^ *((_DWORD *)&unk_10AE80 + 2 * v349 + 1)
         ^ *((_DWORD *)&unk_10B680 + 2 * v353 + 1)
         ^ *((_DWORD *)&unk_10BE80 + 2 * v359 + 1);
    v292 = v157 ^ *((_DWORD *)&unk_10BE80 + 2 * v369 + 1);
    v306 = v158 ^ *((_DWORD *)&unk_10BE80 + 2 * v386 + 1);
    v160 = (_QWORD *)((char *)&unk_10BE80 + 8 * BYTE2(v230));
    v442 = *((_QWORD *)&unk_108680 + (unsigned __int8)v197)
         ^ *((_QWORD *)&unk_108E80 + HIBYTE(v246))
         ^ qword_109778[BYTE1(v211) - 31]
         ^ *((_QWORD *)&unk_109E80 + BYTE2(v232))
         ^ *((_QWORD *)&unk_10A680 + HIBYTE(v273))
         ^ *((_QWORD *)&unk_10AE80 + (unsigned __int8)v182)
         ^ *((_QWORD *)&unk_10B680 + BYTE1(v209))
         ^ *v160;
    v447 = *((_QWORD *)&unk_108680 + (unsigned __int8)v207)
         ^ *((_QWORD *)&unk_108E80 + HIBYTE(v252))
         ^ qword_109778[BYTE1(v225) - 31]
         ^ *((_QWORD *)&unk_109E80 + BYTE2(v239))
         ^ *((_QWORD *)&unk_10A680 + HIBYTE(v173))
         ^ *((_QWORD *)&unk_10AE80 + (unsigned __int8)v202)
         ^ *((_QWORD *)&unk_10B680 + BYTE1(v218))
         ^ *((_QWORD *)&unk_10BE80 + BYTE2(v234));
    v453 = *((_QWORD *)&unk_108E80 + HIBYTE(HIDWORD(v184)))
         ^ *((_QWORD *)&unk_108680 + (unsigned __int8)v211)
         ^ qword_109778[BYTE1(v232) - 31]
         ^ *((_QWORD *)&unk_109E80 + BYTE2(v190))
         ^ *((_QWORD *)&unk_10A680 + HIBYTE(v176))
         ^ *((_QWORD *)&unk_10AE80 + (unsigned __int8)v209)
         ^ *((_QWORD *)&unk_10B680 + BYTE1(v230))
         ^ *((_QWORD *)&unk_10BE80 + BYTE2(v246));
    v459 = *((_QWORD *)&unk_10A680 + HIBYTE(v287))
         ^ *((_QWORD *)&unk_108E80 + HIBYTE(v257))
         ^ *((_QWORD *)&unk_108680 + (unsigned __int8)v225)
         ^ qword_109778[BYTE1(v239) - 31]
         ^ *((_QWORD *)&unk_109E80 + BYTE2(v184))
         ^ *((_QWORD *)&unk_10AE80 + (unsigned __int8)v218)
         ^ *((_QWORD *)&unk_10B680 + BYTE1(v234))
         ^ *((_QWORD *)&unk_10BE80 + BYTE2(v252));
    v461 = *((_QWORD *)&unk_10A680 + HIBYTE(v300))
         ^ *((_QWORD *)&unk_108E80 + HIBYTE(v269))
         ^ *((_QWORD *)&unk_108680 + (unsigned __int8)v232)
         ^ qword_109778[BYTE1(v190) - 31]
         ^ *((_QWORD *)&unk_109E80 + BYTE2(v194))
         ^ *((_QWORD *)&unk_10AE80 + (unsigned __int8)v230)
         ^ *((_QWORD *)&unk_10B680 + BYTE1(v246))
         ^ *((_QWORD *)&unk_10BE80 + BYTE6(v184));
    v465 = *((_QWORD *)&unk_108680 + (unsigned __int8)v239)
         ^ *((_QWORD *)&unk_108E80 + HIBYTE(v278))
         ^ qword_109778[BYTE1(v184) - 31]
         ^ *((_QWORD *)&unk_109E80 + BYTE2(v264))
         ^ *((_QWORD *)&unk_10A680 + HIBYTE(v178))
         ^ *((_QWORD *)&unk_10AE80 + (unsigned __int8)v234)
         ^ *((_QWORD *)&unk_10B680 + BYTE1(v252))
         ^ *((_QWORD *)&unk_10BE80 + BYTE2(v257));
    v468 = *((_QWORD *)&unk_10AE80 + (unsigned __int8)v246)
         ^ *((_QWORD *)&unk_10A680 + HIBYTE(v197))
         ^ *((_QWORD *)&unk_108E80 + HIBYTE(v159))
         ^ *((_QWORD *)&unk_108680 + (unsigned __int8)v190)
         ^ qword_109778[BYTE1(v194) - 31]
         ^ *((_QWORD *)&unk_109E80 + BYTE2(v273))
         ^ *((_QWORD *)&unk_10B680 + BYTE5(v184))
         ^ *((_QWORD *)&unk_10BE80 + BYTE2(v269));
    v469 = *((_QWORD *)&unk_10AE80 + (unsigned __int8)v252)
         ^ *((_QWORD *)&unk_10A680 + HIBYTE(v207))
         ^ qword_109778[BYTE1(v264) - 31]
         ^ *((_QWORD *)&unk_108680 + (unsigned __int8)v184)
         ^ *((_QWORD *)&unk_108E80 + HIBYTE(v283))
         ^ *((_QWORD *)&unk_109E80 + BYTE2(v173))
         ^ *((_QWORD *)&unk_10B680 + BYTE1(v257))
         ^ *((_QWORD *)&unk_10BE80 + BYTE2(v278));
    v473 = *((_QWORD *)&unk_108E80 + HIBYTE(v292))
         ^ *((_QWORD *)&unk_108680 + (unsigned __int8)v194)
         ^ qword_109778[BYTE1(v273) - 31]
         ^ *((_QWORD *)&unk_109E80 + BYTE2(v176))
         ^ *((_QWORD *)&unk_10A680 + HIBYTE(v211))
         ^ *((_QWORD *)&unk_10AE80 + BYTE4(v184))
         ^ *((_QWORD *)&unk_10B680 + BYTE1(v269))
         ^ *((_QWORD *)&unk_10BE80 + BYTE2(v159));
    v476 = *((_QWORD *)&unk_108E80 + HIBYTE(v306))
         ^ *((_QWORD *)&unk_108680 + (unsigned __int8)v264)
         ^ qword_109778[BYTE1(v173) - 31]
         ^ *((_QWORD *)&unk_109E80 + BYTE2(v287))
         ^ *((_QWORD *)&unk_10A680 + HIBYTE(v225))
         ^ *((_QWORD *)&unk_10AE80 + (unsigned __int8)v257)
         ^ *((_QWORD *)&unk_10B680 + BYTE1(v278))
         ^ *((_QWORD *)&unk_10BE80 + BYTE2(v283));
    v480 = *((_QWORD *)&unk_108E80 + HIBYTE(v182))
         ^ *((_QWORD *)&unk_108680 + (unsigned __int8)v273)
         ^ qword_109778[BYTE1(v176) - 31]
         ^ *((_QWORD *)&unk_109E80 + BYTE2(v300))
         ^ *((_QWORD *)&unk_10A680 + HIBYTE(v232))
         ^ *((_QWORD *)&unk_10AE80 + (unsigned __int8)v269)
         ^ *((_QWORD *)&unk_10B680 + BYTE1(v159))
         ^ *((_QWORD *)&unk_10BE80 + BYTE2(v292));
    v481 = *((_QWORD *)&unk_10B680 + BYTE1(v283))
         ^ qword_109778[BYTE1(v287) - 31]
         ^ *((_QWORD *)&unk_108E80 + HIBYTE(v202))
         ^ *((_QWORD *)&unk_108680 + (unsigned __int8)v173)
         ^ *((_QWORD *)&unk_109E80 + BYTE2(v178))
         ^ *((_QWORD *)&unk_10A680 + HIBYTE(v239))
         ^ *((_QWORD *)&unk_10AE80 + (unsigned __int8)v278)
         ^ *((_QWORD *)&unk_10BE80 + BYTE2(v306));
    v484 = *((_QWORD *)&unk_108680 + (unsigned __int8)v176)
         ^ *((_QWORD *)&unk_108E80 + HIBYTE(v209))
         ^ qword_109778[BYTE1(v300) - 31]
         ^ *((_QWORD *)&unk_109E80 + BYTE2(v197))
         ^ *((_QWORD *)&unk_10A680 + HIBYTE(v190))
         ^ *((_QWORD *)&unk_10AE80 + (unsigned __int8)v159)
         ^ *((_QWORD *)&unk_10B680 + BYTE1(v292))
         ^ *((_QWORD *)&unk_10BE80 + BYTE2(v182));
    v485 = *((_QWORD *)&unk_109E80 + BYTE2(v207))
         ^ *((_QWORD *)&unk_108E80 + HIBYTE(v218))
         ^ *((_QWORD *)&unk_108680 + (unsigned __int8)v287)
         ^ qword_109778[BYTE1(v178) - 31]
         ^ *((_QWORD *)&unk_10A680 + BYTE3(v184))
         ^ *((_QWORD *)&unk_10AE80 + (unsigned __int8)v283)
         ^ *((_QWORD *)&unk_10B680 + BYTE1(v306))
         ^ *((_QWORD *)&unk_10BE80 + BYTE2(v202));
    *((_QWORD *)&v488 + 1) = *((_QWORD *)&unk_108E80 + HIBYTE(v234))
                           ^ *((_QWORD *)&unk_108680 + (unsigned __int8)v178)
                           ^ qword_109778[BYTE1(v207) - 31]
                           ^ *((_QWORD *)&unk_109E80 + BYTE2(v225))
                           ^ *((_QWORD *)&unk_10A680 + HIBYTE(v264))
                           ^ *((_QWORD *)&unk_10AE80 + (unsigned __int8)(v158 ^ *((_BYTE *)&unk_10BE80 + 8 * v386 + 4)))
                           ^ *((_QWORD *)&unk_10B680 + BYTE1(v202))
                           ^ *((_QWORD *)&unk_10BE80 + BYTE2(v218));
    *(_QWORD *)&v488 = *((_QWORD *)&unk_108E80 + HIBYTE(v230))
                     ^ *((_QWORD *)&unk_108680 + (unsigned __int8)v300)
                     ^ qword_109778[BYTE1(v197) - 31]
                     ^ *((_QWORD *)&unk_109E80 + BYTE2(v211))
                     ^ *((_QWORD *)&unk_10A680 + HIBYTE(v194))
                     ^ *((_QWORD *)&unk_10AE80 + (unsigned __int8)(v157 ^ *((_BYTE *)&unk_10BE80 + 8 * v369 + 4)))
                     ^ *((_QWORD *)&unk_10B680 + BYTE1(v182))
                     ^ *((_QWORD *)&unk_10BE80 + BYTE2(v209));
    v161 = HIDWORD(v170) == -234881025;
    if ( HIDWORD(v170) == -234881025 )
      v161 = 1;
  }
  while ( !v161 );
  dest[7] ^= v469 ^ v433;
  dest[8] ^= v473 ^ v434;
  LODWORD(dest[9]) ^= v476 ^ v387;
  HIDWORD(dest[9]) ^= HIDWORD(v476) ^ v439;
  dest[10] ^= v480 ^ v389;
  dest[11] ^= v481 ^ v392;
  dest[0] ^= v497 ^ v442;
  dest[1] ^= v495 ^ v447;
  dest[2] ^= v493 ^ v453;
  dest[12] ^= v484 ^ v394;
  dest[13] ^= v485 ^ v401;
  LODWORD(dest[14]) ^= v488 ^ v407;
  *(_QWORD *)((char *)&dest[14] + 4) ^= *(_QWORD *)((char *)&v488 + 4) ^ *(_QWORD *)v441;
  v5 = 0;
  HIDWORD(dest[15]) ^= HIDWORD(v488) ^ *(_DWORD *)&v441[8];
  dest[3] ^= v414 ^ v459;
  dest[5] ^= v424 ^ v465;
  dest[4] ^= v420 ^ v461;
  dest[6] ^= v428 ^ v468;
  v162 = *((_DWORD *)a1 + 66);
  v163 = *((_DWORD *)a1 + 67);
  *((_DWORD *)a1 + 66) = v162 + 1;
  v164 = __CFADD__(v162, 1) + v163;
  v6 = na;
  *((_DWORD *)a1 + 67) = v164;
  if ( na )
    goto LABEL_5;
LABEL_17:
  v3 = v5;
LABEL_18:
  result = memcpy(v528, dest, 0x80u);
  *((_DWORD *)a1 + 32) = v3;
  return result;
}
