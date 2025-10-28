void *__fastcall sph_groestl384_0(__int64 *a1, char *a2, size_t a3)
{
  int v3; // r5
  size_t v4; // r4
  int v5; // r9
  size_t i; // r5
  size_t v7; // r3
  char *v8; // r0
  unsigned int v9; // lr
  unsigned int v10; // r0
  unsigned int v11; // r12
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
  _QWORD *v22; // r12
  int v23; // r10
  int v24; // r3
  int v25; // r5
  int v26; // r6
  int v27; // r8
  int v28; // r1
  int v29; // r8
  int v30; // r3
  int v31; // r2
  _DWORD *v32; // r1
  int v33; // lr
  int v34; // r2
  int v35; // r9
  int v36; // r12
  _QWORD *v37; // r8
  int v38; // r12
  int v39; // r2
  int v40; // r0
  int v41; // r10
  _QWORD *v42; // r6
  int v43; // r11
  unsigned int v44; // r11
  int v45; // r9
  _QWORD *v46; // r10
  int v47; // r4
  int v48; // r10
  int v49; // r2
  int v50; // r12
  int v51; // r5
  int v52; // r12
  int v53; // lr
  int v54; // lr
  int v55; // r12
  int v56; // r0
  int v57; // r4
  int v58; // r2
  int v59; // r3
  int v60; // r2
  int v61; // r3
  int v62; // r1
  int v63; // r2
  int v64; // r12
  int v65; // r5
  int v66; // r4
  int v67; // r12
  unsigned int v68; // r0
  int v69; // r2
  unsigned int v70; // r2
  unsigned int v71; // r10
  _QWORD *v72; // r12
  _QWORD *v73; // r11
  int v74; // r6
  _DWORD *v75; // lr
  int v76; // r9
  int v77; // r7
  int v78; // r5
  int v79; // r8
  int v80; // r6
  int v81; // r3
  int v82; // lr
  int v83; // r9
  int v84; // r2
  int v85; // r10
  int v86; // r8
  int v87; // r3
  int v88; // r0
  int v89; // r2
  int v90; // r3
  __int64 v91; // r0
  int v92; // r3
  int v93; // lr
  int v94; // r8
  int v95; // r12
  __int64 v96; // r0
  int v97; // r4
  __int64 v98; // r10
  int v99; // r6
  __int64 v100; // r2
  int v101; // r5
  int v102; // r12
  __int64 v103; // r2
  __int64 v104; // r6
  int v105; // r9
  int v106; // r5
  int v107; // r4
  int v108; // r4
  int v109; // r12
  int v110; // r8
  int v111; // r12
  int v112; // r11
  unsigned int v113; // r5
  unsigned int v114; // lr
  unsigned int v115; // r0
  unsigned int v116; // r12
  _DWORD *v117; // r3
  unsigned int v118; // r4
  _QWORD *v119; // r5
  unsigned int v120; // r2
  int v121; // r6
  _DWORD *v122; // r1
  _QWORD *v123; // r0
  int v124; // r7
  int v125; // r3
  int v126; // r8
  int v127; // r5
  _DWORD *v128; // r1
  int v129; // r2
  int *v130; // r3
  int v131; // r2
  int v132; // r12
  int v133; // r3
  int v134; // lr
  bool v135; // zf
  int v136; // r10
  _QWORD *v137; // r5
  int v138; // r3
  _DWORD *v139; // r9
  int v140; // r12
  _QWORD *v141; // lr
  _DWORD *v142; // r2
  int v143; // r12
  _QWORD *v144; // r0
  int v145; // r3
  unsigned __int8 v146; // r6
  unsigned int v147; // r2
  int v148; // r6
  int v149; // r2
  unsigned int v150; // r2
  unsigned int v151; // r12
  int v152; // r4
  int v153; // r6
  _DWORD *v154; // r9
  int v155; // r6
  int v156; // r5
  int v157; // r2
  unsigned int v158; // lr
  int v159; // r4
  int v160; // r8
  _DWORD *v161; // r7
  _DWORD *v162; // r9
  unsigned int v163; // r2
  int v164; // r3
  int v165; // r9
  int v166; // r3
  int v167; // r2
  unsigned int v168; // r4
  int v169; // r0
  int v170; // r12
  int v171; // r5
  int v172; // r3
  int v173; // r1
  unsigned int v174; // r3
  int v175; // lr
  int v176; // r1
  int v177; // r2
  int v178; // lr
  int v179; // r1
  int v180; // r3
  int v181; // r8
  int v182; // lr
  int v183; // lr
  int v184; // r12
  int v185; // r0
  int v186; // r2
  unsigned int v187; // r0
  unsigned int v188; // r3
  unsigned int v189; // r1
  unsigned int v190; // r2
  unsigned int v191; // r7
  __int64 v192; // r6
  _DWORD *v193; // r1
  _QWORD *v194; // r12
  _DWORD *v195; // r0
  int v196; // r4
  int v197; // r10
  int v198; // r9
  int v199; // r3
  int v200; // r5
  _DWORD *v201; // r2
  int v202; // r8
  _DWORD *v203; // r12
  int v204; // r3
  __int64 v205; // r6
  int v206; // r3
  int v207; // r5
  int v208; // r1
  int v209; // r10
  int v210; // r1
  int v211; // r1
  int v212; // r2
  _QWORD *v213; // r12
  int v214; // r1
  int v215; // r3
  int v216; // r12
  int v217; // lr
  int v218; // r2
  int v219; // r5
  int v220; // r3
  int v221; // r10
  int v222; // r9
  __int64 v223; // r2
  _QWORD *v224; // r8
  int v225; // r12
  int v226; // r1
  _DWORD *v227; // r8
  int v228; // r4
  int v229; // r5
  int v230; // r1
  int v231; // r5
  int v232; // r0
  int v233; // lr
  unsigned int v234; // r3
  unsigned int v235; // r1
  unsigned int v236; // kr60_4
  void *result; // r0
  int v240; // [sp+4h] [bp-340h]
  unsigned int v241; // [sp+4h] [bp-340h]
  int v242; // [sp+4h] [bp-340h]
  __int64 v243; // [sp+8h] [bp-33Ch]
  __int64 v244; // [sp+8h] [bp-33Ch]
  unsigned int v245; // [sp+14h] [bp-330h]
  unsigned int v246; // [sp+14h] [bp-330h]
  int v247; // [sp+14h] [bp-330h]
  unsigned int v248; // [sp+14h] [bp-330h]
  int v249; // [sp+14h] [bp-330h]
  unsigned int v250; // [sp+18h] [bp-32Ch]
  unsigned int v251; // [sp+18h] [bp-32Ch]
  _QWORD *v252; // [sp+18h] [bp-32Ch]
  _QWORD *v253; // [sp+18h] [bp-32Ch]
  unsigned int v254; // [sp+18h] [bp-32Ch]
  __int64 v255; // [sp+1Ch] [bp-328h]
  __int64 v256; // [sp+1Ch] [bp-328h]
  unsigned int v257; // [sp+1Ch] [bp-328h]
  unsigned int v258; // [sp+20h] [bp-324h]
  int v259; // [sp+20h] [bp-324h]
  unsigned int v260; // [sp+24h] [bp-320h]
  int v261; // [sp+24h] [bp-320h]
  unsigned int v262; // [sp+24h] [bp-320h]
  int v263; // [sp+24h] [bp-320h]
  unsigned int v264; // [sp+24h] [bp-320h]
  _QWORD *v265; // [sp+24h] [bp-320h]
  unsigned int v266; // [sp+28h] [bp-31Ch]
  int v267; // [sp+28h] [bp-31Ch]
  unsigned int v268; // [sp+28h] [bp-31Ch]
  unsigned int v269; // [sp+28h] [bp-31Ch]
  unsigned int v270; // [sp+28h] [bp-31Ch]
  int v271; // [sp+28h] [bp-31Ch]
  unsigned int v272; // [sp+2Ch] [bp-318h]
  int v273; // [sp+2Ch] [bp-318h]
  unsigned int v274; // [sp+2Ch] [bp-318h]
  int v275; // [sp+2Ch] [bp-318h]
  int v276; // [sp+2Ch] [bp-318h]
  unsigned int v277; // [sp+2Ch] [bp-318h]
  unsigned int v278; // [sp+30h] [bp-314h]
  unsigned int v279; // [sp+30h] [bp-314h]
  int v280; // [sp+30h] [bp-314h]
  unsigned int v281; // [sp+30h] [bp-314h]
  unsigned int v282; // [sp+34h] [bp-310h]
  unsigned int v283; // [sp+34h] [bp-310h]
  int v284; // [sp+34h] [bp-310h]
  int v285; // [sp+34h] [bp-310h]
  char *v286; // [sp+34h] [bp-310h]
  unsigned int v287; // [sp+34h] [bp-310h]
  unsigned int v288; // [sp+34h] [bp-310h]
  unsigned int v289; // [sp+38h] [bp-30Ch]
  unsigned int v290; // [sp+38h] [bp-30Ch]
  _QWORD *v291; // [sp+38h] [bp-30Ch]
  int v292; // [sp+38h] [bp-30Ch]
  unsigned int v293; // [sp+38h] [bp-30Ch]
  unsigned int v294; // [sp+3Ch] [bp-308h]
  unsigned int v295; // [sp+3Ch] [bp-308h]
  int v296; // [sp+3Ch] [bp-308h]
  int v297; // [sp+3Ch] [bp-308h]
  unsigned int v298; // [sp+3Ch] [bp-308h]
  unsigned int v299; // [sp+40h] [bp-304h]
  unsigned int v300; // [sp+40h] [bp-304h]
  unsigned int v301; // [sp+40h] [bp-304h]
  int v302; // [sp+40h] [bp-304h]
  unsigned int v303; // [sp+40h] [bp-304h]
  int v304; // [sp+40h] [bp-304h]
  unsigned int v305; // [sp+44h] [bp-300h]
  _BYTE v306[12]; // [sp+44h] [bp-300h]
  int v307; // [sp+44h] [bp-300h]
  unsigned int v308; // [sp+44h] [bp-300h]
  _QWORD *v309; // [sp+44h] [bp-300h]
  unsigned int v310; // [sp+48h] [bp-2FCh]
  int v311; // [sp+48h] [bp-2FCh]
  unsigned int v312; // [sp+48h] [bp-2FCh]
  _QWORD *v313; // [sp+48h] [bp-2FCh]
  _QWORD *v314; // [sp+48h] [bp-2FCh]
  int v315; // [sp+4Ch] [bp-2F8h]
  int v316; // [sp+4Ch] [bp-2F8h]
  unsigned int v317; // [sp+4Ch] [bp-2F8h]
  _QWORD *v318; // [sp+4Ch] [bp-2F8h]
  _DWORD *v319; // [sp+4Ch] [bp-2F8h]
  __int64 v320; // [sp+50h] [bp-2F4h]
  int v321; // [sp+50h] [bp-2F4h]
  _QWORD *v322; // [sp+50h] [bp-2F4h]
  unsigned int v323; // [sp+50h] [bp-2F4h]
  _QWORD *v324; // [sp+50h] [bp-2F4h]
  _QWORD *v325; // [sp+50h] [bp-2F4h]
  _QWORD *v326; // [sp+50h] [bp-2F4h]
  unsigned int v327; // [sp+54h] [bp-2F0h]
  unsigned int v328; // [sp+54h] [bp-2F0h]
  _QWORD *v329; // [sp+54h] [bp-2F0h]
  unsigned int v330; // [sp+58h] [bp-2ECh]
  unsigned int v331; // [sp+58h] [bp-2ECh]
  unsigned int v332; // [sp+58h] [bp-2ECh]
  _QWORD *v333; // [sp+58h] [bp-2ECh]
  _DWORD *v334; // [sp+58h] [bp-2ECh]
  unsigned int v335; // [sp+5Ch] [bp-2E8h]
  unsigned int v336; // [sp+5Ch] [bp-2E8h]
  unsigned int v337; // [sp+5Ch] [bp-2E8h]
  unsigned int v338; // [sp+5Ch] [bp-2E8h]
  unsigned int v339; // [sp+60h] [bp-2E4h]
  int v340; // [sp+60h] [bp-2E4h]
  unsigned int v341; // [sp+60h] [bp-2E4h]
  int v342; // [sp+60h] [bp-2E4h]
  unsigned int v343; // [sp+60h] [bp-2E4h]
  _QWORD *v344; // [sp+60h] [bp-2E4h]
  _DWORD *v345; // [sp+60h] [bp-2E4h]
  unsigned int v346; // [sp+64h] [bp-2E0h]
  unsigned int v347; // [sp+64h] [bp-2E0h]
  int v348; // [sp+64h] [bp-2E0h]
  unsigned int v349; // [sp+64h] [bp-2E0h]
  unsigned int v350; // [sp+64h] [bp-2E0h]
  int v351; // [sp+64h] [bp-2E0h]
  _DWORD *v352; // [sp+64h] [bp-2E0h]
  unsigned int v353; // [sp+68h] [bp-2DCh]
  int v354; // [sp+68h] [bp-2DCh]
  unsigned int v355; // [sp+68h] [bp-2DCh]
  int v356; // [sp+68h] [bp-2DCh]
  _QWORD *v357; // [sp+68h] [bp-2DCh]
  unsigned int v358; // [sp+68h] [bp-2DCh]
  int v359; // [sp+6Ch] [bp-2D8h]
  int v360; // [sp+6Ch] [bp-2D8h]
  int v361; // [sp+6Ch] [bp-2D8h]
  unsigned int v362; // [sp+6Ch] [bp-2D8h]
  unsigned int v363; // [sp+6Ch] [bp-2D8h]
  _QWORD *v364; // [sp+6Ch] [bp-2D8h]
  int v365; // [sp+6Ch] [bp-2D8h]
  unsigned int v366; // [sp+6Ch] [bp-2D8h]
  _QWORD *v367; // [sp+6Ch] [bp-2D8h]
  int v368; // [sp+70h] [bp-2D4h]
  int v369; // [sp+70h] [bp-2D4h]
  _DWORD *v370; // [sp+70h] [bp-2D4h]
  unsigned int v371; // [sp+70h] [bp-2D4h]
  int v372; // [sp+70h] [bp-2D4h]
  unsigned int v373; // [sp+70h] [bp-2D4h]
  _QWORD *v374; // [sp+70h] [bp-2D4h]
  unsigned int v375; // [sp+74h] [bp-2D0h]
  _QWORD *v376; // [sp+74h] [bp-2D0h]
  unsigned int v377; // [sp+74h] [bp-2D0h]
  int v378; // [sp+74h] [bp-2D0h]
  unsigned int v379; // [sp+74h] [bp-2D0h]
  unsigned int v380; // [sp+78h] [bp-2CCh]
  unsigned int v381; // [sp+78h] [bp-2CCh]
  _DWORD *v382; // [sp+78h] [bp-2CCh]
  int v383; // [sp+78h] [bp-2CCh]
  int v384; // [sp+78h] [bp-2CCh]
  int v385; // [sp+78h] [bp-2CCh]
  unsigned int v386; // [sp+78h] [bp-2CCh]
  _QWORD *v387; // [sp+78h] [bp-2CCh]
  unsigned int v388; // [sp+7Ch] [bp-2C8h]
  int v389; // [sp+7Ch] [bp-2C8h]
  unsigned int v390; // [sp+7Ch] [bp-2C8h]
  int v391; // [sp+7Ch] [bp-2C8h]
  unsigned int v392; // [sp+7Ch] [bp-2C8h]
  int v393; // [sp+7Ch] [bp-2C8h]
  unsigned int v394; // [sp+7Ch] [bp-2C8h]
  int v395; // [sp+80h] [bp-2C4h]
  unsigned int v396; // [sp+80h] [bp-2C4h]
  _QWORD *v397; // [sp+80h] [bp-2C4h]
  _DWORD *v398; // [sp+80h] [bp-2C4h]
  int v399; // [sp+80h] [bp-2C4h]
  unsigned int v400; // [sp+80h] [bp-2C4h]
  _QWORD *v401; // [sp+80h] [bp-2C4h]
  int v402; // [sp+84h] [bp-2C0h]
  int v403; // [sp+84h] [bp-2C0h]
  unsigned int v404; // [sp+84h] [bp-2C0h]
  _QWORD *v405; // [sp+84h] [bp-2C0h]
  char *v406; // [sp+84h] [bp-2C0h]
  int v407; // [sp+84h] [bp-2C0h]
  unsigned int v408; // [sp+84h] [bp-2C0h]
  int v409; // [sp+88h] [bp-2BCh]
  int v410; // [sp+88h] [bp-2BCh]
  int v411; // [sp+88h] [bp-2BCh]
  unsigned int v412; // [sp+88h] [bp-2BCh]
  _QWORD *v413; // [sp+88h] [bp-2BCh]
  int v414; // [sp+88h] [bp-2BCh]
  _QWORD *v415; // [sp+88h] [bp-2BCh]
  _DWORD *v416; // [sp+88h] [bp-2BCh]
  unsigned int v417; // [sp+88h] [bp-2BCh]
  unsigned int v418; // [sp+8Ch] [bp-2B8h]
  int v419; // [sp+8Ch] [bp-2B8h]
  int v420; // [sp+8Ch] [bp-2B8h]
  unsigned int v421; // [sp+8Ch] [bp-2B8h]
  _QWORD *v422; // [sp+8Ch] [bp-2B8h]
  unsigned int v423; // [sp+8Ch] [bp-2B8h]
  int v424; // [sp+8Ch] [bp-2B8h]
  int v425; // [sp+8Ch] [bp-2B8h]
  unsigned int v426; // [sp+8Ch] [bp-2B8h]
  _QWORD *v427; // [sp+8Ch] [bp-2B8h]
  int v428; // [sp+90h] [bp-2B4h]
  int v429; // [sp+90h] [bp-2B4h]
  _QWORD *v430; // [sp+90h] [bp-2B4h]
  _DWORD *v431; // [sp+90h] [bp-2B4h]
  unsigned int v432; // [sp+90h] [bp-2B4h]
  _QWORD *v433; // [sp+90h] [bp-2B4h]
  int v434; // [sp+90h] [bp-2B4h]
  _QWORD *v435; // [sp+90h] [bp-2B4h]
  _DWORD *v436; // [sp+94h] [bp-2B0h]
  _QWORD *v437; // [sp+94h] [bp-2B0h]
  unsigned int v438; // [sp+94h] [bp-2B0h]
  int v439; // [sp+94h] [bp-2B0h]
  _QWORD *v440; // [sp+94h] [bp-2B0h]
  _DWORD *v441; // [sp+98h] [bp-2ACh]
  _QWORD *v442; // [sp+98h] [bp-2ACh]
  unsigned int v443; // [sp+98h] [bp-2ACh]
  int v444; // [sp+98h] [bp-2ACh]
  unsigned int v445; // [sp+9Ch] [bp-2A8h]
  unsigned int v446; // [sp+9Ch] [bp-2A8h]
  _DWORD *v447; // [sp+9Ch] [bp-2A8h]
  int v448; // [sp+9Ch] [bp-2A8h]
  unsigned int v449; // [sp+9Ch] [bp-2A8h]
  unsigned int v450; // [sp+A0h] [bp-2A4h]
  _DWORD *v451; // [sp+A0h] [bp-2A4h]
  _DWORD *v452; // [sp+A0h] [bp-2A4h]
  int v453; // [sp+A0h] [bp-2A4h]
  _QWORD *v454; // [sp+A0h] [bp-2A4h]
  unsigned int v455; // [sp+A0h] [bp-2A4h]
  unsigned int v456; // [sp+A0h] [bp-2A4h]
  unsigned int v457; // [sp+A4h] [bp-2A0h]
  _DWORD *v458; // [sp+A4h] [bp-2A0h]
  unsigned int v459; // [sp+A4h] [bp-2A0h]
  unsigned int v460; // [sp+A4h] [bp-2A0h]
  _QWORD *v461; // [sp+A8h] [bp-29Ch]
  int v462; // [sp+A8h] [bp-29Ch]
  int v463; // [sp+A8h] [bp-29Ch]
  _QWORD *v464; // [sp+A8h] [bp-29Ch]
  int v465; // [sp+A8h] [bp-29Ch]
  unsigned int v466; // [sp+A8h] [bp-29Ch]
  int v467; // [sp+ACh] [bp-298h]
  unsigned int v468; // [sp+ACh] [bp-298h]
  unsigned int v469; // [sp+ACh] [bp-298h]
  int v470; // [sp+B0h] [bp-294h]
  _DWORD *v471; // [sp+B0h] [bp-294h]
  _QWORD *v472; // [sp+B0h] [bp-294h]
  int v473; // [sp+B0h] [bp-294h]
  unsigned int v474; // [sp+B0h] [bp-294h]
  _QWORD *v475; // [sp+B4h] [bp-290h]
  _DWORD *v476; // [sp+B4h] [bp-290h]
  int v477; // [sp+B4h] [bp-290h]
  unsigned int v478; // [sp+B4h] [bp-290h]
  int v479; // [sp+B4h] [bp-290h]
  _QWORD *v480; // [sp+B4h] [bp-290h]
  int v481; // [sp+B8h] [bp-28Ch]
  int v482; // [sp+B8h] [bp-28Ch]
  unsigned int v483; // [sp+B8h] [bp-28Ch]
  __int64 v484; // [sp+BCh] [bp-288h]
  int v485; // [sp+BCh] [bp-288h]
  int v486; // [sp+BCh] [bp-288h]
  int v487; // [sp+BCh] [bp-288h]
  _QWORD *v488; // [sp+C0h] [bp-284h]
  int v489; // [sp+C0h] [bp-284h]
  int v490; // [sp+C4h] [bp-280h]
  _DWORD *v491; // [sp+C4h] [bp-280h]
  _QWORD *v492; // [sp+C4h] [bp-280h]
  int v493; // [sp+C4h] [bp-280h]
  __int64 v494; // [sp+C8h] [bp-27Ch]
  _DWORD *v495; // [sp+C8h] [bp-27Ch]
  _DWORD *v496; // [sp+C8h] [bp-27Ch]
  _QWORD *v497; // [sp+CCh] [bp-278h]
  __int64 v498; // [sp+D0h] [bp-274h]
  int v499; // [sp+D0h] [bp-274h]
  unsigned int v500; // [sp+D0h] [bp-274h]
  _QWORD *v501; // [sp+D0h] [bp-274h]
  int v502; // [sp+D4h] [bp-270h]
  int v503; // [sp+D4h] [bp-270h]
  size_t na; // [sp+D8h] [bp-26Ch]
  __int64 v506; // [sp+DCh] [bp-268h]
  int v507; // [sp+DCh] [bp-268h]
  _QWORD *v508; // [sp+DCh] [bp-268h]
  _DWORD *v509; // [sp+DCh] [bp-268h]
  int v510; // [sp+DCh] [bp-268h]
  __int64 v511; // [sp+DCh] [bp-268h]
  _DWORD *v512; // [sp+E0h] [bp-264h]
  _QWORD *v513; // [sp+E0h] [bp-264h]
  __int64 v514; // [sp+E4h] [bp-260h]
  _QWORD *v515; // [sp+E4h] [bp-260h]
  _QWORD *v516; // [sp+E4h] [bp-260h]
  int v517; // [sp+E8h] [bp-25Ch]
  int v518; // [sp+ECh] [bp-258h]
  int v519; // [sp+ECh] [bp-258h]
  _DWORD *v520; // [sp+ECh] [bp-258h]
  __int64 v521; // [sp+F0h] [bp-254h]
  _DWORD *v522; // [sp+F0h] [bp-254h]
  int v523; // [sp+F0h] [bp-254h]
  _QWORD *v524; // [sp+F0h] [bp-254h]
  _DWORD *v525; // [sp+F4h] [bp-250h]
  _DWORD *v526; // [sp+F4h] [bp-250h]
  int v527; // [sp+F8h] [bp-24Ch]
  _QWORD *v528; // [sp+F8h] [bp-24Ch]
  _DWORD *v529; // [sp+F8h] [bp-24Ch]
  int v530; // [sp+FCh] [bp-248h]
  unsigned int v531; // [sp+FCh] [bp-248h]
  _QWORD *v532; // [sp+FCh] [bp-248h]
  __int64 v533; // [sp+100h] [bp-244h]
  int v534; // [sp+100h] [bp-244h]
  _QWORD *v535; // [sp+100h] [bp-244h]
  _DWORD *v536; // [sp+100h] [bp-244h]
  int v537; // [sp+104h] [bp-240h]
  char *v538; // [sp+104h] [bp-240h]
  _QWORD *v539; // [sp+104h] [bp-240h]
  int v540; // [sp+108h] [bp-23Ch]
  _QWORD *v541; // [sp+108h] [bp-23Ch]
  _DWORD *v542; // [sp+108h] [bp-23Ch]
  __int64 v543; // [sp+10Ch] [bp-238h]
  _QWORD *v544; // [sp+10Ch] [bp-238h]
  _DWORD *v545; // [sp+10Ch] [bp-238h]
  _DWORD *v546; // [sp+110h] [bp-234h]
  _QWORD *v547; // [sp+110h] [bp-234h]
  __int64 v548; // [sp+114h] [bp-230h]
  int v549; // [sp+114h] [bp-230h]
  _QWORD *v550; // [sp+114h] [bp-230h]
  int v551; // [sp+118h] [bp-22Ch]
  _QWORD *v552; // [sp+118h] [bp-22Ch]
  int *v553; // [sp+118h] [bp-22Ch]
  _QWORD *v554; // [sp+118h] [bp-22Ch]
  __int64 v555; // [sp+11Ch] [bp-228h]
  int v556; // [sp+11Ch] [bp-228h]
  _QWORD *v557; // [sp+120h] [bp-224h]
  __int64 v558; // [sp+124h] [bp-220h]
  unsigned int v559; // [sp+124h] [bp-220h]
  _DWORD *v560; // [sp+124h] [bp-220h]
  _QWORD *v561; // [sp+128h] [bp-21Ch]
  _QWORD *v562; // [sp+128h] [bp-21Ch]
  _QWORD *v563; // [sp+128h] [bp-21Ch]
  __int64 v564; // [sp+12Ch] [bp-218h]
  int v565; // [sp+12Ch] [bp-218h]
  _DWORD *v566; // [sp+12Ch] [bp-218h]
  _QWORD *v567; // [sp+130h] [bp-214h]
  _QWORD *v568; // [sp+130h] [bp-214h]
  _DWORD *v569; // [sp+130h] [bp-214h]
  int v570; // [sp+130h] [bp-214h]
  __int64 v571; // [sp+134h] [bp-210h]
  int v572; // [sp+134h] [bp-210h]
  _DWORD *v573; // [sp+134h] [bp-210h]
  _QWORD *v574; // [sp+134h] [bp-210h]
  _QWORD *v575; // [sp+138h] [bp-20Ch]
  _QWORD *v576; // [sp+138h] [bp-20Ch]
  _DWORD *v577; // [sp+138h] [bp-20Ch]
  __int64 v578; // [sp+13Ch] [bp-208h]
  int v579; // [sp+13Ch] [bp-208h]
  _QWORD *v580; // [sp+13Ch] [bp-208h]
  _QWORD *v581; // [sp+13Ch] [bp-208h]
  _QWORD *v582; // [sp+140h] [bp-204h]
  _QWORD *v583; // [sp+140h] [bp-204h]
  __int64 v584; // [sp+144h] [bp-200h]
  int v585; // [sp+144h] [bp-200h]
  int v586; // [sp+148h] [bp-1FCh]
  __int64 v587; // [sp+14Ch] [bp-1F8h]
  int v588; // [sp+14Ch] [bp-1F8h]
  _QWORD *v589; // [sp+14Ch] [bp-1F8h]
  int v590; // [sp+150h] [bp-1F4h]
  _QWORD *v591; // [sp+150h] [bp-1F4h]
  int v592; // [sp+150h] [bp-1F4h]
  __int64 v593; // [sp+154h] [bp-1F0h]
  int v594; // [sp+154h] [bp-1F0h]
  _QWORD *v595; // [sp+154h] [bp-1F0h]
  int v596; // [sp+158h] [bp-1ECh]
  int v597; // [sp+15Ch] [bp-1E8h]
  unsigned int v598; // [sp+15Ch] [bp-1E8h]
  __int64 v599; // [sp+160h] [bp-1E4h]
  unsigned int v600; // [sp+160h] [bp-1E4h]
  int v601; // [sp+160h] [bp-1E4h]
  int v602; // [sp+160h] [bp-1E4h]
  unsigned int v603; // [sp+164h] [bp-1E0h]
  int v604; // [sp+164h] [bp-1E0h]
  int v605; // [sp+168h] [bp-1DCh]
  int v606; // [sp+168h] [bp-1DCh]
  int v607; // [sp+168h] [bp-1DCh]
  int v608; // [sp+168h] [bp-1DCh]
  int v609; // [sp+16Ch] [bp-1D8h]
  _DWORD *v610; // [sp+16Ch] [bp-1D8h]
  int v611; // [sp+16Ch] [bp-1D8h]
  int v612; // [sp+170h] [bp-1D4h]
  int v613; // [sp+170h] [bp-1D4h]
  int v614; // [sp+170h] [bp-1D4h]
  __int64 v615; // [sp+174h] [bp-1D0h]
  int v616; // [sp+174h] [bp-1D0h]
  _QWORD *v617; // [sp+174h] [bp-1D0h]
  int v618; // [sp+174h] [bp-1D0h]
  int v619; // [sp+178h] [bp-1CCh]
  int v620; // [sp+178h] [bp-1CCh]
  _QWORD *v621; // [sp+178h] [bp-1CCh]
  int v622; // [sp+178h] [bp-1CCh]
  int v623; // [sp+178h] [bp-1CCh]
  __int64 v624; // [sp+17Ch] [bp-1C8h]
  int v625; // [sp+17Ch] [bp-1C8h]
  int v626; // [sp+17Ch] [bp-1C8h]
  int v627; // [sp+17Ch] [bp-1C8h]
  int v628; // [sp+180h] [bp-1C4h]
  int v629; // [sp+180h] [bp-1C4h]
  _QWORD *v630; // [sp+180h] [bp-1C4h]
  __int64 v631; // [sp+184h] [bp-1C0h]
  int v632; // [sp+184h] [bp-1C0h]
  int v633; // [sp+184h] [bp-1C0h]
  int v634; // [sp+188h] [bp-1BCh]
  int v635; // [sp+188h] [bp-1BCh]
  int v636; // [sp+188h] [bp-1BCh]
  int v637; // [sp+188h] [bp-1BCh]
  __int64 v638; // [sp+18Ch] [bp-1B8h]
  int v639; // [sp+18Ch] [bp-1B8h]
  int v640; // [sp+18Ch] [bp-1B8h]
  _DWORD *v641; // [sp+18Ch] [bp-1B8h]
  unsigned int v642; // [sp+190h] [bp-1B4h]
  int v643; // [sp+190h] [bp-1B4h]
  _DWORD *v644; // [sp+190h] [bp-1B4h]
  __int64 v645; // [sp+194h] [bp-1B0h]
  int v646; // [sp+194h] [bp-1B0h]
  int v647; // [sp+194h] [bp-1B0h]
  int v648; // [sp+194h] [bp-1B0h]
  unsigned int v649; // [sp+198h] [bp-1ACh]
  int v650; // [sp+198h] [bp-1ACh]
  unsigned int v651; // [sp+198h] [bp-1ACh]
  __int64 v652; // [sp+19Ch] [bp-1A8h]
  int v653; // [sp+19Ch] [bp-1A8h]
  int v654; // [sp+19Ch] [bp-1A8h]
  int v655; // [sp+19Ch] [bp-1A8h]
  unsigned int v656; // [sp+1A0h] [bp-1A4h]
  int v657; // [sp+1A0h] [bp-1A4h]
  __int64 v658; // [sp+1A4h] [bp-1A0h]
  __int64 v659; // [sp+1A4h] [bp-1A0h]
  __int64 v660; // [sp+1ACh] [bp-198h]
  int v661; // [sp+1ACh] [bp-198h]
  _QWORD *v662; // [sp+1ACh] [bp-198h]
  int v663; // [sp+1B0h] [bp-194h]
  _DWORD *v664; // [sp+1B0h] [bp-194h]
  __int64 v665; // [sp+1B4h] [bp-190h]
  unsigned int v666; // [sp+1B4h] [bp-190h]
  int v667; // [sp+1B8h] [bp-18Ch]
  _QWORD *v668; // [sp+1B8h] [bp-18Ch]
  int v669; // [sp+1BCh] [bp-188h]
  _QWORD *v670; // [sp+1BCh] [bp-188h]
  unsigned int v671; // [sp+1BCh] [bp-188h]
  unsigned int v672; // [sp+1BCh] [bp-188h]
  int v673; // [sp+1C0h] [bp-184h]
  _DWORD *v674; // [sp+1C0h] [bp-184h]
  _DWORD *v675; // [sp+1C0h] [bp-184h]
  unsigned int v676; // [sp+1C0h] [bp-184h]
  unsigned int v677; // [sp+1C4h] [bp-180h]
  int v678; // [sp+1C4h] [bp-180h]
  int v679; // [sp+1C4h] [bp-180h]
  unsigned int v680; // [sp+1C8h] [bp-17Ch]
  _QWORD *v681; // [sp+1C8h] [bp-17Ch]
  unsigned int v682; // [sp+1C8h] [bp-17Ch]
  int v683; // [sp+1CCh] [bp-178h]
  _QWORD *v684; // [sp+1CCh] [bp-178h]
  int v685; // [sp+1CCh] [bp-178h]
  unsigned int v686; // [sp+1D0h] [bp-174h]
  _DWORD *v687; // [sp+1D0h] [bp-174h]
  int v688; // [sp+1D0h] [bp-174h]
  unsigned int v689; // [sp+1D0h] [bp-174h]
  int v690; // [sp+1D4h] [bp-170h]
  _QWORD *v691; // [sp+1D4h] [bp-170h]
  _DWORD *v692; // [sp+1D4h] [bp-170h]
  int v693; // [sp+1D8h] [bp-16Ch]
  _DWORD *v694; // [sp+1D8h] [bp-16Ch]
  int v695; // [sp+1DCh] [bp-168h]
  _QWORD *v696; // [sp+1DCh] [bp-168h]
  _DWORD *v697; // [sp+1DCh] [bp-168h]
  _QWORD *v698; // [sp+1E0h] [bp-164h]
  _DWORD *v699; // [sp+1E0h] [bp-164h]
  _QWORD *v700; // [sp+1E4h] [bp-160h]
  unsigned int v701; // [sp+1E8h] [bp-15Ch]
  int v702; // [sp+1ECh] [bp-158h]
  int v703; // [sp+1ECh] [bp-158h]
  int v704; // [sp+1F0h] [bp-154h]
  unsigned int v705; // [sp+1F4h] [bp-150h]
  int v706; // [sp+1F4h] [bp-150h]
  int v707; // [sp+1F8h] [bp-14Ch]
  int v708; // [sp+1F8h] [bp-14Ch]
  _DWORD *v709; // [sp+1F8h] [bp-14Ch]
  int v710; // [sp+1FCh] [bp-148h]
  _DWORD *v711; // [sp+1FCh] [bp-148h]
  int v712; // [sp+200h] [bp-144h]
  unsigned int v713; // [sp+204h] [bp-140h]
  int v714; // [sp+210h] [bp-134h]
  int v715; // [sp+214h] [bp-130h]
  int v716; // [sp+21Ch] [bp-128h]
  char *src; // [sp+234h] [bp-110h]
  __int64 v719; // [sp+254h] [bp-F0h]
  __int64 v720; // [sp+25Ch] [bp-E8h]
  int v721; // [sp+264h] [bp-E0h]
  __int64 v722; // [sp+26Ch] [bp-D8h]
  __int64 *v723; // [sp+2BCh] [bp-88h]
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
  v723 = a1 + 17;
  memcpy(dest, a1 + 17, sizeof(dest));
  if ( !a3 )
    goto LABEL_18;
  v5 = v3;
  v240 = 1620664;
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
  v243 = 0;
  v558 = *a1;
  v665 = *a1 ^ dest[0];
  v660 = a1[1] ^ dest[1];
  v564 = a1[1];
  v571 = a1[2];
  v578 = a1[3];
  v658 = v571 ^ dest[2];
  v719 = dest[3];
  v494 = v578 ^ dest[3];
  v720 = dest[4];
  LODWORD(v498) = *((_DWORD *)a1 + 8) ^ LODWORD(dest[4]);
  v584 = a1[4];
  HIDWORD(v498) = HIDWORD(v584) ^ HIDWORD(dest[4]);
  v721 = dest[5];
  v587 = a1[5];
  v593 = a1[6];
  v506 = v587 ^ dest[5];
  v722 = dest[6];
  v514 = v593 ^ dest[6];
  v518 = *((_DWORD *)a1 + 14) ^ LODWORD(dest[7]);
  v521 = *(__int64 *)((char *)a1 + 60) ^ *(_QWORD *)((char *)&dest[7] + 4);
  v597 = *((_DWORD *)a1 + 14);
  v599 = *(__int64 *)((char *)a1 + 60);
  v605 = *((_DWORD *)a1 + 17);
  v609 = *((_DWORD *)a1 + 18);
  v612 = *((_DWORD *)a1 + 19);
  v527 = v605 ^ HIDWORD(dest[8]);
  v481 = v609 ^ LODWORD(dest[9]);
  v530 = v612 ^ HIDWORD(dest[9]);
  v615 = a1[10];
  v484 = v615 ^ dest[10];
  v624 = a1[11];
  v533 = v624 ^ dest[11];
  v631 = a1[12];
  v540 = v631 ^ LODWORD(dest[12]);
  v490 = HIDWORD(v631) ^ HIDWORD(dest[12]);
  v638 = a1[13];
  v543 = v638 ^ dest[13];
  v548 = a1[14] ^ dest[14];
  v652 = a1[15];
  v645 = a1[14];
  v555 = v652 ^ dest[15];
  do
  {
    v255 = v665 ^ v243;
    v339 = HIDWORD(v660) ^ ((unsigned __int64)(v243 + 16) >> 32);
    v346 = HIDWORD(v658) ^ ((unsigned __int64)(v243 + 32) >> 32);
    v266 = HIDWORD(v494) ^ ((unsigned __int64)(v243 + 48) >> 32);
    v272 = HIDWORD(v498) ^ ((unsigned __int64)(v243 + 64) >> 32);
    v245 = ((unsigned __int64)(v243 + 80) >> 32) ^ HIDWORD(v506);
    v9 = ((unsigned __int64)(v243 + 96) >> 32) ^ HIDWORD(v514);
    v278 = v518 ^ (v243 + 112);
    v282 = HIDWORD(v521) ^ (v243 + 128);
    v375 = v481 ^ (v243 + 144);
    v380 = v484 ^ (v243 + 160);
    v294 = v533 ^ (v243 + 176);
    v299 = v540 ^ (v243 + 192);
    v305 = v543 ^ (v243 + 208);
    *(_QWORD *)&v306[4] = v548 ^ (v243 + 224);
    v388 = HIDWORD(v533) ^ ((unsigned __int64)(v243 + 176) >> 32);
    v320 = v555 ^ (v243 + 240);
    v260 = v660 ^ (v243 + 16);
    v250 = v530 ^ ((unsigned __int64)(v243 + 144) >> 32);
    v289 = HIDWORD(v484) ^ ((unsigned __int64)(v243 + 160) >> 32);
    v335 = v494 ^ (v243 + 48);
    v418 = ((unsigned int)v498 ^ ((_DWORD)v243 + 64)) >> 24;
    v353 = v514 ^ (v243 + 96);
    v457 = HIBYTE(v9);
    v450 = ((unsigned int)v506 ^ ((_DWORD)v243 + 80)) >> 24;
    v467 = ((unsigned int)v521 ^ ((unsigned __int64)(v243 + 112) >> 32)) >> 24;
    v482 = (v527 ^ ((unsigned __int64)(v243 + 128) >> 32)) >> 24;
    v499 = v498 ^ (v243 + 64);
    v402 = (HIDWORD(v548) ^ ((unsigned __int64)(v243 + 224) >> 32)) >> 24;
    v428 = (HIDWORD(v555) ^ ((unsigned __int64)(v243 + 240) >> 32)) >> 24;
    v507 = v506 ^ (v243 + 80);
    v359 = v521 ^ ((unsigned __int64)(v243 + 112) >> 32);
    v531 = v490 ^ ((unsigned __int64)(v243 + 192) >> 32);
    v686 = (unsigned int)(HIDWORD(v665) ^ HIDWORD(v243)) >> 24;
    v445 = HIBYTE(v245);
    LODWORD(v514) = 8 * HIBYTE(v278) + 1628848;
    v519 = 8 * HIBYTE(v282) + 1628848;
    v10 = 8 * (((unsigned int)v548 ^ ((_DWORD)v243 + 224)) >> 24) + 1628848;
    v491 = &dword_18C2B8[2 * v402];
    v485 = 8 * v450 + 1628848;
    v537 = 8 * HIBYTE(v380) + 1628848;
    v549 = 8 * HIBYTE(v294) + 1628848;
    HIDWORD(v555) = 8 * HIBYTE(v299) + 1628848;
    HIDWORD(v658) = 8 * HIBYTE(v305) + 1628848;
    v11 = 8 * (((unsigned int)v665 ^ (unsigned int)v243) >> 24) + 1628848;
    v666 = v10;
    v677 = 8 * (((unsigned int)v555 ^ ((_DWORD)v243 + 240)) >> 24) + 1628848;
    v680 = v11;
    v12 = &dword_18D2C0[2 * (unsigned __int8)(((unsigned int)v658 ^ ((_DWORD)v243 + 32)) >> 16)];
    v13 = &qword_18CAC0[(unsigned __int8)((unsigned __int16)(v660 ^ (v243 + 16)) >> 8)];
    v14 = &qword_18E2C0[(unsigned __int8)v272];
    v15 = BYTE2(v9);
    v16 = BYTE1(v9);
    v17 = &qword_18E2C0[(unsigned __int8)v245];
    v488 = &qword_18E2C0[(unsigned __int8)(((unsigned __int64)(v243 + 96) >> 32) ^ BYTE4(v514))];
    v18 = BYTE2(v359);
    v19 = (unsigned __int8)(v660 ^ (v243 + 16));
    v20 = *(_DWORD *)(v240 + 8 * (unsigned __int8)v255)
        ^ (v243 + 1)
        ^ dword_18C2B8[2 * HIBYTE(v388)]
        ^ *((_DWORD *)v13 - 2);
    v502 = BYTE2(v245);
    v21 = *(_DWORD *)(v240 + 8 * (unsigned __int8)v255 + 4)
        ^ ((unsigned __int64)(v243 + 1) >> 32)
        ^ dword_18C2B8[2 * HIBYTE(v388) + 1]
        ^ *((_DWORD *)v13 - 1)
        ^ *(v12 - 1);
    v22 = &qword_18CAC0[(unsigned __int8)((unsigned __int16)(v658 ^ (v243 + 32)) >> 8)];
    v451 = &dword_18D2C0[2 * BYTE2(v335)];
    v23 = (unsigned __int8)(v658 ^ (v243 + 32));
    v701 = 8 * (((unsigned int)v658 ^ ((_DWORD)v243 + 32)) >> 24) + 1628848;
    v360 = BYTE1(v359);
    HIDWORD(v494) = &qword_18E2C0[(unsigned __int8)(v521 ^ ((unsigned __int64)(v243 + 112) >> 32))];
    v368 = (unsigned __int8)((v527 ^ ((unsigned __int64)(v243 + 128) >> 32)) >> 16);
    v409 = (unsigned __int8)((unsigned __int16)(v527 ^ ((unsigned __int64)(v243 + 128) >> 32)) >> 8);
    HIDWORD(v514) = &qword_18E2C0[(unsigned __int8)(v527 ^ ((unsigned __int64)(v243 + 128) >> 32))];
    v24 = v21 ^ HIDWORD(qword_18DAB0[HIBYTE(v335) + 1]) ^ *((_DWORD *)v14 - 1);
    v551 = (unsigned __int8)(v494 ^ (v243 + 48));
    v475 = &qword_18CAC0[BYTE1(v335)];
    v25 = *((_DWORD *)&unk_18F2B8 + 2 * v15 + 1);
    v26 = *((_DWORD *)&unk_18EAB8 + 2 * v16 + 1);
    v27 = v20
        ^ *(v12 - 2)
        ^ LODWORD(qword_18DAB0[HIBYTE(v335) + 1])
        ^ *((_DWORD *)v14 - 2)
        ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v245))
        ^ *((_DWORD *)&unk_18F2B8 + 2 * v15);
    v534 = *((_DWORD *)&unk_18EAB8 + 2 * v16);
    v28 = *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v245) + 1);
    v246 = v27;
    v29 = v24 ^ v28 ^ v25;
    v30 = *(_DWORD *)(v240 + 8 * v19);
    v31 = *(_DWORD *)(v240 + 8 * v19 + 4);
    v330 = v29;
    v32 = &dword_18D2C0[2 * BYTE2(v499)];
    v33 = *((_DWORD *)v22 - 2);
    v669 = (unsigned __int8)v499;
    v461 = &qword_18CAC0[BYTE1(v499)];
    v34 = v31 ^ dword_18C2B8[2 * HIBYTE(v531) + 1] ^ ((unsigned __int64)(v243 + 17) >> 32) ^ *((_DWORD *)v22 - 1);
    v35 = *(v451 - 2);
    v36 = *(v451 - 1);
    v452 = &dword_18D2C0[2 * BYTE2(v507)];
    v690 = (unsigned __int8)v507;
    v508 = &qword_18CAC0[BYTE1(v507)];
    v673 = BYTE1(v250);
    v512 = &dword_18D2C0[2 * BYTE2(v353)];
    v683 = BYTE2(v289);
    v336 = v26
         ^ *((_DWORD *)v17 - 1)
         ^ HIDWORD(qword_18DAB0[v418 + 1])
         ^ v34
         ^ v36
         ^ *((_DWORD *)&unk_18F2B8 + 2 * v18 + 1);
    v661 = *((_DWORD *)&unk_18EAB8 + 2 * v409 + 1);
    v705 = *((_DWORD *)v17 - 2)
         ^ LODWORD(qword_18DAB0[v418 + 1])
         ^ v30
         ^ dword_18C2B8[2 * HIBYTE(v531)]
         ^ (v243 + 17)
         ^ v33
         ^ v35
         ^ v534
         ^ *((_DWORD *)&unk_18F2B8 + 2 * v18);
    v667 = *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v250) + 1);
    LODWORD(v555) = *((_DWORD *)&unk_18EAB8 + 2 * v409);
    v663 = *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v250));
    v410 = qword_18DAB0[HIBYTE(v353) + 1];
    v419 = HIDWORD(qword_18DAB0[HIBYTE(v353) + 1]);
    v702 = (unsigned __int8)v353;
    v37 = &qword_18CAC0[BYTE1(v353)];
    v38 = *v491 ^ *(_DWORD *)(v240 + 8 * v551) ^ (v243 + 49);
    v39 = v491[1] ^ *(_DWORD *)(v240 + 8 * v551 + 4) ^ ((unsigned __int64)(v243 + 49) >> 32);
    v40 = *(_DWORD *)(v240 + 8 * v23)
        ^ dword_18C2B8[2 * ((HIDWORD(v543) ^ ((unsigned __int64)(v243 + 208) >> 32)) >> 24)]
        ^ (v243 + 33)
        ^ *((_DWORD *)v475 - 2)
        ^ *(v32 - 2)
        ^ *(_DWORD *)(v485 + 8)
        ^ *((_DWORD *)v488 - 2);
    v41 = dword_18C2B8[2 * ((HIDWORD(v543) ^ ((unsigned __int64)(v243 + 208) >> 32)) >> 24) + 1]
        ^ *(_DWORD *)(v240 + 8 * v23 + 4)
        ^ ((unsigned __int64)(v243 + 33) >> 32)
        ^ *((_DWORD *)v475 - 1)
        ^ *(v32 - 1)
        ^ *(_DWORD *)(v485 + 12)
        ^ *((_DWORD *)v488 - 1)
        ^ *((_DWORD *)&unk_18EAB8 + 2 * v360 + 1);
    v476 = &dword_18D2C0[2 * BYTE2(v278)];
    v492 = &qword_18E2C0[(unsigned __int8)v250];
    LODWORD(v494) = HIBYTE(v250);
    v693 = BYTE1(v289);
    v695 = BYTE2(v388);
    v710 = (unsigned __int8)v278;
    v42 = &qword_18CAC0[BYTE1(v278)];
    v522 = &dword_18D2C0[2 * BYTE2(v282)];
    v500 = HIBYTE(v289);
    LOBYTE(v33) = v388;
    LOWORD(v18) = v531;
    v528 = &qword_18E2C0[(unsigned __int8)v289];
    v389 = BYTE1(v388);
    v43 = BYTE2(v531);
    v541 = &qword_18E2C0[(unsigned __int8)v33];
    v354 = (unsigned __int8)v282;
    v532 = &qword_18CAC0[BYTE1(v282)];
    v707 = v43;
    v44 = v41 ^ *((_DWORD *)&unk_18F2B8 + 2 * v368 + 1);
    v45 = BYTE1(v18);
    v46 = &qword_18E2C0[(unsigned __int8)v18];
    v47 = HIDWORD(v543) ^ ((unsigned __int64)(v243 + 208) >> 32);
    v544 = &qword_18CAC0[BYTE1(v375)];
    v279 = v44;
    v251 = v40 ^ *((_DWORD *)&unk_18EAB8 + 2 * v360) ^ *((_DWORD *)&unk_18F2B8 + 2 * v368);
    v552 = v46;
    v48 = BYTE2(v47);
    v361 = BYTE1(v47);
    v546 = &dword_18D2C0[2 * BYTE2(v380)];
    LODWORD(v658) = &qword_18E2C0[(unsigned __int8)v47];
    v369 = v306[10];
    v283 = v38 ^ *((_DWORD *)v461 - 2) ^ *(v452 - 2) ^ v410 ^ *(_DWORD *)(HIDWORD(v494) - 8) ^ v555 ^ v663;
    v411 = (unsigned __int8)v380;
    v290 = v39 ^ *((_DWORD *)v461 - 1) ^ *(v452 - 1) ^ v419 ^ *(_DWORD *)(HIDWORD(v494) - 4) ^ v661 ^ v667;
    LODWORD(v555) = &qword_18CAC0[BYTE1(v380)];
    v49 = *((_DWORD *)v508 - 2);
    v50 = *((_DWORD *)v508 - 1);
    v509 = &dword_18D2C0[2 * BYTE2(v294)];
    v51 = v306[8];
    *(_DWORD *)&v306[8] = v306[9];
    v662 = &qword_18E2C0[v51];
    v52 = v50
        ^ dword_18C2B8[2 * v428 + 1]
        ^ *(_DWORD *)(v240 + 8 * v669 + 4)
        ^ ((unsigned __int64)(v243 + 65) >> 32)
        ^ *(v512 - 1);
    v53 = *(_DWORD *)(v240 + 8 * v669) ^ dword_18C2B8[2 * v428] ^ (v243 + 65) ^ v49 ^ *(v512 - 2);
    v395 = BYTE6(v320);
    v403 = BYTE6(v255);
    v453 = (unsigned __int8)v294;
    v513 = &qword_18CAC0[BYTE1(v294)];
    v54 = v53 ^ *(_DWORD *)(v514 + 8);
    v55 = v52 ^ *(_DWORD *)(v514 + 12);
    LODWORD(v514) = &dword_18D2C0[2 * BYTE2(v299)];
    v56 = *(_DWORD *)(HIDWORD(v514) - 4) ^ v55;
    v420 = BYTE5(v320);
    v668 = &qword_18E2C0[BYTE4(v320)];
    v57 = *(_DWORD *)(HIDWORD(v514) - 8)
        ^ v54
        ^ *((_DWORD *)&unk_18EAB8 + 2 * v673)
        ^ *((_DWORD *)&unk_18F2B8 + 2 * v683);
    v429 = BYTE5(v255);
    HIDWORD(v320) = &qword_18E2C0[BYTE4(v255)];
    v462 = (unsigned __int8)v299;
    HIDWORD(v514) = &qword_18CAC0[BYTE1(v299)];
    HIDWORD(v255) = v56 ^ *((_DWORD *)&unk_18EAB8 + 2 * v673 + 1) ^ *((_DWORD *)&unk_18F2B8 + 2 * v683 + 1);
    v381 = v57;
    v664 = &dword_18D2C0[2 * BYTE2(v305)];
    v470 = BYTE1(v339);
    v58 = dword_18C2B8[2 * v686 + 1]
        ^ ((unsigned __int64)(v243 + 81) >> 32)
        ^ *(_DWORD *)(v240 + 8 * v690 + 4)
        ^ *((_DWORD *)v37 - 1);
    v59 = dword_18C2B8[2 * v686] ^ (v243 + 81) ^ *(_DWORD *)(v240 + 8 * v690) ^ *((_DWORD *)v37 - 2);
    v691 = &qword_18E2C0[(unsigned __int8)v339];
    v486 = BYTE1(v346);
    v698 = &qword_18E2C0[(unsigned __int8)v346];
    v60 = v58 ^ *(v476 - 1) ^ *(_DWORD *)(v519 + 12);
    v61 = v59 ^ *(v476 - 2) ^ *(_DWORD *)(v519 + 8);
    v489 = BYTE2(v266);
    v477 = (unsigned __int8)v305;
    v670 = &qword_18CAC0[BYTE1(v305)];
    v62 = *((_DWORD *)v492 - 2);
    v674 = &dword_18D2C0[2 * v306[6]];
    v63 = v60 ^ *((_DWORD *)v492 - 1);
    v493 = v306[4];
    v64 = v61 ^ v62 ^ *((_DWORD *)&unk_18EAB8 + 2 * v693);
    v684 = &qword_18CAC0[v306[5]];
    v295 = *((_DWORD *)&unk_18EAB8 + 2 * v693 + 1) ^ v63 ^ *((_DWORD *)&unk_18F2B8 + 2 * v695 + 1);
    v687 = &dword_18D2C0[2 * BYTE2(v320)];
    v694 = &dword_18D2C0[2 * BYTE2(v255)];
    v700 = &qword_18CAC0[BYTE1(v255)];
    LODWORD(v255) = v64 ^ *((_DWORD *)&unk_18F2B8 + 2 * v695);
    HIDWORD(v494) = (unsigned __int8)v320;
    v696 = &qword_18CAC0[BYTE1(v320)];
    v300 = *(_DWORD *)(v240 + 8 * v702)
         ^ dword_18C2B8[2 * HIBYTE(v339)]
         ^ (v243 + 97)
         ^ *((_DWORD *)v42 - 2)
         ^ *(v522 - 2)
         ^ LODWORD(qword_18DAB0[HIBYTE(v375) + 1])
         ^ *((_DWORD *)v528 - 2)
         ^ *((_DWORD *)&unk_18EAB8 + 2 * v389)
         ^ *((_DWORD *)&unk_18F2B8 + 2 * v707);
    v390 = *(_DWORD *)(v240 + 8 * v702 + 4)
         ^ dword_18C2B8[2 * HIBYTE(v339) + 1]
         ^ ((unsigned __int64)(v243 + 97) >> 32)
         ^ *((_DWORD *)v42 - 1)
         ^ *(v522 - 1)
         ^ HIDWORD(qword_18DAB0[HIBYTE(v375) + 1])
         ^ *((_DWORD *)v528 - 1)
         ^ *((_DWORD *)&unk_18EAB8 + 2 * v389 + 1)
         ^ *((_DWORD *)&unk_18F2B8 + 2 * v707 + 1);
    v65 = dword_18C2B8[2 * HIBYTE(v272) + 1] ^ *(_DWORD *)(v240 + 8 * (unsigned __int8)v375 + 4);
    v708 = *((_DWORD *)&unk_18EAB8 + 2 * *(_DWORD *)&v306[8] + 1);
    *(_QWORD *)v306 = *(_QWORD *)(v240 + 8 * v710)
                    ^ *(_QWORD *)&dword_18C2B8[2 * HIBYTE(v346)]
                    ^ (v243 + 113)
                    ^ *(v532 - 1)
                    ^ *(_QWORD *)&dword_18D2C0[2 * BYTE2(v375) - 2]
                    ^ *(_QWORD *)(v537 + 8)
                    ^ *(v541 - 1)
                    ^ *((_QWORD *)&unk_18EAB8 + v45)
                    ^ *((_QWORD *)&unk_18F2B8 + v48);
    v704 = *((_DWORD *)&unk_18EAB8 + 2 * *(_DWORD *)&v306[8]);
    v703 = dword_18C2B8[2 * HIBYTE(v272)] ^ *(_DWORD *)(v240 + 8 * (unsigned __int8)v375) ^ (v243 + 145);
    v436 = (_DWORD *)((char *)&unk_18F2B8 + 8 * BYTE2(v339));
    v525 = (_DWORD *)((char *)&unk_18F2B8 + 8 * BYTE2(v346));
    v538 = (char *)&unk_18F2B8 + 8 * BYTE2(v266);
    LODWORD(v320) = *(v546 - 1)
                  ^ *((_DWORD *)v544 - 1)
                  ^ *(_DWORD *)(v240 + 8 * v354 + 4)
                  ^ dword_18C2B8[2 * HIBYTE(v266) + 1]
                  ^ (__CFADD__((_DWORD)v243, 129) + HIDWORD(v243))
                  ^ *(_DWORD *)(v549 + 12)
                  ^ *((_DWORD *)v552 - 1)
                  ^ *((_DWORD *)&unk_18EAB8 + 2 * v361 + 1)
                  ^ *((_DWORD *)&unk_18F2B8 + 2 * v369 + 1);
    *(_DWORD *)&v306[8] = *(_DWORD *)(v240 + 8 * v354)
                        ^ dword_18C2B8[2 * HIBYTE(v266)]
                        ^ (v243 + 129)
                        ^ *((_DWORD *)v544 - 2)
                        ^ *(v546 - 2)
                        ^ *(_DWORD *)(v549 + 8)
                        ^ *((_DWORD *)v552 - 2)
                        ^ *((_DWORD *)&unk_18EAB8 + 2 * v361)
                        ^ *((_DWORD *)&unk_18F2B8 + 2 * v369);
    v370 = &dword_18D2C0[2 * BYTE2(v260)];
    v340 = 8 * HIBYTE(v260) + 1628848;
    v261 = BYTE1(v266);
    v376 = &qword_18E2C0[(unsigned __int8)v266];
    v267 = BYTE2(v272);
    v273 = BYTE1(v272);
    v66 = dword_18C2B8[2 * v467] ^ *(_DWORD *)(HIDWORD(v320) - 8) ^ *(_DWORD *)(v240 + 8 * v462) ^ (v243 + 193);
    v463 = *(_DWORD *)(v240 + 8 * v462 + 4)
         ^ *(_DWORD *)(HIDWORD(v320) - 4)
         ^ ((unsigned __int64)(v243 + 193) >> 32)
         ^ dword_18C2B8[2 * v467 + 1]
         ^ *((_DWORD *)v670 - 1)
         ^ *(v674 - 1)
         ^ *(_DWORD *)(v677 + 12);
    v67 = *(v694 - 2)
        ^ *(_DWORD *)(v240 + 8 * v493)
        ^ (v243 + 225)
        ^ dword_18C2B8[2 * (_DWORD)v494]
        ^ *((_DWORD *)v696 - 2)
        ^ *(_DWORD *)(v340 + 8)
        ^ *((_DWORD *)v698 - 2)
        ^ *((_DWORD *)&unk_18EAB8 + 2 * v261);
    v68 = *(_DWORD *)(v240 + 8 * v493 + 4)
        ^ *(v694 - 1)
        ^ (__CFADD__((_DWORD)v243, 225) + HIDWORD(v243))
        ^ dword_18C2B8[2 * (_DWORD)v494 + 1]
        ^ *((_DWORD *)v696 - 1)
        ^ *(_DWORD *)(v340 + 12)
        ^ *((_DWORD *)v698 - 1)
        ^ *((_DWORD *)&unk_18EAB8 + 2 * v261 + 1)
        ^ *((_DWORD *)&unk_18F2B8 + 2 * v267 + 1);
    v69 = *(_DWORD *)(v240 + 8 * HIDWORD(v494) + 4)
        ^ *((_DWORD *)v700 - 1)
        ^ ((unsigned __int64)(v243 + 241) >> 32)
        ^ dword_18C2B8[2 * v500 + 1]
        ^ *(v370 - 1)
        ^ *(_DWORD *)(v701 + 12)
        ^ *((_DWORD *)v376 - 1)
        ^ *((_DWORD *)&unk_18EAB8 + 2 * v273 + 1);
    v262 = v703
         ^ *(_DWORD *)(v555 - 8)
         ^ *(v509 - 2)
         ^ *(_DWORD *)(HIDWORD(v555) + 8)
         ^ *(_DWORD *)(v658 - 8)
         ^ v704
         ^ *((_DWORD *)&unk_18F2B8 + 2 * v395);
    v371 = *((_DWORD *)v700 - 2)
         ^ *(_DWORD *)(v240 + 8 * HIDWORD(v494))
         ^ (v243 + 241)
         ^ dword_18C2B8[2 * v500]
         ^ *(v370 - 2)
         ^ *(_DWORD *)(v701 + 8)
         ^ *((_DWORD *)v376 - 2)
         ^ *((_DWORD *)&unk_18EAB8 + 2 * v273)
         ^ *((_DWORD *)&unk_18F2B8 + 2 * v502);
    v362 = v67 ^ *((_DWORD *)&unk_18F2B8 + 2 * v267);
    v274 = *((_DWORD *)&unk_18F2B8 + 2 * v403)
         ^ *(_DWORD *)(v240 + 8 * v411)
         ^ (v243 + 161)
         ^ dword_18C2B8[2 * v445]
         ^ *((_DWORD *)v513 - 2)
         ^ *(_DWORD *)(v514 - 8)
         ^ *(_DWORD *)(HIDWORD(v658) + 8)
         ^ *((_DWORD *)v662 - 2)
         ^ *((_DWORD *)&unk_18EAB8 + 2 * v420);
    v347 = v66
         ^ *((_DWORD *)v670 - 2)
         ^ *(v674 - 2)
         ^ *(_DWORD *)(v677 + 8)
         ^ *((_DWORD *)&unk_18EAB8 + 2 * v470)
         ^ *v525;
    v341 = *((_DWORD *)&unk_18EAB8 + 2 * v429)
         ^ *(_DWORD *)(v240 + 8 * v453)
         ^ (v243 + 177)
         ^ dword_18C2B8[2 * v457]
         ^ *(_DWORD *)(HIDWORD(v514) - 8)
         ^ *(v664 - 2)
         ^ *(_DWORD *)(v666 + 8)
         ^ *((_DWORD *)v668 - 2)
         ^ *v436;
    v268 = *(v509 - 1)
         ^ v65
         ^ ((unsigned __int64)(v243 + 145) >> 32)
         ^ *(_DWORD *)(v555 - 4)
         ^ *(_DWORD *)(HIDWORD(v555) + 12)
         ^ *(_DWORD *)(v658 - 4)
         ^ v708
         ^ *((_DWORD *)&unk_18F2B8 + 2 * v395 + 1);
    v70 = v69 ^ *((_DWORD *)&unk_18F2B8 + 2 * v502 + 1);
    v355 = *(_DWORD *)(v240 + 8 * v477)
         ^ *(_DWORD *)(v680 + 8)
         ^ (v243 + 209)
         ^ dword_18C2B8[2 * v482]
         ^ *((_DWORD *)v684 - 2)
         ^ *(v687 - 2)
         ^ *((_DWORD *)v691 - 2)
         ^ *((_DWORD *)&unk_18EAB8 + 2 * v486)
         ^ *((_DWORD *)&unk_18F2B8 + 2 * v489);
    HIDWORD(v320) = *(_DWORD *)(v240 + 8 * v411 + 4)
                  ^ *((_DWORD *)&unk_18F2B8 + 2 * v403 + 1)
                  ^ ((unsigned __int64)(v243 + 161) >> 32)
                  ^ dword_18C2B8[2 * v445 + 1]
                  ^ *((_DWORD *)v513 - 1)
                  ^ *(_DWORD *)(v514 - 4)
                  ^ *(_DWORD *)(HIDWORD(v658) + 12)
                  ^ *((_DWORD *)v662 - 1)
                  ^ *((_DWORD *)&unk_18EAB8 + 2 * v420 + 1);
    v396 = *(_DWORD *)(v240 + 8 * v453 + 4)
         ^ *((_DWORD *)&unk_18EAB8 + 2 * v429 + 1)
         ^ ((unsigned __int64)(v243 + 177) >> 32)
         ^ dword_18C2B8[2 * v457 + 1]
         ^ *(_DWORD *)(HIDWORD(v514) - 4)
         ^ *(v664 - 1)
         ^ *(_DWORD *)(v666 + 12)
         ^ *((_DWORD *)v668 - 1)
         ^ v436[1];
    v404 = v463 ^ *((_DWORD *)&unk_18EAB8 + 2 * v470 + 1) ^ v525[1];
    v412 = *(_DWORD *)(v680 + 12)
         ^ *(_DWORD *)(v240 + 8 * v477 + 4)
         ^ ((unsigned __int64)(v243 + 209) >> 32)
         ^ dword_18C2B8[2 * v482 + 1]
         ^ *((_DWORD *)v684 - 1)
         ^ *(v687 - 1)
         ^ *((_DWORD *)v691 - 1)
         ^ *((_DWORD *)&unk_18EAB8 + 2 * v486 + 1)
         ^ *((_DWORD *)v538 + 1);
    v713 = v68;
    v487 = HIBYTE(*(_DWORD *)&v306[4]);
    v446 = HIBYTE(v70);
    v483 = HIBYTE(v390);
    v421 = v70;
    v478 = HIBYTE(v295);
    v495 = &dword_18C2B8[2 * HIBYTE(v396)];
    v503 = 8 * HIBYTE(v381) + 1628848;
    v526 = &dword_18C2B8[2 * HIBYTE(v70)];
    v71 = v705;
    v553 = &dword_18C2B8[2 * HIBYTE(v44)];
    v556 = 8 * HIBYTE(v274) + 1628848;
    v692 = &dword_18C2B8[2 * HIBYTE(v295)];
    v688 = 8 * HIBYTE(v347) + 1628848;
    v697 = &dword_18C2B8[2 * HIBYTE(v390)];
    v709 = &dword_18C2B8[2 * HIBYTE(HIDWORD(v320))];
    v699 = &dword_18C2B8[2 * HIBYTE(*(_DWORD *)&v306[4])];
    v716 = HIBYTE(HIDWORD(v320));
    v706 = 8 * HIBYTE(v705) + 1628848;
    v712 = 8 * HIBYTE(v251) + 1628848;
    v72 = &qword_18E2C0[BYTE4(v255)];
    v73 = &qword_18CAC0[BYTE1(v71)];
    v74 = BYTE2(v390);
    v75 = &dword_18D2C0[2 * BYTE2(v251)];
    v76 = BYTE1(v390);
    v515 = &qword_18E2C0[(unsigned __int8)v390];
    v243 += 2;
    v77 = (unsigned __int8)v71;
    v711 = &dword_18D2C0[2 * BYTE2(v71)];
    v391 = BYTE2(v295);
    v78 = v306[6];
    v79 = *((_DWORD *)&unk_18F2B8 + 2 * v74);
    v523 = *((_DWORD *)&unk_18F2B8 + 2 * v74 + 1);
    LOWORD(v71) = v381;
    v430 = &qword_18CAC0[BYTE1(v283)];
    v80 = *(v75 - 1);
    v659 = *((_QWORD *)&unk_18EAB8 + v76);
    v81 = *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v295))
        ^ *v495
        ^ *(_DWORD *)(v240 + 8 * (unsigned __int8)v246)
        ^ *((_DWORD *)v73 - 2)
        ^ *(v75 - 2);
    v82 = v306[5];
    v382 = &dword_18D2C0[2 * BYTE2(v381)];
    v83 = v306[4];
    v84 = *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v295) + 1)
        ^ v495[1]
        ^ *(_DWORD *)(v240 + 8 * (unsigned __int8)v246 + 4)
        ^ *((_DWORD *)v73 - 1)
        ^ v80
        ^ HIDWORD(qword_18DAB0[HIBYTE(v283) + 1]);
    *(_DWORD *)&v306[4] = (unsigned __int8)v71;
    v501 = &qword_18E2C0[v83];
    v497 = &qword_18CAC0[BYTE1(v71)];
    LODWORD(v665) = v81 ^ LODWORD(qword_18DAB0[HIBYTE(v283) + 1]) ^ *((_DWORD *)v72 - 2) ^ v79;
    v496 = &dword_18D2C0[2 * BYTE2(v255)];
    v85 = v523;
    v524 = &qword_18CAC0[BYTE1(v255)];
    v535 = &qword_18E2C0[(unsigned __int8)v320];
    v529 = &dword_18D2C0[2 * BYTE2(v300)];
    HIDWORD(v665) = v84 ^ *((_DWORD *)v72 - 1) ^ v85;
    v660 = qword_18CAC0[BYTE1(v251) - 1]
         ^ *(_QWORD *)(v240 + 8 * v77)
         ^ qword_18E2C0[(unsigned __int8)v295 - 1]
         ^ *(_QWORD *)&dword_18C2B8[2 * HIBYTE(v404)]
         ^ *(_QWORD *)&dword_18D2C0[2 * BYTE2(v283) - 2]
         ^ *(_QWORD *)(v503 + 8)
         ^ v659
         ^ *((_QWORD *)&unk_18F2B8 + v78);
    v86 = *((_DWORD *)v515 - 2);
    v510 = *((_DWORD *)v515 - 1);
    v516 = &qword_18E2C0[BYTE4(v320)];
    v517 = BYTE2(v396);
    HIDWORD(v658) = *(_DWORD *)(v240 + 8 * (unsigned __int8)v251 + 4)
                  ^ HIDWORD(qword_18DAB0[BYTE3(v255) + 1])
                  ^ dword_18C2B8[2 * HIBYTE(v412) + 1]
                  ^ *((_DWORD *)v430 - 1)
                  ^ *(v382 - 1)
                  ^ v510
                  ^ *((_DWORD *)&unk_18EAB8 + 2 * v82 + 1)
                  ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v320) + 1);
    v441 = &dword_18D2C0[2 * v306[10]];
    LODWORD(v658) = *(v382 - 2)
                  ^ *(_DWORD *)(v240 + 8 * (unsigned __int8)v251)
                  ^ LODWORD(qword_18DAB0[BYTE3(v255) + 1])
                  ^ dword_18C2B8[2 * HIBYTE(v412)]
                  ^ *((_DWORD *)v430 - 2)
                  ^ v86
                  ^ *((_DWORD *)&unk_18EAB8 + 2 * v82)
                  ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v320));
    v87 = *(v496 - 2)
        ^ *(_DWORD *)(v240 + 8 * (unsigned __int8)v283)
        ^ dword_18C2B8[2 * HIBYTE(v68)]
        ^ *((_DWORD *)v497 - 2);
    v88 = *(_DWORD *)(v240 + 8 * (unsigned __int8)v283 + 4)
        ^ *(v496 - 1)
        ^ dword_18C2B8[2 * HIBYTE(v68) + 1]
        ^ *((_DWORD *)v497 - 1);
    v284 = BYTE1(v396);
    v557 = &qword_18E2C0[(unsigned __int8)v396];
    v296 = BYTE2(v404);
    v397 = &qword_18CAC0[v306[9]];
    v520 = &dword_18D2C0[2 * BYTE2(v262)];
    v714 = BYTE1(v404);
    v681 = &qword_18E2C0[(unsigned __int8)v404];
    v715 = BYTE2(v412);
    v405 = &qword_18CAC0[BYTE1(v262)];
    v675 = &dword_18D2C0[2 * BYTE2(v274)];
    HIDWORD(v494) = v88
                  ^ HIDWORD(qword_18DAB0[HIBYTE(v300) + 1])
                  ^ *((_DWORD *)v501 - 1)
                  ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v320) + 1)
                  ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v268) + 1);
    LODWORD(v494) = v87
                  ^ LODWORD(qword_18DAB0[HIBYTE(v300) + 1])
                  ^ *((_DWORD *)v501 - 2)
                  ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v320))
                  ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v268));
    v89 = *(_DWORD *)(v240 + 8 * *(_DWORD *)&v306[4] + 4)
        ^ *((_DWORD *)v524 - 1)
        ^ v526[1]
        ^ *(v529 - 1)
        ^ HIDWORD(qword_18DAB0[HIBYTE(*(_DWORD *)v306) + 1])
        ^ *((_DWORD *)v535 - 1);
    v90 = *((_DWORD *)v524 - 2)
        ^ *(_DWORD *)(v240 + 8 * *(_DWORD *)&v306[4])
        ^ dword_18C2B8[2 * v446]
        ^ *(v529 - 2)
        ^ LODWORD(qword_18DAB0[HIBYTE(*(_DWORD *)v306) + 1]);
    v511 = *((_QWORD *)&unk_18EAB8 + BYTE5(v320));
    v91 = *(_QWORD *)(v240 + 8 * (unsigned __int8)v255) ^ *(_QWORD *)&dword_18C2B8[2 * HIBYTE(v330)];
    LODWORD(v255) = BYTE1(v412);
    v454 = &qword_18E2C0[(unsigned __int8)v412];
    *(_DWORD *)&v306[4] = (unsigned __int8)v274;
    v413 = &qword_18CAC0[BYTE1(v274)];
    v447 = &dword_18D2C0[2 * BYTE2(v341)];
    v275 = BYTE2(v421);
    LODWORD(v498) = v90
                  ^ *((_DWORD *)v535 - 2)
                  ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v268))
                  ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE6(v320));
    HIDWORD(v498) = *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v268) + 1)
                  ^ v89
                  ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE6(v320) + 1);
    v92 = *((_DWORD *)&unk_18EAB8 + 2 * v284);
    v93 = *((_DWORD *)&unk_18EAB8 + 2 * v284 + 1);
    v94 = *v553;
    v431 = &dword_18D2C0[2 * BYTE2(v347)];
    v285 = BYTE1(v421);
    v464 = &qword_18E2C0[(unsigned __int8)v421];
    v252 = &qword_18E2C0[(unsigned __int8)v330];
    HIDWORD(v320) = (unsigned __int8)v347;
    v422 = &qword_18CAC0[BYTE1(v347)];
    v458 = &dword_18D2C0[2 * BYTE2(v355)];
    v95 = *(_DWORD *)(v240 + 8 * v306[0] + 4) ^ v553[1];
    v506 = v91
         ^ qword_18CAC0[BYTE1(v300) - 1]
         ^ *(_QWORD *)&dword_18D2C0[2 * v306[2] - 2]
         ^ qword_18DAB0[HIBYTE(*(_DWORD *)&v306[8]) + 1]
         ^ qword_18E2C0[(unsigned __int8)v268 - 1]
         ^ v511
         ^ *((_QWORD *)&unk_18F2B8 + v517);
    v96 = qword_18CAC0[v306[1] - 1];
    v437 = &qword_18CAC0[BYTE1(v355)];
    v97 = *(v441 - 2);
    v536 = &dword_18D2C0[2 * BYTE2(v362)];
    v539 = &qword_18E2C0[(unsigned __int8)v336];
    v98 = *((_QWORD *)&unk_18EAB8 + v714);
    v99 = dword_18C2B8[2 * HIBYTE(v336) + 1]
        ^ *(_DWORD *)(v240 + 8 * (unsigned __int8)v300 + 4)
        ^ HIDWORD(v96)
        ^ *(v441 - 1)
        ^ HIDWORD(qword_18DAB0[HIBYTE(v262) + 1]);
    v442 = &qword_18CAC0[BYTE1(v362)];
    v542 = &dword_18D2C0[2 * BYTE2(v371)];
    v550 = &qword_18E2C0[(unsigned __int8)v279];
    v348 = BYTE2(v290);
    v545 = &dword_18D2C0[2 * BYTE2(v246)];
    HIDWORD(v514) = v99 ^ *((_DWORD *)v516 - 1) ^ v93 ^ *((_DWORD *)&unk_18F2B8 + 2 * v296 + 1);
    v554 = &qword_18CAC0[BYTE1(v246)];
    LODWORD(v514) = v92
                  ^ dword_18C2B8[2 * HIBYTE(v336)]
                  ^ *(_DWORD *)(v240 + 8 * (unsigned __int8)v300)
                  ^ v96
                  ^ v97
                  ^ LODWORD(qword_18DAB0[HIBYTE(v262) + 1])
                  ^ *((_DWORD *)v516 - 2)
                  ^ *((_DWORD *)&unk_18F2B8 + 2 * v296);
    v547 = &qword_18CAC0[BYTE1(v371)];
    v100 = *(_QWORD *)(v556 + 8);
    v101 = *((_DWORD *)v397 - 1) ^ v95 ^ *(v520 - 1) ^ HIDWORD(v100);
    v102 = *(_DWORD *)(v240 + 8 * v306[0]) ^ v94 ^ *((_DWORD *)v397 - 2) ^ *(v520 - 2) ^ v100;
    v103 = *(v557 - 1);
    v104 = *((_QWORD *)&unk_18F2B8 + BYTE2(v713));
    LODWORD(v521) = v101 ^ HIDWORD(v103) ^ HIDWORD(v98) ^ *((_DWORD *)&unk_18F2B8 + 2 * v715 + 1);
    v518 = v102 ^ v103 ^ v98 ^ *((_DWORD *)&unk_18F2B8 + 2 * v715);
    LODWORD(v103) = *(_DWORD *)(v240 + 8 * v306[8] + 4)
                  ^ dword_18C2B8[2 * HIBYTE(v290) + 1]
                  ^ *((_DWORD *)v405 - 1)
                  ^ *(v675 - 1);
    HIDWORD(v521) = dword_18C2B8[2 * HIBYTE(v290)]
                  ^ *(_DWORD *)(v240 + 8 * v306[8])
                  ^ *((_DWORD *)v405 - 2)
                  ^ *(v675 - 2)
                  ^ LODWORD(qword_18DAB0[HIBYTE(v341) + 1])
                  ^ *((_DWORD *)v681 - 2)
                  ^ *((_DWORD *)&unk_18EAB8 + 2 * v255)
                  ^ v104;
    v398 = (_DWORD *)((char *)&unk_18EAB8 + 8 * BYTE1(v279));
    v406 = (char *)&unk_18F2B8 + 8 * BYTE2(v290);
    v527 = v103
         ^ HIDWORD(qword_18DAB0[HIBYTE(v341) + 1])
         ^ *((_DWORD *)v681 - 1)
         ^ *((_DWORD *)&unk_18EAB8 + 2 * v255 + 1)
         ^ HIDWORD(v104);
    HIDWORD(v98) = *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v713))
                 ^ dword_18C2B8[2 * HIBYTE(HIDWORD(v255))]
                 ^ *(_DWORD *)(v240 + 8 * (unsigned __int8)v262)
                 ^ *((_DWORD *)v413 - 2)
                 ^ *(v447 - 2)
                 ^ *(_DWORD *)(v688 + 8)
                 ^ *((_DWORD *)v454 - 2);
    LODWORD(v96) = dword_18C2B8[2 * HIBYTE(HIDWORD(v255)) + 1]
                 ^ *(_DWORD *)(v240 + 8 * (unsigned __int8)v262 + 4)
                 ^ *((_DWORD *)v413 - 1)
                 ^ *(v447 - 1)
                 ^ *(_DWORD *)(v688 + 12)
                 ^ *((_DWORD *)v454 - 1)
                 ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v713) + 1);
    HIDWORD(v103) = *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v330) + 1)
                  ^ *(_DWORD *)(v240 + 8 * *(_DWORD *)&v306[4] + 4)
                  ^ v692[1];
    LODWORD(v104) = &qword_18E2C0[(unsigned __int8)v713];
    v105 = *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v330))
         ^ *(_DWORD *)(v240 + 8 * *(_DWORD *)&v306[4])
         ^ dword_18C2B8[2 * v478];
    v106 = dword_18C2B8[2 * v483];
    v448 = *((_DWORD *)&unk_18EAB8 + 2 * v285 + 1);
    v414 = *((_DWORD *)&unk_18EAB8 + 2 * v285);
    *(_DWORD *)&v306[4] = *(_DWORD *)(v104 - 4);
    v530 = v96 ^ *((_DWORD *)&unk_18F2B8 + 2 * v275 + 1);
    *(_DWORD *)v306 = *(_DWORD *)(v104 - 8);
    LODWORD(v103) = &qword_18CAC0[BYTE1(v341)];
    v107 = BYTE1(v290);
    v291 = &qword_18E2C0[(unsigned __int8)v290];
    v383 = v107;
    v481 = HIDWORD(v98) ^ *((_DWORD *)&unk_18F2B8 + 2 * v275);
    v286 = (char *)&unk_18EAB8 + 8 * v107;
    LODWORD(v104) = *((_DWORD *)v252 - 2)
                  ^ *(_DWORD *)(v240 + 8 * HIDWORD(v320))
                  ^ dword_18C2B8[2 * v487]
                  ^ *((_DWORD *)v437 - 2)
                  ^ *(v536 - 2)
                  ^ LODWORD(qword_18DAB0[HIBYTE(v371) + 1])
                  ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v336));
    v108 = *((_DWORD *)v252 - 1)
         ^ *(_DWORD *)(v240 + 8 * HIDWORD(v320) + 4)
         ^ v699[1]
         ^ *((_DWORD *)v437 - 1)
         ^ *(v536 - 1)
         ^ HIDWORD(qword_18DAB0[HIBYTE(v371) + 1])
         ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v336) + 1);
    v109 = *((_DWORD *)v539 - 2);
    HIDWORD(v484) = HIDWORD(v103)
                  ^ *(_DWORD *)(v103 - 4)
                  ^ *(v431 - 1)
                  ^ HIDWORD(qword_18DAB0[HIBYTE(v355) + 1])
                  ^ *(_DWORD *)&v306[4]
                  ^ v448;
    LODWORD(v484) = v105
                  ^ *(_DWORD *)(v103 - 8)
                  ^ *(v431 - 2)
                  ^ LODWORD(qword_18DAB0[HIBYTE(v355) + 1])
                  ^ *(_DWORD *)v306
                  ^ v414;
    LODWORD(v96) = *((_DWORD *)v539 - 1);
    HIDWORD(v533) = *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v330) + 1)
                  ^ *(_DWORD *)(v240 + 8 * (unsigned __int8)v341 + 4)
                  ^ v697[1]
                  ^ *((_DWORD *)v422 - 1)
                  ^ *(v458 - 1)
                  ^ HIDWORD(qword_18DAB0[HIBYTE(v362) + 1])
                  ^ *((_DWORD *)v464 - 1)
                  ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v336) + 1);
    LODWORD(v533) = *(_DWORD *)(v240 + 8 * (unsigned __int8)v341)
                  ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v330))
                  ^ v106
                  ^ *((_DWORD *)v422 - 2)
                  ^ *(v458 - 2)
                  ^ LODWORD(qword_18DAB0[HIBYTE(v362) + 1])
                  ^ *((_DWORD *)v464 - 2)
                  ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v336));
    HIDWORD(v98) = v398[1]
                 ^ *(_DWORD *)(v240 + 8 * (unsigned __int8)v355 + 4)
                 ^ HIDWORD(qword_18DAB0[HIBYTE(v246) + 1])
                 ^ dword_18C2B8[2 * BYTE3(v320) + 1]
                 ^ *((_DWORD *)v442 - 1)
                 ^ *(v542 - 1)
                 ^ v96;
    HIDWORD(v103) = *(_DWORD *)(v240 + 8 * (unsigned __int8)v355)
                  ^ LODWORD(qword_18DAB0[HIBYTE(v246) + 1])
                  ^ dword_18C2B8[2 * BYTE3(v320)]
                  ^ *((_DWORD *)v442 - 2)
                  ^ *(v542 - 2)
                  ^ v109
                  ^ *v398;
    v540 = v104 ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v279));
    v490 = v108 ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v279) + 1);
    HIDWORD(v104) = *(v545 - 2)
                  ^ *(_DWORD *)(v240 + 8 * (unsigned __int8)v362)
                  ^ dword_18C2B8[2 * HIBYTE(v268)]
                  ^ *((_DWORD *)v547 - 2);
    v110 = *(_DWORD *)(v240 + 8 * (unsigned __int8)v362 + 4)
         ^ *(v545 - 1)
         ^ dword_18C2B8[2 * HIBYTE(v268) + 1]
         ^ *((_DWORD *)v547 - 1)
         ^ *(_DWORD *)(v706 + 12)
         ^ *((_DWORD *)v550 - 1)
         ^ *((_DWORD *)v286 + 1);
    LODWORD(v103) = *(_DWORD *)(v240 + 8 * (unsigned __int8)v371 + 4)
                  ^ *((_DWORD *)v554 - 1)
                  ^ *((_DWORD *)&unk_18F2B8 + 2 * v391 + 1)
                  ^ v709[1]
                  ^ *(v711 - 1)
                  ^ *(_DWORD *)(v712 + 12)
                  ^ *((_DWORD *)v291 - 1);
    v111 = *(_DWORD *)(v240 + 8 * (unsigned __int8)v371)
         ^ *((_DWORD *)v554 - 2)
         ^ *((_DWORD *)&unk_18F2B8 + 2 * v391)
         ^ dword_18C2B8[2 * v716]
         ^ *(v711 - 2)
         ^ *(_DWORD *)(v712 + 8)
         ^ *((_DWORD *)v291 - 2);
    LODWORD(v543) = HIDWORD(v103) ^ *((_DWORD *)&unk_18F2B8 + 2 * v348);
    HIDWORD(v548) = v110 ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE6(v255) + 1);
    LODWORD(v548) = HIDWORD(v104)
                  ^ *(_DWORD *)(v706 + 8)
                  ^ *((_DWORD *)v550 - 2)
                  ^ *((_DWORD *)&unk_18EAB8 + 2 * v383)
                  ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE6(v255));
    LODWORD(v555) = v111 ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE5(v255));
    HIDWORD(v543) = HIDWORD(v98) ^ *((_DWORD *)v406 + 1);
    HIDWORD(v555) = v103 ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE5(v255) + 1);
  }
  while ( v243 != 14 );
  v112 = v240;
  v244 = -1;
  do
  {
    v263 = ~(_DWORD)v564;
    v276 = ~(_DWORD)v571;
    v280 = ~(_DWORD)v578;
    v292 = ~(_DWORD)v584;
    v297 = ~(_DWORD)v587;
    v307 = ~(_DWORD)v593;
    v342 = ~(_DWORD)v624;
    v356 = ~(_DWORD)v631;
    v315 = ~v597;
    v321 = ~HIDWORD(v599);
    v372 = ~(_DWORD)v638;
    v384 = ~(_DWORD)v645;
    v256 = v558 ^ v244;
    v399 = ~(_DWORD)v652;
    v269 = HIDWORD(v564) ^ HIDWORD(v244) ^ 0x10000000;
    v287 = HIDWORD(v578) ^ HIDWORD(v244) ^ 0x30000000;
    v310 = HIDWORD(v593) ^ HIDWORD(v244) ^ 0x60000000;
    v331 = v612 ^ HIDWORD(v244) ^ 0x90000000;
    v349 = HIDWORD(v624) ^ HIDWORD(v244) ^ 0xB0000000;
    v363 = HIDWORD(v631) ^ HIDWORD(v244) ^ 0xC0000000;
    v377 = HIDWORD(v638) ^ HIDWORD(v244) ^ 0xD0000000;
    v443 = HIDWORD(v652) ^ HIDWORD(v244) ^ 0xF0000000;
    v392 = HIDWORD(v645) ^ HIDWORD(v244) ^ 0xE0000000;
    v432 = v605 ^ (HIDWORD(v244) + 0x80000000);
    v327 = ~v609;
    v301 = HIDWORD(v587) ^ HIDWORD(v244) ^ 0x50000000;
    v337 = ~(_DWORD)v615;
    v423 = v599 ^ HIDWORD(v244) ^ 0x70000000;
    LODWORD(v615) = HIBYTE(v432);
    HIDWORD(v624) = HIBYTE(v331);
    HIDWORD(v631) = (HIDWORD(v615) ^ HIDWORD(v244) ^ 0xA0000000) >> 24;
    v438 = HIDWORD(v615) ^ HIDWORD(v244) ^ 0xA0000000;
    v649 = HIBYTE(v363);
    v642 = HIBYTE(v349);
    v113 = (unsigned int)~(_DWORD)v558 >> 24;
    v114 = (unsigned int)~(_DWORD)v564 >> 24;
    v115 = (unsigned int)~(_DWORD)v571 >> 24;
    v656 = HIBYTE(v377);
    v671 = HIBYTE(v392);
    v116 = (unsigned int)~HIDWORD(v599) >> 24;
    v455 = (unsigned int)~(_DWORD)v578 >> 24;
    v676 = HIBYTE(v443);
    v682 = (unsigned int)(HIDWORD(v558) ^ HIDWORD(v244)) >> 24;
    v459 = (unsigned int)~(_DWORD)v584 >> 24;
    v689 = HIBYTE(v269);
    v449 = (HIDWORD(v571) ^ HIDWORD(v244) ^ 0x20000000u) >> 24;
    v117 = &dword_18C2B8[2 * HIBYTE(v423)];
    v559 = 8 * ((unsigned int)~(_DWORD)v624 >> 24) + 1628848;
    LODWORD(v564) = 8 * ((unsigned int)~(_DWORD)v638 >> 24) + 1628848;
    v118 = 8 * ((unsigned int)~v597 >> 24) + 1628848;
    LODWORD(v571) = 8 * ((unsigned int)~(_DWORD)v645 >> 24) + 1628848;
    v598 = 8 * ((unsigned int)~(_DWORD)v587 >> 24) + 1628848;
    LODWORD(v578) = 8 * ((unsigned int)~(_DWORD)v652 >> 24) + 1628848;
    v600 = 8 * ((unsigned int)~(_DWORD)v593 >> 24) + 1628848;
    LODWORD(v584) = 8 * v113 + 1628848;
    v603 = v118;
    v606 = 8 * v116 + 1628848;
    v588 = 8 * v114 + 1628848;
    v590 = 8 * v115 + 1628848;
    v594 = 8 * v455 + 1628848;
    v119 = &qword_18E2C0[(unsigned __int8)(BYTE4(v564) ^ BYTE4(v244))];
    v596 = 8 * v459 + 1628848;
    v456 = HIBYTE(v287);
    v120 = HIDWORD(v584) ^ HIDWORD(v244) ^ 0x40000000;
    v121 = v117[1];
    v122 = &dword_18D2C0[2 * BYTE2(v307)];
    v123 = &qword_18CAC0[BYTE1(v292)];
    v124 = *((_DWORD *)v119 - 2);
    v460 = HIBYTE(v120);
    v468 = HIBYTE(v301);
    v407 = (unsigned __int8)((unsigned __int16)(WORD2(v571) ^ WORD2(v244)) >> 8);
    v415 = &qword_18CAC0[BYTE1(v280)];
    v471 = &dword_18D2C0[2 * BYTE2(v297)];
    v125 = ~*(_DWORD *)(v112 + 8 * (unsigned __int8)v276)
         ^ *v117
         ^ *((_DWORD *)v123 - 2)
         ^ *(v122 - 2)
         ^ LODWORD(qword_18DAB0[((unsigned int)~(_DWORD)v631 >> 24) + 1]);
    v561 = &qword_18E2C0[BYTE4(v256)];
    v247 = 0xFFFFFF - HIDWORD(v244);
    v126 = BYTE2(v120);
    v567 = &qword_18E2C0[(unsigned __int8)(BYTE4(v571) ^ BYTE4(v244))];
    v465 = (unsigned __int8)((HIDWORD(v571) ^ HIDWORD(v244) ^ 0x20000000u) >> 16);
    v127 = *((_DWORD *)v119 - 1)
         ^ *(v122 - 1)
         ^ *(_DWORD *)(v112 + 8 * (unsigned __int8)v276 + 4)
         ^ ~((0xFFFFFF - HIDWORD(v244)) ^ 0x10000000)
         ^ v121
         ^ *((_DWORD *)v123 - 1)
         ^ HIDWORD(qword_18DAB0[((unsigned int)~(_DWORD)v631 >> 24) + 1])
         ^ *((_DWORD *)&unk_18EAB8 + 2 * (unsigned __int8)((unsigned __int16)(WORD2(v578) ^ WORD2(v244)) >> 8) + 1);
    v610 = &dword_18D2C0[2 * BYTE2(v280)];
    v632 = (unsigned __int8)v297;
    v253 = &qword_18CAC0[BYTE1(v297)];
    v128 = &dword_18D2C0[2 * BYTE2(v315)];
    v619 = (unsigned __int8)((unsigned __int16)(WORD2(v584) ^ WORD2(v244)) >> 8);
    v582 = &qword_18E2C0[(unsigned __int8)(BYTE4(v584) ^ BYTE4(v244))];
    v625 = BYTE2(v310);
    v479 = BYTE2(v287);
    v575 = &qword_18E2C0[(unsigned __int8)v287];
    v298 = v124 ^ v125 ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v287)) ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v301));
    v129 = v407;
    v408 = v127 ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v301) + 1);
    v130 = (int *)((char *)&unk_18EAB8 + 8 * v129);
    v131 = *v130;
    v132 = v130[1];
    v133 = *(_DWORD *)(v112 + 8 * (unsigned __int8)v263 + 4)
         ^ dword_18C2B8[2 * HIBYTE(v310) + 1]
         ^ (HIDWORD(v244) - 0xFFFFFF)
         ^ *((_DWORD *)v415 - 1);
    HIDWORD(v244) -= 0x1FFFFFF;
    v134 = *((_DWORD *)v415 - 2) ^ ~(*(_DWORD *)(v112 + 8 * (unsigned __int8)v263) ^ dword_18C2B8[2 * HIBYTE(v310)]);
    v135 = HIDWORD(v244) == -234881025;
    if ( HIDWORD(v244) == -234881025 )
      v135 = 1;
    v136 = (unsigned __int8)v292;
    v416 = &dword_18D2C0[2 * BYTE2(v292)];
    v639 = (unsigned __int8)v307;
    v137 = &qword_18CAC0[BYTE1(v307)];
    v138 = v133 ^ *(v471 - 1) ^ *(_DWORD *)(v559 + 12) ^ *((_DWORD *)v561 - 1) ^ v132;
    v139 = &dword_18D2C0[2 * BYTE2(v321)];
    v140 = (unsigned __int8)v280;
    v281 = *((_DWORD *)v561 - 2)
         ^ v134
         ^ *(v471 - 2)
         ^ *(_DWORD *)(v559 + 8)
         ^ v131
         ^ *((_DWORD *)&unk_18F2B8 + 2 * v126);
    v141 = &qword_18E2C0[(unsigned __int8)v301];
    v302 = BYTE1(v301);
    v142 = (_DWORD *)(v112 + 8 * v140);
    v288 = v138 ^ *((_DWORD *)&unk_18F2B8 + 2 * v126 + 1);
    v143 = *((_DWORD *)v567 - 2);
    v646 = (unsigned __int8)v315;
    v144 = &qword_18CAC0[BYTE1(v315)];
    v145 = ~*v142 ^ dword_18C2B8[2 * v616] ^ *((_DWORD *)v253 - 2) ^ *(v128 - 2) ^ *(_DWORD *)(v565 + 8);
    v146 = v310;
    v147 = *(v128 - 1)
         ^ v142[1]
         ^ v247
         ^ 0xDFFFFFFF
         ^ dword_18C2B8[2 * v616 + 1]
         ^ *((_DWORD *)v253 - 1)
         ^ *(_DWORD *)(v565 + 12)
         ^ *((_DWORD *)v567 - 1);
    v311 = BYTE1(v310);
    v568 = &qword_18E2C0[v146];
    v316 = BYTE2(v432);
    v653 = (unsigned __int8)v321;
    v322 = &qword_18CAC0[BYTE1(v321)];
    v293 = v147 ^ *((_DWORD *)&unk_18EAB8 + 2 * v619 + 1) ^ *((_DWORD *)&unk_18F2B8 + 2 * v625 + 1);
    v254 = v145 ^ v143 ^ *((_DWORD *)&unk_18EAB8 + 2 * v619) ^ *((_DWORD *)&unk_18F2B8 + 2 * v625);
    v148 = *((_DWORD *)v575 - 2);
    v149 = *((_DWORD *)v575 - 1);
    v576 = &qword_18E2C0[(unsigned __int8)v423];
    v562 = &qword_18CAC0[BYTE1(v327)];
    v150 = v149
         ^ *(v139 - 1)
         ^ *((_DWORD *)v137 - 1)
         ^ *(_DWORD *)(v112 + 8 * v136 + 4)
         ^ v247
         ^ 0xCFFFFFFF
         ^ dword_18C2B8[2 * v628 + 1]
         ^ *(_DWORD *)(v572 + 12)
         ^ *((_DWORD *)&unk_18EAB8 + 2 * v302 + 1);
    v620 = BYTE1(v432);
    HIDWORD(v584) = &qword_18E2C0[(unsigned __int8)v432];
    v303 = v148
         ^ *(v139 - 2)
         ^ dword_18C2B8[2 * v628]
         ^ ~*(_DWORD *)(v112 + 8 * v136)
         ^ *((_DWORD *)v137 - 2)
         ^ *(_DWORD *)(v572 + 8)
         ^ *((_DWORD *)&unk_18EAB8 + 2 * v302)
         ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v423));
    v308 = v150 ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v423) + 1);
    v433 = &qword_18CAC0[BYTE1(v337)];
    v151 = dword_18C2B8[2 * v634 + 1]
         ^ v247
         ^ 0xBFFFFFFF
         ^ *(_DWORD *)(v112 + 8 * v632 + 4)
         ^ *((_DWORD *)v144 - 1)
         ^ dword_18D2C0[2 * BYTE2(v327) - 1]
         ^ *(_DWORD *)(v579 + 12)
         ^ *((_DWORD *)v582 - 1);
    v573 = &dword_18D2C0[2 * BYTE2(v356)];
    v629 = BYTE1(v331);
    v152 = *((_DWORD *)&unk_18EAB8 + 2 * v311 + 1);
    v153 = *((_DWORD *)v582 - 2)
         ^ *(_DWORD *)(v579 + 8)
         ^ ~*(_DWORD *)(v112 + 8 * v632)
         ^ dword_18C2B8[2 * v634]
         ^ *((_DWORD *)v144 - 2)
         ^ dword_18D2C0[2 * BYTE2(v327) - 2]
         ^ *((_DWORD *)&unk_18EAB8 + 2 * v311);
    v580 = &qword_18E2C0[(unsigned __int8)v331];
    v635 = (unsigned __int8)v327;
    v312 = v153 ^ *((_DWORD *)&unk_18F2B8 + 2 * v316);
    v613 = 8 * HIBYTE(v327) + 1628848;
    v317 = v152 ^ v151 ^ *((_DWORD *)&unk_18F2B8 + 2 * v316 + 1);
    v154 = &dword_18D2C0[2 * BYTE2(v337)];
    v155 = *((_DWORD *)v141 - 2);
    v156 = *(_DWORD *)(v112 + 8 * v639 + 4);
    v678 = (unsigned __int8)v342;
    v157 = ~*(_DWORD *)(v112 + 8 * v639) ^ dword_18C2B8[2 * v642] ^ *((_DWORD *)v322 - 2) ^ *(v154 - 2);
    v472 = &qword_18CAC0[BYTE1(v342)];
    v560 = &dword_18D2C0[2 * BYTE2(v372)];
    v640 = BYTE1(v438);
    v158 = *((_DWORD *)v322 - 1)
         ^ v156
         ^ v247
         ^ 0xAFFFFFFF
         ^ dword_18C2B8[2 * v642 + 1]
         ^ *(v154 - 1)
         ^ *(_DWORD *)(v584 + 12)
         ^ *((_DWORD *)v141 - 1);
    v583 = &qword_18E2C0[(unsigned __int8)v438];
    v159 = BYTE1(v423);
    v424 = BYTE2(v363);
    v160 = (unsigned __int8)v337;
    v323 = v155
         ^ v157
         ^ *(_DWORD *)(v584 + 8)
         ^ *((_DWORD *)&unk_18EAB8 + 2 * v159)
         ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v331));
    v626 = 8 * HIBYTE(v337) + 1628848;
    v685 = (unsigned __int8)v356;
    v357 = &qword_18CAC0[BYTE1(v356)];
    v328 = v158 ^ *((_DWORD *)&unk_18EAB8 + 2 * v159 + 1) ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v331) + 1);
    v161 = &dword_18D2C0[2 * BYTE2(v384)];
    v162 = &dword_18D2C0[2 * BYTE2(v342)];
    v163 = *(_DWORD *)(v112 + 8 * v646 + 4)
         ^ v247
         ^ 0x9FFFFFFF
         ^ dword_18C2B8[2 * v649 + 1]
         ^ *((_DWORD *)v562 - 1)
         ^ *(v162 - 1);
    v164 = ~*(_DWORD *)(v112 + 8 * v646) ^ dword_18C2B8[2 * v649] ^ *((_DWORD *)v562 - 2) ^ *(v162 - 2);
    v165 = BYTE1(v349);
    LODWORD(v584) = &qword_18E2C0[(unsigned __int8)v349];
    v643 = BYTE2(v377);
    v563 = &qword_18CAC0[BYTE1(v372)];
    v166 = v164 ^ *(_DWORD *)(v588 + 8) ^ *((_DWORD *)v568 - 2) ^ *((_DWORD *)&unk_18EAB8 + 2 * v620);
    v167 = v163 ^ *(_DWORD *)(v588 + 12) ^ *((_DWORD *)v568 - 1) ^ *((_DWORD *)&unk_18EAB8 + 2 * v620 + 1);
    v589 = &qword_18E2C0[(unsigned __int8)v363];
    v566 = &dword_18D2C0[2 * BYTE2(v399)];
    v647 = BYTE1(v363);
    v332 = v166 ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v438));
    v338 = v167 ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v438) + 1);
    v168 = *((_DWORD *)v433 - 1) ^ *(_DWORD *)(v112 + 8 * v653 + 4) ^ v247 ^ 0x8FFFFFFF ^ dword_18C2B8[2 * v656 + 1];
    v169 = dword_18C2B8[2 * v656] ^ ~*(_DWORD *)(v112 + 8 * v653) ^ *((_DWORD *)v433 - 2);
    v170 = BYTE2(v392);
    v434 = (unsigned __int8)v384;
    v171 = *(_DWORD *)(v590 + 8);
    v172 = *(_DWORD *)(v590 + 12);
    v364 = &qword_18CAC0[BYTE1(v384)];
    v569 = &dword_18D2C0[2 * BYTE2(v256)];
    v650 = BYTE1(v377);
    v591 = &qword_18E2C0[(unsigned __int8)v377];
    v654 = BYTE2(v443);
    v378 = BYTE1(v392);
    v617 = &qword_18E2C0[(unsigned __int8)v392];
    v343 = *((_DWORD *)v576 - 2)
         ^ v169
         ^ *(v573 - 2)
         ^ v171
         ^ *((_DWORD *)&unk_18EAB8 + 2 * v629)
         ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v349));
    v350 = v168
         ^ *(v573 - 1)
         ^ v172
         ^ *((_DWORD *)v576 - 1)
         ^ *((_DWORD *)&unk_18EAB8 + 2 * v629 + 1)
         ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v349) + 1);
    v393 = BYTE1(v443);
    v173 = *((_DWORD *)v472 - 2) ^ ~*(_DWORD *)(v112 + 8 * v635) ^ dword_18C2B8[2 * v671];
    v174 = ~(v247 ^ 0x80000000) ^ *(_DWORD *)(v112 + 8 * v635 + 4) ^ dword_18C2B8[2 * v671 + 1] ^ *((_DWORD *)v472 - 1);
    v473 = BYTE1(v269);
    v630 = &qword_18E2C0[(unsigned __int8)v443];
    v439 = BYTE2(v269);
    v175 = *(v560 - 2) ^ v173;
    v176 = *(_DWORD *)(v594 + 8);
    v177 = *(_DWORD *)(v594 + 12) ^ v174 ^ *(v560 - 1);
    v574 = &qword_18CAC0[BYTE1(v399)];
    v577 = &dword_18D2C0[2 * BYTE2(v263)];
    v595 = &qword_18CAC0[BYTE1(v263)];
    v178 = v176
         ^ v175
         ^ *(_DWORD *)(HIDWORD(v584) - 8)
         ^ *((_DWORD *)&unk_18EAB8 + 2 * v640)
         ^ *((_DWORD *)&unk_18F2B8 + 2 * v424);
    v179 = *(_DWORD *)(v112 + 8 * v160 + 4);
    v180 = ~*(_DWORD *)(v112 + 8 * v160) ^ dword_18C2B8[2 * v676];
    v270 = v177
         ^ *(_DWORD *)(HIDWORD(v584) - 4)
         ^ *((_DWORD *)&unk_18EAB8 + 2 * v640 + 1)
         ^ *((_DWORD *)&unk_18F2B8 + 2 * v424 + 1);
    v181 = *((_DWORD *)v580 - 2);
    v264 = v178;
    v182 = *((_DWORD *)v580 - 1);
    v385 = BYTE6(v256);
    v425 = BYTE5(v256);
    v444 = (unsigned __int8)v256;
    v581 = &qword_18CAC0[BYTE1(v256)];
    HIDWORD(v584) = &dword_18D2C0[2 * BYTE2(v276)];
    v621 = &qword_18CAC0[BYTE1(v276)];
    v258 = *(_DWORD *)(v596 + 12)
         ^ ~(v247 ^ 0x90000000)
         ^ v179
         ^ dword_18C2B8[2 * v676 + 1]
         ^ *((_DWORD *)v357 - 1)
         ^ *(v161 - 1)
         ^ v182
         ^ *((_DWORD *)&unk_18EAB8 + 2 * v165 + 1)
         ^ *((_DWORD *)&unk_18F2B8 + 2 * v643 + 1);
    v257 = v180
         ^ *((_DWORD *)v357 - 2)
         ^ *(v161 - 2)
         ^ *(_DWORD *)(v596 + 8)
         ^ v181
         ^ *((_DWORD *)&unk_18EAB8 + 2 * v165)
         ^ *((_DWORD *)&unk_18F2B8 + 2 * v643);
    v358 = *((_DWORD *)&unk_18F2B8 + 2 * v170 + 1)
         ^ *(_DWORD *)(v112 + 8 * v678 + 4)
         ^ ~(v247 ^ 0xA0000000)
         ^ dword_18C2B8[2 * v682 + 1]
         ^ *((_DWORD *)v563 - 1)
         ^ *(v566 - 1)
         ^ *(_DWORD *)(v598 + 12)
         ^ *((_DWORD *)v583 - 1)
         ^ *((_DWORD *)&unk_18EAB8 + 2 * v647 + 1);
    v277 = ~*(_DWORD *)(v112 + 8 * v678)
         ^ dword_18C2B8[2 * v682]
         ^ *((_DWORD *)v563 - 2)
         ^ *(v566 - 2)
         ^ *(_DWORD *)(v598 + 8)
         ^ *((_DWORD *)v583 - 2)
         ^ *((_DWORD *)&unk_18EAB8 + 2 * v647)
         ^ *((_DWORD *)&unk_18F2B8 + 2 * v170);
    v183 = *((_DWORD *)v364 - 1);
    v184 = *(v569 - 1);
    v185 = *(_DWORD *)(v600 + 12);
    v365 = ~*(_DWORD *)(v112 + 8 * v685) ^ dword_18C2B8[2 * v689] ^ *((_DWORD *)v364 - 2) ^ *(v569 - 2);
    v186 = *(_DWORD *)(v112 + 8 * (unsigned __int8)v372);
    v570 = *(_DWORD *)(v112 + 8 * (unsigned __int8)v372 + 4);
    v636 = *((_DWORD *)&unk_18EAB8 + 2 * v393 + 1);
    v366 = v365
         ^ *(_DWORD *)(v600 + 8)
         ^ *(_DWORD *)(v584 - 8)
         ^ *((_DWORD *)&unk_18EAB8 + 2 * v650)
         ^ *((_DWORD *)&unk_18F2B8 + 2 * v654);
    v601 = *((_DWORD *)&unk_18EAB8 + 2 * v378 + 1);
    v373 = v185
         ^ ~(v247 ^ 0xB0000000)
         ^ *(_DWORD *)(v112 + 8 * v685 + 4)
         ^ dword_18C2B8[2 * v689 + 1]
         ^ v183
         ^ v184
         ^ *(_DWORD *)(v584 - 4)
         ^ *((_DWORD *)&unk_18EAB8 + 2 * v650 + 1)
         ^ *((_DWORD *)&unk_18F2B8 + 2 * v654 + 1);
    v379 = *((_DWORD *)v589 - 2)
         ^ *(_DWORD *)(v603 + 8)
         ^ ~v186
         ^ dword_18C2B8[2 * v449]
         ^ *((_DWORD *)v574 - 2)
         ^ *(v577 - 2)
         ^ *((_DWORD *)&unk_18EAB8 + 2 * v378)
         ^ *((_DWORD *)&unk_18F2B8 + 2 * v385);
    v187 = ~(v247 ^ 0xC0000000) ^ v570;
    v188 = ~(v247 ^ 0xF0000000) ^ *(_DWORD *)(v112 + 8 * v444 + 4) ^ dword_18C2B8[2 * v468 + 1];
    v189 = *(_DWORD *)(v112 + 8 * v434 + 4) ^ ~(v247 ^ 0xD0000000) ^ dword_18C2B8[2 * v456 + 1];
    v190 = dword_18C2B8[2 * v460 + 1]
         ^ ~(v247 ^ 0xE0000000)
         ^ *(_DWORD *)(v112 + 8 * (unsigned __int8)v399 + 4)
         ^ *((_DWORD *)v595 - 1);
    v191 = ~*(_DWORD *)(v112 + 8 * v444)
         ^ dword_18C2B8[2 * v468]
         ^ *((_DWORD *)v621 - 2)
         ^ *(v416 - 2)
         ^ *(_DWORD *)(v626 + 8)
         ^ *((_DWORD *)v630 - 2)
         ^ *((_DWORD *)&unk_18EAB8 + 2 * v473)
         ^ *((_DWORD *)&unk_18F2B8 + 2 * v479);
    v248 = *(_DWORD *)(v606 + 8)
         ^ dword_18C2B8[2 * v456]
         ^ ~*(_DWORD *)(v112 + 8 * v434)
         ^ *((_DWORD *)v581 - 2)
         ^ *(_DWORD *)(HIDWORD(v584) - 8)
         ^ *((_DWORD *)v591 - 2)
         ^ *((_DWORD *)&unk_18EAB8 + 2 * v393)
         ^ *((_DWORD *)&unk_18F2B8 + 2 * v439);
    v241 = v187
         ^ dword_18C2B8[2 * v449 + 1]
         ^ *((_DWORD *)v574 - 1)
         ^ *(v577 - 1)
         ^ *(_DWORD *)(v603 + 12)
         ^ *((_DWORD *)v589 - 1)
         ^ v601
         ^ *((_DWORD *)&unk_18F2B8 + 2 * v385 + 1);
    v386 = v190
         ^ *(v610 - 1)
         ^ *(_DWORD *)(v613 + 12)
         ^ *((_DWORD *)v617 - 1)
         ^ *((_DWORD *)&unk_18EAB8 + 2 * v425 + 1)
         ^ *((_DWORD *)&unk_18F2B8 + 2 * v465 + 1);
    v394 = v188
         ^ *((_DWORD *)v621 - 1)
         ^ *(v416 - 1)
         ^ *(_DWORD *)(v626 + 12)
         ^ *((_DWORD *)v630 - 1)
         ^ *((_DWORD *)&unk_18EAB8 + 2 * v473 + 1)
         ^ *((_DWORD *)&unk_18F2B8 + 2 * v479 + 1);
    v417 = *((_DWORD *)&unk_18F2B8 + 2 * v465)
         ^ ~*(_DWORD *)(v112 + 8 * (unsigned __int8)v399)
         ^ dword_18C2B8[2 * v460]
         ^ *((_DWORD *)v595 - 2)
         ^ *(v610 - 2)
         ^ *(_DWORD *)(v613 + 8)
         ^ *((_DWORD *)v617 - 2)
         ^ *((_DWORD *)&unk_18EAB8 + 2 * v425);
    v426 = v191;
    v400 = v189
         ^ *((_DWORD *)v581 - 1)
         ^ *(_DWORD *)(HIDWORD(v584) - 4)
         ^ *(_DWORD *)(v606 + 12)
         ^ *((_DWORD *)v591 - 1)
         ^ v636
         ^ *((_DWORD *)&unk_18F2B8 + 2 * v439 + 1);
    v469 = HIBYTE(v317);
    v474 = HIBYTE(v328);
    v651 = HIBYTE(v400);
    v672 = HIBYTE(v386);
    v466 = HIBYTE(v308);
    v618 = 8 * HIBYTE(v323) + 1628848;
    v627 = 8 * HIBYTE(v332) + 1628848;
    v633 = 8 * HIBYTE(v343) + 1628848;
    v585 = 8 * HIBYTE(v191) + 1628848;
    v637 = 8 * HIBYTE(v264) + 1628848;
    v604 = 8 * HIBYTE(v303) + 1628848;
    v611 = 8 * HIBYTE(v312) + 1628848;
    v192 = qword_18E2C0[(unsigned __int8)v288 - 1];
    v193 = &dword_18D2C0[2 * BYTE2(v323)];
    v194 = &qword_18CAC0[BYTE1(v312)];
    v195 = &dword_18D2C0[2 * BYTE2(v332)];
    v592 = (unsigned __int8)v303;
    v196 = BYTE1(v308);
    v641 = &dword_18D2C0[2 * BYTE2(v303)];
    v602 = (unsigned __int8)v323;
    v324 = &qword_18CAC0[BYTE1(v323)];
    LODWORD(v558) = dword_18C2B8[2 * HIBYTE(v338)]
                  ^ *(_DWORD *)(v112 + 8 * (unsigned __int8)v298)
                  ^ LODWORD(qword_18CAC0[BYTE1(v303) - 1])
                  ^ *(v193 - 2)
                  ^ LODWORD(qword_18DAB0[HIBYTE(v366) + 1])
                  ^ v192
                  ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v293))
                  ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v317));
    v197 = BYTE1(v317);
    HIDWORD(v558) = *(_DWORD *)(v112 + 8 * (unsigned __int8)v298 + 4)
                  ^ dword_18C2B8[2 * HIBYTE(v338) + 1]
                  ^ HIDWORD(qword_18CAC0[BYTE1(v303) - 1])
                  ^ *(v193 - 1)
                  ^ HIDWORD(qword_18DAB0[HIBYTE(v366) + 1])
                  ^ HIDWORD(v192)
                  ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v293) + 1)
                  ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v317) + 1);
    v480 = &qword_18E2C0[(unsigned __int8)v317];
    v198 = (unsigned __int8)v312;
    v644 = &dword_18D2C0[2 * BYTE2(v312)];
    v607 = (unsigned __int8)v332;
    v199 = *(_DWORD *)(v112 + 8 * (unsigned __int8)v254 + 4)
         ^ dword_18C2B8[2 * HIBYTE(v350) + 1]
         ^ *((_DWORD *)v194 - 1)
         ^ *(v195 - 1)
         ^ HIDWORD(qword_18DAB0[HIBYTE(v379) + 1]);
    v200 = *(_DWORD *)(v112 + 8 * (unsigned __int8)v254)
         ^ dword_18C2B8[2 * HIBYTE(v350)]
         ^ *((_DWORD *)v194 - 2)
         ^ *(v195 - 2)
         ^ LODWORD(qword_18DAB0[HIBYTE(v379) + 1]);
    v313 = &qword_18CAC0[BYTE1(v332)];
    BYTE2(v195) = BYTE2(v308);
    v201 = &dword_18D2C0[2 * BYTE2(v264)];
    v309 = &qword_18E2C0[(unsigned __int8)v308];
    v304 = BYTE2(v195);
    v586 = BYTE2(v350);
    v622 = (unsigned __int8)v343;
    LODWORD(v564) = v200
                  ^ LODWORD(qword_18E2C0[(unsigned __int8)v408 - 1])
                  ^ *((_DWORD *)&unk_18EAB8 + 2 * v196)
                  ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v328));
    HIDWORD(v564) = v199
                  ^ HIDWORD(qword_18E2C0[(unsigned __int8)v408 - 1])
                  ^ *((_DWORD *)&unk_18EAB8 + 2 * v196 + 1)
                  ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v328) + 1);
    v318 = &qword_18CAC0[BYTE1(v343)];
    HIDWORD(v192) = &dword_18D2C0[2 * BYTE2(v343)];
    v202 = *(_DWORD *)(HIDWORD(v192) - 8)
         ^ *(_DWORD *)(v112 + 8 * v592)
         ^ dword_18C2B8[2 * HIBYTE(v270)]
         ^ *((_DWORD *)v324 - 2);
    v203 = &dword_18D2C0[2 * BYTE2(v257)];
    v204 = *(_DWORD *)(v112 + 8 * v592 + 4)
         ^ dword_18C2B8[2 * HIBYTE(v270) + 1]
         ^ *((_DWORD *)v324 - 1)
         ^ *(_DWORD *)(HIDWORD(v192) - 4)
         ^ HIDWORD(qword_18DAB0[HIBYTE(v248) + 1]);
    v205 = qword_18E2C0[(unsigned __int8)v293 - 1];
    v333 = &qword_18E2C0[(unsigned __int8)v338];
    v206 = v204 ^ HIDWORD(v205);
    v648 = (unsigned __int8)v264;
    v265 = &qword_18CAC0[BYTE1(v264)];
    v207 = v202 ^ LODWORD(qword_18DAB0[HIBYTE(v248) + 1]) ^ v205;
    LOBYTE(v202) = v350;
    v208 = *((_DWORD *)&unk_18EAB8 + 2 * v197);
    HIDWORD(v205) = *((_DWORD *)&unk_18EAB8 + 2 * v197 + 1);
    LODWORD(v205) = &dword_18D2C0[2 * BYTE2(v277)];
    v351 = BYTE1(v350);
    v209 = BYTE2(v258);
    LODWORD(v571) = v208 ^ v207 ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v338));
    v325 = &qword_18CAC0[BYTE1(v257)];
    HIDWORD(v571) = v206 ^ HIDWORD(v205) ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v338) + 1);
    HIDWORD(v205) = &dword_18D2C0[2 * BYTE2(v366)];
    v344 = &qword_18E2C0[(unsigned __int8)v270];
    v655 = BYTE1(v258);
    v435 = &qword_18E2C0[(unsigned __int8)v258];
    LODWORD(v578) = LODWORD(qword_18DAB0[HIBYTE(v417) + 1])
                  ^ dword_18C2B8[2 * HIBYTE(v258)]
                  ^ *(_DWORD *)(v112 + 8 * v198)
                  ^ *((_DWORD *)v313 - 2)
                  ^ *(v201 - 2)
                  ^ *((_DWORD *)v309 - 2)
                  ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v328))
                  ^ *((_DWORD *)&unk_18F2B8 + 2 * v586);
    HIDWORD(v578) = HIDWORD(qword_18DAB0[HIBYTE(v417) + 1])
                  ^ dword_18C2B8[2 * HIBYTE(v258) + 1]
                  ^ *(_DWORD *)(v112 + 8 * v198 + 4)
                  ^ *((_DWORD *)v313 - 1)
                  ^ *(v201 - 1)
                  ^ *((_DWORD *)v309 - 1)
                  ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v328) + 1)
                  ^ *((_DWORD *)&unk_18F2B8 + 2 * v586 + 1);
    v657 = BYTE2(v373);
    v259 = BYTE2(v241);
    v679 = (unsigned __int8)v366;
    v210 = *(_DWORD *)(v585 + 12)
         ^ dword_18C2B8[2 * HIBYTE(v358) + 1]
         ^ *(_DWORD *)(v112 + 8 * v602 + 4)
         ^ *((_DWORD *)v318 - 1)
         ^ *(v203 - 1)
         ^ *((_DWORD *)v480 - 1)
         ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v338) + 1);
    v314 = &qword_18CAC0[BYTE1(v366)];
    LODWORD(v584) = dword_18C2B8[2 * HIBYTE(v358)]
                  ^ *(_DWORD *)(v112 + 8 * v602)
                  ^ *((_DWORD *)v318 - 2)
                  ^ *(v203 - 2)
                  ^ *(_DWORD *)(v585 + 8)
                  ^ *((_DWORD *)v480 - 2)
                  ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v338))
                  ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v270));
    v319 = &dword_18D2C0[2 * BYTE2(v248)];
    HIDWORD(v584) = v210 ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v270) + 1);
    v211 = *(_DWORD *)(v112 + 8 * v607 + 4)
         ^ dword_18C2B8[2 * HIBYTE(v373) + 1]
         ^ *((_DWORD *)v265 - 1)
         ^ *(_DWORD *)(v205 - 4);
    v212 = *((_DWORD *)v265 - 2)
         ^ *(_DWORD *)(v112 + 8 * v607)
         ^ dword_18C2B8[2 * HIBYTE(v373)]
         ^ *(_DWORD *)(v205 - 8)
         ^ LODWORD(qword_18DAB0[HIBYTE(v281) + 1]);
    v213 = &qword_18E2C0[(unsigned __int8)v328];
    v608 = BYTE2(v400);
    v329 = &qword_18CAC0[BYTE1(v379)];
    v214 = v211 ^ HIDWORD(qword_18DAB0[HIBYTE(v281) + 1]) ^ *((_DWORD *)v213 - 1);
    v215 = *((_DWORD *)&unk_18EAB8 + 2 * v351 + 1);
    v216 = *((_DWORD *)v213 - 2) ^ v212 ^ *((_DWORD *)&unk_18EAB8 + 2 * v351);
    v352 = &dword_18D2C0[2 * BYTE2(v417)];
    v614 = BYTE1(v373);
    v367 = &qword_18E2C0[(unsigned __int8)v373];
    LODWORD(v587) = v216 ^ *((_DWORD *)&unk_18F2B8 + 2 * v209);
    HIDWORD(v587) = v214 ^ v215 ^ *((_DWORD *)&unk_18F2B8 + 2 * v209 + 1);
    v217 = *(_DWORD *)(v112 + 8 * v622 + 4) ^ dword_18C2B8[2 * HIBYTE(v241) + 1] ^ *((_DWORD *)v325 - 1);
    v218 = *((_DWORD *)v325 - 2) ^ *(_DWORD *)(v112 + 8 * v622) ^ dword_18C2B8[2 * HIBYTE(v241)];
    v219 = *(_DWORD *)(HIDWORD(v205) - 8);
    v623 = BYTE1(v241);
    v440 = &qword_18E2C0[(unsigned __int8)v241];
    v242 = (unsigned __int8)v248;
    HIDWORD(v205) = HIDWORD(qword_18DAB0[HIBYTE(v298) + 1])
                  ^ v217
                  ^ *(_DWORD *)(HIDWORD(v205) - 4)
                  ^ *((_DWORD *)v333 - 1);
    v220 = *((_DWORD *)v333 - 2) ^ v218 ^ v219 ^ LODWORD(qword_18DAB0[HIBYTE(v298) + 1]);
    v326 = &qword_18CAC0[BYTE1(v248)];
    v334 = &dword_18D2C0[2 * BYTE2(v426)];
    v221 = BYTE1(v400);
    v401 = &qword_18E2C0[(unsigned __int8)v400];
    v222 = BYTE2(v386);
    LODWORD(v593) = v220 ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v270)) ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v358));
    v223 = qword_18E2C0[(unsigned __int8)v202 - 1];
    HIDWORD(v593) = HIDWORD(v205)
                  ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v270) + 1)
                  ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v358) + 1);
    v224 = &qword_18CAC0[BYTE1(v277)];
    v225 = *((_DWORD *)v224 - 2);
    v226 = *((_DWORD *)v224 - 1);
    v227 = &dword_18D2C0[2 * BYTE2(v379)];
    v271 = (unsigned __int8)v426;
    v374 = &qword_18CAC0[BYTE1(v426)];
    v597 = v223
         ^ dword_18C2B8[2 * v651]
         ^ *(_DWORD *)(v112 + 8 * v648)
         ^ v225
         ^ *(v227 - 2)
         ^ LODWORD(qword_18DAB0[HIBYTE(v254) + 1])
         ^ *((_DWORD *)&unk_18EAB8 + 2 * v655)
         ^ *((_DWORD *)&unk_18F2B8 + 2 * v657);
    v249 = BYTE1(v386);
    v427 = &qword_18E2C0[(unsigned __int8)v386];
    LODWORD(v599) = HIDWORD(v223)
                  ^ dword_18C2B8[2 * v651 + 1]
                  ^ *(_DWORD *)(v112 + 8 * v648 + 4)
                  ^ v226
                  ^ *(v227 - 1)
                  ^ HIDWORD(qword_18DAB0[HIBYTE(v254) + 1])
                  ^ *((_DWORD *)&unk_18EAB8 + 2 * v655 + 1)
                  ^ *((_DWORD *)&unk_18F2B8 + 2 * v657 + 1);
    v387 = &qword_18CAC0[BYTE1(v281)];
    v228 = dword_18C2B8[2 * v672]
         ^ *(_DWORD *)(v112 + 8 * (unsigned __int8)v257)
         ^ *((_DWORD *)v314 - 2)
         ^ *(v319 - 2)
         ^ *(_DWORD *)(v604 + 8)
         ^ *((_DWORD *)v344 - 2);
    LODWORD(v205) = *(_DWORD *)(v112 + 8 * (unsigned __int8)v257 + 4)
                  ^ dword_18C2B8[2 * v672 + 1]
                  ^ *((_DWORD *)v314 - 1)
                  ^ *(v319 - 1)
                  ^ *(_DWORD *)(v604 + 12)
                  ^ *((_DWORD *)v344 - 1);
    v345 = &dword_18D2C0[2 * BYTE2(v254)];
    v229 = v608;
    v605 = v205 ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v358) + 1) ^ *((_DWORD *)&unk_18F2B8 + 2 * v259 + 1);
    HIDWORD(v599) = v228 ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v358)) ^ *((_DWORD *)&unk_18F2B8 + 2 * v259);
    v230 = *(_DWORD *)(v112 + 8 * (unsigned __int8)v277)
         ^ dword_18C2B8[2 * HIBYTE(v394)]
         ^ *((_DWORD *)v329 - 2)
         ^ *(v352 - 2)
         ^ *(_DWORD *)(v611 + 8)
         ^ *((_DWORD *)v435 - 2)
         ^ *((_DWORD *)&unk_18EAB8 + 2 * v614)
         ^ *((_DWORD *)&unk_18F2B8 + 2 * v229);
    v231 = *((_DWORD *)&unk_18F2B8 + 2 * v229 + 1)
         ^ *(_DWORD *)(v611 + 12)
         ^ dword_18C2B8[2 * HIBYTE(v394) + 1]
         ^ *(_DWORD *)(v112 + 8 * (unsigned __int8)v277 + 4)
         ^ *((_DWORD *)v329 - 1)
         ^ *(v352 - 1)
         ^ *((_DWORD *)v435 - 1)
         ^ *((_DWORD *)&unk_18EAB8 + 2 * v614 + 1);
    v609 = v230;
    v612 = v231;
    v615 = *(_QWORD *)&dword_18C2B8[2 * HIBYTE(v288)]
         ^ *(_QWORD *)(v112 + 8 * v679)
         ^ *(v326 - 1)
         ^ *((_QWORD *)v334 - 1)
         ^ *(_QWORD *)(v618 + 8)
         ^ qword_18E2C0[(unsigned __int8)v358 - 1]
         ^ *((_QWORD *)&unk_18EAB8 + v623)
         ^ *((_QWORD *)&unk_18F2B8 + v222);
    v624 = *(_QWORD *)(v112 + 8 * (unsigned __int8)v379)
         ^ *(_QWORD *)&dword_18C2B8[2 * HIBYTE(v408)]
         ^ qword_18CAC0[BYTE1(v417) - 1]
         ^ *(_QWORD *)&dword_18D2C0[2 * BYTE2(v281) - 2]
         ^ *(_QWORD *)(v627 + 8)
         ^ *(v367 - 1)
         ^ *((_QWORD *)&unk_18EAB8 + v221)
         ^ *((_QWORD *)&unk_18F2B8 + BYTE2(v394));
    v232 = *(_DWORD *)(v112 + 8 * (unsigned __int8)v417 + 4)
         ^ dword_18C2B8[2 * v466 + 1]
         ^ *((_DWORD *)v387 - 1)
         ^ *(v345 - 1)
         ^ *(_DWORD *)(v637 + 12)
         ^ *((_DWORD *)v401 - 1);
    v233 = *(_DWORD *)(v112 + 8 * (unsigned __int8)v417)
         ^ dword_18C2B8[2 * v466]
         ^ *((_DWORD *)v387 - 2)
         ^ *(v345 - 2)
         ^ *(_DWORD *)(v637 + 8)
         ^ *((_DWORD *)v401 - 2);
    v645 = *(_QWORD *)(v112 + 8 * v271)
         ^ *(_QWORD *)&dword_18C2B8[2 * v469]
         ^ qword_18CAC0[BYTE1(v298) - 1]
         ^ *((_QWORD *)v641 - 1)
         ^ qword_18DAB0[HIBYTE(v257) + 1]
         ^ *(v427 - 1)
         ^ *((_QWORD *)&unk_18EAB8 + BYTE1(v288))
         ^ *((_QWORD *)&unk_18F2B8 + BYTE2(v293));
    v652 = *(_QWORD *)&dword_18C2B8[2 * v474]
         ^ *(_QWORD *)(v112 + 8 * (unsigned __int8)v281)
         ^ qword_18CAC0[BYTE1(v254) - 1]
         ^ *((_QWORD *)v644 - 1)
         ^ qword_18DAB0[HIBYTE(v277) + 1]
         ^ qword_18E2C0[(unsigned __int8)v394 - 1]
         ^ *((_QWORD *)&unk_18EAB8 + BYTE1(v408))
         ^ *((_QWORD *)&unk_18F2B8 + v304);
    v631 = *(_QWORD *)(v112 + 8 * v242)
         ^ *(_QWORD *)&dword_18C2B8[2 * HIBYTE(v293)]
         ^ *(v374 - 1)
         ^ *(_QWORD *)&dword_18D2C0[2 * BYTE2(v298) - 2]
         ^ *(_QWORD *)(v633 + 8)
         ^ *(v440 - 1)
         ^ *((_QWORD *)&unk_18EAB8 + v249)
         ^ *((_QWORD *)&unk_18F2B8 + BYTE2(v288));
    HIDWORD(v638) = v232
                  ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v394) + 1)
                  ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v408) + 1);
    LODWORD(v638) = v233 ^ *((_DWORD *)&unk_18EAB8 + 2 * BYTE1(v394)) ^ *((_DWORD *)&unk_18F2B8 + 2 * BYTE2(v408));
  }
  while ( !v135 );
  v240 = v112;
  dest[0] ^= v558 ^ v665;
  HIDWORD(dest[5]) ^= HIDWORD(v587) ^ HIDWORD(v506);
  LODWORD(dest[7]) ^= v597 ^ v518;
  *(_QWORD *)((char *)&dest[7] + 4) ^= v599 ^ v521;
  HIDWORD(dest[8]) ^= v605 ^ v527;
  LODWORD(dest[9]) ^= v230 ^ v481;
  HIDWORD(dest[9]) ^= v231 ^ v530;
  dest[10] ^= v615 ^ v484;
  v5 = 0;
  dest[1] ^= v660 ^ v564;
  dest[11] ^= v624 ^ v533;
  LODWORD(dest[12]) ^= v631 ^ v540;
  HIDWORD(dest[12]) ^= HIDWORD(v631) ^ v490;
  dest[13] ^= v638 ^ v543;
  dest[14] ^= v645 ^ v548;
  dest[15] ^= v652 ^ v555;
  v234 = *((_DWORD *)a1 + 66);
  dest[2] ^= v658 ^ v571;
  v235 = *((_DWORD *)a1 + 67);
  v236 = v234;
  *((_DWORD *)a1 + 66) = v234 + 1;
  v7 = na;
  dest[3] = v494 ^ v719 ^ v578;
  dest[4] = v498 ^ v720 ^ v584;
  LODWORD(dest[5]) = v506 ^ v721 ^ v587;
  dest[6] = v514 ^ v722 ^ v593;
  *((_DWORD *)a1 + 67) = (__PAIR64__(v235, v236) + 1) >> 32;
  if ( na )
    goto LABEL_5;
LABEL_17:
  v3 = v5;
LABEL_18:
  result = memcpy(v723, dest, 0x80u);
  *((_DWORD *)a1 + 32) = v3;
  return result;
}
