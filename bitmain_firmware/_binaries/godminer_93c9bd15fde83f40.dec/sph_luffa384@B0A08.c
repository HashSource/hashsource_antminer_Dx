int __fastcall sph_luffa384(int result, char *src, size_t a3)
{
  unsigned int v3; // r5
  size_t v4; // r4
  size_t v5; // r6
  char *v6; // r7
  size_t v7; // r3
  char *v8; // r0
  int v9; // r8
  int v10; // r7
  int v11; // r2
  int v12; // r12
  int v13; // r3
  int v14; // r1
  int v15; // r0
  int v16; // r5
  int v17; // r11
  int v18; // r12
  int v19; // lr
  int v20; // r0
  int v21; // r12
  int v22; // r9
  int v23; // r1
  int v24; // r7
  int v25; // r10
  unsigned int v26; // t2
  int v27; // r3
  int v28; // r2
  int v29; // r8
  int v30; // r6
  int v31; // r3
  int v32; // lr
  int v33; // r5
  int v34; // r5
  int v35; // r3
  unsigned int v36; // r1
  int v37; // r8
  int v38; // r1
  int v39; // r4
  int v40; // r11
  int v41; // r2
  int v42; // r8
  int v43; // r3
  int v44; // r12
  unsigned int v45; // r9
  unsigned int v46; // r4
  int v47; // r1
  int v48; // r9
  int v49; // r1
  unsigned int v50; // r8
  int v51; // r3
  int v52; // r1
  int v53; // r4
  int v54; // lr
  int v55; // r5
  int v56; // r0
  int v57; // r12
  int v58; // r2
  int v59; // r9
  int v60; // r2
  int v61; // r6
  int v62; // r10
  int v63; // lr
  int v64; // r0
  int v65; // r1
  int v66; // r0
  int v67; // r7
  int v68; // r4
  int v69; // r5
  int v70; // r8
  int v71; // r6
  int v72; // r2
  int v73; // r3
  int v74; // r4
  int v75; // r3
  int v76; // r1
  int v77; // r2
  int v78; // r12
  int v79; // r8
  int v80; // r7
  int v81; // r12
  int v82; // r0
  int v83; // r1
  int v84; // lr
  int v85; // r3
  int v86; // r2
  int v87; // r6
  int v88; // r4
  int v89; // r5
  int v90; // r12
  int v91; // r1
  int v92; // lr
  int v93; // r11
  int v94; // r3
  unsigned int v95; // r8
  int v96; // r2
  unsigned int v97; // r0
  int v98; // r5
  unsigned int v99; // r12
  int v100; // lr
  int v101; // r1
  int v102; // r2
  int v103; // r7
  int v104; // r12
  int v105; // r1
  int v106; // r9
  int v107; // r3
  int v108; // r1
  int v109; // r0
  int v110; // r2
  int v111; // r6
  int v112; // r9
  int v113; // r7
  int v114; // r6
  int v115; // r7
  int v116; // r3
  int v117; // r4
  int v118; // lr
  int v119; // r5
  int v120; // r3
  int v121; // r2
  int v122; // r1
  int v123; // r0
  int v124; // r12
  int v125; // r0
  int v126; // r2
  int v127; // r7
  int v128; // r5
  int v129; // r8
  int v130; // r6
  int v131; // r0
  int v132; // r12
  int v133; // r4
  int v134; // r9
  unsigned int v135; // r1
  int v136; // r4
  unsigned int v137; // lr
  int v138; // r3
  unsigned int v139; // r12
  int v140; // r2
  int v141; // r5
  int v142; // r0
  int v143; // r2
  int v144; // r6
  int v145; // r10
  int v146; // lr
  int v147; // r0
  int v148; // r1
  int v149; // r0
  int v150; // r7
  int v151; // r4
  int v152; // r5
  int v153; // r8
  int v154; // r6
  int v155; // r2
  int v156; // r3
  int v157; // r4
  int v158; // r3
  int v159; // r1
  int v160; // r2
  int v161; // r12
  int v162; // r8
  int v163; // r7
  int v164; // r12
  int v165; // r0
  int v166; // r1
  int v167; // lr
  int v168; // r3
  int v169; // r2
  int v170; // r6
  int v171; // r4
  int v172; // r5
  int v173; // r12
  int v174; // r1
  int v175; // lr
  int v176; // r11
  int v177; // r3
  int v178; // r2
  int v179; // r6
  size_t v180; // r12
  int v181; // lr
  int v182; // r1
  unsigned int v183; // r8
  int v184; // r2
  int v185; // r7
  int v186; // r12
  int v187; // r1
  int v188; // r10
  int v189; // r3
  int v190; // r1
  int v191; // r0
  int v192; // r2
  int v193; // r5
  int v194; // r10
  int v195; // r7
  int v196; // r5
  int v197; // r7
  int v198; // r3
  int v199; // r4
  int v200; // lr
  int v201; // r6
  int v202; // r3
  int v203; // r2
  int v204; // r1
  int v205; // r0
  int v206; // r12
  int v207; // r0
  int v208; // r2
  int v209; // r7
  int v210; // r6
  int v211; // r8
  int v212; // r5
  int v213; // r0
  int v214; // r12
  int v215; // r4
  unsigned int v216; // [sp+4h] [bp-D0h]
  int v217; // [sp+4h] [bp-D0h]
  int v218; // [sp+4h] [bp-D0h]
  int v219; // [sp+4h] [bp-D0h]
  int v220; // [sp+4h] [bp-D0h]
  size_t na; // [sp+8h] [bp-CCh]
  unsigned int v223; // [sp+Ch] [bp-C8h]
  int v224; // [sp+Ch] [bp-C8h]
  int v225; // [sp+Ch] [bp-C8h]
  unsigned int *v226; // [sp+10h] [bp-C4h]
  char *v227; // [sp+14h] [bp-C0h]
  int v228; // [sp+20h] [bp-B4h]
  int v229; // [sp+20h] [bp-B4h]
  int v230; // [sp+24h] [bp-B0h]
  int v231; // [sp+24h] [bp-B0h]
  int v232; // [sp+24h] [bp-B0h]
  unsigned int v233; // [sp+28h] [bp-ACh]
  int v234; // [sp+28h] [bp-ACh]
  int v235; // [sp+28h] [bp-ACh]
  int v236; // [sp+2Ch] [bp-A8h]
  int v237; // [sp+2Ch] [bp-A8h]
  unsigned int v238; // [sp+30h] [bp-A4h]
  unsigned int v239; // [sp+30h] [bp-A4h]
  int v240; // [sp+30h] [bp-A4h]
  int v241; // [sp+34h] [bp-A0h]
  int v242; // [sp+34h] [bp-A0h]
  int v243; // [sp+34h] [bp-A0h]
  unsigned int v244; // [sp+38h] [bp-9Ch]
  int v245; // [sp+38h] [bp-9Ch]
  unsigned int v246; // [sp+38h] [bp-9Ch]
  int v247; // [sp+3Ch] [bp-98h]
  int v248; // [sp+3Ch] [bp-98h]
  int v249; // [sp+3Ch] [bp-98h]
  unsigned int v250; // [sp+40h] [bp-94h]
  unsigned int v251; // [sp+40h] [bp-94h]
  unsigned int v252; // [sp+44h] [bp-90h]
  int v253; // [sp+44h] [bp-90h]
  unsigned int v254; // [sp+44h] [bp-90h]
  int v255; // [sp+48h] [bp-8Ch]
  int v256; // [sp+48h] [bp-8Ch]
  int v257; // [sp+4Ch] [bp-88h]
  int v258; // [sp+4Ch] [bp-88h]
  int v259; // [sp+50h] [bp-84h]
  int v260; // [sp+50h] [bp-84h]
  int v261; // [sp+50h] [bp-84h]
  unsigned int v262; // [sp+54h] [bp-80h]
  int v263; // [sp+54h] [bp-80h]
  unsigned int v264; // [sp+54h] [bp-80h]
  int v265; // [sp+58h] [bp-7Ch]
  unsigned int v266; // [sp+58h] [bp-7Ch]
  int v267; // [sp+58h] [bp-7Ch]
  unsigned int v268; // [sp+5Ch] [bp-78h]
  unsigned int v269; // [sp+5Ch] [bp-78h]
  int v270; // [sp+60h] [bp-74h]
  int v271; // [sp+60h] [bp-74h]
  int v272; // [sp+60h] [bp-74h]
  unsigned int v273; // [sp+64h] [bp-70h]
  unsigned int v274; // [sp+64h] [bp-70h]
  int v275; // [sp+68h] [bp-6Ch]
  int v276; // [sp+68h] [bp-6Ch]
  int v277; // [sp+68h] [bp-6Ch]
  int v278; // [sp+6Ch] [bp-68h]
  int v279; // [sp+6Ch] [bp-68h]
  int v280; // [sp+70h] [bp-64h]
  int v281; // [sp+70h] [bp-64h]
  unsigned int v282; // [sp+74h] [bp-60h]
  int v283; // [sp+74h] [bp-60h]
  unsigned int v284; // [sp+74h] [bp-60h]
  int v285; // [sp+78h] [bp-5Ch]
  unsigned int v286; // [sp+78h] [bp-5Ch]
  int v287; // [sp+78h] [bp-5Ch]
  int v288; // [sp+7Ch] [bp-58h]
  int v289; // [sp+7Ch] [bp-58h]
  size_t v290; // [sp+80h] [bp-54h]
  size_t v291; // [sp+80h] [bp-54h]
  size_t v292; // [sp+80h] [bp-54h]
  int v293; // [sp+84h] [bp-50h]
  int v294; // [sp+84h] [bp-50h]
  int v295; // [sp+84h] [bp-50h]
  int v296; // [sp+88h] [bp-4Ch]
  int v297; // [sp+88h] [bp-4Ch]
  int v298; // [sp+8Ch] [bp-48h]
  int v299; // [sp+8Ch] [bp-48h]
  int v300; // [sp+8Ch] [bp-48h]
  int v301; // [sp+8Ch] [bp-48h]
  int v302; // [sp+90h] [bp-44h]
  unsigned int v303; // [sp+90h] [bp-44h]
  int v304; // [sp+90h] [bp-44h]
  int v305; // [sp+94h] [bp-40h]
  unsigned int v306; // [sp+94h] [bp-40h]
  int v307; // [sp+98h] [bp-3Ch]
  int v308; // [sp+98h] [bp-3Ch]
  int v309; // [sp+98h] [bp-3Ch]
  int v310; // [sp+9Ch] [bp-38h]
  unsigned int v311; // [sp+9Ch] [bp-38h]
  int v312; // [sp+A0h] [bp-34h]
  int v313; // [sp+A0h] [bp-34h]
  int v314; // [sp+A4h] [bp-30h]
  int v315; // [sp+A8h] [bp-2Ch]
  int v316; // [sp+A8h] [bp-2Ch]
  int v317; // [sp+ACh] [bp-28h]
  int v318; // [sp+B0h] [bp-24h]
  int v319; // [sp+B0h] [bp-24h]
  int v320; // [sp+B8h] [bp-1Ch]
  int v321; // [sp+BCh] [bp-18h]
  int v322; // [sp+C0h] [bp-14h]
  int v323; // [sp+C4h] [bp-10h]
  int v324; // [sp+C8h] [bp-Ch]
  int v325; // [sp+CCh] [bp-8h]

  v3 = *(_DWORD *)(result + 32);
  v226 = (unsigned int *)result;
  v4 = 32 - v3;
  if ( a3 < 32 - v3 )
  {
    v215 = result;
    result = (int)memcpy((void *)(result + v3), src, a3);
    *(_DWORD *)(v215 + 32) = a3 + v3;
  }
  else
  {
    v307 = *(_DWORD *)(result + 36);
    v305 = *(_DWORD *)(result + 40);
    v230 = *(_DWORD *)(result + 44);
    v236 = *(_DWORD *)(result + 48);
    v310 = *(_DWORD *)(result + 52);
    v228 = *(_DWORD *)(result + 56);
    v233 = *(_DWORD *)(result + 60);
    v238 = *(_DWORD *)(result + 64);
    v255 = *(_DWORD *)(result + 68);
    v241 = *(_DWORD *)(result + 72);
    v247 = *(_DWORD *)(result + 76);
    v298 = *(_DWORD *)(result + 80);
    v257 = *(_DWORD *)(result + 84);
    v244 = *(_DWORD *)(result + 88);
    v250 = *(_DWORD *)(result + 92);
    v252 = *(_DWORD *)(result + 96);
    v275 = *(_DWORD *)(result + 100);
    v259 = *(_DWORD *)(result + 104);
    v265 = *(_DWORD *)(result + 108);
    v270 = *(_DWORD *)(result + 112);
    v278 = *(_DWORD *)(result + 116);
    v262 = *(_DWORD *)(result + 120);
    v268 = *(_DWORD *)(result + 124);
    v273 = *(_DWORD *)(result + 128);
    v293 = *(_DWORD *)(result + 132);
    v280 = *(_DWORD *)(result + 136);
    v285 = *(_DWORD *)(result + 140);
    v302 = *(_DWORD *)(result + 144);
    v296 = *(_DWORD *)(result + 148);
    v282 = *(_DWORD *)(result + 152);
    v288 = *(_DWORD *)(result + 156);
    v290 = *(_DWORD *)(result + 160);
    if ( a3 )
    {
      v5 = a3;
      v6 = src;
      while ( 1 )
      {
        if ( v4 >= v5 )
          v4 = v5;
        v8 = (char *)v226 + v3;
        v3 += v4;
        result = (int)memcpy(v8, v6, v4);
        na = v5 - v4;
        v227 = &v6[v4];
        if ( v3 == 32 )
        {
          v9 = v273 ^ v252 ^ v238 ^ v290;
          v10 = v285 ^ v265 ^ v230 ^ v247 ^ v9;
          v11 = v236 ^ v298 ^ v302 ^ v270 ^ v9;
          v314 = v10 ^ v298;
          v318 = v10 ^ v302;
          v223 = bswap32(v226[7]);
          v315 = v10 ^ v270;
          v12 = v288 ^ v268 ^ v233 ^ v250;
          v303 = bswap32(v226[2]);
          v299 = v12 ^ v290;
          v13 = v259 ^ v280 ^ v305 ^ v241;
          v291 = v11 ^ v310;
          v14 = v282 ^ v262 ^ v244 ^ v228;
          v312 = v12 ^ v238;
          v15 = v257 ^ v310 ^ v296 ^ v278;
          v16 = v293 ^ v307 ^ v255 ^ v275 ^ v9;
          v271 = v12 ^ v252;
          v17 = v11 ^ v257;
          v253 = v12 ^ v273;
          v18 = v285;
          v286 = bswap32(v226[1]);
          v317 = v13 ^ v18;
          v239 = bswap32(v226[6]);
          v322 = v15 ^ v262;
          v263 = v15 ^ v282;
          v19 = v15 ^ v244;
          v216 = bswap32(v226[5]);
          v20 = v15 ^ v228;
          v323 = v11 ^ v296;
          v283 = v14 ^ v233;
          v321 = v14 ^ v250;
          v21 = v11 ^ v310 ^ v314;
          v22 = v14 ^ v268;
          v245 = v14 ^ v288;
          v311 = bswap32(v226[3]);
          v294 = v9 ^ v293;
          v234 = v10 ^ v236;
          v231 = v13 ^ v230;
          v23 = v13 ^ v247;
          v248 = v13 ^ v265;
          v320 = v23;
          v24 = v9 ^ v307;
          v308 = v9 ^ v255;
          v25 = v16 ^ v259;
          v276 = v9 ^ v275;
          v229 = v16 ^ v305;
          v266 = bswap32(v226[4]);
          v237 = v16 ^ v241;
          v242 = v16 ^ v280;
          v297 = __ROR4__(v11 ^ v278 ^ v318 ^ v299 ^ v216 ^ v286 ^ v239, 29);
          v26 = __ROR4__(v19 ^ v11 ^ v278 ^ v311 ^ v223, 30);
          v27 = v263;
          v258 = __ROR4__(v21 ^ v271 ^ v311 ^ v223, 31);
          v306 = bswap32(*v226);
          v28 = v311 ^ v223 ^ v22 ^ v263;
          v264 = v26;
          v319 = v231 ^ v312 ^ v318;
          v324 = v248 ^ v253 ^ v314;
          v325 = v317 ^ v299 ^ v315 ^ v216;
          v29 = v239 ^ v303 ^ v223;
          v279 = __ROR4__(v17 ^ v315 ^ v253 ^ v29, 30);
          v30 = v291 ^ v27;
          v31 = v245;
          v251 = __ROR4__(v19 ^ v283 ^ v216, 31);
          v32 = v299;
          v274 = __ROR4__(v22 ^ v271 ^ v216, 30);
          v33 = v253 ^ v245 ^ v266;
          v289 = __ROR4__(v28, 29);
          v246 = __ROR4__(v17 ^ v20 ^ v266, 31);
          v292 = __ROR4__(v33, 29);
          v34 = v312;
          v316 = v20 ^ v31;
          v35 = v312 ^ v321;
          v300 = v283 ^ v299;
          v36 = __ROR4__(v322 ^ v323 ^ v29, 29);
          v313 = v234 ^ v323 ^ v312;
          v37 = v253;
          v284 = v36;
          v269 = __ROR4__(v321 ^ v322 ^ v266, 30);
          v254 = __ROR4__(v35 ^ v239, 31);
          v38 = v231 ^ v237;
          v39 = v320 ^ v271 ^ v234;
          v40 = v248 ^ v242;
          v41 = v276 ^ v37 ^ v237;
          v260 = v308 ^ v37;
          v42 = v24 ^ v271;
          v309 = v308 ^ v271 ^ v229;
          v43 = v239 ^ v223;
          v44 = v34 ^ v294;
          v272 = v324 ^ v286 ^ v239;
          v45 = v239;
          v235 = v316 ^ v239;
          v240 = v300 ^ v223;
          v301 = v39 ^ v303 ^ v223;
          v232 = v229 ^ v317 ^ v303;
          v46 = v286;
          v249 = v38 ^ v286;
          v281 = v294 ^ v32 ^ v25 ^ v216 ^ v45;
          v47 = v216 ^ v276 ^ v32;
          v277 = v45 ^ v260;
          v256 = v223 ^ v42;
          v48 = v41 ^ v43;
          v287 = v40 ^ v43;
          v304 = v325 ^ v306 ^ v223;
          v295 = v47;
          v49 = v24 ^ v34 ^ v242 ^ v46;
          v50 = v266;
          v243 = v309 ^ v306 ^ v223;
          v267 = v25 ^ v320 ^ v306 ^ v223;
          v51 = v49;
          v52 = v235;
          v53 = v319 ^ v311;
          v54 = v240;
          v55 = v44 ^ v306;
          v56 = v313 ^ v50;
          v57 = v30 ^ v216;
          v58 = v232;
          v261 = v48;
          v59 = 0;
          do
          {
            v60 = v58 ^ v53;
            v61 = v56 ^ v54;
            v62 = ~v51 ^ v55 & v53;
            v63 = (v57 | v52) ^ v56;
            v64 = v56 & v57;
            v65 = ~v52 ^ v64;
            v66 = v64 ^ v61;
            v217 = v60 ^ v55 & v53;
            v67 = v65 | v66;
            v68 = v53 ^ (v55 | v51);
            v69 = v55 ^ (v62 | v217);
            v70 = v61 & v63 ^ v65;
            v71 = v69 ^ v70 ^ v66;
            v72 = v60 & v68 ^ v62;
            v73 = ~v68;
            v74 = v217 ^ v72;
            v75 = v73 ^ (v62 | v217);
            v76 = ~v63 ^ (v65 | v66);
            v77 = v72 & (v62 | v217);
            v78 = v57 ^ v67;
            v79 = v70 & v67;
            v80 = v71 ^ __ROR4__(v69, 30);
            v81 = v78 ^ v75;
            v82 = dword_17A6D8[v59];
            v83 = v76 ^ v77;
            v84 = v74 ^ v79;
            v85 = v81 ^ __ROR4__(v75, 30);
            v86 = v83 ^ __ROR4__(v77, 30);
            v87 = v80 ^ __ROR4__(v71, 18);
            v88 = v74 ^ v79 ^ __ROR4__(v74, 30);
            v89 = dword_17A6B8[v59];
            v90 = v85 ^ __ROR4__(v81, 18);
            ++v59;
            v91 = v86 ^ __ROR4__(v83, 18);
            v92 = v88 ^ __ROR4__(v84, 18);
            v51 = v90 ^ __ROR4__(v85, 22);
            v58 = v91 ^ __ROR4__(v86, 22);
            v53 = v92 ^ __ROR4__(v88, 22);
            v57 = __ROR4__(v90, 31);
            v52 = __ROR4__(v91, 31);
            v54 = __ROR4__(v92, 31);
            v56 = v82 ^ __ROR4__(v87, 31);
            v55 = v89 ^ v87 ^ __ROR4__(v80, 22);
          }
          while ( v59 != 8 );
          v305 = v51;
          v228 = v57;
          v93 = 0;
          v230 = v58;
          v233 = v52;
          v238 = v54;
          v307 = v55;
          v310 = v56;
          v94 = v243;
          v95 = v246;
          v96 = v249;
          v97 = v251;
          v98 = v301;
          v99 = v254;
          v100 = v256;
          v101 = v258;
          v236 = v53;
          do
          {
            v102 = v96 ^ v98;
            v103 = v101 ^ v99;
            v218 = v102 ^ v100 & v98;
            v104 = (v95 | v97) ^ v101;
            v105 = v101 & v95;
            v106 = ~v94 ^ v100 & v98;
            v224 = ~v97 ^ v105;
            v107 = (v100 | v94) ^ v98;
            v108 = v105 ^ v103;
            v109 = v106 | v218;
            v110 = v102 & v107 ^ v106;
            v111 = v103 & v104 ^ v224;
            v112 = v224 | v108;
            v113 = v109 ^ v100 ^ v111;
            v114 = v111 & (v224 | v108);
            v115 = v113 ^ v108;
            v116 = ~v107 ^ v109;
            v117 = v115 ^ __ROR4__(v109 ^ v100, 30);
            v118 = (v224 | v108) ^ v95 ^ v116;
            v119 = v218 ^ v110;
            v120 = v118 ^ __ROR4__(v116, 30);
            v121 = v110 & v109;
            v122 = dword_17A718[v93];
            v123 = ~v104 ^ v112;
            v124 = v119 ^ v114;
            v125 = v123 ^ v121;
            v126 = v125 ^ __ROR4__(v121, 30);
            v127 = v117 ^ __ROR4__(v115, 18);
            v128 = v119 ^ v114 ^ __ROR4__(v119, 30);
            v129 = v120 ^ __ROR4__(v118, 18);
            v130 = dword_17A6F8[v93];
            v131 = v126 ^ __ROR4__(v125, 18);
            ++v93;
            v132 = v128 ^ __ROR4__(v124, 18);
            v133 = v127 ^ __ROR4__(v117, 22);
            v94 = v129 ^ __ROR4__(v120, 22);
            v96 = v131 ^ __ROR4__(v126, 22);
            v98 = v132 ^ __ROR4__(v128, 22);
            v95 = __ROR4__(v129, 31);
            v97 = __ROR4__(v131, 31);
            v99 = __ROR4__(v132, 31);
            v101 = v122 ^ __ROR4__(v127, 31);
            v100 = v133 ^ v130;
          }
          while ( v93 != 8 );
          v257 = v101;
          v255 = v133 ^ v130;
          v134 = 0;
          v135 = v269;
          v136 = v272;
          v137 = v274;
          v241 = v94;
          v247 = v96;
          v250 = v97;
          v298 = v98;
          v252 = v99;
          v138 = v261;
          v139 = v264;
          v140 = v267;
          v141 = v277;
          v142 = v279;
          v244 = v95;
          do
          {
            v143 = v140 ^ v136;
            v144 = v142 ^ v137;
            v145 = ~v138 ^ v141 & v136;
            v146 = (v139 | v135) ^ v142;
            v147 = v142 & v139;
            v148 = ~v135 ^ v147;
            v149 = v147 ^ v144;
            v219 = v143 ^ v141 & v136;
            v150 = v148 | v149;
            v151 = v136 ^ (v141 | v138);
            v152 = v141 ^ (v145 | v219);
            v153 = v144 & v146 ^ v148;
            v154 = v152 ^ v153 ^ v149;
            v155 = v143 & v151 ^ v145;
            v156 = ~v151;
            v157 = v219 ^ v155;
            v158 = v156 ^ (v145 | v219);
            v159 = ~v146 ^ (v148 | v149);
            v160 = v155 & (v145 | v219);
            v161 = v139 ^ v150;
            v162 = v153 & v150;
            v163 = v154 ^ __ROR4__(v152, 30);
            v164 = v161 ^ v158;
            v165 = dword_17A758[v134];
            v166 = v159 ^ v160;
            v167 = v157 ^ v162;
            v168 = v164 ^ __ROR4__(v158, 30);
            v169 = v166 ^ __ROR4__(v160, 30);
            v170 = v163 ^ __ROR4__(v154, 18);
            v171 = v157 ^ v162 ^ __ROR4__(v157, 30);
            v172 = dword_17A738[v134];
            v173 = v168 ^ __ROR4__(v164, 18);
            ++v134;
            v174 = v169 ^ __ROR4__(v166, 18);
            v175 = v171 ^ __ROR4__(v167, 18);
            v138 = v173 ^ __ROR4__(v168, 22);
            v140 = v174 ^ __ROR4__(v169, 22);
            v136 = v175 ^ __ROR4__(v171, 22);
            v139 = __ROR4__(v173, 31);
            v135 = __ROR4__(v174, 31);
            v137 = __ROR4__(v175, 31);
            v142 = v165 ^ __ROR4__(v170, 31);
            v141 = v172 ^ v170 ^ __ROR4__(v163, 22);
          }
          while ( v134 != 8 );
          v259 = v138;
          v262 = v139;
          v176 = 0;
          v265 = v140;
          v268 = v135;
          v273 = v137;
          v278 = v142;
          v177 = v281;
          v178 = v287;
          result = v289;
          v179 = v304;
          v180 = v292;
          v181 = v295;
          v182 = v297;
          v183 = v284;
          v270 = v136;
          v275 = v141;
          do
          {
            v184 = v178 ^ v179;
            v185 = v182 ^ v180;
            v220 = v184 ^ v181 & v179;
            v186 = (v183 | result) ^ v182;
            v187 = v182 & v183;
            v188 = ~v177 ^ v181 & v179;
            v225 = ~result ^ v187;
            v189 = (v181 | v177) ^ v179;
            v190 = v187 ^ v185;
            v191 = v188 | v220;
            v192 = v184 & v189 ^ v188;
            v193 = v185 & v186 ^ v225;
            v194 = v225 | v190;
            v195 = v191 ^ v181 ^ v193;
            v196 = v193 & (v225 | v190);
            v197 = v195 ^ v190;
            v198 = ~v189 ^ v191;
            v199 = v197 ^ __ROR4__(v191 ^ v181, 30);
            v200 = (v225 | v190) ^ v183 ^ v198;
            v201 = v220 ^ v192;
            v202 = v200 ^ __ROR4__(v198, 30);
            v203 = v192 & v191;
            v204 = dword_17A798[v176];
            v205 = ~v186 ^ v194;
            v206 = v201 ^ v196;
            v207 = v205 ^ v203;
            v208 = v207 ^ __ROR4__(v203, 30);
            v209 = v199 ^ __ROR4__(v197, 18);
            v210 = v201 ^ v196 ^ __ROR4__(v201, 30);
            v211 = v202 ^ __ROR4__(v200, 18);
            v212 = dword_17A778[v176];
            v213 = v208 ^ __ROR4__(v207, 18);
            ++v176;
            v214 = v210 ^ __ROR4__(v206, 18);
            v177 = v211 ^ __ROR4__(v202, 22);
            v178 = v213 ^ __ROR4__(v208, 22);
            v179 = v214 ^ __ROR4__(v210, 22);
            v183 = __ROR4__(v211, 31);
            result = __ROR4__(v213, 31);
            v180 = __ROR4__(v214, 31);
            v182 = v204 ^ __ROR4__(v209, 31);
            v181 = v209 ^ __ROR4__(v199, 22) ^ v212;
          }
          while ( v176 != 8 );
          v280 = v177;
          v3 = 0;
          v7 = na;
          v282 = v183;
          v285 = v178;
          v288 = result;
          v302 = v179;
          v290 = v180;
          v293 = v181;
          v296 = v182;
          if ( !na )
            break;
        }
        else
        {
          v7 = v5 - v4;
          if ( !na )
            break;
        }
        v6 = v227;
        v4 = 32 - v3;
        v5 = v7;
      }
    }
    v226[9] = v307;
    v226[10] = v305;
    v226[11] = v230;
    v226[12] = v236;
    v226[13] = v310;
    v226[14] = v228;
    v226[15] = v233;
    v226[16] = v238;
    v226[17] = v255;
    v226[18] = v241;
    v226[19] = v247;
    v226[20] = v298;
    v226[21] = v257;
    v226[22] = v244;
    v226[23] = v250;
    v226[24] = v252;
    v226[25] = v275;
    v226[26] = v259;
    v226[27] = v265;
    v226[28] = v270;
    v226[29] = v278;
    v226[30] = v262;
    v226[31] = v268;
    v226[32] = v273;
    v226[33] = v293;
    v226[34] = v280;
    v226[35] = v285;
    v226[36] = v302;
    v226[37] = v296;
    v226[38] = v282;
    v226[39] = v288;
    v226[40] = v290;
    v226[8] = v3;
  }
  return result;
}
