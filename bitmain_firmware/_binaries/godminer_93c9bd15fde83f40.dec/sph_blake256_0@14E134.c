unsigned int __fastcall sph_blake256_0(unsigned int *a1, char *a2, size_t a3)
{
  unsigned int v3; // r5
  size_t v4; // r4
  unsigned int v5; // r1
  unsigned int result; // r0
  size_t i; // r6
  size_t v8; // r3
  char *v9; // r0
  bool v10; // cf
  unsigned int v11; // r0
  unsigned int v12; // lr
  unsigned int v13; // r3
  int v14; // r10
  int v15; // r8
  int v16; // r1
  unsigned int v17; // r3
  int v18; // r2
  int v19; // r9
  int v20; // r12
  int v21; // r6
  int v22; // r4
  int v23; // r11
  int v24; // r7
  unsigned int v25; // r0
  int v26; // lr
  int v27; // r3
  int v28; // r9
  int v29; // r8
  int v30; // r12
  int v31; // r2
  int v32; // r1
  int v33; // r4
  int v34; // r11
  int v35; // lr
  int v36; // r7
  int v37; // r6
  int v38; // r8
  int v39; // r5
  int v40; // r3
  int v41; // r0
  int v42; // r1
  int v43; // r10
  int v44; // r6
  int v45; // lr
  int v46; // r7
  int v47; // r5
  int v48; // r12
  int v49; // r9
  int v50; // r8
  int v51; // r1
  int v52; // r3
  int v53; // r0
  int v54; // r10
  int v55; // r2
  int v56; // r11
  int v57; // r6
  int v58; // r8
  int v59; // r4
  int v60; // r10
  int v61; // r7
  int v62; // r5
  int v63; // r0
  int v64; // r11
  int v65; // r9
  int v66; // r6
  int v67; // r12
  int v68; // r3
  int v69; // r1
  int v70; // r4
  int v71; // r5
  int v72; // r7
  int v73; // lr
  int v74; // r10
  int v75; // r12
  int v76; // r1
  int v77; // r0
  int v78; // r3
  int v79; // r9
  int v80; // r3
  int v81; // r2
  int v82; // r6
  int v83; // r11
  int v84; // r7
  int v85; // r5
  int v86; // r12
  int v87; // r9
  int v88; // r4
  int v89; // r3
  int v90; // r0
  int v91; // r8
  int v92; // r2
  int v93; // r1
  int v94; // r11
  int v95; // r10
  int v96; // lr
  int v97; // r7
  int v98; // r5
  int v99; // r12
  int v100; // r9
  int v101; // r0
  int v102; // r8
  int v103; // r2
  int v104; // r1
  int v105; // r6
  int v106; // r3
  int v107; // r10
  int v108; // r6
  int v109; // r4
  int v110; // r7
  int v111; // r11
  int v112; // lr
  int v113; // r8
  int v114; // r10
  int v115; // r11
  int v116; // r6
  int v117; // r12
  int v118; // r0
  int v119; // r9
  int v120; // r8
  int v121; // r4
  int v122; // r1
  int v123; // r10
  int v124; // r11
  int v125; // r6
  int v126; // r7
  int v127; // lr
  int v128; // r5
  int v129; // r0
  int v130; // lr
  int v131; // r9
  int v132; // r3
  int v133; // r12
  int v134; // r2
  int v135; // r1
  int v136; // r4
  int v137; // r5
  int v138; // lr
  int v139; // r7
  int v140; // r8
  int v141; // r0
  int v142; // r1
  int v143; // r9
  int v144; // r3
  int v145; // r6
  int v146; // r10
  int v147; // r4
  int v148; // r7
  int v149; // r5
  int v150; // r2
  int v151; // lr
  int v152; // r9
  int v153; // r10
  int v154; // r8
  int v155; // r12
  int v156; // r4
  int v157; // r1
  int v158; // r3
  int v159; // r6
  int v160; // r7
  int v161; // r8
  int v162; // r11
  int v163; // r5
  int v164; // r0
  int v165; // r10
  int v166; // lr
  int v167; // r1
  int v168; // r12
  int v169; // r9
  int v170; // r11
  int v171; // r2
  int v172; // r6
  int v173; // r5
  int v174; // r8
  int v175; // r10
  int v176; // r7
  int v177; // r0
  int v178; // lr
  int v179; // r12
  int v180; // r9
  int v181; // t2
  int v182; // r4
  int v183; // r11
  int v184; // r2
  int v185; // r5
  int v186; // r6
  int v187; // lr
  int v188; // r9
  int v189; // r0
  int v190; // r12
  int v191; // r4
  int v192; // r8
  int v193; // r10
  int v194; // r7
  int v195; // r2
  int v196; // r6
  int v197; // lr
  int v198; // r2
  int v199; // r0
  int v200; // r11
  int v201; // r5
  int v202; // r9
  int v203; // r3
  int v204; // lr
  int v205; // r12
  int v206; // r2
  int v207; // r5
  int v208; // r1
  int v209; // r4
  int v210; // r6
  int v211; // r10
  int v212; // r11
  int v213; // lr
  int v214; // r0
  int v215; // r7
  int v216; // r3
  int v217; // r5
  int v218; // r2
  int v219; // r12
  int v220; // r10
  int v221; // r4
  int v222; // r6
  int v223; // r1
  int v224; // r11
  int v225; // lr
  int v226; // r11
  int v227; // r8
  int v228; // r0
  int v229; // r3
  int v230; // r5
  int v231; // r1
  int v232; // r9
  int v233; // r12
  int v234; // r6
  int v235; // r2
  int v236; // r4
  int v237; // r11
  int v238; // lr
  int v239; // r0
  int v240; // r5
  int v241; // r4
  int v242; // r3
  int v243; // r7
  int v244; // r12
  int v245; // r9
  int v246; // r8
  int v247; // r2
  int v248; // r1
  int v249; // r6
  int v250; // r5
  int v251; // r0
  int v252; // r3
  int v253; // r11
  int v254; // r8
  int v255; // r10
  int v256; // lr
  int v257; // r12
  int v258; // r4
  int v259; // r9
  int v260; // r6
  int v261; // r7
  int v262; // r1
  int v263; // r11
  int v264; // r3
  int v265; // r8
  int v266; // r5
  int v267; // lr
  int v268; // r12
  int v269; // r10
  int v270; // r0
  int v271; // r4
  int v272; // r1
  int v273; // r3
  int v274; // r2
  int v275; // r6
  int v276; // r8
  int v277; // lr
  int v278; // r9
  int v279; // r0
  int v280; // r5
  int v281; // r1
  int v282; // r12
  int v283; // r5
  int v284; // r4
  int v285; // r11
  int v286; // r3
  int v287; // r1
  int v288; // r2
  int v289; // r9
  int v290; // lr
  int v291; // r10
  int v292; // r8
  int v293; // r5
  int v294; // r1
  int v295; // r7
  int v296; // r0
  int v297; // r12
  int v298; // r2
  int v299; // r6
  int v300; // r3
  int v301; // r11
  int v302; // r0
  int v303; // r1
  int v304; // r8
  int v305; // r12
  int v306; // r9
  int v307; // r4
  int v308; // r7
  int v309; // r10
  int v310; // r5
  int v311; // r6
  int v312; // r5
  int v313; // r3
  int v314; // r8
  int v315; // r1
  int v316; // r4
  unsigned int v317; // r11
  int v318; // r12
  int v319; // r9
  int v320; // r0
  int v321; // lr
  int v322; // t2
  int v323; // r3
  int v324; // r2
  int v325; // r10
  int v326; // r11
  int v327; // r12
  int v328; // r0
  int v329; // r6
  int v330; // r8
  int v331; // r7
  int v332; // lr
  int v333; // r5
  int v334; // r1
  int v335; // r9
  int v336; // r3
  int v337; // r6
  int v338; // r10
  int v339; // r3
  int v340; // lr
  int v341; // r8
  int v342; // r2
  int v343; // r11
  int v344; // r4
  int v345; // r0
  int v346; // r1
  int v347; // r7
  int v348; // r12
  int v349; // r5
  int v350; // r10
  int v351; // r2
  int v352; // lr
  int v353; // r3
  int v354; // r1
  int v355; // r9
  int v356; // r8
  int v357; // r12
  int v358; // r4
  int v359; // r11
  int v360; // r5
  int v361; // r2
  int v362; // r7
  int v363; // r6
  int v364; // r3
  int v365; // r1
  int v366; // r5
  int v367; // r11
  int v368; // r10
  int v369; // r8
  int v370; // lr
  int v371; // r0
  int v372; // r9
  int v373; // r10
  int v374; // r4
  int v375; // r2
  int v376; // r1
  int v377; // r3
  int v378; // r7
  int v379; // r5
  int v380; // r4
  int v381; // r8
  int v382; // r6
  int v383; // lr
  int v384; // r12
  int v385; // r1
  int v386; // r3
  int v387; // r2
  int v388; // r9
  int v389; // r7
  int v390; // r5
  int v391; // r12
  int v392; // r8
  int v393; // r4
  int v394; // r6
  int v395; // r0
  int v396; // r2
  int v397; // r3
  int v398; // r1
  int v399; // r9
  int v400; // r11
  int v401; // r8
  int v402; // lr
  int v403; // r7
  int v404; // r12
  int v405; // r6
  int v406; // lr
  int v407; // t2
  int v408; // r0
  int v409; // r2
  int v410; // r10
  int v411; // r3
  int v412; // r1
  int v413; // r6
  int v414; // r7
  int v415; // r12
  int v416; // r11
  int v417; // r8
  int v418; // r9
  int v419; // r5
  int v420; // lr
  int v421; // r0
  int v422; // r6
  int v423; // r10
  int v424; // r3
  int v425; // r1
  int v426; // r11
  int v427; // r12
  int v428; // r2
  int v429; // r7
  int v430; // lr
  int v431; // r8
  int v432; // r6
  int v433; // r3
  int v434; // r1
  int v435; // r2
  int v436; // r5
  int v437; // r2
  int v438; // r9
  int v439; // r11
  int v440; // r0
  int v441; // r7
  int v442; // r12
  int v443; // r12
  int v444; // r4
  int v445; // r10
  int v446; // lr
  int v447; // r3
  int v448; // r2
  int v449; // r5
  int v450; // r0
  int v451; // r12
  int v452; // r6
  int v453; // r11
  int v454; // r7
  int v455; // r8
  int v456; // lr
  int v457; // r10
  int v458; // r1
  int v459; // r3
  int v460; // r4
  int v461; // r9
  int v462; // r2
  int v463; // r6
  int v464; // r5
  int v465; // r11
  int v466; // r0
  int v467; // r6
  int v468; // r1
  int v469; // r8
  int v470; // r7
  int v471; // lr
  int v472; // r4
  int v473; // r2
  int v474; // r5
  int v475; // r9
  int v476; // r10
  int v477; // r3
  int v478; // r1
  int v479; // r11
  int v480; // r6
  int v481; // r8
  int v482; // r10
  int v483; // r12
  int v484; // r2
  int v485; // r4
  int v486; // r0
  int v487; // r5
  int v488; // t2
  int v489; // r8
  int v490; // r3
  int v491; // r1
  int v492; // r4
  int v493; // r10
  int v494; // r3
  int v495; // r10
  int v496; // r1
  int v497; // r7
  int v498; // lr
  int v499; // r5
  int v500; // r2
  int v501; // r9
  int v502; // r12
  int v503; // r8
  int v504; // r0
  int v505; // r6
  int v506; // r3
  int v507; // r10
  int v508; // r1
  int v509; // r4
  int v510; // r12
  int v511; // r11
  int v512; // r6
  int v513; // lr
  int v514; // r0
  int v515; // r2
  int v516; // r5
  int v517; // r7
  int v518; // r10
  int v519; // r1
  unsigned int v520; // r11
  int v521; // r6
  int v522; // lr
  int v523; // r9
  int v524; // r12
  int v525; // r4
  int v526; // r7
  int v527; // r8
  int v528; // r0
  int v529; // r5
  int v530; // r11
  int v531; // r10
  int v532; // r6
  int v533; // r9
  int v534; // r2
  int v535; // r1
  int v536; // r3
  int v537; // r2
  int v538; // lr
  int v539; // r4
  int v540; // r12
  int v541; // r9
  int v542; // r8
  int v543; // r0
  int v544; // r2
  int v545; // r3
  int v546; // r5
  int v547; // r8
  int v548; // r1
  int v549; // r4
  int v550; // r10
  int v551; // r7
  int v552; // r12
  int v553; // r0
  int v554; // r6
  int v555; // r2
  int v556; // r9
  int v557; // r5
  int v558; // r10
  int v559; // r3
  int v560; // r8
  int v561; // r4
  int v562; // r1
  int v563; // r7
  int v564; // r12
  int v565; // r0
  int v566; // r6
  int v567; // r9
  int v568; // r11
  int v569; // lr
  int v570; // r2
  int v571; // r10
  int v572; // r3
  int v573; // r1
  int v574; // r7
  int v575; // r6
  int v576; // r8
  int v577; // r0
  int v578; // r12
  int v579; // lr
  int v580; // r4
  int v581; // r2
  int v582; // r5
  int v583; // r11
  int v584; // r10
  int v585; // r7
  int v586; // r3
  int v587; // r1
  int v588; // r9
  int v589; // r12
  int v590; // r2
  int v591; // r8
  int v592; // r11
  int v593; // r0
  int v594; // lr
  int v595; // r10
  int v596; // r4
  int v597; // r5
  int v598; // r3
  int v599; // r8
  int v600; // r1
  int v601; // r4
  int v602; // r6
  int v603; // r11
  int v604; // r0
  int v605; // r12
  int v606; // r5
  int v607; // r9
  int v608; // lr
  int v609; // r2
  int v610; // r8
  int v611; // r4
  int v612; // r10
  int v613; // r1
  int v614; // r3
  int v615; // r6
  int v616; // r7
  int v617; // r0
  int v618; // r8
  int v619; // lr
  int v620; // r12
  int v621; // r11
  int v622; // r4
  int v623; // r8
  int v624; // r2
  int v625; // r10
  int v626; // r3
  int v627; // r1
  int v628; // r5
  unsigned int v629; // r6
  int v630; // r0
  int v631; // r4
  int v632; // r7
  int v633; // r9
  int v634; // r12
  int v635; // lr
  int v636; // r11
  int v637; // r10
  int v638; // r2
  int v639; // r2
  int v640; // r3
  int v641; // r1
  int v642; // r6
  int v643; // r7
  int v644; // r5
  int v645; // r8
  int v646; // r12
  int v647; // r0
  int v648; // r8
  int v649; // r4
  int v650; // lr
  int v651; // r11
  int v652; // r2
  int v653; // r10
  int v654; // r9
  int v655; // r1
  int v656; // r3
  int v657; // r5
  int v658; // r6
  int v659; // lr
  int v660; // r7
  int v661; // r11
  int v662; // r9
  int v663; // r8
  int v664; // r12
  int v665; // r4
  int v666; // r10
  int v667; // r2
  int v668; // r1
  int v669; // r3
  int v670; // r5
  int v671; // r6
  int v672; // lr
  int v673; // r7
  int v674; // r11
  int v675; // r2
  int v676; // r12
  int v677; // r8
  int v678; // r4
  int v679; // r0
  int v680; // r11
  int v681; // r1
  int v682; // r9
  int v683; // r10
  int v684; // r2
  int v685; // r5
  int v686; // r7
  int v687; // r0
  int v688; // r4
  int v689; // r8
  int v690; // r6
  int v691; // lr
  int v692; // r12
  int v693; // r11
  int v694; // r2
  int v695; // r3
  int v696; // r9
  int v697; // r1
  int v698; // r6
  int v699; // r7
  int v700; // r12
  int v701; // r4
  int v702; // r5
  int v703; // r8
  int v704; // r0
  int v705; // lr
  int v706; // r11
  int v707; // r2
  int v708; // r3
  int v709; // r9
  int v710; // r1
  int v711; // r6
  int v712; // r7
  int v713; // r0
  int v714; // r5
  int v715; // r12
  int v716; // lr
  int v717; // r8
  int v718; // r4
  int v719; // r10
  int v720; // r3
  int v721; // r9
  int v722; // r1
  int v723; // r2
  int v724; // r8
  int v725; // r11
  int v726; // r4
  int v727; // r2
  size_t na; // [sp+4h] [bp-1E8h]
  int v732; // [sp+8h] [bp-1E4h]
  int v733; // [sp+8h] [bp-1E4h]
  int v734; // [sp+8h] [bp-1E4h]
  int v735; // [sp+8h] [bp-1E4h]
  int v736; // [sp+8h] [bp-1E4h]
  int v737; // [sp+8h] [bp-1E4h]
  int v738; // [sp+8h] [bp-1E4h]
  int v739; // [sp+8h] [bp-1E4h]
  int v740; // [sp+8h] [bp-1E4h]
  int v741; // [sp+8h] [bp-1E4h]
  int v742; // [sp+8h] [bp-1E4h]
  int v743; // [sp+8h] [bp-1E4h]
  int v744; // [sp+8h] [bp-1E4h]
  int v745; // [sp+8h] [bp-1E4h]
  int v746; // [sp+8h] [bp-1E4h]
  int v747; // [sp+8h] [bp-1E4h]
  int v748; // [sp+8h] [bp-1E4h]
  int v749; // [sp+14h] [bp-1D8h]
  int v750; // [sp+14h] [bp-1D8h]
  int v751; // [sp+14h] [bp-1D8h]
  int v752; // [sp+14h] [bp-1D8h]
  int v753; // [sp+14h] [bp-1D8h]
  int v754; // [sp+14h] [bp-1D8h]
  int v755; // [sp+14h] [bp-1D8h]
  int v756; // [sp+14h] [bp-1D8h]
  int v757; // [sp+14h] [bp-1D8h]
  int v758; // [sp+14h] [bp-1D8h]
  int v759; // [sp+14h] [bp-1D8h]
  int v760; // [sp+14h] [bp-1D8h]
  int v761; // [sp+14h] [bp-1D8h]
  int v762; // [sp+14h] [bp-1D8h]
  int v763; // [sp+14h] [bp-1D8h]
  int v764; // [sp+14h] [bp-1D8h]
  int v765; // [sp+14h] [bp-1D8h]
  int v766; // [sp+14h] [bp-1D8h]
  int v767; // [sp+18h] [bp-1D4h]
  int v768; // [sp+18h] [bp-1D4h]
  int v769; // [sp+18h] [bp-1D4h]
  int v770; // [sp+18h] [bp-1D4h]
  int v771; // [sp+18h] [bp-1D4h]
  int v772; // [sp+18h] [bp-1D4h]
  int v773; // [sp+18h] [bp-1D4h]
  int v774; // [sp+18h] [bp-1D4h]
  int v775; // [sp+18h] [bp-1D4h]
  int v776; // [sp+18h] [bp-1D4h]
  int v777; // [sp+18h] [bp-1D4h]
  int v778; // [sp+20h] [bp-1CCh]
  unsigned int v779; // [sp+20h] [bp-1CCh]
  int v780; // [sp+20h] [bp-1CCh]
  int v781; // [sp+20h] [bp-1CCh]
  int v782; // [sp+20h] [bp-1CCh]
  int v783; // [sp+20h] [bp-1CCh]
  int v784; // [sp+20h] [bp-1CCh]
  int v785; // [sp+20h] [bp-1CCh]
  int v786; // [sp+20h] [bp-1CCh]
  int v787; // [sp+20h] [bp-1CCh]
  int v788; // [sp+20h] [bp-1CCh]
  int v789; // [sp+20h] [bp-1CCh]
  int v790; // [sp+24h] [bp-1C8h]
  unsigned int v791; // [sp+24h] [bp-1C8h]
  int v792; // [sp+24h] [bp-1C8h]
  int v793; // [sp+24h] [bp-1C8h]
  int v794; // [sp+24h] [bp-1C8h]
  unsigned int v795; // [sp+28h] [bp-1C4h]
  int v796; // [sp+28h] [bp-1C4h]
  unsigned int v797; // [sp+2Ch] [bp-1C0h]
  int v798; // [sp+2Ch] [bp-1C0h]
  int v799; // [sp+2Ch] [bp-1C0h]
  unsigned int v800; // [sp+30h] [bp-1BCh]
  int v801; // [sp+38h] [bp-1B4h]
  unsigned int v802; // [sp+38h] [bp-1B4h]
  int v803; // [sp+38h] [bp-1B4h]
  int v804; // [sp+38h] [bp-1B4h]
  int v805; // [sp+38h] [bp-1B4h]
  unsigned int v806; // [sp+3Ch] [bp-1B0h]
  int v807; // [sp+3Ch] [bp-1B0h]
  unsigned int v808; // [sp+40h] [bp-1ACh]
  int v809; // [sp+40h] [bp-1ACh]
  int v810; // [sp+40h] [bp-1ACh]
  int v811; // [sp+40h] [bp-1ACh]
  int v812; // [sp+44h] [bp-1A8h]
  unsigned int v813; // [sp+44h] [bp-1A8h]
  int v814; // [sp+44h] [bp-1A8h]
  int v815; // [sp+44h] [bp-1A8h]
  int v816; // [sp+44h] [bp-1A8h]
  unsigned int v817; // [sp+48h] [bp-1A4h]
  int v818; // [sp+48h] [bp-1A4h]
  int v819; // [sp+48h] [bp-1A4h]
  int v820; // [sp+48h] [bp-1A4h]
  int v821; // [sp+48h] [bp-1A4h]
  int v822; // [sp+48h] [bp-1A4h]
  int v823; // [sp+54h] [bp-198h]
  int v824; // [sp+54h] [bp-198h]
  int v825; // [sp+54h] [bp-198h]
  int v826; // [sp+54h] [bp-198h]
  int v827; // [sp+54h] [bp-198h]
  int v828; // [sp+58h] [bp-194h]
  int v829; // [sp+5Ch] [bp-190h]
  int v830; // [sp+5Ch] [bp-190h]
  unsigned int v831; // [sp+60h] [bp-18Ch]
  unsigned int v832; // [sp+64h] [bp-188h]
  int v833; // [sp+64h] [bp-188h]
  int v834; // [sp+64h] [bp-188h]
  unsigned int v835; // [sp+68h] [bp-184h]
  unsigned int v836; // [sp+6Ch] [bp-180h]
  int v837; // [sp+70h] [bp-17Ch]
  int v838; // [sp+70h] [bp-17Ch]
  int v839; // [sp+70h] [bp-17Ch]
  int v840; // [sp+70h] [bp-17Ch]
  int v841; // [sp+70h] [bp-17Ch]
  int v842; // [sp+70h] [bp-17Ch]
  int v843; // [sp+70h] [bp-17Ch]
  int v844; // [sp+74h] [bp-178h]
  int v845; // [sp+74h] [bp-178h]
  int v846; // [sp+74h] [bp-178h]
  int v847; // [sp+74h] [bp-178h]
  int v848; // [sp+74h] [bp-178h]
  int v849; // [sp+74h] [bp-178h]
  int v850; // [sp+74h] [bp-178h]
  int v851; // [sp+74h] [bp-178h]
  char *src; // [sp+7Ch] [bp-170h]
  unsigned int v853; // [sp+80h] [bp-16Ch]
  unsigned int v854; // [sp+84h] [bp-168h]
  int v855; // [sp+84h] [bp-168h]
  int v856; // [sp+88h] [bp-164h]
  int v857; // [sp+88h] [bp-164h]
  int v858; // [sp+88h] [bp-164h]
  unsigned int v859; // [sp+88h] [bp-164h]
  unsigned int v860; // [sp+8Ch] [bp-160h]
  unsigned int v861; // [sp+90h] [bp-15Ch]
  unsigned int v862; // [sp+94h] [bp-158h]
  unsigned int v863; // [sp+98h] [bp-154h]
  unsigned int v864; // [sp+9Ch] [bp-150h]
  unsigned int v865; // [sp+A0h] [bp-14Ch]
  unsigned int v866; // [sp+A4h] [bp-148h]
  unsigned int v867; // [sp+A8h] [bp-144h]
  unsigned int v868; // [sp+ACh] [bp-140h]
  unsigned int v869; // [sp+B0h] [bp-13Ch]
  unsigned int v870; // [sp+B4h] [bp-138h]
  size_t v871; // [sp+B8h] [bp-134h]
  unsigned int v872; // [sp+BCh] [bp-130h]
  int v873; // [sp+C0h] [bp-12Ch]
  int v874; // [sp+C0h] [bp-12Ch]
  unsigned int v875; // [sp+C0h] [bp-12Ch]
  int v876; // [sp+C4h] [bp-128h]
  int v877; // [sp+C4h] [bp-128h]
  int v878; // [sp+C4h] [bp-128h]
  int v879; // [sp+C4h] [bp-128h]
  int v880; // [sp+C8h] [bp-124h]
  int v881; // [sp+C8h] [bp-124h]
  int v882; // [sp+C8h] [bp-124h]
  int v883; // [sp+C8h] [bp-124h]
  int v884; // [sp+C8h] [bp-124h]
  int v885; // [sp+C8h] [bp-124h]
  int v886; // [sp+C8h] [bp-124h]
  int v887; // [sp+C8h] [bp-124h]
  int v888; // [sp+C8h] [bp-124h]
  int v889; // [sp+C8h] [bp-124h]
  int v890; // [sp+C8h] [bp-124h]
  int v891; // [sp+C8h] [bp-124h]
  int v892; // [sp+C8h] [bp-124h]
  int v893; // [sp+C8h] [bp-124h]
  int v894; // [sp+C8h] [bp-124h]
  int v895; // [sp+C8h] [bp-124h]
  int v896; // [sp+CCh] [bp-120h]
  int v897; // [sp+CCh] [bp-120h]
  int v898; // [sp+CCh] [bp-120h]
  int v899; // [sp+CCh] [bp-120h]
  int v900; // [sp+CCh] [bp-120h]
  int v901; // [sp+CCh] [bp-120h]
  int v902; // [sp+CCh] [bp-120h]
  int v903; // [sp+CCh] [bp-120h]
  int v904; // [sp+CCh] [bp-120h]
  int v905; // [sp+CCh] [bp-120h]
  int v906; // [sp+CCh] [bp-120h]
  int v907; // [sp+CCh] [bp-120h]
  int v908; // [sp+CCh] [bp-120h]
  int v909; // [sp+CCh] [bp-120h]
  int v910; // [sp+CCh] [bp-120h]
  int v911; // [sp+CCh] [bp-120h]
  int v912; // [sp+D0h] [bp-11Ch]
  int v913; // [sp+D0h] [bp-11Ch]
  int v914; // [sp+D0h] [bp-11Ch]
  int v915; // [sp+D0h] [bp-11Ch]
  int v916; // [sp+D0h] [bp-11Ch]
  int v917; // [sp+D0h] [bp-11Ch]
  int v918; // [sp+D0h] [bp-11Ch]
  int v919; // [sp+D0h] [bp-11Ch]
  int v920; // [sp+D0h] [bp-11Ch]
  int v921; // [sp+D0h] [bp-11Ch]
  int v922; // [sp+D0h] [bp-11Ch]
  int v923; // [sp+D0h] [bp-11Ch]
  int v924; // [sp+D0h] [bp-11Ch]
  int v925; // [sp+D0h] [bp-11Ch]
  int v926; // [sp+D0h] [bp-11Ch]
  int v927; // [sp+D0h] [bp-11Ch]
  int v928; // [sp+D0h] [bp-11Ch]
  int v929; // [sp+D0h] [bp-11Ch]
  int v930; // [sp+D0h] [bp-11Ch]
  int v931; // [sp+D0h] [bp-11Ch]
  int v932; // [sp+D0h] [bp-11Ch]
  int v933; // [sp+D0h] [bp-11Ch]
  int v934; // [sp+D4h] [bp-118h]
  int v935; // [sp+D4h] [bp-118h]
  int v936; // [sp+D4h] [bp-118h]
  int v937; // [sp+D4h] [bp-118h]
  int v938; // [sp+D4h] [bp-118h]
  int v939; // [sp+D4h] [bp-118h]
  int v940; // [sp+D4h] [bp-118h]
  int v941; // [sp+D4h] [bp-118h]
  int v942; // [sp+D4h] [bp-118h]
  int v943; // [sp+D4h] [bp-118h]
  int v944; // [sp+D4h] [bp-118h]
  int v945; // [sp+D4h] [bp-118h]
  int v946; // [sp+D4h] [bp-118h]
  int v947; // [sp+D4h] [bp-118h]
  int v948; // [sp+D8h] [bp-114h]
  int v949; // [sp+D8h] [bp-114h]
  int v950; // [sp+D8h] [bp-114h]
  int v951; // [sp+D8h] [bp-114h]
  int v952; // [sp+D8h] [bp-114h]
  int v953; // [sp+D8h] [bp-114h]
  int v954; // [sp+D8h] [bp-114h]
  int v955; // [sp+D8h] [bp-114h]
  int v956; // [sp+D8h] [bp-114h]
  int v957; // [sp+D8h] [bp-114h]
  int v958; // [sp+DCh] [bp-110h]
  int v959; // [sp+DCh] [bp-110h]
  int v960; // [sp+DCh] [bp-110h]
  int v961; // [sp+DCh] [bp-110h]
  int v962; // [sp+DCh] [bp-110h]
  int v963; // [sp+DCh] [bp-110h]
  int v964; // [sp+DCh] [bp-110h]
  unsigned int v965; // [sp+E0h] [bp-10Ch]
  unsigned int v966; // [sp+E4h] [bp-108h]
  unsigned int v967; // [sp+E8h] [bp-104h]
  int v968; // [sp+ECh] [bp-100h]
  unsigned int v969; // [sp+F0h] [bp-FCh]
  int v970; // [sp+F8h] [bp-F4h]
  int v971; // [sp+FCh] [bp-F0h]
  int v972; // [sp+100h] [bp-ECh]
  unsigned int v973; // [sp+104h] [bp-E8h]
  int v974; // [sp+10Ch] [bp-E0h]
  int v975; // [sp+110h] [bp-DCh]
  unsigned int v976; // [sp+114h] [bp-D8h]
  int v977; // [sp+118h] [bp-D4h]
  unsigned int v978; // [sp+11Ch] [bp-D0h]
  int v979; // [sp+120h] [bp-CCh]
  unsigned int v980; // [sp+128h] [bp-C4h]
  int v981; // [sp+12Ch] [bp-C0h]
  int v982; // [sp+130h] [bp-BCh]
  int v983; // [sp+134h] [bp-B8h]
  int v984; // [sp+140h] [bp-ACh]
  int v985; // [sp+144h] [bp-A8h]
  unsigned int v986; // [sp+148h] [bp-A4h]
  int v987; // [sp+14Ch] [bp-A0h]
  int v988; // [sp+150h] [bp-9Ch]
  int v989; // [sp+154h] [bp-98h]
  unsigned int v990; // [sp+158h] [bp-94h]
  int v991; // [sp+15Ch] [bp-90h]
  int v992; // [sp+160h] [bp-8Ch]
  int v993; // [sp+164h] [bp-88h]
  unsigned int v994; // [sp+16Ch] [bp-80h]
  unsigned int v995; // [sp+170h] [bp-7Ch]
  int v996; // [sp+174h] [bp-78h]
  int v997; // [sp+178h] [bp-74h]
  int v998; // [sp+17Ch] [bp-70h]
  int v999; // [sp+180h] [bp-6Ch]
  int v1000; // [sp+180h] [bp-6Ch]
  int v1001; // [sp+184h] [bp-68h]
  unsigned int v1002; // [sp+184h] [bp-68h]
  unsigned int v1003; // [sp+188h] [bp-64h]
  int v1004; // [sp+18Ch] [bp-60h]
  int v1005; // [sp+190h] [bp-5Ch]
  unsigned int v1006; // [sp+194h] [bp-58h]
  int v1007; // [sp+198h] [bp-54h]
  int v1008; // [sp+19Ch] [bp-50h]
  unsigned int v1009; // [sp+1A0h] [bp-4Ch]
  int v1010; // [sp+1A4h] [bp-48h]
  unsigned int v1011; // [sp+1ACh] [bp-40h]
  int v1012; // [sp+1B0h] [bp-3Ch]
  unsigned int v1013; // [sp+1C4h] [bp-28h]
  unsigned int v1014; // [sp+1C8h] [bp-24h]
  unsigned int v1015; // [sp+1D0h] [bp-1Ch]
  int v1016; // [sp+1D4h] [bp-18h]
  int v1017; // [sp+1D8h] [bp-14h]
  int v1018; // [sp+1DCh] [bp-10h]
  int v1019; // [sp+1E0h] [bp-Ch]

  v3 = a1[16];
  v4 = 64 - v3;
  src = a2;
  if ( 64 - v3 > a3 )
  {
    result = (unsigned int)memcpy((char *)a1 + v3, a2, a3);
    a1[16] = v3 + a3;
  }
  else
  {
    v5 = a1[25];
    result = a1[27];
    v865 = a1[17];
    v994 = a1[25];
    v995 = a1[27];
    v864 = a1[18];
    v870 = a1[19];
    v869 = a1[20];
    v863 = a1[21];
    v862 = a1[22];
    v861 = a1[23];
    v860 = a1[24];
    v867 = a1[26];
    v868 = a1[28];
    v866 = a1[29];
    v871 = a1[30];
    if ( a3 )
    {
      v1008 = v5 ^ 0x243F6A88;
      v1009 = result ^ 0x13198A2E;
      for ( i = a3; ; i = v8 )
      {
        if ( v4 >= i )
          v4 = i;
        v9 = (char *)a1 + v3;
        v3 += v4;
        result = (unsigned int)memcpy(v9, src, v4);
        na = i - v4;
        src += v4;
        if ( v3 == 64 )
        {
          v10 = __CFADD__(v866, 512);
          v866 += 512;
          if ( v10 )
            ++v871;
          v11 = bswap32(a1[6]);
          v1003 = v11 ^ 0xEC4E6C89;
          v12 = v869 + v860 + (v11 ^ 0xEC4E6C89);
          v13 = bswap32(a1[4]);
          v1010 = v13 ^ 0x299F31D0;
          v14 = __ROR4__(v871 ^ 0xEC4E6C89 ^ v12, 16);
          v817 = bswap32(a1[2]);
          v971 = v817 ^ 0x3707344;
          v15 = v870 + v861 + (v13 ^ 0x299F31D0);
          v854 = v11;
          v808 = v13;
          v800 = bswap32(*a1);
          v16 = __ROR4__(v871 ^ 0x82EFA98 ^ v15, 16);
          v17 = v865 + v863 + (v800 ^ 0x85A308D3);
          v18 = __ROR4__(v866 ^ 0xA4093822 ^ v17, 16);
          v19 = __ROR4__(v866 ^ 0x299F31D0 ^ (v864 + v862 + (v817 ^ 0x3707344)), 16);
          v20 = (v867 ^ 0x85A308D3) + v19;
          v812 = (v868 ^ 0x3707344) + v14;
          v836 = bswap32(a1[7]);
          v21 = __ROR4__(v812 ^ v860, 12);
          v22 = v1008 + v18;
          v23 = v1009 + v16;
          v1004 = v836 ^ 0x82EFA98;
          v24 = __ROR4__(v20 ^ v862, 12);
          v806 = bswap32(a1[5]);
          v795 = bswap32(a1[3]);
          v797 = bswap32(a1[1]);
          v25 = (v836 ^ 0x82EFA98) + v12;
          v26 = __ROR4__((v1008 + v18) ^ v863, 12);
          v732 = __ROR4__((v1009 + v16) ^ v861, 12);
          v778 = v21 + v25;
          v973 = v806 ^ 0xA4093822;
          v972 = v795 ^ 0x13198A2E;
          v970 = v797 ^ 0x243F6A88;
          v790 = __ROR4__(v14 ^ (v21 + v25), 8);
          v801 = v24 + (v795 ^ 0x13198A2E) + v864 + v862 + (v817 ^ 0x3707344);
          v27 = v26 + (v797 ^ 0x243F6A88) + v17;
          v28 = __ROR4__(v19 ^ v801, 8);
          v29 = v732 + (v806 ^ 0xA4093822) + v15;
          v30 = v20 + v28;
          v31 = __ROR4__(v18 ^ v27, 8);
          v32 = __ROR4__(v16 ^ v29, 8);
          v33 = v22 + v31;
          v34 = v23 + v32;
          v35 = __ROR4__(v26 ^ v33, 7);
          v36 = __ROR4__(v24 ^ v30, 7);
          v823 = v812 + v790;
          v37 = __ROR4__(v21 ^ (v812 + v790), 7);
          v853 = bswap32(a1[12]);
          v965 = v853 ^ 0xC97C50DD;
          v38 = v37 + (v853 ^ 0xC97C50DD) + v29;
          v832 = bswap32(a1[14]);
          v39 = __ROR4__(v732 ^ v34, 7);
          v835 = bswap32(a1[8]);
          v813 = bswap32(a1[10]);
          v872 = v832 ^ 0xB5470917;
          v975 = v813 ^ 0x34E90C6C;
          v880 = __ROR4__(v28 ^ v38, 16);
          v40 = v36 + (v835 ^ 0x38D01377) + v27;
          v41 = v39 + (v813 ^ 0x34E90C6C) + v801;
          v912 = v35 + (v832 ^ 0xB5470917) + v778;
          v42 = __ROR4__(v32 ^ v912, 16);
          v876 = __ROR4__(v31 ^ v41, 16);
          v831 = bswap32(a1[13]);
          v43 = __ROR4__(v790 ^ v40, 16);
          v934 = v30 + v42;
          v873 = v34 + v43;
          v44 = __ROR4__(v37 ^ (v33 + v880), 12);
          v966 = v831 ^ 0xC0AC29B7;
          v779 = bswap32(a1[15]);
          v45 = __ROR4__(v35 ^ (v30 + v42), 12);
          v46 = __ROR4__(v36 ^ (v34 + v43), 12);
          v802 = bswap32(a1[9]);
          v791 = bswap32(a1[11]);
          v47 = __ROR4__(v39 ^ (v823 + v876), 12);
          v48 = v44 + (v831 ^ 0xC0AC29B7) + v38;
          v977 = v779 ^ 0x3F84D5B5;
          v974 = v802 ^ 0x452821E6;
          v49 = __ROR4__(v880 ^ v48, 8);
          v976 = v791 ^ 0xBE5466CF;
          v50 = v45 + (v779 ^ 0x3F84D5B5) + v912;
          v51 = __ROR4__(v42 ^ v50, 8);
          v52 = v46 + (v802 ^ 0x452821E6) + v40;
          v53 = v47 + (v791 ^ 0xBE5466CF) + v41;
          v54 = __ROR4__(v43 ^ v52, 8);
          v55 = __ROR4__(v876 ^ v53, 8);
          v913 = v33 + v880 + v49;
          v56 = v823 + v876 + v55;
          v57 = __ROR4__(v44 ^ v913, 7);
          v877 = v934 + v51;
          v58 = v57 + (v831 ^ 0x82EFA98) + v50;
          v59 = v873 + v54;
          v60 = __ROR4__(v54 ^ v58, 16);
          v881 = __ROR4__(v45 ^ (v934 + v51), 7);
          v61 = __ROR4__(v46 ^ v59, 7);
          v62 = __ROR4__(v47 ^ v56, 7);
          v978 = v802 ^ 0xB5470917;
          v1005 = v808 ^ 0x452821E6;
          v63 = v61 + (v808 ^ 0x452821E6) + v53;
          v967 = v832 ^ 0xBE5466CF;
          v935 = v881 + (v832 ^ 0xBE5466CF) + v52;
          v64 = v56 + v60;
          v65 = __ROR4__(v49 ^ v63, 16);
          v66 = __ROR4__(v57 ^ v64, 12);
          v67 = v62 + (v802 ^ 0xB5470917) + v48;
          v1011 = v854 ^ 0xC97C50DD;
          v68 = v877;
          v878 = __ROR4__(v55 ^ v935, 16);
          v896 = v66 + (v854 ^ 0xC97C50DD) + v58;
          v874 = v68 + v65;
          v69 = __ROR4__(v51 ^ v67, 16);
          v70 = v59 + v69;
          v71 = __ROR4__(v62 ^ v70, 12);
          v914 = v913 + v878;
          v72 = __ROR4__(v61 ^ (v68 + v65), 12);
          v979 = v779 ^ 0x38D01377;
          v73 = __ROR4__(v881 ^ v914, 12);
          v969 = v835 ^ 0xA4093822;
          v74 = __ROR4__(v60 ^ v896, 8);
          v75 = v71 + (v779 ^ 0x38D01377) + v67;
          v76 = __ROR4__(v69 ^ v75, 8);
          v968 = v813 ^ 0x3F84D5B5;
          v77 = v72 + (v835 ^ 0xA4093822) + v63;
          v78 = (v813 ^ 0x3F84D5B5) + v935;
          v936 = v64 + v74;
          v79 = __ROR4__(v65 ^ v77, 8);
          v882 = v70 + v76;
          v80 = v73 + v78;
          v81 = __ROR4__(v878 ^ v80, 8);
          v82 = __ROR4__(v66 ^ (v64 + v74), 7);
          v83 = v874 + v79;
          v980 = v791 ^ 0xEC4E6C89;
          v84 = __ROR4__(v72 ^ (v874 + v79), 7);
          v879 = __ROR4__(v73 ^ (v914 + v81), 7);
          v85 = __ROR4__(v71 ^ (v70 + v76), 7);
          v86 = v82 + (v791 ^ 0xEC4E6C89) + v75;
          v981 = v806 ^ 0x3707344;
          v87 = __ROR4__(v79 ^ v86, 16);
          v88 = v914 + v81 + v87;
          v875 = v797 ^ 0xC0AC29B7;
          v915 = __ROR4__(v82 ^ v88, 12);
          v89 = v84 + (v797 ^ 0xC0AC29B7) + v80;
          v90 = v85 + (v800 ^ 0x13198A2E) + v77;
          v91 = v879 + (v806 ^ 0x3707344) + v896;
          v897 = __ROR4__(v74 ^ v89, 16);
          v92 = __ROR4__(v81 ^ v90, 16);
          v93 = __ROR4__(v76 ^ v91, 16);
          v94 = v83 + v93;
          v95 = v882 + v897;
          v96 = __ROR4__(v879 ^ v94, 12);
          v97 = __ROR4__(v84 ^ (v882 + v897), 12);
          v883 = v936 + v92;
          v937 = v95;
          v98 = __ROR4__(v85 ^ v883, 12);
          v99 = v915 + (v836 ^ 0x34E90C6C) + v86;
          v100 = __ROR4__(v87 ^ v99, 8);
          v982 = v795 ^ 0x299F31D0;
          v948 = v88 + v100;
          v1012 = v817 ^ 0x243F6A88;
          v101 = v98 + (v817 ^ 0x243F6A88) + v90;
          v102 = v96 + (v795 ^ 0x299F31D0) + v91;
          v103 = __ROR4__(v92 ^ v101, 8);
          v104 = __ROR4__(v93 ^ v102, 8);
          v105 = v915;
          v106 = v97 + (v853 ^ 0x85A308D3) + v89;
          v916 = v94 + v104;
          v107 = __ROR4__(v897 ^ v106, 8);
          v108 = __ROR4__(v105 ^ (v88 + v100), 7);
          v986 = v779 ^ 0xC97C50DD;
          v109 = v937 + v107;
          v110 = __ROR4__(v97 ^ (v937 + v107), 7);
          v111 = v883 + v103;
          v884 = __ROR4__(v98 ^ (v883 + v103), 7);
          v112 = __ROR4__(v96 ^ v916, 7);
          v113 = v108 + (v779 ^ 0xC97C50DD) + v102;
          v984 = v806 ^ 0x13198A2E;
          v114 = __ROR4__(v107 ^ v113, 16);
          v115 = v111 + v114;
          v116 = __ROR4__(v108 ^ v115, 12);
          v983 = v791 ^ 0x452821E6;
          v938 = v112 + (v791 ^ 0x452821E6) + v106;
          v117 = v884 + (v806 ^ 0x13198A2E) + v99;
          v118 = v110 + (v853 ^ 0x243F6A88) + v101;
          v119 = __ROR4__(v100 ^ v118, 16);
          v898 = __ROR4__(v104 ^ v117, 16);
          v120 = v116 + (v831 ^ 0xB5470917) + v113;
          v121 = v109 + v898;
          v122 = v916;
          v917 = __ROR4__(v103 ^ v938, 16);
          v123 = __ROR4__(v114 ^ v120, 8);
          v124 = v115 + v123;
          v958 = v122 + v119;
          v125 = __ROR4__(v116 ^ v124, 7);
          v126 = __ROR4__(v110 ^ (v122 + v119), 12);
          v127 = v112 ^ (v948 + v917);
          v949 = v948 + v917;
          v128 = __ROR4__(v884 ^ v121, 12);
          v985 = v817 ^ 0x299F31D0;
          v129 = v126 + (v800 ^ 0xC0AC29B7) + v118;
          v130 = __ROR4__(v127, 12);
          v131 = __ROR4__(v119 ^ v129, 8);
          v132 = v130 + (v835 ^ 0x34E90C6C) + v938;
          v133 = v128 + (v817 ^ 0x299F31D0) + v117;
          v134 = __ROR4__(v917 ^ v132, 8);
          v135 = __ROR4__(v898 ^ v133, 8);
          v136 = v121 + v135;
          v899 = v958 + v131;
          v137 = __ROR4__(v128 ^ v136, 7);
          v138 = __ROR4__(v130 ^ (v949 + v134), 7);
          v139 = __ROR4__(v126 ^ (v958 + v131), 7);
          v939 = v125 + (v836 ^ 0x85A308D3) + v133;
          v1014 = v802 ^ 0xA4093822;
          v140 = v138 + (v802 ^ 0xA4093822) + v120;
          v987 = v795 ^ 0x82EFA98;
          v141 = v137 + (v795 ^ 0x82EFA98) + v129;
          v142 = __ROR4__(v135 ^ v140, 16);
          v143 = __ROR4__(v131 ^ v939, 16);
          v950 = v949 + v134 + v143;
          v144 = v139 + (v813 ^ 0x3F84D5B5) + v132;
          v885 = __ROR4__(v134 ^ v141, 16);
          v145 = __ROR4__(v125 ^ v950, 12);
          v1013 = v797 ^ 0xEC4E6C89;
          v146 = __ROR4__(v123 ^ v144, 16);
          v918 = v899 + v142;
          v147 = v136 + v146;
          v148 = __ROR4__(v139 ^ v147, 12);
          v149 = __ROR4__(v137 ^ (v124 + v885), 12);
          v150 = v899 + v142;
          v900 = v145 + (v797 ^ 0xEC4E6C89) + v939;
          v151 = __ROR4__(v138 ^ v150, 12);
          v989 = v808 ^ 0x38D01377;
          v988 = v854 ^ 0x3707344;
          v940 = v148 + (v832 ^ 0xBE5466CF) + v144;
          v152 = __ROR4__(v143 ^ v900, 8);
          v153 = __ROR4__(v146 ^ v940, 8);
          v154 = v151 + (v808 ^ 0x38D01377) + v140;
          v155 = v149 + (v854 ^ 0x3707344) + v141;
          v156 = v147 + v153;
          v157 = __ROR4__(v142 ^ v154, 8);
          v951 = v950 + v152;
          v158 = __ROR4__(v885 ^ v155, 8);
          v159 = __ROR4__(v145 ^ v951, 7);
          v919 = v918 + v157;
          v160 = __ROR4__(v148 ^ v156, 7);
          v1016 = v791 ^ 0x3F84D5B5;
          v161 = v159 + (v791 ^ 0x3F84D5B5) + v154;
          v162 = v124 + v885 + v158;
          v163 = __ROR4__(v149 ^ v162, 7);
          v164 = __ROR4__(v151 ^ v919, 7);
          v990 = v795 ^ 0x85A308D3;
          v165 = __ROR4__(v153 ^ v161, 16);
          v166 = v163 + (v831 ^ 0xC0AC29B7) + v900;
          v167 = __ROR4__(v157 ^ v166, 16);
          v168 = v160 + (v795 ^ 0x85A308D3) + v155;
          v169 = __ROR4__(v152 ^ v168, 16);
          v941 = v164 + (v836 ^ 0x38D01377) + v940;
          v959 = v162 + v165;
          v170 = v156 + v167;
          v171 = __ROR4__(v158 ^ v941, 16);
          v172 = __ROR4__(v159 ^ v959, 12);
          v173 = __ROR4__(v163 ^ (v156 + v167), 12);
          v1017 = v832 ^ 0x34E90C6C;
          v174 = v172 + (v832 ^ 0x34E90C6C) + v161;
          v175 = __ROR4__(v165 ^ v174, 8);
          v901 = v919 + v169;
          v886 = v951 + v171;
          v176 = __ROR4__(v160 ^ (v919 + v169), 12);
          v177 = __ROR4__(v164 ^ (v951 + v171), 12);
          v991 = v797 ^ 0x3707344;
          v1015 = v802 ^ 0xEC4E6C89;
          v178 = v173 + (v853 ^ 0xC97C50DD) + v166;
          v179 = v176 + (v797 ^ 0x3707344) + v168;
          v180 = __ROR4__(v169 ^ v179, 8);
          v181 = __ROR4__(v167 ^ v178, 8);
          v182 = v177 + (v802 ^ 0xEC4E6C89) + v941;
          v183 = v170 + v181;
          v184 = __ROR4__(v171 ^ v182, 8);
          v952 = v959 + v175;
          v185 = __ROR4__(v173 ^ v183, 7);
          v186 = __ROR4__(v172 ^ (v959 + v175), 7);
          v1019 = v808 ^ 0x243F6A88;
          v187 = v186 + (v808 ^ 0x243F6A88) + v178;
          v902 = v901 + v180;
          v188 = __ROR4__(v180 ^ v187, 16);
          v887 = v886 + v184;
          v920 = __ROR4__(v176 ^ v902, 7);
          v189 = __ROR4__(v177 ^ v887, 7);
          v993 = v779 ^ 0x452821E6;
          v1018 = v817 ^ 0x82EFA98;
          v1006 = v806 ^ 0xBE5466CF;
          v190 = v185 + (v806 ^ 0xBE5466CF) + v179;
          v191 = v920 + (v817 ^ 0x82EFA98) + v182;
          v192 = v189 + (v779 ^ 0x452821E6) + v174;
          v942 = __ROR4__(v184 ^ v190, 16);
          v193 = __ROR4__(v175 ^ v191, 16);
          v194 = v887 + v188;
          v195 = v902;
          v196 = __ROR4__(v186 ^ (v887 + v188), 12);
          v888 = v183 + v193;
          v903 = __ROR4__(v181 ^ v192, 16);
          v197 = v196 + (v800 ^ 0xA4093822) + v187;
          v198 = v195 + v903;
          v199 = __ROR4__(v189 ^ v198, 12);
          v996 = v198;
          v200 = v952 + v942;
          v201 = v185 ^ (v952 + v942);
          v202 = __ROR4__(v188 ^ v197, 8);
          v203 = __ROR4__(v920 ^ v888, 12);
          v953 = v197;
          v992 = v854 ^ 0x13198A2E;
          v204 = __ROR4__(v201, 12);
          v1007 = v813 ^ 0x299F31D0;
          v205 = v204 + (v813 ^ 0x299F31D0) + v190;
          v206 = __ROR4__(v942 ^ v205, 8);
          v207 = v199 + (v835 ^ 0xB5470917) + v192;
          v960 = v194 + v202;
          v208 = __ROR4__(v903 ^ v207, 8);
          v209 = v203 + (v854 ^ 0x13198A2E) + v191;
          v210 = __ROR4__(v196 ^ (v194 + v202), 7);
          v211 = __ROR4__(v193 ^ v209, 8);
          v921 = v996 + v208;
          v212 = v200 + v206;
          v213 = __ROR4__(v204 ^ v212, 7);
          v943 = v210 + (v813 ^ 0xB5470917) + v207;
          v889 = v888 + v211;
          v214 = __ROR4__(v199 ^ (v996 + v208), 7);
          v215 = v214 + (v802 ^ 0x243F6A88) + v209;
          v216 = __ROR4__(v203 ^ v889, 7);
          v217 = v213 + (v817 ^ 0xA4093822) + v953;
          v218 = __ROR4__(v206 ^ v215, 16);
          v219 = v216 + (v806 ^ 0xEC4E6C89) + v205;
          v220 = __ROR4__(v211 ^ v943, 16);
          v221 = __ROR4__(v202 ^ v219, 16);
          v997 = v212 + v220;
          v222 = __ROR4__(v210 ^ (v212 + v220), 12);
          v223 = __ROR4__(v208 ^ v217, 16);
          v922 = v921 + v221;
          v224 = v960;
          v961 = v889 + v223;
          v225 = __ROR4__(v213 ^ (v889 + v223), 12);
          v226 = v224 + v218;
          v227 = v222 + (v779 ^ 0xBE5466CF) + v943;
          v228 = __ROR4__(v214 ^ v226, 12);
          v229 = __ROR4__(v216 ^ v922, 12);
          v230 = v225 + (v808 ^ 0x13198A2E) + v217;
          v231 = __ROR4__(v223 ^ v230, 8);
          v232 = v228 + (v800 ^ 0x38D01377) + v215;
          v998 = __ROR4__(v220 ^ v227, 8);
          v233 = v229 + (v836 ^ 0x299F31D0) + v219;
          v234 = __ROR4__(v222 ^ (v997 + v998), 7);
          v235 = __ROR4__(v218 ^ v232, 8);
          v236 = __ROR4__(v221 ^ v233, 8);
          v237 = v226 + v235;
          v238 = __ROR4__(v225 ^ (v961 + v231), 7);
          v239 = __ROR4__(v228 ^ v237, 7);
          v240 = v234 + (v854 ^ 0x452821E6) + v230;
          v923 = v922 + v236;
          v241 = __ROR4__(v236 ^ v240, 16);
          v954 = v961 + v231;
          v242 = __ROR4__(v229 ^ v923, 7);
          v243 = v242 + (v832 ^ 0x85A308D3) + v232;
          v244 = v238 + (v791 ^ 0xC0AC29B7) + v233;
          v245 = __ROR4__(v998 ^ v243, 16);
          v246 = v239 + (v795 ^ 0xC97C50DD) + v227;
          v247 = __ROR4__(v235 ^ v244, 16);
          v1001 = v237 + v241;
          v248 = __ROR4__(v231 ^ v246, 16);
          v249 = __ROR4__(v234 ^ (v237 + v241), 12);
          v962 = v923 + v248;
          v944 = v997 + v998 + v247;
          v924 = v954 + v245;
          v250 = v249 + (v835 ^ 0x82EFA98) + v240;
          v251 = __ROR4__(v239 ^ v962, 12);
          v252 = __ROR4__(v242 ^ (v954 + v245), 12);
          v253 = __ROR4__(v238 ^ v944, 12);
          v254 = v251 + (v831 ^ 0x3707344) + v246;
          v255 = v252 + (v797 ^ 0x3F84D5B5) + v243;
          v256 = __ROR4__(v241 ^ v250, 8);
          v257 = v253 + (v853 ^ 0x34E90C6C) + v244;
          v258 = __ROR4__(v248 ^ v254, 8);
          v259 = __ROR4__(v245 ^ v255, 8);
          v955 = __ROR4__(v247 ^ v257, 8);
          v999 = v1001 + v256;
          v260 = __ROR4__(v249 ^ (v1001 + v256), 7);
          v963 = v962 + v258;
          v261 = v260 + (v835 ^ 0x3707344) + v254;
          v904 = v924 + v259;
          v262 = v944 + v955;
          v263 = __ROR4__(v253 ^ (v944 + v955), 7);
          v264 = __ROR4__(v252 ^ (v924 + v259), 7);
          v945 = __ROR4__(v251 ^ v963, 7);
          v265 = v264 + (v854 ^ 0xBE5466CF) + v257;
          v266 = v263 + (v800 ^ 0x34E90C6C) + v250;
          v267 = __ROR4__(v256 ^ v265, 16);
          v1002 = v817 ^ 0xC0AC29B7;
          v268 = v945 + (v817 ^ 0xC0AC29B7) + v255;
          v269 = __ROR4__(v259 ^ v261, 16);
          v270 = __ROR4__(v258 ^ v266, 16);
          v271 = __ROR4__(v955 ^ v268, 16);
          v272 = v262 + v269;
          v925 = __ROR4__(v260 ^ v272, 12);
          v956 = v963 + v267;
          v273 = __ROR4__(v264 ^ (v963 + v267), 12);
          v905 = v904 + v270;
          v844 = v999 + v271;
          v274 = __ROR4__(v263 ^ v905, 12);
          v275 = __ROR4__(v945 ^ (v999 + v271), 12);
          v946 = v925 + (v795 ^ 0x452821E6) + v261;
          v276 = v273 + (v813 ^ 0x82EFA98) + v265;
          v277 = __ROR4__(v267 ^ v276, 8);
          v278 = v274 + (v791 ^ 0x243F6A88) + v266;
          v279 = __ROR4__(v270 ^ v278, 8);
          v964 = __ROR4__(v269 ^ v946, 8);
          v280 = v272 + v964;
          v281 = v925;
          v926 = v280;
          v1000 = v853 ^ 0x13198A2E;
          v282 = v275 + (v853 ^ 0x13198A2E) + v268;
          v283 = __ROR4__(v281 ^ v280, 7);
          v284 = __ROR4__(v271 ^ v282, 8);
          v285 = v956 + v277;
          v286 = __ROR4__(v273 ^ (v956 + v277), 7);
          v287 = v844;
          v845 = v905 + v279;
          v288 = __ROR4__(v274 ^ (v905 + v279), 7);
          v289 = v283 + (v779 ^ 0x3F84D5B5) + v278;
          v837 = __ROR4__(v275 ^ (v287 + v284), 7);
          v290 = __ROR4__(v277 ^ v289, 16);
          v291 = v287 + v284 + v290;
          v292 = v288 + (v836 ^ 0x299F31D0) + v276;
          v293 = __ROR4__(v283 ^ v291, 12);
          v294 = v286 + (v808 ^ 0xC97C50DD) + v282;
          v295 = v837 + (v797 ^ 0x38D01377) + v946;
          v906 = __ROR4__(v284 ^ v292, 16);
          v296 = __ROR4__(v279 ^ v295, 16);
          v297 = __ROR4__(v964 ^ v294, 16);
          v298 = __ROR4__(v288 ^ (v926 + v906), 12);
          v846 = v845 + v297;
          v927 = v926 + v906;
          v957 = v285 + v296;
          v890 = v293 + (v832 ^ 0xB5470917) + v289;
          v299 = __ROR4__(v837 ^ (v285 + v296), 12);
          v300 = __ROR4__(v286 ^ v846, 12);
          v301 = v299 + (v802 ^ 0x85A308D3) + v295;
          v302 = __ROR4__(v296 ^ v301, 8);
          v303 = v300 + (v831 ^ 0xA4093822) + v294;
          v304 = v298 + (v806 ^ 0xEC4E6C89) + v292;
          v305 = __ROR4__(v297 ^ v303, 8);
          v306 = __ROR4__(v290 ^ v890, 8);
          v947 = v291 + v306;
          v307 = __ROR4__(v906 ^ v304, 8);
          v907 = v306;
          v308 = v927 + v307;
          v309 = __ROR4__(v293 ^ (v291 + v306), 7);
          v310 = v846;
          v847 = v957 + v302;
          v311 = __ROR4__(v299 ^ (v957 + v302), 7);
          v838 = __ROR4__(v298 ^ (v927 + v307), 7);
          v312 = v310 + v305;
          v313 = __ROR4__(v300 ^ v312, 7);
          v314 = v313 + (v797 ^ 0xB5470917) + v304;
          v315 = v311 + (v853 ^ 0x299F31D0) + v303;
          v316 = __ROR4__(v307 ^ v315, 16);
          v317 = (v808 ^ 0xBE5466CF) + v309 + v301;
          v318 = __ROR4__(v305 ^ v317, 16);
          v319 = v838 + (v832 ^ 0xC97C50DD) + v890;
          v320 = __ROR4__(v302 ^ v319, 16);
          v928 = v308 + v318;
          v321 = __ROR4__(v907 ^ v314, 16);
          v322 = __ROR4__(v309 ^ (v308 + v318), 12);
          v891 = v312 + v320;
          v323 = __ROR4__(v313 ^ (v847 + v321), 12);
          v908 = v847 + v321;
          v324 = __ROR4__(v838 ^ (v312 + v320), 12);
          v325 = v324 + (v831 ^ 0x3F84D5B5) + v319;
          v326 = v322 + (v813 ^ 0xA4093822) + v317;
          v327 = __ROR4__(v318 ^ v326, 8);
          v328 = __ROR4__(v320 ^ v325, 8);
          v329 = __ROR4__(v311 ^ (v947 + v316), 12);
          v330 = v323 + (v779 ^ 0x85A308D3) + v314;
          v331 = v329 + (v806 ^ 0xC0AC29B7) + v315;
          v332 = __ROR4__(v321 ^ v330, 8);
          v839 = __ROR4__(v316 ^ v331, 8);
          v929 = v928 + v327;
          v892 = v891 + v328;
          v333 = __ROR4__(v322 ^ v929, 7);
          v856 = v908 + v332;
          v334 = v947 + v316 + v839;
          v848 = __ROR4__(v324 ^ v892, 7);
          v335 = v323 ^ (v908 + v332);
          v336 = v329 ^ v334;
          v337 = __ROR4__(v335, 7);
          v338 = v333 + (v802 ^ 0x13198A2E) + v325;
          v339 = __ROR4__(v336, 7);
          v340 = __ROR4__(v332 ^ v338, 16);
          v341 = v848 + (v854 ^ 0x3707344) + v330;
          v342 = v334 + v340;
          v343 = v339 + (v835 ^ 0x34E90C6C) + v326;
          v344 = __ROR4__(v839 ^ v341, 16);
          v345 = __ROR4__(v328 ^ v343, 16);
          v346 = v929 + v344;
          v930 = v342;
          v909 = v346;
          v347 = v337 + (v800 ^ 0xEC4E6C89) + v331;
          v348 = __ROR4__(v327 ^ v347, 16);
          v349 = __ROR4__(v333 ^ v342, 12);
          v857 = v856 + v345;
          v840 = v892 + v348;
          v350 = v349 + (v817 ^ 0x38D01377) + v338;
          v351 = __ROR4__(v848 ^ v346, 12);
          v352 = __ROR4__(v340 ^ v350, 8);
          v353 = __ROR4__(v339 ^ v857, 12);
          v354 = __ROR4__(v337 ^ (v892 + v348), 12);
          v355 = v354 + (v836 ^ 0x243F6A88) + v347;
          v356 = v351 + (v795 ^ 0x82EFA98) + v341;
          v357 = __ROR4__(v348 ^ v355, 8);
          v358 = __ROR4__(v344 ^ v356, 8);
          v359 = v353 + (v791 ^ 0x452821E6) + v343;
          v360 = v349 ^ (v930 + v352);
          v931 = v930 + v352;
          v849 = __ROR4__(v345 ^ v359, 8);
          v361 = __ROR4__(v351 ^ (v909 + v358), 7);
          v362 = v857 + v849;
          v363 = __ROR4__(v360, 7);
          v364 = __ROR4__(v353 ^ (v857 + v849), 7);
          v365 = __ROR4__(v354 ^ (v840 + v357), 7);
          v366 = v361 + (v853 ^ 0x85A308D3) + v350;
          v367 = (v795 ^ 0x38D01377) + v363 + v359;
          v368 = __ROR4__(v357 ^ v367, 16);
          v369 = v365 + (v836 ^ 0x3F84D5B5) + v356;
          v893 = v909 + v358 + v368;
          v370 = __ROR4__(v352 ^ v369, 16);
          v371 = __ROR4__(v849 ^ v366, 16);
          v372 = v364 + (v831 ^ 0x34E90C6C) + v355;
          v850 = v368;
          v373 = v840 + v357 + v371;
          v374 = __ROR4__(v358 ^ v372, 16);
          v910 = v362 + v370;
          v375 = __ROR4__(v361 ^ v373, 12);
          v841 = v931 + v374;
          v376 = __ROR4__(v365 ^ (v362 + v370), 12);
          v858 = __ROR4__(v363 ^ v893, 12);
          v377 = __ROR4__(v364 ^ (v931 + v374), 12);
          v378 = v377 + (v791 ^ 0xC97C50DD) + v372;
          v379 = v375 + (v797 ^ 0xC0AC29B7) + v366;
          v380 = __ROR4__(v374 ^ v378, 8);
          v381 = v376 + (v832 ^ 0xEC4E6C89) + v369;
          v382 = v858 + (v802 ^ 0x3707344) + v367;
          v932 = __ROR4__(v371 ^ v379, 8);
          v383 = __ROR4__(v370 ^ v381, 8);
          v384 = __ROR4__(v850 ^ v382, 8);
          v894 = v893 + v384;
          v385 = __ROR4__(v376 ^ (v910 + v383), 7);
          v842 = v841 + v380;
          v386 = __ROR4__(v377 ^ v842, 7);
          v387 = __ROR4__(v375 ^ (v373 + v932), 7);
          v388 = __ROR4__(v858 ^ v894, 7);
          v859 = v817 ^ 0xBE5466CF;
          v389 = v385 + (v806 ^ 0x243F6A88) + v378;
          v390 = v388 + (v835 ^ 0x82EFA98) + v379;
          v391 = __ROR4__(v384 ^ v389, 16);
          v392 = v387 + (v779 ^ 0xA4093822) + v381;
          v818 = v386 + (v817 ^ 0xBE5466CF) + v382;
          v393 = __ROR4__(v380 ^ v392, 16);
          v394 = __ROR4__(v383 ^ v390, 16);
          v395 = __ROR4__(v932 ^ v818, 16);
          v396 = __ROR4__(v387 ^ (v894 + v393), 12);
          v749 = v842 + v394;
          v824 = v894 + v393;
          v397 = __ROR4__(v386 ^ (v910 + v383 + v395), 12);
          v911 = v910 + v383 + v395;
          v895 = v373 + v932 + v391;
          v398 = __ROR4__(v385 ^ v895, 12);
          v399 = __ROR4__(v388 ^ (v842 + v394), 12);
          v933 = v813 ^ 0x13198A2E;
          v400 = v396 + (v808 ^ 0xB5470917) + v392;
          v401 = v394;
          v402 = v813 ^ 0x13198A2E;
          v403 = v398 + (v800 ^ 0x299F31D0) + v389;
          v814 = v400;
          v404 = __ROR4__(v391 ^ v403, 8);
          v405 = v397 + v402 + v818;
          v819 = v399 + (v854 ^ 0x452821E6) + v390;
          v406 = __ROR4__(v401 ^ v819, 8);
          v407 = __ROR4__(v395 ^ v405, 8);
          v843 = __ROR4__(v393 ^ v400, 8);
          v408 = v824 + v843;
          v851 = v407;
          v409 = v396 ^ (v824 + v843);
          v825 = v749 + v406;
          v410 = v911 + v407;
          v411 = __ROR4__(v397 ^ (v911 + v407), 7);
          v829 = v895 + v404;
          v412 = __ROR4__(v398 ^ (v895 + v404), 7);
          v750 = __ROR4__(v399 ^ (v749 + v406), 7);
          v733 = __ROR4__(v409, 7);
          if ( blake256_rounds == 14 )
          {
            v828 = v832 ^ 0x38D01377;
            v413 = (v800 ^ 0x452821E6) + v750 + v405;
            v414 = (v854 ^ 0xB5470917) + v403;
            v415 = __ROR4__(v404 ^ v413, 16);
            v855 = v408 + v415;
            v416 = v733 + (v791 ^ 0x3707344) + v819;
            v417 = v412 + (v832 ^ 0x38D01377) + v814;
            v820 = v411 + v414;
            v418 = __ROR4__(v750 ^ (v408 + v415), 12);
            v833 = v416;
            v419 = __ROR4__(v843 ^ (v411 + v414), 16);
            v420 = __ROR4__(v406 ^ v417, 16);
            v421 = __ROR4__(v851 ^ v416, 16);
            v422 = v418 + (v835 ^ 0x243F6A88) + v413;
            v423 = v410 + v420;
            v424 = v411 ^ (v825 + v419);
            v826 = v825 + v419;
            v425 = __ROR4__(v412 ^ v423, 12);
            v426 = v829 + v421;
            v815 = __ROR4__(v415 ^ v422, 8);
            v427 = __ROR4__(v424, 12);
            v428 = v733 ^ (v829 + v421);
            v830 = v422;
            v734 = v802 ^ 0x3F84D5B5;
            v751 = __ROR4__(v428, 12);
            v429 = v425 + (v802 ^ 0x3F84D5B5) + v417;
            v430 = __ROR4__(v420 ^ v429, 8);
            v431 = v751 + (v795 ^ 0x34E90C6C) + v833;
            v432 = v427 + (v779 ^ 0x82EFA98) + v820;
            v834 = __ROR4__(v418 ^ (v855 + v815), 7);
            v433 = __ROR4__(v421 ^ v431, 8);
            v434 = __ROR4__(v425 ^ (v423 + v430), 7);
            v435 = v419 ^ v432;
            v436 = v834 + (v797 ^ 0xA4093822) + v431;
            v821 = v423 + v430;
            v437 = __ROR4__(v435, 8);
            v438 = __ROR4__(v430 ^ v436, 16);
            v439 = v426 + v433;
            v440 = __ROR4__(v751 ^ v439, 7);
            v441 = v440 + (v831 ^ 0xEC4E6C89) + v429;
            v442 = v427 ^ (v826 + v437);
            v827 = v826 + v437 + v438;
            v443 = __ROR4__(v442, 7);
            v444 = v1000 + v432;
            v445 = v443 + v1007 + v830;
            v446 = __ROR4__(v834 ^ v827, 12);
            v447 = __ROR4__(v433 ^ v445, 16);
            v448 = __ROR4__(v437 ^ v441, 16);
            v809 = v446 + (v808 ^ 0x85A308D3) + v436;
            v449 = v855 + v815 + v448;
            v822 = v821 + v447;
            v450 = __ROR4__(v440 ^ v449, 12);
            v451 = __ROR4__(v443 ^ v822, 12);
            v803 = __ROR4__(v438 ^ v809, 8);
            v452 = __ROR4__(v815 ^ (v434 + v1000 + v432), 16);
            v453 = v439 + v452;
            v454 = v450 + (v836 ^ 0xC97C50DD) + v441;
            v455 = v434 + v444;
            v816 = v827 + v803;
            v456 = __ROR4__(v446 ^ (v827 + v803), 7);
            v457 = v451 + v1006 + v445;
            v458 = __ROR4__(v434 ^ v453, 12);
            v459 = __ROR4__(v447 ^ v457, 8);
            v460 = v458 + v1002 + v455;
            v461 = (v797 ^ 0x299F31D0) + v456 + v457;
            v462 = __ROR4__(v448 ^ v454, 8);
            v463 = __ROR4__(v452 ^ v460, 8);
            v464 = v449 + v462;
            v465 = v453 + v463;
            v752 = __ROR4__(v451 ^ (v822 + v459), 7);
            v466 = __ROR4__(v450 ^ v464, 7);
            v467 = __ROR4__(v463 ^ v461, 16);
            v468 = __ROR4__(v458 ^ v465, 7);
            v469 = v466 + v1004 + v809;
            v810 = v464 + v467;
            v470 = v468 + v969 + v454;
            v471 = __ROR4__(v456 ^ (v464 + v467), 12);
            v472 = v752 + v933 + v460;
            v473 = __ROR4__(v462 ^ v472, 16);
            v474 = __ROR4__(v803 ^ v470, 16);
            v804 = v822 + v459 + v474;
            v475 = v471 + (v806 ^ 0x85A308D3) + v461;
            v476 = v752;
            v477 = __ROR4__(v459 ^ v469, 16);
            v478 = __ROR4__(v468 ^ v804, 12);
            v479 = v465 + v477;
            v753 = __ROR4__(v467 ^ v475, 8);
            v480 = __ROR4__(v466 ^ v479, 12);
            v798 = v816 + v473;
            v481 = v480 + v1003 + v469;
            v482 = __ROR4__(v476 ^ (v816 + v473), 12);
            v483 = v482 + v859 + v472;
            v484 = __ROR4__(v473 ^ v483, 8);
            v811 = v810 + v753;
            v807 = v478 + v1005 + v470;
            v485 = v474 ^ v807;
            v486 = __ROR4__(v477 ^ v481, 8);
            v487 = __ROR4__(v471 ^ v811, 7);
            v488 = __ROR4__(v485, 8);
            v489 = v487 + (v795 ^ 0xC0AC29B7) + v481;
            v490 = v798;
            v799 = v479 + v486;
            v491 = v478 ^ (v804 + v488);
            v796 = v804 + v488;
            v492 = __ROR4__(v488 ^ v489, 16);
            v493 = v482 ^ (v490 + v484);
            v805 = v490 + v484 + v492;
            v494 = __ROR4__(v480 ^ (v479 + v486), 7);
            v495 = __ROR4__(v493, 7);
            v496 = __ROR4__(v491, 7);
            v497 = __ROR4__(v487 ^ v805, 12);
            v498 = v494 + v734 + v807;
            v499 = (v853 ^ 0x3707344) + v489;
            v500 = __ROR4__(v484 ^ v498, 16);
            v501 = v495 + (v831 ^ 0x243F6A88) + v475;
            v502 = v496 + (v779 ^ 0x34E90C6C) + v483;
            v503 = v811 + v500;
            v504 = __ROR4__(v486 ^ v501, 16);
            v505 = __ROR4__(v753 ^ v502, 16);
            v767 = v497 + v499;
            v754 = v796 + v504;
            v506 = __ROR4__(v494 ^ (v811 + v500), 12);
            v735 = v799 + v505;
            v507 = __ROR4__(v495 ^ (v796 + v504), 12);
            v508 = __ROR4__(v496 ^ (v799 + v505), 12);
            v509 = __ROR4__(v492 ^ (v497 + v499), 8);
            v510 = v508 + (v791 ^ 0xB5470917) + v502;
            v511 = v507 + (v800 ^ 0xC97C50DD) + v501;
            v512 = __ROR4__(v505 ^ v510, 8);
            v513 = v506 + v828 + v498;
            v514 = __ROR4__(v504 ^ v511, 8);
            v515 = __ROR4__(v500 ^ v513, 8);
            v516 = v805 + v509;
            v517 = __ROR4__(v497 ^ (v805 + v509), 7);
            v780 = v754 + v514;
            v755 = __ROR4__(v506 ^ (v503 + v515), 7);
            v736 = v735 + v512;
            v518 = __ROR4__(v507 ^ v780, 7);
            v519 = __ROR4__(v508 ^ v736, 7);
            v520 = v1003 + v517 + v511;
            v521 = __ROR4__(v512 ^ v520, 16);
            v522 = v519 + v971 + v513;
            v523 = v503 + v515 + v521;
            v524 = v518 + (v800 ^ 0x85A308D3) + v510;
            v525 = __ROR4__(v509 ^ v522, 16);
            v526 = __ROR4__(v517 ^ v523, 12);
            v527 = v755 + v1010 + v767;
            v528 = __ROR4__(v514 ^ v527, 16);
            v792 = __ROR4__(v515 ^ v524, 16);
            v529 = v516 + v792;
            v530 = v526 + v1004 + v520;
            v531 = __ROR4__(v518 ^ v529, 12);
            v532 = __ROR4__(v521 ^ v530, 8);
            v768 = v780 + v525;
            v533 = v523 + v532;
            v534 = v780 + v525;
            v781 = v736 + v528;
            v737 = __ROR4__(v526 ^ v533, 7);
            v535 = __ROR4__(v519 ^ v534, 12);
            v536 = __ROR4__(v755 ^ v781, 12);
            v537 = v792;
            v538 = v535 + v972 + v522;
            v793 = v533;
            v539 = __ROR4__(v525 ^ v538, 8);
            v540 = v531 + v970 + v524;
            v541 = v768 + v539;
            v542 = v536 + v973 + v527;
            v543 = __ROR4__(v528 ^ v542, 8);
            v544 = __ROR4__(v537 ^ v540, 8);
            v769 = v781 + v543;
            v545 = __ROR4__(v536 ^ (v781 + v543), 7);
            v546 = v529 + v544;
            v547 = v737 + v965 + v542;
            v548 = __ROR4__(v535 ^ v541, 7);
            v549 = __ROR4__(v539 ^ v547, 16);
            v550 = __ROR4__(v531 ^ v546, 7);
            v551 = v550 + v872 + v530;
            v552 = v548 + (v835 ^ 0x38D01377) + v540;
            v553 = __ROR4__(v543 ^ v551, 16);
            v554 = __ROR4__(v532 ^ v552, 16);
            v782 = v545 + v975 + v538;
            v756 = v546 + v549;
            v555 = __ROR4__(v544 ^ v782, 16);
            v556 = v541 + v553;
            v557 = __ROR4__(v737 ^ (v546 + v549), 12);
            v558 = __ROR4__(v550 ^ v556, 12);
            v738 = v769 + v554;
            v770 = v793 + v555;
            v559 = __ROR4__(v545 ^ (v793 + v555), 12);
            v560 = v557 + v966 + v547;
            v561 = __ROR4__(v549 ^ v560, 8);
            v562 = __ROR4__(v548 ^ v738, 12);
            v563 = v558 + v977 + v551;
            v564 = v562 + v974 + v552;
            v565 = __ROR4__(v553 ^ v563, 8);
            v566 = __ROR4__(v554 ^ v564, 8);
            v567 = v556 + v565;
            v568 = v756 + v561;
            v569 = v559 + v976 + v782;
            v570 = __ROR4__(v555 ^ v569, 8);
            v571 = __ROR4__(v558 ^ v567, 7);
            v757 = __ROR4__(v557 ^ (v756 + v561), 7);
            v739 = v738 + v566;
            v572 = __ROR4__(v559 ^ (v770 + v570), 7);
            v573 = __ROR4__(v562 ^ v739, 7);
            v574 = (v831 ^ 0x82EFA98) + v757 + v563;
            v575 = __ROR4__(v566 ^ v574, 16);
            v576 = v572 + v978 + v560;
            v577 = __ROR4__(v565 ^ v576, 16);
            v578 = v571 + v967 + v564;
            v579 = v573 + v1005 + v569;
            v783 = v770 + v570 + v575;
            v580 = __ROR4__(v561 ^ v579, 16);
            v581 = __ROR4__(v570 ^ v578, 16);
            v582 = __ROR4__(v757 ^ v783, 12);
            v583 = v568 + v581;
            v584 = __ROR4__(v571 ^ v583, 12);
            v758 = v739 + v577;
            v740 = v567 + v580;
            v585 = v582 + v1011 + v574;
            v586 = __ROR4__(v572 ^ v758, 12);
            v587 = __ROR4__(v573 ^ (v567 + v580), 12);
            v588 = __ROR4__(v575 ^ v585, 8);
            v589 = v584 + v968 + v578;
            v590 = __ROR4__(v581 ^ v589, 8);
            v591 = v586 + v979 + v576;
            v592 = v583 + v590;
            v593 = __ROR4__(v577 ^ v591, 8);
            v594 = v587 + v969 + v579;
            v595 = __ROR4__(v584 ^ v592, 7);
            v596 = __ROR4__(v580 ^ v594, 8);
            v784 = v783 + v588;
            v597 = __ROR4__(v582 ^ v784, 7);
            v759 = v758 + v593;
            v741 = v740 + v596;
            v598 = __ROR4__(v586 ^ v759, 7);
            v599 = v597 + v980 + v591;
            v600 = __ROR4__(v587 ^ v741, 7);
            v601 = __ROR4__(v596 ^ v599, 16);
            v602 = v595 + v981 + v585;
            v603 = v592 + v601;
            v604 = __ROR4__(v593 ^ v602, 16);
            v605 = v600 + v875 + v589;
            v606 = __ROR4__(v597 ^ v603, 12);
            v607 = __ROR4__(v588 ^ v605, 16);
            v608 = v598 + (v800 ^ 0x13198A2E) + v594;
            v609 = __ROR4__(v590 ^ v608, 16);
            v771 = v741 + v604;
            v742 = v759 + v607;
            v760 = v784 + v609;
            v610 = v606 + (v836 ^ 0x34E90C6C) + v599;
            v611 = v601 ^ v610;
            v612 = __ROR4__(v595 ^ v771, 12);
            v613 = __ROR4__(v600 ^ v742, 12);
            v785 = v610;
            v614 = __ROR4__(v598 ^ v760, 12);
            v615 = v612 + v982 + v602;
            v616 = v613 + (v853 ^ 0x85A308D3) + v605;
            v617 = __ROR4__(v604 ^ v615, 8);
            v618 = v1012 + v608;
            v619 = __ROR4__(v611, 8);
            v620 = v771;
            v621 = v603 + v619;
            v622 = __ROR4__(v607 ^ v616, 8);
            v623 = v614 + v618;
            v772 = __ROR4__(v606 ^ v621, 7);
            v624 = __ROR4__(v609 ^ v623, 8);
            v743 = v742 + v622;
            v794 = v620 + v617;
            v625 = __ROR4__(v612 ^ (v620 + v617), 7);
            v626 = __ROR4__(v614 ^ (v760 + v624), 7);
            v627 = __ROR4__(v613 ^ v743, 7);
            v628 = v626 + v984 + v785;
            v629 = v986 + v772 + v615;
            v630 = __ROR4__(v617 ^ v628, 16);
            v631 = __ROR4__(v622 ^ v629, 16);
            v632 = v625 + v983 + v616;
            v633 = v760 + v624 + v631;
            v634 = v627 + (v853 ^ 0x243F6A88) + v623;
            v635 = __ROR4__(v619 ^ v634, 16);
            v761 = __ROR4__(v624 ^ v632, 16);
            v744 = v743 + v630;
            v636 = v621 + v761;
            v637 = __ROR4__(v625 ^ v636, 12);
            v638 = v772 ^ v633;
            v773 = v794 + v635;
            v639 = __ROR4__(v638, 12);
            v640 = __ROR4__(v626 ^ v744, 12);
            v641 = __ROR4__(v627 ^ (v794 + v635), 12);
            v642 = v639 + (v831 ^ 0xB5470917) + v629;
            v643 = v637 + (v835 ^ 0x34E90C6C) + v632;
            v644 = v640 + v985 + v628;
            v645 = (v800 ^ 0xC0AC29B7) + v634;
            v646 = v761;
            v762 = __ROR4__(v631 ^ v642, 8);
            v647 = __ROR4__(v630 ^ v644, 8);
            v648 = v641 + v645;
            v649 = __ROR4__(v646 ^ v643, 8);
            v650 = __ROR4__(v635 ^ v648, 8);
            v651 = v636 + v649;
            v786 = v633 + v762;
            v652 = __ROR4__(v639 ^ (v633 + v762), 7);
            v653 = __ROR4__(v637 ^ v651, 7);
            v745 = v744 + v647;
            v654 = v773 + v650;
            v655 = __ROR4__(v641 ^ (v773 + v650), 7);
            v656 = __ROR4__(v640 ^ v745, 7);
            v657 = v652 + (v836 ^ 0x85A308D3) + v644;
            v658 = v653 + v1014 + v642;
            v659 = __ROR4__(v650 ^ v657, 16);
            v660 = v655 + v968 + v643;
            v661 = v651 + v659;
            v774 = __ROR4__(v647 ^ v658, 16);
            v662 = v654 + v774;
            v663 = v656 + v987 + v648;
            v664 = __ROR4__(v762 ^ v660, 16);
            v665 = __ROR4__(v649 ^ v663, 16);
            v746 = v745 + v664;
            v666 = __ROR4__(v653 ^ v662, 12);
            v667 = __ROR4__(v652 ^ v661, 12);
            v763 = v786 + v665;
            v668 = __ROR4__(v655 ^ v746, 12);
            v669 = __ROR4__(v656 ^ (v786 + v665), 12);
            v670 = v667 + v1013 + v657;
            v671 = v989 + v658 + v666;
            v672 = __ROR4__(v659 ^ v670, 8);
            v673 = v668 + v967 + v660;
            v674 = v661 + v672;
            v675 = v667 ^ v674;
            v676 = __ROR4__(v664 ^ v673, 8);
            v677 = v669 + v988 + v663;
            v787 = v674;
            v678 = __ROR4__(v665 ^ v677, 8);
            v679 = __ROR4__(v774 ^ v671, 8);
            v775 = v662 + v679;
            v680 = v746 + v676;
            v681 = __ROR4__(v668 ^ (v746 + v676), 7);
            v747 = v763 + v678;
            v682 = __ROR4__(v675, 7);
            v683 = __ROR4__(v666 ^ v775, 7);
            v684 = __ROR4__(v669 ^ (v763 + v678), 7);
            v685 = v966 + v670 + v684;
            v686 = (v836 ^ 0x38D01377) + v673 + v683;
            v687 = __ROR4__(v679 ^ v685, 16);
            v688 = __ROR4__(v678 ^ v686, 16);
            v689 = v681 + v990 + v677;
            v690 = v1016 + v682 + v671;
            v691 = __ROR4__(v672 ^ v689, 16);
            v692 = __ROR4__(v676 ^ v690, 16);
            v693 = v680 + v687;
            v764 = v787 + v688;
            v694 = __ROR4__(v684 ^ v693, 12);
            v788 = v747 + v692;
            v776 = v775 + v691;
            v695 = __ROR4__(v683 ^ v764, 12);
            v696 = __ROR4__(v682 ^ (v747 + v692), 12);
            v697 = __ROR4__(v681 ^ v776, 12);
            v698 = v696 + v1017 + v690;
            v699 = v1015 + v686 + v695;
            v700 = __ROR4__(v692 ^ v698, 8);
            v701 = __ROR4__(v688 ^ v699, 8);
            v702 = v965 + v685 + v694;
            v703 = v991 + v689 + v697;
            v704 = __ROR4__(v687 ^ v702, 8);
            v705 = __ROR4__(v691 ^ v703, 8);
            v748 = v764 + v701;
            v706 = v693 + v704;
            v707 = __ROR4__(v694 ^ v706, 7);
            v789 = v788 + v700;
            v765 = v776 + v705;
            v708 = __ROR4__(v695 ^ v748, 7);
            v709 = __ROR4__(v696 ^ v789, 7);
            v710 = __ROR4__(v697 ^ (v776 + v705), 7);
            v711 = v708 + v993 + v698;
            v712 = v1018 + v699 + v710;
            v713 = __ROR4__(v704 ^ v711, 16);
            v714 = v709 + v1019 + v702;
            v715 = __ROR4__(v700 ^ v712, 16);
            v716 = __ROR4__(v705 ^ v714, 16);
            v717 = v1006 + v703 + v707;
            v777 = v748 + v716;
            v718 = __ROR4__(v701 ^ v717, 16);
            v719 = v765 + v713;
            v720 = __ROR4__(v708 ^ (v765 + v713), 12);
            v766 = v789 + v718;
            v721 = __ROR4__(v709 ^ (v748 + v716), 12);
            v722 = __ROR4__(v710 ^ (v706 + v715), 12);
            v723 = __ROR4__(v707 ^ (v789 + v718), 12);
            v405 = (v835 ^ 0xB5470917) + v711 + v720;
            v819 = v721 + (v800 ^ 0xA4093822) + v714;
            v406 = __ROR4__(v716 ^ v819, 8);
            v403 = v992 + v712 + v722;
            v851 = __ROR4__(v713 ^ v405, 8);
            v724 = v723 + v1007 + v717;
            v410 = v719 + v851;
            v725 = v706 + v715;
            v404 = __ROR4__(v715 ^ v403, 8);
            v726 = __ROR4__(v718 ^ v724, 8);
            v814 = v724;
            v408 = v766 + v726;
            v411 = __ROR4__(v720 ^ v410, 7);
            v412 = __ROR4__(v722 ^ (v725 + v404), 7);
            v843 = v726;
            v727 = __ROR4__(v723 ^ (v766 + v726), 7);
            v825 = v777 + v406;
            v829 = v725 + v404;
            v750 = __ROR4__(v721 ^ (v777 + v406), 7);
            v733 = v727;
          }
          v869 ^= v405 ^ v868 ^ v408;
          v865 ^= v825 ^ v403 ^ v994;
          v864 ^= v814 ^ v867 ^ v410;
          v3 = 0;
          v870 ^= v829 ^ v995 ^ v819;
          result = v843 ^ v411 ^ v863 ^ v994;
          v862 ^= v412 ^ v867 ^ v406;
          v863 = result;
          v861 ^= v851 ^ v995 ^ v733;
          v860 ^= v750 ^ v868 ^ v404;
          v8 = na;
          if ( !na )
            break;
        }
        else
        {
          v8 = i - v4;
          if ( !na )
            break;
        }
        v4 = 64 - v3;
      }
    }
    a1[16] = v3;
    a1[17] = v865;
    a1[18] = v864;
    a1[19] = v870;
    a1[20] = v869;
    a1[21] = v863;
    a1[22] = v862;
    a1[23] = v861;
    a1[24] = v860;
    a1[25] = v994;
    a1[26] = v867;
    a1[27] = v995;
    a1[28] = v868;
    a1[29] = v866;
    a1[30] = v871;
  }
  return result;
}
