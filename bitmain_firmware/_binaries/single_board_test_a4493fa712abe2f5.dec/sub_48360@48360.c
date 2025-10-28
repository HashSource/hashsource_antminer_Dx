unsigned int __fastcall sub_48360(_DWORD *a1, char a2, char a3, int *a4, int a5)
{
  int v6; // r5
  int v7; // r12
  int v8; // r9
  int v9; // r7
  int v10; // lr
  int v11; // r8
  int v12; // r11
  int v13; // r10
  int v14; // r1
  int v15; // r4
  int v16; // r6
  int v17; // r3
  int v18; // r5
  int v19; // r9
  int v20; // r10
  int v21; // r0
  int v22; // lr
  int v23; // r8
  int v24; // r11
  int v25; // r12
  int v26; // r1
  int v27; // r7
  int v28; // r2
  int v29; // r5
  int v30; // r0
  int v31; // r3
  int v32; // r1
  int v33; // r9
  int v34; // r10
  int v35; // lr
  int v36; // r8
  int v37; // r5
  int v38; // r12
  int v39; // r11
  int v40; // r7
  int v41; // r7
  int v42; // r4
  int v43; // r2
  int v44; // r3
  int v45; // r2
  int v46; // r4
  int v47; // r0
  int v48; // r10
  int v49; // r8
  int v50; // r12
  int v51; // r9
  int v52; // lr
  int v53; // r11
  int v54; // r1
  int v55; // r7
  int v56; // r4
  int v57; // r5
  int v58; // lr
  int v59; // r3
  int v60; // r3
  int v61; // r12
  int v62; // r6
  int v63; // r5
  int v64; // r1
  int v65; // r8
  int v66; // r9
  int v67; // r2
  int v68; // r4
  int v69; // r10
  int v70; // r3
  int v71; // r11
  int v72; // r0
  int v73; // lr
  int v74; // r6
  int v75; // r5
  int v76; // r5
  int v77; // r10
  int v78; // r3
  int v79; // r9
  int v80; // r8
  int v81; // r6
  int v82; // r11
  int v83; // r12
  int v84; // r3
  int v85; // r4
  int v86; // r0
  int v87; // lr
  int v88; // r7
  int v89; // r5
  int v90; // r12
  int v91; // r9
  int v92; // r2
  int v93; // r8
  int v94; // r5
  int v95; // r11
  int v96; // r4
  int v97; // r10
  int v98; // r3
  int v99; // r7
  int v100; // r6
  int v101; // r0
  int v102; // r2
  int v103; // r11
  int v104; // r10
  int v105; // r8
  int v106; // lr
  int v107; // r9
  int v108; // r12
  int v109; // r6
  int v110; // r5
  int v111; // r7
  int v112; // r0
  int v113; // r4
  int v114; // r3
  int v115; // r9
  int v116; // r3
  int v117; // r3
  int v118; // lr
  int v119; // r12
  int v120; // r8
  int v121; // r7
  int v122; // r10
  int v123; // r4
  int v124; // r11
  int v125; // r5
  int v126; // r2
  int v127; // lr
  int v128; // r0
  int v129; // r6
  int v130; // r8
  int v131; // r10
  int v132; // r2
  int v133; // r4
  int v134; // r11
  int v135; // r9
  int v136; // r1
  int v137; // r7
  int v138; // r12
  int v139; // r3
  int v140; // r11
  int v141; // r5
  int v142; // r1
  int v143; // r6
  int v144; // r10
  int v145; // r3
  int v146; // r9
  int v147; // r8
  int v148; // r12
  int v149; // lr
  int v150; // r7
  int v151; // r1
  int v152; // r5
  int v153; // r1
  int v154; // r1
  int v155; // r3
  int v156; // r0
  int v157; // r9
  int v158; // r4
  int v159; // r0
  int v160; // r6
  int v161; // t2
  int v162; // r10
  int v163; // r11
  int v164; // r8
  int v165; // lr
  int v166; // r12
  int v167; // r2
  int v168; // r6
  int v169; // r1
  int v170; // r7
  int v171; // r5
  int v172; // lr
  int v173; // r4
  int v174; // r3
  int v175; // r9
  int v176; // t2
  int v177; // r8
  int v178; // r11
  int v179; // r12
  int v180; // r0
  int v181; // r10
  int v182; // r1
  int v183; // r3
  int v184; // r0
  int v185; // r8
  int v186; // r0
  int v187; // r7
  int v188; // r6
  int v189; // r10
  int v190; // lr
  int v191; // r11
  int v192; // r3
  int v193; // r9
  int v194; // r12
  int v195; // r1
  int v196; // r5
  int v197; // r4
  int v198; // r11
  int v199; // r5
  int v200; // r6
  int v201; // r3
  int v202; // r10
  int v203; // r3
  int v204; // r9
  int v205; // r8
  int v206; // r0
  int v207; // r12
  int v208; // lr
  int v209; // r1
  int v210; // r5
  int v211; // r1
  int v212; // r3
  int v213; // r7
  int v214; // r9
  int v215; // r7
  int v216; // r0
  int v217; // t2
  int v218; // r10
  int v219; // r8
  int v220; // lr
  int v221; // r12
  int v222; // r2
  int v223; // r6
  int v224; // r1
  int v225; // r7
  int v226; // r5
  int v227; // lr
  int v228; // r4
  int v229; // r3
  int v230; // r9
  int v231; // t2
  int v232; // r8
  int v233; // r11
  int v234; // r12
  int v235; // r10
  int v236; // r0
  int v237; // r1
  int v238; // r3
  int v239; // r0
  int v240; // r8
  int v241; // r0
  int v242; // r7
  int v243; // r6
  int v244; // r10
  int v245; // lr
  int v246; // r11
  int v247; // r3
  int v248; // r9
  int v249; // r12
  int v250; // r1
  int v251; // r2
  int v252; // r7
  int v253; // r4
  int v254; // r11
  int v255; // r5
  int v256; // r2
  int v257; // r6
  int v258; // r10
  int v259; // r3
  int v260; // r9
  int v261; // r8
  int v262; // r12
  int v263; // lr
  int v264; // r1
  int v265; // r5
  int v266; // r1
  int v267; // r3
  int v268; // r7
  int v269; // r9
  int v270; // r7
  int v271; // r0
  int v272; // t2
  int v273; // r10
  int v274; // r11
  int v275; // r8
  int v276; // lr
  int v277; // r12
  int v278; // r2
  int v279; // r6
  int v280; // r1
  int v281; // r7
  int v282; // r5
  int v283; // lr
  int v284; // r4
  int v285; // r3
  int v286; // r9
  int v287; // t2
  int v288; // r8
  int v289; // r11
  int v290; // r12
  int v291; // r0
  int v292; // r10
  int v293; // r1
  int v294; // r3
  int v295; // r0
  int v296; // r8
  int v297; // r0
  int v298; // r7
  int v299; // r6
  int v300; // r10
  int v301; // lr
  int v302; // r11
  int v303; // r3
  int v304; // r5
  int v305; // r9
  int v306; // r12
  int v307; // r1
  int v308; // r5
  int v309; // r4
  int v310; // r11
  int v311; // r5
  int v312; // r0
  int v313; // r6
  int v314; // r3
  int v315; // r10
  int v316; // r3
  int v317; // r9
  int v318; // r8
  int v319; // r12
  int v320; // lr
  int v321; // r1
  int v322; // r5
  int v323; // r1
  int v324; // r3
  int v325; // r7
  int v326; // r9
  int v327; // r7
  int v328; // r0
  int v329; // r0
  int v330; // t2
  int v331; // r10
  int v332; // r11
  int v333; // r8
  int v334; // lr
  int v335; // r12
  int v336; // r2
  int v337; // r6
  int v338; // r1
  int v339; // r7
  int v340; // r5
  int v341; // lr
  int v342; // r4
  int v343; // r3
  int v344; // r9
  int v345; // t2
  int v346; // r8
  int v347; // r11
  int v348; // r12
  int v349; // r0
  int v350; // r10
  int v351; // r1
  int v352; // r3
  int v353; // r0
  int v354; // r8
  int v355; // r0
  int v356; // r7
  int v357; // r6
  int v358; // r10
  int v359; // lr
  int v360; // r11
  int v361; // r3
  int v362; // r5
  int v363; // r9
  int v364; // r12
  int v365; // r1
  int v366; // r2
  int v367; // r5
  int v368; // r4
  int v369; // r11
  int v370; // r5
  int v371; // r2
  int v372; // r6
  int v373; // r10
  int v374; // r3
  int v375; // r9
  int v376; // r8
  int v377; // r0
  int v378; // r12
  int v379; // lr
  int v380; // r1
  int v381; // r5
  int v382; // r1
  int v383; // r3
  int v384; // r7
  int v385; // r9
  int v386; // r7
  int v387; // r0
  int v388; // t2
  int v389; // r10
  int v390; // r11
  int v391; // r8
  int v392; // lr
  int v393; // r12
  int v394; // r2
  int v395; // r6
  int v396; // r1
  int v397; // r7
  int v398; // r5
  int v399; // lr
  int v400; // r4
  int v401; // r3
  int v402; // r9
  int v403; // r3
  int v404; // r8
  int v405; // r11
  int v406; // r12
  int v407; // r0
  int v408; // r10
  int v409; // r1
  int v410; // r3
  int v411; // r0
  int v412; // r8
  int v413; // r0
  int v414; // r2
  int v415; // r7
  int v416; // r6
  int v417; // r10
  int v418; // r11
  int v419; // r3
  int v420; // r5
  int v421; // lr
  int v422; // r9
  int v423; // r12
  int v424; // r1
  int v425; // r7
  int v426; // r5
  int v427; // r5
  int v428; // r0
  int v429; // r4
  int v430; // r9
  int v431; // r6
  int v432; // r3
  int v433; // r10
  int v434; // r12
  int v435; // r11
  int v436; // lr
  int v437; // r8
  int v438; // r2
  int v439; // r2
  int v440; // r5
  int v441; // r2
  int v442; // r3
  int v443; // r1
  int v444; // r12
  int v445; // r1
  int v446; // r9
  int v447; // r1
  int v448; // r4
  int v449; // r7
  int v450; // r10
  int v451; // r0
  int v452; // r6
  int v453; // r2
  int v454; // r11
  int v455; // r3
  int v456; // r4
  int v457; // r8
  int v458; // lr
  int v459; // r7
  int v460; // r7
  int v461; // r5
  int v462; // r0
  int v463; // r4
  int v464; // r3
  int v465; // r2
  int v466; // r2
  unsigned int v467; // r3
  unsigned int result; // r0
  unsigned int v469; // r3
  unsigned int v470; // r3
  unsigned int v471; // r3
  unsigned int v472; // r3
  unsigned int v473; // r3
  unsigned int v474; // r3
  unsigned int v475; // r3
  unsigned int v476; // r3
  unsigned int v477; // r3
  int v478; // [sp+0h] [bp-84h]
  int v479; // [sp+4h] [bp-80h]
  int v480; // [sp+4h] [bp-80h]
  int v481; // [sp+4h] [bp-80h]
  int v482; // [sp+4h] [bp-80h]
  int v483; // [sp+4h] [bp-80h]
  int v484; // [sp+4h] [bp-80h]
  int v485; // [sp+4h] [bp-80h]
  int v486; // [sp+4h] [bp-80h]
  int v487; // [sp+4h] [bp-80h]
  int v488; // [sp+4h] [bp-80h]
  int v489; // [sp+4h] [bp-80h]
  int v490; // [sp+4h] [bp-80h]
  int v491; // [sp+4h] [bp-80h]
  int v492; // [sp+4h] [bp-80h]
  int v493; // [sp+4h] [bp-80h]
  int v494; // [sp+4h] [bp-80h]
  int v495; // [sp+4h] [bp-80h]
  int v496; // [sp+4h] [bp-80h]
  int v497; // [sp+4h] [bp-80h]
  int v498; // [sp+4h] [bp-80h]
  int v499; // [sp+4h] [bp-80h]
  int v500; // [sp+4h] [bp-80h]
  int v501; // [sp+4h] [bp-80h]
  int v502; // [sp+4h] [bp-80h]
  int v503; // [sp+4h] [bp-80h]
  int v504; // [sp+4h] [bp-80h]
  int v505; // [sp+4h] [bp-80h]
  int v506; // [sp+4h] [bp-80h]
  int v507; // [sp+4h] [bp-80h]
  int v508; // [sp+4h] [bp-80h]
  int v509; // [sp+4h] [bp-80h]
  int v510; // [sp+8h] [bp-7Ch]
  int v511; // [sp+8h] [bp-7Ch]
  int v512; // [sp+8h] [bp-7Ch]
  int v513; // [sp+8h] [bp-7Ch]
  int v514; // [sp+8h] [bp-7Ch]
  int v515; // [sp+8h] [bp-7Ch]
  int v516; // [sp+8h] [bp-7Ch]
  int v517; // [sp+8h] [bp-7Ch]
  int v518; // [sp+8h] [bp-7Ch]
  int v519; // [sp+8h] [bp-7Ch]
  int v520; // [sp+8h] [bp-7Ch]
  int v521; // [sp+8h] [bp-7Ch]
  int v522; // [sp+8h] [bp-7Ch]
  int v523; // [sp+8h] [bp-7Ch]
  int v524; // [sp+8h] [bp-7Ch]
  int v525; // [sp+8h] [bp-7Ch]
  int v526; // [sp+8h] [bp-7Ch]
  int v527; // [sp+8h] [bp-7Ch]
  int v528; // [sp+8h] [bp-7Ch]
  int v529; // [sp+8h] [bp-7Ch]
  int v530; // [sp+8h] [bp-7Ch]
  int v531; // [sp+8h] [bp-7Ch]
  int v532; // [sp+8h] [bp-7Ch]
  int v533; // [sp+8h] [bp-7Ch]
  int v534; // [sp+8h] [bp-7Ch]
  int v535; // [sp+8h] [bp-7Ch]
  int v536; // [sp+8h] [bp-7Ch]
  int v537; // [sp+8h] [bp-7Ch]
  int v538; // [sp+8h] [bp-7Ch]
  int v539; // [sp+Ch] [bp-78h]
  int v540; // [sp+Ch] [bp-78h]
  int v541; // [sp+Ch] [bp-78h]
  int v542; // [sp+Ch] [bp-78h]
  int v543; // [sp+Ch] [bp-78h]
  int v544; // [sp+Ch] [bp-78h]
  int v545; // [sp+Ch] [bp-78h]
  int v546; // [sp+Ch] [bp-78h]
  int v547; // [sp+Ch] [bp-78h]
  int v548; // [sp+Ch] [bp-78h]
  int v549; // [sp+Ch] [bp-78h]
  int v550; // [sp+Ch] [bp-78h]
  int v551; // [sp+Ch] [bp-78h]
  int v552; // [sp+Ch] [bp-78h]
  int v553; // [sp+Ch] [bp-78h]
  int v554; // [sp+Ch] [bp-78h]
  int v555; // [sp+Ch] [bp-78h]
  int v556; // [sp+Ch] [bp-78h]
  int v557; // [sp+Ch] [bp-78h]
  int v558; // [sp+Ch] [bp-78h]
  int v559; // [sp+Ch] [bp-78h]
  int v560; // [sp+Ch] [bp-78h]
  int v561; // [sp+Ch] [bp-78h]
  int v562; // [sp+Ch] [bp-78h]
  int v563; // [sp+Ch] [bp-78h]
  int v564; // [sp+Ch] [bp-78h]
  int v565; // [sp+Ch] [bp-78h]
  int v566; // [sp+Ch] [bp-78h]
  int v567; // [sp+Ch] [bp-78h]
  int v568; // [sp+Ch] [bp-78h]
  int v569; // [sp+Ch] [bp-78h]
  int v570; // [sp+10h] [bp-74h]
  int v571; // [sp+10h] [bp-74h]
  int v572; // [sp+10h] [bp-74h]
  int v573; // [sp+10h] [bp-74h]
  int v574; // [sp+10h] [bp-74h]
  int v575; // [sp+10h] [bp-74h]
  int v576; // [sp+10h] [bp-74h]
  int v577; // [sp+10h] [bp-74h]
  int v578; // [sp+10h] [bp-74h]
  int v579; // [sp+10h] [bp-74h]
  int v580; // [sp+10h] [bp-74h]
  int v581; // [sp+10h] [bp-74h]
  int v582; // [sp+10h] [bp-74h]
  int v583; // [sp+10h] [bp-74h]
  int v584; // [sp+10h] [bp-74h]
  int v585; // [sp+10h] [bp-74h]
  int v586; // [sp+10h] [bp-74h]
  int v587; // [sp+10h] [bp-74h]
  int v588; // [sp+10h] [bp-74h]
  int v589; // [sp+10h] [bp-74h]
  int v590; // [sp+10h] [bp-74h]
  int v591; // [sp+10h] [bp-74h]
  int v592; // [sp+10h] [bp-74h]
  int v593; // [sp+10h] [bp-74h]
  int v594; // [sp+10h] [bp-74h]
  int v595; // [sp+10h] [bp-74h]
  int v596; // [sp+10h] [bp-74h]
  int v597; // [sp+10h] [bp-74h]
  int v598; // [sp+10h] [bp-74h]
  int v599; // [sp+10h] [bp-74h]
  int v600; // [sp+10h] [bp-74h]
  int v601; // [sp+10h] [bp-74h]
  int v602; // [sp+14h] [bp-70h]
  int v603; // [sp+14h] [bp-70h]
  int v604; // [sp+14h] [bp-70h]
  int v605; // [sp+14h] [bp-70h]
  int v606; // [sp+14h] [bp-70h]
  int v607; // [sp+14h] [bp-70h]
  int v608; // [sp+14h] [bp-70h]
  int v609; // [sp+14h] [bp-70h]
  int v610; // [sp+14h] [bp-70h]
  int v611; // [sp+14h] [bp-70h]
  int v612; // [sp+14h] [bp-70h]
  int v613; // [sp+14h] [bp-70h]
  int v614; // [sp+14h] [bp-70h]
  int v615; // [sp+14h] [bp-70h]
  int v616; // [sp+14h] [bp-70h]
  int v617; // [sp+14h] [bp-70h]
  int v618; // [sp+14h] [bp-70h]
  int v619; // [sp+14h] [bp-70h]
  int v620; // [sp+14h] [bp-70h]
  int v621; // [sp+14h] [bp-70h]
  int v622; // [sp+14h] [bp-70h]
  int v623; // [sp+14h] [bp-70h]
  int v624; // [sp+14h] [bp-70h]
  int v625; // [sp+14h] [bp-70h]
  int v626; // [sp+14h] [bp-70h]
  int v627; // [sp+14h] [bp-70h]
  int v628; // [sp+14h] [bp-70h]
  int v629; // [sp+18h] [bp-6Ch]
  int v630; // [sp+18h] [bp-6Ch]
  int v631; // [sp+18h] [bp-6Ch]
  int v632; // [sp+18h] [bp-6Ch]
  int v633; // [sp+18h] [bp-6Ch]
  int v634; // [sp+18h] [bp-6Ch]
  int v635; // [sp+18h] [bp-6Ch]
  int v636; // [sp+18h] [bp-6Ch]
  int v637; // [sp+18h] [bp-6Ch]
  int v638; // [sp+18h] [bp-6Ch]
  int v639; // [sp+18h] [bp-6Ch]
  int v640; // [sp+18h] [bp-6Ch]
  int v641; // [sp+18h] [bp-6Ch]
  int v642; // [sp+18h] [bp-6Ch]
  int v643; // [sp+18h] [bp-6Ch]
  int v644; // [sp+18h] [bp-6Ch]
  int v645; // [sp+18h] [bp-6Ch]
  int v646; // [sp+18h] [bp-6Ch]
  int v647; // [sp+18h] [bp-6Ch]
  int v648; // [sp+18h] [bp-6Ch]
  int v649; // [sp+18h] [bp-6Ch]
  int v650; // [sp+18h] [bp-6Ch]
  int v651; // [sp+18h] [bp-6Ch]
  int v652; // [sp+18h] [bp-6Ch]
  int v653; // [sp+18h] [bp-6Ch]
  int v654; // [sp+18h] [bp-6Ch]
  int v655; // [sp+1Ch] [bp-68h]
  int v656; // [sp+1Ch] [bp-68h]
  int v657; // [sp+1Ch] [bp-68h]
  int v658; // [sp+1Ch] [bp-68h]
  int v659; // [sp+1Ch] [bp-68h]
  int v660; // [sp+1Ch] [bp-68h]
  int v661; // [sp+1Ch] [bp-68h]
  int v662; // [sp+1Ch] [bp-68h]
  int v663; // [sp+1Ch] [bp-68h]
  int v664; // [sp+1Ch] [bp-68h]
  int v665; // [sp+1Ch] [bp-68h]
  int v666; // [sp+1Ch] [bp-68h]
  int v667; // [sp+1Ch] [bp-68h]
  int v668; // [sp+1Ch] [bp-68h]
  int v669; // [sp+1Ch] [bp-68h]
  int v670; // [sp+1Ch] [bp-68h]
  int v671; // [sp+1Ch] [bp-68h]
  int v672; // [sp+1Ch] [bp-68h]
  int v673; // [sp+1Ch] [bp-68h]
  int v674; // [sp+1Ch] [bp-68h]
  int v675; // [sp+1Ch] [bp-68h]
  int v676; // [sp+1Ch] [bp-68h]
  int v677; // [sp+1Ch] [bp-68h]
  int v678; // [sp+1Ch] [bp-68h]
  int v679; // [sp+1Ch] [bp-68h]
  int v680; // [sp+1Ch] [bp-68h]
  int v681; // [sp+1Ch] [bp-68h]
  int v682; // [sp+1Ch] [bp-68h]
  int v683; // [sp+20h] [bp-64h]
  int v684; // [sp+20h] [bp-64h]
  int v685; // [sp+20h] [bp-64h]
  int v686; // [sp+20h] [bp-64h]
  int v687; // [sp+20h] [bp-64h]
  int v688; // [sp+20h] [bp-64h]
  int v689; // [sp+20h] [bp-64h]
  int v690; // [sp+20h] [bp-64h]
  int v691; // [sp+20h] [bp-64h]
  int v692; // [sp+20h] [bp-64h]
  int v693; // [sp+20h] [bp-64h]
  int v694; // [sp+20h] [bp-64h]
  int v695; // [sp+20h] [bp-64h]
  int v696; // [sp+20h] [bp-64h]
  int v697; // [sp+20h] [bp-64h]
  int v698; // [sp+20h] [bp-64h]
  int v699; // [sp+20h] [bp-64h]
  int v700; // [sp+20h] [bp-64h]
  int v701; // [sp+20h] [bp-64h]
  int v702; // [sp+20h] [bp-64h]
  int v703; // [sp+20h] [bp-64h]
  int v704; // [sp+20h] [bp-64h]
  int v705; // [sp+20h] [bp-64h]
  int v706; // [sp+20h] [bp-64h]
  int v707; // [sp+20h] [bp-64h]
  int v708; // [sp+20h] [bp-64h]
  int v709; // [sp+20h] [bp-64h]
  int v710; // [sp+20h] [bp-64h]
  int v711; // [sp+20h] [bp-64h]
  int v712; // [sp+24h] [bp-60h]
  int v713; // [sp+24h] [bp-60h]
  int v714; // [sp+24h] [bp-60h]
  int v715; // [sp+24h] [bp-60h]
  int v716; // [sp+24h] [bp-60h]
  int v717; // [sp+24h] [bp-60h]
  int v718; // [sp+24h] [bp-60h]
  int v719; // [sp+24h] [bp-60h]
  int v720; // [sp+24h] [bp-60h]
  int v721; // [sp+24h] [bp-60h]
  int v722; // [sp+24h] [bp-60h]
  int v723; // [sp+24h] [bp-60h]
  int v724; // [sp+24h] [bp-60h]
  int v725; // [sp+24h] [bp-60h]
  int v726; // [sp+24h] [bp-60h]
  int v727; // [sp+24h] [bp-60h]
  int v728; // [sp+24h] [bp-60h]
  int v729; // [sp+24h] [bp-60h]
  int v730; // [sp+24h] [bp-60h]
  int v731; // [sp+24h] [bp-60h]
  int v732; // [sp+24h] [bp-60h]
  int v733; // [sp+24h] [bp-60h]
  int v734; // [sp+24h] [bp-60h]
  int v735; // [sp+24h] [bp-60h]
  int v736; // [sp+24h] [bp-60h]
  int v737; // [sp+24h] [bp-60h]
  int v738; // [sp+24h] [bp-60h]
  int v739; // [sp+24h] [bp-60h]
  int v740; // [sp+28h] [bp-5Ch]
  int v741; // [sp+28h] [bp-5Ch]
  int v742; // [sp+28h] [bp-5Ch]
  int v743; // [sp+28h] [bp-5Ch]
  int v744; // [sp+28h] [bp-5Ch]
  int v745; // [sp+28h] [bp-5Ch]
  int v746; // [sp+28h] [bp-5Ch]
  int v747; // [sp+28h] [bp-5Ch]
  int v748; // [sp+28h] [bp-5Ch]
  int v749; // [sp+28h] [bp-5Ch]
  int v750; // [sp+28h] [bp-5Ch]
  int v751; // [sp+28h] [bp-5Ch]
  int v752; // [sp+28h] [bp-5Ch]
  int v753; // [sp+28h] [bp-5Ch]
  int v754; // [sp+28h] [bp-5Ch]
  int v755; // [sp+28h] [bp-5Ch]
  int v756; // [sp+28h] [bp-5Ch]
  int v757; // [sp+28h] [bp-5Ch]
  int v758; // [sp+28h] [bp-5Ch]
  int v759; // [sp+28h] [bp-5Ch]
  int v760; // [sp+28h] [bp-5Ch]
  int v761; // [sp+28h] [bp-5Ch]
  int v762; // [sp+28h] [bp-5Ch]
  int v763; // [sp+28h] [bp-5Ch]
  int v764; // [sp+28h] [bp-5Ch]
  int v765; // [sp+28h] [bp-5Ch]
  int v766; // [sp+28h] [bp-5Ch]
  int v767; // [sp+2Ch] [bp-58h]
  int v768; // [sp+2Ch] [bp-58h]
  int v769; // [sp+2Ch] [bp-58h]
  int v770; // [sp+2Ch] [bp-58h]
  int v771; // [sp+2Ch] [bp-58h]
  int v772; // [sp+2Ch] [bp-58h]
  int v773; // [sp+2Ch] [bp-58h]
  int v774; // [sp+2Ch] [bp-58h]
  int v775; // [sp+2Ch] [bp-58h]
  int v776; // [sp+2Ch] [bp-58h]
  int v777; // [sp+2Ch] [bp-58h]
  int v778; // [sp+2Ch] [bp-58h]
  int v779; // [sp+2Ch] [bp-58h]
  int v780; // [sp+2Ch] [bp-58h]
  int v781; // [sp+2Ch] [bp-58h]
  int v782; // [sp+2Ch] [bp-58h]
  int v783; // [sp+2Ch] [bp-58h]
  int v784; // [sp+2Ch] [bp-58h]
  int v785; // [sp+2Ch] [bp-58h]
  int v786; // [sp+2Ch] [bp-58h]
  int v787; // [sp+2Ch] [bp-58h]
  int v788; // [sp+2Ch] [bp-58h]
  int v789; // [sp+2Ch] [bp-58h]
  int v790; // [sp+2Ch] [bp-58h]
  int v791; // [sp+2Ch] [bp-58h]
  int v792; // [sp+2Ch] [bp-58h]
  int v793; // [sp+2Ch] [bp-58h]
  int v794; // [sp+2Ch] [bp-58h]
  int v795; // [sp+2Ch] [bp-58h]
  int v796; // [sp+30h] [bp-54h]
  int v797; // [sp+30h] [bp-54h]
  int v798; // [sp+30h] [bp-54h]
  int v799; // [sp+30h] [bp-54h]
  int v800; // [sp+30h] [bp-54h]
  int v801; // [sp+30h] [bp-54h]
  int v802; // [sp+30h] [bp-54h]
  int v803; // [sp+30h] [bp-54h]
  int v804; // [sp+30h] [bp-54h]
  int v805; // [sp+30h] [bp-54h]
  int v806; // [sp+30h] [bp-54h]
  int v807; // [sp+30h] [bp-54h]
  int v808; // [sp+30h] [bp-54h]
  int v809; // [sp+30h] [bp-54h]
  int v810; // [sp+30h] [bp-54h]
  int v811; // [sp+30h] [bp-54h]
  int v812; // [sp+30h] [bp-54h]
  int v813; // [sp+30h] [bp-54h]
  int v814; // [sp+30h] [bp-54h]
  int v815; // [sp+30h] [bp-54h]
  int v816; // [sp+30h] [bp-54h]
  int v817; // [sp+30h] [bp-54h]
  int v818; // [sp+30h] [bp-54h]
  int v819; // [sp+30h] [bp-54h]
  int v820; // [sp+30h] [bp-54h]
  int v821; // [sp+30h] [bp-54h]
  int v822; // [sp+30h] [bp-54h]
  int v823; // [sp+34h] [bp-50h]
  int v824; // [sp+34h] [bp-50h]
  int v825; // [sp+34h] [bp-50h]
  int v826; // [sp+34h] [bp-50h]
  int v827; // [sp+34h] [bp-50h]
  int v828; // [sp+34h] [bp-50h]
  int v829; // [sp+34h] [bp-50h]
  int v830; // [sp+34h] [bp-50h]
  int v831; // [sp+34h] [bp-50h]
  int v832; // [sp+34h] [bp-50h]
  int v833; // [sp+34h] [bp-50h]
  int v834; // [sp+34h] [bp-50h]
  int v835; // [sp+34h] [bp-50h]
  int v836; // [sp+34h] [bp-50h]
  int v837; // [sp+34h] [bp-50h]
  int v838; // [sp+34h] [bp-50h]
  int v839; // [sp+34h] [bp-50h]
  int v840; // [sp+34h] [bp-50h]
  int v841; // [sp+34h] [bp-50h]
  int v842; // [sp+34h] [bp-50h]
  int v843; // [sp+34h] [bp-50h]
  int v844; // [sp+34h] [bp-50h]
  int v845; // [sp+34h] [bp-50h]
  int v846; // [sp+34h] [bp-50h]
  int v847; // [sp+34h] [bp-50h]
  int v848; // [sp+34h] [bp-50h]
  int v849; // [sp+34h] [bp-50h]
  int v850; // [sp+38h] [bp-4Ch]
  int v851; // [sp+38h] [bp-4Ch]
  int v852; // [sp+38h] [bp-4Ch]
  int v853; // [sp+38h] [bp-4Ch]
  int v854; // [sp+38h] [bp-4Ch]
  int v855; // [sp+38h] [bp-4Ch]
  int v856; // [sp+38h] [bp-4Ch]
  int v857; // [sp+38h] [bp-4Ch]
  int v858; // [sp+38h] [bp-4Ch]
  int v859; // [sp+38h] [bp-4Ch]
  int v860; // [sp+38h] [bp-4Ch]
  int v861; // [sp+38h] [bp-4Ch]
  int v862; // [sp+38h] [bp-4Ch]
  int v863; // [sp+38h] [bp-4Ch]
  int v864; // [sp+38h] [bp-4Ch]
  int v865; // [sp+38h] [bp-4Ch]
  int v866; // [sp+38h] [bp-4Ch]
  int v867; // [sp+38h] [bp-4Ch]
  int v868; // [sp+38h] [bp-4Ch]
  int v869; // [sp+38h] [bp-4Ch]
  int v870; // [sp+38h] [bp-4Ch]
  int v871; // [sp+38h] [bp-4Ch]
  int v872; // [sp+38h] [bp-4Ch]
  int v873; // [sp+38h] [bp-4Ch]
  int v874; // [sp+38h] [bp-4Ch]
  int v875; // [sp+38h] [bp-4Ch]
  int v876; // [sp+38h] [bp-4Ch]
  int v877; // [sp+3Ch] [bp-48h]
  int v878; // [sp+3Ch] [bp-48h]
  int v879; // [sp+3Ch] [bp-48h]
  int v880; // [sp+3Ch] [bp-48h]
  int v881; // [sp+3Ch] [bp-48h]
  int v882; // [sp+3Ch] [bp-48h]
  int v883; // [sp+3Ch] [bp-48h]
  int v884; // [sp+3Ch] [bp-48h]
  int v885; // [sp+3Ch] [bp-48h]
  int v886; // [sp+3Ch] [bp-48h]
  int v887; // [sp+3Ch] [bp-48h]
  int v888; // [sp+3Ch] [bp-48h]
  int v889; // [sp+3Ch] [bp-48h]
  int v890; // [sp+3Ch] [bp-48h]
  int v891; // [sp+3Ch] [bp-48h]
  int v892; // [sp+3Ch] [bp-48h]
  int v893; // [sp+3Ch] [bp-48h]
  int v894; // [sp+3Ch] [bp-48h]
  int v895; // [sp+3Ch] [bp-48h]
  int v896; // [sp+3Ch] [bp-48h]
  int v897; // [sp+3Ch] [bp-48h]
  int v898; // [sp+3Ch] [bp-48h]
  int v899; // [sp+3Ch] [bp-48h]
  int v900; // [sp+40h] [bp-44h]
  int v901; // [sp+40h] [bp-44h]
  int v902; // [sp+40h] [bp-44h]
  int v903; // [sp+40h] [bp-44h]
  int v904; // [sp+40h] [bp-44h]
  int v905; // [sp+40h] [bp-44h]
  int v906; // [sp+40h] [bp-44h]
  int v907; // [sp+40h] [bp-44h]
  int v908; // [sp+40h] [bp-44h]
  int v909; // [sp+40h] [bp-44h]
  int v910; // [sp+40h] [bp-44h]
  int v911; // [sp+40h] [bp-44h]
  int v912; // [sp+40h] [bp-44h]
  int v913; // [sp+40h] [bp-44h]
  int v914; // [sp+40h] [bp-44h]
  int v915; // [sp+40h] [bp-44h]
  int v916; // [sp+40h] [bp-44h]
  int v917; // [sp+40h] [bp-44h]
  int v918; // [sp+40h] [bp-44h]
  int v919; // [sp+40h] [bp-44h]
  int v920; // [sp+40h] [bp-44h]
  int v921; // [sp+40h] [bp-44h]
  int v922; // [sp+40h] [bp-44h]
  int v923; // [sp+40h] [bp-44h]
  int v924; // [sp+40h] [bp-44h]
  int v925; // [sp+40h] [bp-44h]
  int v926; // [sp+40h] [bp-44h]
  int v927; // [sp+44h] [bp-40h]
  int v928; // [sp+44h] [bp-40h]
  int v929; // [sp+44h] [bp-40h]
  int v930; // [sp+44h] [bp-40h]
  int v931; // [sp+44h] [bp-40h]
  int v932; // [sp+44h] [bp-40h]
  int v933; // [sp+44h] [bp-40h]
  int v934; // [sp+44h] [bp-40h]
  int v935; // [sp+44h] [bp-40h]
  int v936; // [sp+44h] [bp-40h]
  int v937; // [sp+44h] [bp-40h]
  int v938; // [sp+44h] [bp-40h]
  int v939; // [sp+44h] [bp-40h]
  int v940; // [sp+44h] [bp-40h]
  int v941; // [sp+44h] [bp-40h]
  int v942; // [sp+44h] [bp-40h]
  int v943; // [sp+44h] [bp-40h]
  int v944; // [sp+44h] [bp-40h]
  int v945; // [sp+44h] [bp-40h]
  int v946; // [sp+44h] [bp-40h]
  int v947; // [sp+44h] [bp-40h]
  int v948; // [sp+44h] [bp-40h]
  int v949; // [sp+44h] [bp-40h]
  int v950; // [sp+44h] [bp-40h]
  int v951; // [sp+44h] [bp-40h]
  int v952; // [sp+44h] [bp-40h]
  int v953; // [sp+44h] [bp-40h]
  int v954; // [sp+44h] [bp-40h]
  int v955; // [sp+48h] [bp-3Ch]
  int v956; // [sp+48h] [bp-3Ch]
  int v957; // [sp+48h] [bp-3Ch]
  int v958; // [sp+48h] [bp-3Ch]
  int v959; // [sp+48h] [bp-3Ch]
  int v960; // [sp+48h] [bp-3Ch]
  int v961; // [sp+48h] [bp-3Ch]
  int v962; // [sp+48h] [bp-3Ch]
  int v963; // [sp+48h] [bp-3Ch]
  int v964; // [sp+48h] [bp-3Ch]
  int v965; // [sp+48h] [bp-3Ch]
  int v966; // [sp+48h] [bp-3Ch]
  int v967; // [sp+48h] [bp-3Ch]
  int v968; // [sp+48h] [bp-3Ch]
  int v969; // [sp+48h] [bp-3Ch]
  int v970; // [sp+48h] [bp-3Ch]
  int v971; // [sp+48h] [bp-3Ch]
  int v972; // [sp+48h] [bp-3Ch]
  int v973; // [sp+48h] [bp-3Ch]
  int v974; // [sp+48h] [bp-3Ch]
  int v975; // [sp+48h] [bp-3Ch]
  int v976; // [sp+48h] [bp-3Ch]
  int v977; // [sp+48h] [bp-3Ch]
  int v978; // [sp+48h] [bp-3Ch]
  int v979; // [sp+4Ch] [bp-38h]
  int v980; // [sp+4Ch] [bp-38h]
  int v981; // [sp+4Ch] [bp-38h]
  int v982; // [sp+4Ch] [bp-38h]
  int v983; // [sp+4Ch] [bp-38h]
  int v984; // [sp+4Ch] [bp-38h]
  int v985; // [sp+4Ch] [bp-38h]
  int v986; // [sp+4Ch] [bp-38h]
  int v987; // [sp+4Ch] [bp-38h]
  int v988; // [sp+4Ch] [bp-38h]
  int v989; // [sp+4Ch] [bp-38h]
  int v990; // [sp+4Ch] [bp-38h]
  int v991; // [sp+4Ch] [bp-38h]
  int v992; // [sp+4Ch] [bp-38h]
  int v993; // [sp+4Ch] [bp-38h]
  int v994; // [sp+4Ch] [bp-38h]
  int v995; // [sp+4Ch] [bp-38h]
  int v996; // [sp+4Ch] [bp-38h]
  int v997; // [sp+4Ch] [bp-38h]
  int v998; // [sp+4Ch] [bp-38h]
  int v999; // [sp+4Ch] [bp-38h]
  int v1000; // [sp+4Ch] [bp-38h]
  int v1001; // [sp+4Ch] [bp-38h]
  int v1002; // [sp+50h] [bp-34h]
  int v1003; // [sp+50h] [bp-34h]
  int v1004; // [sp+50h] [bp-34h]
  int v1005; // [sp+50h] [bp-34h]
  int v1006; // [sp+50h] [bp-34h]
  int v1007; // [sp+50h] [bp-34h]
  int v1008; // [sp+50h] [bp-34h]
  int v1009; // [sp+50h] [bp-34h]
  int v1010; // [sp+50h] [bp-34h]
  int v1011; // [sp+50h] [bp-34h]
  int v1012; // [sp+50h] [bp-34h]
  int v1013; // [sp+50h] [bp-34h]
  int v1014; // [sp+50h] [bp-34h]
  int v1015; // [sp+50h] [bp-34h]
  int v1016; // [sp+50h] [bp-34h]
  int v1017; // [sp+50h] [bp-34h]
  int v1018; // [sp+50h] [bp-34h]
  int v1019; // [sp+50h] [bp-34h]
  int v1020; // [sp+50h] [bp-34h]
  int v1021; // [sp+50h] [bp-34h]
  int v1022; // [sp+50h] [bp-34h]
  int v1023; // [sp+50h] [bp-34h]
  int v1024; // [sp+50h] [bp-34h]
  int v1025; // [sp+50h] [bp-34h]
  int v1026; // [sp+54h] [bp-30h]
  int v1027; // [sp+54h] [bp-30h]
  int v1028; // [sp+54h] [bp-30h]
  int v1029; // [sp+54h] [bp-30h]
  int v1030; // [sp+54h] [bp-30h]
  int v1031; // [sp+54h] [bp-30h]
  int v1032; // [sp+54h] [bp-30h]
  int v1033; // [sp+54h] [bp-30h]
  int v1034; // [sp+54h] [bp-30h]
  int v1035; // [sp+54h] [bp-30h]
  int v1036; // [sp+54h] [bp-30h]
  int v1037; // [sp+54h] [bp-30h]
  int v1038; // [sp+54h] [bp-30h]
  int v1039; // [sp+54h] [bp-30h]
  int v1040; // [sp+54h] [bp-30h]
  int v1041; // [sp+54h] [bp-30h]
  int v1042; // [sp+54h] [bp-30h]
  int v1043; // [sp+54h] [bp-30h]
  int v1044; // [sp+54h] [bp-30h]
  int v1045; // [sp+54h] [bp-30h]
  int v1046; // [sp+54h] [bp-30h]
  int v1047; // [sp+54h] [bp-30h]
  int v1048; // [sp+54h] [bp-30h]
  int v1049; // [sp+54h] [bp-30h]
  int v1050; // [sp+54h] [bp-30h]
  int v1051; // [sp+58h] [bp-2Ch]
  int v1052; // [sp+58h] [bp-2Ch]
  int v1053; // [sp+58h] [bp-2Ch]
  int v1054; // [sp+58h] [bp-2Ch]
  int v1055; // [sp+58h] [bp-2Ch]
  int v1056; // [sp+58h] [bp-2Ch]
  int v1057; // [sp+58h] [bp-2Ch]
  int v1058; // [sp+58h] [bp-2Ch]
  int v1059; // [sp+58h] [bp-2Ch]
  int v1060; // [sp+58h] [bp-2Ch]
  int v1061; // [sp+58h] [bp-2Ch]
  int v1062; // [sp+58h] [bp-2Ch]
  int v1063; // [sp+58h] [bp-2Ch]
  int v1064; // [sp+58h] [bp-2Ch]
  int v1065; // [sp+58h] [bp-2Ch]
  int v1066; // [sp+58h] [bp-2Ch]
  int v1067; // [sp+58h] [bp-2Ch]
  int v1068; // [sp+58h] [bp-2Ch]
  int v1069; // [sp+58h] [bp-2Ch]
  int v1070; // [sp+58h] [bp-2Ch]
  int v1071; // [sp+5Ch] [bp-28h]
  int v1072; // [sp+5Ch] [bp-28h]
  int v1073; // [sp+5Ch] [bp-28h]
  int v1074; // [sp+5Ch] [bp-28h]
  int v1075; // [sp+5Ch] [bp-28h]
  int v1076; // [sp+5Ch] [bp-28h]
  int v1077; // [sp+5Ch] [bp-28h]
  int v1078; // [sp+5Ch] [bp-28h]
  int v1079; // [sp+5Ch] [bp-28h]
  int v1080; // [sp+5Ch] [bp-28h]
  int v1081; // [sp+5Ch] [bp-28h]
  int v1082; // [sp+5Ch] [bp-28h]
  int v1083; // [sp+5Ch] [bp-28h]
  int v1084; // [sp+5Ch] [bp-28h]
  int v1085; // [sp+5Ch] [bp-28h]
  int v1086; // [sp+5Ch] [bp-28h]
  int v1087; // [sp+5Ch] [bp-28h]
  int v1088; // [sp+5Ch] [bp-28h]
  int v1089; // [sp+60h] [bp-24h]
  int v1090; // [sp+60h] [bp-24h]
  int v1091; // [sp+60h] [bp-24h]
  int v1092; // [sp+60h] [bp-24h]
  int v1093; // [sp+60h] [bp-24h]
  int v1094; // [sp+60h] [bp-24h]
  int v1095; // [sp+60h] [bp-24h]
  int v1096; // [sp+60h] [bp-24h]
  int v1097; // [sp+60h] [bp-24h]
  int v1098; // [sp+60h] [bp-24h]
  int v1099; // [sp+60h] [bp-24h]
  int v1100; // [sp+60h] [bp-24h]
  int v1101; // [sp+60h] [bp-24h]
  int v1102; // [sp+60h] [bp-24h]
  int v1103; // [sp+60h] [bp-24h]
  int v1104; // [sp+60h] [bp-24h]
  int v1105; // [sp+64h] [bp-20h]
  int v1106; // [sp+64h] [bp-20h]
  int v1107; // [sp+64h] [bp-20h]
  int v1108; // [sp+64h] [bp-20h]
  int v1109; // [sp+68h] [bp-1Ch]
  int v1110; // [sp+68h] [bp-1Ch]
  int v1111; // [sp+6Ch] [bp-18h]
  int v1112; // [sp+70h] [bp-14h]
  int v1113; // [sp+74h] [bp-10h]
  _DWORD *v1114; // [sp+78h] [bp-Ch]

  v6 = a1[8];
  *((_BYTE *)a1 + v6) = (128 >> a3) | a2 & -(128 >> a3);
  memset((char *)a1 + v6 + 1, 0, 31 - v6);
  v478 = 0;
  v767 = a1[20];
  v796 = a1[21];
  v740 = a1[18];
  v823 = a1[22];
  v1089 = a1[23];
  v1105 = a1[17];
  v1109 = a1[19];
  v850 = a1[24];
  v1114 = a1;
  v570 = a1[31];
  v510 = a1[40];
  v539 = a1[32];
  v602 = a1[38];
  v479 = a1[9] ^ *a1;
  v629 = a1[10] ^ a1[1];
  v877 = a1[26];
  v7 = a1[35];
  v8 = a1[33];
  v655 = a1[13] ^ a1[4];
  v683 = a1[14] ^ a1[5];
  v900 = a1[30];
  v927 = a1[29];
  v9 = a1[28];
  v10 = a1[34];
  v712 = a1[16] ^ a1[7];
  v11 = a1[36];
  v12 = a1[25];
  v979 = a1[15] ^ a1[6];
  v13 = a1[27];
  v14 = a1[37];
  v955 = a1[39];
  v15 = a1[11] ^ a1[2];
  v16 = a1[12] ^ a1[3];
  v18 = v1105;
  v17 = v1109;
  while ( 1 )
  {
    v1026 = v16 + v9;
    v19 = v8 + v18;
    v1002 = v12 + v479;
    v20 = v13 + v15;
    v1051 = v7 + v17;
    v928 = v927 + v655;
    v878 = v629 + v877;
    v21 = v1089;
    v901 = v900 + v683;
    v571 = v570 + v979;
    v540 = v539 + v712;
    v22 = v10 + v740;
    v23 = v11 + v767;
    v1071 = v796 + v14;
    v24 = v602 + v823;
    v25 = v955 + v1089;
    v26 = v510 + v850;
    v511 = v1002 ^ __ROR4__(v18, 25);
    v956 = v19 ^ __ROR4__(v479, 25);
    v603 = v20 ^ __ROR4__(v17, 25);
    v480 = v878 ^ __ROR4__(v740, 25);
    v1090 = v1051 ^ __ROR4__(v15, 25);
    v741 = v22 ^ __ROR4__(v629, 25);
    v630 = (v16 + v9) ^ __ROR4__(v767, 25);
    v768 = v23 ^ __ROR4__(v16, 25);
    v27 = v928 ^ __ROR4__(v796, 25);
    v28 = v1071 ^ __ROR4__(v655, 25);
    v656 = v901 ^ __ROR4__(v823, 25);
    v1106 = v571 ^ __ROR4__(v21, 25);
    v29 = v24 ^ __ROR4__(v683, 25);
    v684 = v540 ^ __ROR4__(v850, 25);
    v30 = v25 ^ __ROR4__(v979, 25);
    v31 = v26 ^ __ROR4__(v712, 25);
    v32 = v26 + v29;
    v713 = v31;
    v797 = v20 + v511;
    v824 = v1002 + v603;
    v980 = v1051 + v956;
    v33 = v19 + v1090;
    v34 = v878 + v630;
    v35 = v22 + v768;
    v879 = v25 + v28;
    v36 = v23 + v741;
    v572 = v571 + v27;
    v37 = v36 ^ __ROR4__(v29, 21);
    v851 = v928 + v1106;
    v929 = v1071 + v30;
    v38 = v540 + v656;
    v541 = v901 + v684;
    v39 = v24 + v31;
    v902 = v797 ^ __ROR4__(v27, 21);
    v40 = v1002 + v603;
    v1003 = v572 ^ __ROR4__(v511, 21);
    v512 = v40 ^ __ROR4__(v1106, 21);
    v41 = v1026 + v480;
    v604 = v851 ^ __ROR4__(v603, 21);
    v42 = v956;
    v43 = (v1051 + v956) ^ __ROR4__(v28, 21);
    v957 = v33 ^ __ROR4__(v30, 21);
    v1027 = v43;
    v1107 = v879 ^ __ROR4__(v42, 21);
    v1052 = (v1071 + v30) ^ __ROR4__(v1090, 21);
    v44 = v41 ^ __ROR4__(v656, 21);
    v45 = v34 ^ __ROR4__(v684, 21);
    v46 = v38 ^ __ROR4__(v480, 21);
    v481 = v541 ^ __ROR4__(v630, 21);
    v631 = v35 ^ __ROR4__(v713, 21);
    v47 = v32 ^ __ROR4__(v741, 21);
    v657 = v39 ^ __ROR4__(v768, 21);
    v685 = v41 + v902;
    v714 = v797 + v44;
    v742 = v38 + v1003;
    v769 = v572 + v46;
    v48 = v34 + v512;
    v573 = v824 + v45;
    v1091 = v541 + v604;
    v542 = v851 + v481;
    v49 = v36 + v1027;
    v50 = v32 + v1107;
    v798 = v980 + v37;
    v825 = v879 + v47;
    v51 = v33 + v631;
    v52 = v35 + v957;
    v53 = v39 + v1052;
    v54 = v929 + v657;
    v852 = (v41 + v902) ^ __ROR4__(v1027, 25);
    v55 = v49 ^ __ROR4__(v902, 25);
    v880 = v714 ^ __ROR4__(v37, 25);
    v981 = (v980 + v37) ^ __ROR4__(v44, 25);
    v1028 = v742 ^ __ROR4__(v1107, 25);
    v1004 = v50 ^ __ROR4__(v1003, 25);
    v930 = v769 ^ __ROR4__(v47, 25);
    v56 = v825 ^ __ROR4__(v46, 25);
    v903 = v48 ^ __ROR4__(v957, 25);
    v57 = v52 ^ __ROR4__(v512, 25);
    v58 = v52 + v55;
    v958 = v57;
    v59 = v573 ^ __ROR4__(v631, 25);
    v632 = v51 ^ __ROR4__(v45, 25);
    v513 = v59;
    v1053 = v1091 ^ __ROR4__(v1052, 25);
    v60 = v53 ^ __ROR4__(v604, 25);
    v61 = v50 + v60;
    v62 = v542 ^ __ROR4__(v657, 25);
    v63 = v54 ^ __ROR4__(v481, 25);
    v64 = v54 + v56;
    v482 = v63;
    v605 = v852 + v48;
    v658 = v685 + v903;
    v65 = v49 + v958;
    v574 = v573 + v880;
    v686 = v714 + v513;
    v66 = v51 + v981;
    v67 = v798;
    v799 = v60;
    v68 = v66 ^ __ROR4__(v56, 21);
    v69 = v1091 + v1028;
    v1072 = v67 + v632;
    v715 = v742 + v1053;
    v743 = v53 + v1004;
    v70 = v542 + v930;
    v543 = v769 + v62;
    v71 = v825 + v63;
    v770 = v605 ^ __ROR4__(v1028, 21);
    v853 = (v1091 + v1028) ^ __ROR4__(v852, 21);
    v826 = v658 ^ __ROR4__(v1053, 21);
    v904 = v715 ^ __ROR4__(v903, 21);
    v72 = v58 ^ __ROR4__(v1004, 21);
    v73 = v58 + v68;
    v1029 = v743 ^ __ROR4__(v55, 21);
    v1005 = v65 ^ __ROR4__(v799, 21);
    v74 = v686 ^ __ROR4__(v62, 21);
    v959 = v61 ^ __ROR4__(v958, 21);
    v75 = v930;
    v931 = v70;
    v800 = v574 ^ __ROR4__(v75, 21);
    v76 = v70 ^ __ROR4__(v880, 21);
    v77 = v69 + v76;
    v78 = v543 ^ __ROR4__(v513, 21);
    v514 = v64 ^ __ROR4__(v981, 21);
    v483 = (v67 + v632) ^ __ROR4__(v482, 21);
    v633 = v71 ^ __ROR4__(v632, 21);
    v575 = v574 + v770;
    v606 = v605 + v800;
    v881 = v931 + v853;
    v687 = v686 + v826;
    v659 = v658 + v74;
    v544 = v543 + v904;
    v79 = v66 + v72;
    v716 = v715 + v78;
    v744 = v743 + v514;
    v80 = v65 + v483;
    v81 = v80 ^ __ROR4__(v74, 25);
    v82 = v71 + v959;
    v83 = v61 + v633;
    v84 = v83 ^ __ROR4__(v78, 25);
    v982 = v575 ^ __ROR4__(v72, 25);
    v85 = v606 ^ __ROR4__(v68, 25);
    v1054 = v79 ^ __ROR4__(v770, 25);
    v86 = v73 ^ __ROR4__(v800, 25);
    v87 = v73 + v81;
    v88 = (v931 + v853) ^ __ROR4__(v1029, 25);
    v854 = (v64 + v1029) ^ __ROR4__(v853, 25);
    v771 = v77 ^ __ROR4__(v514, 25);
    v89 = v744 ^ __ROR4__(v76, 25);
    v90 = v83 + v89;
    v515 = v687 ^ __ROR4__(v1005, 25);
    v827 = (v1072 + v1005) ^ __ROR4__(v826, 25);
    v484 = v659 ^ __ROR4__(v483, 25);
    v801 = v544 ^ __ROR4__(v959, 25);
    v905 = v82 ^ __ROR4__(v904, 25);
    v634 = v716 ^ __ROR4__(v633, 25);
    v688 = v687 + v982;
    v960 = v575 + v515;
    v1006 = v1072 + v1005 + v1054;
    v91 = v79 + v827;
    v576 = v659 + v85;
    v92 = v606 + v484;
    v93 = v80 + v86;
    v94 = v93 ^ __ROR4__(v89, 21);
    v545 = v544 + v88;
    v607 = v881 + v801;
    v660 = v854 + v82;
    v882 = v64 + v1029 + v905;
    v95 = v716 + v771;
    v96 = (v716 + v771) ^ __ROR4__(v85, 21);
    v97 = v77 + v634;
    v717 = v744 + v84;
    v98 = v87 ^ __ROR4__(v84, 21);
    v745 = v688 ^ __ROR4__(v88, 21);
    v932 = v545 ^ __ROR4__(v982, 21);
    v802 = v960 ^ __ROR4__(v801, 21);
    v983 = v607 ^ __ROR4__(v515, 21);
    v1092 = v1006 ^ __ROR4__(v854, 21);
    v1030 = v660 ^ __ROR4__(v1054, 21);
    v855 = v91 ^ __ROR4__(v905, 21);
    v828 = v882 ^ __ROR4__(v827, 21);
    v99 = v576 ^ __ROR4__(v771, 21);
    v485 = v97 ^ __ROR4__(v484, 21);
    v1055 = v92 ^ __ROR4__(v634, 21);
    v100 = v717 ^ __ROR4__(v81, 21);
    v577 = v576 + v745;
    v101 = v90 ^ __ROR4__(v86, 21);
    v689 = v688 + v99;
    v772 = v95 + v932;
    v906 = v545 + v96;
    v546 = v960 + v1055;
    v102 = v92 + v802;
    v103 = v607 + v485;
    v104 = v97 + v983;
    v608 = v1006 + v94;
    v961 = v90 + v1030;
    v105 = v93 + v1092;
    v661 = v660 + v101;
    v106 = v87 + v855;
    v107 = v91 + v98;
    v718 = v717 + v828;
    v108 = v882 + v100;
    v109 = v103 ^ __ROR4__(v100, 25);
    v883 = v577 ^ __ROR4__(v1092, 25);
    v1007 = v105 ^ __ROR4__(v745, 25);
    v110 = v689 ^ __ROR4__(v94, 25);
    v111 = v608 ^ __ROR4__(v99, 25);
    v1073 = v772 ^ __ROR4__(v1030, 25);
    v933 = v961 ^ __ROR4__(v932, 25);
    v746 = v906 ^ __ROR4__(v101, 25);
    v112 = v102 ^ __ROR4__(v855, 25);
    v113 = v661 ^ __ROR4__(v96, 25);
    v803 = v106 ^ __ROR4__(v802, 25);
    v516 = v546 ^ __ROR4__(v98, 25);
    v114 = v107 ^ __ROR4__(v1055, 25);
    v115 = v107 + v111;
    v856 = v114;
    v635 = v104 ^ __ROR4__(v828, 25);
    v829 = v718 ^ __ROR4__(v983, 25);
    v116 = v485;
    v486 = v102 + v883;
    v578 = v577 + v112;
    v117 = v108 ^ __ROR4__(v116, 25);
    v118 = v106 + v1007;
    v119 = v108 + v113;
    v120 = v105 + v803;
    v121 = v119 ^ __ROR4__(v111, 21);
    v1056 = v546 + v110;
    v122 = v104 + v1073;
    v123 = v115 ^ __ROR4__(v113, 21);
    v547 = v689 + v516;
    v984 = v608 + v856;
    v609 = v772 + v635;
    v719 = v718 + v933;
    v773 = v961 + v829;
    v124 = v103 + v746;
    v125 = v124 ^ __ROR4__(v110, 21);
    v690 = v906 + v109;
    v662 = v661 + v117;
    v907 = (v102 + v883) ^ __ROR4__(v1073, 21);
    v884 = v122 ^ __ROR4__(v883, 21);
    v636 = v578 ^ __ROR4__(v635, 21);
    v962 = v609 ^ __ROR4__(v112, 21);
    v126 = v118 ^ __ROR4__(v933, 21);
    v127 = v118 + v123;
    v1074 = v126;
    v1008 = v719 ^ __ROR4__(v1007, 21);
    v830 = v120 ^ __ROR4__(v829, 21);
    v1031 = v773 ^ __ROR4__(v803, 21);
    v128 = v1056 ^ __ROR4__(v746, 21);
    v747 = v547 ^ __ROR4__(v109, 21);
    v517 = v690 ^ __ROR4__(v516, 21);
    v934 = v984 ^ __ROR4__(v117, 21);
    v129 = v662 ^ __ROR4__(v856, 21);
    v857 = v1056 + v907;
    v130 = v120 + v934;
    v1057 = v124 + v884;
    v131 = v122 + v125;
    v132 = v486 + v128;
    v133 = (v486 + v128) ^ __ROR4__(v123, 25);
    v487 = v547 + v636;
    v134 = v578 + v747;
    v548 = v690 + v962;
    v579 = v609 + v517;
    v610 = v119 + v1008;
    v135 = v115 + v1074;
    v136 = v719 + v121;
    v137 = v131 ^ __ROR4__(v121, 25);
    v691 = v136;
    v138 = v984 + v830;
    v663 = v662 + v1031;
    v720 = v773 + v129;
    v985 = v127 ^ __ROR4__(v128, 25);
    v774 = v857 ^ __ROR4__(v1074, 25);
    v139 = v134 ^ __ROR4__(v934, 25);
    v140 = v134 + v133;
    v908 = v135 ^ __ROR4__(v907, 25);
    v1075 = v1057 ^ __ROR4__(v1008, 25);
    v1009 = v610 ^ __ROR4__(v884, 25);
    v141 = v136 ^ __ROR4__(v125, 25);
    v142 = v636;
    v637 = v139;
    v804 = v487 ^ __ROR4__(v830, 25);
    v831 = v138 ^ __ROR4__(v142, 25);
    v885 = v130 ^ __ROR4__(v747, 25);
    v748 = v548 ^ __ROR4__(v1031, 25);
    v935 = v663 ^ __ROR4__(v962, 25);
    v143 = v579 ^ __ROR4__(v129, 25);
    v144 = v131 + v143;
    v145 = v720 ^ __ROR4__(v517, 25);
    v488 = v487 + v774;
    v518 = v857 + v804;
    v963 = v138 + v908;
    v146 = v135 + v831;
    v858 = v132 + v637;
    v147 = v130 + v985;
    v148 = v127 + v885;
    v549 = v548 + v1075;
    v149 = v1057 + v748;
    v664 = v663 + v1009;
    v1032 = v610 + v935;
    v580 = v579 + v137;
    v150 = v140 ^ __ROR4__(v137, 21);
    v151 = v720 + v141;
    v152 = v147 ^ __ROR4__(v141, 21);
    v611 = v151;
    v153 = v691;
    v692 = v488 ^ __ROR4__(v1075, 21);
    v154 = v153 + v145;
    v155 = v148 ^ __ROR4__(v145, 21);
    v775 = v549 ^ __ROR4__(v774, 21);
    v749 = v518 ^ __ROR4__(v748, 21);
    v1058 = v149 ^ __ROR4__(v804, 21);
    v1093 = v963 ^ __ROR4__(v1009, 21);
    v1010 = v664 ^ __ROR4__(v908, 21);
    v156 = v146 ^ __ROR4__(v935, 21);
    v157 = v146 + v155;
    v909 = v156;
    v832 = v1032 ^ __ROR4__(v831, 21);
    v805 = v580 ^ __ROR4__(v133, 21);
    v489 = v488 + v150;
    v158 = (v132 + v637) ^ __ROR4__(v143, 21);
    v638 = v144 ^ __ROR4__(v637, 21);
    v159 = v611 ^ __ROR4__(v985, 21);
    v160 = v885;
    v886 = v140 + v692;
    v581 = v580 + v775;
    v161 = __ROR4__(v160, 21);
    v1076 = v158;
    v936 = v549 + v805;
    v550 = v858 + v749;
    v162 = v144 + v1058;
    v163 = v518 + v158;
    v164 = v147 + v1093;
    v165 = v149 + v638;
    v519 = v963 + v152;
    v612 = v611 + v1010;
    v665 = v664 + v159;
    v166 = v148 + v909;
    v167 = v1032 + (v154 ^ v161);
    v168 = v165 ^ __ROR4__(v154 ^ v161, 25);
    v169 = v154 + v832;
    v964 = v886 ^ __ROR4__(v1093, 25);
    v1033 = v164 ^ __ROR4__(v692, 25);
    v693 = v489 ^ __ROR4__(v152, 25);
    v170 = v519 ^ __ROR4__(v150, 25);
    v986 = v581 ^ __ROR4__(v1010, 25);
    v1011 = v612 ^ __ROR4__(v775, 25);
    v171 = v936 ^ __ROR4__(v159, 25);
    v172 = v165 + v171;
    v173 = v665 ^ __ROR4__(v805, 25);
    v721 = (v858 + v749) ^ __ROR4__(v909, 25);
    v776 = v166 ^ __ROR4__(v749, 25);
    v750 = v163 ^ __ROR4__(v155, 25);
    v174 = v157 ^ __ROR4__(v1076, 25);
    v175 = v157 + v170;
    v806 = v174;
    v910 = v162 ^ __ROR4__(v832, 25);
    v833 = v169 ^ __ROR4__(v1058, 25);
    v176 = __ROR4__(v638, 25);
    v551 = v550 + v964;
    v639 = v886 + v721;
    v887 = v166 + v1033;
    v177 = v164 + v776;
    v178 = v163 + v693;
    v490 = v489 + v750;
    v179 = v519 + v174;
    v180 = v910;
    v181 = v162 + v986;
    v520 = v581 + v910;
    v911 = v169 + v1011;
    v1059 = v612 + v833;
    v582 = v936 + v168;
    v182 = v665 + (v167 ^ v176);
    v183 = v179 ^ __ROR4__(v167 ^ v176, 21);
    v666 = v551 ^ __ROR4__(v986, 21);
    v937 = v181 ^ __ROR4__(v964, 21);
    v859 = v639 ^ __ROR4__(v180, 21);
    v965 = v520 ^ __ROR4__(v721, 21);
    v1094 = v887 ^ __ROR4__(v1011, 21);
    v987 = v911 ^ __ROR4__(v1033, 21);
    v184 = v177 ^ __ROR4__(v833, 21);
    v185 = v177 + v183;
    v834 = v184;
    v1012 = v1059 ^ __ROR4__(v776, 21);
    v722 = v172 ^ __ROR4__(v693, 21);
    v186 = v178 ^ __ROR4__(v171, 21);
    v694 = v490 ^ __ROR4__(v168, 21);
    v777 = v175 ^ __ROR4__(v173, 21);
    v751 = v582 ^ __ROR4__(v750, 21);
    v187 = (v167 + v173) ^ __ROR4__(v170, 21);
    v188 = v182 ^ __ROR4__(v806, 21);
    v189 = v181 + v722;
    v807 = v178 + v666;
    v552 = v551 + v186;
    v190 = v172 + v937;
    v491 = v490 + v859;
    v191 = v639 + v694;
    v192 = (v639 + v694) ^ __ROR4__(v183, 25);
    v583 = v582 + v965;
    v521 = v520 + v751;
    v640 = v887 + v777;
    v193 = v175 + v1094;
    v613 = v167 + v173 + v987;
    v888 = v911 + v187;
    v1077 = v1059 + v188;
    v194 = v179 + v834;
    v195 = v182 + v1012;
    v912 = v807 ^ __ROR4__(v1094, 25);
    v1034 = v193 ^ __ROR4__(v666, 25);
    v196 = v777;
    v778 = v189 ^ __ROR4__(v187, 25);
    v197 = v552 ^ __ROR4__(v196, 25);
    v198 = v191 + v197;
    v1060 = v640 ^ __ROR4__(v186, 25);
    v938 = v613 ^ __ROR4__(v937, 25);
    v199 = v888 ^ __ROR4__(v722, 25);
    v667 = v491 ^ __ROR4__(v834, 25);
    v723 = v192;
    v835 = v194 ^ __ROR4__(v859, 25);
    v860 = v185 ^ __ROR4__(v694, 25);
    v695 = v583 ^ __ROR4__(v1012, 25);
    v492 = v491 + v912;
    v966 = v195 ^ __ROR4__(v965, 25);
    v200 = v521 ^ __ROR4__(v188, 25);
    v201 = v751;
    v752 = v807 + v667;
    v202 = v189 + v200;
    v808 = v194 + v1034;
    v203 = v1077 ^ __ROR4__(v201, 25);
    v204 = v193 + v835;
    v205 = v185 + v1060;
    v206 = v190 ^ __ROR4__(v987, 25);
    v553 = v552 + v723;
    v207 = v640 + v860;
    v584 = v583 + v206;
    v208 = v190 + v695;
    v641 = v195 + v938;
    v988 = v613 + v966;
    v522 = v521 + v778;
    v209 = v1077 + v199;
    v210 = v205 ^ __ROR4__(v199, 21);
    v614 = v209;
    v211 = v888 + v203;
    v212 = v207 ^ __ROR4__(v203, 21);
    v889 = v492 ^ __ROR4__(v206, 21);
    v913 = v584 ^ __ROR4__(v912, 21);
    v696 = v752 ^ __ROR4__(v695, 21);
    v1013 = v208 ^ __ROR4__(v667, 21);
    v1095 = v808 ^ __ROR4__(v938, 21);
    v1035 = v641 ^ __ROR4__(v1034, 21);
    v213 = v204 ^ __ROR4__(v966, 21);
    v214 = v204 + v212;
    v939 = v213;
    v836 = v988 ^ __ROR4__(v835, 21);
    v215 = v198 ^ __ROR4__(v778, 21);
    v779 = v522 ^ __ROR4__(v197, 21);
    v724 = v202 ^ __ROR4__(v723, 21);
    v1078 = v553 ^ __ROR4__(v200, 21);
    v216 = v614 ^ __ROR4__(v1060, 21);
    v217 = __ROR4__(v860, 21);
    v861 = v198 + v889;
    v493 = v492 + v215;
    v967 = v522 + v913;
    v585 = v584 + v779;
    v523 = v553 + v696;
    v218 = v202 + v1013;
    v219 = v205 + v1095;
    v220 = v208 + v724;
    v554 = v808 + v210;
    v615 = v614 + v1035;
    v642 = v641 + v216;
    v221 = v207 + v939;
    v222 = v988 + (v211 ^ v217);
    v223 = v220 ^ __ROR4__(v211 ^ v217, 25);
    v224 = v211 + v836;
    v809 = (v198 + v889) ^ __ROR4__(v1095, 25);
    v1061 = v219 ^ __ROR4__(v889, 25);
    v890 = v493 ^ __ROR4__(v210, 25);
    v225 = v554 ^ __ROR4__(v215, 25);
    v989 = v967 ^ __ROR4__(v1035, 25);
    v1036 = v615 ^ __ROR4__(v913, 25);
    v226 = v585 ^ __ROR4__(v216, 25);
    v227 = v220 + v226;
    v228 = v642 ^ __ROR4__(v779, 25);
    v668 = v523 ^ __ROR4__(v939, 25);
    v780 = v221 ^ __ROR4__(v696, 25);
    v697 = (v752 + v1078) ^ __ROR4__(v212, 25);
    v229 = v214 ^ __ROR4__(v1078, 25);
    v230 = v214 + v225;
    v914 = v229;
    v940 = v218 ^ __ROR4__(v836, 25);
    v837 = v224 ^ __ROR4__(v1013, 25);
    v231 = __ROR4__(v724, 25);
    v524 = v523 + v809;
    v725 = v861 + v668;
    v862 = v221 + v1061;
    v232 = v219 + v780;
    v233 = v752 + v1078 + v890;
    v494 = v493 + v697;
    v234 = v554 + v229;
    v235 = v218 + v989;
    v236 = v940;
    v555 = v967 + v940;
    v941 = v224 + v1036;
    v968 = v615 + v837;
    v586 = v585 + v223;
    v237 = v642 + (v222 ^ v231);
    v238 = v234 ^ __ROR4__(v222 ^ v231, 21);
    v643 = v524 ^ __ROR4__(v989, 21);
    v810 = v235 ^ __ROR4__(v809, 21);
    v753 = v725 ^ __ROR4__(v236, 21);
    v990 = v555 ^ __ROR4__(v668, 21);
    v1096 = v862 ^ __ROR4__(v1036, 21);
    v1037 = v941 ^ __ROR4__(v1061, 21);
    v239 = v232 ^ __ROR4__(v837, 21);
    v240 = v232 + v238;
    v1014 = v239;
    v1062 = (v615 + v837) ^ __ROR4__(v780, 21);
    v781 = v227 ^ __ROR4__(v890, 21);
    v241 = v233 ^ __ROR4__(v226, 21);
    v669 = v494 ^ __ROR4__(v223, 21);
    v698 = v586 ^ __ROR4__(v697, 21);
    v838 = v230 ^ __ROR4__(v228, 21);
    v242 = (v222 + v228) ^ __ROR4__(v225, 21);
    v243 = v237 ^ __ROR4__(v914, 21);
    v244 = v235 + v781;
    v891 = v233 + v643;
    v525 = v524 + v241;
    v245 = v227 + v810;
    v495 = v494 + v753;
    v246 = v725 + v669;
    v247 = (v725 + v669) ^ __ROR4__(v238, 25);
    v587 = v586 + v990;
    v556 = v555 + v698;
    v726 = v862 + v838;
    v248 = v230 + v1096;
    v616 = v222 + v228 + v1037;
    v863 = v941 + v242;
    v249 = v234 + v1014;
    v250 = v237 + v1062;
    v915 = v891 ^ __ROR4__(v1096, 25);
    v251 = v810;
    v811 = v244 ^ __ROR4__(v242, 25);
    v942 = v248 ^ __ROR4__(v643, 25);
    v252 = v968 + v243;
    v253 = v525 ^ __ROR4__(v838, 25);
    v254 = v246 + v253;
    v839 = v726 ^ __ROR4__(v241, 25);
    v1097 = v245 ^ __ROR4__(v1037, 25);
    v1038 = v616 ^ __ROR4__(v251, 25);
    v255 = v863 ^ __ROR4__(v781, 25);
    v256 = v753;
    v754 = v247;
    v644 = v495 ^ __ROR4__(v1014, 25);
    v782 = v249 ^ __ROR4__(v256, 25);
    v969 = v240 ^ __ROR4__(v669, 25);
    v670 = v587 ^ __ROR4__(v1062, 25);
    v991 = v250 ^ __ROR4__(v990, 25);
    v257 = v556 ^ __ROR4__(v243, 25);
    v496 = v495 + v915;
    v258 = v244 + v257;
    v259 = v252 ^ __ROR4__(v698, 25);
    v699 = v891 + v644;
    v892 = v249 + v942;
    v260 = v248 + v782;
    v261 = v240 + v839;
    v526 = v525 + v754;
    v262 = v726 + v969;
    v588 = v587 + v1097;
    v263 = v245 + v670;
    v727 = v250 + v1038;
    v1015 = v616 + v991;
    v557 = v556 + v811;
    v264 = v252 + v255;
    v265 = v261 ^ __ROR4__(v255, 21);
    v617 = v264;
    v266 = v863 + v259;
    v267 = v262 ^ __ROR4__(v259, 21);
    v864 = v496 ^ __ROR4__(v1097, 21);
    v916 = v588 ^ __ROR4__(v915, 21);
    v671 = v699 ^ __ROR4__(v670, 21);
    v1063 = v263 ^ __ROR4__(v644, 21);
    v1098 = v892 ^ __ROR4__(v1038, 21);
    v1039 = v727 ^ __ROR4__(v942, 21);
    v268 = v260 ^ __ROR4__(v991, 21);
    v269 = v260 + v267;
    v943 = v268;
    v992 = v1015 ^ __ROR4__(v782, 21);
    v783 = v557 ^ __ROR4__(v253, 21);
    v270 = v254 ^ __ROR4__(v811, 21);
    v755 = v258 ^ __ROR4__(v754, 21);
    v271 = v617 ^ __ROR4__(v839, 21);
    v272 = __ROR4__(v969, 21);
    v812 = v254 + v864;
    v497 = v496 + v270;
    v558 = v557 + v916;
    v1079 = v526 ^ __ROR4__(v257, 21);
    v589 = v588 + v783;
    v527 = v526 + v671;
    v273 = v258 + v1063;
    v274 = v699 + v1079;
    v275 = v261 + v1098;
    v276 = v263 + v755;
    v700 = v892 + v265;
    v618 = v617 + v1039;
    v728 = v727 + v271;
    v277 = v262 + v943;
    v278 = v1015 + (v266 ^ v272);
    v279 = v276 ^ __ROR4__(v266 ^ v272, 25);
    v280 = v266 + v992;
    v893 = v812 ^ __ROR4__(v1098, 25);
    v1016 = v275 ^ __ROR4__(v864, 25);
    v865 = v497 ^ __ROR4__(v265, 25);
    v281 = v700 ^ __ROR4__(v270, 25);
    v970 = v558 ^ __ROR4__(v1039, 25);
    v1040 = v618 ^ __ROR4__(v916, 25);
    v282 = v589 ^ __ROR4__(v271, 25);
    v283 = v276 + v282;
    v284 = v728 ^ __ROR4__(v783, 25);
    v645 = v527 ^ __ROR4__(v943, 25);
    v784 = v277 ^ __ROR4__(v671, 25);
    v672 = v274 ^ __ROR4__(v267, 25);
    v285 = v269 ^ __ROR4__(v1079, 25);
    v286 = v269 + v281;
    v917 = v285;
    v944 = v280 ^ __ROR4__(v1063, 25);
    v287 = __ROR4__(v755, 25);
    v528 = v527 + v893;
    v756 = v812 + v645;
    v813 = v277 + v1016;
    v288 = v275 + v784;
    v289 = v274 + v865;
    v498 = v497 + v672;
    v290 = v700 + v285;
    v291 = v273 ^ __ROR4__(v992, 25);
    v292 = v273 + v970;
    v559 = v558 + v291;
    v701 = v280 + v1040;
    v993 = v618 + v944;
    v590 = v589 + v279;
    v293 = v728 + (v278 ^ v287);
    v294 = v290 ^ __ROR4__(v278 ^ v287, 21);
    v729 = v528 ^ __ROR4__(v970, 21);
    v894 = v292 ^ __ROR4__(v893, 21);
    v840 = v756 ^ __ROR4__(v291, 21);
    v971 = v559 ^ __ROR4__(v645, 21);
    v1080 = v813 ^ __ROR4__(v1040, 21);
    v1017 = v701 ^ __ROR4__(v1016, 21);
    v295 = v288 ^ __ROR4__(v944, 21);
    v296 = v288 + v294;
    v945 = v295;
    v1041 = v993 ^ __ROR4__(v784, 21);
    v785 = v283 ^ __ROR4__(v865, 21);
    v297 = v289 ^ __ROR4__(v282, 21);
    v646 = v498 ^ __ROR4__(v279, 21);
    v866 = v286 ^ __ROR4__(v284, 21);
    v673 = v590 ^ __ROR4__(v672, 21);
    v298 = (v278 + v284) ^ __ROR4__(v281, 21);
    v299 = v293 ^ __ROR4__(v917, 21);
    v300 = v292 + v785;
    v918 = v289 + v729;
    v529 = v528 + v297;
    v301 = v283 + v894;
    v499 = v498 + v840;
    v302 = v756 + v646;
    v303 = (v756 + v646) ^ __ROR4__(v294, 25);
    v591 = v590 + v971;
    v560 = v559 + v673;
    v304 = v1080;
    v757 = v813 + v866;
    v305 = v286 + v1080;
    v619 = v278 + v284 + v1017;
    v702 = v701 + v298;
    v1081 = v993 + v299;
    v306 = v290 + v945;
    v307 = v293 + v1041;
    v814 = v918 ^ __ROR4__(v304, 25);
    v994 = v305 ^ __ROR4__(v729, 25);
    v308 = v866;
    v867 = v300 ^ __ROR4__(v298, 25);
    v309 = v529 ^ __ROR4__(v308, 25);
    v310 = v302 + v309;
    v1064 = v757 ^ __ROR4__(v297, 25);
    v1099 = v301 ^ __ROR4__(v1017, 25);
    v1018 = v619 ^ __ROR4__(v894, 25);
    v311 = v702 ^ __ROR4__(v785, 25);
    v730 = v499 ^ __ROR4__(v945, 25);
    v786 = v303;
    v312 = v306 ^ __ROR4__(v840, 25);
    v895 = v296 ^ __ROR4__(v646, 25);
    v647 = v591 ^ __ROR4__(v1041, 25);
    v500 = v499 + v814;
    v946 = v307 ^ __ROR4__(v971, 25);
    v313 = v560 ^ __ROR4__(v299, 25);
    v314 = v673;
    v674 = v918 + v730;
    v315 = v300 + v313;
    v919 = v306 + v994;
    v316 = v1081 ^ __ROR4__(v314, 25);
    v317 = v305 + v312;
    v318 = v296 + v1064;
    v530 = v529 + v786;
    v319 = v757 + v895;
    v592 = v591 + v1099;
    v320 = v301 + v647;
    v758 = v307 + v1018;
    v972 = v619 + v946;
    v561 = v560 + v867;
    v321 = v1081 + v311;
    v322 = v318 ^ __ROR4__(v311, 21);
    v620 = v321;
    v323 = v702 + v316;
    v324 = v319 ^ __ROR4__(v316, 21);
    v703 = v500 ^ __ROR4__(v1099, 21);
    v1042 = v592 ^ __ROR4__(v814, 21);
    v815 = v674 ^ __ROR4__(v647, 21);
    v1082 = v320 ^ __ROR4__(v730, 21);
    v1019 = v919 ^ __ROR4__(v1018, 21);
    v995 = v758 ^ __ROR4__(v994, 21);
    v325 = v317 ^ __ROR4__(v946, 21);
    v326 = v317 + v324;
    v947 = v325;
    v841 = v972 ^ __ROR4__(v312, 21);
    v327 = v310 ^ __ROR4__(v867, 21);
    v731 = v561 ^ __ROR4__(v309, 21);
    v328 = v1064;
    v787 = v315 ^ __ROR4__(v786, 21);
    v1065 = v530 ^ __ROR4__(v313, 21);
    v329 = v620 ^ __ROR4__(v328, 21);
    v330 = __ROR4__(v895, 21);
    v868 = v310 + v703;
    v501 = v500 + v327;
    v562 = v561 + v1042;
    v593 = v592 + v731;
    v531 = v530 + v815;
    v331 = v315 + v1082;
    v332 = v674 + v1065;
    v333 = v318 + v1019;
    v334 = v320 + v787;
    v675 = v919 + v322;
    v621 = v620 + v995;
    v759 = v758 + v329;
    v335 = v319 + v947;
    v336 = v972 + (v323 ^ v330);
    v337 = v334 ^ __ROR4__(v323 ^ v330, 25);
    v338 = v323 + v841;
    v920 = v868 ^ __ROR4__(v1019, 25);
    v1020 = v333 ^ __ROR4__(v703, 25);
    v704 = v501 ^ __ROR4__(v322, 25);
    v339 = v675 ^ __ROR4__(v327, 25);
    v973 = v562 ^ __ROR4__(v995, 25);
    v996 = v621 ^ __ROR4__(v1042, 25);
    v340 = v593 ^ __ROR4__(v329, 25);
    v341 = v334 + v340;
    v342 = v759 ^ __ROR4__(v731, 25);
    v648 = v531 ^ __ROR4__(v947, 25);
    v816 = v335 ^ __ROR4__(v815, 25);
    v732 = v332 ^ __ROR4__(v324, 25);
    v343 = v326 ^ __ROR4__(v1065, 25);
    v344 = v326 + v339;
    v948 = v343;
    v1043 = v331 ^ __ROR4__(v841, 25);
    v842 = v338 ^ __ROR4__(v1082, 25);
    v345 = __ROR4__(v787, 25);
    v532 = v531 + v920;
    v788 = v868 + v648;
    v869 = v335 + v1020;
    v346 = v333 + v816;
    v347 = v332 + v704;
    v502 = v501 + v732;
    v348 = v675 + v343;
    v349 = v1043;
    v350 = v331 + v973;
    v563 = v562 + v1043;
    v676 = v338 + v996;
    v1044 = v621 + v842;
    v594 = v593 + v337;
    v351 = v759 + (v336 ^ v345);
    v352 = v348 ^ __ROR4__(v336 ^ v345, 21);
    v760 = v532 ^ __ROR4__(v973, 21);
    v921 = v350 ^ __ROR4__(v920, 21);
    v896 = v788 ^ __ROR4__(v349, 21);
    v974 = v563 ^ __ROR4__(v648, 21);
    v1083 = v869 ^ __ROR4__(v996, 21);
    v997 = v676 ^ __ROR4__(v1020, 21);
    v353 = v346 ^ __ROR4__(v842, 21);
    v354 = v346 + v352;
    v843 = v353;
    v1021 = v1044 ^ __ROR4__(v816, 21);
    v705 = v341 ^ __ROR4__(v704, 21);
    v355 = v347 ^ __ROR4__(v340, 21);
    v649 = v502 ^ __ROR4__(v337, 21);
    v733 = v594 ^ __ROR4__(v732, 21);
    v817 = v344 ^ __ROR4__(v342, 21);
    v356 = (v336 + v342) ^ __ROR4__(v339, 21);
    v357 = v351 ^ __ROR4__(v948, 21);
    v358 = v350 + v705;
    v949 = v347 + v760;
    v533 = v532 + v355;
    v359 = v341 + v921;
    v503 = v502 + v896;
    v360 = v788 + v649;
    v361 = (v788 + v649) ^ __ROR4__(v352, 25);
    v595 = v594 + v974;
    v564 = v563 + v733;
    v362 = v1083;
    v789 = v869 + v817;
    v363 = v344 + v1083;
    v622 = v336 + v342 + v997;
    v677 = v676 + v356;
    v1084 = v1044 + v357;
    v364 = v348 + v843;
    v365 = v351 + v1021;
    v870 = v949 ^ __ROR4__(v362, 25);
    v366 = v760;
    v761 = v361;
    v1045 = v363 ^ __ROR4__(v366, 25);
    v367 = v817;
    v818 = v358 ^ __ROR4__(v356, 25);
    v368 = v533 ^ __ROR4__(v367, 25);
    v369 = v360 + v368;
    v1066 = v789 ^ __ROR4__(v355, 25);
    v922 = v622 ^ __ROR4__(v921, 25);
    v370 = v677 ^ __ROR4__(v705, 25);
    v371 = v896;
    v897 = v354 ^ __ROR4__(v649, 25);
    v706 = v503 ^ __ROR4__(v843, 25);
    v844 = v364 ^ __ROR4__(v371, 25);
    v650 = v595 ^ __ROR4__(v1021, 25);
    v975 = v365 ^ __ROR4__(v974, 25);
    v372 = v564 ^ __ROR4__(v357, 25);
    v504 = v503 + v870;
    v373 = v358 + v372;
    v374 = v1084 ^ __ROR4__(v733, 25);
    v734 = v949 + v706;
    v950 = v364 + v1045;
    v375 = v363 + v844;
    v376 = v354 + v1066;
    v377 = v359 ^ __ROR4__(v997, 25);
    v534 = v533 + v761;
    v378 = v789 + v897;
    v596 = v595 + v377;
    v379 = v359 + v650;
    v790 = v365 + v922;
    v998 = v622 + v975;
    v565 = v564 + v818;
    v380 = v1084 + v370;
    v381 = v376 ^ __ROR4__(v370, 21);
    v623 = v380;
    v382 = v677 + v374;
    v383 = v378 ^ __ROR4__(v374, 21);
    v678 = v504 ^ __ROR4__(v377, 21);
    v1022 = v596 ^ __ROR4__(v870, 21);
    v871 = v734 ^ __ROR4__(v650, 21);
    v1085 = v379 ^ __ROR4__(v706, 21);
    v1100 = v950 ^ __ROR4__(v922, 21);
    v1046 = v790 ^ __ROR4__(v1045, 21);
    v384 = v375 ^ __ROR4__(v975, 21);
    v385 = v375 + v383;
    v923 = v384;
    v845 = v998 ^ __ROR4__(v844, 21);
    v707 = v565 ^ __ROR4__(v368, 21);
    v386 = v369 ^ __ROR4__(v818, 21);
    v762 = v373 ^ __ROR4__(v761, 21);
    v387 = v623 ^ __ROR4__(v1066, 21);
    v388 = __ROR4__(v897, 21);
    v819 = v369 + v678;
    v505 = v504 + v386;
    v566 = v565 + v1022;
    v1067 = v534 ^ __ROR4__(v372, 21);
    v597 = v596 + v707;
    v535 = v534 + v871;
    v389 = v373 + v1085;
    v390 = v734 + v1067;
    v391 = v376 + v1100;
    v392 = v379 + v762;
    v735 = v950 + v381;
    v624 = v623 + v1046;
    v791 = v790 + v387;
    v393 = v378 + v923;
    v394 = v998 + (v382 ^ v388);
    v395 = v392 ^ __ROR4__(v382 ^ v388, 25);
    v396 = v382 + v845;
    v951 = v819 ^ __ROR4__(v1100, 25);
    v999 = v391 ^ __ROR4__(v678, 25);
    v679 = v505 ^ __ROR4__(v381, 25);
    v397 = v735 ^ __ROR4__(v386, 25);
    v976 = v566 ^ __ROR4__(v1046, 25);
    v1023 = v624 ^ __ROR4__(v1022, 25);
    v398 = v597 ^ __ROR4__(v387, 25);
    v399 = v392 + v398;
    v400 = v791 ^ __ROR4__(v707, 25);
    v651 = v535 ^ __ROR4__(v923, 25);
    v872 = v393 ^ __ROR4__(v871, 25);
    v708 = v390 ^ __ROR4__(v383, 25);
    v401 = v385 ^ __ROR4__(v1067, 25);
    v402 = v385 + v397;
    v924 = v401;
    v1047 = v389 ^ __ROR4__(v845, 25);
    v846 = v396 ^ __ROR4__(v1085, 25);
    v403 = v394 ^ __ROR4__(v762, 25);
    v536 = v535 + v951;
    v763 = v819 + v651;
    v820 = v393 + v999;
    v404 = v391 + v872;
    v405 = v390 + v679;
    v506 = v505 + v708;
    v406 = v735 + v924;
    v407 = v1047;
    v408 = v389 + v976;
    v567 = v566 + v1047;
    v736 = v396 + v1023;
    v1048 = v624 + v846;
    v598 = v597 + v395;
    v625 = v394 + v400;
    v409 = v791 + v403;
    v410 = v406 ^ __ROR4__(v403, 21);
    v792 = v536 ^ __ROR4__(v976, 21);
    v952 = v408 ^ __ROR4__(v951, 21);
    v898 = v763 ^ __ROR4__(v407, 21);
    v977 = v567 ^ __ROR4__(v651, 21);
    v1086 = v820 ^ __ROR4__(v1023, 21);
    v1000 = v736 ^ __ROR4__(v999, 21);
    v411 = v404 ^ __ROR4__(v846, 21);
    v412 = v404 + v410;
    v847 = v411;
    v873 = v1048 ^ __ROR4__(v872, 21);
    v652 = v399 ^ __ROR4__(v679, 21);
    v413 = v405 ^ __ROR4__(v398, 21);
    v414 = v708;
    v709 = v402 ^ __ROR4__(v400, 21);
    v1101 = v506 ^ __ROR4__(v395, 21);
    v680 = v598 ^ __ROR4__(v414, 21);
    v415 = v625 ^ __ROR4__(v397, 21);
    v416 = v409 ^ __ROR4__(v924, 21);
    v925 = v405 + v792;
    v537 = v536 + v413;
    v1024 = v399 + v952;
    v1068 = v408 + v652;
    v417 = v506 + v898;
    v418 = v763 + v1101;
    v419 = (v763 + v1101) ^ __ROR4__(v410, 25);
    v507 = v598 + v977;
    v568 = v567 + v680;
    v420 = v1086;
    v421 = v820 + v709;
    v422 = v402 + v1086;
    v599 = v625 + v1000;
    v1087 = (v820 + v709) ^ __ROR4__(v413, 25);
    v626 = v736 + v415;
    v737 = v1048 + v416;
    v423 = v406 + v847;
    v424 = v409 + v873;
    v764 = v925 ^ __ROR4__(v420, 25);
    v1049 = v422 ^ __ROR4__(v792, 25);
    v710 = v537 ^ __ROR4__(v709, 25);
    v793 = v1024 ^ __ROR4__(v1000, 25);
    v953 = v599 ^ __ROR4__(v952, 25);
    v425 = v1068 ^ __ROR4__(v415, 25);
    v426 = v652;
    v653 = v419;
    v427 = v626 ^ __ROR4__(v426, 25);
    v428 = v417 ^ __ROR4__(v847, 25);
    v429 = v423 ^ __ROR4__(v898, 25);
    v430 = v422 + v429;
    v848 = v412 ^ __ROR4__(v1101, 25);
    v821 = v507 ^ __ROR4__(v873, 25);
    v874 = v424 ^ __ROR4__(v977, 25);
    v431 = v568 ^ __ROR4__(v416, 25);
    v432 = v737 ^ __ROR4__(v680, 25);
    v433 = v417 + v764;
    v681 = v925 + v428;
    v434 = v423 + v1049;
    v435 = v418 + v710;
    v538 = v537 + v653;
    v436 = v421 + v848;
    v437 = v412 + v1087;
    v508 = v507 + v793;
    v899 = v1024 + v821;
    v926 = v424 + v953;
    v978 = v599 + v874;
    v1102 = v568 + v425;
    v569 = v1068 + v431;
    v438 = v737;
    v738 = v433 ^ __ROR4__(v793, 21);
    v439 = v438 + v427;
    v440 = v437 ^ __ROR4__(v427, 21);
    v600 = v439;
    v441 = v626 + v432;
    v442 = v436 ^ __ROR4__(v432, 21);
    v627 = v441;
    v794 = v508 ^ __ROR4__(v764, 21);
    v765 = v681 ^ __ROR4__(v821, 21);
    v1001 = (v1024 + v821) ^ __ROR4__(v428, 21);
    v443 = v434 ^ __ROR4__(v953, 21);
    v444 = v434 + v440;
    v1069 = v443;
    v954 = v926 ^ __ROR4__(v1049, 21);
    v445 = v430 ^ __ROR4__(v874, 21);
    v446 = v430 + v442;
    v875 = v445;
    v447 = v978 ^ __ROR4__(v429, 21);
    v448 = v435 ^ __ROR4__(v425, 21);
    v449 = v1102;
    v450 = v433 + v448;
    v822 = v1102 ^ __ROR4__(v710, 21);
    v711 = v538 ^ __ROR4__(v431, 21);
    v1103 = v448;
    v654 = v569 ^ __ROR4__(v653, 21);
    v451 = v600 ^ __ROR4__(v1087, 21);
    v452 = v441 ^ __ROR4__(v848, 21);
    v849 = v435 + v738;
    v1050 = v449 + v794;
    v509 = v508 + v822;
    v453 = v538 + v765;
    v454 = v681 + v711;
    v455 = (v681 + v711) ^ __ROR4__(v442, 25);
    v682 = v899 + v654;
    v456 = v1069;
    v601 = v600 + v954;
    v457 = v437 + v1069;
    v458 = v436 + v875;
    v1070 = v926 + v451;
    v628 = v627 + v447;
    v459 = v738;
    v739 = v450 ^ __ROR4__(v440, 25);
    v1088 = v849 ^ __ROR4__(v456, 25);
    v1108 = v457 ^ __ROR4__(v459, 25);
    v460 = v765;
    v1110 = v444 ^ __ROR4__(v1103, 25);
    v766 = v455;
    v1104 = v1050 ^ __ROR4__(v954, 25);
    v461 = v601 ^ __ROR4__(v794, 25);
    v795 = v509 ^ __ROR4__(v451, 25);
    v1111 = v458 ^ __ROR4__(v460, 25);
    v1113 = (v926 + v451) ^ __ROR4__(v822, 25);
    v1112 = v446 ^ __ROR4__(v711, 25);
    v462 = v453 ^ __ROR4__(v875, 25);
    v463 = (v569 + v1001) ^ __ROR4__(v447, 25);
    v464 = v628 ^ __ROR4__(v1001, 25);
    v876 = (v899 + v654) ^ __ROR4__(v452, 25);
    v11 = v457 + v1111;
    v1025 = (v978 + v452) ^ __ROR4__(v654, 25);
    v13 = v450 + v766;
    v877 = v453 + v1088;
    v7 = v444 + v1112;
    v9 = v849 + v462;
    v10 = v458 + v1108;
    v12 = v454 + v739;
    v8 = v446 + v1110;
    v900 = v569 + v1001 + v1104;
    v539 = v1050 + v463;
    v15 = (v849 + v462) ^ __ROR4__(v463, 21);
    v602 = v628 + v461;
    v18 = v10 ^ __ROR4__(v461, 21);
    v465 = v601 + v464;
    v17 = v11 ^ __ROR4__(v464, 21);
    v510 = v465;
    v927 = v682 + v795;
    v570 = v509 + v876;
    v14 = v978 + v452 + v1113;
    v955 = v1070 + v1025;
    v479 = v877 ^ __ROR4__(v1104, 21);
    v655 = v900 ^ __ROR4__(v1088, 21);
    v979 = v539 ^ __ROR4__(v462, 21);
    v796 = v602 ^ __ROR4__(v1108, 21);
    v1089 = v465 ^ __ROR4__(v1111, 21);
    v629 = v12 ^ __ROR4__(v795, 21);
    v683 = v927 ^ __ROR4__(v739, 21);
    v16 = v13 ^ __ROR4__(v876, 21);
    v712 = v570 ^ __ROR4__(v766, 21);
    v740 = v8 ^ __ROR4__(v1113, 21);
    v823 = v14 ^ __ROR4__(v1110, 21);
    v767 = v7 ^ __ROR4__(v1025, 21);
    v850 = (v1070 + v1025) ^ __ROR4__(v1112, 21);
    v466 = v478;
    if ( v478 )
      break;
    v510 ^= 1u;
    v466 = 0;
LABEL_2:
    v478 = v466 + 1;
  }
  if ( v478 != 10 )
    goto LABEL_2;
  v1114[9] = v479;
  v1114[10] = v629;
  v1114[11] = v15;
  v1114[12] = v16;
  v1114[13] = v655;
  v1114[14] = v683;
  v1114[15] = v979;
  v1114[25] = v12;
  v1114[26] = v877;
  v1114[29] = v927;
  v1114[16] = v712;
  v1114[30] = v900;
  v1114[27] = v13;
  v1114[28] = v9;
  v1114[17] = v18;
  v1114[18] = v740;
  v1114[19] = v17;
  v1114[20] = v767;
  v1114[21] = v796;
  v1114[22] = v823;
  v1114[23] = v1089;
  v1114[24] = v850;
  v1114[31] = v570;
  v1114[32] = v539;
  v1114[33] = v8;
  v1114[34] = v10;
  v1114[35] = v7;
  v1114[36] = v11;
  v1114[37] = v14;
  v1114[40] = v510;
  v1114[38] = v602;
  v1114[39] = v955;
  *a4 = (unsigned __int16)((unsigned __int8)v479 | (BYTE1(v479) << 8))
      | (BYTE2(v479) << 16) & 0xFFFFFF
      | (HIBYTE(v479) << 24);
  a4[1] = (unsigned __int8)v1114[10]
        | (unsigned __int16)((unsigned __int8)BYTE1(v1114[10]) << 8)
        | ((unsigned __int8)BYTE2(v1114[10]) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(v1114[10]) << 24);
  v467 = v1114[11];
  result = v467 >> 8;
  a4[2] = (unsigned __int8)v467
        | (unsigned __int16)(BYTE1(v467) << 8)
        | (BYTE2(v467) << 16) & 0xFFFFFF
        | (HIBYTE(v467) << 24);
  a4[3] = (unsigned __int8)v1114[12]
        | (unsigned __int16)((unsigned __int8)BYTE1(v1114[12]) << 8)
        | ((unsigned __int8)BYTE2(v1114[12]) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(v1114[12]) << 24);
  a4[4] = (unsigned __int8)v1114[13]
        | (unsigned __int16)((unsigned __int8)BYTE1(v1114[13]) << 8)
        | ((unsigned __int8)BYTE2(v1114[13]) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(v1114[13]) << 24);
  a4[5] = (unsigned __int8)v1114[14]
        | (unsigned __int16)((unsigned __int8)BYTE1(v1114[14]) << 8)
        | ((unsigned __int8)BYTE2(v1114[14]) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(v1114[14]) << 24);
  a4[6] = (unsigned __int8)v1114[15]
        | (unsigned __int16)((unsigned __int8)BYTE1(v1114[15]) << 8)
        | ((unsigned __int8)BYTE2(v1114[15]) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(v1114[15]) << 24);
  if ( a5 != 7 )
  {
    v469 = v1114[16];
    result = v469 >> 8;
    a4[7] = (unsigned __int8)v469
          | (unsigned __int16)(BYTE1(v469) << 8)
          | (BYTE2(v469) << 16) & 0xFFFFFF
          | (HIBYTE(v469) << 24);
    if ( a5 != 8 )
    {
      v470 = v1114[17];
      result = v470 >> 8;
      a4[8] = (unsigned __int8)v470
            | (unsigned __int16)(BYTE1(v470) << 8)
            | (BYTE2(v470) << 16) & 0xFFFFFF
            | (HIBYTE(v470) << 24);
      if ( a5 != 9 )
      {
        v471 = v1114[18];
        result = v471 >> 8;
        a4[9] = (unsigned __int8)v471
              | (unsigned __int16)(BYTE1(v471) << 8)
              | (BYTE2(v471) << 16) & 0xFFFFFF
              | (HIBYTE(v471) << 24);
        if ( a5 != 10 )
        {
          v472 = v1114[19];
          result = v472 >> 8;
          a4[10] = (unsigned __int8)v472
                 | (unsigned __int16)(BYTE1(v472) << 8)
                 | (BYTE2(v472) << 16) & 0xFFFFFF
                 | (HIBYTE(v472) << 24);
          if ( a5 != 11 )
          {
            v473 = v1114[20];
            result = v473 >> 8;
            a4[11] = (unsigned __int8)v473
                   | (unsigned __int16)(BYTE1(v473) << 8)
                   | (BYTE2(v473) << 16) & 0xFFFFFF
                   | (HIBYTE(v473) << 24);
            if ( a5 != 12 )
            {
              v474 = v1114[21];
              result = v474 >> 8;
              a4[12] = (unsigned __int8)v474
                     | (unsigned __int16)(BYTE1(v474) << 8)
                     | (BYTE2(v474) << 16) & 0xFFFFFF
                     | (HIBYTE(v474) << 24);
              if ( a5 != 13 )
              {
                v475 = v1114[22];
                result = v475 >> 8;
                a4[13] = (unsigned __int8)v475
                       | (unsigned __int16)(BYTE1(v475) << 8)
                       | (BYTE2(v475) << 16) & 0xFFFFFF
                       | (HIBYTE(v475) << 24);
                if ( a5 != 14 )
                {
                  v476 = v1114[23];
                  result = v476 >> 8;
                  a4[14] = (unsigned __int8)v476
                         | (unsigned __int16)(BYTE1(v476) << 8)
                         | (BYTE2(v476) << 16) & 0xFFFFFF
                         | (HIBYTE(v476) << 24);
                  if ( a5 == 16 )
                  {
                    v477 = v1114[24];
                    result = v477 >> 8;
                    a4[15] = (unsigned __int8)v477
                           | (unsigned __int16)(BYTE1(v477) << 8)
                           | (BYTE2(v477) << 16) & 0xFFFFFF
                           | (HIBYTE(v477) << 24);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
