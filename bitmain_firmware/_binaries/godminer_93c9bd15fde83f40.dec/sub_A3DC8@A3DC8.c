unsigned int __fastcall sub_A3DC8(unsigned int *a1, char a2, char a3, unsigned int *a4)
{
  unsigned int v5; // lr
  unsigned int v6; // r6
  unsigned int v7; // r10
  unsigned int v8; // r5
  unsigned int v9; // r8
  unsigned int v10; // r7
  unsigned int v11; // r0
  int v12; // r1
  int v13; // r9
  int v14; // r3
  unsigned int v15; // r2
  int v16; // r12
  int v17; // r1
  int v18; // r7
  int v19; // r5
  int v20; // r8
  int v21; // r9
  int v22; // lr
  int v23; // r5
  int v24; // r0
  int v25; // r4
  int v26; // r6
  int v27; // r11
  int v28; // lr
  int v29; // r7
  int v30; // r0
  int v31; // r10
  int v32; // r1
  int v33; // r5
  int v34; // r3
  int v35; // r6
  int v36; // r8
  int v37; // lr
  int v38; // r0
  int v39; // r12
  int v40; // r1
  int v41; // r5
  int v42; // r4
  int v43; // r10
  int v44; // r6
  int v45; // r11
  int v46; // r9
  int v47; // r5
  int v48; // r12
  int v49; // r1
  int v50; // r3
  int v51; // r11
  int v52; // r2
  int v53; // r8
  int v54; // lr
  int v55; // r4
  unsigned int v56; // r12
  int v57; // r2
  int v58; // r5
  int v59; // r12
  int v60; // r11
  int v61; // r1
  int v62; // r11
  int v63; // r9
  int v64; // lr
  int v65; // r6
  int v66; // r7
  int v67; // r4
  int v68; // r2
  int v69; // r3
  int v70; // lr
  int v71; // r1
  int v72; // r5
  int v73; // r2
  int v74; // r3
  int v75; // r0
  int v76; // r7
  int v77; // r6
  int v78; // r11
  int v79; // r0
  int v80; // r1
  int v81; // r12
  int v82; // r3
  int v83; // r2
  int v84; // r5
  int v85; // lr
  int v86; // r4
  int v87; // r0
  int v88; // r1
  int v89; // r12
  int v90; // r9
  int v91; // r3
  unsigned int v92; // r12
  int v93; // r2
  unsigned int v94; // r1
  int v95; // r4
  unsigned int v96; // lr
  int v97; // r5
  int v98; // r0
  int v99; // r2
  int v100; // r6
  int v101; // r10
  int v102; // lr
  int v103; // r0
  int v104; // r1
  int v105; // r0
  int v106; // r7
  int v107; // r4
  int v108; // r5
  int v109; // r8
  int v110; // r6
  int v111; // r2
  int v112; // r3
  int v113; // r4
  int v114; // r3
  int v115; // r1
  int v116; // r2
  int v117; // r12
  int v118; // r8
  int v119; // r7
  int v120; // r12
  int v121; // r0
  int v122; // r1
  int v123; // lr
  int v124; // r3
  int v125; // r2
  int v126; // r6
  int v127; // r4
  int v128; // r5
  int v129; // r12
  int v130; // r1
  int v131; // lr
  int v132; // r9
  int v133; // r3
  unsigned int v134; // r12
  int v135; // r2
  unsigned int v136; // r1
  int v137; // r4
  unsigned int v138; // lr
  int v139; // r5
  int v140; // r0
  int v141; // r2
  int v142; // r6
  int v143; // r10
  int v144; // lr
  int v145; // r0
  int v146; // r1
  int v147; // r0
  int v148; // r7
  int v149; // r4
  int v150; // r5
  int v151; // r8
  int v152; // r6
  int v153; // r2
  int v154; // r3
  int v155; // r4
  int v156; // r3
  int v157; // r1
  int v158; // r2
  int v159; // r12
  int v160; // r8
  int v161; // r7
  int v162; // r12
  int v163; // r0
  int v164; // r1
  int v165; // lr
  int v166; // r3
  int v167; // r2
  int v168; // r6
  int v169; // r4
  int v170; // r5
  int v171; // r12
  int v172; // r1
  int v173; // lr
  int v174; // r9
  int v175; // r3
  unsigned int v176; // r12
  int v177; // r2
  unsigned int v178; // r1
  int v179; // r4
  unsigned int v180; // lr
  int v181; // r5
  int v182; // r0
  int v183; // r2
  int v184; // r6
  int v185; // r10
  int v186; // lr
  int v187; // r0
  int v188; // r1
  int v189; // r0
  int v190; // r7
  int v191; // r4
  int v192; // r5
  int v193; // r8
  int v194; // r6
  int v195; // r2
  int v196; // r3
  int v197; // r4
  int v198; // r3
  int v199; // r1
  int v200; // r2
  int v201; // r12
  int v202; // r8
  int v203; // r7
  int v204; // r12
  int v205; // r0
  int v206; // r1
  int v207; // lr
  int v208; // r3
  int v209; // r2
  int v210; // r6
  int v211; // r4
  int v212; // r5
  int v213; // r12
  int v214; // r1
  int v215; // lr
  unsigned int result; // r0
  unsigned int v217; // [sp+0h] [bp-CCh]
  unsigned int v218; // [sp+0h] [bp-CCh]
  int v219; // [sp+0h] [bp-CCh]
  int v220; // [sp+0h] [bp-CCh]
  int v221; // [sp+0h] [bp-CCh]
  int v222; // [sp+0h] [bp-CCh]
  unsigned int v223; // [sp+8h] [bp-C4h]
  int v224; // [sp+8h] [bp-C4h]
  unsigned int v225; // [sp+Ch] [bp-C0h]
  int v226; // [sp+Ch] [bp-C0h]
  int v227; // [sp+Ch] [bp-C0h]
  unsigned int v228; // [sp+10h] [bp-BCh]
  int v229; // [sp+10h] [bp-BCh]
  int v230; // [sp+10h] [bp-BCh]
  unsigned int v231; // [sp+14h] [bp-B8h]
  int v232; // [sp+14h] [bp-B8h]
  unsigned int v233; // [sp+18h] [bp-B4h]
  int v234; // [sp+18h] [bp-B4h]
  unsigned int v235; // [sp+1Ch] [bp-B0h]
  int v236; // [sp+1Ch] [bp-B0h]
  int v237; // [sp+1Ch] [bp-B0h]
  unsigned int v238; // [sp+20h] [bp-ACh]
  int v239; // [sp+20h] [bp-ACh]
  unsigned int v240; // [sp+24h] [bp-A8h]
  int v241; // [sp+24h] [bp-A8h]
  unsigned int v242; // [sp+28h] [bp-A4h]
  int v243; // [sp+28h] [bp-A4h]
  unsigned int v244; // [sp+28h] [bp-A4h]
  unsigned int v245; // [sp+2Ch] [bp-A0h]
  unsigned int v246; // [sp+2Ch] [bp-A0h]
  unsigned int v247; // [sp+30h] [bp-9Ch]
  int v248; // [sp+30h] [bp-9Ch]
  unsigned int v249; // [sp+34h] [bp-98h]
  unsigned int v250; // [sp+34h] [bp-98h]
  unsigned int v251; // [sp+38h] [bp-94h]
  int v252; // [sp+38h] [bp-94h]
  unsigned int v253; // [sp+38h] [bp-94h]
  unsigned int v254; // [sp+3Ch] [bp-90h]
  int v255; // [sp+3Ch] [bp-90h]
  unsigned int v256; // [sp+3Ch] [bp-90h]
  unsigned int v257; // [sp+40h] [bp-8Ch]
  int v258; // [sp+40h] [bp-8Ch]
  unsigned int v259; // [sp+44h] [bp-88h]
  int v260; // [sp+44h] [bp-88h]
  unsigned int v261; // [sp+48h] [bp-84h]
  int v262; // [sp+48h] [bp-84h]
  int v263; // [sp+48h] [bp-84h]
  unsigned int v264; // [sp+4Ch] [bp-80h]
  int v265; // [sp+4Ch] [bp-80h]
  unsigned int v266; // [sp+50h] [bp-7Ch]
  unsigned int v267; // [sp+54h] [bp-78h]
  int v268; // [sp+54h] [bp-78h]
  unsigned int v269; // [sp+54h] [bp-78h]
  unsigned int v270; // [sp+58h] [bp-74h]
  int v271; // [sp+58h] [bp-74h]
  unsigned int v272; // [sp+5Ch] [bp-70h]
  int v273; // [sp+5Ch] [bp-70h]
  unsigned int v274; // [sp+5Ch] [bp-70h]
  unsigned int v275; // [sp+60h] [bp-6Ch]
  unsigned int v276; // [sp+60h] [bp-6Ch]
  unsigned int v277; // [sp+64h] [bp-68h]
  int v278; // [sp+64h] [bp-68h]
  unsigned int v279; // [sp+64h] [bp-68h]
  unsigned int v280; // [sp+68h] [bp-64h]
  int v281; // [sp+68h] [bp-64h]
  unsigned int v282; // [sp+6Ch] [bp-60h]
  unsigned int v283; // [sp+70h] [bp-5Ch]
  int v284; // [sp+70h] [bp-5Ch]
  unsigned int v285; // [sp+74h] [bp-58h]
  int v286; // [sp+74h] [bp-58h]
  int v287; // [sp+74h] [bp-58h]
  unsigned int v288; // [sp+78h] [bp-54h]
  int v289; // [sp+78h] [bp-54h]
  int v290; // [sp+78h] [bp-54h]
  unsigned int v291; // [sp+7Ch] [bp-50h]
  unsigned int v292; // [sp+80h] [bp-4Ch]
  unsigned int v293; // [sp+84h] [bp-48h]
  int v294; // [sp+84h] [bp-48h]
  unsigned int v295; // [sp+88h] [bp-44h]
  int v296; // [sp+88h] [bp-44h]
  unsigned int v297; // [sp+8Ch] [bp-40h]
  int v298; // [sp+8Ch] [bp-40h]
  int v299; // [sp+90h] [bp-3Ch]
  unsigned int v300; // [sp+94h] [bp-38h]
  unsigned int v301; // [sp+98h] [bp-34h]
  int v302; // [sp+98h] [bp-34h]
  unsigned int v303; // [sp+9Ch] [bp-30h]
  unsigned int v304; // [sp+A0h] [bp-2Ch]
  int v305; // [sp+A4h] [bp-28h]
  unsigned int v306; // [sp+A8h] [bp-24h]
  int v307; // [sp+A8h] [bp-24h]
  int v308; // [sp+ACh] [bp-20h]
  int v309; // [sp+B0h] [bp-1Ch]
  int v310; // [sp+B4h] [bp-18h]
  int v311; // [sp+B8h] [bp-14h]

  v5 = a1[8];
  *((_BYTE *)a1 + v5) = (128 >> a3) | a2 & -(128 >> a3);
  memset((char *)a1 + v5 + 1, 0, 31 - v5);
  v264 = a1[10];
  v6 = v264 ^ a1[18];
  v257 = a1[18];
  v261 = a1[20];
  v293 = a1[11];
  v7 = a1[19] ^ v293;
  v8 = a1[21] ^ a1[13];
  v217 = v261 ^ a1[12];
  v259 = a1[19];
  v280 = a1[21];
  v266 = a1[12];
  v272 = a1[22];
  v275 = a1[23];
  v9 = v275 ^ a1[15];
  v305 = 0;
  v270 = v272 ^ a1[14];
  v282 = a1[14];
  v277 = a1[24];
  v10 = v277 ^ a1[16];
  v297 = a1[15];
  v283 = a1[16];
  v306 = a1[9];
  v240 = a1[17];
  v285 = a1[25];
  v233 = a1[26];
  v235 = a1[27];
  v238 = a1[28];
  v288 = a1[29];
  v249 = a1[30];
  v251 = a1[31];
  v254 = a1[32];
  v231 = a1[33];
  v223 = a1[34];
  v225 = a1[35];
  v228 = a1[36];
  v247 = a1[37];
  v242 = a1[38];
  v245 = a1[39];
  v11 = v245;
  v295 = a1[13];
  v267 = a1[40];
  while ( 1 )
  {
    v12 = v217 ^ v228;
    v303 = bswap32(a1[2]);
    v13 = v9 ^ v11 ^ v251;
    v292 = bswap32(a1[1]);
    v14 = v10 ^ v267 ^ v254;
    v291 = bswap32(a1[6]);
    v218 = bswap32(a1[7]);
    v15 = bswap32(a1[5]);
    v301 = bswap32(a1[3]);
    v16 = v270 ^ v242 ^ v249;
    v17 = v12 ^ v238 ^ v14;
    v271 = v267 ^ v13;
    v268 = v13 ^ v254;
    v310 = v277 ^ v13;
    v278 = v295 ^ v17;
    v18 = v7 ^ v225 ^ v235 ^ v14;
    v19 = v8 ^ v247 ^ v288;
    v20 = v17 ^ v288;
    v296 = v280 ^ v17;
    v255 = v242 ^ v19;
    v21 = v283 ^ v13;
    v304 = bswap32(*a1);
    v289 = v275 ^ v16;
    v22 = v272 ^ v19;
    v311 = v19 ^ v249;
    v252 = v16 ^ v251;
    v308 = v282 ^ v19;
    v23 = v297 ^ v16;
    v273 = v245 ^ v16;
    v24 = v6 ^ v233 ^ v223;
    v25 = v228 ^ v18;
    v300 = bswap32(a1[4]);
    v243 = v261 ^ v18;
    v299 = v247 ^ v17;
    v298 = v18 ^ v238;
    v26 = v293 ^ v24;
    v309 = v259 ^ v24;
    v248 = __ROR4__(v291 ^ v292 ^ v15 ^ v271 ^ v20 ^ v228 ^ v18, 29);
    v229 = v24 ^ v235;
    v262 = v225 ^ v24;
    v27 = v218 ^ v301;
    v294 = v266 ^ v18;
    v250 = __ROR4__(v22 ^ v218 ^ v301 ^ v20, 30);
    v276 = __ROR4__(v22 ^ v23 ^ v15, 31);
    v28 = v23 ^ v271;
    v29 = v26 ^ v21 ^ v301 ^ v25;
    v30 = v306 ^ v14;
    v31 = v285 ^ v14;
    v32 = v285 ^ v306 ^ v240 ^ v231 ^ v14;
    v302 = v240 ^ v14;
    v236 = v14 ^ v231;
    v33 = v218 ^ v303 ^ v291;
    v34 = v26 ^ v292;
    v286 = v264 ^ v32;
    v226 = v257 ^ v32;
    v307 = v32 ^ v233;
    v35 = v32 ^ v223;
    v284 = v28 ^ v218;
    v239 = v229 ^ v268 ^ v291 ^ v292 ^ v243;
    v260 = v34 ^ v257 ^ v32;
    v36 = v30 ^ v310;
    v37 = v30 ^ v21;
    v246 = __ROR4__(v27 ^ v252 ^ v255, 29);
    v38 = v255 ^ v15 ^ v278;
    v281 = __ROR4__(v310 ^ v27 ^ v278 ^ v243, 31);
    v256 = __ROR4__(v310 ^ v252 ^ v15, 30);
    v265 = v37 ^ v292 ^ v32 ^ v223;
    v241 = v218 ^ v36;
    v232 = v31 ^ v271 ^ v15;
    v39 = v268 ^ v33 ^ v296;
    v40 = v311 ^ v33;
    v41 = v289 ^ v311;
    v279 = __ROR4__(v21 ^ v289 ^ v291, 31);
    v290 = __ROR4__(v39 ^ v298, 30);
    v244 = __ROR4__(v40 ^ v299, 29);
    v253 = __ROR4__(v41 ^ v300, 30);
    v234 = v31 ^ v268 ^ v218 ^ v291 ^ v226;
    v42 = v218 ^ v304 ^ v15 ^ v262;
    v227 = v218 ^ v291 ^ v229 ^ v35;
    v43 = v302 ^ v268;
    v44 = v291 ^ v15 ^ v236 ^ v271;
    v45 = v21 ^ v300;
    v46 = v21 ^ v236;
    v269 = __ROR4__(v268 ^ v273 ^ v300, 29);
    v47 = v308 ^ v273;
    v274 = __ROR4__(v308 ^ v300 ^ v296, 31);
    v48 = v262 ^ v303 ^ v286;
    v258 = v302 ^ v310 ^ v218 ^ v304 ^ v286;
    v263 = v309 ^ v310 ^ v218 ^ v303 ^ v294;
    v287 = v43 ^ v291;
    v49 = v47 ^ v291;
    v230 = v42 ^ v271 ^ v298;
    v50 = v265;
    v237 = v218 ^ v304 ^ v309 ^ v307;
    v51 = v45 ^ v294 ^ v299;
    v224 = v44 ^ v307;
    v52 = v48;
    v53 = 0;
    v54 = v29;
    v55 = v46 ^ v304;
    v56 = v284;
    do
    {
      v57 = v52 ^ v54;
      v58 = v51 ^ v56;
      v59 = (v38 | v49) ^ v51;
      v60 = v51 & v38;
      v61 = ~v49 ^ v60;
      v62 = v60 ^ v58;
      v219 = v57 ^ v55 & v54;
      v63 = ~v50 ^ v55 & v54;
      v64 = v54 ^ (v55 | v50);
      v65 = v61 | v62;
      v66 = v58 & v59 ^ v61;
      v67 = v55 ^ (v63 | v219);
      v68 = v57 & v64 ^ v63;
      v69 = ~v64;
      v70 = v219 ^ v68;
      v71 = ~v59 ^ (v61 | v62);
      v72 = v67 ^ v66 ^ v62;
      v73 = v68 & (v63 | v219);
      v74 = v69 ^ (v63 | v219);
      v75 = v38 ^ v65;
      v76 = v66 & v65;
      v77 = v72 ^ __ROR4__(v67, 30);
      v78 = dword_17A6D8[v53];
      v79 = v75 ^ v74;
      v80 = v71 ^ v73;
      v81 = v70 ^ v76;
      v82 = v79 ^ __ROR4__(v74, 30);
      v83 = v80 ^ __ROR4__(v73, 30);
      v84 = v77 ^ __ROR4__(v72, 18);
      v85 = v70 ^ v76 ^ __ROR4__(v70, 30);
      v86 = dword_17A6B8[v53];
      v87 = v82 ^ __ROR4__(v79, 18);
      ++v53;
      v88 = v83 ^ __ROR4__(v80, 18);
      v89 = v85 ^ __ROR4__(v81, 18);
      v50 = v87 ^ __ROR4__(v82, 22);
      v52 = v88 ^ __ROR4__(v83, 22);
      v54 = v89 ^ __ROR4__(v85, 22);
      v38 = __ROR4__(v87, 31);
      v49 = __ROR4__(v88, 31);
      v56 = __ROR4__(v89, 31);
      v51 = v78 ^ __ROR4__(v84, 31);
      v55 = v86 ^ v84 ^ __ROR4__(v77, 22);
    }
    while ( v53 != 8 );
    v264 = v50;
    v90 = 0;
    v282 = v38;
    v293 = v52;
    v297 = v49;
    v266 = v54;
    v283 = v56;
    v306 = v55;
    v91 = v258;
    v92 = v274;
    v93 = v260;
    v94 = v276;
    v95 = v263;
    v96 = v279;
    v97 = v241;
    v98 = v281;
    v295 = v51;
    do
    {
      v99 = v93 ^ v95;
      v100 = v98 ^ v96;
      v101 = ~v91 ^ v97 & v95;
      v102 = (v92 | v94) ^ v98;
      v103 = v98 & v92;
      v104 = ~v94 ^ v103;
      v105 = v103 ^ v100;
      v220 = v99 ^ v97 & v95;
      v106 = v104 | v105;
      v107 = v95 ^ (v97 | v91);
      v108 = v97 ^ (v101 | v220);
      v109 = v100 & v102 ^ v104;
      v110 = v108 ^ v109 ^ v105;
      v111 = v99 & v107 ^ v101;
      v112 = ~v107;
      v113 = v220 ^ v111;
      v114 = v112 ^ (v101 | v220);
      v115 = ~v102 ^ (v104 | v105);
      v116 = v111 & (v101 | v220);
      v117 = v92 ^ v106;
      v118 = v109 & v106;
      v119 = v110 ^ __ROR4__(v108, 30);
      v120 = v117 ^ v114;
      v121 = dword_17A718[v90];
      v122 = v115 ^ v116;
      v123 = v113 ^ v118;
      v124 = v120 ^ __ROR4__(v114, 30);
      v125 = v122 ^ __ROR4__(v116, 30);
      v126 = v119 ^ __ROR4__(v110, 18);
      v127 = v113 ^ v118 ^ __ROR4__(v113, 30);
      v128 = dword_17A6F8[v90];
      v129 = v124 ^ __ROR4__(v120, 18);
      ++v90;
      v130 = v125 ^ __ROR4__(v122, 18);
      v131 = v127 ^ __ROR4__(v123, 18);
      v91 = v129 ^ __ROR4__(v124, 22);
      v93 = v130 ^ __ROR4__(v125, 22);
      v95 = v131 ^ __ROR4__(v127, 22);
      v92 = __ROR4__(v129, 31);
      v94 = __ROR4__(v130, 31);
      v96 = __ROR4__(v131, 31);
      v98 = v121 ^ __ROR4__(v126, 31);
      v97 = v128 ^ v126 ^ __ROR4__(v119, 22);
    }
    while ( v90 != 8 );
    v257 = v91;
    v132 = 0;
    v272 = v92;
    v259 = v93;
    v275 = v94;
    v261 = v95;
    v277 = v96;
    v240 = v97;
    v280 = v98;
    v133 = v234;
    v134 = v250;
    v135 = v237;
    v136 = v253;
    v137 = v239;
    v138 = v256;
    v139 = v287;
    v140 = v290;
    do
    {
      v141 = v135 ^ v137;
      v142 = v140 ^ v138;
      v143 = ~v133 ^ v139 & v137;
      v144 = (v134 | v136) ^ v140;
      v145 = v140 & v134;
      v146 = ~v136 ^ v145;
      v147 = v145 ^ v142;
      v221 = v141 ^ v139 & v137;
      v148 = v146 | v147;
      v149 = v137 ^ (v139 | v133);
      v150 = v139 ^ (v143 | v221);
      v151 = v142 & v144 ^ v146;
      v152 = v150 ^ v151 ^ v147;
      v153 = v141 & v149 ^ v143;
      v154 = ~v149;
      v155 = v221 ^ v153;
      v156 = v154 ^ (v143 | v221);
      v157 = ~v144 ^ (v146 | v147);
      v158 = v153 & (v143 | v221);
      v159 = v134 ^ v148;
      v160 = v151 & v148;
      v161 = v152 ^ __ROR4__(v150, 30);
      v162 = v159 ^ v156;
      v163 = dword_17A758[v132];
      v164 = v157 ^ v158;
      v165 = v155 ^ v160;
      v166 = v162 ^ __ROR4__(v156, 30);
      v167 = v164 ^ __ROR4__(v158, 30);
      v168 = v161 ^ __ROR4__(v152, 18);
      v169 = v155 ^ v160 ^ __ROR4__(v155, 30);
      v170 = dword_17A738[v132];
      v171 = v166 ^ __ROR4__(v162, 18);
      ++v132;
      v172 = v167 ^ __ROR4__(v164, 18);
      v173 = v169 ^ __ROR4__(v165, 18);
      v133 = v171 ^ __ROR4__(v166, 22);
      v135 = v172 ^ __ROR4__(v167, 22);
      v137 = v173 ^ __ROR4__(v169, 22);
      v134 = __ROR4__(v171, 31);
      v136 = __ROR4__(v172, 31);
      v138 = __ROR4__(v173, 31);
      v140 = v163 ^ __ROR4__(v168, 31);
      v139 = v170 ^ v168 ^ __ROR4__(v161, 22);
    }
    while ( v132 != 8 );
    v233 = v133;
    v249 = v134;
    v174 = 0;
    v235 = v135;
    v251 = v136;
    v238 = v137;
    v254 = v138;
    v285 = v139;
    v288 = v140;
    v175 = v224;
    v176 = v244;
    v177 = v227;
    v178 = v246;
    v179 = v230;
    v180 = v269;
    v181 = v232;
    v182 = v248;
    do
    {
      v183 = v177 ^ v179;
      v184 = v182 ^ v180;
      v185 = ~v175 ^ v181 & v179;
      v186 = (v176 | v178) ^ v182;
      v187 = v182 & v176;
      v188 = ~v178 ^ v187;
      v189 = v187 ^ v184;
      v222 = v183 ^ v181 & v179;
      v190 = v188 | v189;
      v191 = v179 ^ (v181 | v175);
      v192 = v181 ^ (v185 | v222);
      v193 = v184 & v186 ^ v188;
      v194 = v192 ^ v193 ^ v189;
      v195 = v183 & v191 ^ v185;
      v196 = ~v191;
      v197 = v222 ^ v195;
      v198 = v196 ^ (v185 | v222);
      v199 = ~v186 ^ (v188 | v189);
      v200 = v195 & (v185 | v222);
      v201 = v176 ^ v190;
      v202 = v193 & v190;
      v203 = v194 ^ __ROR4__(v192, 30);
      v204 = v201 ^ v198;
      v205 = dword_17A798[v174];
      v206 = v199 ^ v200;
      v207 = v197 ^ v202;
      v208 = v204 ^ __ROR4__(v198, 30);
      v209 = v206 ^ __ROR4__(v200, 30);
      v210 = v203 ^ __ROR4__(v194, 18);
      v211 = v197 ^ v202 ^ __ROR4__(v197, 30);
      v212 = dword_17A778[v174];
      v213 = v208 ^ __ROR4__(v204, 18);
      ++v174;
      v214 = v209 ^ __ROR4__(v206, 18);
      v215 = v211 ^ __ROR4__(v207, 18);
      v175 = v213 ^ __ROR4__(v208, 22);
      v177 = v214 ^ __ROR4__(v209, 22);
      v179 = v215 ^ __ROR4__(v211, 22);
      v176 = __ROR4__(v213, 31);
      v178 = __ROR4__(v214, 31);
      v180 = __ROR4__(v215, 31);
      v182 = v205 ^ __ROR4__(v210, 31);
      v181 = v212 ^ v210 ^ __ROR4__(v203, 22);
    }
    while ( v174 != 8 );
    v223 = v175;
    v242 = v176;
    v225 = v177;
    v245 = v178;
    v228 = v179;
    v267 = v180;
    v231 = v181;
    v247 = v182;
    if ( v305 != 1 )
      break;
    v6 = v257 ^ v264;
    v7 = v259 ^ v293;
    v217 = v261 ^ v266;
    v8 = v280 ^ v51;
    v270 = v272 ^ v282;
    v9 = v275 ^ v297;
    v10 = v277 ^ v283;
    *a4 = ((v240 ^ v306 ^ v285 ^ v231) >> 24)
        | (unsigned __int16)((unsigned __int8)((v240 ^ v306 ^ v285 ^ v231) >> 16) << 8)
        | ((unsigned __int8)((unsigned __int16)(v240 ^ v306 ^ v285 ^ v231) >> 8) << 16) & 0xFFFFFF
        | ((unsigned __int8)(v240 ^ v306 ^ v285 ^ v231) << 24);
    a4[1] = ((v257 ^ v264 ^ v233 ^ v175) >> 24)
          | (unsigned __int16)((unsigned __int8)((v257 ^ v264 ^ v233 ^ v175) >> 16) << 8)
          | ((unsigned __int8)((unsigned __int16)(v257 ^ v264 ^ v233 ^ v175) >> 8) << 16) & 0xFFFFFF
          | ((unsigned __int8)(v257 ^ v264 ^ v233 ^ v175) << 24);
    a4[2] = ((v259 ^ v293 ^ v235 ^ v177) >> 24)
          | (unsigned __int16)((unsigned __int8)((v259 ^ v293 ^ v235 ^ v177) >> 16) << 8)
          | ((unsigned __int8)((unsigned __int16)(v259 ^ v293 ^ v235 ^ v177) >> 8) << 16) & 0xFFFFFF
          | ((unsigned __int8)(v259 ^ v293 ^ v235 ^ v177) << 24);
    a4[3] = ((v261 ^ v266 ^ v238 ^ v179) >> 24)
          | (unsigned __int16)((unsigned __int8)((v261 ^ v266 ^ v238 ^ v179) >> 16) << 8)
          | ((unsigned __int8)((unsigned __int16)(v261 ^ v266 ^ v238 ^ v179) >> 8) << 16) & 0xFFFFFF
          | ((unsigned __int8)(v261 ^ v266 ^ v238 ^ v179) << 24);
    a4[4] = ((v280 ^ v51 ^ v288 ^ v182) >> 24)
          | (unsigned __int16)((unsigned __int8)((v280 ^ v51 ^ v288 ^ v182) >> 16) << 8)
          | ((unsigned __int8)((unsigned __int16)(v280 ^ v51 ^ v288 ^ v182) >> 8) << 16) & 0xFFFFFF
          | ((unsigned __int8)(v280 ^ v51 ^ v288 ^ v182) << 24);
    a4[5] = ((v272 ^ v282 ^ v249 ^ v176) >> 24)
          | (unsigned __int16)((unsigned __int8)((v272 ^ v282 ^ v249 ^ v176) >> 16) << 8)
          | ((unsigned __int8)((unsigned __int16)(v272 ^ v282 ^ v249 ^ v176) >> 8) << 16) & 0xFFFFFF
          | ((unsigned __int8)(v272 ^ v282 ^ v249 ^ v176) << 24);
    a4[6] = ((v275 ^ v297 ^ v251 ^ v178) >> 24)
          | (unsigned __int16)((unsigned __int8)((v275 ^ v297 ^ v251 ^ v178) >> 16) << 8)
          | ((unsigned __int8)((unsigned __int16)(v275 ^ v297 ^ v251 ^ v178) >> 8) << 16) & 0xFFFFFF
          | ((unsigned __int8)(v275 ^ v297 ^ v251 ^ v178) << 24);
    a4[7] = ((v277 ^ v283 ^ v254 ^ v180) >> 24)
          | (unsigned __int16)((unsigned __int8)((v277 ^ v283 ^ v254 ^ v180) >> 16) << 8)
          | ((unsigned __int8)((unsigned __int16)(v277 ^ v283 ^ v254 ^ v180) >> 8) << 16) & 0xFFFFFF
          | ((unsigned __int8)(v277 ^ v283 ^ v254 ^ v180) << 24);
LABEL_14:
    v11 = v245;
    ++v305;
  }
  if ( v305 != 2 )
  {
    memset(a1, 0, 0x20u);
    v6 = v264 ^ v257;
    v7 = v259 ^ v293;
    v217 = v261 ^ v266;
    v8 = v280 ^ v51;
    v270 = v272 ^ v282;
    v9 = v275 ^ v297;
    v10 = v277 ^ v283;
    goto LABEL_14;
  }
  result = ((v306 ^ v285 ^ v240 ^ v181) >> 24)
         | (unsigned __int16)((unsigned __int8)((v306 ^ v285 ^ v240 ^ v181) >> 16) << 8)
         | ((unsigned __int8)((unsigned __int16)(v306 ^ v285 ^ v240 ^ v181) >> 8) << 16) & 0xFFFFFF
         | ((unsigned __int8)(v306 ^ v285 ^ v240 ^ v181) << 24);
  a4[8] = result;
  a4[9] = ((v175 ^ v233 ^ v257 ^ v264) >> 24)
        | (unsigned __int16)((unsigned __int8)((v175 ^ v233 ^ v257 ^ v264) >> 16) << 8)
        | ((unsigned __int8)((unsigned __int16)(v175 ^ v233 ^ v257 ^ v264) >> 8) << 16) & 0xFFFFFF
        | ((unsigned __int8)(v175 ^ v233 ^ v257 ^ v264) << 24);
  a4[10] = ((v235 ^ v259 ^ v293 ^ v177) >> 24)
         | (unsigned __int16)((unsigned __int8)((v235 ^ v259 ^ v293 ^ v177) >> 16) << 8)
         | ((unsigned __int8)((unsigned __int16)(v235 ^ v259 ^ v293 ^ v177) >> 8) << 16) & 0xFFFFFF
         | ((unsigned __int8)(v235 ^ v259 ^ v293 ^ v177) << 24);
  a4[11] = ((v179 ^ v238 ^ v261 ^ v266) >> 24)
         | (unsigned __int16)((unsigned __int8)((v179 ^ v238 ^ v261 ^ v266) >> 16) << 8)
         | ((unsigned __int8)((unsigned __int16)(v179 ^ v238 ^ v261 ^ v266) >> 8) << 16) & 0xFFFFFF
         | ((unsigned __int8)(v179 ^ v238 ^ v261 ^ v266) << 24);
  return result;
}
