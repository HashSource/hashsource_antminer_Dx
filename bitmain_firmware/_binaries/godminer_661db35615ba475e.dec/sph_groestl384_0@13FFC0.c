void *__fastcall sph_groestl384_0(__int64 *a1, char *a2, size_t a3)
{
  int v3; // r5
  size_t v4; // r4
  int v5; // r9
  size_t i; // r5
  size_t v7; // r3
  char *v8; // r0
  unsigned int v9; // lr
  _QWORD *v10; // r0
  _QWORD *v11; // r12
  _DWORD *v12; // r0
  _QWORD *v13; // r12
  _QWORD *v14; // r1
  int v15; // r8
  int v16; // r9
  _QWORD *v17; // r11
  int v18; // r4
  int v19; // lr
  int v20; // r2
  int v21; // r3
  _QWORD *v22; // r6
  _QWORD *v23; // r12
  int v24; // r2
  int v25; // r10
  int v26; // r3
  int v27; // r5
  int v28; // r6
  int v29; // r8
  int v30; // r1
  int v31; // r8
  int v32; // r3
  int v33; // r2
  int v34; // r7
  int v35; // r8
  _DWORD *v36; // r1
  int v37; // lr
  int v38; // r2
  int v39; // r9
  int v40; // r12
  _QWORD *v41; // r8
  int v42; // r12
  int v43; // r2
  int v44; // r0
  int v45; // r10
  _QWORD *v46; // r6
  int v47; // r11
  unsigned int v48; // r11
  int v49; // r9
  _QWORD *v50; // r10
  int v51; // r4
  int v52; // r10
  int v53; // r2
  int v54; // r12
  int v55; // r5
  int v56; // r12
  int v57; // lr
  int v58; // lr
  int v59; // r12
  int v60; // r0
  int v61; // r4
  int v62; // r2
  int v63; // r3
  int v64; // r2
  int v65; // r3
  int v66; // r1
  int v67; // r2
  int v68; // r12
  int v69; // r5
  int v70; // r4
  int v71; // r12
  unsigned int v72; // r0
  int v73; // r2
  unsigned int v74; // r2
  unsigned int v75; // r10
  _QWORD *v76; // r12
  _QWORD *v77; // r11
  int v78; // r6
  _DWORD *v79; // lr
  int v80; // r9
  int v81; // r7
  int v82; // r5
  _QWORD *v83; // r4
  _QWORD *v84; // r12
  _DWORD *v85; // r0
  int v86; // r8
  int v87; // r6
  int v88; // r3
  int v89; // lr
  int v90; // r9
  int v91; // r3
  int v92; // r2
  int v93; // r10
  int v94; // r2
  int v95; // r3
  int v96; // r12
  int v97; // r7
  int v98; // r8
  int v99; // r3
  int v100; // r12
  int v101; // r2
  int v102; // r0
  int v103; // r4
  int v104; // r3
  int v105; // r0
  int v106; // r2
  int v107; // r3
  __int64 v108; // r0
  __int64 v109; // r0
  int v110; // r3
  int v111; // lr
  int v112; // r8
  int v113; // r12
  __int64 v114; // r0
  int v115; // r4
  __int64 v116; // r10
  int v117; // r6
  int v118; // r9
  __int64 v119; // r2
  int v120; // r5
  int v121; // r12
  __int64 v122; // r2
  __int64 v123; // r6
  int v124; // r9
  int v125; // r5
  int v126; // r4
  int v127; // r4
  int v128; // r12
  int v129; // r8
  int v130; // r12
  _DWORD *v131; // r11
  unsigned int v132; // r5
  unsigned int v133; // lr
  unsigned int v134; // r0
  unsigned int v135; // r12
  _DWORD *v136; // r3
  _QWORD *v137; // r4
  _QWORD *v138; // r5
  unsigned int v139; // r2
  int v140; // r6
  _DWORD *v141; // r1
  _QWORD *v142; // r0
  int v143; // r7
  int v144; // r9
  int v145; // r10
  int v146; // r1
  int v147; // r3
  int v148; // r8
  int v149; // r5
  _DWORD *v150; // r1
  int v151; // r2
  int *v152; // r3
  int v153; // r2
  int v154; // r12
  int v155; // r3
  int v156; // lr
  bool v157; // zf
  int v158; // r10
  _QWORD *v159; // r5
  int v160; // r3
  _DWORD *v161; // r9
  int v162; // r12
  _QWORD *v163; // lr
  _DWORD *v164; // r2
  int v165; // r12
  _QWORD *v166; // r0
  int v167; // r3
  unsigned __int8 v168; // r6
  unsigned int v169; // r2
  int v170; // r6
  int v171; // r2
  unsigned int v172; // r2
  unsigned int v173; // r12
  int v174; // r4
  int v175; // r6
  _DWORD *v176; // r9
  int v177; // r6
  int v178; // r5
  int v179; // r2
  unsigned int v180; // lr
  int v181; // r4
  int v182; // r8
  _DWORD *v183; // r7
  _DWORD *v184; // r9
  unsigned int v185; // r2
  int v186; // r3
  int v187; // r9
  int v188; // r3
  int v189; // r2
  unsigned int v190; // r4
  int v191; // r0
  int v192; // r12
  int v193; // r5
  int v194; // r3
  int v195; // r1
  unsigned int v196; // r3
  int v197; // lr
  int v198; // r1
  int v199; // r2
  int v200; // lr
  int v201; // r1
  int v202; // r3
  int v203; // r8
  int v204; // lr
  int v205; // lr
  int v206; // r12
  int v207; // r0
  int v208; // r2
  unsigned int v209; // r0
  unsigned int v210; // r3
  unsigned int v211; // r1
  unsigned int v212; // r2
  unsigned int v213; // r7
  __int64 v214; // r6
  _DWORD *v215; // r1
  _QWORD *v216; // r12
  _QWORD *v217; // r4
  _DWORD *v218; // r0
  int v219; // r2
  int v220; // r4
  int v221; // r10
  int v222; // r9
  int v223; // r3
  int v224; // r5
  _DWORD *v225; // r2
  int v226; // r8
  _DWORD *v227; // r12
  _QWORD *v228; // r5
  int v229; // r3
  __int64 v230; // r6
  int v231; // r3
  int v232; // r5
  int v233; // r1
  int v234; // r10
  int v235; // r5
  int v236; // r1
  int v237; // r1
  _QWORD *v238; // r12
  int v239; // r3
  int v240; // r2
  _QWORD *v241; // r12
  int v242; // r1
  int v243; // r3
  int v244; // r12
  int v245; // lr
  int v246; // r2
  int v247; // r5
  _QWORD *v248; // r10
  int v249; // r3
  int v250; // r10
  int v251; // r9
  __int64 v252; // r2
  _QWORD *v253; // r8
  int v254; // r12
  int v255; // r1
  _DWORD *v256; // r8
  int v257; // r0
  int v258; // r12
  int v259; // lr
  _QWORD *v260; // r8
  int v261; // r4
  int v262; // r5
  int v263; // r1
  int v264; // r5
  int v265; // r0
  int v266; // lr
  unsigned int v267; // r3
  unsigned int v268; // r1
  unsigned int v269; // kr60_4
  void *result; // r0
  _DWORD *v273; // [sp+4h] [bp-340h]
  unsigned int v274; // [sp+4h] [bp-340h]
  int v275; // [sp+4h] [bp-340h]
  __int64 v276; // [sp+8h] [bp-33Ch]
  __int64 v277; // [sp+8h] [bp-33Ch]
  unsigned int v278; // [sp+14h] [bp-330h]
  unsigned int v279; // [sp+14h] [bp-330h]
  _QWORD *v280; // [sp+14h] [bp-330h]
  int v281; // [sp+14h] [bp-330h]
  unsigned int v282; // [sp+14h] [bp-330h]
  int v283; // [sp+14h] [bp-330h]
  unsigned int v284; // [sp+18h] [bp-32Ch]
  unsigned int v285; // [sp+18h] [bp-32Ch]
  _QWORD *v286; // [sp+18h] [bp-32Ch]
  _QWORD *v287; // [sp+18h] [bp-32Ch]
  unsigned int v288; // [sp+18h] [bp-32Ch]
  __int64 v289; // [sp+1Ch] [bp-328h]
  __int64 v290; // [sp+1Ch] [bp-328h]
  unsigned int v291; // [sp+1Ch] [bp-328h]
  unsigned int v292; // [sp+20h] [bp-324h]
  int v293; // [sp+20h] [bp-324h]
  unsigned int v294; // [sp+24h] [bp-320h]
  int v295; // [sp+24h] [bp-320h]
  unsigned int v296; // [sp+24h] [bp-320h]
  int v297; // [sp+24h] [bp-320h]
  unsigned int v298; // [sp+24h] [bp-320h]
  _QWORD *v299; // [sp+24h] [bp-320h]
  unsigned int v300; // [sp+28h] [bp-31Ch]
  int v301; // [sp+28h] [bp-31Ch]
  unsigned int v302; // [sp+28h] [bp-31Ch]
  unsigned int v303; // [sp+28h] [bp-31Ch]
  unsigned int v304; // [sp+28h] [bp-31Ch]
  int v305; // [sp+28h] [bp-31Ch]
  unsigned int v306; // [sp+2Ch] [bp-318h]
  int v307; // [sp+2Ch] [bp-318h]
  unsigned int v308; // [sp+2Ch] [bp-318h]
  int v309; // [sp+2Ch] [bp-318h]
  int v310; // [sp+2Ch] [bp-318h]
  unsigned int v311; // [sp+2Ch] [bp-318h]
  unsigned int v312; // [sp+30h] [bp-314h]
  unsigned int v313; // [sp+30h] [bp-314h]
  int v314; // [sp+30h] [bp-314h]
  unsigned int v315; // [sp+30h] [bp-314h]
  unsigned int v316; // [sp+34h] [bp-310h]
  unsigned int v317; // [sp+34h] [bp-310h]
  int v318; // [sp+34h] [bp-310h]
  int v319; // [sp+34h] [bp-310h]
  char *v320; // [sp+34h] [bp-310h]
  unsigned int v321; // [sp+34h] [bp-310h]
  unsigned int v322; // [sp+34h] [bp-310h]
  unsigned int v323; // [sp+38h] [bp-30Ch]
  unsigned int v324; // [sp+38h] [bp-30Ch]
  _QWORD *v325; // [sp+38h] [bp-30Ch]
  int v326; // [sp+38h] [bp-30Ch]
  unsigned int v327; // [sp+38h] [bp-30Ch]
  unsigned int v328; // [sp+3Ch] [bp-308h]
  unsigned int v329; // [sp+3Ch] [bp-308h]
  int v330; // [sp+3Ch] [bp-308h]
  int v331; // [sp+3Ch] [bp-308h]
  unsigned int v332; // [sp+3Ch] [bp-308h]
  unsigned int v333; // [sp+40h] [bp-304h]
  unsigned int v334; // [sp+40h] [bp-304h]
  unsigned int v335; // [sp+40h] [bp-304h]
  int v336; // [sp+40h] [bp-304h]
  unsigned int v337; // [sp+40h] [bp-304h]
  int v338; // [sp+40h] [bp-304h]
  unsigned int v339; // [sp+44h] [bp-300h]
  _BYTE v340[12]; // [sp+44h] [bp-300h]
  int v341; // [sp+44h] [bp-300h]
  unsigned int v342; // [sp+44h] [bp-300h]
  _QWORD *v343; // [sp+44h] [bp-300h]
  unsigned int v344; // [sp+48h] [bp-2FCh]
  int v345; // [sp+48h] [bp-2FCh]
  unsigned int v346; // [sp+48h] [bp-2FCh]
  _QWORD *v347; // [sp+48h] [bp-2FCh]
  _QWORD *v348; // [sp+48h] [bp-2FCh]
  int v349; // [sp+4Ch] [bp-2F8h]
  int v350; // [sp+4Ch] [bp-2F8h]
  unsigned int v351; // [sp+4Ch] [bp-2F8h]
  _QWORD *v352; // [sp+4Ch] [bp-2F8h]
  _DWORD *v353; // [sp+4Ch] [bp-2F8h]
  __int64 v354; // [sp+50h] [bp-2F4h]
  int v355; // [sp+50h] [bp-2F4h]
  _QWORD *v356; // [sp+50h] [bp-2F4h]
  unsigned int v357; // [sp+50h] [bp-2F4h]
  _QWORD *v358; // [sp+50h] [bp-2F4h]
  _QWORD *v359; // [sp+50h] [bp-2F4h]
  _QWORD *v360; // [sp+50h] [bp-2F4h]
  unsigned int v361; // [sp+54h] [bp-2F0h]
  unsigned int v362; // [sp+54h] [bp-2F0h]
  _QWORD *v363; // [sp+54h] [bp-2F0h]
  unsigned int v364; // [sp+58h] [bp-2ECh]
  unsigned int v365; // [sp+58h] [bp-2ECh]
  unsigned int v366; // [sp+58h] [bp-2ECh]
  _QWORD *v367; // [sp+58h] [bp-2ECh]
  _DWORD *v368; // [sp+58h] [bp-2ECh]
  unsigned int v369; // [sp+5Ch] [bp-2E8h]
  unsigned int v370; // [sp+5Ch] [bp-2E8h]
  unsigned int v371; // [sp+5Ch] [bp-2E8h]
  unsigned int v372; // [sp+5Ch] [bp-2E8h]
  unsigned int v373; // [sp+60h] [bp-2E4h]
  _QWORD *v374; // [sp+60h] [bp-2E4h]
  unsigned int v375; // [sp+60h] [bp-2E4h]
  int v376; // [sp+60h] [bp-2E4h]
  unsigned int v377; // [sp+60h] [bp-2E4h]
  _QWORD *v378; // [sp+60h] [bp-2E4h]
  _DWORD *v379; // [sp+60h] [bp-2E4h]
  unsigned int v380; // [sp+64h] [bp-2E0h]
  unsigned int v381; // [sp+64h] [bp-2E0h]
  int v382; // [sp+64h] [bp-2E0h]
  unsigned int v383; // [sp+64h] [bp-2E0h]
  unsigned int v384; // [sp+64h] [bp-2E0h]
  int v385; // [sp+64h] [bp-2E0h]
  _DWORD *v386; // [sp+64h] [bp-2E0h]
  unsigned int v387; // [sp+68h] [bp-2DCh]
  int v388; // [sp+68h] [bp-2DCh]
  unsigned int v389; // [sp+68h] [bp-2DCh]
  int v390; // [sp+68h] [bp-2DCh]
  _QWORD *v391; // [sp+68h] [bp-2DCh]
  unsigned int v392; // [sp+68h] [bp-2DCh]
  int v393; // [sp+6Ch] [bp-2D8h]
  int v394; // [sp+6Ch] [bp-2D8h]
  int v395; // [sp+6Ch] [bp-2D8h]
  unsigned int v396; // [sp+6Ch] [bp-2D8h]
  unsigned int v397; // [sp+6Ch] [bp-2D8h]
  _QWORD *v398; // [sp+6Ch] [bp-2D8h]
  int v399; // [sp+6Ch] [bp-2D8h]
  unsigned int v400; // [sp+6Ch] [bp-2D8h]
  _QWORD *v401; // [sp+6Ch] [bp-2D8h]
  int v402; // [sp+70h] [bp-2D4h]
  int v403; // [sp+70h] [bp-2D4h]
  _DWORD *v404; // [sp+70h] [bp-2D4h]
  unsigned int v405; // [sp+70h] [bp-2D4h]
  int v406; // [sp+70h] [bp-2D4h]
  unsigned int v407; // [sp+70h] [bp-2D4h]
  _QWORD *v408; // [sp+70h] [bp-2D4h]
  unsigned int v409; // [sp+74h] [bp-2D0h]
  _QWORD *v410; // [sp+74h] [bp-2D0h]
  _QWORD *v411; // [sp+74h] [bp-2D0h]
  unsigned int v412; // [sp+74h] [bp-2D0h]
  int v413; // [sp+74h] [bp-2D0h]
  unsigned int v414; // [sp+74h] [bp-2D0h]
  unsigned int v415; // [sp+78h] [bp-2CCh]
  unsigned int v416; // [sp+78h] [bp-2CCh]
  _DWORD *v417; // [sp+78h] [bp-2CCh]
  int v418; // [sp+78h] [bp-2CCh]
  int v419; // [sp+78h] [bp-2CCh]
  int v420; // [sp+78h] [bp-2CCh]
  unsigned int v421; // [sp+78h] [bp-2CCh]
  _QWORD *v422; // [sp+78h] [bp-2CCh]
  unsigned int v423; // [sp+7Ch] [bp-2C8h]
  int v424; // [sp+7Ch] [bp-2C8h]
  unsigned int v425; // [sp+7Ch] [bp-2C8h]
  int v426; // [sp+7Ch] [bp-2C8h]
  unsigned int v427; // [sp+7Ch] [bp-2C8h]
  int v428; // [sp+7Ch] [bp-2C8h]
  unsigned int v429; // [sp+7Ch] [bp-2C8h]
  int v430; // [sp+80h] [bp-2C4h]
  unsigned int v431; // [sp+80h] [bp-2C4h]
  _QWORD *v432; // [sp+80h] [bp-2C4h]
  _DWORD *v433; // [sp+80h] [bp-2C4h]
  int v434; // [sp+80h] [bp-2C4h]
  unsigned int v435; // [sp+80h] [bp-2C4h]
  _QWORD *v436; // [sp+80h] [bp-2C4h]
  int v437; // [sp+84h] [bp-2C0h]
  int v438; // [sp+84h] [bp-2C0h]
  unsigned int v439; // [sp+84h] [bp-2C0h]
  _QWORD *v440; // [sp+84h] [bp-2C0h]
  char *v441; // [sp+84h] [bp-2C0h]
  int v442; // [sp+84h] [bp-2C0h]
  unsigned int v443; // [sp+84h] [bp-2C0h]
  int v444; // [sp+88h] [bp-2BCh]
  int v445; // [sp+88h] [bp-2BCh]
  int v446; // [sp+88h] [bp-2BCh]
  unsigned int v447; // [sp+88h] [bp-2BCh]
  _QWORD *v448; // [sp+88h] [bp-2BCh]
  int v449; // [sp+88h] [bp-2BCh]
  _QWORD *v450; // [sp+88h] [bp-2BCh]
  _DWORD *v451; // [sp+88h] [bp-2BCh]
  unsigned int v452; // [sp+88h] [bp-2BCh]
  unsigned int v453; // [sp+8Ch] [bp-2B8h]
  int v454; // [sp+8Ch] [bp-2B8h]
  int v455; // [sp+8Ch] [bp-2B8h]
  unsigned int v456; // [sp+8Ch] [bp-2B8h]
  _QWORD *v457; // [sp+8Ch] [bp-2B8h]
  unsigned int v458; // [sp+8Ch] [bp-2B8h]
  int v459; // [sp+8Ch] [bp-2B8h]
  int v460; // [sp+8Ch] [bp-2B8h]
  unsigned int v461; // [sp+8Ch] [bp-2B8h]
  _QWORD *v462; // [sp+8Ch] [bp-2B8h]
  int v463; // [sp+90h] [bp-2B4h]
  int v464; // [sp+90h] [bp-2B4h]
  _QWORD *v465; // [sp+90h] [bp-2B4h]
  _DWORD *v466; // [sp+90h] [bp-2B4h]
  _DWORD *v467; // [sp+90h] [bp-2B4h]
  unsigned int v468; // [sp+90h] [bp-2B4h]
  _QWORD *v469; // [sp+90h] [bp-2B4h]
  int v470; // [sp+90h] [bp-2B4h]
  int v471; // [sp+90h] [bp-2B4h]
  _QWORD *v472; // [sp+90h] [bp-2B4h]
  _DWORD *v473; // [sp+94h] [bp-2B0h]
  _QWORD *v474; // [sp+94h] [bp-2B0h]
  _QWORD *v475; // [sp+94h] [bp-2B0h]
  unsigned int v476; // [sp+94h] [bp-2B0h]
  int v477; // [sp+94h] [bp-2B0h]
  _QWORD *v478; // [sp+94h] [bp-2B0h]
  unsigned int v479; // [sp+98h] [bp-2ACh]
  _DWORD *v480; // [sp+98h] [bp-2ACh]
  _QWORD *v481; // [sp+98h] [bp-2ACh]
  unsigned int v482; // [sp+98h] [bp-2ACh]
  int v483; // [sp+98h] [bp-2ACh]
  unsigned int v484; // [sp+9Ch] [bp-2A8h]
  unsigned int v485; // [sp+9Ch] [bp-2A8h]
  _DWORD *v486; // [sp+9Ch] [bp-2A8h]
  int v487; // [sp+9Ch] [bp-2A8h]
  unsigned int v488; // [sp+9Ch] [bp-2A8h]
  unsigned int v489; // [sp+A0h] [bp-2A4h]
  _DWORD *v490; // [sp+A0h] [bp-2A4h]
  _DWORD *v491; // [sp+A0h] [bp-2A4h]
  int v492; // [sp+A0h] [bp-2A4h]
  _QWORD *v493; // [sp+A0h] [bp-2A4h]
  unsigned int v494; // [sp+A0h] [bp-2A4h]
  unsigned int v495; // [sp+A0h] [bp-2A4h]
  unsigned int v496; // [sp+A4h] [bp-2A0h]
  _DWORD *v497; // [sp+A4h] [bp-2A0h]
  unsigned int v498; // [sp+A4h] [bp-2A0h]
  unsigned int v499; // [sp+A4h] [bp-2A0h]
  _QWORD *v500; // [sp+A8h] [bp-29Ch]
  _QWORD *v501; // [sp+A8h] [bp-29Ch]
  int v502; // [sp+A8h] [bp-29Ch]
  int v503; // [sp+A8h] [bp-29Ch]
  _QWORD *v504; // [sp+A8h] [bp-29Ch]
  int v505; // [sp+A8h] [bp-29Ch]
  unsigned int v506; // [sp+A8h] [bp-29Ch]
  int v507; // [sp+ACh] [bp-298h]
  unsigned int v508; // [sp+ACh] [bp-298h]
  unsigned int v509; // [sp+ACh] [bp-298h]
  int v510; // [sp+B0h] [bp-294h]
  _DWORD *v511; // [sp+B0h] [bp-294h]
  _QWORD *v512; // [sp+B0h] [bp-294h]
  int v513; // [sp+B0h] [bp-294h]
  unsigned int v514; // [sp+B0h] [bp-294h]
  _QWORD *v515; // [sp+B4h] [bp-290h]
  _DWORD *v516; // [sp+B4h] [bp-290h]
  int v517; // [sp+B4h] [bp-290h]
  unsigned int v518; // [sp+B4h] [bp-290h]
  int v519; // [sp+B4h] [bp-290h]
  _QWORD *v520; // [sp+B4h] [bp-290h]
  int v521; // [sp+B8h] [bp-28Ch]
  int v522; // [sp+B8h] [bp-28Ch]
  unsigned int v523; // [sp+B8h] [bp-28Ch]
  __int64 v524; // [sp+BCh] [bp-288h]
  _QWORD *v525; // [sp+BCh] [bp-288h]
  int v526; // [sp+BCh] [bp-288h]
  int v527; // [sp+BCh] [bp-288h]
  _QWORD *v528; // [sp+C0h] [bp-284h]
  int v529; // [sp+C0h] [bp-284h]
  int v530; // [sp+C4h] [bp-280h]
  _DWORD *v531; // [sp+C4h] [bp-280h]
  _QWORD *v532; // [sp+C4h] [bp-280h]
  int v533; // [sp+C4h] [bp-280h]
  __int64 v534; // [sp+C8h] [bp-27Ch]
  _QWORD *v535; // [sp+C8h] [bp-27Ch]
  unsigned int v536; // [sp+C8h] [bp-27Ch]
  _DWORD *v537; // [sp+C8h] [bp-27Ch]
  _DWORD *v538; // [sp+C8h] [bp-27Ch]
  _QWORD *v539; // [sp+CCh] [bp-278h]
  int v540; // [sp+CCh] [bp-278h]
  _QWORD *v541; // [sp+CCh] [bp-278h]
  _QWORD *v542; // [sp+CCh] [bp-278h]
  __int64 v543; // [sp+D0h] [bp-274h]
  int v544; // [sp+D0h] [bp-274h]
  unsigned int v545; // [sp+D0h] [bp-274h]
  _QWORD *v546; // [sp+D0h] [bp-274h]
  int v547; // [sp+D4h] [bp-270h]
  _QWORD *v548; // [sp+D4h] [bp-270h]
  size_t na; // [sp+D8h] [bp-26Ch]
  __int64 v551; // [sp+DCh] [bp-268h]
  int v552; // [sp+DCh] [bp-268h]
  _QWORD *v553; // [sp+DCh] [bp-268h]
  _DWORD *v554; // [sp+DCh] [bp-268h]
  _QWORD *v555; // [sp+DCh] [bp-268h]
  int v556; // [sp+DCh] [bp-268h]
  __int64 v557; // [sp+DCh] [bp-268h]
  _DWORD *v558; // [sp+E0h] [bp-264h]
  _QWORD *v559; // [sp+E0h] [bp-264h]
  __int64 v560; // [sp+E4h] [bp-260h]
  _QWORD *v561; // [sp+E4h] [bp-260h]
  _QWORD *v562; // [sp+E4h] [bp-260h]
  _DWORD *v563; // [sp+E8h] [bp-25Ch]
  int v564; // [sp+E8h] [bp-25Ch]
  int v565; // [sp+ECh] [bp-258h]
  _QWORD *v566; // [sp+ECh] [bp-258h]
  _QWORD *v567; // [sp+ECh] [bp-258h]
  _DWORD *v568; // [sp+ECh] [bp-258h]
  __int64 v569; // [sp+F0h] [bp-254h]
  int v570; // [sp+F0h] [bp-254h]
  _QWORD *v571; // [sp+F0h] [bp-254h]
  _DWORD *v572; // [sp+F4h] [bp-250h]
  _DWORD *v573; // [sp+F4h] [bp-250h]
  int v574; // [sp+F8h] [bp-24Ch]
  _QWORD *v575; // [sp+F8h] [bp-24Ch]
  int v576; // [sp+F8h] [bp-24Ch]
  _DWORD *v577; // [sp+F8h] [bp-24Ch]
  int v578; // [sp+FCh] [bp-248h]
  unsigned int v579; // [sp+FCh] [bp-248h]
  _QWORD *v580; // [sp+FCh] [bp-248h]
  _QWORD *v581; // [sp+FCh] [bp-248h]
  __int64 v582; // [sp+100h] [bp-244h]
  int v583; // [sp+100h] [bp-244h]
  int v584; // [sp+100h] [bp-244h]
  _QWORD *v585; // [sp+100h] [bp-244h]
  _DWORD *v586; // [sp+100h] [bp-244h]
  _QWORD *v587; // [sp+104h] [bp-240h]
  char *v588; // [sp+104h] [bp-240h]
  _QWORD *v589; // [sp+104h] [bp-240h]
  int v590; // [sp+108h] [bp-23Ch]
  _QWORD *v591; // [sp+108h] [bp-23Ch]
  _DWORD *v592; // [sp+108h] [bp-23Ch]
  __int64 v593; // [sp+10Ch] [bp-238h]
  _QWORD *v594; // [sp+10Ch] [bp-238h]
  _DWORD *v595; // [sp+10Ch] [bp-238h]
  _DWORD *v596; // [sp+110h] [bp-234h]
  _QWORD *v597; // [sp+110h] [bp-234h]
  __int64 v598; // [sp+114h] [bp-230h]
  _QWORD *v599; // [sp+114h] [bp-230h]
  _QWORD *v600; // [sp+114h] [bp-230h]
  _QWORD *v601; // [sp+114h] [bp-230h]
  int v602; // [sp+118h] [bp-22Ch]
  _QWORD *v603; // [sp+118h] [bp-22Ch]
  int *v604; // [sp+118h] [bp-22Ch]
  _QWORD *v605; // [sp+118h] [bp-22Ch]
  __int64 v606; // [sp+11Ch] [bp-228h]
  _QWORD *v607; // [sp+11Ch] [bp-228h]
  _QWORD *v608; // [sp+120h] [bp-224h]
  __int64 v609; // [sp+124h] [bp-220h]
  _QWORD *v610; // [sp+124h] [bp-220h]
  _DWORD *v611; // [sp+124h] [bp-220h]
  _QWORD *v612; // [sp+128h] [bp-21Ch]
  _QWORD *v613; // [sp+128h] [bp-21Ch]
  _QWORD *v614; // [sp+128h] [bp-21Ch]
  __int64 v615; // [sp+12Ch] [bp-218h]
  int v616; // [sp+12Ch] [bp-218h]
  _DWORD *v617; // [sp+12Ch] [bp-218h]
  _QWORD *v618; // [sp+130h] [bp-214h]
  _QWORD *v619; // [sp+130h] [bp-214h]
  _DWORD *v620; // [sp+130h] [bp-214h]
  int v621; // [sp+130h] [bp-214h]
  __int64 v622; // [sp+134h] [bp-210h]
  int v623; // [sp+134h] [bp-210h]
  _DWORD *v624; // [sp+134h] [bp-210h]
  _QWORD *v625; // [sp+134h] [bp-210h]
  _QWORD *v626; // [sp+138h] [bp-20Ch]
  _QWORD *v627; // [sp+138h] [bp-20Ch]
  _DWORD *v628; // [sp+138h] [bp-20Ch]
  __int64 v629; // [sp+13Ch] [bp-208h]
  int v630; // [sp+13Ch] [bp-208h]
  _QWORD *v631; // [sp+13Ch] [bp-208h]
  _QWORD *v632; // [sp+13Ch] [bp-208h]
  _QWORD *v633; // [sp+13Ch] [bp-208h]
  _QWORD *v634; // [sp+140h] [bp-204h]
  _QWORD *v635; // [sp+140h] [bp-204h]
  __int64 v636; // [sp+144h] [bp-200h]
  _QWORD *v637; // [sp+144h] [bp-200h]
  int v638; // [sp+148h] [bp-1FCh]
  __int64 v639; // [sp+14Ch] [bp-1F8h]
  _QWORD *v640; // [sp+14Ch] [bp-1F8h]
  _QWORD *v641; // [sp+14Ch] [bp-1F8h]
  _QWORD *v642; // [sp+150h] [bp-1F4h]
  _QWORD *v643; // [sp+150h] [bp-1F4h]
  int v644; // [sp+150h] [bp-1F4h]
  __int64 v645; // [sp+154h] [bp-1F0h]
  _QWORD *v646; // [sp+154h] [bp-1F0h]
  _QWORD *v647; // [sp+154h] [bp-1F0h]
  _QWORD *v648; // [sp+158h] [bp-1ECh]
  int v649; // [sp+15Ch] [bp-1E8h]
  _QWORD *v650; // [sp+15Ch] [bp-1E8h]
  __int64 v651; // [sp+160h] [bp-1E4h]
  _QWORD *v652; // [sp+160h] [bp-1E4h]
  int v653; // [sp+160h] [bp-1E4h]
  int v654; // [sp+160h] [bp-1E4h]
  _QWORD *v655; // [sp+164h] [bp-1E0h]
  _QWORD *v656; // [sp+164h] [bp-1E0h]
  int v657; // [sp+168h] [bp-1DCh]
  _QWORD *v658; // [sp+168h] [bp-1DCh]
  int v659; // [sp+168h] [bp-1DCh]
  int v660; // [sp+168h] [bp-1DCh]
  int v661; // [sp+16Ch] [bp-1D8h]
  _DWORD *v662; // [sp+16Ch] [bp-1D8h]
  _QWORD *v663; // [sp+16Ch] [bp-1D8h]
  int v664; // [sp+170h] [bp-1D4h]
  _QWORD *v665; // [sp+170h] [bp-1D4h]
  int v666; // [sp+170h] [bp-1D4h]
  __int64 v667; // [sp+174h] [bp-1D0h]
  int v668; // [sp+174h] [bp-1D0h]
  _QWORD *v669; // [sp+174h] [bp-1D0h]
  _QWORD *v670; // [sp+174h] [bp-1D0h]
  int v671; // [sp+178h] [bp-1CCh]
  int v672; // [sp+178h] [bp-1CCh]
  _QWORD *v673; // [sp+178h] [bp-1CCh]
  int v674; // [sp+178h] [bp-1CCh]
  int v675; // [sp+178h] [bp-1CCh]
  __int64 v676; // [sp+17Ch] [bp-1C8h]
  int v677; // [sp+17Ch] [bp-1C8h]
  _QWORD *v678; // [sp+17Ch] [bp-1C8h]
  _QWORD *v679; // [sp+17Ch] [bp-1C8h]
  int v680; // [sp+180h] [bp-1C4h]
  int v681; // [sp+180h] [bp-1C4h]
  _QWORD *v682; // [sp+180h] [bp-1C4h]
  __int64 v683; // [sp+184h] [bp-1C0h]
  int v684; // [sp+184h] [bp-1C0h]
  _QWORD *v685; // [sp+184h] [bp-1C0h]
  int v686; // [sp+188h] [bp-1BCh]
  int v687; // [sp+188h] [bp-1BCh]
  int v688; // [sp+188h] [bp-1BCh]
  _QWORD *v689; // [sp+188h] [bp-1BCh]
  __int64 v690; // [sp+18Ch] [bp-1B8h]
  int v691; // [sp+18Ch] [bp-1B8h]
  int v692; // [sp+18Ch] [bp-1B8h]
  _DWORD *v693; // [sp+18Ch] [bp-1B8h]
  unsigned int v694; // [sp+190h] [bp-1B4h]
  int v695; // [sp+190h] [bp-1B4h]
  _DWORD *v696; // [sp+190h] [bp-1B4h]
  __int64 v697; // [sp+194h] [bp-1B0h]
  int v698; // [sp+194h] [bp-1B0h]
  int v699; // [sp+194h] [bp-1B0h]
  int v700; // [sp+194h] [bp-1B0h]
  unsigned int v701; // [sp+198h] [bp-1ACh]
  int v702; // [sp+198h] [bp-1ACh]
  unsigned int v703; // [sp+198h] [bp-1ACh]
  __int64 v704; // [sp+19Ch] [bp-1A8h]
  int v705; // [sp+19Ch] [bp-1A8h]
  int v706; // [sp+19Ch] [bp-1A8h]
  int v707; // [sp+19Ch] [bp-1A8h]
  unsigned int v708; // [sp+1A0h] [bp-1A4h]
  int v709; // [sp+1A0h] [bp-1A4h]
  __int64 v710; // [sp+1A4h] [bp-1A0h]
  int v711; // [sp+1A4h] [bp-1A0h]
  int v712; // [sp+1A8h] [bp-19Ch]
  __int64 v713; // [sp+1ACh] [bp-198h]
  int v714; // [sp+1ACh] [bp-198h]
  _QWORD *v715; // [sp+1ACh] [bp-198h]
  int v716; // [sp+1B0h] [bp-194h]
  _DWORD *v717; // [sp+1B0h] [bp-194h]
  __int64 v718; // [sp+1B4h] [bp-190h]
  _QWORD *v719; // [sp+1B4h] [bp-190h]
  int v720; // [sp+1B8h] [bp-18Ch]
  _QWORD *v721; // [sp+1B8h] [bp-18Ch]
  int v722; // [sp+1BCh] [bp-188h]
  _QWORD *v723; // [sp+1BCh] [bp-188h]
  unsigned int v724; // [sp+1BCh] [bp-188h]
  unsigned int v725; // [sp+1BCh] [bp-188h]
  int v726; // [sp+1C0h] [bp-184h]
  _DWORD *v727; // [sp+1C0h] [bp-184h]
  _DWORD *v728; // [sp+1C0h] [bp-184h]
  unsigned int v729; // [sp+1C0h] [bp-184h]
  _QWORD *v730; // [sp+1C4h] [bp-180h]
  _QWORD *v731; // [sp+1C4h] [bp-180h]
  int v732; // [sp+1C4h] [bp-180h]
  int v733; // [sp+1C4h] [bp-180h]
  _QWORD *v734; // [sp+1C8h] [bp-17Ch]
  _QWORD *v735; // [sp+1C8h] [bp-17Ch]
  unsigned int v736; // [sp+1C8h] [bp-17Ch]
  int v737; // [sp+1CCh] [bp-178h]
  _QWORD *v738; // [sp+1CCh] [bp-178h]
  int v739; // [sp+1CCh] [bp-178h]
  unsigned int v740; // [sp+1D0h] [bp-174h]
  _DWORD *v741; // [sp+1D0h] [bp-174h]
  _QWORD *v742; // [sp+1D0h] [bp-174h]
  unsigned int v743; // [sp+1D0h] [bp-174h]
  int v744; // [sp+1D4h] [bp-170h]
  _QWORD *v745; // [sp+1D4h] [bp-170h]
  _DWORD *v746; // [sp+1D4h] [bp-170h]
  int v747; // [sp+1D8h] [bp-16Ch]
  _DWORD *v748; // [sp+1D8h] [bp-16Ch]
  _QWORD *v749; // [sp+1D8h] [bp-16Ch]
  int v750; // [sp+1DCh] [bp-168h]
  _QWORD *v751; // [sp+1DCh] [bp-168h]
  _DWORD *v752; // [sp+1DCh] [bp-168h]
  _QWORD *v753; // [sp+1E0h] [bp-164h]
  _DWORD *v754; // [sp+1E0h] [bp-164h]
  _QWORD *v755; // [sp+1E4h] [bp-160h]
  _QWORD *v756; // [sp+1E4h] [bp-160h]
  _QWORD *v757; // [sp+1E8h] [bp-15Ch]
  _QWORD *v758; // [sp+1E8h] [bp-15Ch]
  int v759; // [sp+1ECh] [bp-158h]
  int v760; // [sp+1ECh] [bp-158h]
  int v761; // [sp+1F0h] [bp-154h]
  unsigned int v762; // [sp+1F4h] [bp-150h]
  _QWORD *v763; // [sp+1F4h] [bp-150h]
  int v764; // [sp+1F8h] [bp-14Ch]
  int v765; // [sp+1F8h] [bp-14Ch]
  _DWORD *v766; // [sp+1F8h] [bp-14Ch]
  int v767; // [sp+1FCh] [bp-148h]
  _DWORD *v768; // [sp+1FCh] [bp-148h]
  _QWORD *v769; // [sp+200h] [bp-144h]
  unsigned int v770; // [sp+204h] [bp-140h]
  int v771; // [sp+20Ch] [bp-138h]
  int v772; // [sp+210h] [bp-134h]
  int v773; // [sp+214h] [bp-130h]
  int v774; // [sp+21Ch] [bp-128h]
  char *src; // [sp+234h] [bp-110h]
  __int64 v777; // [sp+254h] [bp-F0h]
  __int64 v778; // [sp+25Ch] [bp-E8h]
  int v779; // [sp+264h] [bp-E0h]
  __int64 v780; // [sp+26Ch] [bp-D8h]
  __int64 *v781; // [sp+2BCh] [bp-88h]
  _QWORD dest[16]; // [sp+2C0h] [bp-84h] BYREF

  v3 = *((_DWORD *)a1 + 32);
  v4 = 128 - v3;
  src = a2;
  if ( 128 - v3 > a3 )
  {
    result = memcpy((char *)a1 + v3, a2, a3);
    *((_DWORD *)a1 + 32) = v3 + a3;
    return result;
  }
  v781 = a1 + 17;
  memcpy(dest, a1 + 17, sizeof(dest));
  if ( !a3 )
    goto LABEL_18;
  v5 = v3;
  v273 = dword_179700;
  for ( i = a3; ; i = v7 )
  {
    if ( v4 >= i )
      v4 = i;
    v8 = (char *)a1 + v5;
    v5 += v4;
    memcpy(v8, src, v4);
    na = i - v4;
    src += v4;
    if ( v5 == 128 )
      break;
    v7 = i - v4;
    if ( !na )
      goto LABEL_17;
LABEL_5:
    v4 = 128 - v5;
  }
  v276 = 0;
  v609 = *a1;
  v718 = *a1 ^ dest[0];
  v713 = a1[1] ^ dest[1];
  v615 = a1[1];
  v622 = a1[2];
  v629 = a1[3];
  v710 = v622 ^ dest[2];
  v777 = dest[3];
  v534 = v629 ^ dest[3];
  v778 = dest[4];
  LODWORD(v543) = *((_DWORD *)a1 + 8) ^ LODWORD(dest[4]);
  v636 = a1[4];
  HIDWORD(v543) = HIDWORD(v636) ^ HIDWORD(dest[4]);
  v779 = dest[5];
  v639 = a1[5];
  v645 = a1[6];
  v551 = v639 ^ dest[5];
  v780 = dest[6];
  v560 = v645 ^ dest[6];
  v565 = *((_DWORD *)a1 + 14) ^ LODWORD(dest[7]);
  v569 = *(__int64 *)((char *)a1 + 60) ^ *(_QWORD *)((char *)&dest[7] + 4);
  v649 = *((_DWORD *)a1 + 14);
  v651 = *(__int64 *)((char *)a1 + 60);
  v657 = *((_DWORD *)a1 + 17);
  v661 = *((_DWORD *)a1 + 18);
  v664 = *((_DWORD *)a1 + 19);
  v574 = v657 ^ HIDWORD(dest[8]);
  v521 = v661 ^ LODWORD(dest[9]);
  v578 = v664 ^ HIDWORD(dest[9]);
  v667 = a1[10];
  v524 = v667 ^ dest[10];
  v676 = a1[11];
  v582 = v676 ^ dest[11];
  v683 = a1[12];
  v590 = v683 ^ LODWORD(dest[12]);
  v530 = HIDWORD(v683) ^ HIDWORD(dest[12]);
  v690 = a1[13];
  v593 = v690 ^ dest[13];
  v598 = a1[14] ^ dest[14];
  v704 = a1[15];
  v697 = a1[14];
  v606 = v704 ^ dest[15];
  do
  {
    v289 = v718 ^ v276;
    v373 = HIDWORD(v713) ^ ((unsigned __int64)(v276 + 16) >> 32);
    v380 = HIDWORD(v710) ^ ((unsigned __int64)(v276 + 32) >> 32);
    v300 = HIDWORD(v534) ^ ((unsigned __int64)(v276 + 48) >> 32);
    v306 = HIDWORD(v543) ^ ((unsigned __int64)(v276 + 64) >> 32);
    v278 = ((unsigned __int64)(v276 + 80) >> 32) ^ HIDWORD(v551);
    v9 = ((unsigned __int64)(v276 + 96) >> 32) ^ HIDWORD(v560);
    v312 = v565 ^ (v276 + 112);
    v316 = HIDWORD(v569) ^ (v276 + 128);
    v409 = v521 ^ (v276 + 144);
    v415 = v524 ^ (v276 + 160);
    v328 = v582 ^ (v276 + 176);
    v333 = v590 ^ (v276 + 192);
    v339 = v593 ^ (v276 + 208);
    *(_QWORD *)&v340[4] = v598 ^ (v276 + 224);
    v423 = HIDWORD(v582) ^ ((unsigned __int64)(v276 + 176) >> 32);
    v354 = v606 ^ (v276 + 240);
    v294 = v713 ^ (v276 + 16);
    v284 = v578 ^ ((unsigned __int64)(v276 + 144) >> 32);
    v323 = HIDWORD(v524) ^ ((unsigned __int64)(v276 + 160) >> 32);
    v369 = v534 ^ (v276 + 48);
    v453 = ((unsigned int)v543 ^ ((_DWORD)v276 + 64)) >> 24;
    v387 = v560 ^ (v276 + 96);
    v496 = HIBYTE(v9);
    v489 = ((unsigned int)v551 ^ ((_DWORD)v276 + 80)) >> 24;
    v507 = ((unsigned int)v569 ^ ((unsigned __int64)(v276 + 112) >> 32)) >> 24;
    v522 = (v574 ^ ((unsigned __int64)(v276 + 128) >> 32)) >> 24;
    v544 = v543 ^ (v276 + 64);
    v437 = (HIDWORD(v598) ^ ((unsigned __int64)(v276 + 224) >> 32)) >> 24;
    v463 = (HIDWORD(v606) ^ ((unsigned __int64)(v276 + 240) >> 32)) >> 24;
    v552 = v551 ^ (v276 + 80);
    v393 = v569 ^ ((unsigned __int64)(v276 + 112) >> 32);
    v579 = v530 ^ ((unsigned __int64)(v276 + 192) >> 32);
    v740 = (unsigned int)(HIDWORD(v718) ^ HIDWORD(v276)) >> 24;
    v484 = HIBYTE(v278);
    LODWORD(v560) = &qword_17B6F8[HIBYTE(v312)];
    v500 = &qword_17B6F8[v453];
    v566 = &qword_17B6F8[HIBYTE(v316)];
    v10 = &qword_17B6F8[((unsigned int)v598 ^ ((_DWORD)v276 + 224)) >> 24];
    HIDWORD(v569) = &qword_17B6F8[HIBYTE(v409)];
    v531 = &dword_179F00[2 * v437];
    v525 = &qword_17B6F8[v489];
    v535 = &qword_17B6F8[HIBYTE(v387)];
    v587 = &qword_17B6F8[HIBYTE(v415)];
    v599 = &qword_17B6F8[HIBYTE(v328)];
    HIDWORD(v606) = &qword_17B6F8[HIBYTE(v333)];
    HIDWORD(v710) = &qword_17B6F8[HIBYTE(v339)];
    v11 = &qword_17B6F8[((unsigned int)v718 ^ (unsigned int)v276) >> 24];
    v719 = v10;
    v730 = &qword_17B6F8[((unsigned int)v606 ^ ((_DWORD)v276 + 240)) >> 24];
    v734 = v11;
    v12 = &dword_17AF08[2 * (unsigned __int8)(((unsigned int)v710 ^ ((_DWORD)v276 + 32)) >> 16)];
    v13 = &qword_17A708[(unsigned __int8)((unsigned __int16)(v713 ^ (v276 + 16)) >> 8)];
    v14 = &qword_17BF08[(unsigned __int8)v306];
    v15 = BYTE2(v9);
    v16 = BYTE1(v9);
    v17 = &qword_17BF08[(unsigned __int8)v278];
    v528 = &qword_17BF08[(unsigned __int8)(((unsigned __int64)(v276 + 96) >> 32) ^ BYTE4(v560))];
    v18 = BYTE2(v393);
    v19 = (unsigned __int8)(v713 ^ (v276 + 16));
    v20 = v273[2 * (unsigned __int8)v289] ^ (v276 + 1) ^ dword_179F00[2 * HIBYTE(v423)] ^ *((_DWORD *)v13 - 2);
    v547 = BYTE2(v278);
    v21 = v273[2 * (unsigned __int8)v289 + 1]
        ^ ((unsigned __int64)(v276 + 1) >> 32)
        ^ dword_179F00[2 * HIBYTE(v423) + 1]
        ^ *((_DWORD *)v13 - 1)
        ^ *(v12 - 1);
    v22 = &qword_17B6F8[HIBYTE(v369)];
    v23 = &qword_17A708[(unsigned __int8)((unsigned __int16)(v710 ^ (v276 + 32)) >> 8)];
    v24 = v20 ^ *(v12 - 2) ^ *((_DWORD *)v22 + 2);
    v490 = &dword_17AF08[2 * BYTE2(v369)];
    v25 = (unsigned __int8)(v710 ^ (v276 + 32));
    v757 = &qword_17B6F8[((unsigned int)v710 ^ ((_DWORD)v276 + 32)) >> 24];
    v394 = BYTE1(v393);
    v539 = &qword_17BF08[(unsigned __int8)(v569 ^ ((unsigned __int64)(v276 + 112) >> 32))];
    v402 = (unsigned __int8)((v574 ^ ((unsigned __int64)(v276 + 128) >> 32)) >> 16);
    v444 = (unsigned __int8)((unsigned __int16)(v574 ^ ((unsigned __int64)(v276 + 128) >> 32)) >> 8);
    HIDWORD(v560) = &qword_17BF08[(unsigned __int8)(v574 ^ ((unsigned __int64)(v276 + 128) >> 32))];
    v26 = v21 ^ *((_DWORD *)v22 + 3) ^ *((_DWORD *)v14 - 1);
    v602 = (unsigned __int8)v369;
    v515 = &qword_17A708[BYTE1(v369)];
    v27 = *((_DWORD *)&unk_17CF00 + 2 * v15 + 1);
    v28 = *((_DWORD *)&unk_17C700 + 2 * v16 + 1);
    v29 = v24 ^ *((_DWORD *)v14 - 2) ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v278)) ^ *((_DWORD *)&unk_17CF00 + 2 * v15);
    v583 = *((_DWORD *)&unk_17C700 + 2 * v16);
    v30 = *((_DWORD *)&unk_17C700 + 2 * BYTE1(v278) + 1);
    v279 = v29;
    v31 = v26 ^ v30 ^ v27;
    v32 = v273[2 * v19];
    v33 = v273[2 * v19 + 1];
    v34 = *((_DWORD *)v500 + 2);
    v364 = v31;
    v35 = *((_DWORD *)v500 + 3);
    v36 = &dword_17AF08[2 * BYTE2(v544)];
    v37 = *((_DWORD *)v23 - 2);
    v722 = (unsigned __int8)v544;
    v501 = &qword_17A708[BYTE1(v544)];
    v38 = v33 ^ dword_179F00[2 * HIBYTE(v579) + 1] ^ ((unsigned __int64)(v276 + 17) >> 32) ^ *((_DWORD *)v23 - 1);
    v39 = *(v490 - 2);
    v40 = *(v490 - 1);
    v491 = &dword_17AF08[2 * BYTE2(v552)];
    v744 = (unsigned __int8)v552;
    v553 = &qword_17A708[BYTE1(v552)];
    v726 = BYTE1(v284);
    v558 = &dword_17AF08[2 * BYTE2(v387)];
    v737 = BYTE2(v323);
    v370 = v28 ^ *((_DWORD *)v17 - 1) ^ v35 ^ v38 ^ v40 ^ *((_DWORD *)&unk_17CF00 + 2 * v18 + 1);
    v714 = *((_DWORD *)&unk_17C700 + 2 * v444 + 1);
    v762 = *((_DWORD *)v17 - 2)
         ^ v34
         ^ v32
         ^ dword_179F00[2 * HIBYTE(v579)]
         ^ (v276 + 17)
         ^ v37
         ^ v39
         ^ v583
         ^ *((_DWORD *)&unk_17CF00 + 2 * v18);
    v720 = *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v284) + 1);
    LODWORD(v606) = *((_DWORD *)&unk_17C700 + 2 * v444);
    v716 = *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v284));
    v445 = *((_DWORD *)v535 + 2);
    v454 = *((_DWORD *)v535 + 3);
    v759 = (unsigned __int8)v387;
    v41 = &qword_17A708[BYTE1(v387)];
    v42 = *v531 ^ v273[2 * v602] ^ (v276 + 49);
    v43 = v531[1] ^ v273[2 * v602 + 1] ^ ((unsigned __int64)(v276 + 49) >> 32);
    v44 = v273[2 * v25]
        ^ dword_179F00[2 * ((HIDWORD(v593) ^ ((unsigned __int64)(v276 + 208) >> 32)) >> 24)]
        ^ (v276 + 33)
        ^ *((_DWORD *)v515 - 2)
        ^ *(v36 - 2)
        ^ *((_DWORD *)v525 + 2)
        ^ *((_DWORD *)v528 - 2);
    v45 = dword_179F00[2 * ((HIDWORD(v593) ^ ((unsigned __int64)(v276 + 208) >> 32)) >> 24) + 1]
        ^ v273[2 * v25 + 1]
        ^ ((unsigned __int64)(v276 + 33) >> 32)
        ^ *((_DWORD *)v515 - 1)
        ^ *(v36 - 1)
        ^ *((_DWORD *)v525 + 3)
        ^ *((_DWORD *)v528 - 1)
        ^ *((_DWORD *)&unk_17C700 + 2 * v394 + 1);
    v516 = &dword_17AF08[2 * BYTE2(v312)];
    v532 = &qword_17BF08[(unsigned __int8)v284];
    v536 = HIBYTE(v284);
    v747 = BYTE1(v323);
    v750 = BYTE2(v423);
    v767 = (unsigned __int8)v312;
    v46 = &qword_17A708[BYTE1(v312)];
    LODWORD(v569) = &dword_17AF08[2 * BYTE2(v316)];
    v545 = HIBYTE(v323);
    LOBYTE(v37) = v423;
    LOWORD(v18) = v579;
    v575 = &qword_17BF08[(unsigned __int8)v323];
    v424 = BYTE1(v423);
    v47 = BYTE2(v579);
    v591 = &qword_17BF08[(unsigned __int8)v37];
    v388 = (unsigned __int8)v316;
    v580 = &qword_17A708[BYTE1(v316)];
    v764 = v47;
    v48 = v45 ^ *((_DWORD *)&unk_17CF00 + 2 * v402 + 1);
    v49 = BYTE1(v18);
    v50 = &qword_17BF08[(unsigned __int8)v18];
    v51 = HIDWORD(v593) ^ ((unsigned __int64)(v276 + 208) >> 32);
    v594 = &qword_17A708[BYTE1(v409)];
    v313 = v48;
    v285 = v44 ^ *((_DWORD *)&unk_17C700 + 2 * v394) ^ *((_DWORD *)&unk_17CF00 + 2 * v402);
    v603 = v50;
    v52 = BYTE2(v51);
    v395 = BYTE1(v51);
    v596 = &dword_17AF08[2 * BYTE2(v415)];
    LODWORD(v710) = &qword_17BF08[(unsigned __int8)v51];
    v403 = v340[10];
    v317 = v42 ^ *((_DWORD *)v501 - 2) ^ *(v491 - 2) ^ v445 ^ *((_DWORD *)v539 - 2) ^ v606 ^ v716;
    v446 = (unsigned __int8)v415;
    v324 = v43 ^ *((_DWORD *)v501 - 1) ^ *(v491 - 1) ^ v454 ^ *((_DWORD *)v539 - 1) ^ v714 ^ v720;
    LODWORD(v606) = &qword_17A708[BYTE1(v415)];
    v53 = *((_DWORD *)v553 - 2);
    v54 = *((_DWORD *)v553 - 1);
    v554 = &dword_17AF08[2 * BYTE2(v328)];
    v55 = v340[8];
    *(_DWORD *)&v340[8] = v340[9];
    v715 = &qword_17BF08[v55];
    v56 = v54 ^ dword_179F00[2 * v463 + 1] ^ v273[2 * v722 + 1] ^ ((unsigned __int64)(v276 + 65) >> 32) ^ *(v558 - 1);
    v57 = v273[2 * v722] ^ dword_179F00[2 * v463] ^ (v276 + 65) ^ v53 ^ *(v558 - 2);
    v430 = BYTE6(v354);
    v438 = BYTE6(v289);
    v492 = (unsigned __int8)v328;
    v559 = &qword_17A708[BYTE1(v328)];
    v58 = v57 ^ *(_DWORD *)(v560 + 8);
    v59 = v56 ^ *(_DWORD *)(v560 + 12);
    LODWORD(v560) = &dword_17AF08[2 * BYTE2(v333)];
    v60 = *(_DWORD *)(HIDWORD(v560) - 4) ^ v59;
    v455 = BYTE5(v354);
    v721 = &qword_17BF08[BYTE4(v354)];
    v61 = *(_DWORD *)(HIDWORD(v560) - 8)
        ^ v58
        ^ *((_DWORD *)&unk_17C700 + 2 * v726)
        ^ *((_DWORD *)&unk_17CF00 + 2 * v737);
    v464 = BYTE5(v289);
    HIDWORD(v354) = &qword_17BF08[BYTE4(v289)];
    v502 = (unsigned __int8)v333;
    HIDWORD(v560) = &qword_17A708[BYTE1(v333)];
    HIDWORD(v289) = v60 ^ *((_DWORD *)&unk_17C700 + 2 * v726 + 1) ^ *((_DWORD *)&unk_17CF00 + 2 * v737 + 1);
    v416 = v61;
    v717 = &dword_17AF08[2 * BYTE2(v339)];
    v510 = BYTE1(v373);
    v62 = dword_179F00[2 * v740 + 1] ^ ((unsigned __int64)(v276 + 81) >> 32) ^ v273[2 * v744 + 1] ^ *((_DWORD *)v41 - 1);
    v63 = dword_179F00[2 * v740] ^ (v276 + 81) ^ v273[2 * v744] ^ *((_DWORD *)v41 - 2);
    v745 = &qword_17BF08[(unsigned __int8)v373];
    v526 = BYTE1(v380);
    v753 = &qword_17BF08[(unsigned __int8)v380];
    v64 = v62 ^ *(v516 - 1) ^ *((_DWORD *)v566 + 3);
    v65 = v63 ^ *(v516 - 2) ^ *((_DWORD *)v566 + 2);
    v529 = BYTE2(v300);
    v517 = (unsigned __int8)v339;
    v723 = &qword_17A708[BYTE1(v339)];
    v66 = *((_DWORD *)v532 - 2);
    v727 = &dword_17AF08[2 * v340[6]];
    v67 = v64 ^ *((_DWORD *)v532 - 1);
    v533 = v340[4];
    v68 = v65 ^ v66 ^ *((_DWORD *)&unk_17C700 + 2 * v747);
    v738 = &qword_17A708[v340[5]];
    v329 = *((_DWORD *)&unk_17C700 + 2 * v747 + 1) ^ v67 ^ *((_DWORD *)&unk_17CF00 + 2 * v750 + 1);
    v741 = &dword_17AF08[2 * BYTE2(v354)];
    v748 = &dword_17AF08[2 * BYTE2(v289)];
    v755 = &qword_17A708[BYTE1(v289)];
    LODWORD(v289) = v68 ^ *((_DWORD *)&unk_17CF00 + 2 * v750);
    v540 = (unsigned __int8)v354;
    v751 = &qword_17A708[BYTE1(v354)];
    v334 = v273[2 * v759]
         ^ dword_179F00[2 * HIBYTE(v373)]
         ^ (v276 + 97)
         ^ *((_DWORD *)v46 - 2)
         ^ *(_DWORD *)(v569 - 8)
         ^ *(_DWORD *)(HIDWORD(v569) + 8)
         ^ *((_DWORD *)v575 - 2)
         ^ *((_DWORD *)&unk_17C700 + 2 * v424)
         ^ *((_DWORD *)&unk_17CF00 + 2 * v764);
    v425 = v273[2 * v759 + 1]
         ^ dword_179F00[2 * HIBYTE(v373) + 1]
         ^ ((unsigned __int64)(v276 + 97) >> 32)
         ^ *((_DWORD *)v46 - 1)
         ^ *(_DWORD *)(v569 - 4)
         ^ *(_DWORD *)(HIDWORD(v569) + 12)
         ^ *((_DWORD *)v575 - 1)
         ^ *((_DWORD *)&unk_17C700 + 2 * v424 + 1)
         ^ *((_DWORD *)&unk_17CF00 + 2 * v764 + 1);
    v69 = dword_179F00[2 * HIBYTE(v306) + 1] ^ v273[2 * (unsigned __int8)v409 + 1];
    v765 = *((_DWORD *)&unk_17C700 + 2 * *(_DWORD *)&v340[8] + 1);
    *(_QWORD *)v340 = *(_QWORD *)&v273[2 * v767]
                    ^ *(_QWORD *)&dword_179F00[2 * HIBYTE(v380)]
                    ^ (v276 + 113)
                    ^ *(v580 - 1)
                    ^ *(_QWORD *)&dword_17AF08[2 * BYTE2(v409) - 2]
                    ^ v587[1]
                    ^ *(v591 - 1)
                    ^ *((_QWORD *)&unk_17C700 + v49)
                    ^ *((_QWORD *)&unk_17CF00 + v52);
    v761 = *((_DWORD *)&unk_17C700 + 2 * *(_DWORD *)&v340[8]);
    v760 = dword_179F00[2 * HIBYTE(v306)] ^ v273[2 * (unsigned __int8)v409] ^ (v276 + 145);
    v473 = (_DWORD *)((char *)&unk_17CF00 + 8 * BYTE2(v373));
    v572 = (_DWORD *)((char *)&unk_17CF00 + 8 * BYTE2(v380));
    v588 = (char *)&unk_17CF00 + 8 * BYTE2(v300);
    LODWORD(v354) = *(v596 - 1)
                  ^ *((_DWORD *)v594 - 1)
                  ^ v273[2 * v388 + 1]
                  ^ dword_179F00[2 * HIBYTE(v300) + 1]
                  ^ (__CFADD__((_DWORD)v276, 129) + HIDWORD(v276))
                  ^ *((_DWORD *)v599 + 3)
                  ^ *((_DWORD *)v603 - 1)
                  ^ *((_DWORD *)&unk_17C700 + 2 * v395 + 1)
                  ^ *((_DWORD *)&unk_17CF00 + 2 * v403 + 1);
    *(_DWORD *)&v340[8] = v273[2 * v388]
                        ^ dword_179F00[2 * HIBYTE(v300)]
                        ^ (v276 + 129)
                        ^ *((_DWORD *)v594 - 2)
                        ^ *(v596 - 2)
                        ^ *((_DWORD *)v599 + 2)
                        ^ *((_DWORD *)v603 - 2)
                        ^ *((_DWORD *)&unk_17C700 + 2 * v395)
                        ^ *((_DWORD *)&unk_17CF00 + 2 * v403);
    v404 = &dword_17AF08[2 * BYTE2(v294)];
    v374 = &qword_17B6F8[HIBYTE(v294)];
    v295 = BYTE1(v300);
    v410 = &qword_17BF08[(unsigned __int8)v300];
    v301 = BYTE2(v306);
    v307 = BYTE1(v306);
    v70 = dword_179F00[2 * v507] ^ *(_DWORD *)(HIDWORD(v354) - 8) ^ v273[2 * v502] ^ (v276 + 193);
    v503 = v273[2 * v502 + 1]
         ^ *(_DWORD *)(HIDWORD(v354) - 4)
         ^ ((unsigned __int64)(v276 + 193) >> 32)
         ^ dword_179F00[2 * v507 + 1]
         ^ *((_DWORD *)v723 - 1)
         ^ *(v727 - 1)
         ^ *((_DWORD *)v730 + 3);
    v71 = *(v748 - 2)
        ^ v273[2 * v533]
        ^ (v276 + 225)
        ^ dword_179F00[2 * v536]
        ^ *((_DWORD *)v751 - 2)
        ^ *((_DWORD *)v374 + 2)
        ^ *((_DWORD *)v753 - 2)
        ^ *((_DWORD *)&unk_17C700 + 2 * v295);
    v72 = v273[2 * v533 + 1]
        ^ *(v748 - 1)
        ^ (__CFADD__((_DWORD)v276, 225) + HIDWORD(v276))
        ^ dword_179F00[2 * v536 + 1]
        ^ *((_DWORD *)v751 - 1)
        ^ *((_DWORD *)v374 + 3)
        ^ *((_DWORD *)v753 - 1)
        ^ *((_DWORD *)&unk_17C700 + 2 * v295 + 1)
        ^ *((_DWORD *)&unk_17CF00 + 2 * v301 + 1);
    v73 = v273[2 * v540 + 1]
        ^ *((_DWORD *)v755 - 1)
        ^ ((unsigned __int64)(v276 + 241) >> 32)
        ^ dword_179F00[2 * v545 + 1]
        ^ *(v404 - 1)
        ^ *((_DWORD *)v757 + 3)
        ^ *((_DWORD *)v410 - 1)
        ^ *((_DWORD *)&unk_17C700 + 2 * v307 + 1);
    v296 = v760
         ^ *(_DWORD *)(v606 - 8)
         ^ *(v554 - 2)
         ^ *(_DWORD *)(HIDWORD(v606) + 8)
         ^ *(_DWORD *)(v710 - 8)
         ^ v761
         ^ *((_DWORD *)&unk_17CF00 + 2 * v430);
    v405 = *((_DWORD *)v755 - 2)
         ^ v273[2 * v540]
         ^ (v276 + 241)
         ^ dword_179F00[2 * v545]
         ^ *(v404 - 2)
         ^ *((_DWORD *)v757 + 2)
         ^ *((_DWORD *)v410 - 2)
         ^ *((_DWORD *)&unk_17C700 + 2 * v307)
         ^ *((_DWORD *)&unk_17CF00 + 2 * v547);
    v396 = v71 ^ *((_DWORD *)&unk_17CF00 + 2 * v301);
    v308 = *((_DWORD *)&unk_17CF00 + 2 * v438)
         ^ v273[2 * v446]
         ^ (v276 + 161)
         ^ dword_179F00[2 * v484]
         ^ *((_DWORD *)v559 - 2)
         ^ *(_DWORD *)(v560 - 8)
         ^ *(_DWORD *)(HIDWORD(v710) + 8)
         ^ *((_DWORD *)v715 - 2)
         ^ *((_DWORD *)&unk_17C700 + 2 * v455);
    v381 = v70
         ^ *((_DWORD *)v723 - 2)
         ^ *(v727 - 2)
         ^ *((_DWORD *)v730 + 2)
         ^ *((_DWORD *)&unk_17C700 + 2 * v510)
         ^ *v572;
    v375 = *((_DWORD *)&unk_17C700 + 2 * v464)
         ^ v273[2 * v492]
         ^ (v276 + 177)
         ^ dword_179F00[2 * v496]
         ^ *(_DWORD *)(HIDWORD(v560) - 8)
         ^ *(v717 - 2)
         ^ *((_DWORD *)v719 + 2)
         ^ *((_DWORD *)v721 - 2)
         ^ *v473;
    v302 = *(v554 - 1)
         ^ v69
         ^ ((unsigned __int64)(v276 + 145) >> 32)
         ^ *(_DWORD *)(v606 - 4)
         ^ *(_DWORD *)(HIDWORD(v606) + 12)
         ^ *(_DWORD *)(v710 - 4)
         ^ v765
         ^ *((_DWORD *)&unk_17CF00 + 2 * v430 + 1);
    v74 = v73 ^ *((_DWORD *)&unk_17CF00 + 2 * v547 + 1);
    v389 = v273[2 * v517]
         ^ *((_DWORD *)v734 + 2)
         ^ (v276 + 209)
         ^ dword_179F00[2 * v522]
         ^ *((_DWORD *)v738 - 2)
         ^ *(v741 - 2)
         ^ *((_DWORD *)v745 - 2)
         ^ *((_DWORD *)&unk_17C700 + 2 * v526)
         ^ *((_DWORD *)&unk_17CF00 + 2 * v529);
    HIDWORD(v354) = v273[2 * v446 + 1]
                  ^ *((_DWORD *)&unk_17CF00 + 2 * v438 + 1)
                  ^ ((unsigned __int64)(v276 + 161) >> 32)
                  ^ dword_179F00[2 * v484 + 1]
                  ^ *((_DWORD *)v559 - 1)
                  ^ *(_DWORD *)(v560 - 4)
                  ^ *(_DWORD *)(HIDWORD(v710) + 12)
                  ^ *((_DWORD *)v715 - 1)
                  ^ *((_DWORD *)&unk_17C700 + 2 * v455 + 1);
    v431 = v273[2 * v492 + 1]
         ^ *((_DWORD *)&unk_17C700 + 2 * v464 + 1)
         ^ ((unsigned __int64)(v276 + 177) >> 32)
         ^ dword_179F00[2 * v496 + 1]
         ^ *(_DWORD *)(HIDWORD(v560) - 4)
         ^ *(v717 - 1)
         ^ *((_DWORD *)v719 + 3)
         ^ *((_DWORD *)v721 - 1)
         ^ v473[1];
    v439 = v503 ^ *((_DWORD *)&unk_17C700 + 2 * v510 + 1) ^ v572[1];
    v447 = *((_DWORD *)v734 + 3)
         ^ v273[2 * v517 + 1]
         ^ ((unsigned __int64)(v276 + 209) >> 32)
         ^ dword_179F00[2 * v522 + 1]
         ^ *((_DWORD *)v738 - 1)
         ^ *(v741 - 1)
         ^ *((_DWORD *)v745 - 1)
         ^ *((_DWORD *)&unk_17C700 + 2 * v526 + 1)
         ^ *((_DWORD *)v588 + 1);
    v770 = v72;
    v527 = HIBYTE(*(_DWORD *)&v340[4]);
    v485 = HIBYTE(v74);
    v479 = HIBYTE(v72);
    v523 = HIBYTE(v425);
    v456 = v74;
    v518 = HIBYTE(v329);
    v537 = &dword_179F00[2 * HIBYTE(v431)];
    v541 = &qword_17B6F8[HIBYTE(v317)];
    v548 = &qword_17B6F8[HIBYTE(v416)];
    v555 = &qword_17B6F8[BYTE3(v289)];
    v567 = &qword_17B6F8[HIBYTE(v334)];
    v581 = &qword_17B6F8[HIBYTE(*(_DWORD *)v340)];
    v563 = &dword_179F00[2 * HIBYTE(v72)];
    v573 = &dword_179F00[2 * HIBYTE(v74)];
    v749 = &qword_17B6F8[HIBYTE(v389)];
    v411 = &qword_17B6F8[HIBYTE(v396)];
    v75 = v762;
    v604 = &dword_179F00[2 * HIBYTE(v48)];
    v600 = &qword_17B6F8[HIBYTE(v296)];
    v607 = &qword_17B6F8[HIBYTE(v308)];
    v746 = &dword_179F00[2 * HIBYTE(v329)];
    v742 = &qword_17B6F8[HIBYTE(v381)];
    v752 = &dword_179F00[2 * HIBYTE(v425)];
    v731 = &qword_17B6F8[HIBYTE(v375)];
    v766 = &dword_179F00[2 * HIBYTE(HIDWORD(v354))];
    v754 = &dword_179F00[2 * HIBYTE(*(_DWORD *)&v340[4])];
    v774 = HIBYTE(HIDWORD(v354));
    v756 = &qword_17B6F8[HIBYTE(v405)];
    v758 = &qword_17B6F8[HIBYTE(v279)];
    v763 = &qword_17B6F8[HIBYTE(v762)];
    v769 = &qword_17B6F8[HIBYTE(v285)];
    v76 = &qword_17BF08[BYTE4(v289)];
    v77 = &qword_17A708[BYTE1(v75)];
    v78 = BYTE2(v425);
    v79 = &dword_17AF08[2 * BYTE2(v285)];
    v80 = BYTE1(v425);
    v561 = &qword_17BF08[(unsigned __int8)v425];
    v576 = *((_DWORD *)v76 - 2);
    v584 = *((_DWORD *)v76 - 1);
    v276 += 2;
    v81 = (unsigned __int8)v75;
    v768 = &dword_17AF08[2 * BYTE2(v75)];
    v426 = BYTE2(v329);
    v82 = v340[6];
    v83 = &qword_17BF08[(unsigned __int8)v329];
    v84 = &qword_17A708[BYTE1(v285)];
    v85 = &dword_17AF08[2 * BYTE2(v317)];
    v86 = *((_DWORD *)&unk_17CF00 + 2 * v78);
    v570 = *((_DWORD *)&unk_17CF00 + 2 * v78 + 1);
    LOWORD(v75) = v416;
    v465 = &qword_17A708[BYTE1(v317)];
    v87 = *(v79 - 1);
    v711 = *((_DWORD *)&unk_17C700 + 2 * v80);
    v88 = *((_DWORD *)&unk_17C700 + 2 * BYTE1(v329))
        ^ *v537
        ^ v273[2 * (unsigned __int8)v279]
        ^ *((_DWORD *)v77 - 2)
        ^ *(v79 - 2);
    v712 = *((_DWORD *)&unk_17C700 + 2 * v80 + 1);
    v89 = v340[5];
    v417 = &dword_17AF08[2 * BYTE2(v416)];
    v90 = v340[4];
    v91 = v88 ^ *((_DWORD *)v541 + 2);
    v92 = *((_DWORD *)&unk_17C700 + 2 * BYTE1(v329) + 1)
        ^ v537[1]
        ^ v273[2 * (unsigned __int8)v279 + 1]
        ^ *((_DWORD *)v77 - 1)
        ^ v87
        ^ *((_DWORD *)v541 + 3);
    *(_DWORD *)&v340[4] = (unsigned __int8)v75;
    v546 = &qword_17BF08[v90];
    v542 = &qword_17A708[BYTE1(v75)];
    LODWORD(v718) = v91 ^ v576 ^ v86;
    v538 = &dword_17AF08[2 * BYTE2(v289)];
    v93 = v570;
    v571 = &qword_17A708[BYTE1(v289)];
    v94 = v92 ^ v584 ^ v93;
    v585 = &qword_17BF08[(unsigned __int8)v354];
    v95 = *((_DWORD *)v84 - 2) ^ v273[2 * v81] ^ *((_DWORD *)v83 - 2) ^ dword_179F00[2 * HIBYTE(v439)] ^ *(v85 - 2);
    v577 = &dword_17AF08[2 * BYTE2(v334)];
    HIDWORD(v718) = v94;
    HIDWORD(v713) = *((_DWORD *)v83 - 1)
                  ^ v273[2 * v81 + 1]
                  ^ dword_179F00[2 * HIBYTE(v439) + 1]
                  ^ *((_DWORD *)v84 - 1)
                  ^ *(v85 - 1)
                  ^ *((_DWORD *)v548 + 3)
                  ^ v712
                  ^ *((_DWORD *)&unk_17CF00 + 2 * v82 + 1);
    v96 = *((_DWORD *)v555 + 3);
    LODWORD(v713) = v95 ^ *((_DWORD *)v548 + 2) ^ v711 ^ *((_DWORD *)&unk_17CF00 + 2 * v82);
    v97 = *((_DWORD *)v555 + 2);
    v98 = *((_DWORD *)v561 - 2);
    v556 = *((_DWORD *)v561 - 1);
    v99 = v273[2 * (unsigned __int8)v285 + 1] ^ v96 ^ dword_179F00[2 * HIBYTE(v447) + 1] ^ *((_DWORD *)v465 - 1);
    v100 = dword_179F00[2 * v479];
    v101 = *(v417 - 2) ^ v273[2 * (unsigned __int8)v285] ^ v97 ^ dword_179F00[2 * HIBYTE(v447)] ^ *((_DWORD *)v465 - 2);
    v102 = v563[1];
    v466 = &dword_17AF08[2 * v340[2]];
    v562 = &qword_17BF08[BYTE4(v354)];
    v564 = BYTE2(v431);
    v771 = v340[0];
    v474 = &qword_17A708[v340[1]];
    HIDWORD(v710) = v99
                  ^ *(v417 - 1)
                  ^ v556
                  ^ *((_DWORD *)&unk_17C700 + 2 * v89 + 1)
                  ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v354) + 1);
    v480 = &dword_17AF08[2 * v340[10]];
    *(_DWORD *)v340 = *((_DWORD *)v567 + 2);
    v103 = *((_DWORD *)v567 + 3);
    LODWORD(v710) = v101 ^ v98 ^ *((_DWORD *)&unk_17C700 + 2 * v89) ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v354));
    v104 = *(v538 - 2) ^ v273[2 * (unsigned __int8)v317] ^ v100 ^ *((_DWORD *)v542 - 2);
    v105 = v273[2 * (unsigned __int8)v317 + 1] ^ *(v538 - 1) ^ v102 ^ *((_DWORD *)v542 - 1);
    v318 = BYTE1(v431);
    v608 = &qword_17BF08[(unsigned __int8)v431];
    v330 = BYTE2(v439);
    v432 = &qword_17A708[v340[9]];
    v568 = &dword_17AF08[2 * BYTE2(v296)];
    v772 = BYTE1(v439);
    v735 = &qword_17BF08[(unsigned __int8)v439];
    v773 = BYTE2(v447);
    v440 = &qword_17A708[BYTE1(v296)];
    v728 = &dword_17AF08[2 * BYTE2(v308)];
    HIDWORD(v534) = v105
                  ^ v103
                  ^ *((_DWORD *)v546 - 1)
                  ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v354) + 1)
                  ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v302) + 1);
    LODWORD(v534) = v104
                  ^ *(_DWORD *)v340
                  ^ *((_DWORD *)v546 - 2)
                  ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v354))
                  ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v302));
    v106 = v273[2 * *(_DWORD *)&v340[4] + 1]
         ^ *((_DWORD *)v571 - 1)
         ^ v573[1]
         ^ *(v577 - 1)
         ^ *((_DWORD *)v581 + 3)
         ^ *((_DWORD *)v585 - 1);
    v107 = *((_DWORD *)v571 - 2)
         ^ v273[2 * *(_DWORD *)&v340[4]]
         ^ dword_179F00[2 * v485]
         ^ *(v577 - 2)
         ^ *((_DWORD *)v581 + 2);
    v557 = *((_QWORD *)&unk_17C700 + BYTE5(v354));
    v108 = *(_QWORD *)&v273[2 * (unsigned __int8)v289] ^ *(_QWORD *)&dword_179F00[2 * HIBYTE(v364)];
    LODWORD(v289) = BYTE1(v447);
    v493 = &qword_17BF08[(unsigned __int8)v447];
    *(_DWORD *)&v340[4] = (unsigned __int8)v308;
    v448 = &qword_17A708[BYTE1(v308)];
    v486 = &dword_17AF08[2 * BYTE2(v375)];
    v309 = BYTE2(v456);
    LODWORD(v543) = v107
                  ^ *((_DWORD *)v585 - 2)
                  ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v302))
                  ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE6(v354));
    HIDWORD(v543) = *((_DWORD *)&unk_17C700 + 2 * BYTE1(v302) + 1)
                  ^ v106
                  ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE6(v354) + 1);
    v109 = v108
         ^ qword_17A708[BYTE1(v334) - 1]
         ^ *((_QWORD *)v466 - 1)
         ^ qword_17B6F8[HIBYTE(*(_DWORD *)&v340[8]) + 1]
         ^ qword_17BF08[(unsigned __int8)v302 - 1];
    v110 = *((_DWORD *)&unk_17C700 + 2 * v318);
    v111 = *((_DWORD *)&unk_17C700 + 2 * v318 + 1);
    v112 = *v604;
    v467 = &dword_17AF08[2 * BYTE2(v381)];
    v319 = BYTE1(v456);
    v504 = &qword_17BF08[(unsigned __int8)v456];
    v286 = &qword_17BF08[(unsigned __int8)v364];
    HIDWORD(v354) = (unsigned __int8)v381;
    v457 = &qword_17A708[BYTE1(v381)];
    v497 = &dword_17AF08[2 * BYTE2(v389)];
    v113 = v273[2 * v771 + 1] ^ v604[1];
    v551 = v109 ^ v557 ^ *((_QWORD *)&unk_17CF00 + v564);
    v114 = *(v474 - 1);
    v475 = &qword_17A708[BYTE1(v389)];
    v115 = *(v480 - 2);
    v586 = &dword_17AF08[2 * BYTE2(v396)];
    v589 = &qword_17BF08[(unsigned __int8)v370];
    v116 = *((_QWORD *)&unk_17C700 + v772);
    v117 = dword_179F00[2 * HIBYTE(v370) + 1]
         ^ v273[2 * (unsigned __int8)v334 + 1]
         ^ HIDWORD(v114)
         ^ *(v480 - 1)
         ^ *((_DWORD *)v600 + 3);
    v481 = &qword_17A708[BYTE1(v396)];
    v118 = dword_179F00[2 * HIBYTE(v370)] ^ v273[2 * (unsigned __int8)v334] ^ v114 ^ v115 ^ *((_DWORD *)v600 + 2);
    v592 = &dword_17AF08[2 * BYTE2(v405)];
    v601 = &qword_17BF08[(unsigned __int8)v313];
    v382 = BYTE2(v324);
    v595 = &dword_17AF08[2 * BYTE2(v279)];
    HIDWORD(v560) = v117 ^ *((_DWORD *)v562 - 1) ^ v111 ^ *((_DWORD *)&unk_17CF00 + 2 * v330 + 1);
    v605 = &qword_17A708[BYTE1(v279)];
    LODWORD(v560) = v110 ^ v118 ^ *((_DWORD *)v562 - 2) ^ *((_DWORD *)&unk_17CF00 + 2 * v330);
    v597 = &qword_17A708[BYTE1(v405)];
    v119 = v607[1];
    v120 = *((_DWORD *)v432 - 1) ^ v113 ^ *(v568 - 1) ^ HIDWORD(v119);
    v121 = v273[2 * v771] ^ v112 ^ *((_DWORD *)v432 - 2) ^ *(v568 - 2) ^ v119;
    v122 = *(v608 - 1);
    v123 = *((_QWORD *)&unk_17CF00 + BYTE2(v770));
    LODWORD(v569) = v120 ^ HIDWORD(v122) ^ HIDWORD(v116) ^ *((_DWORD *)&unk_17CF00 + 2 * v773 + 1);
    v565 = v121 ^ v122 ^ v116 ^ *((_DWORD *)&unk_17CF00 + 2 * v773);
    LODWORD(v122) = v273[2 * v340[8] + 1] ^ dword_179F00[2 * HIBYTE(v324) + 1] ^ *((_DWORD *)v440 - 1) ^ *(v728 - 1);
    HIDWORD(v569) = dword_179F00[2 * HIBYTE(v324)]
                  ^ v273[2 * v340[8]]
                  ^ *((_DWORD *)v440 - 2)
                  ^ *(v728 - 2)
                  ^ *((_DWORD *)v731 + 2)
                  ^ *((_DWORD *)v735 - 2)
                  ^ *((_DWORD *)&unk_17C700 + 2 * v289)
                  ^ v123;
    v433 = (_DWORD *)((char *)&unk_17C700 + 8 * BYTE1(v313));
    v441 = (char *)&unk_17CF00 + 8 * BYTE2(v324);
    v574 = v122
         ^ *((_DWORD *)v731 + 3)
         ^ *((_DWORD *)v735 - 1)
         ^ *((_DWORD *)&unk_17C700 + 2 * v289 + 1)
         ^ HIDWORD(v123);
    HIDWORD(v116) = *((_DWORD *)&unk_17C700 + 2 * BYTE1(v770))
                  ^ dword_179F00[2 * HIBYTE(HIDWORD(v289))]
                  ^ v273[2 * (unsigned __int8)v296]
                  ^ *((_DWORD *)v448 - 2)
                  ^ *(v486 - 2)
                  ^ *((_DWORD *)v742 + 2)
                  ^ *((_DWORD *)v493 - 2);
    LODWORD(v114) = dword_179F00[2 * HIBYTE(HIDWORD(v289)) + 1]
                  ^ v273[2 * (unsigned __int8)v296 + 1]
                  ^ *((_DWORD *)v448 - 1)
                  ^ *(v486 - 1)
                  ^ *((_DWORD *)v742 + 3)
                  ^ *((_DWORD *)v493 - 1)
                  ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v770) + 1);
    HIDWORD(v122) = *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v364) + 1) ^ v273[2 * *(_DWORD *)&v340[4] + 1] ^ v746[1];
    LODWORD(v123) = &qword_17BF08[(unsigned __int8)v770];
    v124 = *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v364)) ^ v273[2 * *(_DWORD *)&v340[4]] ^ dword_179F00[2 * v518];
    v125 = dword_179F00[2 * v523];
    v487 = *((_DWORD *)&unk_17C700 + 2 * v319 + 1);
    v449 = *((_DWORD *)&unk_17C700 + 2 * v319);
    *(_DWORD *)&v340[4] = *(_DWORD *)(v123 - 4);
    v578 = v114 ^ *((_DWORD *)&unk_17CF00 + 2 * v309 + 1);
    *(_DWORD *)v340 = *(_DWORD *)(v123 - 8);
    LODWORD(v122) = &qword_17A708[BYTE1(v375)];
    v126 = BYTE1(v324);
    v325 = &qword_17BF08[(unsigned __int8)v324];
    v418 = v126;
    v521 = HIDWORD(v116) ^ *((_DWORD *)&unk_17CF00 + 2 * v309);
    v320 = (char *)&unk_17C700 + 8 * v126;
    LODWORD(v123) = *((_DWORD *)v286 - 2)
                  ^ v273[2 * HIDWORD(v354)]
                  ^ dword_179F00[2 * v527]
                  ^ *((_DWORD *)v475 - 2)
                  ^ *(v586 - 2)
                  ^ *((_DWORD *)v756 + 2)
                  ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v370));
    v127 = *((_DWORD *)v286 - 1)
         ^ v273[2 * HIDWORD(v354) + 1]
         ^ v754[1]
         ^ *((_DWORD *)v475 - 1)
         ^ *(v586 - 1)
         ^ *((_DWORD *)v756 + 3)
         ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v370) + 1);
    v128 = *((_DWORD *)v589 - 2);
    HIDWORD(v524) = HIDWORD(v122)
                  ^ *(_DWORD *)(v122 - 4)
                  ^ *(v467 - 1)
                  ^ *((_DWORD *)v749 + 3)
                  ^ *(_DWORD *)&v340[4]
                  ^ v487;
    LODWORD(v524) = v124 ^ *(_DWORD *)(v122 - 8) ^ *(v467 - 2) ^ *((_DWORD *)v749 + 2) ^ *(_DWORD *)v340 ^ v449;
    LODWORD(v114) = *((_DWORD *)v589 - 1);
    HIDWORD(v582) = *((_DWORD *)&unk_17C700 + 2 * BYTE1(v364) + 1)
                  ^ v273[2 * (unsigned __int8)v375 + 1]
                  ^ v752[1]
                  ^ *((_DWORD *)v457 - 1)
                  ^ *(v497 - 1)
                  ^ *((_DWORD *)v411 + 3)
                  ^ *((_DWORD *)v504 - 1)
                  ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v370) + 1);
    LODWORD(v582) = v273[2 * (unsigned __int8)v375]
                  ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v364))
                  ^ v125
                  ^ *((_DWORD *)v457 - 2)
                  ^ *(v497 - 2)
                  ^ *((_DWORD *)v411 + 2)
                  ^ *((_DWORD *)v504 - 2)
                  ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v370));
    HIDWORD(v116) = v433[1]
                  ^ v273[2 * (unsigned __int8)v389 + 1]
                  ^ *((_DWORD *)v758 + 3)
                  ^ dword_179F00[2 * BYTE3(v354) + 1]
                  ^ *((_DWORD *)v481 - 1)
                  ^ *(v592 - 1)
                  ^ v114;
    HIDWORD(v122) = v273[2 * (unsigned __int8)v389]
                  ^ *((_DWORD *)v758 + 2)
                  ^ dword_179F00[2 * BYTE3(v354)]
                  ^ *((_DWORD *)v481 - 2)
                  ^ *(v592 - 2)
                  ^ v128
                  ^ *v433;
    v590 = v123 ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v313));
    v530 = v127 ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v313) + 1);
    HIDWORD(v123) = *(v595 - 2)
                  ^ v273[2 * (unsigned __int8)v396]
                  ^ dword_179F00[2 * HIBYTE(v302)]
                  ^ *((_DWORD *)v597 - 2);
    v129 = v273[2 * (unsigned __int8)v396 + 1]
         ^ *(v595 - 1)
         ^ dword_179F00[2 * HIBYTE(v302) + 1]
         ^ *((_DWORD *)v597 - 1)
         ^ *((_DWORD *)v763 + 3)
         ^ *((_DWORD *)v601 - 1)
         ^ *((_DWORD *)v320 + 1);
    LODWORD(v122) = v273[2 * (unsigned __int8)v405 + 1]
                  ^ *((_DWORD *)v605 - 1)
                  ^ *((_DWORD *)&unk_17CF00 + 2 * v426 + 1)
                  ^ v766[1]
                  ^ *(v768 - 1)
                  ^ *((_DWORD *)v769 + 3)
                  ^ *((_DWORD *)v325 - 1);
    v130 = v273[2 * (unsigned __int8)v405]
         ^ *((_DWORD *)v605 - 2)
         ^ *((_DWORD *)&unk_17CF00 + 2 * v426)
         ^ dword_179F00[2 * v774]
         ^ *(v768 - 2)
         ^ *((_DWORD *)v769 + 2)
         ^ *((_DWORD *)v325 - 2);
    LODWORD(v593) = HIDWORD(v122) ^ *((_DWORD *)&unk_17CF00 + 2 * v382);
    HIDWORD(v598) = v129 ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE6(v289) + 1);
    LODWORD(v598) = HIDWORD(v123)
                  ^ *((_DWORD *)v763 + 2)
                  ^ *((_DWORD *)v601 - 2)
                  ^ *((_DWORD *)&unk_17C700 + 2 * v418)
                  ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE6(v289));
    LODWORD(v606) = v130 ^ *((_DWORD *)&unk_17C700 + 2 * BYTE5(v289));
    HIDWORD(v593) = HIDWORD(v116) ^ *((_DWORD *)v441 + 1);
    HIDWORD(v606) = v122 ^ *((_DWORD *)&unk_17C700 + 2 * BYTE5(v289) + 1);
  }
  while ( v276 != 14 );
  v131 = v273;
  v277 = -1;
  do
  {
    v297 = ~(_DWORD)v615;
    v310 = ~(_DWORD)v622;
    v314 = ~(_DWORD)v629;
    v326 = ~(_DWORD)v636;
    v331 = ~(_DWORD)v639;
    v341 = ~(_DWORD)v645;
    v376 = ~(_DWORD)v676;
    v390 = ~(_DWORD)v683;
    v349 = ~v649;
    v355 = ~HIDWORD(v651);
    v406 = ~(_DWORD)v690;
    v419 = ~(_DWORD)v697;
    v290 = v609 ^ v277;
    v434 = ~(_DWORD)v704;
    v303 = HIDWORD(v615) ^ HIDWORD(v277) ^ 0x10000000;
    v321 = HIDWORD(v629) ^ HIDWORD(v277) ^ 0x30000000;
    v344 = HIDWORD(v645) ^ HIDWORD(v277) ^ 0x60000000;
    v365 = v664 ^ HIDWORD(v277) ^ 0x90000000;
    v383 = HIDWORD(v676) ^ HIDWORD(v277) ^ 0xB0000000;
    v397 = HIDWORD(v683) ^ HIDWORD(v277) ^ 0xC0000000;
    v412 = HIDWORD(v690) ^ HIDWORD(v277) ^ 0xD0000000;
    v482 = HIDWORD(v704) ^ HIDWORD(v277) ^ 0xF0000000;
    v427 = HIDWORD(v697) ^ HIDWORD(v277) ^ 0xE0000000;
    v468 = v657 ^ (HIDWORD(v277) + 0x80000000);
    v361 = ~v661;
    v335 = HIDWORD(v639) ^ HIDWORD(v277) ^ 0x50000000;
    v371 = ~(_DWORD)v667;
    v458 = v651 ^ HIDWORD(v277) ^ 0x70000000;
    LODWORD(v667) = HIBYTE(v468);
    HIDWORD(v676) = HIBYTE(v365);
    HIDWORD(v683) = (HIDWORD(v667) ^ HIDWORD(v277) ^ 0xA0000000) >> 24;
    v476 = HIDWORD(v667) ^ HIDWORD(v277) ^ 0xA0000000;
    v701 = HIBYTE(v397);
    v694 = HIBYTE(v383);
    v132 = (unsigned int)~(_DWORD)v609 >> 24;
    v133 = (unsigned int)~(_DWORD)v615 >> 24;
    v134 = (unsigned int)~(_DWORD)v622 >> 24;
    v708 = HIBYTE(v412);
    v724 = HIBYTE(v427);
    v135 = (unsigned int)~HIDWORD(v651) >> 24;
    v494 = (unsigned int)~(_DWORD)v629 >> 24;
    v729 = HIBYTE(v482);
    v736 = (unsigned int)(HIDWORD(v609) ^ HIDWORD(v277)) >> 24;
    v498 = (unsigned int)~(_DWORD)v636 >> 24;
    v743 = HIBYTE(v303);
    v488 = (HIDWORD(v622) ^ HIDWORD(v277) ^ 0x20000000u) >> 24;
    v280 = &qword_17B6F8[(unsigned int)~(_DWORD)v683 >> 24];
    v136 = &dword_179F00[2 * HIBYTE(v458)];
    v610 = &qword_17B6F8[(unsigned int)~(_DWORD)v676 >> 24];
    LODWORD(v615) = &qword_17B6F8[(unsigned int)~(_DWORD)v690 >> 24];
    v137 = &qword_17B6F8[(unsigned int)~v649 >> 24];
    LODWORD(v622) = &qword_17B6F8[(unsigned int)~(_DWORD)v697 >> 24];
    v650 = &qword_17B6F8[(unsigned int)~(_DWORD)v639 >> 24];
    LODWORD(v629) = &qword_17B6F8[(unsigned int)~(_DWORD)v704 >> 24];
    v652 = &qword_17B6F8[(unsigned int)~(_DWORD)v645 >> 24];
    LODWORD(v636) = &qword_17B6F8[v132];
    v655 = v137;
    v658 = &qword_17B6F8[v135];
    v640 = &qword_17B6F8[v133];
    v642 = &qword_17B6F8[v134];
    v646 = &qword_17B6F8[v494];
    v138 = &qword_17BF08[(unsigned __int8)(BYTE4(v615) ^ BYTE4(v277))];
    v648 = &qword_17B6F8[v498];
    v495 = HIBYTE(v321);
    v139 = HIDWORD(v636) ^ HIDWORD(v277) ^ 0x40000000;
    v140 = v136[1];
    v141 = &dword_17AF08[2 * BYTE2(v341)];
    v142 = &qword_17A708[BYTE1(v326)];
    v143 = *((_DWORD *)v138 - 2);
    v499 = HIBYTE(v139);
    v508 = HIBYTE(v335);
    v442 = (unsigned __int8)((unsigned __int16)(WORD2(v622) ^ WORD2(v277)) >> 8);
    v144 = *(v141 - 1);
    v450 = &qword_17A708[BYTE1(v314)];
    v145 = *(v141 - 2);
    v511 = &dword_17AF08[2 * BYTE2(v331)];
    v146 = *((_DWORD *)v280 + 3);
    v147 = ~v131[2 * (unsigned __int8)v310] ^ *v136 ^ *((_DWORD *)v142 - 2) ^ v145 ^ *((_DWORD *)v280 + 2);
    v612 = &qword_17BF08[BYTE4(v290)];
    v281 = 0xFFFFFF - HIDWORD(v277);
    v148 = BYTE2(v139);
    v618 = &qword_17BF08[(unsigned __int8)(BYTE4(v622) ^ BYTE4(v277))];
    v505 = (unsigned __int8)((HIDWORD(v622) ^ HIDWORD(v277) ^ 0x20000000u) >> 16);
    v149 = *((_DWORD *)v138 - 1)
         ^ v144
         ^ v131[2 * (unsigned __int8)v310 + 1]
         ^ ~((0xFFFFFF - HIDWORD(v277)) ^ 0x10000000)
         ^ v140
         ^ *((_DWORD *)v142 - 1)
         ^ v146
         ^ *((_DWORD *)&unk_17C700 + 2 * (unsigned __int8)((unsigned __int16)(WORD2(v629) ^ WORD2(v277)) >> 8) + 1);
    v662 = &dword_17AF08[2 * BYTE2(v314)];
    v684 = (unsigned __int8)v331;
    v287 = &qword_17A708[BYTE1(v331)];
    v150 = &dword_17AF08[2 * BYTE2(v349)];
    v671 = (unsigned __int8)((unsigned __int16)(WORD2(v636) ^ WORD2(v277)) >> 8);
    v634 = &qword_17BF08[(unsigned __int8)(BYTE4(v636) ^ BYTE4(v277))];
    v677 = BYTE2(v344);
    v519 = BYTE2(v321);
    v626 = &qword_17BF08[(unsigned __int8)v321];
    v332 = v143 ^ v147 ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v321)) ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v335));
    v151 = v442;
    v443 = v149 ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v335) + 1);
    v152 = (int *)((char *)&unk_17C700 + 8 * v151);
    v153 = *v152;
    v154 = v152[1];
    v155 = v131[2 * (unsigned __int8)v297 + 1]
         ^ dword_179F00[2 * HIBYTE(v344) + 1]
         ^ (HIDWORD(v277) - 0xFFFFFF)
         ^ *((_DWORD *)v450 - 1);
    HIDWORD(v277) -= 0x1FFFFFF;
    v156 = *((_DWORD *)v450 - 2) ^ ~(v131[2 * (unsigned __int8)v297] ^ dword_179F00[2 * HIBYTE(v344)]);
    v157 = HIDWORD(v277) == -234881025;
    if ( HIDWORD(v277) == -234881025 )
      v157 = 1;
    v158 = (unsigned __int8)v326;
    v451 = &dword_17AF08[2 * BYTE2(v326)];
    v691 = (unsigned __int8)v341;
    v159 = &qword_17A708[BYTE1(v341)];
    v160 = v155 ^ *(v511 - 1) ^ *((_DWORD *)v610 + 3) ^ *((_DWORD *)v612 - 1) ^ v154;
    v161 = &dword_17AF08[2 * BYTE2(v355)];
    v162 = (unsigned __int8)v314;
    v315 = *((_DWORD *)v612 - 2)
         ^ v156
         ^ *(v511 - 2)
         ^ *((_DWORD *)v610 + 2)
         ^ v153
         ^ *((_DWORD *)&unk_17CF00 + 2 * v148);
    v163 = &qword_17BF08[(unsigned __int8)v335];
    v336 = BYTE1(v335);
    v164 = &v131[2 * v162];
    v322 = v160 ^ *((_DWORD *)&unk_17CF00 + 2 * v148 + 1);
    v165 = *((_DWORD *)v618 - 2);
    v698 = (unsigned __int8)v349;
    v166 = &qword_17A708[BYTE1(v349)];
    v167 = ~*v164 ^ dword_179F00[2 * v668] ^ *((_DWORD *)v287 - 2) ^ *(v150 - 2) ^ *(_DWORD *)(v616 + 8);
    v168 = v344;
    v169 = *(v150 - 1)
         ^ v164[1]
         ^ v281
         ^ 0xDFFFFFFF
         ^ dword_179F00[2 * v668 + 1]
         ^ *((_DWORD *)v287 - 1)
         ^ *(_DWORD *)(v616 + 12)
         ^ *((_DWORD *)v618 - 1);
    v345 = BYTE1(v344);
    v619 = &qword_17BF08[v168];
    v350 = BYTE2(v468);
    v705 = (unsigned __int8)v355;
    v356 = &qword_17A708[BYTE1(v355)];
    v327 = v169 ^ *((_DWORD *)&unk_17C700 + 2 * v671 + 1) ^ *((_DWORD *)&unk_17CF00 + 2 * v677 + 1);
    v288 = v167 ^ v165 ^ *((_DWORD *)&unk_17C700 + 2 * v671) ^ *((_DWORD *)&unk_17CF00 + 2 * v677);
    v170 = *((_DWORD *)v626 - 2);
    v171 = *((_DWORD *)v626 - 1);
    v627 = &qword_17BF08[(unsigned __int8)v458];
    v613 = &qword_17A708[BYTE1(v361)];
    v172 = v171
         ^ *(v161 - 1)
         ^ *((_DWORD *)v159 - 1)
         ^ v131[2 * v158 + 1]
         ^ v281
         ^ 0xCFFFFFFF
         ^ dword_179F00[2 * v680 + 1]
         ^ *(_DWORD *)(v623 + 12)
         ^ *((_DWORD *)&unk_17C700 + 2 * v336 + 1);
    v672 = BYTE1(v468);
    HIDWORD(v636) = &qword_17BF08[(unsigned __int8)v468];
    v337 = v170
         ^ *(v161 - 2)
         ^ dword_179F00[2 * v680]
         ^ ~v131[2 * v158]
         ^ *((_DWORD *)v159 - 2)
         ^ *(_DWORD *)(v623 + 8)
         ^ *((_DWORD *)&unk_17C700 + 2 * v336)
         ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v458));
    v342 = v172 ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v458) + 1);
    v469 = &qword_17A708[BYTE1(v371)];
    v173 = dword_179F00[2 * v686 + 1]
         ^ v281
         ^ 0xBFFFFFFF
         ^ v131[2 * v684 + 1]
         ^ *((_DWORD *)v166 - 1)
         ^ dword_17AF08[2 * BYTE2(v361) - 1]
         ^ *(_DWORD *)(v630 + 12)
         ^ *((_DWORD *)v634 - 1);
    v624 = &dword_17AF08[2 * BYTE2(v390)];
    v681 = BYTE1(v365);
    v174 = *((_DWORD *)&unk_17C700 + 2 * v345 + 1);
    v175 = *((_DWORD *)v634 - 2)
         ^ *(_DWORD *)(v630 + 8)
         ^ ~v131[2 * v684]
         ^ dword_179F00[2 * v686]
         ^ *((_DWORD *)v166 - 2)
         ^ dword_17AF08[2 * BYTE2(v361) - 2]
         ^ *((_DWORD *)&unk_17C700 + 2 * v345);
    v631 = &qword_17BF08[(unsigned __int8)v365];
    v687 = (unsigned __int8)v361;
    v346 = v175 ^ *((_DWORD *)&unk_17CF00 + 2 * v350);
    v665 = &qword_17B6F8[HIBYTE(v361)];
    v351 = v174 ^ v173 ^ *((_DWORD *)&unk_17CF00 + 2 * v350 + 1);
    v176 = &dword_17AF08[2 * BYTE2(v371)];
    v177 = *((_DWORD *)v163 - 2);
    v178 = v131[2 * v691 + 1];
    v732 = (unsigned __int8)v376;
    v179 = ~v131[2 * v691] ^ dword_179F00[2 * v694] ^ *((_DWORD *)v356 - 2) ^ *(v176 - 2);
    v512 = &qword_17A708[BYTE1(v376)];
    v611 = &dword_17AF08[2 * BYTE2(v406)];
    v692 = BYTE1(v476);
    v180 = *((_DWORD *)v356 - 1)
         ^ v178
         ^ v281
         ^ 0xAFFFFFFF
         ^ dword_179F00[2 * v694 + 1]
         ^ *(v176 - 1)
         ^ *(_DWORD *)(v636 + 12)
         ^ *((_DWORD *)v163 - 1);
    v635 = &qword_17BF08[(unsigned __int8)v476];
    v181 = BYTE1(v458);
    v459 = BYTE2(v397);
    v182 = (unsigned __int8)v371;
    v357 = v177
         ^ v179
         ^ *(_DWORD *)(v636 + 8)
         ^ *((_DWORD *)&unk_17C700 + 2 * v181)
         ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v365));
    v678 = &qword_17B6F8[HIBYTE(v371)];
    v739 = (unsigned __int8)v390;
    v391 = &qword_17A708[BYTE1(v390)];
    v362 = v180 ^ *((_DWORD *)&unk_17C700 + 2 * v181 + 1) ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v365) + 1);
    v183 = &dword_17AF08[2 * BYTE2(v419)];
    v184 = &dword_17AF08[2 * BYTE2(v376)];
    v185 = v131[2 * v698 + 1] ^ v281 ^ 0x9FFFFFFF ^ dword_179F00[2 * v701 + 1] ^ *((_DWORD *)v613 - 1) ^ *(v184 - 1);
    v186 = ~v131[2 * v698] ^ dword_179F00[2 * v701] ^ *((_DWORD *)v613 - 2) ^ *(v184 - 2);
    v187 = BYTE1(v383);
    LODWORD(v636) = &qword_17BF08[(unsigned __int8)v383];
    v695 = BYTE2(v412);
    v614 = &qword_17A708[BYTE1(v406)];
    v188 = v186 ^ *((_DWORD *)v640 + 2) ^ *((_DWORD *)v619 - 2) ^ *((_DWORD *)&unk_17C700 + 2 * v672);
    v189 = v185 ^ *((_DWORD *)v640 + 3) ^ *((_DWORD *)v619 - 1) ^ *((_DWORD *)&unk_17C700 + 2 * v672 + 1);
    v641 = &qword_17BF08[(unsigned __int8)v397];
    v617 = &dword_17AF08[2 * BYTE2(v434)];
    v699 = BYTE1(v397);
    v366 = v188 ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v476));
    v372 = v189 ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v476) + 1);
    v190 = *((_DWORD *)v469 - 1) ^ v131[2 * v705 + 1] ^ v281 ^ 0x8FFFFFFF ^ dword_179F00[2 * v708 + 1];
    v191 = dword_179F00[2 * v708] ^ ~v131[2 * v705] ^ *((_DWORD *)v469 - 2);
    v192 = BYTE2(v427);
    v470 = (unsigned __int8)v419;
    v193 = *((_DWORD *)v642 + 2);
    v194 = *((_DWORD *)v642 + 3);
    v398 = &qword_17A708[BYTE1(v419)];
    v620 = &dword_17AF08[2 * BYTE2(v290)];
    v702 = BYTE1(v412);
    v643 = &qword_17BF08[(unsigned __int8)v412];
    v706 = BYTE2(v482);
    v413 = BYTE1(v427);
    v669 = &qword_17BF08[(unsigned __int8)v427];
    v377 = *((_DWORD *)v627 - 2)
         ^ v191
         ^ *(v624 - 2)
         ^ v193
         ^ *((_DWORD *)&unk_17C700 + 2 * v681)
         ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v383));
    v384 = v190
         ^ *(v624 - 1)
         ^ v194
         ^ *((_DWORD *)v627 - 1)
         ^ *((_DWORD *)&unk_17C700 + 2 * v681 + 1)
         ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v383) + 1);
    v428 = BYTE1(v482);
    v195 = *((_DWORD *)v512 - 2) ^ ~v131[2 * v687] ^ dword_179F00[2 * v724];
    v196 = ~(v281 ^ 0x80000000) ^ v131[2 * v687 + 1] ^ dword_179F00[2 * v724 + 1] ^ *((_DWORD *)v512 - 1);
    v513 = BYTE1(v303);
    v682 = &qword_17BF08[(unsigned __int8)v482];
    v477 = BYTE2(v303);
    v197 = *(v611 - 2) ^ v195;
    v198 = *((_DWORD *)v646 + 2);
    v199 = *((_DWORD *)v646 + 3) ^ v196 ^ *(v611 - 1);
    v625 = &qword_17A708[BYTE1(v434)];
    v628 = &dword_17AF08[2 * BYTE2(v297)];
    v647 = &qword_17A708[BYTE1(v297)];
    v200 = v198
         ^ v197
         ^ *(_DWORD *)(HIDWORD(v636) - 8)
         ^ *((_DWORD *)&unk_17C700 + 2 * v692)
         ^ *((_DWORD *)&unk_17CF00 + 2 * v459);
    v201 = v131[2 * v182 + 1];
    v202 = ~v131[2 * v182] ^ dword_179F00[2 * v729];
    v304 = v199
         ^ *(_DWORD *)(HIDWORD(v636) - 4)
         ^ *((_DWORD *)&unk_17C700 + 2 * v692 + 1)
         ^ *((_DWORD *)&unk_17CF00 + 2 * v459 + 1);
    v203 = *((_DWORD *)v631 - 2);
    v298 = v200;
    v204 = *((_DWORD *)v631 - 1);
    v420 = BYTE6(v290);
    v460 = BYTE5(v290);
    v483 = (unsigned __int8)v290;
    v632 = &qword_17A708[BYTE1(v290)];
    HIDWORD(v636) = &dword_17AF08[2 * BYTE2(v310)];
    v673 = &qword_17A708[BYTE1(v310)];
    v292 = *((_DWORD *)v648 + 3)
         ^ ~(v281 ^ 0x90000000)
         ^ v201
         ^ dword_179F00[2 * v729 + 1]
         ^ *((_DWORD *)v391 - 1)
         ^ *(v183 - 1)
         ^ v204
         ^ *((_DWORD *)&unk_17C700 + 2 * v187 + 1)
         ^ *((_DWORD *)&unk_17CF00 + 2 * v695 + 1);
    v291 = v202
         ^ *((_DWORD *)v391 - 2)
         ^ *(v183 - 2)
         ^ *((_DWORD *)v648 + 2)
         ^ v203
         ^ *((_DWORD *)&unk_17C700 + 2 * v187)
         ^ *((_DWORD *)&unk_17CF00 + 2 * v695);
    v392 = *((_DWORD *)&unk_17CF00 + 2 * v192 + 1)
         ^ v131[2 * v732 + 1]
         ^ ~(v281 ^ 0xA0000000)
         ^ dword_179F00[2 * v736 + 1]
         ^ *((_DWORD *)v614 - 1)
         ^ *(v617 - 1)
         ^ *((_DWORD *)v650 + 3)
         ^ *((_DWORD *)v635 - 1)
         ^ *((_DWORD *)&unk_17C700 + 2 * v699 + 1);
    v311 = ~v131[2 * v732]
         ^ dword_179F00[2 * v736]
         ^ *((_DWORD *)v614 - 2)
         ^ *(v617 - 2)
         ^ *((_DWORD *)v650 + 2)
         ^ *((_DWORD *)v635 - 2)
         ^ *((_DWORD *)&unk_17C700 + 2 * v699)
         ^ *((_DWORD *)&unk_17CF00 + 2 * v192);
    v205 = *((_DWORD *)v398 - 1);
    v206 = *(v620 - 1);
    v207 = *((_DWORD *)v652 + 3);
    v399 = ~v131[2 * v739] ^ dword_179F00[2 * v743] ^ *((_DWORD *)v398 - 2) ^ *(v620 - 2);
    v208 = v131[2 * (unsigned __int8)v406];
    v621 = v131[2 * (unsigned __int8)v406 + 1];
    v688 = *((_DWORD *)&unk_17C700 + 2 * v428 + 1);
    v400 = v399
         ^ *((_DWORD *)v652 + 2)
         ^ *(_DWORD *)(v636 - 8)
         ^ *((_DWORD *)&unk_17C700 + 2 * v702)
         ^ *((_DWORD *)&unk_17CF00 + 2 * v706);
    v653 = *((_DWORD *)&unk_17C700 + 2 * v413 + 1);
    v407 = v207
         ^ ~(v281 ^ 0xB0000000)
         ^ v131[2 * v739 + 1]
         ^ dword_179F00[2 * v743 + 1]
         ^ v205
         ^ v206
         ^ *(_DWORD *)(v636 - 4)
         ^ *((_DWORD *)&unk_17C700 + 2 * v702 + 1)
         ^ *((_DWORD *)&unk_17CF00 + 2 * v706 + 1);
    v414 = *((_DWORD *)v641 - 2)
         ^ *((_DWORD *)v655 + 2)
         ^ ~v208
         ^ dword_179F00[2 * v488]
         ^ *((_DWORD *)v625 - 2)
         ^ *(v628 - 2)
         ^ *((_DWORD *)&unk_17C700 + 2 * v413)
         ^ *((_DWORD *)&unk_17CF00 + 2 * v420);
    v209 = ~(v281 ^ 0xC0000000) ^ v621;
    v210 = ~(v281 ^ 0xF0000000) ^ v131[2 * v483 + 1] ^ dword_179F00[2 * v508 + 1];
    v211 = v131[2 * v470 + 1] ^ ~(v281 ^ 0xD0000000) ^ dword_179F00[2 * v495 + 1];
    v212 = dword_179F00[2 * v499 + 1]
         ^ ~(v281 ^ 0xE0000000)
         ^ v131[2 * (unsigned __int8)v434 + 1]
         ^ *((_DWORD *)v647 - 1);
    v213 = ~v131[2 * v483]
         ^ dword_179F00[2 * v508]
         ^ *((_DWORD *)v673 - 2)
         ^ *(v451 - 2)
         ^ *((_DWORD *)v678 + 2)
         ^ *((_DWORD *)v682 - 2)
         ^ *((_DWORD *)&unk_17C700 + 2 * v513)
         ^ *((_DWORD *)&unk_17CF00 + 2 * v519);
    v282 = *((_DWORD *)v658 + 2)
         ^ dword_179F00[2 * v495]
         ^ ~v131[2 * v470]
         ^ *((_DWORD *)v632 - 2)
         ^ *(_DWORD *)(HIDWORD(v636) - 8)
         ^ *((_DWORD *)v643 - 2)
         ^ *((_DWORD *)&unk_17C700 + 2 * v428)
         ^ *((_DWORD *)&unk_17CF00 + 2 * v477);
    v274 = v209
         ^ dword_179F00[2 * v488 + 1]
         ^ *((_DWORD *)v625 - 1)
         ^ *(v628 - 1)
         ^ *((_DWORD *)v655 + 3)
         ^ *((_DWORD *)v641 - 1)
         ^ v653
         ^ *((_DWORD *)&unk_17CF00 + 2 * v420 + 1);
    v421 = v212
         ^ *(v662 - 1)
         ^ *((_DWORD *)v665 + 3)
         ^ *((_DWORD *)v669 - 1)
         ^ *((_DWORD *)&unk_17C700 + 2 * v460 + 1)
         ^ *((_DWORD *)&unk_17CF00 + 2 * v505 + 1);
    v429 = v210
         ^ *((_DWORD *)v673 - 1)
         ^ *(v451 - 1)
         ^ *((_DWORD *)v678 + 3)
         ^ *((_DWORD *)v682 - 1)
         ^ *((_DWORD *)&unk_17C700 + 2 * v513 + 1)
         ^ *((_DWORD *)&unk_17CF00 + 2 * v519 + 1);
    v452 = *((_DWORD *)&unk_17CF00 + 2 * v505)
         ^ ~v131[2 * (unsigned __int8)v434]
         ^ dword_179F00[2 * v499]
         ^ *((_DWORD *)v647 - 2)
         ^ *(v662 - 2)
         ^ *((_DWORD *)v665 + 2)
         ^ *((_DWORD *)v669 - 2)
         ^ *((_DWORD *)&unk_17C700 + 2 * v460);
    v461 = v213;
    v435 = v211
         ^ *((_DWORD *)v632 - 1)
         ^ *(_DWORD *)(HIDWORD(v636) - 4)
         ^ *((_DWORD *)v658 + 3)
         ^ *((_DWORD *)v643 - 1)
         ^ v688
         ^ *((_DWORD *)&unk_17CF00 + 2 * v477 + 1);
    v509 = HIBYTE(v351);
    v514 = HIBYTE(v362);
    v703 = HIBYTE(v435);
    v725 = HIBYTE(v421);
    v506 = HIBYTE(v342);
    v670 = &qword_17B6F8[HIBYTE(v357)];
    v679 = &qword_17B6F8[HIBYTE(v366)];
    v685 = &qword_17B6F8[HIBYTE(v377)];
    v633 = &qword_17B6F8[HIBYTE(v452)];
    v637 = &qword_17B6F8[HIBYTE(v213)];
    v689 = &qword_17B6F8[HIBYTE(v298)];
    v656 = &qword_17B6F8[HIBYTE(v337)];
    v663 = &qword_17B6F8[HIBYTE(v346)];
    v214 = qword_17BF08[(unsigned __int8)v322 - 1];
    v215 = &dword_17AF08[2 * BYTE2(v357)];
    v216 = &qword_17A708[BYTE1(v346)];
    v217 = &qword_17B6F8[HIBYTE(v400)];
    v218 = &dword_17AF08[2 * BYTE2(v366)];
    v219 = v131[2 * (unsigned __int8)v332 + 1]
         ^ dword_179F00[2 * HIBYTE(v372) + 1]
         ^ HIDWORD(qword_17A708[BYTE1(v337) - 1])
         ^ *(v215 - 1)
         ^ *((_DWORD *)v217 + 3);
    v471 = *((_DWORD *)v217 + 2);
    v644 = (unsigned __int8)v337;
    v220 = BYTE1(v342);
    v693 = &dword_17AF08[2 * BYTE2(v337)];
    v654 = (unsigned __int8)v357;
    v358 = &qword_17A708[BYTE1(v357)];
    LODWORD(v609) = dword_179F00[2 * HIBYTE(v372)]
                  ^ v131[2 * (unsigned __int8)v332]
                  ^ LODWORD(qword_17A708[BYTE1(v337) - 1])
                  ^ *(v215 - 2)
                  ^ v471
                  ^ v214
                  ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v327))
                  ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v351));
    v221 = BYTE1(v351);
    HIDWORD(v609) = v219
                  ^ HIDWORD(v214)
                  ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v327) + 1)
                  ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v351) + 1);
    v520 = &qword_17BF08[(unsigned __int8)v351];
    HIDWORD(v214) = &qword_17B6F8[HIBYTE(v414)];
    v222 = (unsigned __int8)v346;
    v696 = &dword_17AF08[2 * BYTE2(v346)];
    v659 = (unsigned __int8)v366;
    v223 = v131[2 * (unsigned __int8)v288 + 1]
         ^ dword_179F00[2 * HIBYTE(v384) + 1]
         ^ *((_DWORD *)v216 - 1)
         ^ *(v218 - 1)
         ^ *(_DWORD *)(HIDWORD(v214) + 12);
    v224 = v131[2 * (unsigned __int8)v288]
         ^ dword_179F00[2 * HIBYTE(v384)]
         ^ *((_DWORD *)v216 - 2)
         ^ *(v218 - 2)
         ^ *(_DWORD *)(HIDWORD(v214) + 8);
    v347 = &qword_17A708[BYTE1(v366)];
    BYTE2(v218) = BYTE2(v342);
    v225 = &dword_17AF08[2 * BYTE2(v298)];
    v343 = &qword_17BF08[(unsigned __int8)v342];
    v338 = BYTE2(v218);
    v638 = BYTE2(v384);
    v674 = (unsigned __int8)v377;
    LODWORD(v615) = v224
                  ^ LODWORD(qword_17BF08[(unsigned __int8)v443 - 1])
                  ^ *((_DWORD *)&unk_17C700 + 2 * v220)
                  ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v362));
    HIDWORD(v615) = v223
                  ^ HIDWORD(qword_17BF08[(unsigned __int8)v443 - 1])
                  ^ *((_DWORD *)&unk_17C700 + 2 * v220 + 1)
                  ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v362) + 1);
    v352 = &qword_17A708[BYTE1(v377)];
    HIDWORD(v214) = &dword_17AF08[2 * BYTE2(v377)];
    v226 = *(_DWORD *)(HIDWORD(v214) - 8) ^ v131[2 * v644] ^ dword_179F00[2 * HIBYTE(v304)] ^ *((_DWORD *)v358 - 2);
    v227 = &dword_17AF08[2 * BYTE2(v291)];
    v228 = &qword_17B6F8[HIBYTE(v282)];
    v229 = v131[2 * v644 + 1]
         ^ dword_179F00[2 * HIBYTE(v304) + 1]
         ^ *((_DWORD *)v358 - 1)
         ^ *(_DWORD *)(HIDWORD(v214) - 4)
         ^ *((_DWORD *)v228 + 3);
    v230 = qword_17BF08[(unsigned __int8)v327 - 1];
    v367 = &qword_17BF08[(unsigned __int8)v372];
    v231 = v229 ^ HIDWORD(v230);
    v700 = (unsigned __int8)v298;
    v299 = &qword_17A708[BYTE1(v298)];
    v232 = v226 ^ *((_DWORD *)v228 + 2) ^ v230;
    LOBYTE(v226) = v384;
    v233 = *((_DWORD *)&unk_17C700 + 2 * v221);
    HIDWORD(v230) = *((_DWORD *)&unk_17C700 + 2 * v221 + 1);
    LODWORD(v230) = &dword_17AF08[2 * BYTE2(v311)];
    v385 = BYTE1(v384);
    v234 = BYTE2(v292);
    LODWORD(v622) = v233 ^ v232 ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v372));
    v359 = &qword_17A708[BYTE1(v291)];
    HIDWORD(v622) = v231 ^ HIDWORD(v230) ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v372) + 1);
    HIDWORD(v230) = &dword_17AF08[2 * BYTE2(v400)];
    v235 = *((_DWORD *)v633 + 3)
         ^ dword_179F00[2 * HIBYTE(v292) + 1]
         ^ v131[2 * v222 + 1]
         ^ *((_DWORD *)v347 - 1)
         ^ *(v225 - 1);
    v378 = &qword_17BF08[(unsigned __int8)v304];
    v707 = BYTE1(v292);
    v472 = &qword_17BF08[(unsigned __int8)v292];
    LODWORD(v629) = *((_DWORD *)v633 + 2)
                  ^ dword_179F00[2 * HIBYTE(v292)]
                  ^ v131[2 * v222]
                  ^ *((_DWORD *)v347 - 2)
                  ^ *(v225 - 2)
                  ^ *((_DWORD *)v343 - 2)
                  ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v362))
                  ^ *((_DWORD *)&unk_17CF00 + 2 * v638);
    HIDWORD(v629) = v235
                  ^ *((_DWORD *)v343 - 1)
                  ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v362) + 1)
                  ^ *((_DWORD *)&unk_17CF00 + 2 * v638 + 1);
    v709 = BYTE2(v407);
    v293 = BYTE2(v274);
    v733 = (unsigned __int8)v400;
    v236 = *((_DWORD *)v637 + 3)
         ^ dword_179F00[2 * HIBYTE(v392) + 1]
         ^ v131[2 * v654 + 1]
         ^ *((_DWORD *)v352 - 1)
         ^ *(v227 - 1)
         ^ *((_DWORD *)v520 - 1)
         ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v372) + 1);
    v348 = &qword_17A708[BYTE1(v400)];
    LODWORD(v636) = dword_179F00[2 * HIBYTE(v392)]
                  ^ v131[2 * v654]
                  ^ *((_DWORD *)v352 - 2)
                  ^ *(v227 - 2)
                  ^ *((_DWORD *)v637 + 2)
                  ^ *((_DWORD *)v520 - 2)
                  ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v372))
                  ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v304));
    v353 = &dword_17AF08[2 * BYTE2(v282)];
    HIDWORD(v636) = v236 ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v304) + 1);
    v237 = v131[2 * v659 + 1] ^ dword_179F00[2 * HIBYTE(v407) + 1] ^ *((_DWORD *)v299 - 1) ^ *(_DWORD *)(v230 - 4);
    v238 = &qword_17B6F8[HIBYTE(v315)];
    v239 = *((_DWORD *)v238 + 3);
    v240 = *((_DWORD *)v299 - 2)
         ^ v131[2 * v659]
         ^ dword_179F00[2 * HIBYTE(v407)]
         ^ *(_DWORD *)(v230 - 8)
         ^ *((_DWORD *)v238 + 2);
    v241 = &qword_17BF08[(unsigned __int8)v362];
    v660 = BYTE2(v435);
    v363 = &qword_17A708[BYTE1(v414)];
    v242 = v237 ^ v239 ^ *((_DWORD *)v241 - 1);
    v243 = *((_DWORD *)&unk_17C700 + 2 * v385 + 1);
    v244 = *((_DWORD *)v241 - 2) ^ v240 ^ *((_DWORD *)&unk_17C700 + 2 * v385);
    v386 = &dword_17AF08[2 * BYTE2(v452)];
    v666 = BYTE1(v407);
    v401 = &qword_17BF08[(unsigned __int8)v407];
    LODWORD(v639) = v244 ^ *((_DWORD *)&unk_17CF00 + 2 * v234);
    HIDWORD(v639) = v242 ^ v243 ^ *((_DWORD *)&unk_17CF00 + 2 * v234 + 1);
    v245 = v131[2 * v674 + 1] ^ dword_179F00[2 * HIBYTE(v274) + 1] ^ *((_DWORD *)v359 - 1);
    v246 = *((_DWORD *)v359 - 2) ^ v131[2 * v674] ^ dword_179F00[2 * HIBYTE(v274)];
    v247 = *(_DWORD *)(HIDWORD(v230) - 8);
    v248 = &qword_17B6F8[HIBYTE(v332)];
    v675 = BYTE1(v274);
    v478 = &qword_17BF08[(unsigned __int8)v274];
    v275 = (unsigned __int8)v282;
    HIDWORD(v230) = *((_DWORD *)v248 + 3) ^ v245 ^ *(_DWORD *)(HIDWORD(v230) - 4) ^ *((_DWORD *)v367 - 1);
    v249 = *((_DWORD *)v367 - 2) ^ v246 ^ v247 ^ *((_DWORD *)v248 + 2);
    v360 = &qword_17A708[BYTE1(v282)];
    v368 = &dword_17AF08[2 * BYTE2(v461)];
    v250 = BYTE1(v435);
    v436 = &qword_17BF08[(unsigned __int8)v435];
    v251 = BYTE2(v421);
    LODWORD(v645) = v249 ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v304)) ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v392));
    v252 = qword_17BF08[(unsigned __int8)v226 - 1];
    HIDWORD(v645) = HIDWORD(v230)
                  ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v304) + 1)
                  ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v392) + 1);
    v253 = &qword_17A708[BYTE1(v311)];
    v254 = *((_DWORD *)v253 - 2);
    v255 = *((_DWORD *)v253 - 1);
    v256 = &dword_17AF08[2 * BYTE2(v414)];
    v257 = dword_179F00[2 * v703] ^ v131[2 * v700] ^ v254;
    v258 = *(v256 - 2);
    v259 = dword_179F00[2 * v703 + 1] ^ v131[2 * v700 + 1] ^ v255 ^ *(v256 - 1);
    v260 = &qword_17B6F8[HIBYTE(v288)];
    v305 = (unsigned __int8)v461;
    v408 = &qword_17A708[BYTE1(v461)];
    v649 = v252
         ^ v257
         ^ v258
         ^ *((_DWORD *)v260 + 2)
         ^ *((_DWORD *)&unk_17C700 + 2 * v707)
         ^ *((_DWORD *)&unk_17CF00 + 2 * v709);
    v283 = BYTE1(v421);
    v462 = &qword_17BF08[(unsigned __int8)v421];
    LODWORD(v651) = HIDWORD(v252)
                  ^ v259
                  ^ *((_DWORD *)v260 + 3)
                  ^ *((_DWORD *)&unk_17C700 + 2 * v707 + 1)
                  ^ *((_DWORD *)&unk_17CF00 + 2 * v709 + 1);
    v422 = &qword_17A708[BYTE1(v315)];
    v261 = dword_179F00[2 * v725]
         ^ v131[2 * (unsigned __int8)v291]
         ^ *((_DWORD *)v348 - 2)
         ^ *(v353 - 2)
         ^ *((_DWORD *)v656 + 2)
         ^ *((_DWORD *)v378 - 2);
    LODWORD(v230) = v131[2 * (unsigned __int8)v291 + 1]
                  ^ dword_179F00[2 * v725 + 1]
                  ^ *((_DWORD *)v348 - 1)
                  ^ *(v353 - 1)
                  ^ *((_DWORD *)v656 + 3)
                  ^ *((_DWORD *)v378 - 1);
    v379 = &dword_17AF08[2 * BYTE2(v288)];
    v262 = v660;
    v657 = v230 ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v392) + 1) ^ *((_DWORD *)&unk_17CF00 + 2 * v293 + 1);
    HIDWORD(v651) = v261 ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v392)) ^ *((_DWORD *)&unk_17CF00 + 2 * v293);
    v263 = v131[2 * (unsigned __int8)v311]
         ^ dword_179F00[2 * HIBYTE(v429)]
         ^ *((_DWORD *)v363 - 2)
         ^ *(v386 - 2)
         ^ *((_DWORD *)v663 + 2)
         ^ *((_DWORD *)v472 - 2)
         ^ *((_DWORD *)&unk_17C700 + 2 * v666)
         ^ *((_DWORD *)&unk_17CF00 + 2 * v262);
    v264 = *((_DWORD *)&unk_17CF00 + 2 * v262 + 1)
         ^ *((_DWORD *)v663 + 3)
         ^ dword_179F00[2 * HIBYTE(v429) + 1]
         ^ v131[2 * (unsigned __int8)v311 + 1]
         ^ *((_DWORD *)v363 - 1)
         ^ *(v386 - 1)
         ^ *((_DWORD *)v472 - 1)
         ^ *((_DWORD *)&unk_17C700 + 2 * v666 + 1);
    v661 = v263;
    v664 = v264;
    v667 = *(_QWORD *)&dword_179F00[2 * HIBYTE(v322)]
         ^ *(_QWORD *)&v131[2 * v733]
         ^ *(v360 - 1)
         ^ *((_QWORD *)v368 - 1)
         ^ v670[1]
         ^ qword_17BF08[(unsigned __int8)v392 - 1]
         ^ *((_QWORD *)&unk_17C700 + v675)
         ^ *((_QWORD *)&unk_17CF00 + v251);
    v676 = *(_QWORD *)&v131[2 * (unsigned __int8)v414]
         ^ *(_QWORD *)&dword_179F00[2 * HIBYTE(v443)]
         ^ qword_17A708[BYTE1(v452) - 1]
         ^ *(_QWORD *)&dword_17AF08[2 * BYTE2(v315) - 2]
         ^ v679[1]
         ^ *(v401 - 1)
         ^ *((_QWORD *)&unk_17C700 + v250)
         ^ *((_QWORD *)&unk_17CF00 + BYTE2(v429));
    v265 = v131[2 * (unsigned __int8)v452 + 1]
         ^ dword_179F00[2 * v506 + 1]
         ^ *((_DWORD *)v422 - 1)
         ^ *(v379 - 1)
         ^ *((_DWORD *)v689 + 3)
         ^ *((_DWORD *)v436 - 1);
    v266 = v131[2 * (unsigned __int8)v452]
         ^ dword_179F00[2 * v506]
         ^ *((_DWORD *)v422 - 2)
         ^ *(v379 - 2)
         ^ *((_DWORD *)v689 + 2)
         ^ *((_DWORD *)v436 - 2);
    v697 = *(_QWORD *)&v131[2 * v305]
         ^ *(_QWORD *)&dword_179F00[2 * v509]
         ^ qword_17A708[BYTE1(v332) - 1]
         ^ *((_QWORD *)v693 - 1)
         ^ qword_17B6F8[HIBYTE(v291) + 1]
         ^ *(v462 - 1)
         ^ *((_QWORD *)&unk_17C700 + BYTE1(v322))
         ^ *((_QWORD *)&unk_17CF00 + BYTE2(v327));
    v704 = *(_QWORD *)&dword_179F00[2 * v514]
         ^ *(_QWORD *)&v131[2 * (unsigned __int8)v315]
         ^ qword_17A708[BYTE1(v288) - 1]
         ^ *((_QWORD *)v696 - 1)
         ^ qword_17B6F8[HIBYTE(v311) + 1]
         ^ qword_17BF08[(unsigned __int8)v429 - 1]
         ^ *((_QWORD *)&unk_17C700 + BYTE1(v443))
         ^ *((_QWORD *)&unk_17CF00 + v338);
    v683 = *(_QWORD *)&v131[2 * v275]
         ^ *(_QWORD *)&dword_179F00[2 * HIBYTE(v327)]
         ^ *(v408 - 1)
         ^ *(_QWORD *)&dword_17AF08[2 * BYTE2(v332) - 2]
         ^ v685[1]
         ^ *(v478 - 1)
         ^ *((_QWORD *)&unk_17C700 + v283)
         ^ *((_QWORD *)&unk_17CF00 + BYTE2(v322));
    HIDWORD(v690) = v265
                  ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v429) + 1)
                  ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v443) + 1);
    LODWORD(v690) = v266 ^ *((_DWORD *)&unk_17C700 + 2 * BYTE1(v429)) ^ *((_DWORD *)&unk_17CF00 + 2 * BYTE2(v443));
  }
  while ( !v157 );
  v273 = v131;
  dest[0] ^= v609 ^ v718;
  HIDWORD(dest[5]) ^= HIDWORD(v639) ^ HIDWORD(v551);
  LODWORD(dest[7]) ^= v649 ^ v565;
  *(_QWORD *)((char *)&dest[7] + 4) ^= v651 ^ v569;
  HIDWORD(dest[8]) ^= v657 ^ v574;
  LODWORD(dest[9]) ^= v263 ^ v521;
  HIDWORD(dest[9]) ^= v264 ^ v578;
  dest[10] ^= v667 ^ v524;
  v5 = 0;
  dest[1] ^= v713 ^ v615;
  dest[11] ^= v676 ^ v582;
  LODWORD(dest[12]) ^= v683 ^ v590;
  HIDWORD(dest[12]) ^= HIDWORD(v683) ^ v530;
  dest[13] ^= v690 ^ v593;
  dest[14] ^= v697 ^ v598;
  dest[15] ^= v704 ^ v606;
  v267 = *((_DWORD *)a1 + 66);
  dest[2] ^= v710 ^ v622;
  v268 = *((_DWORD *)a1 + 67);
  v269 = v267;
  *((_DWORD *)a1 + 66) = v267 + 1;
  v7 = na;
  dest[3] = v534 ^ v777 ^ v629;
  dest[4] = v543 ^ v778 ^ v636;
  LODWORD(dest[5]) = v551 ^ v779 ^ v639;
  dest[6] = v560 ^ v780 ^ v645;
  *((_DWORD *)a1 + 67) = (__PAIR64__(v268, v269) + 1) >> 32;
  if ( na )
    goto LABEL_5;
LABEL_17:
  v3 = v5;
LABEL_18:
  result = memcpy(v781, dest, 0x80u);
  *((_DWORD *)a1 + 32) = v3;
  return result;
}
