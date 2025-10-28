unsigned int __fastcall sub_61B04(unsigned int *a1, char a2, char a3, unsigned int *a4)
{
  unsigned int v5; // r5
  unsigned int v6; // r1
  unsigned int *v7; // r3
  unsigned int v8; // r0
  unsigned int v9; // r4
  unsigned int v10; // r5
  unsigned int v11; // r6
  int v12; // r12
  int v13; // r8
  int v14; // r10
  int v15; // r11
  int v16; // r9
  int v17; // lr
  int v18; // r0
  int v19; // r10
  int v20; // r3
  unsigned int v21; // r1
  int v22; // r0
  int v23; // r9
  int v24; // r8
  int v25; // lr
  int v26; // r6
  int v27; // r5
  int v28; // r10
  int v29; // r2
  int v30; // r12
  int v31; // r6
  int v32; // r11
  int v33; // r8
  int v34; // r9
  int v35; // r4
  int v36; // r0
  int v37; // r1
  int v38; // r1
  int v39; // lr
  int v40; // r1
  unsigned int v41; // r12
  int v42; // r5
  int v43; // r2
  int v44; // r3
  int v45; // r0
  int v46; // r6
  int v47; // r3
  int v48; // r5
  int v49; // lr
  int v50; // r2
  int v51; // r1
  int v52; // r9
  int v53; // r3
  int v54; // r8
  int v55; // r4
  int v56; // r7
  int v57; // r5
  int v58; // r0
  int v59; // r2
  int v60; // lr
  int v61; // r10
  int v62; // r0
  int v63; // r3
  int v64; // r5
  int v65; // r1
  int v66; // r5
  int v67; // r11
  int v68; // r12
  int v69; // r2
  int v70; // r10
  int v71; // r6
  int v72; // r3
  int v73; // r7
  int v74; // lr
  int v75; // r4
  int v76; // r3
  int v77; // r2
  int v78; // r6
  int v79; // r1
  int v80; // r8
  int v81; // r0
  int v82; // r2
  int v83; // lr
  int v84; // r7
  int v85; // r12
  int v86; // r1
  int v87; // r0
  int v88; // r6
  int v89; // r10
  int v90; // r3
  unsigned int v91; // r8
  int v92; // r2
  unsigned int v93; // r0
  int v94; // r7
  unsigned int v95; // r4
  int v96; // r5
  int v97; // r1
  int v98; // r2
  int v99; // lr
  int v100; // r9
  int v101; // r4
  int v102; // r1
  int v103; // r0
  int v104; // r11
  int v105; // r3
  int v106; // r12
  int v107; // r1
  int v108; // r2
  int v109; // lr
  int v110; // r9
  int v111; // r3
  int v112; // r7
  int v113; // r2
  int v114; // r0
  int v115; // r6
  int v116; // r5
  int v117; // r4
  int v118; // r0
  int v119; // r3
  int v120; // r2
  int v121; // lr
  int v122; // r7
  int v123; // r8
  int v124; // r0
  int v125; // r4
  int v126; // r6
  int v127; // r12
  int v128; // r9
  int v129; // r3
  unsigned int v130; // r8
  int v131; // r2
  unsigned int v132; // r1
  int v133; // r7
  unsigned int v134; // r0
  int v135; // r5
  int v136; // r4
  int v137; // r2
  int v138; // lr
  int v139; // r10
  int v140; // r0
  int v141; // r3
  int v142; // r4
  int v143; // r1
  int v144; // r4
  int v145; // r11
  int v146; // r12
  int v147; // r2
  int v148; // r10
  int v149; // r3
  int v150; // r7
  int v151; // r1
  int v152; // lr
  int v153; // r2
  int v154; // r6
  int v155; // r5
  int v156; // r0
  int v157; // r1
  int v158; // r3
  int v159; // r2
  int v160; // lr
  int v161; // r7
  int v162; // r8
  int v163; // r1
  int v164; // r0
  int v165; // r6
  int v166; // r12
  int v167; // r10
  int v168; // r3
  unsigned int v169; // r8
  int v170; // r2
  unsigned int v171; // r0
  int v172; // r7
  unsigned int v173; // r4
  int v174; // r5
  int v175; // r1
  int v176; // r2
  int v177; // lr
  int v178; // r9
  int v179; // r4
  int v180; // r1
  int v181; // r0
  int v182; // r11
  int v183; // r3
  int v184; // r12
  int v185; // r1
  int v186; // r2
  int v187; // lr
  int v188; // r9
  int v189; // r3
  int v190; // r7
  int v191; // r2
  int v192; // r0
  int v193; // r6
  int v194; // r5
  int v195; // r4
  int v196; // r0
  int v197; // r3
  int v198; // r2
  int v199; // lr
  int v200; // r7
  int v201; // r8
  int v202; // r0
  int v203; // r4
  int v204; // r6
  int v205; // r12
  unsigned int result; // r0
  int v207; // [sp+4h] [bp-C8h]
  unsigned int v208; // [sp+4h] [bp-C8h]
  int v209; // [sp+4h] [bp-C8h]
  int v210; // [sp+4h] [bp-C8h]
  int v211; // [sp+4h] [bp-C8h]
  int v212; // [sp+4h] [bp-C8h]
  int v213; // [sp+4h] [bp-C8h]
  int v214; // [sp+4h] [bp-C8h]
  int v215; // [sp+4h] [bp-C8h]
  int v216; // [sp+4h] [bp-C8h]
  int v217; // [sp+Ch] [bp-C0h]
  int v218; // [sp+Ch] [bp-C0h]
  int v219; // [sp+Ch] [bp-C0h]
  int v220; // [sp+10h] [bp-BCh]
  int v221; // [sp+10h] [bp-BCh]
  int v222; // [sp+10h] [bp-BCh]
  int v223; // [sp+14h] [bp-B8h]
  int v224; // [sp+14h] [bp-B8h]
  int v225; // [sp+14h] [bp-B8h]
  int v226; // [sp+18h] [bp-B4h]
  int v227; // [sp+18h] [bp-B4h]
  int v228; // [sp+1Ch] [bp-B0h]
  int v229; // [sp+1Ch] [bp-B0h]
  int v230; // [sp+1Ch] [bp-B0h]
  int v231; // [sp+20h] [bp-ACh]
  int v232; // [sp+20h] [bp-ACh]
  int v233; // [sp+20h] [bp-ACh]
  int v234; // [sp+24h] [bp-A8h]
  int v235; // [sp+24h] [bp-A8h]
  unsigned int v236; // [sp+28h] [bp-A4h]
  int v237; // [sp+28h] [bp-A4h]
  unsigned int v238; // [sp+28h] [bp-A4h]
  unsigned int v239; // [sp+2Ch] [bp-A0h]
  int v240; // [sp+2Ch] [bp-A0h]
  unsigned int v241; // [sp+2Ch] [bp-A0h]
  unsigned int v242; // [sp+30h] [bp-9Ch]
  int v243; // [sp+30h] [bp-9Ch]
  unsigned int v244; // [sp+30h] [bp-9Ch]
  int v245; // [sp+34h] [bp-98h]
  int v246; // [sp+34h] [bp-98h]
  unsigned int v247; // [sp+38h] [bp-94h]
  unsigned int v248; // [sp+38h] [bp-94h]
  unsigned int v249; // [sp+3Ch] [bp-90h]
  int v250; // [sp+3Ch] [bp-90h]
  unsigned int v251; // [sp+3Ch] [bp-90h]
  unsigned int v252; // [sp+40h] [bp-8Ch]
  int v253; // [sp+40h] [bp-8Ch]
  unsigned int v254; // [sp+40h] [bp-8Ch]
  int v255; // [sp+44h] [bp-88h]
  int v256; // [sp+44h] [bp-88h]
  int v257; // [sp+44h] [bp-88h]
  unsigned int v258; // [sp+48h] [bp-84h]
  int v259; // [sp+48h] [bp-84h]
  int v260; // [sp+48h] [bp-84h]
  unsigned int v261; // [sp+4Ch] [bp-80h]
  int v262; // [sp+4Ch] [bp-80h]
  int v263; // [sp+50h] [bp-7Ch]
  int v264; // [sp+50h] [bp-7Ch]
  int v265; // [sp+50h] [bp-7Ch]
  unsigned int v266; // [sp+54h] [bp-78h]
  int v267; // [sp+54h] [bp-78h]
  unsigned int v268; // [sp+58h] [bp-74h]
  int v269; // [sp+58h] [bp-74h]
  unsigned int v270; // [sp+5Ch] [bp-70h]
  int v271; // [sp+5Ch] [bp-70h]
  unsigned int v272; // [sp+60h] [bp-6Ch]
  int v273; // [sp+64h] [bp-68h]
  unsigned int v274; // [sp+68h] [bp-64h]
  unsigned int v275; // [sp+6Ch] [bp-60h]
  int v276; // [sp+6Ch] [bp-60h]
  unsigned int v277; // [sp+6Ch] [bp-60h]
  unsigned int v278; // [sp+70h] [bp-5Ch]
  unsigned int v279; // [sp+70h] [bp-5Ch]
  unsigned int v280; // [sp+74h] [bp-58h]
  int v281; // [sp+74h] [bp-58h]
  unsigned int v282; // [sp+74h] [bp-58h]
  int v283; // [sp+78h] [bp-54h]
  int v284; // [sp+78h] [bp-54h]
  int v285; // [sp+78h] [bp-54h]
  unsigned int v286; // [sp+7Ch] [bp-50h]
  int v287; // [sp+7Ch] [bp-50h]
  unsigned int v288; // [sp+80h] [bp-4Ch]
  int v289; // [sp+80h] [bp-4Ch]
  int v290; // [sp+84h] [bp-48h]
  int v291; // [sp+84h] [bp-48h]
  int v292; // [sp+88h] [bp-44h]
  int v293; // [sp+88h] [bp-44h]
  int v294; // [sp+88h] [bp-44h]
  int v295; // [sp+8Ch] [bp-40h]
  unsigned int v296; // [sp+90h] [bp-3Ch]
  int v298; // [sp+98h] [bp-34h]
  int v299; // [sp+98h] [bp-34h]
  int v300; // [sp+9Ch] [bp-30h]
  int v301; // [sp+A0h] [bp-2Ch]
  int v302; // [sp+A0h] [bp-2Ch]
  int v303; // [sp+A4h] [bp-28h]
  int v304; // [sp+A8h] [bp-24h]
  unsigned int v305; // [sp+B0h] [bp-1Ch]
  unsigned int v306; // [sp+B4h] [bp-18h]
  unsigned int v307; // [sp+B8h] [bp-14h]
  int v308; // [sp+BCh] [bp-10h]
  int v309; // [sp+C0h] [bp-Ch]
  int v310; // [sp+C0h] [bp-Ch]

  v5 = a1[8];
  *((_BYTE *)a1 + v5) = (128 >> a3) | a2 & -(128 >> a3);
  memset((char *)a1 + v5 + 1, 0, 31 - v5);
  v6 = a1[10];
  v7 = a1;
  v8 = a1[18];
  v9 = a1[11];
  v10 = a1[19];
  v11 = a1[12];
  v266 = v6;
  v12 = v6 ^ v8;
  v13 = v10 ^ v9;
  v258 = v8;
  v268 = v9;
  v14 = v7[20] ^ v11;
  v270 = v11;
  v298 = v7[13];
  v15 = v7[21] ^ v298;
  v261 = v10;
  v263 = v7[20];
  v308 = 0;
  v283 = v7[21];
  v275 = v7[22];
  v16 = v275 ^ v7[14];
  v207 = v7[23] ^ v7[15];
  v286 = v7[14];
  v17 = v7[24] ^ v7[16];
  v301 = v7[15];
  v278 = v7[23];
  v288 = v7[16];
  v280 = v7[24];
  v309 = v7[9];
  v234 = v7[17];
  v292 = v7[25];
  v226 = v7[26];
  v228 = v7[27];
  v231 = v7[28];
  v255 = v7[29];
  v247 = v7[30];
  v249 = v7[31];
  v252 = v7[32];
  v290 = v7[33];
  v217 = v7[34];
  v220 = v7[35];
  v223 = v7[36];
  v245 = v7[37];
  v236 = v7[38];
  v239 = v7[39];
  v242 = v7[40];
  while ( 1 )
  {
    v18 = v14 ^ v223;
    v306 = bswap32(a1[2]);
    v272 = bswap32(a1[7]);
    v19 = v207 ^ v239 ^ v249;
    v20 = v17 ^ v242 ^ v252;
    v208 = bswap32(a1[6]);
    v296 = bswap32(a1[1]);
    v21 = bswap32(a1[3]);
    v295 = v280 ^ v19;
    v273 = v242 ^ v19;
    v22 = v18 ^ v231 ^ v20;
    v274 = bswap32(a1[5]);
    v243 = v19 ^ v252;
    v23 = v16 ^ v236 ^ v247;
    v24 = v228 ^ v13 ^ v220 ^ v20;
    v25 = v15 ^ v245 ^ v255;
    v26 = v12 ^ v226;
    v27 = v298 ^ v22;
    v28 = v288 ^ v19;
    v300 = v283 ^ v22;
    v307 = bswap32(*a1);
    v253 = v22 ^ v255;
    v299 = v286 ^ v25;
    v284 = v236 ^ v25;
    v29 = v275 ^ v25;
    v281 = v25 ^ v247;
    v30 = v301 ^ v23;
    v256 = v278 ^ v23;
    v250 = v23 ^ v249;
    v304 = v239 ^ v23;
    v31 = v26 ^ v217;
    v305 = bswap32(a1[4]);
    v240 = v263 ^ v24;
    v302 = v24 ^ v231;
    v232 = v223 ^ v24;
    v303 = v245 ^ v22;
    v264 = v261 ^ v31;
    v237 = v31 ^ v228;
    v229 = v270 ^ v24;
    v32 = v272 ^ v21;
    v276 = v220 ^ v31;
    v246 = __ROR4__(v208 ^ v296 ^ v274 ^ v273 ^ v253 ^ v223 ^ v24, 29);
    v33 = v268 ^ v31 ^ v28 ^ v21;
    v248 = __ROR4__(v253 ^ v29 ^ v272 ^ v21, 30);
    v279 = __ROR4__(v30 ^ v29 ^ v274, 31);
    v34 = v309 ^ v20;
    v35 = v292 ^ v20;
    v36 = v268 ^ v31;
    v37 = v292 ^ v309 ^ v234 ^ v290;
    v293 = v234 ^ v20;
    v38 = v37 ^ v20;
    v269 = v20 ^ v290;
    v224 = v266 ^ v38;
    v39 = v272 ^ v306 ^ v208;
    v310 = v226 ^ v38;
    v221 = v258 ^ v38;
    v218 = v38 ^ v217;
    v259 = v306 ^ v276;
    v289 = v30 ^ v273 ^ v272;
    v271 = v33 ^ v232;
    v262 = v36 ^ v296 ^ v221;
    v233 = v237 ^ v243 ^ v208 ^ v296 ^ v240;
    v40 = v284 ^ v274;
    v41 = __ROR4__(v250 ^ v284 ^ v32, 29);
    v285 = __ROR4__(v295 ^ v32 ^ v27 ^ v240, 31);
    v254 = __ROR4__(v295 ^ v250 ^ v274, 30);
    v241 = v41;
    v287 = v40 ^ v27;
    v42 = v272 ^ v208 ^ v237;
    v267 = v296 ^ v34 ^ v28 ^ v218;
    v235 = v272 ^ v34 ^ v295;
    v43 = v256 ^ v281;
    v44 = v28 ^ v256;
    v257 = __ROR4__(v243 ^ v39 ^ v300 ^ v302, 30);
    v238 = __ROR4__(v281 ^ v39 ^ v303, 29);
    v282 = __ROR4__(v44 ^ v208, 31);
    v251 = __ROR4__(v43 ^ v305, 30);
    v291 = v35 ^ v273 ^ v274;
    v227 = v35 ^ v243 ^ v272 ^ v208 ^ v221;
    v222 = v42 ^ v218;
    v45 = v272 ^ v307 ^ v264;
    v46 = v293 ^ v243;
    v47 = v272 ^ v307 ^ v274 ^ v276 ^ v273;
    v277 = __ROR4__(v299 ^ v305 ^ v300, 31);
    v244 = __ROR4__(v243 ^ v304 ^ v305, 29);
    v48 = v28 ^ v305 ^ v229;
    v49 = v259 ^ v224;
    v260 = v293 ^ v295 ^ v272 ^ v307 ^ v224;
    v265 = v264 ^ v295 ^ v272 ^ v306 ^ v229;
    v50 = v49;
    v294 = v46 ^ v208;
    v51 = v299 ^ v304 ^ v208;
    v225 = v47 ^ v302;
    v52 = 0;
    v230 = v45 ^ v310;
    v219 = v208 ^ v274 ^ v269 ^ v273 ^ v310;
    v53 = v267;
    v54 = v287;
    v55 = v28 ^ v269 ^ v307;
    v56 = v271;
    v57 = v48 ^ v303;
    v58 = v289;
    do
    {
      v59 = v50 ^ v56;
      v60 = v57 ^ v58;
      v209 = v59 ^ v55 & v56;
      v61 = ~v53 ^ v55 & v56;
      v62 = (v54 | v51) ^ v57;
      v63 = (v53 | v55) ^ v56;
      v64 = v57 & v54;
      v65 = ~v51 ^ v64;
      v66 = v60 ^ v64;
      v67 = v61 | v209;
      v68 = v65 ^ v60 & v62;
      v69 = v61 ^ v59 & v63;
      v70 = v65 | v66;
      v71 = v67 ^ v55;
      v72 = ~v63 ^ v67;
      v73 = v209 ^ v69;
      v74 = v67 ^ v55 ^ v68 ^ v66;
      v75 = (v65 | v66) ^ v54 ^ v72;
      v76 = v75 ^ __ROR4__(v72, 30);
      v77 = v69 & v67;
      v78 = v74 ^ __ROR4__(v71, 30);
      v79 = ~v62 ^ (v65 | v66) ^ v77;
      v80 = v76 ^ __ROR4__(v75, 18);
      v210 = dword_FD4F0[v52];
      v81 = v73 ^ v68 & v70;
      v82 = v79 ^ __ROR4__(v77, 30);
      v83 = v78 ^ __ROR4__(v74, 18);
      v84 = v81 ^ __ROR4__(v73, 30);
      v85 = dword_FD4D0[v52++];
      v86 = v82 ^ __ROR4__(v79, 18);
      v87 = v84 ^ __ROR4__(v81, 18);
      v88 = v83 ^ __ROR4__(v78, 22);
      v53 = v80 ^ __ROR4__(v76, 22);
      v50 = v86 ^ __ROR4__(v82, 22);
      v56 = v87 ^ __ROR4__(v84, 22);
      v57 = v210 ^ __ROR4__(v83, 31);
      v54 = __ROR4__(v80, 31);
      v51 = __ROR4__(v86, 31);
      v58 = __ROR4__(v87, 31);
      v55 = v88 ^ v85;
    }
    while ( v52 != 8 );
    v266 = v53;
    v89 = 0;
    v286 = v54;
    v268 = v50;
    v301 = v51;
    v270 = v56;
    v288 = v58;
    v309 = v88 ^ v85;
    v298 = v57;
    v90 = v260;
    v91 = v277;
    v92 = v262;
    v93 = v279;
    v94 = v265;
    v95 = v282;
    v96 = v235;
    v97 = v285;
    do
    {
      v98 = v92 ^ v94;
      v99 = v97 ^ v95;
      v211 = v98 ^ v96 & v94;
      v100 = ~v90 ^ v96 & v94;
      v101 = (v91 | v93) ^ v97;
      v102 = v97 & v91;
      v103 = ~v93 ^ v102;
      v104 = v100 | v211;
      v105 = (v90 | v96) ^ v94;
      v106 = v103 ^ v99 & v101;
      v107 = v99 ^ v102;
      v108 = v100 ^ v98 & v105;
      v109 = (v100 | v211) ^ v96 ^ v106 ^ v107;
      v110 = v103 | v107;
      v111 = ~v105 ^ v104;
      v112 = v211 ^ v108;
      v113 = v108 & v104;
      v114 = ~v101 ^ (v103 | v107);
      v115 = v109 ^ __ROR4__(v104 ^ v96, 30);
      v116 = v110 ^ v91 ^ v111;
      v117 = v112 ^ v106 & v110;
      v118 = v114 ^ v113;
      v119 = v116 ^ __ROR4__(v111, 30);
      v120 = v118 ^ __ROR4__(v113, 30);
      v212 = dword_FD530[v89];
      v121 = v115 ^ __ROR4__(v109, 18);
      v122 = v117 ^ __ROR4__(v112, 30);
      v123 = v119 ^ __ROR4__(v116, 18);
      v124 = v120 ^ __ROR4__(v118, 18);
      v125 = v122 ^ __ROR4__(v117, 18);
      v126 = v121 ^ __ROR4__(v115, 22);
      v127 = dword_FD510[v89];
      v90 = v123 ^ __ROR4__(v119, 22);
      ++v89;
      v92 = v124 ^ __ROR4__(v120, 22);
      v94 = v125 ^ __ROR4__(v122, 22);
      v91 = __ROR4__(v123, 31);
      v93 = __ROR4__(v124, 31);
      v95 = __ROR4__(v125, 31);
      v97 = v212 ^ __ROR4__(v121, 31);
      v96 = v126 ^ v127;
    }
    while ( v89 != 8 );
    v258 = v90;
    v128 = 0;
    v275 = v91;
    v261 = v92;
    v278 = v93;
    v263 = v94;
    v280 = v95;
    v234 = v126 ^ v127;
    v283 = v97;
    v129 = v227;
    v130 = v248;
    v131 = v230;
    v132 = v251;
    v133 = v233;
    v134 = v254;
    v135 = v294;
    v136 = v257;
    do
    {
      v137 = v131 ^ v133;
      v138 = v136 ^ v134;
      v213 = v137 ^ v135 & v133;
      v139 = ~v129 ^ v135 & v133;
      v140 = (v130 | v132) ^ v136;
      v141 = (v129 | v135) ^ v133;
      v142 = v136 & v130;
      v143 = ~v132 ^ v142;
      v144 = v138 ^ v142;
      v145 = v139 | v213;
      v146 = v143 ^ v138 & v140;
      v147 = v139 ^ v137 & v141;
      v148 = v143 | v144;
      v149 = ~v141 ^ v145;
      v150 = v213 ^ v147;
      v151 = ~v140 ^ (v143 | v144);
      v152 = v145 ^ v135 ^ v146 ^ v144;
      v153 = v147 & v145;
      v154 = v152 ^ __ROR4__(v145 ^ v135, 30);
      v155 = v148 ^ v130 ^ v149;
      v156 = v150 ^ v146 & v148;
      v157 = v151 ^ v153;
      v158 = v155 ^ __ROR4__(v149, 30);
      v159 = v157 ^ __ROR4__(v153, 30);
      v214 = dword_FD570[v128];
      v160 = v154 ^ __ROR4__(v152, 18);
      v161 = v156 ^ __ROR4__(v150, 30);
      v162 = v158 ^ __ROR4__(v155, 18);
      v163 = v159 ^ __ROR4__(v157, 18);
      v164 = v161 ^ __ROR4__(v156, 18);
      v165 = v160 ^ __ROR4__(v154, 22);
      v166 = dword_FD550[v128];
      v129 = v162 ^ __ROR4__(v158, 22);
      ++v128;
      v131 = v163 ^ __ROR4__(v159, 22);
      v133 = v164 ^ __ROR4__(v161, 22);
      v130 = __ROR4__(v162, 31);
      v132 = __ROR4__(v163, 31);
      v134 = __ROR4__(v164, 31);
      v136 = v214 ^ __ROR4__(v160, 31);
      v135 = v165 ^ v166;
    }
    while ( v128 != 8 );
    v226 = v129;
    v167 = 0;
    v247 = v130;
    v228 = v131;
    v249 = v132;
    v231 = v133;
    v252 = v134;
    v292 = v165 ^ v166;
    v255 = v136;
    v168 = v219;
    v169 = v238;
    v170 = v222;
    v171 = v241;
    v172 = v225;
    v173 = v244;
    v174 = v291;
    v175 = v246;
    do
    {
      v176 = v170 ^ v172;
      v177 = v175 ^ v173;
      v215 = v176 ^ v174 & v172;
      v178 = ~v168 ^ v174 & v172;
      v179 = (v169 | v171) ^ v175;
      v180 = v175 & v169;
      v181 = ~v171 ^ v180;
      v182 = v178 | v215;
      v183 = (v168 | v174) ^ v172;
      v184 = v181 ^ v177 & v179;
      v185 = v177 ^ v180;
      v186 = v178 ^ v176 & v183;
      v187 = (v178 | v215) ^ v174 ^ v184 ^ v185;
      v188 = v181 | v185;
      v189 = ~v183 ^ v182;
      v190 = v215 ^ v186;
      v191 = v186 & v182;
      v192 = ~v179 ^ (v181 | v185);
      v193 = v187 ^ __ROR4__(v182 ^ v174, 30);
      v194 = v188 ^ v169 ^ v189;
      v195 = v190 ^ v184 & v188;
      v196 = v192 ^ v191;
      v197 = v194 ^ __ROR4__(v189, 30);
      v198 = v196 ^ __ROR4__(v191, 30);
      v216 = dword_FD5B0[v167];
      v199 = v193 ^ __ROR4__(v187, 18);
      v200 = v195 ^ __ROR4__(v190, 30);
      v201 = v197 ^ __ROR4__(v194, 18);
      v202 = v198 ^ __ROR4__(v196, 18);
      v203 = v200 ^ __ROR4__(v195, 18);
      v204 = v199 ^ __ROR4__(v193, 22);
      v205 = dword_FD590[v167];
      v168 = v201 ^ __ROR4__(v197, 22);
      ++v167;
      v170 = v202 ^ __ROR4__(v198, 22);
      v172 = v203 ^ __ROR4__(v200, 22);
      v169 = __ROR4__(v201, 31);
      v171 = __ROR4__(v202, 31);
      v173 = __ROR4__(v203, 31);
      v175 = v216 ^ __ROR4__(v199, 31);
      v174 = v204 ^ v205;
    }
    while ( v167 != 8 );
    v217 = v168;
    v236 = v169;
    v220 = v170;
    v239 = v171;
    v223 = v172;
    v242 = v173;
    v290 = v204 ^ v205;
    v245 = v175;
    if ( v308 != 1 )
      break;
    v12 = v258 ^ v266;
    v13 = v261 ^ v268;
    v14 = v263 ^ v270;
    v15 = v283 ^ v298;
    v16 = v275 ^ v286;
    v207 = v278 ^ v301;
    v17 = v280 ^ v288;
    *a4 = ((v234 ^ v309 ^ v292 ^ (unsigned int)v290) >> 24)
        | (unsigned __int16)((unsigned __int8)((v234 ^ v309 ^ v292 ^ (unsigned int)v290) >> 16) << 8)
        | ((unsigned __int8)((unsigned __int16)(v234 ^ v309 ^ v292 ^ v290) >> 8) << 16) & 0xFFFFFF
        | ((unsigned __int8)(v234 ^ v309 ^ v292 ^ v290) << 24);
    a4[1] = ((v258 ^ v266 ^ v226 ^ v168) >> 24)
          | (unsigned __int16)((unsigned __int8)((v258 ^ v266 ^ v226 ^ v168) >> 16) << 8)
          | ((unsigned __int8)((unsigned __int16)(v258 ^ v266 ^ v226 ^ v168) >> 8) << 16) & 0xFFFFFF
          | ((unsigned __int8)(v258 ^ v266 ^ v226 ^ v168) << 24);
    a4[2] = ((v261 ^ v268 ^ v228 ^ v170) >> 24)
          | (unsigned __int16)((unsigned __int8)((v261 ^ v268 ^ v228 ^ v170) >> 16) << 8)
          | ((unsigned __int8)((unsigned __int16)(v261 ^ v268 ^ v228 ^ v170) >> 8) << 16) & 0xFFFFFF
          | ((unsigned __int8)(v261 ^ v268 ^ v228 ^ v170) << 24);
    a4[3] = ((v172 ^ v263 ^ v270 ^ v231) >> 24)
          | (unsigned __int16)((unsigned __int8)((v172 ^ v263 ^ v270 ^ v231) >> 16) << 8)
          | ((unsigned __int8)((unsigned __int16)(v172 ^ v263 ^ v270 ^ v231) >> 8) << 16) & 0xFFFFFF
          | ((unsigned __int8)(v172 ^ v263 ^ v270 ^ v231) << 24);
    a4[4] = ((v283 ^ v298 ^ v255 ^ (unsigned int)v175) >> 24)
          | (unsigned __int16)((unsigned __int8)((v283 ^ v298 ^ v255 ^ (unsigned int)v175) >> 16) << 8)
          | ((unsigned __int8)((unsigned __int16)(v283 ^ v298 ^ v255 ^ v175) >> 8) << 16) & 0xFFFFFF
          | ((unsigned __int8)(v283 ^ v298 ^ v255 ^ v175) << 24);
    a4[5] = ((v275 ^ v286 ^ v247 ^ v236) >> 24)
          | (unsigned __int16)((unsigned __int8)((v275 ^ v286 ^ v247 ^ v236) >> 16) << 8)
          | ((unsigned __int8)((unsigned __int16)(v275 ^ v286 ^ v247 ^ v236) >> 8) << 16) & 0xFFFFFF
          | ((unsigned __int8)(v275 ^ v286 ^ v247 ^ v236) << 24);
    a4[6] = ((v171 ^ v278 ^ v301 ^ v249) >> 24)
          | (unsigned __int16)((unsigned __int8)((v171 ^ v278 ^ v301 ^ v249) >> 16) << 8)
          | ((unsigned __int8)((unsigned __int16)(v171 ^ v278 ^ v301 ^ v249) >> 8) << 16) & 0xFFFFFF
          | ((unsigned __int8)(v171 ^ v278 ^ v301 ^ v249) << 24);
    a4[7] = ((v280 ^ v288 ^ v252 ^ v173) >> 24)
          | (unsigned __int16)((unsigned __int8)((v280 ^ v288 ^ v252 ^ v173) >> 16) << 8)
          | ((unsigned __int8)((unsigned __int16)(v280 ^ v288 ^ v252 ^ v173) >> 8) << 16) & 0xFFFFFF
          | ((unsigned __int8)(v280 ^ v288 ^ v252 ^ v173) << 24);
LABEL_14:
    ++v308;
  }
  if ( v308 != 2 )
  {
    memset(a1, 0, 0x20u);
    v12 = v266 ^ v258;
    v13 = v261 ^ v268;
    v14 = v263 ^ v270;
    v15 = v283 ^ v298;
    v16 = v275 ^ v286;
    v207 = v278 ^ v301;
    v17 = v280 ^ v288;
    goto LABEL_14;
  }
  result = ((v292 ^ v234 ^ v290 ^ (unsigned int)v309) >> 24)
         | (unsigned __int16)((unsigned __int8)((v292 ^ v234 ^ v290 ^ (unsigned int)v309) >> 16) << 8)
         | ((unsigned __int8)((unsigned __int16)(v292 ^ v234 ^ v290 ^ v309) >> 8) << 16) & 0xFFFFFF
         | ((unsigned __int8)(v292 ^ v234 ^ v290 ^ v309) << 24);
  a4[8] = result;
  a4[10] = ((v228 ^ v261 ^ v268 ^ v170) >> 24)
         | (unsigned __int16)((unsigned __int8)((v228 ^ v261 ^ v268 ^ v170) >> 16) << 8)
         | ((unsigned __int8)((unsigned __int16)(v228 ^ v261 ^ v268 ^ v170) >> 8) << 16) & 0xFFFFFF
         | ((unsigned __int8)(v228 ^ v261 ^ v268 ^ v170) << 24);
  a4[11] = ((v231 ^ v263 ^ v172 ^ v270) >> 24)
         | (unsigned __int16)((unsigned __int8)((v231 ^ v263 ^ v172 ^ v270) >> 16) << 8)
         | ((unsigned __int8)((unsigned __int16)(v231 ^ v263 ^ v172 ^ v270) >> 8) << 16) & 0xFFFFFF
         | ((unsigned __int8)(v231 ^ v263 ^ v172 ^ v270) << 24);
  a4[9] = ((v258 ^ v266 ^ v226 ^ v168) >> 24)
        | (unsigned __int16)((unsigned __int8)((v258 ^ v266 ^ v226 ^ v168) >> 16) << 8)
        | ((unsigned __int8)((unsigned __int16)(v258 ^ v266 ^ v226 ^ v168) >> 8) << 16) & 0xFFFFFF
        | ((unsigned __int8)(v258 ^ v266 ^ v226 ^ v168) << 24);
  return result;
}
