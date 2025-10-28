unsigned int __fastcall sub_543C0(_DWORD *a1, char a2, char a3, int *a4, int a5)
{
  int v6; // lr
  int v7; // r1
  int v8; // r6
  int v9; // r8
  int v10; // r10
  int v11; // r11
  int v12; // r9
  int v13; // r7
  int v14; // r12
  int v15; // r4
  int v16; // r0
  int v17; // lr
  int v18; // r3
  int v19; // r9
  int v20; // r10
  int v21; // r5
  int v22; // r8
  int v23; // r11
  int v24; // r6
  int v25; // r0
  int v26; // r1
  int v27; // r2
  int v28; // r5
  int v29; // r3
  int v30; // lr
  int v31; // t2
  int v32; // r1
  int v33; // r7
  int v34; // r10
  int v35; // r8
  int v36; // lr
  int v37; // r9
  int v38; // r6
  int v39; // r5
  int v40; // r11
  int v41; // r2
  int v42; // r8
  int v43; // r3
  int v44; // r12
  int v45; // r0
  int v46; // r5
  int v47; // r4
  int v48; // r10
  int v49; // r6
  int v50; // r7
  int v51; // r9
  int v52; // r1
  int v53; // r11
  int v54; // lr
  int v55; // r3
  int v56; // r2
  int v57; // r4
  int v58; // r2
  int v59; // r8
  int v60; // r9
  int v61; // r10
  int v62; // r6
  int v63; // r1
  int v64; // r11
  int v65; // r5
  int v66; // r0
  int v67; // r2
  int v68; // lr
  int v69; // r10
  int v70; // r4
  int v71; // r12
  int v72; // r9
  int v73; // r7
  int v74; // r0
  int v75; // r12
  int v76; // r1
  int v77; // r8
  int v78; // r4
  int v79; // r11
  int v80; // r7
  int v81; // r5
  int v82; // lr
  int v83; // r3
  int v84; // r9
  int v85; // r8
  int v86; // r2
  int v87; // r1
  int v88; // r11
  int v89; // r10
  int v90; // r12
  int v91; // r0
  int v92; // r3
  int v93; // r6
  int v94; // lr
  int v95; // r5
  int v96; // r4
  int v97; // r0
  int v98; // r2
  int v99; // r10
  int v100; // r11
  int v101; // r8
  int v102; // r7
  int v103; // r9
  int v104; // r6
  int v105; // r4
  int v106; // lr
  int v107; // r5
  int v108; // r12
  int v109; // r0
  int v110; // r3
  int v111; // r9
  int v112; // r2
  int v113; // r3
  int v114; // r3
  int v115; // r6
  int v116; // r12
  int v117; // r5
  int v118; // r10
  int v119; // r1
  int v120; // r11
  int v121; // r1
  int v122; // r1
  int v123; // r8
  int v124; // r0
  int v125; // r2
  int v126; // r3
  int v127; // r4
  int v128; // r8
  int v129; // r11
  int v130; // r7
  int v131; // r1
  int v132; // r10
  int v133; // r0
  int v134; // r9
  int v135; // r6
  int v136; // r6
  int v137; // r5
  int v138; // lr
  int v139; // r10
  int v140; // r8
  int v141; // r4
  int v142; // r3
  int v143; // r11
  int v144; // r9
  int v145; // r2
  int v146; // r6
  int v147; // r7
  int v148; // r5
  int v149; // r1
  int v150; // lr
  int v151; // r10
  int v152; // r3
  int v153; // r12
  int v154; // r9
  int v155; // r0
  int v156; // r12
  int v157; // r4
  int v158; // r2
  int v159; // r11
  int v160; // r3
  int v161; // r10
  int v162; // r8
  int v163; // r7
  int v164; // r6
  int v165; // r1
  int v166; // r5
  int v167; // r3
  int v168; // r9
  int v169; // lr
  int v170; // r11
  int v171; // r12
  int v172; // r0
  int v173; // r1
  int v174; // r2
  int v175; // r4
  int v176; // r3
  int v177; // r8
  int v178; // r10
  int v179; // r7
  int v180; // lr
  int v181; // r1
  int v182; // r12
  int v183; // r1
  int v184; // r0
  int v185; // r2
  int v186; // r5
  int v187; // r3
  int v188; // r4
  int v189; // r7
  int v190; // r8
  int v191; // r4
  int v192; // r11
  int v193; // r3
  int v194; // r9
  int v195; // r6
  int v196; // r1
  int v197; // r0
  int v198; // r5
  int v199; // lr
  int v200; // r10
  int v201; // r3
  int v202; // r8
  int v203; // r4
  int v204; // r3
  int v205; // r11
  int v206; // r9
  int v207; // r2
  int v208; // r6
  int v209; // r7
  int v210; // r10
  int v211; // r1
  int v212; // r5
  int v213; // r1
  int v214; // lr
  int v215; // r3
  int v216; // r12
  int v217; // r9
  int v218; // r1
  int v219; // r12
  int v220; // r0
  int v221; // r4
  int v222; // r2
  int v223; // r11
  int v224; // r3
  int v225; // r10
  int v226; // r8
  int v227; // r6
  int v228; // r5
  int v229; // lr
  int v230; // r11
  int v231; // r12
  int v232; // r3
  int v233; // r9
  int v234; // r0
  int v235; // r1
  int v236; // r2
  int v237; // r4
  int v238; // r3
  int v239; // r8
  int v240; // r10
  int v241; // r7
  int v242; // lr
  int v243; // r1
  int v244; // r12
  int v245; // r1
  int v246; // r1
  int v247; // r0
  int v248; // r2
  int v249; // r5
  int v250; // r7
  int v251; // r3
  int v252; // r4
  int v253; // r8
  int v254; // r4
  int v255; // r11
  int v256; // r3
  int v257; // r9
  int v258; // r6
  int v259; // r1
  int v260; // r10
  int v261; // r0
  int v262; // r5
  int v263; // lr
  int v264; // r10
  int v265; // r3
  int v266; // r8
  int v267; // r4
  int v268; // r3
  int v269; // r11
  int v270; // r9
  int v271; // r2
  int v272; // r6
  int v273; // r7
  int v274; // r10
  int v275; // r1
  int v276; // r5
  int v277; // r1
  int v278; // lr
  int v279; // r3
  int v280; // r12
  int v281; // r9
  int v282; // r1
  int v283; // r12
  int v284; // r0
  int v285; // r4
  int v286; // r2
  int v287; // r11
  int v288; // r3
  int v289; // r10
  int v290; // r8
  int v291; // r6
  int v292; // r1
  int v293; // r5
  int v294; // r3
  int v295; // r9
  int v296; // lr
  int v297; // r11
  int v298; // r7
  int v299; // r12
  int v300; // r1
  int v301; // r2
  int v302; // r4
  int v303; // r3
  int v304; // r8
  int v305; // r10
  int v306; // r7
  int v307; // lr
  int v308; // r1
  int v309; // r12
  int v310; // r1
  int v311; // r1
  int v312; // r0
  int v313; // r2
  int v314; // r5
  int v315; // r7
  int v316; // r3
  int v317; // r4
  int v318; // r8
  int v319; // r4
  int v320; // r11
  int v321; // r3
  int v322; // r9
  int v323; // r6
  int v324; // r1
  int v325; // r10
  int v326; // r0
  int v327; // r5
  int v328; // lr
  int v329; // r10
  int v330; // r3
  int v331; // r8
  int v332; // r4
  int v333; // r3
  int v334; // r11
  int v335; // r9
  int v336; // r2
  int v337; // r6
  int v338; // r7
  int v339; // r10
  int v340; // r1
  int v341; // r5
  int v342; // r1
  int v343; // lr
  int v344; // r3
  int v345; // r12
  int v346; // r9
  int v347; // r1
  int v348; // r12
  int v349; // r0
  int v350; // r4
  int v351; // r2
  int v352; // r11
  int v353; // r3
  int v354; // r10
  int v355; // r8
  int v356; // r6
  int v357; // r1
  int v358; // r5
  int v359; // r3
  int v360; // r9
  int v361; // lr
  int v362; // r11
  int v363; // r7
  int v364; // r12
  int v365; // r1
  int v366; // r2
  int v367; // r4
  int v368; // r3
  int v369; // r8
  int v370; // r10
  int v371; // r7
  int v372; // lr
  int v373; // r1
  int v374; // r12
  int v375; // r1
  int v376; // r1
  int v377; // r0
  int v378; // r2
  int v379; // r5
  int v380; // r3
  int v381; // r7
  int v382; // r4
  int v383; // r8
  int v384; // r4
  int v385; // r11
  int v386; // r3
  int v387; // r9
  int v388; // r6
  int v389; // r1
  int v390; // r10
  int v391; // r0
  int v392; // r5
  int v393; // lr
  int v394; // r10
  int v395; // r3
  int v396; // r8
  int v397; // r4
  int v398; // r3
  int v399; // r11
  int v400; // r9
  int v401; // r2
  int v402; // r6
  int v403; // r7
  int v404; // r10
  int v405; // r1
  int v406; // r5
  int v407; // r1
  int v408; // lr
  int v409; // r3
  int v410; // r12
  int v411; // r9
  int v412; // r1
  int v413; // r12
  int v414; // r0
  int v415; // r4
  int v416; // r2
  int v417; // r11
  int v418; // r3
  int v419; // r10
  int v420; // r8
  int v421; // r6
  int v422; // r5
  int v423; // lr
  int v424; // r11
  int v425; // r12
  int v426; // r3
  int v427; // r9
  int v428; // t2
  int v429; // r2
  int v430; // r4
  int v431; // r1
  int v432; // r3
  int v433; // r8
  int v434; // r10
  int v435; // r7
  int v436; // lr
  int v437; // r1
  int v438; // r12
  int v439; // r1
  int v440; // r1
  int v441; // r0
  int v442; // r2
  int v443; // r3
  int v444; // r8
  int v445; // r5
  int v446; // r4
  int v447; // r4
  int v448; // r10
  int v449; // r11
  int v450; // r3
  int v451; // r9
  int v452; // r7
  int v453; // r6
  int v454; // r6
  int v455; // r5
  int v456; // r1
  int v457; // lr
  int v458; // r0
  int v459; // r12
  int v460; // r9
  int v461; // r4
  int v462; // r3
  int v463; // r10
  int v464; // r6
  int v465; // r2
  int v466; // r11
  int v467; // r8
  int v468; // r7
  int v469; // r1
  int v470; // lr
  int v471; // r1
  int v472; // r3
  int v473; // r1
  int v474; // r0
  int v475; // r6
  int v476; // r12
  int v477; // r1
  int v478; // r0
  int v479; // r9
  int v480; // r0
  int v481; // r5
  int v482; // r10
  int v483; // r11
  int v484; // r3
  int v485; // r8
  int v486; // r7
  int v487; // r1
  int v488; // r4
  int v489; // lr
  int v490; // r12
  int v491; // r3
  int v492; // r4
  int v493; // r2
  int v494; // r2
  int v495; // r2
  unsigned int v496; // r3
  unsigned int result; // r0
  unsigned int v498; // r3
  unsigned int v499; // r3
  unsigned int v500; // r3
  unsigned int v501; // r3
  unsigned int v502; // r3
  unsigned int v503; // r3
  unsigned int v504; // r3
  unsigned int v505; // r3
  unsigned int v506; // r3
  int v507; // [sp+4h] [bp-80h]
  int v508; // [sp+8h] [bp-7Ch]
  int v509; // [sp+8h] [bp-7Ch]
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
  int v599; // [sp+14h] [bp-70h]
  int v600; // [sp+14h] [bp-70h]
  int v601; // [sp+14h] [bp-70h]
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
  int v655; // [sp+18h] [bp-6Ch]
  int v656; // [sp+18h] [bp-6Ch]
  int v657; // [sp+18h] [bp-6Ch]
  int v658; // [sp+18h] [bp-6Ch]
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
  int v683; // [sp+1Ch] [bp-68h]
  int v684; // [sp+1Ch] [bp-68h]
  int v685; // [sp+1Ch] [bp-68h]
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
  int v712; // [sp+20h] [bp-64h]
  int v713; // [sp+20h] [bp-64h]
  int v714; // [sp+20h] [bp-64h]
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
  int v740; // [sp+24h] [bp-60h]
  int v741; // [sp+24h] [bp-60h]
  int v742; // [sp+24h] [bp-60h]
  int v743; // [sp+24h] [bp-60h]
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
  int v767; // [sp+28h] [bp-5Ch]
  int v768; // [sp+28h] [bp-5Ch]
  int v769; // [sp+28h] [bp-5Ch]
  int v770; // [sp+28h] [bp-5Ch]
  int v771; // [sp+28h] [bp-5Ch]
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
  int v796; // [sp+2Ch] [bp-58h]
  int v797; // [sp+2Ch] [bp-58h]
  int v798; // [sp+2Ch] [bp-58h]
  int v799; // [sp+2Ch] [bp-58h]
  int v800; // [sp+2Ch] [bp-58h]
  int v801; // [sp+2Ch] [bp-58h]
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
  int v823; // [sp+30h] [bp-54h]
  int v824; // [sp+30h] [bp-54h]
  int v825; // [sp+30h] [bp-54h]
  int v826; // [sp+30h] [bp-54h]
  int v827; // [sp+30h] [bp-54h]
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
  int v850; // [sp+34h] [bp-50h]
  int v851; // [sp+34h] [bp-50h]
  int v852; // [sp+34h] [bp-50h]
  int v853; // [sp+34h] [bp-50h]
  int v854; // [sp+34h] [bp-50h]
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
  int v877; // [sp+38h] [bp-4Ch]
  int v878; // [sp+38h] [bp-4Ch]
  int v879; // [sp+38h] [bp-4Ch]
  int v880; // [sp+38h] [bp-4Ch]
  int v881; // [sp+38h] [bp-4Ch]
  int v882; // [sp+38h] [bp-4Ch]
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
  int v900; // [sp+3Ch] [bp-48h]
  int v901; // [sp+3Ch] [bp-48h]
  int v902; // [sp+3Ch] [bp-48h]
  int v903; // [sp+3Ch] [bp-48h]
  int v904; // [sp+3Ch] [bp-48h]
  int v905; // [sp+3Ch] [bp-48h]
  int v906; // [sp+3Ch] [bp-48h]
  int v907; // [sp+3Ch] [bp-48h]
  int v908; // [sp+3Ch] [bp-48h]
  int v909; // [sp+3Ch] [bp-48h]
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
  int v927; // [sp+40h] [bp-44h]
  int v928; // [sp+40h] [bp-44h]
  int v929; // [sp+40h] [bp-44h]
  int v930; // [sp+40h] [bp-44h]
  int v931; // [sp+40h] [bp-44h]
  int v932; // [sp+40h] [bp-44h]
  int v933; // [sp+40h] [bp-44h]
  int v934; // [sp+40h] [bp-44h]
  int v935; // [sp+40h] [bp-44h]
  int v936; // [sp+40h] [bp-44h]
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
  int v955; // [sp+44h] [bp-40h]
  int v956; // [sp+44h] [bp-40h]
  int v957; // [sp+44h] [bp-40h]
  int v958; // [sp+44h] [bp-40h]
  int v959; // [sp+44h] [bp-40h]
  int v960; // [sp+44h] [bp-40h]
  int v961; // [sp+44h] [bp-40h]
  int v962; // [sp+44h] [bp-40h]
  int v963; // [sp+44h] [bp-40h]
  int v964; // [sp+44h] [bp-40h]
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
  int v979; // [sp+48h] [bp-3Ch]
  int v980; // [sp+48h] [bp-3Ch]
  int v981; // [sp+48h] [bp-3Ch]
  int v982; // [sp+48h] [bp-3Ch]
  int v983; // [sp+48h] [bp-3Ch]
  int v984; // [sp+48h] [bp-3Ch]
  int v985; // [sp+48h] [bp-3Ch]
  int v986; // [sp+48h] [bp-3Ch]
  int v987; // [sp+48h] [bp-3Ch]
  int v988; // [sp+48h] [bp-3Ch]
  int v989; // [sp+48h] [bp-3Ch]
  int v990; // [sp+48h] [bp-3Ch]
  int v991; // [sp+48h] [bp-3Ch]
  int v992; // [sp+48h] [bp-3Ch]
  int v993; // [sp+48h] [bp-3Ch]
  int v994; // [sp+4Ch] [bp-38h]
  int v995; // [sp+4Ch] [bp-38h]
  int v996; // [sp+4Ch] [bp-38h]
  int v997; // [sp+4Ch] [bp-38h]
  int v998; // [sp+4Ch] [bp-38h]
  int v999; // [sp+4Ch] [bp-38h]
  int v1000; // [sp+4Ch] [bp-38h]
  int v1001; // [sp+4Ch] [bp-38h]
  int v1002; // [sp+4Ch] [bp-38h]
  int v1003; // [sp+4Ch] [bp-38h]
  int v1004; // [sp+4Ch] [bp-38h]
  int v1005; // [sp+4Ch] [bp-38h]
  int v1006; // [sp+4Ch] [bp-38h]
  int v1007; // [sp+4Ch] [bp-38h]
  int v1008; // [sp+4Ch] [bp-38h]
  int v1009; // [sp+4Ch] [bp-38h]
  int v1010; // [sp+4Ch] [bp-38h]
  int v1011; // [sp+4Ch] [bp-38h]
  int v1012; // [sp+4Ch] [bp-38h]
  int v1013; // [sp+4Ch] [bp-38h]
  int v1014; // [sp+4Ch] [bp-38h]
  int v1015; // [sp+4Ch] [bp-38h]
  int v1016; // [sp+4Ch] [bp-38h]
  int v1017; // [sp+4Ch] [bp-38h]
  int v1018; // [sp+4Ch] [bp-38h]
  int v1019; // [sp+50h] [bp-34h]
  int v1020; // [sp+50h] [bp-34h]
  int v1021; // [sp+50h] [bp-34h]
  int v1022; // [sp+50h] [bp-34h]
  int v1023; // [sp+50h] [bp-34h]
  int v1024; // [sp+50h] [bp-34h]
  int v1025; // [sp+50h] [bp-34h]
  int v1026; // [sp+50h] [bp-34h]
  int v1027; // [sp+50h] [bp-34h]
  int v1028; // [sp+50h] [bp-34h]
  int v1029; // [sp+50h] [bp-34h]
  int v1030; // [sp+50h] [bp-34h]
  int v1031; // [sp+50h] [bp-34h]
  int v1032; // [sp+50h] [bp-34h]
  int v1033; // [sp+50h] [bp-34h]
  int v1034; // [sp+50h] [bp-34h]
  int v1035; // [sp+50h] [bp-34h]
  int v1036; // [sp+50h] [bp-34h]
  int v1037; // [sp+50h] [bp-34h]
  int v1038; // [sp+50h] [bp-34h]
  int v1039; // [sp+50h] [bp-34h]
  int v1040; // [sp+50h] [bp-34h]
  int v1041; // [sp+50h] [bp-34h]
  int v1042; // [sp+50h] [bp-34h]
  int v1043; // [sp+54h] [bp-30h]
  int v1044; // [sp+54h] [bp-30h]
  int v1045; // [sp+54h] [bp-30h]
  int v1046; // [sp+54h] [bp-30h]
  int v1047; // [sp+54h] [bp-30h]
  int v1048; // [sp+54h] [bp-30h]
  int v1049; // [sp+54h] [bp-30h]
  int v1050; // [sp+54h] [bp-30h]
  int v1051; // [sp+54h] [bp-30h]
  int v1052; // [sp+54h] [bp-30h]
  int v1053; // [sp+54h] [bp-30h]
  int v1054; // [sp+54h] [bp-30h]
  int v1055; // [sp+54h] [bp-30h]
  int v1056; // [sp+54h] [bp-30h]
  int v1057; // [sp+54h] [bp-30h]
  int v1058; // [sp+54h] [bp-30h]
  int v1059; // [sp+54h] [bp-30h]
  int v1060; // [sp+54h] [bp-30h]
  int v1061; // [sp+54h] [bp-30h]
  int v1062; // [sp+54h] [bp-30h]
  int v1063; // [sp+54h] [bp-30h]
  int v1064; // [sp+54h] [bp-30h]
  int v1065; // [sp+54h] [bp-30h]
  int v1066; // [sp+58h] [bp-2Ch]
  int v1067; // [sp+58h] [bp-2Ch]
  int v1068; // [sp+58h] [bp-2Ch]
  int v1069; // [sp+58h] [bp-2Ch]
  int v1070; // [sp+58h] [bp-2Ch]
  int v1071; // [sp+58h] [bp-2Ch]
  int v1072; // [sp+58h] [bp-2Ch]
  int v1073; // [sp+58h] [bp-2Ch]
  int v1074; // [sp+58h] [bp-2Ch]
  int v1075; // [sp+58h] [bp-2Ch]
  int v1076; // [sp+58h] [bp-2Ch]
  int v1077; // [sp+58h] [bp-2Ch]
  int v1078; // [sp+58h] [bp-2Ch]
  int v1079; // [sp+58h] [bp-2Ch]
  int v1080; // [sp+58h] [bp-2Ch]
  int v1081; // [sp+58h] [bp-2Ch]
  int v1082; // [sp+58h] [bp-2Ch]
  int v1083; // [sp+58h] [bp-2Ch]
  int v1084; // [sp+58h] [bp-2Ch]
  int v1085; // [sp+58h] [bp-2Ch]
  int v1086; // [sp+58h] [bp-2Ch]
  int v1087; // [sp+58h] [bp-2Ch]
  int v1088; // [sp+58h] [bp-2Ch]
  int v1089; // [sp+58h] [bp-2Ch]
  int v1090; // [sp+5Ch] [bp-28h]
  int v1091; // [sp+5Ch] [bp-28h]
  int v1092; // [sp+5Ch] [bp-28h]
  int v1093; // [sp+5Ch] [bp-28h]
  int v1094; // [sp+5Ch] [bp-28h]
  int v1095; // [sp+5Ch] [bp-28h]
  int v1096; // [sp+5Ch] [bp-28h]
  int v1097; // [sp+5Ch] [bp-28h]
  int v1098; // [sp+5Ch] [bp-28h]
  int v1099; // [sp+5Ch] [bp-28h]
  int v1100; // [sp+5Ch] [bp-28h]
  int v1101; // [sp+5Ch] [bp-28h]
  int v1102; // [sp+5Ch] [bp-28h]
  int v1103; // [sp+5Ch] [bp-28h]
  int v1104; // [sp+5Ch] [bp-28h]
  int v1105; // [sp+5Ch] [bp-28h]
  int v1106; // [sp+5Ch] [bp-28h]
  int v1107; // [sp+5Ch] [bp-28h]
  int v1108; // [sp+5Ch] [bp-28h]
  int v1109; // [sp+5Ch] [bp-28h]
  int v1110; // [sp+60h] [bp-24h]
  int v1111; // [sp+60h] [bp-24h]
  int v1112; // [sp+60h] [bp-24h]
  int v1113; // [sp+60h] [bp-24h]
  int v1114; // [sp+60h] [bp-24h]
  int v1115; // [sp+60h] [bp-24h]
  int v1116; // [sp+60h] [bp-24h]
  int v1117; // [sp+60h] [bp-24h]
  int v1118; // [sp+60h] [bp-24h]
  int v1119; // [sp+60h] [bp-24h]
  int v1120; // [sp+60h] [bp-24h]
  int v1121; // [sp+60h] [bp-24h]
  int v1122; // [sp+60h] [bp-24h]
  int v1123; // [sp+60h] [bp-24h]
  int v1124; // [sp+60h] [bp-24h]
  int v1125; // [sp+60h] [bp-24h]
  int v1126; // [sp+60h] [bp-24h]
  int v1127; // [sp+64h] [bp-20h]
  int v1128; // [sp+64h] [bp-20h]
  int v1129; // [sp+64h] [bp-20h]
  int v1130; // [sp+64h] [bp-20h]
  int v1131; // [sp+64h] [bp-20h]
  int v1132; // [sp+64h] [bp-20h]
  int v1133; // [sp+68h] [bp-1Ch]
  int v1134; // [sp+68h] [bp-1Ch]
  int v1135; // [sp+68h] [bp-1Ch]
  int v1136; // [sp+6Ch] [bp-18h]
  int v1137; // [sp+6Ch] [bp-18h]
  int v1138; // [sp+70h] [bp-14h]
  int v1139; // [sp+74h] [bp-10h]

  v6 = a1[8];
  *((_BYTE *)a1 + v6) = (128 >> a3) | a2 & -(128 >> a3);
  memset((char *)a1 + v6 + 1, 0, 31 - v6);
  v715 = a1[20];
  v744 = a1[21];
  v507 = 0;
  v772 = a1[22];
  v1090 = a1[18];
  v802 = a1[23];
  v1127 = a1[17];
  v1133 = a1[19];
  v828 = a1[24];
  v570 = a1[38];
  v539 = a1[40];
  v1139 = a1[32];
  v508 = a1[9] ^ *a1;
  v7 = a1[37];
  v599 = a1[10] ^ a1[1];
  v629 = a1[13] ^ a1[4];
  v855 = a1[26];
  v8 = a1[35];
  v659 = a1[14] ^ a1[5];
  v965 = a1[31];
  v910 = a1[30];
  v1110 = a1[15] ^ a1[6];
  v937 = a1[29];
  v9 = a1[36];
  v686 = a1[16] ^ a1[7];
  v10 = a1[27];
  v11 = a1[25];
  v12 = a1[33];
  v883 = a1[28];
  v13 = a1[34];
  v994 = a1[39];
  v14 = a1[11] ^ a1[2];
  v15 = a1[12] ^ a1[3];
  v16 = v1110;
  v17 = v1127;
  v18 = v1133;
  while ( 1 )
  {
    v19 = v17 + v12;
    v20 = v14 + v10;
    v1019 = v508 + v11;
    v856 = v599 + v855;
    v884 = v15 + v883;
    v938 = v629 + v937;
    v911 = v659 + v910;
    v21 = v1090;
    v1091 = v18 + v8;
    v966 = v16 + v965;
    v22 = v715 + v9;
    v1066 = v21 + v13;
    v1111 = v744 + v7;
    v1043 = v686 + v1139;
    v23 = v772 + v570;
    v24 = v802 + v994;
    v25 = (v802 + v994) ^ __ROR4__(v16, 25);
    v26 = v828 + v539;
    v1136 = v1019 ^ __ROR4__(v17, 25);
    v540 = v20 ^ __ROR4__(v18, 25);
    v995 = v19 ^ __ROR4__(v508, 25);
    v509 = v856 ^ __ROR4__(v21, 25);
    v1128 = (v21 + v13) ^ __ROR4__(v599, 25);
    v1134 = v1091 ^ __ROR4__(v14, 25);
    v571 = v884 ^ __ROR4__(v715, 25);
    v600 = v966 ^ __ROR4__(v802, 25);
    v27 = v1111 ^ __ROR4__(v629, 25);
    v716 = v22 ^ __ROR4__(v15, 25);
    v28 = v938 ^ __ROR4__(v744, 25);
    v630 = (v686 + v1139) ^ __ROR4__(v828, 25);
    v29 = v911 ^ __ROR4__(v772, 25);
    v30 = v659;
    v660 = v26 ^ __ROR4__(v686, 25);
    v687 = v20 + v1136;
    v31 = __ROR4__(v30, 25);
    v32 = v26 + (v23 ^ v31);
    v773 = v1019 + v540;
    v1020 = v1091 + v995;
    v1092 = v19 + v1134;
    v745 = v884 + v509;
    v33 = v1066 + v716;
    v885 = v24 + v27;
    v34 = v856 + v571;
    v35 = v22 + v1128;
    v36 = v35 ^ __ROR4__(v23 ^ v31, 21);
    v37 = v938;
    v803 = v966 + v28;
    v939 = v1111 + v25;
    v829 = v37 + v600;
    v38 = v1043 + v29;
    v857 = v911 + v630;
    v39 = v687 ^ __ROR4__(v28, 21);
    v40 = v23 + v660;
    v912 = v803 ^ __ROR4__(v1136, 21);
    v601 = v773 ^ __ROR4__(v600, 21);
    v967 = v1092 ^ __ROR4__(v25, 21);
    v541 = v829 ^ __ROR4__(v540, 21);
    v41 = v1020 ^ __ROR4__(v27, 21);
    v42 = v35 + v41;
    v996 = v885 ^ __ROR4__(v995, 21);
    v1044 = (v1111 + v25) ^ __ROR4__(v1134, 21);
    v43 = v745 ^ __ROR4__(v29, 21);
    v44 = v38 ^ __ROR4__(v509, 21);
    v510 = v34 ^ __ROR4__(v630, 21);
    v572 = v857 ^ __ROR4__(v571, 21);
    v45 = v32 ^ __ROR4__(v1128, 21);
    v631 = (v1066 + v716) ^ __ROR4__(v660, 21);
    v661 = v745 + v39;
    v46 = v42 ^ __ROR4__(v39, 25);
    v47 = v40 ^ __ROR4__(v716, 21);
    v1067 = v687 + v43;
    v717 = v38 + v912;
    v746 = v803 + v44;
    v48 = v34 + v601;
    v688 = v773 + v510;
    v774 = v857 + v541;
    v804 = v829 + v572;
    v830 = v1020 + v36;
    v49 = v32 + v996;
    v858 = v885 + v45;
    v50 = v33 + v967;
    v51 = v1092 + v631;
    v886 = v40 + v1044;
    v52 = v939 + v47;
    v940 = v661 ^ __ROR4__(v41, 25);
    v53 = v1067;
    v1021 = (v1020 + v36) ^ __ROR4__(v43, 25);
    v54 = v1067 ^ __ROR4__(v36, 25);
    v997 = v717 ^ __ROR4__(v996, 25);
    v1068 = v49 ^ __ROR4__(v912, 25);
    v913 = v746 ^ __ROR4__(v45, 25);
    v1093 = v858 ^ __ROR4__(v44, 25);
    v1112 = v48 ^ __ROR4__(v967, 25);
    v602 = v50 ^ __ROR4__(v601, 25);
    v55 = v688 ^ __ROR4__(v631, 25);
    v56 = v1044;
    v1045 = v50 + v46;
    v632 = v51 ^ __ROR4__(v510, 25);
    v511 = v774 ^ __ROR4__(v56, 25);
    v542 = v886 ^ __ROR4__(v541, 25);
    v57 = v804 ^ __ROR4__(v47, 25);
    v573 = v52 ^ __ROR4__(v572, 25);
    v58 = v48 + v940;
    v968 = v661 + v1112;
    v59 = v42 + v602;
    v662 = v688 + v54;
    v60 = v51 + v1021;
    v689 = v53 + v55;
    v831 = v830 + v632;
    v61 = v774 + v997;
    v1129 = v717 + v511;
    v775 = v886 + v1068;
    v62 = v49 + v542;
    v718 = v804 + v913;
    v747 = v746 + v57;
    v63 = v52 + v1093;
    v64 = v858 + v573;
    v805 = v58 ^ __ROR4__(v997, 21);
    v859 = v61 ^ __ROR4__(v940, 21);
    v512 = v968 ^ __ROR4__(v511, 21);
    v887 = v1129 ^ __ROR4__(v1112, 21);
    v941 = (v50 + v46) ^ __ROR4__(v1068, 21);
    v65 = v775 ^ __ROR4__(v46, 21);
    v998 = v59 ^ __ROR4__(v542, 21);
    v1069 = v62 ^ __ROR4__(v602, 21);
    v66 = v662 ^ __ROR4__(v913, 21);
    v67 = v58 + v66;
    v68 = v718 ^ __ROR4__(v54, 21);
    v69 = v61 + v68;
    v70 = v689 ^ __ROR4__(v57, 21);
    v543 = v747 ^ __ROR4__(v55, 21);
    v71 = v60 ^ __ROR4__(v1093, 21);
    v603 = v63 ^ __ROR4__(v1021, 21);
    v574 = v831 ^ __ROR4__(v573, 21);
    v633 = v64 ^ __ROR4__(v632, 21);
    v663 = v662 + v805;
    v719 = v718 + v859;
    v1113 = v689 + v512;
    v690 = v968 + v70;
    v748 = v747 + v887;
    v914 = v1129 + v543;
    v72 = v60 + v941;
    v969 = v63 + v65;
    v73 = v1045 + v71;
    v74 = (v1045 + v71) ^ __ROR4__(v66, 25);
    v75 = v67 ^ __ROR4__(v71, 25);
    v776 = v775 + v603;
    v1046 = v74;
    v76 = v831 + v998;
    v77 = v59 + v574;
    v78 = v77 ^ __ROR4__(v70, 25);
    v79 = v64 + v1069;
    v80 = v73 + v78;
    v832 = v62 + v633;
    v942 = v663 ^ __ROR4__(v941, 25);
    v1022 = v72 ^ __ROR4__(v805, 25);
    v1094 = v969 ^ __ROR4__(v859, 25);
    v81 = v719 ^ __ROR4__(v65, 25);
    v806 = v69 ^ __ROR4__(v603, 25);
    v604 = v1113 ^ __ROR4__(v998, 25);
    v82 = v776 ^ __ROR4__(v68, 25);
    v860 = v76 ^ __ROR4__(v512, 25);
    v513 = v690 ^ __ROR4__(v574, 25);
    v575 = v748 ^ __ROR4__(v1069, 25);
    v888 = v79 ^ __ROR4__(v887, 25);
    v634 = (v1129 + v543) ^ __ROR4__(v633, 25);
    v83 = v832 ^ __ROR4__(v543, 25);
    v544 = v1113 + v942;
    v999 = v663 + v604;
    v1070 = v76 + v1022;
    v84 = v72 + v860;
    v664 = v690 + v75;
    v85 = v77 + v74;
    v691 = v67 + v513;
    v86 = v748 + v81;
    v720 = v719 + v575;
    v87 = v79 + v1094;
    v749 = v969 + v888;
    v88 = v914 + v806;
    v89 = v69 + v634;
    v90 = (v914 + v806) ^ __ROR4__(v75, 21);
    v91 = v776 + v83;
    v92 = v80 ^ __ROR4__(v83, 21);
    v777 = v91;
    v93 = v832 + v82;
    v94 = v85 ^ __ROR4__(v82, 21);
    v833 = (v1113 + v942) ^ __ROR4__(v81, 21);
    v915 = v86 ^ __ROR4__(v942, 21);
    v576 = v999 ^ __ROR4__(v575, 21);
    v943 = v720 ^ __ROR4__(v604, 21);
    v970 = v1070 ^ __ROR4__(v1094, 21);
    v1023 = v87 ^ __ROR4__(v1022, 21);
    v889 = v84 ^ __ROR4__(v888, 21);
    v861 = v749 ^ __ROR4__(v860, 21);
    v95 = v664 ^ __ROR4__(v806, 21);
    v605 = v691 ^ __ROR4__(v634, 21);
    v514 = v89 ^ __ROR4__(v513, 21);
    v96 = v91 ^ __ROR4__(v78, 21);
    v97 = v93 ^ __ROR4__(v1046, 21);
    v665 = v664 + v833;
    v545 = v544 + v95;
    v807 = v88 + v915;
    v1047 = v86 + v90;
    v98 = v691 + v576;
    v692 = v999 + v605;
    v99 = v89 + v943;
    v100 = v720 + v514;
    v101 = v85 + v970;
    v721 = v1070 + v94;
    v1000 = v93 + v1023;
    v1071 = v87 + v97;
    v102 = v80 + v889;
    v103 = v84 + v92;
    v778 = v777 + v861;
    v104 = v749 + v96;
    v105 = v100 ^ __ROR4__(v96, 25);
    v750 = v665 ^ __ROR4__(v970, 25);
    v971 = v101 ^ __ROR4__(v833, 25);
    v106 = v545 ^ __ROR4__(v94, 25);
    v107 = v721 ^ __ROR4__(v95, 25);
    v1114 = v807 ^ __ROR4__(v1023, 25);
    v916 = v1000 ^ __ROR4__(v915, 25);
    v834 = v1047 ^ __ROR4__(v97, 25);
    v108 = (v87 + v97) ^ __ROR4__(v90, 25);
    v109 = v98 ^ __ROR4__(v889, 25);
    v890 = v102 ^ __ROR4__(v576, 25);
    v577 = v692 ^ __ROR4__(v92, 25);
    v110 = v103 ^ __ROR4__(v605, 25);
    v111 = v103 + v107;
    v635 = v110;
    v606 = v99 ^ __ROR4__(v861, 25);
    v862 = v778 ^ __ROR4__(v943, 25);
    v112 = v98 + v750;
    v113 = v514;
    v515 = v665 + v109;
    v114 = v104 ^ __ROR4__(v113, 25);
    v944 = v102 + v971;
    v115 = v104 + v108;
    v116 = v111 ^ __ROR4__(v108, 21);
    v1024 = v101 + v890;
    v1130 = v692 + v106;
    v117 = v115 ^ __ROR4__(v107, 21);
    v546 = v545 + v577;
    v722 = v721 + v635;
    v666 = v807 + v606;
    v118 = v99 + v1114;
    v779 = v778 + v916;
    v119 = v1000;
    v1001 = v112 ^ __ROR4__(v1114, 21);
    v808 = v119 + v862;
    v120 = v100 + v834;
    v121 = v1047;
    v1048 = v118 ^ __ROR4__(v750, 21);
    v693 = v121 + v105;
    v122 = v1071 + v114;
    v607 = v515 ^ __ROR4__(v606, 21);
    v1072 = v666 ^ __ROR4__(v109, 21);
    v917 = (v102 + v971) ^ __ROR4__(v916, 21);
    v972 = v779 ^ __ROR4__(v971, 21);
    v863 = (v101 + v890) ^ __ROR4__(v862, 21);
    v123 = v834;
    v835 = v120 ^ __ROR4__(v106, 21);
    v891 = v808 ^ __ROR4__(v890, 21);
    v124 = v1130 ^ __ROR4__(v123, 21);
    v125 = v112 + v124;
    v751 = v546 ^ __ROR4__(v105, 21);
    v578 = v693 ^ __ROR4__(v577, 21);
    v126 = v722 ^ __ROR4__(v114, 21);
    v127 = v122 ^ __ROR4__(v635, 21);
    v636 = v1130 + v1001;
    v1095 = v120 + v1048;
    v1115 = v118 + v835;
    v128 = v515;
    v1131 = v546 + v607;
    v516 = v693 + v1072;
    v129 = v128 + v751;
    v547 = v666 + v578;
    v130 = v944 + v116;
    v131 = v122 + v891;
    v132 = v808;
    v809 = v125 ^ __ROR4__(v116, 25);
    v133 = (v944 + v116) ^ __ROR4__(v124, 25);
    v134 = v111 + v917;
    v667 = v115 + v972;
    v694 = v779 + v117;
    v135 = v722;
    v723 = v132 + v127;
    v136 = v135 + v863;
    v780 = v636 ^ __ROR4__(v917, 25);
    v945 = v134 ^ __ROR4__(v1001, 25);
    v918 = v1095 ^ __ROR4__(v972, 25);
    v1002 = v667 ^ __ROR4__(v1048, 25);
    v137 = v1115 ^ __ROR4__(v117, 25);
    v138 = v694 ^ __ROR4__(v835, 25);
    v836 = v1131 ^ __ROR4__(v863, 25);
    v139 = v607;
    v608 = (v128 + v751) ^ __ROR4__(v126, 25);
    v864 = v136 ^ __ROR4__(v139, 25);
    v140 = v1024 + v126 + v133;
    v973 = (v1024 + v126) ^ __ROR4__(v751, 25);
    v752 = v516 ^ __ROR4__(v891, 25);
    v892 = v131 ^ __ROR4__(v1072, 25);
    v141 = v547 ^ __ROR4__(v127, 25);
    v142 = v723 ^ __ROR4__(v578, 25);
    v579 = v1131 + v780;
    v637 = v636 + v836;
    v143 = v129 + v809;
    v1025 = v136 + v945;
    v144 = v134 + v864;
    v145 = v125 + v608;
    v146 = v130 + v973;
    v517 = v516 + v918;
    v147 = v1095 + v752;
    v1049 = v131 + v1002;
    v1073 = v667 + v892;
    v548 = v547 + v137;
    v148 = v143 ^ __ROR4__(v137, 21);
    v149 = v723 + v138;
    v150 = v140 ^ __ROR4__(v138, 21);
    v695 = v694 + v142;
    v151 = v1115 + v141;
    v152 = v146 ^ __ROR4__(v142, 21);
    v724 = (v1131 + v780) ^ __ROR4__(v918, 21);
    v919 = v517 ^ __ROR4__(v780, 21);
    v753 = v637 ^ __ROR4__(v752, 21);
    v837 = v147 ^ __ROR4__(v836, 21);
    v1003 = v1025 ^ __ROR4__(v1002, 21);
    v781 = v145 ^ __ROR4__(v141, 21);
    v946 = v1049 ^ __ROR4__(v945, 21);
    v609 = (v1115 + v141) ^ __ROR4__(v608, 21);
    v153 = v144 ^ __ROR4__(v892, 21);
    v154 = v144 + v152;
    v893 = v153;
    v155 = v149 ^ __ROR4__(v133, 21);
    v865 = v1073 ^ __ROR4__(v864, 21);
    v156 = v548 ^ __ROR4__(v809, 21);
    v157 = v695 ^ __ROR4__(v973, 21);
    v810 = v143 + v724;
    v580 = v579 + v148;
    v549 = v548 + v919;
    v518 = v517 + v156;
    v158 = v145 + v753;
    v159 = v637 + v781;
    v160 = (v637 + v781) ^ __ROR4__(v152, 25);
    v161 = v151 + v837;
    v638 = v147 + v609;
    v162 = v140 + v1003;
    v974 = v1025 + v150;
    v163 = v149 + v946;
    v1026 = v1049 + v155;
    v164 = v146 + v893;
    v696 = v695 + v865;
    v1050 = v1073 + v157;
    v1004 = v810 ^ __ROR4__(v1003, 25);
    v165 = v724;
    v166 = v974 ^ __ROR4__(v148, 25);
    v725 = v160;
    v1074 = v162 ^ __ROR4__(v165, 25);
    v167 = v154 ^ __ROR4__(v781, 25);
    v168 = v154 + v166;
    v169 = v580 ^ __ROR4__(v150, 25);
    v170 = v159 + v169;
    v1116 = v549 ^ __ROR4__(v946, 25);
    v947 = v163 ^ __ROR4__(v919, 25);
    v920 = v518 ^ __ROR4__(v155, 25);
    v171 = v1026 ^ __ROR4__(v156, 25);
    v172 = v158 ^ __ROR4__(v893, 25);
    v894 = v164 ^ __ROR4__(v753, 25);
    v782 = v167;
    v754 = v161 ^ __ROR4__(v865, 25);
    v173 = v609;
    v838 = v696 ^ __ROR4__(v837, 25);
    v174 = v158 + v1004;
    v610 = v810 + v172;
    v175 = v638 ^ __ROR4__(v157, 25);
    v811 = v164 + v1074;
    v176 = v1050 ^ __ROR4__(v173, 25);
    v177 = v162 + v894;
    v581 = v580 + v725;
    v866 = v974 + v782;
    v178 = v161 + v1116;
    v550 = v549 + v754;
    v697 = v696 + v947;
    v668 = v163 + v838;
    v179 = v638 + v920;
    v975 = v174 ^ __ROR4__(v1116, 21);
    v180 = (v638 + v920) ^ __ROR4__(v169, 21);
    v519 = v518 + v175;
    v1005 = v178 ^ __ROR4__(v1004, 21);
    v181 = v1050 + v171;
    v182 = v168 ^ __ROR4__(v171, 21);
    v639 = v181;
    v183 = v1026 + v176;
    v755 = v610 ^ __ROR4__(v754, 21);
    v1027 = v550 ^ __ROR4__(v172, 21);
    v948 = (v164 + v1074) ^ __ROR4__(v947, 21);
    v1075 = v697 ^ __ROR4__(v1074, 21);
    v1051 = v177 ^ __ROR4__(v838, 21);
    v1096 = v668 ^ __ROR4__(v894, 21);
    v184 = v170 ^ __ROR4__(v920, 21);
    v185 = v174 + v184;
    v839 = v581 ^ __ROR4__(v175, 21);
    v726 = v519 ^ __ROR4__(v725, 21);
    v186 = v639 ^ __ROR4__(v166, 21);
    v187 = v866 ^ __ROR4__(v176, 21);
    v188 = v782;
    v783 = v170 + v975;
    v189 = v179 + v1005;
    v190 = v177 + v187;
    v191 = v183 ^ __ROR4__(v188, 21);
    v921 = v178 + v180;
    v1117 = v581 + v755;
    v192 = v610 + v839;
    v193 = (v610 + v839) ^ __ROR4__(v187, 25);
    v520 = v519 + v1027;
    v551 = v550 + v726;
    v194 = v168 + v948;
    v582 = v811 + v182;
    v611 = v639 + v1075;
    v640 = v697 + v186;
    v195 = v866 + v1051;
    v196 = v183 + v1096;
    v669 = v668 + v191;
    v812 = v185 ^ __ROR4__(v182, 25);
    v698 = v783 ^ __ROR4__(v948, 25);
    v197 = v582 ^ __ROR4__(v184, 25);
    v976 = v194 ^ __ROR4__(v975, 25);
    v949 = v189 ^ __ROR4__(v1075, 25);
    v1076 = v611 ^ __ROR4__(v1005, 25);
    v198 = (v178 + v180) ^ __ROR4__(v186, 25);
    v199 = v640 ^ __ROR4__(v180, 25);
    v867 = v1117 ^ __ROR4__(v1051, 25);
    v200 = v755;
    v756 = v193;
    v201 = v190 ^ __ROR4__(v839, 25);
    v895 = v195 ^ __ROR4__(v200, 25);
    v202 = v190 + v197;
    v1006 = v201;
    v840 = v520 ^ __ROR4__(v1096, 25);
    v1028 = v196 ^ __ROR4__(v1027, 25);
    v203 = v551 ^ __ROR4__(v191, 25);
    v204 = v669 ^ __ROR4__(v726, 25);
    v727 = v1117 + v698;
    v784 = v783 + v867;
    v205 = v192 + v812;
    v1052 = v195 + v976;
    v206 = v194 + v895;
    v207 = v185 + v756;
    v208 = v582 + v1006;
    v521 = v520 + v949;
    v209 = v189 + v840;
    v583 = v196 + v1076;
    v210 = v921 + v203;
    v1097 = v611 + v1028;
    v211 = v551 + v198;
    v212 = v205 ^ __ROR4__(v198, 21);
    v552 = v211;
    v213 = v669 + v199;
    v214 = v202 ^ __ROR4__(v199, 21);
    v612 = v213;
    v641 = v640 + v204;
    v215 = v208 ^ __ROR4__(v204, 21);
    v670 = (v1117 + v698) ^ __ROR4__(v949, 21);
    v922 = v521 ^ __ROR4__(v698, 21);
    v699 = v784 ^ __ROR4__(v840, 21);
    v841 = v209 ^ __ROR4__(v867, 21);
    v868 = v1052 ^ __ROR4__(v1076, 21);
    v977 = v583 ^ __ROR4__(v976, 21);
    v216 = v206 ^ __ROR4__(v1028, 21);
    v217 = v206 + v215;
    v950 = v216;
    v218 = v812;
    v813 = v207 ^ __ROR4__(v203, 21);
    v896 = v1097 ^ __ROR4__(v895, 21);
    v757 = v210 ^ __ROR4__(v756, 21);
    v219 = v552 ^ __ROR4__(v218, 21);
    v220 = v612 ^ __ROR4__(v197, 21);
    v221 = v641 ^ __ROR4__(v1006, 21);
    v1007 = v205 + v670;
    v728 = v727 + v212;
    v553 = v552 + v922;
    v522 = v521 + v219;
    v222 = v207 + v699;
    v223 = v784 + v813;
    v224 = (v784 + v813) ^ __ROR4__(v215, 25);
    v225 = v210 + v841;
    v785 = v209 + v757;
    v226 = v202 + v868;
    v1029 = v1052 + v214;
    v613 = v612 + v977;
    v584 = v583 + v220;
    v227 = v208 + v950;
    v642 = v641 + v896;
    v1053 = v1097 + v221;
    v869 = v1007 ^ __ROR4__(v868, 25);
    v228 = v1029 ^ __ROR4__(v212, 25);
    v1077 = v226 ^ __ROR4__(v670, 25);
    v229 = v728 ^ __ROR4__(v214, 25);
    v230 = v223 + v229;
    v1118 = v553 ^ __ROR4__(v977, 25);
    v978 = v613 ^ __ROR4__(v922, 25);
    v671 = v224;
    v231 = v584 ^ __ROR4__(v219, 25);
    v923 = v522 ^ __ROR4__(v220, 25);
    v232 = v217 ^ __ROR4__(v813, 25);
    v233 = v217 + v228;
    v814 = v232;
    v234 = v222 ^ __ROR4__(v950, 25);
    v951 = v227 ^ __ROR4__(v699, 25);
    v700 = v225 ^ __ROR4__(v896, 25);
    v235 = v757;
    v842 = v642 ^ __ROR4__(v841, 25);
    v236 = v222 + v869;
    v758 = v1007 + v234;
    v237 = v785 ^ __ROR4__(v221, 25);
    v897 = v227 + v1077;
    v238 = v1053 ^ __ROR4__(v235, 25);
    v239 = v226 + v951;
    v729 = v728 + v671;
    v1008 = v1029 + v814;
    v240 = v225 + v1118;
    v554 = v553 + v700;
    v643 = v642 + v978;
    v1030 = v613 + v842;
    v523 = v522 + v237;
    v241 = v785 + v923;
    v242 = (v785 + v923) ^ __ROR4__(v229, 21);
    v243 = v1053 + v231;
    v244 = v233 ^ __ROR4__(v231, 21);
    v614 = v243;
    v245 = v584;
    v585 = v236 ^ __ROR4__(v1118, 21);
    v870 = v240 ^ __ROR4__(v869, 21);
    v246 = v245 + v238;
    v701 = v758 ^ __ROR4__(v700, 21);
    v1054 = v554 ^ __ROR4__(v234, 21);
    v979 = (v227 + v1077) ^ __ROR4__(v978, 21);
    v1098 = v643 ^ __ROR4__(v1077, 21);
    v1078 = v239 ^ __ROR4__(v842, 21);
    v952 = v1030 ^ __ROR4__(v951, 21);
    v247 = v230 ^ __ROR4__(v923, 21);
    v248 = v236 + v247;
    v786 = v729 ^ __ROR4__(v237, 21);
    v672 = v523 ^ __ROR4__(v671, 21);
    v249 = v614 ^ __ROR4__(v228, 21);
    v250 = v241 + v870;
    v251 = v1008 ^ __ROR4__(v238, 21);
    v252 = v814;
    v815 = v230 + v585;
    v253 = v239 + v251;
    v254 = v246 ^ __ROR4__(v252, 21);
    v924 = v240 + v242;
    v1119 = v729 + v701;
    v255 = v758 + v786;
    v256 = (v758 + v786) ^ __ROR4__(v251, 25);
    v524 = v523 + v1054;
    v555 = v554 + v672;
    v257 = v233 + v979;
    v730 = v897 + v244;
    v615 = v614 + v1098;
    v644 = v643 + v249;
    v258 = v1008 + v1078;
    v259 = v246 + v952;
    v759 = v1030 + v254;
    v260 = v585;
    v586 = v248 ^ __ROR4__(v244, 25);
    v898 = v815 ^ __ROR4__(v979, 25);
    v1009 = v257 ^ __ROR4__(v260, 25);
    v261 = v730 ^ __ROR4__(v247, 25);
    v980 = v250 ^ __ROR4__(v1098, 25);
    v1099 = v615 ^ __ROR4__(v870, 25);
    v262 = v924 ^ __ROR4__(v249, 25);
    v263 = v644 ^ __ROR4__(v242, 25);
    v843 = v1119 ^ __ROR4__(v1078, 25);
    v264 = v701;
    v702 = v256;
    v265 = v253 ^ __ROR4__(v786, 25);
    v871 = v258 ^ __ROR4__(v264, 25);
    v266 = v253 + v261;
    v1031 = v265;
    v787 = v524 ^ __ROR4__(v952, 25);
    v953 = v259 ^ __ROR4__(v1054, 25);
    v267 = v555 ^ __ROR4__(v254, 25);
    v268 = v759 ^ __ROR4__(v672, 25);
    v673 = v1119 + v898;
    v816 = v815 + v843;
    v269 = v255 + v586;
    v1055 = v258 + v1009;
    v270 = v257 + v871;
    v271 = v248 + v702;
    v272 = v730 + v1031;
    v525 = v524 + v980;
    v273 = v250 + v787;
    v731 = v259 + v1099;
    v274 = v924 + v267;
    v1079 = v615 + v953;
    v275 = v555 + v262;
    v276 = v269 ^ __ROR4__(v262, 21);
    v556 = v275;
    v277 = v759 + v263;
    v278 = v266 ^ __ROR4__(v263, 21);
    v616 = v277;
    v645 = v644 + v268;
    v279 = v272 ^ __ROR4__(v268, 21);
    v760 = (v1119 + v898) ^ __ROR4__(v980, 21);
    v899 = v525 ^ __ROR4__(v898, 21);
    v788 = v816 ^ __ROR4__(v787, 21);
    v844 = v273 ^ __ROR4__(v843, 21);
    v925 = v1055 ^ __ROR4__(v1099, 21);
    v981 = v731 ^ __ROR4__(v1009, 21);
    v280 = v270 ^ __ROR4__(v953, 21);
    v281 = v270 + v279;
    v954 = v280;
    v282 = v586;
    v587 = v271 ^ __ROR4__(v267, 21);
    v872 = v1079 ^ __ROR4__(v871, 21);
    v703 = v274 ^ __ROR4__(v702, 21);
    v283 = v556 ^ __ROR4__(v282, 21);
    v284 = v616 ^ __ROR4__(v261, 21);
    v285 = v645 ^ __ROR4__(v1031, 21);
    v1010 = v269 + v760;
    v674 = v673 + v276;
    v557 = v556 + v899;
    v526 = v525 + v283;
    v286 = v271 + v788;
    v287 = v816 + v587;
    v288 = (v816 + v587) ^ __ROR4__(v279, 25);
    v289 = v274 + v844;
    v817 = v273 + v703;
    v290 = v266 + v925;
    v1032 = v1055 + v278;
    v617 = v616 + v981;
    v732 = v731 + v284;
    v291 = v272 + v954;
    v646 = v645 + v872;
    v1056 = v1079 + v285;
    v926 = v1010 ^ __ROR4__(v925, 25);
    v292 = v760;
    v293 = v1032 ^ __ROR4__(v276, 25);
    v761 = v288;
    v1080 = v290 ^ __ROR4__(v292, 25);
    v294 = v281 ^ __ROR4__(v587, 25);
    v295 = v281 + v293;
    v296 = v674 ^ __ROR4__(v278, 25);
    v297 = v287 + v296;
    v1120 = v557 ^ __ROR4__(v981, 25);
    v982 = v617 ^ __ROR4__(v899, 25);
    v298 = v954;
    v955 = v294;
    v900 = v526 ^ __ROR4__(v284, 25);
    v299 = v732 ^ __ROR4__(v283, 25);
    v1100 = v286 ^ __ROR4__(v298, 25);
    v789 = v291 ^ __ROR4__(v788, 25);
    v588 = v289 ^ __ROR4__(v872, 25);
    v300 = v703;
    v845 = v646 ^ __ROR4__(v844, 25);
    v301 = v286 + v926;
    v302 = v817 ^ __ROR4__(v285, 25);
    v704 = v1010 + v1100;
    v303 = v1056 ^ __ROR4__(v300, 25);
    v873 = v291 + v1080;
    v304 = v290 + v789;
    v675 = v674 + v761;
    v1011 = v1032 + v955;
    v305 = v289 + v1120;
    v558 = v557 + v588;
    v647 = v646 + v982;
    v1033 = v617 + v845;
    v527 = v526 + v302;
    v306 = v817 + v900;
    v307 = (v817 + v900) ^ __ROR4__(v296, 21);
    v308 = v1056 + v299;
    v309 = v295 ^ __ROR4__(v299, 21);
    v618 = v308;
    v310 = v732;
    v733 = v301 ^ __ROR4__(v1120, 21);
    v818 = v305 ^ __ROR4__(v926, 21);
    v311 = v310 + v303;
    v589 = v704 ^ __ROR4__(v588, 21);
    v927 = v558 ^ __ROR4__(v1100, 21);
    v983 = (v291 + v1080) ^ __ROR4__(v982, 21);
    v1081 = v647 ^ __ROR4__(v1080, 21);
    v1057 = v304 ^ __ROR4__(v845, 21);
    v1101 = v1033 ^ __ROR4__(v789, 21);
    v312 = v297 ^ __ROR4__(v900, 21);
    v313 = v301 + v312;
    v790 = v675 ^ __ROR4__(v302, 21);
    v762 = v527 ^ __ROR4__(v761, 21);
    v901 = v297 + v733;
    v314 = v618 ^ __ROR4__(v293, 21);
    v315 = v306 + v818;
    v316 = v1011 ^ __ROR4__(v303, 21);
    v317 = v955;
    v956 = v305 + v307;
    v318 = v304 + v316;
    v319 = v311 ^ __ROR4__(v317, 21);
    v1121 = v675 + v589;
    v320 = v704 + v790;
    v321 = (v704 + v790) ^ __ROR4__(v316, 25);
    v528 = v527 + v927;
    v559 = v558 + v762;
    v322 = v295 + v983;
    v676 = v873 + v309;
    v619 = v618 + v1081;
    v648 = v647 + v314;
    v323 = v1011 + v1057;
    v324 = v311 + v1101;
    v705 = v1033 + v319;
    v325 = v733;
    v734 = v313 ^ __ROR4__(v309, 25);
    v874 = v901 ^ __ROR4__(v983, 25);
    v1012 = v322 ^ __ROR4__(v325, 25);
    v326 = v676 ^ __ROR4__(v312, 25);
    v984 = v315 ^ __ROR4__(v1081, 25);
    v1082 = v619 ^ __ROR4__(v818, 25);
    v327 = v956 ^ __ROR4__(v314, 25);
    v328 = v648 ^ __ROR4__(v307, 25);
    v819 = v1121 ^ __ROR4__(v1057, 25);
    v329 = v589;
    v590 = v321;
    v330 = v318 ^ __ROR4__(v790, 25);
    v846 = v323 ^ __ROR4__(v329, 25);
    v331 = v318 + v326;
    v1034 = v330;
    v791 = v528 ^ __ROR4__(v1101, 25);
    v928 = v324 ^ __ROR4__(v927, 25);
    v332 = v559 ^ __ROR4__(v319, 25);
    v333 = v705 ^ __ROR4__(v762, 25);
    v763 = v1121 + v874;
    v902 = v901 + v819;
    v334 = v320 + v734;
    v1058 = v323 + v1012;
    v335 = v322 + v846;
    v336 = v313 + v590;
    v337 = v676 + v1034;
    v529 = v528 + v984;
    v338 = v315 + v791;
    v677 = v324 + v1082;
    v339 = v956 + v332;
    v1102 = v619 + v928;
    v340 = v559 + v327;
    v341 = v334 ^ __ROR4__(v327, 21);
    v560 = v340;
    v342 = v705 + v328;
    v343 = v331 ^ __ROR4__(v328, 21);
    v620 = v342;
    v649 = v648 + v333;
    v344 = v337 ^ __ROR4__(v333, 21);
    v706 = (v1121 + v874) ^ __ROR4__(v984, 21);
    v875 = v529 ^ __ROR4__(v874, 21);
    v792 = v902 ^ __ROR4__(v791, 21);
    v820 = v338 ^ __ROR4__(v819, 21);
    v957 = v1058 ^ __ROR4__(v1082, 21);
    v985 = v677 ^ __ROR4__(v1012, 21);
    v345 = v335 ^ __ROR4__(v928, 21);
    v346 = v335 + v344;
    v929 = v345;
    v347 = v734;
    v735 = v336 ^ __ROR4__(v332, 21);
    v847 = v1102 ^ __ROR4__(v846, 21);
    v591 = v339 ^ __ROR4__(v590, 21);
    v348 = v560 ^ __ROR4__(v347, 21);
    v349 = v620 ^ __ROR4__(v326, 21);
    v350 = v649 ^ __ROR4__(v1034, 21);
    v1013 = v334 + v706;
    v764 = v763 + v341;
    v561 = v560 + v875;
    v530 = v529 + v348;
    v351 = v336 + v792;
    v352 = v902 + v735;
    v353 = (v902 + v735) ^ __ROR4__(v344, 25);
    v354 = v339 + v820;
    v903 = v338 + v591;
    v355 = v331 + v957;
    v1035 = v1058 + v343;
    v621 = v620 + v985;
    v678 = v677 + v349;
    v356 = v337 + v929;
    v650 = v649 + v847;
    v1059 = v1102 + v350;
    v958 = v1013 ^ __ROR4__(v957, 25);
    v357 = v706;
    v358 = v1035 ^ __ROR4__(v341, 25);
    v707 = v353;
    v1083 = v355 ^ __ROR4__(v357, 25);
    v359 = v346 ^ __ROR4__(v735, 25);
    v360 = v346 + v358;
    v361 = v764 ^ __ROR4__(v343, 25);
    v362 = v352 + v361;
    v1122 = v561 ^ __ROR4__(v985, 25);
    v986 = v621 ^ __ROR4__(v875, 25);
    v363 = v929;
    v930 = v359;
    v876 = v530 ^ __ROR4__(v349, 25);
    v364 = v678 ^ __ROR4__(v348, 25);
    v793 = v356 ^ __ROR4__(v792, 25);
    v1103 = v351 ^ __ROR4__(v363, 25);
    v736 = v354 ^ __ROR4__(v847, 25);
    v365 = v591;
    v821 = v650 ^ __ROR4__(v820, 25);
    v366 = v351 + v958;
    v592 = v1013 + v1103;
    v367 = v903 ^ __ROR4__(v350, 25);
    v848 = v356 + v1083;
    v368 = v1059 ^ __ROR4__(v365, 25);
    v369 = v355 + v793;
    v765 = v764 + v707;
    v1014 = v1035 + v930;
    v370 = v354 + v1122;
    v562 = v561 + v736;
    v651 = v650 + v986;
    v1036 = v621 + v821;
    v371 = v903 + v876;
    v531 = v530 + v367;
    v372 = (v903 + v876) ^ __ROR4__(v361, 21);
    v373 = v1059 + v364;
    v374 = v360 ^ __ROR4__(v364, 21);
    v622 = v373;
    v375 = v678;
    v679 = v366 ^ __ROR4__(v1122, 21);
    v904 = v370 ^ __ROR4__(v958, 21);
    v376 = v375 + v368;
    v737 = v592 ^ __ROR4__(v736, 21);
    v959 = v562 ^ __ROR4__(v1103, 21);
    v987 = (v356 + v1083) ^ __ROR4__(v986, 21);
    v1084 = v651 ^ __ROR4__(v1083, 21);
    v1060 = v369 ^ __ROR4__(v821, 21);
    v1104 = v1036 ^ __ROR4__(v793, 21);
    v377 = v362 ^ __ROR4__(v876, 21);
    v378 = v366 + v377;
    v794 = v765 ^ __ROR4__(v367, 21);
    v708 = v531 ^ __ROR4__(v707, 21);
    v379 = v622 ^ __ROR4__(v358, 21);
    v877 = v362 + v679;
    v380 = v1014 ^ __ROR4__(v368, 21);
    v381 = v371 + v904;
    v382 = v930;
    v931 = v370 + v372;
    v383 = v369 + v380;
    v384 = v376 ^ __ROR4__(v382, 21);
    v1123 = v765 + v737;
    v385 = v592 + v794;
    v386 = (v592 + v794) ^ __ROR4__(v380, 25);
    v532 = v531 + v959;
    v563 = v562 + v708;
    v387 = v360 + v987;
    v593 = v848 + v374;
    v623 = v622 + v1084;
    v652 = v651 + v379;
    v388 = v1014 + v1060;
    v389 = v376 + v1104;
    v766 = v1036 + v384;
    v390 = v679;
    v680 = v378 ^ __ROR4__(v374, 25);
    v849 = v877 ^ __ROR4__(v987, 25);
    v1015 = v387 ^ __ROR4__(v390, 25);
    v391 = v593 ^ __ROR4__(v377, 25);
    v988 = v381 ^ __ROR4__(v1084, 25);
    v1085 = v623 ^ __ROR4__(v904, 25);
    v392 = v931 ^ __ROR4__(v379, 25);
    v393 = v652 ^ __ROR4__(v372, 25);
    v822 = v1123 ^ __ROR4__(v1060, 25);
    v394 = v737;
    v738 = v386;
    v395 = v383 ^ __ROR4__(v794, 25);
    v905 = v388 ^ __ROR4__(v394, 25);
    v396 = v383 + v391;
    v1037 = v395;
    v795 = v532 ^ __ROR4__(v1104, 25);
    v960 = v389 ^ __ROR4__(v959, 25);
    v397 = v563 ^ __ROR4__(v384, 25);
    v398 = v766 ^ __ROR4__(v708, 25);
    v709 = v1123 + v849;
    v878 = v877 + v822;
    v399 = v385 + v680;
    v1061 = v388 + v1015;
    v400 = v387 + v905;
    v401 = v378 + v738;
    v402 = v593 + v1037;
    v533 = v532 + v988;
    v403 = v381 + v795;
    v594 = v389 + v1085;
    v404 = v931 + v397;
    v1105 = v623 + v960;
    v405 = v563 + v392;
    v406 = v399 ^ __ROR4__(v392, 21);
    v564 = v405;
    v407 = v766 + v393;
    v408 = v396 ^ __ROR4__(v393, 21);
    v624 = v407;
    v653 = v652 + v398;
    v409 = v402 ^ __ROR4__(v398, 21);
    v767 = (v1123 + v849) ^ __ROR4__(v988, 21);
    v850 = v533 ^ __ROR4__(v849, 21);
    v796 = v878 ^ __ROR4__(v795, 21);
    v823 = v403 ^ __ROR4__(v822, 21);
    v932 = v1061 ^ __ROR4__(v1085, 21);
    v989 = v594 ^ __ROR4__(v1015, 21);
    v410 = v400 ^ __ROR4__(v960, 21);
    v411 = v400 + v409;
    v961 = v410;
    v412 = v680;
    v681 = v401 ^ __ROR4__(v397, 21);
    v906 = v1105 ^ __ROR4__(v905, 21);
    v739 = v404 ^ __ROR4__(v738, 21);
    v413 = v564 ^ __ROR4__(v412, 21);
    v414 = v624 ^ __ROR4__(v391, 21);
    v415 = v653 ^ __ROR4__(v1037, 21);
    v1016 = v399 + v767;
    v710 = v709 + v406;
    v565 = v564 + v850;
    v534 = v533 + v413;
    v416 = v401 + v796;
    v417 = v878 + v681;
    v418 = (v878 + v681) ^ __ROR4__(v409, 25);
    v419 = v404 + v823;
    v879 = v403 + v739;
    v420 = v396 + v932;
    v1038 = v1061 + v408;
    v625 = v624 + v989;
    v595 = v594 + v414;
    v421 = v402 + v961;
    v654 = v653 + v906;
    v1062 = v1105 + v415;
    v933 = v1016 ^ __ROR4__(v932, 25);
    v422 = v1038 ^ __ROR4__(v406, 25);
    v1086 = v420 ^ __ROR4__(v767, 25);
    v423 = v710 ^ __ROR4__(v408, 25);
    v424 = v417 + v423;
    v1124 = v565 ^ __ROR4__(v989, 25);
    v990 = v625 ^ __ROR4__(v850, 25);
    v768 = v418;
    v425 = v595 ^ __ROR4__(v413, 25);
    v851 = v534 ^ __ROR4__(v414, 25);
    v426 = v411 ^ __ROR4__(v681, 25);
    v427 = v411 + v422;
    v428 = __ROR4__(v961, 25);
    v962 = v426;
    v797 = v421 ^ __ROR4__(v796, 25);
    v1106 = v416 ^ v428;
    v682 = v419 ^ __ROR4__(v906, 25);
    v824 = v654 ^ __ROR4__(v823, 25);
    v429 = v416 + v933;
    v430 = (v403 + v739) ^ __ROR4__(v415, 25);
    v431 = v739;
    v740 = v1016 + v1106;
    v432 = v1062 ^ __ROR4__(v431, 25);
    v907 = v421 + v1086;
    v433 = v420 + v797;
    v711 = v710 + v768;
    v1017 = v1038 + v962;
    v434 = v419 + v1124;
    v566 = v565 + v682;
    v655 = v654 + v990;
    v1039 = v625 + v824;
    v435 = v879 + v851;
    v436 = (v879 + v851) ^ __ROR4__(v423, 21);
    v535 = v534 + v430;
    v437 = v1062 + v425;
    v438 = v427 ^ __ROR4__(v425, 21);
    v626 = v437;
    v439 = v595;
    v596 = v429 ^ __ROR4__(v1124, 21);
    v880 = v434 ^ __ROR4__(v933, 21);
    v440 = v439 + v432;
    v683 = v740 ^ __ROR4__(v682, 21);
    v934 = v566 ^ __ROR4__(v1106, 21);
    v991 = (v421 + v1086) ^ __ROR4__(v990, 21);
    v1087 = v655 ^ __ROR4__(v1086, 21);
    v1063 = v433 ^ __ROR4__(v824, 21);
    v1125 = v434 + v436;
    v1107 = v1039 ^ __ROR4__(v797, 21);
    v441 = v424 ^ __ROR4__(v851, 21);
    v442 = v429 + v441;
    v798 = v711 ^ __ROR4__(v430, 21);
    v769 = v535 ^ __ROR4__(v768, 21);
    v443 = v1017 ^ __ROR4__(v432, 21);
    v444 = v433 + v443;
    v445 = v626 ^ __ROR4__(v422, 21);
    v852 = v424 + v596;
    v446 = v962;
    v963 = v435 + v880;
    v447 = v440 ^ __ROR4__(v446, 21);
    v448 = v711 + v683;
    v449 = v740 + v798;
    v450 = (v740 + v798) ^ __ROR4__(v443, 25);
    v536 = v535 + v934;
    v567 = v566 + v769;
    v451 = v427 + v991;
    v452 = v907 + v438;
    v627 = v626 + v1087;
    v656 = v655 + v445;
    v453 = v1017;
    v1018 = (v907 + v438) ^ __ROR4__(v441, 25);
    v454 = v453 + v1063;
    v712 = v440 + v1107;
    v741 = v1039 + v447;
    v908 = v852 ^ __ROR4__(v991, 25);
    v992 = v451 ^ __ROR4__(v596, 25);
    v597 = v442 ^ __ROR4__(v438, 25);
    v825 = v963 ^ __ROR4__(v1087, 25);
    v1040 = v627 ^ __ROR4__(v880, 25);
    v455 = v1125 ^ __ROR4__(v445, 25);
    v456 = v683;
    v684 = v450;
    v457 = v656 ^ __ROR4__(v436, 25);
    v458 = v448 ^ __ROR4__(v1063, 25);
    v459 = v454 ^ __ROR4__(v456, 25);
    v881 = v444 ^ __ROR4__(v798, 25);
    v460 = v451 + v459;
    v799 = v536 ^ __ROR4__(v1107, 25);
    v935 = v712 ^ __ROR4__(v934, 25);
    v461 = v567 ^ __ROR4__(v447, 25);
    v462 = v741 ^ __ROR4__(v769, 25);
    v463 = v448 + v908;
    v770 = v852 + v458;
    v464 = v454 + v992;
    v465 = v442 + v684;
    v466 = v449 + v597;
    v467 = v444 + v1018;
    v468 = v452 + v881;
    v537 = v536 + v825;
    v853 = v963 + v799;
    v713 = v712 + v1040;
    v964 = v627 + v935;
    v568 = v567 + v455;
    v469 = v741 + v457;
    v470 = v467 ^ __ROR4__(v457, 21);
    v742 = v469;
    v471 = v656 + v462;
    v472 = v468 ^ __ROR4__(v462, 21);
    v657 = v471;
    v826 = v463 ^ __ROR4__(v825, 21);
    v1064 = v537 ^ __ROR4__(v908, 21);
    v473 = v799;
    v800 = v466 ^ __ROR4__(v455, 21);
    v909 = v770 ^ __ROR4__(v473, 21);
    v1088 = v853 ^ __ROR4__(v458, 21);
    v474 = v464 ^ __ROR4__(v1040, 21);
    v475 = v464 + v470;
    v1108 = v474;
    v1041 = v713 ^ __ROR4__(v992, 21);
    v476 = (v627 + v935) ^ __ROR4__(v459, 21);
    v477 = v597;
    v598 = v465 ^ __ROR4__(v461, 21);
    v478 = v460 ^ __ROR4__(v935, 21);
    v479 = v460 + v472;
    v993 = v478;
    v936 = v568 ^ __ROR4__(v477, 21);
    v685 = (v1125 + v461) ^ __ROR4__(v684, 21);
    v480 = v742 ^ __ROR4__(v1018, 21);
    v882 = v657 ^ __ROR4__(v881, 21);
    v481 = v466 + v826;
    v482 = v463 + v800;
    v569 = v568 + v1064;
    v538 = v537 + v936;
    v483 = v770 + v598;
    v484 = (v770 + v598) ^ __ROR4__(v472, 25);
    v628 = v1125 + v461 + v1088;
    v771 = v853 + v685;
    v485 = v467 + v1108;
    v854 = v481 ^ __ROR4__(v1108, 25);
    v743 = v742 + v1041;
    v714 = v713 + v480;
    v486 = v468 + v993;
    v1126 = v485 ^ __ROR4__(v826, 25);
    v658 = v657 + v476;
    v1109 = v482 ^ __ROR4__(v470, 25);
    v487 = v964 + v882;
    v488 = v1041;
    v1042 = v484;
    v1132 = v475 ^ __ROR4__(v800, 25);
    v827 = v569 ^ __ROR4__(v488, 25);
    v489 = v743 ^ __ROR4__(v1064, 25);
    v1065 = v538 ^ __ROR4__(v480, 25);
    v1138 = v714 ^ __ROR4__(v936, 25);
    v801 = (v465 + v909) ^ __ROR4__(v993, 25);
    v1135 = v486 ^ __ROR4__(v909, 25);
    v1137 = v479 ^ __ROR4__(v598, 25);
    v490 = v628 ^ __ROR4__(v476, 25);
    v491 = v658 ^ __ROR4__(v1088, 25);
    v492 = v771 ^ __ROR4__(v882, 25);
    v1089 = (v964 + v882) ^ __ROR4__(v685, 25);
    v855 = v465 + v909 + v854;
    v883 = v481 + v801;
    v13 = v486 + v1126;
    v9 = v485 + v1135;
    v11 = v483 + v1109;
    v10 = v482 + v1042;
    v12 = v479 + v1132;
    v8 = v475 + v1137;
    v910 = v628 + v827;
    v1139 = v569 + v490;
    v570 = v658 + v489;
    v17 = v13 ^ __ROR4__(v489, 21);
    v493 = v743 + v491;
    v18 = v9 ^ __ROR4__(v491, 21);
    v539 = v493;
    v937 = v771 + v1065;
    v494 = v538 + v492;
    v15 = v10 ^ __ROR4__(v492, 21);
    v965 = v494;
    v7 = v487 + v1138;
    v994 = v714 + v1089;
    v508 = v855 ^ __ROR4__(v827, 21);
    v629 = (v628 + v827) ^ __ROR4__(v854, 21);
    v14 = (v481 + v801) ^ __ROR4__(v490, 21);
    v16 = v1139 ^ __ROR4__(v801, 21);
    v744 = v570 ^ __ROR4__(v1126, 21);
    v802 = v539 ^ __ROR4__(v1135, 21);
    v599 = v11 ^ __ROR4__(v1065, 21);
    v659 = v937 ^ __ROR4__(v1109, 21);
    v686 = v494 ^ __ROR4__(v1042, 21);
    v1090 = v12 ^ __ROR4__(v1138, 21);
    v772 = v7 ^ __ROR4__(v1132, 21);
    v715 = v8 ^ __ROR4__(v1089, 21);
    v828 = v994 ^ __ROR4__(v1137, 21);
    if ( v507 )
      break;
    v539 ^= 1u;
    v495 = 0;
LABEL_2:
    v507 = v495 + 1;
  }
  v495 = v507;
  if ( v507 != 10 )
    goto LABEL_2;
  a1[9] = v508;
  a1[10] = v599;
  a1[11] = v14;
  a1[12] = v15;
  a1[13] = v629;
  a1[29] = v937;
  a1[14] = v659;
  a1[25] = v11;
  a1[15] = v16;
  a1[30] = v910;
  a1[31] = v965;
  a1[16] = v686;
  a1[26] = v855;
  a1[27] = v10;
  a1[17] = v17;
  a1[28] = v883;
  a1[18] = v1090;
  a1[19] = v18;
  a1[20] = v715;
  a1[21] = v744;
  a1[22] = v772;
  a1[23] = v802;
  a1[24] = v828;
  a1[32] = v1139;
  a1[39] = v994;
  a1[33] = v12;
  a1[37] = v7;
  a1[38] = v570;
  a1[40] = v539;
  a1[34] = v13;
  a1[35] = v8;
  a1[36] = v9;
  *a4 = (unsigned __int16)((unsigned __int8)v508 | (BYTE1(v508) << 8))
      | (BYTE2(v508) << 16) & 0xFFFFFF
      | (HIBYTE(v508) << 24);
  a4[1] = (unsigned __int8)a1[10]
        | (unsigned __int16)((unsigned __int8)BYTE1(a1[10]) << 8)
        | ((unsigned __int8)BYTE2(a1[10]) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(a1[10]) << 24);
  v496 = a1[11];
  result = v496 >> 8;
  a4[2] = (unsigned __int8)v496
        | (unsigned __int16)(BYTE1(v496) << 8)
        | (BYTE2(v496) << 16) & 0xFFFFFF
        | (HIBYTE(v496) << 24);
  a4[3] = (unsigned __int8)a1[12]
        | (unsigned __int16)((unsigned __int8)BYTE1(a1[12]) << 8)
        | ((unsigned __int8)BYTE2(a1[12]) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(a1[12]) << 24);
  a4[4] = (unsigned __int8)a1[13]
        | (unsigned __int16)((unsigned __int8)BYTE1(a1[13]) << 8)
        | ((unsigned __int8)BYTE2(a1[13]) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(a1[13]) << 24);
  a4[5] = (unsigned __int8)a1[14]
        | (unsigned __int16)((unsigned __int8)BYTE1(a1[14]) << 8)
        | ((unsigned __int8)BYTE2(a1[14]) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(a1[14]) << 24);
  a4[6] = (unsigned __int8)a1[15]
        | (unsigned __int16)((unsigned __int8)BYTE1(a1[15]) << 8)
        | ((unsigned __int8)BYTE2(a1[15]) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(a1[15]) << 24);
  if ( a5 != 7 )
  {
    v498 = a1[16];
    result = v498 >> 8;
    a4[7] = (unsigned __int8)v498
          | (unsigned __int16)(BYTE1(v498) << 8)
          | (BYTE2(v498) << 16) & 0xFFFFFF
          | (HIBYTE(v498) << 24);
    if ( a5 != 8 )
    {
      v499 = a1[17];
      result = v499 >> 8;
      a4[8] = (unsigned __int8)v499
            | (unsigned __int16)(BYTE1(v499) << 8)
            | (BYTE2(v499) << 16) & 0xFFFFFF
            | (HIBYTE(v499) << 24);
      if ( a5 != 9 )
      {
        v500 = a1[18];
        result = v500 >> 8;
        a4[9] = (unsigned __int8)v500
              | (unsigned __int16)(BYTE1(v500) << 8)
              | (BYTE2(v500) << 16) & 0xFFFFFF
              | (HIBYTE(v500) << 24);
        if ( a5 != 10 )
        {
          v501 = a1[19];
          result = v501 >> 8;
          a4[10] = (unsigned __int8)v501
                 | (unsigned __int16)(BYTE1(v501) << 8)
                 | (BYTE2(v501) << 16) & 0xFFFFFF
                 | (HIBYTE(v501) << 24);
          if ( a5 != 11 )
          {
            v502 = a1[20];
            result = v502 >> 8;
            a4[11] = (unsigned __int8)v502
                   | (unsigned __int16)(BYTE1(v502) << 8)
                   | (BYTE2(v502) << 16) & 0xFFFFFF
                   | (HIBYTE(v502) << 24);
            if ( a5 != 12 )
            {
              v503 = a1[21];
              result = v503 >> 8;
              a4[12] = (unsigned __int8)v503
                     | (unsigned __int16)(BYTE1(v503) << 8)
                     | (BYTE2(v503) << 16) & 0xFFFFFF
                     | (HIBYTE(v503) << 24);
              if ( a5 != 13 )
              {
                v504 = a1[22];
                result = v504 >> 8;
                a4[13] = (unsigned __int8)v504
                       | (unsigned __int16)(BYTE1(v504) << 8)
                       | (BYTE2(v504) << 16) & 0xFFFFFF
                       | (HIBYTE(v504) << 24);
                if ( a5 != 14 )
                {
                  v505 = a1[23];
                  result = v505 >> 8;
                  a4[14] = (unsigned __int8)v505
                         | (unsigned __int16)(BYTE1(v505) << 8)
                         | (BYTE2(v505) << 16) & 0xFFFFFF
                         | (HIBYTE(v505) << 24);
                  if ( a5 == 16 )
                  {
                    v506 = a1[24];
                    result = v506 >> 8;
                    a4[15] = (unsigned __int8)v506
                           | (unsigned __int16)(BYTE1(v506) << 8)
                           | (BYTE2(v506) << 16) & 0xFFFFFF
                           | (HIBYTE(v506) << 24);
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
