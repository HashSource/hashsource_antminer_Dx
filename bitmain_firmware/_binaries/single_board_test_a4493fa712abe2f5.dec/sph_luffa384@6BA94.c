unsigned int __fastcall sph_luffa384(unsigned int result, char *a2, size_t a3)
{
  unsigned int v3; // r4
  size_t v4; // r3
  char *v5; // r1
  char *v6; // r0
  int v7; // r8
  int v8; // r2
  int v9; // lr
  int v10; // r4
  int v11; // r0
  int v12; // r3
  int v13; // r5
  int v14; // r1
  int v15; // r6
  int v16; // r7
  int v17; // r12
  int v18; // r2
  int v19; // r11
  int v20; // r10
  int v21; // r0
  int v22; // r9
  int v23; // r1
  int v24; // lr
  int v25; // r7
  int v26; // r8
  int v27; // r3
  void *v28; // r12
  int v29; // r4
  int v30; // r0
  int v31; // r1
  int v32; // r3
  int v33; // r5
  unsigned int v34; // t2
  int v35; // r1
  int v36; // r9
  int v37; // r10
  int v38; // r8
  int v39; // r6
  int v40; // lr
  int v41; // r0
  int v42; // r12
  int v43; // r1
  unsigned int v44; // r4
  int v45; // r9
  int v46; // r3
  int v47; // r5
  int v48; // r5
  int v49; // r2
  int v50; // r8
  int v51; // r0
  int v52; // r7
  int v53; // r1
  int v54; // r4
  int v55; // r2
  int v56; // lr
  int v57; // r10
  int v58; // r4
  int v59; // r1
  int v60; // r0
  int v61; // r11
  int v62; // r3
  int v63; // r12
  int v64; // r1
  int v65; // r2
  int v66; // lr
  int v67; // r10
  int v68; // r3
  int v69; // r7
  int v70; // r2
  int v71; // r0
  int v72; // r6
  int v73; // r5
  int v74; // r4
  int v75; // r0
  int v76; // r3
  int v77; // r2
  int v78; // lr
  int v79; // r7
  int v80; // r8
  int v81; // r0
  int v82; // r4
  int v83; // r6
  int v84; // r12
  int v85; // r9
  int v86; // r3
  unsigned int v87; // lr
  unsigned int v88; // r0
  int v89; // r2
  int v90; // r6
  unsigned int v91; // r11
  int v92; // r1
  int v93; // r5
  int v94; // r12
  int v95; // r8
  int v96; // r4
  int v97; // r1
  int v98; // r2
  int v99; // r11
  int v100; // r0
  int v101; // r7
  int v102; // r3
  int v103; // r5
  int v104; // r1
  int v105; // r11
  int v106; // r3
  int v107; // r12
  int v108; // r2
  int v109; // r6
  int v110; // r3
  int v111; // r2
  int v112; // r0
  int v113; // r4
  int v114; // r5
  int v115; // r0
  int v116; // r11
  int v117; // r3
  int v118; // r1
  int v119; // r2
  int v120; // r12
  int v121; // r6
  int v122; // r7
  int v123; // lr
  int v124; // r0
  int v125; // r11
  int v126; // r4
  int v127; // r9
  int v128; // r3
  unsigned int v129; // r8
  unsigned int v130; // r0
  int v131; // r2
  unsigned int v132; // r4
  int v133; // r7
  int v134; // r5
  int v135; // r1
  int v136; // r2
  int v137; // lr
  int v138; // r10
  int v139; // r4
  int v140; // r1
  int v141; // r0
  int v142; // r11
  int v143; // r3
  int v144; // r12
  int v145; // r1
  int v146; // r2
  int v147; // lr
  int v148; // r10
  int v149; // r3
  int v150; // r7
  int v151; // r2
  int v152; // r0
  int v153; // r6
  int v154; // r5
  int v155; // r4
  int v156; // r0
  int v157; // r3
  int v158; // r2
  int v159; // lr
  int v160; // r7
  int v161; // r8
  int v162; // r0
  int v163; // r4
  int v164; // r6
  int v165; // r12
  int v166; // r11
  int v167; // r3
  int v168; // r2
  unsigned int v169; // r4
  int v170; // r5
  int v171; // r1
  int v172; // r6
  unsigned int v173; // r8
  int v174; // r2
  int v175; // lr
  unsigned int v176; // r4
  int v177; // r1
  int v178; // r10
  int v179; // r3
  int v180; // r1
  int v181; // r2
  int v182; // r12
  int v183; // lr
  int v184; // r3
  int v185; // r5
  int v186; // r2
  int v187; // r0
  int v188; // r7
  int v189; // r6
  int v190; // r4
  int v191; // r0
  int v192; // r3
  int v193; // r2
  int v194; // lr
  int v195; // r12
  int v196; // r5
  int v197; // r8
  int v198; // r0
  int v199; // r4
  int v200; // r7
  unsigned int v201; // [sp+0h] [bp-D4h]
  int v202; // [sp+0h] [bp-D4h]
  int v203; // [sp+0h] [bp-D4h]
  int v204; // [sp+0h] [bp-D4h]
  int v205; // [sp+0h] [bp-D4h]
  int v206; // [sp+0h] [bp-D4h]
  int v207; // [sp+0h] [bp-D4h]
  int v208; // [sp+0h] [bp-D4h]
  size_t n; // [sp+4h] [bp-D0h]
  unsigned int v210; // [sp+8h] [bp-CCh]
  int v211; // [sp+8h] [bp-CCh]
  unsigned int v212; // [sp+8h] [bp-CCh]
  unsigned int *v213; // [sp+Ch] [bp-C8h]
  char *src; // [sp+10h] [bp-C4h]
  int v215; // [sp+1Ch] [bp-B8h]
  int v216; // [sp+1Ch] [bp-B8h]
  int v217; // [sp+20h] [bp-B4h]
  int v218; // [sp+20h] [bp-B4h]
  int v219; // [sp+20h] [bp-B4h]
  int v220; // [sp+24h] [bp-B0h]
  int v221; // [sp+24h] [bp-B0h]
  int v222; // [sp+28h] [bp-ACh]
  int v223; // [sp+28h] [bp-ACh]
  int v224; // [sp+28h] [bp-ACh]
  unsigned int v225; // [sp+2Ch] [bp-A8h]
  int v226; // [sp+2Ch] [bp-A8h]
  int v227; // [sp+2Ch] [bp-A8h]
  int v228; // [sp+30h] [bp-A4h]
  int v229; // [sp+30h] [bp-A4h]
  unsigned int v230; // [sp+30h] [bp-A4h]
  int v231; // [sp+34h] [bp-A0h]
  int v232; // [sp+34h] [bp-A0h]
  int v233; // [sp+34h] [bp-A0h]
  int v234; // [sp+34h] [bp-A0h]
  unsigned int v235; // [sp+38h] [bp-9Ch]
  int v236; // [sp+38h] [bp-9Ch]
  unsigned int v237; // [sp+38h] [bp-9Ch]
  int v238; // [sp+3Ch] [bp-98h]
  int v239; // [sp+3Ch] [bp-98h]
  int v240; // [sp+3Ch] [bp-98h]
  unsigned int v241; // [sp+40h] [bp-94h]
  unsigned int v242; // [sp+40h] [bp-94h]
  int v243; // [sp+44h] [bp-90h]
  unsigned int v244; // [sp+44h] [bp-90h]
  int v245; // [sp+44h] [bp-90h]
  unsigned int v246; // [sp+48h] [bp-8Ch]
  int v247; // [sp+48h] [bp-8Ch]
  unsigned int v248; // [sp+48h] [bp-8Ch]
  int v249; // [sp+4Ch] [bp-88h]
  int v250; // [sp+4Ch] [bp-88h]
  int v251; // [sp+50h] [bp-84h]
  int v252; // [sp+50h] [bp-84h]
  int v253; // [sp+50h] [bp-84h]
  int v254; // [sp+54h] [bp-80h]
  int v255; // [sp+54h] [bp-80h]
  int v256; // [sp+54h] [bp-80h]
  int v257; // [sp+54h] [bp-80h]
  unsigned int v258; // [sp+58h] [bp-7Ch]
  unsigned int v259; // [sp+58h] [bp-7Ch]
  int v260; // [sp+5Ch] [bp-78h]
  int v261; // [sp+5Ch] [bp-78h]
  int v262; // [sp+5Ch] [bp-78h]
  int v263; // [sp+5Ch] [bp-78h]
  unsigned int v264; // [sp+60h] [bp-74h]
  unsigned int v265; // [sp+60h] [bp-74h]
  int v266; // [sp+64h] [bp-70h]
  int v267; // [sp+64h] [bp-70h]
  int v268; // [sp+64h] [bp-70h]
  unsigned int v269; // [sp+68h] [bp-6Ch]
  unsigned int v270; // [sp+68h] [bp-6Ch]
  int v271; // [sp+6Ch] [bp-68h]
  int v272; // [sp+6Ch] [bp-68h]
  int v273; // [sp+70h] [bp-64h]
  int v274; // [sp+70h] [bp-64h]
  int v275; // [sp+70h] [bp-64h]
  unsigned int v276; // [sp+74h] [bp-60h]
  int v277; // [sp+74h] [bp-60h]
  unsigned int v278; // [sp+74h] [bp-60h]
  int v279; // [sp+78h] [bp-5Ch]
  unsigned int v280; // [sp+78h] [bp-5Ch]
  int v281; // [sp+78h] [bp-5Ch]
  unsigned int v282; // [sp+7Ch] [bp-58h]
  unsigned int v283; // [sp+7Ch] [bp-58h]
  int v284; // [sp+80h] [bp-54h]
  unsigned int v285; // [sp+80h] [bp-54h]
  int v286; // [sp+80h] [bp-54h]
  unsigned int v287; // [sp+84h] [bp-50h]
  int v288; // [sp+84h] [bp-50h]
  void *v289; // [sp+84h] [bp-50h]
  int v290; // [sp+88h] [bp-4Ch]
  int v291; // [sp+88h] [bp-4Ch]
  int v292; // [sp+88h] [bp-4Ch]
  int v293; // [sp+8Ch] [bp-48h]
  int v294; // [sp+8Ch] [bp-48h]
  int v295; // [sp+90h] [bp-44h]
  int v296; // [sp+90h] [bp-44h]
  int v297; // [sp+90h] [bp-44h]
  int v298; // [sp+94h] [bp-40h]
  unsigned int v299; // [sp+94h] [bp-40h]
  int v300; // [sp+98h] [bp-3Ch]
  int v301; // [sp+98h] [bp-3Ch]
  int v302; // [sp+9Ch] [bp-38h]
  int v303; // [sp+9Ch] [bp-38h]
  int v304; // [sp+A0h] [bp-34h]
  int v305; // [sp+A0h] [bp-34h]
  int v306; // [sp+A4h] [bp-30h]
  int v307; // [sp+A4h] [bp-30h]
  int v308; // [sp+A8h] [bp-2Ch]
  int v309; // [sp+ACh] [bp-28h]
  int v310; // [sp+ACh] [bp-28h]
  int v311; // [sp+B0h] [bp-24h]
  int v312; // [sp+B0h] [bp-24h]
  unsigned int v313; // [sp+B4h] [bp-20h]
  int v314; // [sp+B8h] [bp-1Ch]
  int v315; // [sp+BCh] [bp-18h]
  int v316; // [sp+BCh] [bp-18h]
  int v317; // [sp+C0h] [bp-14h]
  int v318; // [sp+C8h] [bp-Ch]
  int v319; // [sp+CCh] [bp-8h]

  v3 = *(_DWORD *)(result + 32);
  v213 = (unsigned int *)result;
  v4 = 32 - v3;
  n = a3;
  src = a2;
  if ( a3 < 32 - v3 )
  {
    result = (unsigned int)memcpy((void *)(result + v3), a2, a3);
    v213[8] = n + v3;
  }
  else
  {
    v302 = *(_DWORD *)(result + 36);
    v300 = *(_DWORD *)(result + 40);
    v217 = *(_DWORD *)(result + 44);
    v222 = *(_DWORD *)(result + 48);
    v228 = *(_DWORD *)(result + 52);
    v215 = *(_DWORD *)(result + 56);
    v220 = *(_DWORD *)(result + 60);
    v225 = *(_DWORD *)(result + 64);
    v249 = *(_DWORD *)(result + 68);
    v231 = *(_DWORD *)(result + 72);
    v238 = *(_DWORD *)(result + 76);
    v243 = *(_DWORD *)(result + 80);
    v251 = *(_DWORD *)(result + 84);
    v235 = *(_DWORD *)(result + 88);
    v241 = *(_DWORD *)(result + 92);
    v246 = *(_DWORD *)(result + 96);
    v271 = *(_DWORD *)(result + 100);
    v254 = *(_DWORD *)(result + 104);
    v260 = *(_DWORD *)(result + 108);
    v266 = *(_DWORD *)(result + 112);
    v295 = *(_DWORD *)(result + 116);
    v258 = *(_DWORD *)(result + 120);
    v264 = *(_DWORD *)(result + 124);
    v269 = *(_DWORD *)(result + 128);
    v290 = *(_DWORD *)(result + 132);
    v273 = *(_DWORD *)(result + 136);
    v279 = *(_DWORD *)(result + 140);
    v284 = *(_DWORD *)(result + 144);
    v293 = *(_DWORD *)(result + 148);
    v276 = *(_DWORD *)(result + 152);
    v282 = *(_DWORD *)(result + 156);
    v287 = *(_DWORD *)(result + 160);
    if ( a3 )
    {
      while ( 1 )
      {
        if ( v4 >= n )
          v4 = n;
        v5 = src;
        v6 = (char *)v213 + v3;
        n -= v4;
        v3 += v4;
        src += v4;
        result = (unsigned int)memcpy(v6, v5, v4);
        if ( v3 == 32 )
        {
          v7 = v269 ^ v246 ^ v225 ^ v287;
          v8 = v243 ^ v222 ^ v284 ^ v266 ^ v7;
          v298 = v279 ^ v260 ^ v217 ^ v238 ^ v7;
          v9 = v8 ^ v295;
          v311 = v298 ^ v284;
          v10 = v282 ^ v264 ^ v220 ^ v241;
          v11 = v251 ^ v228 ^ v293 ^ v295;
          v296 = v298 ^ v243;
          v306 = v298 ^ v266;
          v267 = v10 ^ v287;
          v12 = v273 ^ v254 ^ v300 ^ v231;
          v288 = v8 ^ v228;
          v229 = v8 ^ v251;
          v13 = v9 ^ v298 ^ v284;
          v244 = bswap32(v213[7]);
          v285 = bswap32(v213[2]);
          v14 = v276 ^ v258 ^ v235 ^ v215;
          v15 = v290 ^ v302 ^ v249 ^ v271 ^ v7;
          v304 = v10 ^ v225;
          v16 = v10 ^ v246;
          v226 = v10 ^ v269;
          v309 = v12 ^ v279;
          v210 = bswap32(v213[6]);
          v317 = v8 ^ v293;
          v17 = v288 ^ v296 ^ v10 ^ v246;
          v280 = bswap32(v213[3]);
          v315 = v11 ^ v258;
          v252 = v11 ^ v276;
          v247 = v11 ^ v215;
          v18 = v235 ^ v11;
          v313 = bswap32(v213[1]);
          v216 = v16;
          v19 = v14 ^ v220;
          v277 = v14 ^ v241;
          v20 = v14 ^ v264;
          v236 = v282 ^ v14;
          v308 = v7 ^ v290;
          v291 = v298 ^ v222;
          v223 = v217 ^ v12;
          v314 = v238 ^ v12;
          v261 = v12 ^ v260;
          v21 = v18 ^ v9;
          v22 = v229 ^ v306 ^ v10 ^ v269;
          v23 = v229 ^ v247;
          v255 = v15 ^ v254;
          v218 = v7 ^ v302;
          v303 = v7 ^ v249;
          v230 = bswap32(v213[4]);
          v239 = v7 ^ v271;
          v201 = bswap32(v213[5]);
          v221 = v15 ^ v300;
          v232 = v15 ^ v231;
          v24 = v15 ^ v273;
          v299 = bswap32(*v213);
          v274 = v223 ^ v304 ^ v311;
          v318 = v261 ^ v10 ^ v269 ^ v296;
          v294 = __ROR4__(v13 ^ v267 ^ v201 ^ v210 ^ v313, 29);
          v25 = __ROR4__(v17 ^ v280 ^ v244, 31);
          v242 = __ROR4__(v19 ^ v18 ^ v201, 31);
          v259 = __ROR4__(v21 ^ v280 ^ v244, 30);
          v26 = v210 ^ v285 ^ v244;
          v283 = __ROR4__(v280 ^ v244 ^ v20 ^ v252, 29);
          v319 = v309 ^ v267 ^ v306 ^ v201;
          v297 = __ROR4__(v22 ^ v26, 30);
          v307 = v288 ^ v252;
          v27 = v236;
          v237 = __ROR4__(v23 ^ v230, 31);
          v28 = (void *)__ROR4__(v230 ^ v10 ^ v269 ^ v27, 29);
          v29 = v304;
          v289 = v28;
          v253 = v25;
          v270 = __ROR4__(v201 ^ v216 ^ v20, 30);
          v30 = v315 ^ v277;
          v312 = v247 ^ v27;
          v31 = v315 ^ v317 ^ v26;
          v316 = v19 ^ v267;
          v32 = v277 ^ v304 ^ v210;
          v305 = v291 ^ v317 ^ v304;
          v33 = v308 ^ v267 ^ v255;
          v34 = __ROR4__(v31, 29);
          v35 = v309;
          v278 = v34;
          v265 = __ROR4__(v30 ^ v230, 30);
          v248 = __ROR4__(v32, 31);
          v310 = v314 ^ v255;
          v36 = v15 ^ v300 ^ v35;
          v256 = v223 ^ v232;
          v262 = v261 ^ v24;
          v233 = v232 ^ v239 ^ v226;
          v37 = v239 ^ v267;
          v38 = v218 ^ v216;
          v39 = v303 ^ v226;
          v40 = v218 ^ v29 ^ v24;
          v41 = v210 ^ v244;
          v301 = v29 ^ v308;
          v42 = v299 ^ v244;
          v43 = v303 ^ v216 ^ v221 ^ v299 ^ v244;
          v268 = v318 ^ v210 ^ v313;
          v224 = v274 ^ v280;
          v44 = v244;
          v227 = v316 ^ v244;
          v245 = v314 ^ v216 ^ v291 ^ v285 ^ v244;
          v219 = v36 ^ v285;
          v292 = v201 ^ v37;
          v240 = v256 ^ v313;
          v275 = v33 ^ v201 ^ v210;
          v45 = 0;
          v272 = v210 ^ v39;
          v46 = v40 ^ v313;
          v250 = v44 ^ v38;
          v281 = v262 ^ v41;
          v47 = v233 ^ v41;
          v234 = v43;
          v257 = v47;
          v286 = v319 ^ v42;
          v263 = v310 ^ v42;
          v48 = v299 ^ v301;
          v50 = v307 ^ v201;
          v49 = v219;
          v51 = v312 ^ v210;
          v52 = v224;
          v54 = v227;
          v53 = v305 ^ v230;
          do
          {
            v55 = v49 ^ v52;
            v56 = v53 ^ v54;
            v202 = v55 ^ v48 & v52;
            v57 = ~v46 ^ v48 & v52;
            v58 = (v50 | v51) ^ v53;
            v59 = v50 & v53;
            v60 = ~v51 ^ v59;
            v61 = v57 | v202;
            v62 = (v46 | v48) ^ v52;
            v63 = v60 ^ v56 & v58;
            v64 = v56 ^ v59;
            v65 = v57 ^ v55 & v62;
            v66 = (v57 | v202) ^ v48 ^ v63 ^ v64;
            v67 = v60 | v64;
            v68 = ~v62 ^ v61;
            v69 = v202 ^ v65;
            v70 = v65 & v61;
            v71 = ~v58 ^ (v60 | v64);
            v72 = v66 ^ __ROR4__(v61 ^ v48, 30);
            v73 = v67 ^ v50 ^ v68;
            v74 = v69 ^ v63 & v67;
            v75 = v71 ^ v70;
            v76 = v73 ^ __ROR4__(v68, 30);
            v77 = v75 ^ __ROR4__(v70, 30);
            v203 = dword_FD4F0[v45];
            v78 = v72 ^ __ROR4__(v66, 18);
            v79 = v74 ^ __ROR4__(v69, 30);
            v80 = v76 ^ __ROR4__(v73, 18);
            v81 = v77 ^ __ROR4__(v75, 18);
            v82 = v79 ^ __ROR4__(v74, 18);
            v83 = v78 ^ __ROR4__(v72, 22);
            v84 = dword_FD4D0[v45];
            v46 = v80 ^ __ROR4__(v76, 22);
            ++v45;
            v49 = v81 ^ __ROR4__(v77, 22);
            v52 = v82 ^ __ROR4__(v79, 22);
            v50 = __ROR4__(v80, 31);
            v51 = __ROR4__(v81, 31);
            v54 = __ROR4__(v82, 31);
            v53 = v203 ^ __ROR4__(v78, 31);
            v48 = v83 ^ v84;
          }
          while ( v45 != 8 );
          v300 = v46;
          v85 = 0;
          v215 = v50;
          v217 = v49;
          v220 = v51;
          v222 = v52;
          v302 = v83 ^ v84;
          v228 = v53;
          v86 = v234;
          v87 = v237;
          v89 = v240;
          v88 = v242;
          v90 = v245;
          v91 = v248;
          v93 = v250;
          v92 = v253;
          v225 = v54;
          do
          {
            v94 = v92 ^ v91;
            v95 = ~v86 ^ v93 & v90;
            v96 = (v87 | v88) ^ v92;
            v204 = v89 ^ v90;
            v97 = v87 & v92;
            v98 = v89 ^ v90 ^ v93 & v90;
            v99 = ~v88 ^ v97;
            v100 = v95 | v98;
            v101 = v99 ^ v94 & v96;
            v102 = v86 | v93;
            v211 = v98;
            v103 = v93 ^ (v95 | v98);
            v104 = v94 ^ v97;
            v105 = v99 | v104;
            v106 = v102 ^ v90;
            v107 = v103 ^ v101 ^ v104;
            v108 = v95 ^ v204 & v106;
            v109 = v211 ^ v108;
            v110 = ~v106 ^ v100;
            v111 = v108 & v100;
            v112 = ~v96 ^ v105;
            v113 = v107 ^ __ROR4__(v103, 30);
            v114 = v110 ^ v105 ^ v87;
            v115 = v112 ^ v111;
            v116 = v109 ^ v101 & v105;
            v117 = v114 ^ __ROR4__(v110, 30);
            v118 = dword_FD530[v85];
            v119 = v115 ^ __ROR4__(v111, 30);
            v120 = v113 ^ __ROR4__(v107, 18);
            v121 = v116 ^ __ROR4__(v109, 30);
            v122 = dword_FD510[v85++];
            v123 = v117 ^ __ROR4__(v114, 18);
            v124 = v119 ^ __ROR4__(v115, 18);
            v125 = v121 ^ __ROR4__(v116, 18);
            v126 = v120 ^ __ROR4__(v113, 22);
            v86 = v123 ^ __ROR4__(v117, 22);
            v89 = v124 ^ __ROR4__(v119, 22);
            v90 = v125 ^ __ROR4__(v121, 22);
            v87 = __ROR4__(v123, 31);
            v88 = __ROR4__(v124, 31);
            v91 = __ROR4__(v125, 31);
            v92 = v118 ^ __ROR4__(v120, 31);
            v93 = v126 ^ v122;
          }
          while ( v85 != 8 );
          v249 = v126 ^ v122;
          v251 = v92;
          v127 = 0;
          v231 = v86;
          v235 = v87;
          v238 = v89;
          v241 = v88;
          v128 = v257;
          v129 = v259;
          v131 = v263;
          v130 = v265;
          v133 = v268;
          v132 = v270;
          v134 = v272;
          v135 = v297;
          v243 = v90;
          v246 = v91;
          do
          {
            v136 = v131 ^ v133;
            v137 = v135 ^ v132;
            v205 = v136 ^ v134 & v133;
            v138 = ~v128 ^ v134 & v133;
            v139 = (v129 | v130) ^ v135;
            v140 = v129 & v135;
            v141 = ~v130 ^ v140;
            v142 = v138 | v205;
            v143 = (v128 | v134) ^ v133;
            v144 = v141 ^ v137 & v139;
            v145 = v137 ^ v140;
            v146 = v138 ^ v136 & v143;
            v147 = (v138 | v205) ^ v134 ^ v144 ^ v145;
            v148 = v141 | v145;
            v149 = ~v143 ^ v142;
            v150 = v205 ^ v146;
            v151 = v146 & v142;
            v152 = ~v139 ^ (v141 | v145);
            v153 = v147 ^ __ROR4__(v142 ^ v134, 30);
            v154 = v148 ^ v129 ^ v149;
            v155 = v150 ^ v144 & v148;
            v156 = v152 ^ v151;
            v157 = v154 ^ __ROR4__(v149, 30);
            v158 = v156 ^ __ROR4__(v151, 30);
            v206 = dword_FD570[v127];
            v159 = v153 ^ __ROR4__(v147, 18);
            v160 = v155 ^ __ROR4__(v150, 30);
            v161 = v157 ^ __ROR4__(v154, 18);
            v162 = v158 ^ __ROR4__(v156, 18);
            v163 = v160 ^ __ROR4__(v155, 18);
            v164 = v159 ^ __ROR4__(v153, 22);
            v165 = dword_FD550[v127];
            v128 = v161 ^ __ROR4__(v157, 22);
            ++v127;
            v131 = v162 ^ __ROR4__(v158, 22);
            v133 = v163 ^ __ROR4__(v160, 22);
            v129 = __ROR4__(v161, 31);
            v130 = __ROR4__(v162, 31);
            v132 = __ROR4__(v163, 31);
            v135 = v206 ^ __ROR4__(v159, 31);
            v134 = v164 ^ v165;
          }
          while ( v127 != 8 );
          v254 = v128;
          v258 = v129;
          v260 = v131;
          v264 = v130;
          v166 = 0;
          v266 = v133;
          v269 = v132;
          v271 = v164 ^ v165;
          v295 = v135;
          v167 = v275;
          v168 = v281;
          result = v283;
          v170 = v286;
          v169 = (unsigned int)v289;
          v172 = v292;
          v171 = v294;
          v173 = v278;
          do
          {
            v174 = v168 ^ v170;
            v175 = v171 ^ v169;
            v207 = v174 ^ v172 & v170;
            v176 = (v173 | result) ^ v171;
            v177 = v173 & v171;
            v178 = ~v167 ^ v172 & v170;
            v212 = ~result ^ v177;
            v179 = (v167 | v172) ^ v170;
            v180 = v175 ^ v177;
            v181 = v178 ^ v174 & v179;
            v182 = v212 ^ v175 & v176;
            v183 = (v178 | v207) ^ v172 ^ v182 ^ v180;
            v184 = ~v179 ^ (v178 | v207);
            v185 = v207 ^ v181;
            v186 = v181 & (v178 | v207);
            v187 = ~v176 ^ (v212 | v180);
            v188 = v183 ^ __ROR4__((v178 | v207) ^ v172, 30);
            v208 = dword_FD5B0[v166];
            v189 = (v212 | v180) ^ v173 ^ v184;
            v190 = v185 ^ v182 & (v212 | v180);
            v191 = v187 ^ v186;
            v192 = v189 ^ __ROR4__(v184, 30);
            v193 = v191 ^ __ROR4__(v186, 30);
            v194 = v188 ^ __ROR4__(v183, 18);
            v195 = dword_FD590[v166];
            v196 = v190 ^ __ROR4__(v185, 30);
            ++v166;
            v197 = v192 ^ __ROR4__(v189, 18);
            v198 = v193 ^ __ROR4__(v191, 18);
            v199 = v196 ^ __ROR4__(v190, 18);
            v200 = v194 ^ __ROR4__(v188, 22);
            v167 = v197 ^ __ROR4__(v192, 22);
            v168 = v198 ^ __ROR4__(v193, 22);
            v170 = v199 ^ __ROR4__(v196, 22);
            v173 = __ROR4__(v197, 31);
            result = __ROR4__(v198, 31);
            v169 = __ROR4__(v199, 31);
            v171 = v208 ^ __ROR4__(v194, 31);
            v172 = v200 ^ v195;
          }
          while ( v166 != 8 );
          v273 = v167;
          v276 = v173;
          v284 = v170;
          v287 = v169;
          v3 = 0;
          v279 = v168;
          v282 = result;
          v290 = v200 ^ v195;
          v293 = v171;
          if ( !n )
            break;
        }
        else if ( !n )
        {
          break;
        }
        v4 = 32 - v3;
      }
    }
    v213[9] = v302;
    v213[10] = v300;
    v213[11] = v217;
    v213[12] = v222;
    v213[13] = v228;
    v213[14] = v215;
    v213[15] = v220;
    v213[16] = v225;
    v213[17] = v249;
    v213[18] = v231;
    v213[19] = v238;
    v213[20] = v243;
    v213[21] = v251;
    v213[22] = v235;
    v213[23] = v241;
    v213[24] = v246;
    v213[25] = v271;
    v213[26] = v254;
    v213[27] = v260;
    v213[28] = v266;
    v213[29] = v295;
    v213[30] = v258;
    v213[31] = v264;
    v213[32] = v269;
    v213[33] = v290;
    v213[34] = v273;
    v213[35] = v279;
    v213[36] = v284;
    v213[37] = v293;
    v213[38] = v276;
    v213[39] = v282;
    v213[40] = v287;
    v213[8] = v3;
  }
  return result;
}
