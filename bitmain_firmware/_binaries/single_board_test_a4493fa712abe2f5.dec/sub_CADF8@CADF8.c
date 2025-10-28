int __fastcall sub_CADF8(int a1, char a2, char a3, void *a4, size_t n)
{
  unsigned int v5; // r5
  unsigned int v6; // r4
  unsigned int v7; // r6
  size_t v8; // r5
  unsigned int v9; // r4
  int v10; // r6
  char *v11; // r7
  unsigned __int64 v12; // kr38_8
  int v13; // r8
  __int64 v14; // r6
  __int64 v15; // kr50_8
  unsigned int v16; // r10
  unsigned int v17; // r5
  _QWORD *v18; // r2
  _QWORD *v19; // r8
  int v20; // r11
  int v21; // r4
  int v22; // r5
  int v23; // r5
  int v24; // r8
  int v25; // r3
  int v26; // r5
  int v27; // r1
  int v28; // r6
  __int64 v29; // kr60_8
  int v30; // r2
  int v31; // r11
  int v32; // r7
  int v33; // r3
  int v34; // r10
  _QWORD *v35; // r11
  int v36; // r5
  int v37; // r6
  int v38; // r5
  __int64 v39; // r2
  int v40; // r5
  int v41; // r5
  int v42; // r6
  int v43; // r1
  int v44; // r9
  __int64 v45; // r2
  __int64 v46; // kr70_8
  __int64 v47; // kr80_8
  int v48; // r11
  __int64 v49; // r6
  int v50; // r8
  int v51; // r10
  __int64 v52; // r6
  int v53; // r5
  unsigned int v54; // r10
  unsigned int v55; // r5
  _QWORD *v56; // r1
  int *v57; // r11
  int v58; // r9
  int v59; // r5
  int v60; // r11
  _DWORD *v61; // r10
  int v62; // r10
  __int64 v63; // kr90_8
  __int64 v64; // kr98_8
  int v65; // r1
  int v66; // r4
  int v67; // r1
  int v68; // r8
  __int64 v69; // r2
  __int64 v70; // krA8_8
  int v71; // r8
  _QWORD *v72; // r9
  int v73; // r11
  __int64 v74; // krC0_8
  int v75; // r5
  int v76; // r8
  int v77; // r5
  int v78; // r1
  int v79; // r10
  __int64 v81; // [sp+8h] [bp-33Ch]
  unsigned int v82; // [sp+14h] [bp-330h]
  _QWORD *v83; // [sp+14h] [bp-330h]
  int v84; // [sp+14h] [bp-330h]
  int v85; // [sp+14h] [bp-330h]
  _QWORD *v86; // [sp+14h] [bp-330h]
  int v87; // [sp+14h] [bp-330h]
  __int64 v88; // [sp+18h] [bp-32Ch]
  int v89; // [sp+20h] [bp-324h]
  unsigned int v90; // [sp+20h] [bp-324h]
  int v91; // [sp+20h] [bp-324h]
  int v92; // [sp+20h] [bp-324h]
  int v93; // [sp+24h] [bp-320h]
  unsigned int v94; // [sp+24h] [bp-320h]
  unsigned int v95; // [sp+24h] [bp-320h]
  int v96; // [sp+24h] [bp-320h]
  unsigned int v97; // [sp+28h] [bp-31Ch]
  unsigned int v98; // [sp+28h] [bp-31Ch]
  unsigned int v99; // [sp+2Ch] [bp-318h]
  int v100; // [sp+2Ch] [bp-318h]
  unsigned int v101; // [sp+2Ch] [bp-318h]
  unsigned int v102; // [sp+30h] [bp-314h]
  unsigned int v103; // [sp+30h] [bp-314h]
  int v104; // [sp+34h] [bp-310h]
  __int64 v105; // [sp+34h] [bp-310h]
  int v106; // [sp+38h] [bp-30Ch]
  int v107; // [sp+3Ch] [bp-308h]
  unsigned int v108; // [sp+3Ch] [bp-308h]
  unsigned int v109; // [sp+3Ch] [bp-308h]
  int v110; // [sp+3Ch] [bp-308h]
  int v111; // [sp+40h] [bp-304h]
  unsigned int v112; // [sp+40h] [bp-304h]
  int v113; // [sp+40h] [bp-304h]
  unsigned int v114; // [sp+40h] [bp-304h]
  int v115; // [sp+40h] [bp-304h]
  int v116; // [sp+44h] [bp-300h]
  unsigned int v117; // [sp+44h] [bp-300h]
  unsigned int v118; // [sp+44h] [bp-300h]
  int v119; // [sp+44h] [bp-300h]
  unsigned int v120; // [sp+48h] [bp-2FCh]
  int v121; // [sp+48h] [bp-2FCh]
  __int64 v122; // [sp+48h] [bp-2FCh]
  __int64 v123; // [sp+48h] [bp-2FCh]
  unsigned int v124; // [sp+4Ch] [bp-2F8h]
  int v125; // [sp+4Ch] [bp-2F8h]
  __int64 v126; // [sp+50h] [bp-2F4h]
  __int64 v127; // [sp+58h] [bp-2ECh]
  unsigned int v128; // [sp+60h] [bp-2E4h]
  unsigned int v129; // [sp+60h] [bp-2E4h]
  unsigned int v130; // [sp+64h] [bp-2E0h]
  unsigned int v131; // [sp+64h] [bp-2E0h]
  unsigned int v132; // [sp+68h] [bp-2DCh]
  unsigned int v133; // [sp+68h] [bp-2DCh]
  __int64 v134; // [sp+68h] [bp-2DCh]
  unsigned int v135; // [sp+6Ch] [bp-2D8h]
  unsigned int v136; // [sp+6Ch] [bp-2D8h]
  unsigned int v137; // [sp+70h] [bp-2D4h]
  int v138; // [sp+70h] [bp-2D4h]
  unsigned int v139; // [sp+70h] [bp-2D4h]
  int v140; // [sp+70h] [bp-2D4h]
  int v141; // [sp+70h] [bp-2D4h]
  unsigned int v142; // [sp+74h] [bp-2D0h]
  int v143; // [sp+74h] [bp-2D0h]
  unsigned int v144; // [sp+74h] [bp-2D0h]
  _QWORD *v145; // [sp+74h] [bp-2D0h]
  unsigned int v146; // [sp+78h] [bp-2CCh]
  int v147; // [sp+78h] [bp-2CCh]
  int v148; // [sp+78h] [bp-2CCh]
  unsigned int v149; // [sp+78h] [bp-2CCh]
  int v150; // [sp+78h] [bp-2CCh]
  unsigned int v151; // [sp+7Ch] [bp-2C8h]
  int v152; // [sp+7Ch] [bp-2C8h]
  int v153; // [sp+7Ch] [bp-2C8h]
  unsigned int v154; // [sp+7Ch] [bp-2C8h]
  unsigned int v155; // [sp+80h] [bp-2C4h]
  int v156; // [sp+84h] [bp-2C0h]
  unsigned int v157; // [sp+84h] [bp-2C0h]
  int v158; // [sp+84h] [bp-2C0h]
  unsigned int v159; // [sp+88h] [bp-2BCh]
  __int64 v160; // [sp+88h] [bp-2BCh]
  unsigned int v161; // [sp+8Ch] [bp-2B8h]
  __int64 v162; // [sp+90h] [bp-2B4h]
  int v163; // [sp+90h] [bp-2B4h]
  int v164; // [sp+90h] [bp-2B4h]
  int v165; // [sp+90h] [bp-2B4h]
  int v166; // [sp+90h] [bp-2B4h]
  int v167; // [sp+90h] [bp-2B4h]
  unsigned int v168; // [sp+94h] [bp-2B0h]
  int v169; // [sp+94h] [bp-2B0h]
  int v170; // [sp+98h] [bp-2ACh]
  _QWORD *v171; // [sp+98h] [bp-2ACh]
  int v172; // [sp+98h] [bp-2ACh]
  int v173; // [sp+98h] [bp-2ACh]
  unsigned int v174; // [sp+9Ch] [bp-2A8h]
  int v175; // [sp+9Ch] [bp-2A8h]
  int v176; // [sp+9Ch] [bp-2A8h]
  int v177; // [sp+9Ch] [bp-2A8h]
  unsigned int v178; // [sp+9Ch] [bp-2A8h]
  __int64 v179; // [sp+A0h] [bp-2A4h]
  int v180; // [sp+A0h] [bp-2A4h]
  int v181; // [sp+A0h] [bp-2A4h]
  int v182; // [sp+A0h] [bp-2A4h]
  int v183; // [sp+A4h] [bp-2A0h]
  int v184; // [sp+A4h] [bp-2A0h]
  int v185; // [sp+A4h] [bp-2A0h]
  __int64 v186; // [sp+A8h] [bp-29Ch]
  __int64 v187; // [sp+B0h] [bp-294h]
  unsigned int v188; // [sp+B0h] [bp-294h]
  _QWORD *v189; // [sp+B0h] [bp-294h]
  int v190; // [sp+B0h] [bp-294h]
  int v191; // [sp+B0h] [bp-294h]
  int v192; // [sp+B0h] [bp-294h]
  _QWORD *v193; // [sp+B4h] [bp-290h]
  int v194; // [sp+B4h] [bp-290h]
  __int64 v195; // [sp+B8h] [bp-28Ch]
  unsigned int v196; // [sp+B8h] [bp-28Ch]
  int v197; // [sp+BCh] [bp-288h]
  int v198; // [sp+BCh] [bp-288h]
  __int64 v199; // [sp+C0h] [bp-284h]
  int v200; // [sp+C8h] [bp-27Ch]
  int v201; // [sp+C8h] [bp-27Ch]
  int v202; // [sp+C8h] [bp-27Ch]
  _DWORD *v203; // [sp+C8h] [bp-27Ch]
  __int64 v204; // [sp+C8h] [bp-27Ch]
  unsigned int v205; // [sp+CCh] [bp-278h]
  int v206; // [sp+CCh] [bp-278h]
  int v207; // [sp+CCh] [bp-278h]
  int v208; // [sp+CCh] [bp-278h]
  unsigned int v209; // [sp+CCh] [bp-278h]
  int v210; // [sp+D0h] [bp-274h]
  int v211; // [sp+D0h] [bp-274h]
  unsigned int v212; // [sp+D0h] [bp-274h]
  int v213; // [sp+D4h] [bp-270h]
  int v214; // [sp+D4h] [bp-270h]
  unsigned int v215; // [sp+D4h] [bp-270h]
  int v216; // [sp+D8h] [bp-26Ch]
  int v217; // [sp+D8h] [bp-26Ch]
  unsigned int v218; // [sp+DCh] [bp-268h]
  int v219; // [sp+E0h] [bp-264h]
  int v220; // [sp+E0h] [bp-264h]
  int v221; // [sp+E4h] [bp-260h]
  int v222; // [sp+E4h] [bp-260h]
  int v223; // [sp+E4h] [bp-260h]
  int v224; // [sp+E8h] [bp-25Ch]
  unsigned int v225; // [sp+E8h] [bp-25Ch]
  unsigned int v226; // [sp+E8h] [bp-25Ch]
  unsigned int v227; // [sp+ECh] [bp-258h]
  int v228; // [sp+ECh] [bp-258h]
  __int64 v229; // [sp+F0h] [bp-254h]
  int v230; // [sp+F0h] [bp-254h]
  int v231; // [sp+F4h] [bp-250h]
  _QWORD *v232; // [sp+F4h] [bp-250h]
  int v233; // [sp+F4h] [bp-250h]
  unsigned int v234; // [sp+F8h] [bp-24Ch]
  int v235; // [sp+F8h] [bp-24Ch]
  _QWORD *v236; // [sp+F8h] [bp-24Ch]
  int v237; // [sp+F8h] [bp-24Ch]
  unsigned int v238; // [sp+FCh] [bp-248h]
  int v239; // [sp+FCh] [bp-248h]
  int v240; // [sp+100h] [bp-244h]
  int v241; // [sp+100h] [bp-244h]
  _QWORD *v242; // [sp+100h] [bp-244h]
  int v243; // [sp+104h] [bp-240h]
  int v244; // [sp+104h] [bp-240h]
  int v245; // [sp+104h] [bp-240h]
  _QWORD *v246; // [sp+104h] [bp-240h]
  int v247; // [sp+108h] [bp-23Ch]
  int v248; // [sp+108h] [bp-23Ch]
  int v249; // [sp+108h] [bp-23Ch]
  _DWORD *v250; // [sp+108h] [bp-23Ch]
  _QWORD *v251; // [sp+108h] [bp-23Ch]
  int v252; // [sp+10Ch] [bp-238h]
  int v253; // [sp+10Ch] [bp-238h]
  int v254; // [sp+10Ch] [bp-238h]
  _DWORD *v255; // [sp+10Ch] [bp-238h]
  int v256; // [sp+110h] [bp-234h]
  int v257; // [sp+110h] [bp-234h]
  _QWORD *v258; // [sp+110h] [bp-234h]
  int v259; // [sp+114h] [bp-230h]
  _QWORD *v260; // [sp+114h] [bp-230h]
  _QWORD *v261; // [sp+114h] [bp-230h]
  int v262; // [sp+118h] [bp-22Ch]
  _QWORD *v263; // [sp+118h] [bp-22Ch]
  _QWORD *v264; // [sp+11Ch] [bp-228h]
  _QWORD *v265; // [sp+11Ch] [bp-228h]
  int v266; // [sp+11Ch] [bp-228h]
  int v267; // [sp+120h] [bp-224h]
  _QWORD *v268; // [sp+120h] [bp-224h]
  _QWORD *v269; // [sp+120h] [bp-224h]
  unsigned int v270; // [sp+124h] [bp-220h]
  _QWORD *v271; // [sp+124h] [bp-220h]
  _QWORD *v272; // [sp+124h] [bp-220h]
  unsigned int v273; // [sp+128h] [bp-21Ch]
  int v274; // [sp+128h] [bp-21Ch]
  unsigned int v275; // [sp+12Ch] [bp-218h]
  int v276; // [sp+12Ch] [bp-218h]
  int v277; // [sp+130h] [bp-214h]
  int v278; // [sp+130h] [bp-214h]
  int v279; // [sp+130h] [bp-214h]
  _QWORD *v280; // [sp+130h] [bp-214h]
  int v281; // [sp+134h] [bp-210h]
  int v282; // [sp+134h] [bp-210h]
  int v283; // [sp+138h] [bp-20Ch]
  int v284; // [sp+138h] [bp-20Ch]
  int v285; // [sp+138h] [bp-20Ch]
  int v286; // [sp+13Ch] [bp-208h]
  int v287; // [sp+13Ch] [bp-208h]
  int v288; // [sp+140h] [bp-204h]
  int v289; // [sp+140h] [bp-204h]
  int v290; // [sp+144h] [bp-200h]
  int v291; // [sp+144h] [bp-200h]
  unsigned int v292; // [sp+148h] [bp-1FCh]
  int v293; // [sp+14Ch] [bp-1F8h]
  int v294; // [sp+14Ch] [bp-1F8h]
  int v295; // [sp+150h] [bp-1F4h]
  int v296; // [sp+150h] [bp-1F4h]
  int v297; // [sp+150h] [bp-1F4h]
  int v298; // [sp+150h] [bp-1F4h]
  int v299; // [sp+154h] [bp-1F0h]
  unsigned int v300; // [sp+158h] [bp-1ECh]
  int v301; // [sp+158h] [bp-1ECh]
  int v302; // [sp+15Ch] [bp-1E8h]
  int v303; // [sp+15Ch] [bp-1E8h]
  int v304; // [sp+160h] [bp-1E4h]
  int v305; // [sp+164h] [bp-1E0h]
  unsigned int v306; // [sp+164h] [bp-1E0h]
  int v307; // [sp+168h] [bp-1DCh]
  unsigned int v308; // [sp+168h] [bp-1DCh]
  int v309; // [sp+168h] [bp-1DCh]
  int v310; // [sp+16Ch] [bp-1D8h]
  int v311; // [sp+16Ch] [bp-1D8h]
  int v312; // [sp+170h] [bp-1D4h]
  int v313; // [sp+170h] [bp-1D4h]
  unsigned int v314; // [sp+174h] [bp-1D0h]
  int v315; // [sp+178h] [bp-1CCh]
  int v316; // [sp+178h] [bp-1CCh]
  int v317; // [sp+17Ch] [bp-1C8h]
  int v318; // [sp+17Ch] [bp-1C8h]
  int v319; // [sp+180h] [bp-1C4h]
  int v320; // [sp+180h] [bp-1C4h]
  int v321; // [sp+184h] [bp-1C0h]
  int v322; // [sp+184h] [bp-1C0h]
  int v323; // [sp+188h] [bp-1BCh]
  int v324; // [sp+190h] [bp-1B4h]
  int v325; // [sp+198h] [bp-1ACh]
  _QWORD dest[16]; // [sp+1B8h] [bp-18Ch] BYREF
  _QWORD v329[16]; // [sp+238h] [bp-10Ch] BYREF
  _DWORD s[35]; // [sp+2B8h] [bp-8Ch] BYREF

  v5 = *(_DWORD *)(a1 + 128);
  v6 = *(_DWORD *)(a1 + 264);
  v7 = *(_DWORD *)(a1 + 268);
  LOBYTE(s[0]) = (128 >> a3) | a2 & -(128 >> a3);
  if ( v5 > 0x77 )
  {
    v8 = 256 - v5;
    v10 = (__PAIR64__(v7, v6) + 2) >> 32;
    v9 = v6 + 2;
  }
  else
  {
    v8 = 128 - v5;
    v10 = (__PAIR64__(v7, v6) + 1) >> 32;
    v9 = v6 + 1;
  }
  memset((char *)s + 1, 0, v8 - 9);
  v11 = (char *)&s[-2] + v8;
  *(_DWORD *)v11 = HIBYTE(v10)
                 | (unsigned __int16)(BYTE2(v10) << 8)
                 | (BYTE1(v10) << 16) & 0xFFFFFF
                 | ((unsigned __int8)v10 << 24);
  v11[6] = BYTE1(v9);
  v11[7] = v9;
  v11[4] = HIBYTE(v9);
  v11[5] = BYTE2(v9);
  sph_groestl384_0((__int64 *)a1, (char *)s, v8);
  memcpy(dest, (const void *)(a1 + 136), sizeof(dest));
  memcpy(v329, dest, sizeof(v329));
  v199 = v329[0];
  v12 = v329[3];
  v81 = 0;
  v111 = v329[1];
  v89 = HIDWORD(v329[4]);
  v13 = v329[4];
  v14 = v329[5];
  v104 = HIDWORD(v329[1]);
  v107 = v329[6];
  v229 = v329[8];
  v93 = v329[2];
  v116 = HIDWORD(v329[6]);
  v106 = HIDWORD(v329[2]);
  v170 = HIDWORD(v329[9]);
  v234 = v329[9];
  v162 = v329[10];
  v238 = HIDWORD(v329[11]);
  v174 = v329[11];
  v179 = v329[12];
  v186 = v329[13];
  v187 = v329[14];
  v195 = v329[15];
  v15 = v329[7];
  do
  {
    v88 = v199 ^ v81;
    v137 = v104 ^ ((unsigned __int64)(v81 + 16) >> 32);
    v97 = v106 ^ ((unsigned __int64)(v81 + 32) >> 32);
    v16 = (v81 + 48) ^ v12;
    v99 = HIDWORD(v12) ^ ((unsigned __int64)(v81 + 48) >> 32);
    v132 = (v81 + 64) ^ v13;
    v102 = v89 ^ ((unsigned __int64)(v81 + 64) >> 32);
    v135 = (v81 + 80) ^ v14;
    LODWORD(v14) = v107 ^ (v81 + 96);
    v17 = ((unsigned __int64)(v81 + 96) >> 32) ^ v116;
    v105 = (v81 + 112) ^ v15;
    v108 = v234 ^ (v81 + 144);
    v142 = v162 ^ (v81 + 160);
    v120 = v174 ^ (v81 + 176);
    v124 = ((unsigned __int64)(v81 + 176) >> 32) ^ v238;
    v126 = v179 ^ (v81 + 192);
    v127 = v186 ^ (v81 + 208);
    v128 = v187 ^ (v81 + 224);
    v146 = ((unsigned __int64)(v81 + 224) >> 32) ^ HIDWORD(v187);
    v151 = HIDWORD(v195) ^ ((unsigned __int64)(v81 + 240) >> 32);
    v130 = v195 ^ (v81 + 240);
    v90 = v111 ^ (v81 + 16);
    v94 = v93 ^ (v81 + 32);
    v112 = v170 ^ ((unsigned __int64)(v81 + 144) >> 32);
    v117 = HIDWORD(v162) ^ ((unsigned __int64)(v81 + 160) >> 32);
    LODWORD(v186) = HIBYTE(v17);
    v188 = HIDWORD(v229) ^ ((unsigned __int64)(v81 + 128) >> 32);
    LODWORD(v199) = HIBYTE(v188);
    v321 = HIBYTE(HIDWORD(v105));
    v205 = v229 ^ (v81 + 128);
    v270 = HIBYTE(v205);
    HIDWORD(v186) = (char *)&unk_108E80 + 8 * ((HIDWORD(v186) ^ ((unsigned __int64)(v81 + 208) >> 32)) >> 24);
    v82 = ((unsigned __int64)(v81 + 80) >> 32) ^ HIDWORD(v14);
    v243 = BYTE1(v17);
    v247 = BYTE6(v105);
    v18 = &qword_109778[BYTE1(v90)];
    v273 = HIBYTE(v137);
    v275 = HIBYTE(v108);
    v19 = &qword_109778[BYTE1(v94)];
    v292 = HIBYTE(v142);
    v300 = HIBYTE(v120);
    v156 = (unsigned __int8)v94;
    v227 = HIBYTE(v94);
    HIDWORD(v105) = BYTE5(v105);
    v252 = (unsigned __int8)(((unsigned __int64)(v81 + 112) >> 32) ^ BYTE4(v15));
    v163 = BYTE2(v188);
    v175 = BYTE1(v188);
    v267 = (unsigned __int8)(BYTE4(v229) ^ ((unsigned __int64)(v81 + 128) >> 32));
    v155 = *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v88 + 1)
         ^ ((unsigned __int64)(v81 + 1) >> 32)
         ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v124) + 1)
         ^ *((_DWORD *)v18 - 61)
         ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v94) + 1)
         ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v16) + 1)
         ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v102 + 1)
         ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v82) + 1)
         ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v17) + 1);
    v95 = (v81 + 1)
        ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v88)
        ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v124))
        ^ *((_DWORD *)v18 - 62)
        ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v94))
        ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v16))
        ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v102)
        ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v82))
        ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v17));
    v189 = &qword_109778[BYTE1(v16)];
    v314 = BYTE3(v126);
    v20 = *((_DWORD *)&unk_108680 + 2 * v156 + 1);
    v235 = *((_DWORD *)&unk_10B680 + 2 * HIDWORD(v105) + 1);
    v21 = *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v17);
    v224 = *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v17 + 1);
    v231 = *((_DWORD *)&unk_10B680 + 2 * HIDWORD(v105));
    v240 = *((_DWORD *)&unk_10BE80 + 2 * v163 + 1);
    v239 = *((_DWORD *)&unk_10BE80 + 2 * v163);
    v22 = *((_DWORD *)&unk_108680 + 2 * v156) ^ *(_DWORD *)HIDWORD(v186) ^ (v81 + 33);
    v256 = *((_DWORD *)&unk_10AE80 + 2 * v252 + 1);
    v259 = *((_DWORD *)&unk_10B680 + 2 * v175 + 1);
    v262 = *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v112) + 1);
    v216 = *((_DWORD *)&unk_10B680 + 2 * v175);
    HIDWORD(v105) = *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v90 + 1)
                  ^ *((_DWORD *)&unk_108E80 + 2 * ((HIDWORD(v179) ^ ((unsigned __int64)(v81 + 192) >> 32)) >> 24) + 1)
                  ^ ((unsigned __int64)(v81 + 17) >> 32)
                  ^ *((_DWORD *)v19 - 61)
                  ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v16) + 1)
                  ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v132) + 1)
                  ^ *((_DWORD *)&unk_10AE80
                    + 2 * (unsigned __int8)(((unsigned __int64)(v81 + 80) >> 32) ^ BYTE4(v14))
                    + 1)
                  ^ *((_DWORD *)&unk_10B680 + 2 * v243 + 1)
                  ^ *((_DWORD *)&unk_10BE80 + 2 * v247 + 1);
    v213 = *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v112));
    v210 = *((_DWORD *)&unk_10A680 + 2 * BYTE3(v14) + 1);
    v157 = *((_DWORD *)v19 - 62)
         ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v90)
         ^ *((_DWORD *)&unk_108E80 + 2 * ((HIDWORD(v179) ^ ((unsigned __int64)(v81 + 192) >> 32)) >> 24))
         ^ (v81 + 17)
         ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v16))
         ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v132))
         ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)(((unsigned __int64)(v81 + 80) >> 32) ^ BYTE4(v14)))
         ^ *((_DWORD *)&unk_10B680 + 2 * v243)
         ^ *((_DWORD *)&unk_10BE80 + 2 * v247);
    v197 = *((_DWORD *)&unk_10A680 + 2 * BYTE3(v14));
    v159 = HIBYTE(v82);
    v23 = v22 ^ *((_DWORD *)v189 - 62);
    v164 = v20 ^ *(_DWORD *)(HIDWORD(v186) + 4) ^ ((unsigned __int64)(v81 + 33) >> 32) ^ *((_DWORD *)v189 - 61);
    v230 = BYTE2(v82);
    v161 = BYTE3(v127);
    v168 = HIBYTE(v128);
    HIDWORD(v186) = HIBYTE(v130);
    v24 = (unsigned __int8)v132;
    v196 = BYTE3(v88);
    v244 = (unsigned __int8)v135;
    v83 = &qword_109778[BYTE1(v135)];
    v25 = v164 ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v132) + 1) ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v135) + 1);
    v165 = *((_DWORD *)&unk_109E80 + 2 * BYTE2(v135));
    v190 = *((_DWORD *)&unk_109E80 + 2 * BYTE2(v135) + 1);
    v200 = BYTE1(v112);
    v26 = v23 ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v132)) ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v135));
    v27 = BYTE2(v14);
    v248 = (unsigned __int8)v14;
    v171 = &qword_109778[BYTE1(v14)];
    v221 = BYTE2(v105);
    v28 = *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v132 + 1);
    v136 = v25 ^ v224 ^ v235 ^ v240;
    v29 = qword_109778[BYTE1(v132) - 31];
    v133 = v26 ^ v21 ^ v231 ^ v239;
    v30 = *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)((v81 + 48) ^ v12) + 1)
        ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v146) + 1)
        ^ ((unsigned __int64)(v81 + 49) >> 32)
        ^ HIDWORD(v29)
        ^ v190;
    v31 = v29
        ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)((v81 + 48) ^ v12))
        ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v146))
        ^ (v81 + 49)
        ^ v165;
    v191 = ((unsigned __int64)(v81 + 81) >> 32)
         ^ *((_DWORD *)&unk_108E80 + 2 * ((unsigned int)(HIDWORD(v199) ^ HIDWORD(v81)) >> 24) + 1);
    v176 = *((_DWORD *)&unk_109E80 + 2 * v27 + 1);
    v183 = (v81 + 81) ^ *((_DWORD *)&unk_108E80 + 2 * ((unsigned int)(HIDWORD(v199) ^ HIDWORD(v81)) >> 24));
    v166 = *((_DWORD *)&unk_109E80 + 2 * v27);
    HIDWORD(v199) = (unsigned __int8)v112;
    v180 = *((_DWORD *)&unk_10A680 + 2 * BYTE3(v105) + 1);
    v218 = HIBYTE(v112);
    v113 = *((_DWORD *)&unk_10A680 + 2 * BYTE3(v105));
    v241 = BYTE2(v124);
    v286 = (unsigned __int8)((v81 + 112) ^ v15);
    v193 = &qword_109778[BYTE1(v105)];
    LOBYTE(v27) = v205;
    v32 = BYTE1(v205);
    v206 = BYTE2(v205);
    v225 = HIBYTE(v117);
    v281 = BYTE1(v124);
    v293 = (unsigned __int8)v124;
    v283 = BYTE6(v126);
    v295 = (unsigned __int8)v27;
    v290 = BYTE2(v108);
    v33 = v31 ^ v197 ^ *((_DWORD *)&unk_10AE80 + 2 * v252);
    v34 = BYTE5(v126);
    v302 = BYTE4(v126);
    v253 = BYTE6(v127);
    v307 = (unsigned __int8)v108;
    v35 = &qword_109778[BYTE1(v108)];
    LODWORD(v105) = v262 ^ v259 ^ v30 ^ v210 ^ v256;
    HIDWORD(v126) = v33 ^ v216 ^ v213;
    v36 = *((_DWORD *)&unk_108680 + 2 * v24)
        ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v151))
        ^ (v81 + 65)
        ^ *((_DWORD *)v83 - 62);
    v37 = v28
        ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v151) + 1)
        ^ ((unsigned __int64)(v81 + 65) >> 32)
        ^ *((_DWORD *)v83 - 61)
        ^ v176;
    v257 = BYTE2(v142);
    v315 = BYTE4(v127);
    v305 = BYTE2(v146);
    v304 = BYTE5(v127);
    v125 = (unsigned __int8)v142;
    v317 = BYTE1(v146);
    v232 = &qword_109778[BYTE1(v142)];
    v143 = (unsigned __int8)v146;
    v312 = BYTE2(v120);
    v319 = BYTE2(v151);
    v84 = BYTE6(v88);
    v38 = v36 ^ v166 ^ v113 ^ *((_DWORD *)&unk_10AE80 + 2 * v267) ^ *((_DWORD *)&unk_10B680 + 2 * v200);
    v167 = (unsigned __int8)v120;
    v236 = &qword_109778[BYTE1(v120)];
    v109 = v37
         ^ v180
         ^ *((_DWORD *)&unk_10AE80 + 2 * v267 + 1)
         ^ *((_DWORD *)&unk_10B680 + 2 * v200 + 1)
         ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v117) + 1);
    HIDWORD(v127) = v38 ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v117));
    v39 = *(v171 - 31);
    v121 = BYTE2(v126);
    v147 = BYTE1(v151);
    v172 = (unsigned __int8)v151;
    LOWORD(v21) = v137;
    v152 = BYTE5(v88);
    v177 = BYTE4(v88);
    v181 = (unsigned __int8)v126;
    v260 = &qword_109778[BYTE1(v126)];
    LODWORD(v126) = BYTE2(v127);
    v138 = BYTE2(v137);
    v40 = *((_DWORD *)&unk_10A680 + 2 * v270)
        ^ *((_DWORD *)&unk_108680 + 2 * v244)
        ^ v183
        ^ v39
        ^ *((_DWORD *)&unk_109E80 + 2 * v221)
        ^ *((_DWORD *)&unk_10AE80 + 2 * HIDWORD(v199))
        ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v117));
    v198 = (unsigned __int8)v127;
    v263 = &qword_109778[BYTE1(v127)];
    v184 = BYTE2(v128);
    HIDWORD(v88) = v40 ^ *((_DWORD *)&unk_10BE80 + 2 * v241);
    v114 = v191
         ^ *((_DWORD *)&unk_108680 + 2 * v244 + 1)
         ^ HIDWORD(v39)
         ^ *((_DWORD *)&unk_109E80 + 2 * v221 + 1)
         ^ *((_DWORD *)&unk_10A680 + 2 * v270 + 1)
         ^ *((_DWORD *)&unk_10AE80 + 2 * HIDWORD(v199) + 1)
         ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v117) + 1)
         ^ *((_DWORD *)&unk_10BE80 + 2 * v241 + 1);
    v42 = *((_DWORD *)v193 - 61);
    v41 = *((_DWORD *)v193 - 62);
    v194 = BYTE2(v97);
    v43 = *((_DWORD *)&unk_10A680 + 2 * v275)
        ^ *((_DWORD *)&unk_108E80 + 2 * v273)
        ^ *((_DWORD *)&unk_108680 + 2 * v248)
        ^ (v81 + 97)
        ^ v41
        ^ *((_DWORD *)&unk_109E80 + 2 * v206);
    v44 = *((_DWORD *)&unk_10A680 + 2 * v275 + 1)
        ^ *((_DWORD *)&unk_109E80 + 2 * v206 + 1)
        ^ *((_DWORD *)&unk_108E80 + 2 * v273 + 1)
        ^ *((_DWORD *)&unk_108680 + 2 * v248 + 1)
        ^ ((unsigned __int64)(v81 + 97) >> 32)
        ^ v42;
    v217 = (unsigned __int8)v128;
    v264 = &qword_109778[BYTE1(v128)];
    HIDWORD(v199) = BYTE2(v130);
    v207 = BYTE1(v97);
    v219 = (unsigned __int8)v97;
    v211 = BYTE2(v99);
    v214 = BYTE2(v88);
    v271 = &qword_109778[BYTE1(v88)];
    v45 = *((_QWORD *)&unk_10BE80 + v283);
    v222 = (unsigned __int8)v130;
    v268 = &qword_109778[BYTE1(v130)];
    LODWORD(v127) = v43
                  ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v117)
                  ^ *((_DWORD *)&unk_10B680 + 2 * v281)
                  ^ v45;
    v129 = *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v117 + 1)
         ^ v44
         ^ *((_DWORD *)&unk_10B680 + 2 * v281 + 1)
         ^ HIDWORD(v45);
    v46 = qword_109778[v32 - 31];
    LODWORD(v88) = *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v97) + 1)
                 ^ *((_DWORD *)&unk_108680 + 2 * v286 + 1)
                 ^ ((unsigned __int64)(v81 + 113) >> 32)
                 ^ HIDWORD(v46)
                 ^ *((_DWORD *)&unk_109E80 + 2 * v290 + 1)
                 ^ *((_DWORD *)&unk_10A680 + 2 * v292 + 1)
                 ^ *((_DWORD *)&unk_10AE80 + 2 * v293 + 1)
                 ^ *((_DWORD *)&unk_10B680 + 2 * v34 + 1)
                 ^ *((_DWORD *)&unk_10BE80 + 2 * v253 + 1);
    v131 = *((_DWORD *)&unk_108680 + 2 * v286)
         ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v97))
         ^ (v81 + 113)
         ^ v46
         ^ *((_DWORD *)&unk_109E80 + 2 * v290)
         ^ *((_DWORD *)&unk_10A680 + 2 * v292)
         ^ *((_DWORD *)&unk_10AE80 + 2 * v293)
         ^ *((_DWORD *)&unk_10B680 + 2 * v34)
         ^ *((_DWORD *)&unk_10BE80 + 2 * v253);
    HIDWORD(v45) = *((_DWORD *)&unk_108680 + 2 * v307) ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v102));
    LODWORD(v45) = *((_DWORD *)&unk_108680 + 2 * v307 + 1)
                 ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v102) + 1)
                 ^ ((unsigned __int64)(v81 + 145) >> 32);
    v98 = *((_DWORD *)&unk_108680 + 2 * v295)
        ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v99))
        ^ (v81 + 129)
        ^ *((_DWORD *)v35 - 62)
        ^ *((_DWORD *)&unk_109E80 + 2 * v257)
        ^ *((_DWORD *)&unk_10A680 + 2 * v300)
        ^ *((_DWORD *)&unk_10AE80 + 2 * v302)
        ^ *((_DWORD *)&unk_10B680 + 2 * v304)
        ^ *((_DWORD *)&unk_10BE80 + 2 * v305);
    v118 = *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v99) + 1)
         ^ *((_DWORD *)&unk_108680 + 2 * v295 + 1)
         ^ ((unsigned __int64)(v81 + 129) >> 32)
         ^ *((_DWORD *)v35 - 61)
         ^ *((_DWORD *)&unk_109E80 + 2 * v257 + 1)
         ^ *((_DWORD *)&unk_10A680 + 2 * v300 + 1)
         ^ *((_DWORD *)&unk_10AE80 + 2 * v302 + 1)
         ^ *((_DWORD *)&unk_10B680 + 2 * v304 + 1)
         ^ *((_DWORD *)&unk_10BE80 + 2 * v305 + 1);
    v47 = *(v232 - 31);
    v276 = *((_DWORD *)&unk_109E80 + 2 * v121);
    v277 = *((_DWORD *)&unk_109E80 + 2 * v121 + 1);
    v48 = *((_DWORD *)&unk_10BE80 + 2 * v84 + 1)
        ^ *((_DWORD *)&unk_108680 + 2 * v125 + 1)
        ^ (__CFADD__((_DWORD)v81, 161) + HIDWORD(v81))
        ^ *((_DWORD *)&unk_108E80 + 2 * v159 + 1);
    v306 = *((_DWORD *)&unk_10B680 + 2 * v147);
    v274 = *((_DWORD *)&unk_10BE80 + 2 * v84)
         ^ *((_DWORD *)&unk_108680 + 2 * v125)
         ^ (v81 + 161)
         ^ *((_DWORD *)&unk_108E80 + 2 * v159);
    v308 = *((_DWORD *)&unk_10B680 + 2 * v147 + 1);
    HIDWORD(v122) = v45
                  ^ HIDWORD(v47)
                  ^ *((_DWORD *)&unk_109E80 + 2 * v312 + 1)
                  ^ *((_DWORD *)&unk_10A680 + 2 * v314 + 1)
                  ^ *((_DWORD *)&unk_10AE80 + 2 * v315 + 1);
    LODWORD(v122) = HIDWORD(v45)
                  ^ (v81 + 145)
                  ^ v47
                  ^ *((_DWORD *)&unk_109E80 + 2 * v312)
                  ^ *((_DWORD *)&unk_10A680 + 2 * v314)
                  ^ *((_DWORD *)&unk_10AE80 + 2 * v315);
    v291 = *((_DWORD *)&unk_10AE80 + 2 * v172 + 1);
    v288 = *((_DWORD *)&unk_10AE80 + 2 * v172);
    v310 = *((_DWORD *)&unk_10BE80 + 2 * v138 + 1);
    v123 = v122 ^ *((_QWORD *)&unk_10B680 + v317) ^ *((_QWORD *)&unk_10BE80 + v319);
    v49 = *(v236 - 31);
    v245 = v48 ^ HIDWORD(v49) ^ v277 ^ *((_DWORD *)&unk_10A680 + 2 * v161 + 1) ^ *((_DWORD *)&unk_10AE80 + 2 * v143 + 1);
    v237 = v49 ^ v274 ^ v276 ^ *((_DWORD *)&unk_10A680 + 2 * v161) ^ *((_DWORD *)&unk_10AE80 + 2 * v143);
    v254 = *((_DWORD *)&unk_109E80 + 2 * v184 + 1);
    LODWORD(v49) = *((_DWORD *)&unk_10AE80 + 2 * v177 + 1)
                 ^ *((_DWORD *)&unk_108680 + 2 * v181 + 1)
                 ^ ((unsigned __int64)(v81 + 193) >> 32);
    v249 = *((_DWORD *)&unk_109E80 + 2 * v184);
    v185 = *((_DWORD *)&unk_108E80 + 2 * v186)
         ^ *((_DWORD *)&unk_10B680 + 2 * v152)
         ^ *((_DWORD *)&unk_108680 + 2 * v167)
         ^ (v81 + 177)
         ^ *((_DWORD *)v260 - 62)
         ^ *((_DWORD *)&unk_109E80 + 2 * v126)
         ^ *((_DWORD *)&unk_10A680 + 2 * v168);
    v50 = *((_DWORD *)&unk_10AE80 + 2 * v177)
        ^ *((_DWORD *)&unk_108680 + 2 * v181)
        ^ (v81 + 193)
        ^ *((_DWORD *)&unk_108E80 + 2 * v321);
    v182 = (__CFADD__((_DWORD)v81, 177) + HIDWORD(v81))
         ^ *((_DWORD *)&unk_10B680 + 2 * v152 + 1)
         ^ *((_DWORD *)&unk_108680 + 2 * v167 + 1)
         ^ *((_DWORD *)&unk_108E80 + 2 * v186 + 1)
         ^ *((_DWORD *)v260 - 61)
         ^ *((_DWORD *)&unk_109E80 + 2 * v126 + 1)
         ^ *((_DWORD *)&unk_10A680 + 2 * v168 + 1);
    v192 = v49 ^ *((_DWORD *)&unk_108E80 + 2 * v321 + 1) ^ *((_DWORD *)v263 - 61);
    v201 = *((_DWORD *)&unk_10B680 + 2 * v207 + 1);
    v173 = *((_DWORD *)&unk_10B680 + 2 * v207);
    v208 = *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v99) + 1);
    v100 = (unsigned __int8)(BYTE4(v12) ^ ((unsigned __int64)(v81 + 48) >> 32));
    v51 = (unsigned __int8)((unsigned __int16)(WORD2(v12) ^ ((unsigned __int64)(v81 + 48) >> 32)) >> 8);
    v153 = *((_DWORD *)&unk_10AE80 + 2 * v219 + 1);
    v148 = *((_DWORD *)&unk_10AE80 + 2 * v219);
    v220 = *((_DWORD *)&unk_10AE80 + 2 * v100 + 1);
    v52 = *(v264 - 31)
        ^ *((_QWORD *)&unk_10A680 + v196)
        ^ *((_QWORD *)&unk_108680 + v198)
        ^ (v81 + 209)
        ^ *((_QWORD *)&unk_108E80 + v199);
    v169 = *((_DWORD *)&unk_10B680 + 2 * BYTE1(v102) + 1);
    v160 = *((_QWORD *)&unk_10BE80 + BYTE2(v102));
    v53 = *((_DWORD *)&unk_108680 + 2 * v217)
        ^ *((_DWORD *)&unk_109E80 + 2 * v214)
        ^ (v81 + 225)
        ^ *((_DWORD *)&unk_108E80 + 2 * v218)
        ^ *((_DWORD *)v268 - 62)
        ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v90))
        ^ v148
        ^ *((_DWORD *)&unk_10B680 + 2 * v51);
    LODWORD(v45) = *((_DWORD *)&unk_108680 + 2 * v222)
                 ^ *((_DWORD *)v271 - 62)
                 ^ (v81 + 241)
                 ^ *((_DWORD *)&unk_108E80 + 2 * v225)
                 ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v90))
                 ^ *((_DWORD *)&unk_10A680 + 2 * v227)
                 ^ *((_DWORD *)&unk_10AE80 + 2 * v100)
                 ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v102));
    v85 = v245 ^ v308;
    v139 = v185 ^ v288 ^ *((_DWORD *)&unk_10BE80 + 2 * v138);
    v101 = v182 ^ v291 ^ v310;
    v103 = v192
         ^ v254
         ^ *((_DWORD *)&unk_10A680 + 2 * HIDWORD(v186) + 1)
         ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v21) + 1)
         ^ *((_DWORD *)&unk_10BE80 + 2 * v194 + 1);
    v144 = v50
         ^ *((_DWORD *)v263 - 62)
         ^ v249
         ^ *((_DWORD *)&unk_10A680 + 2 * HIDWORD(v186))
         ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v21))
         ^ *((_DWORD *)&unk_10BE80 + 2 * v194);
    LODWORD(v126) = HIDWORD(v52)
                  ^ *((_DWORD *)&unk_109E80 + 2 * HIDWORD(v199) + 1)
                  ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v21 + 1)
                  ^ v201
                  ^ v208;
    v54 = *((_DWORD *)&unk_108680 + 2 * v217 + 1)
        ^ *((_DWORD *)&unk_109E80 + 2 * v214 + 1)
        ^ (__CFADD__((_DWORD)v81, 225) + HIDWORD(v81))
        ^ *((_DWORD *)&unk_108E80 + 2 * v218 + 1)
        ^ *((_DWORD *)v268 - 61)
        ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v90) + 1)
        ^ v153
        ^ *((_DWORD *)&unk_10B680 + 2 * v51 + 1)
        ^ HIDWORD(v160);
    v154 = v45 ^ *((_DWORD *)&unk_10BE80 + 2 * v230);
    v278 = v53 ^ v160;
    v55 = (v53 ^ (unsigned int)v160) >> 24;
    LODWORD(v160) = *((_DWORD *)v271 - 61)
                  ^ *((_DWORD *)&unk_108680 + 2 * v222 + 1)
                  ^ ((unsigned __int64)(v81 + 241) >> 32)
                  ^ *((_DWORD *)&unk_108E80 + 2 * v225 + 1)
                  ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v90) + 1)
                  ^ *((_DWORD *)&unk_10A680 + 2 * v227 + 1)
                  ^ v220
                  ^ v169
                  ^ *((_DWORD *)&unk_10BE80 + 2 * v230 + 1);
    v178 = v55;
    v149 = v52
         ^ *((_DWORD *)&unk_109E80 + 2 * HIDWORD(v199))
         ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v21)
         ^ v173
         ^ *((_DWORD *)&unk_10BE80 + 2 * v211);
    v212 = HIBYTE(v54);
    v223 = HIBYTE(HIDWORD(v105));
    v226 = HIBYTE(v136);
    v325 = HIBYTE(HIDWORD(v127));
    v209 = BYTE3(v126);
    v202 = HIBYTE(HIDWORD(v88));
    v215 = BYTE3(v127);
    v250 = (_DWORD *)((char *)&unk_108E80 + 8 * BYTE3(v88));
    v255 = (_DWORD *)((char *)&unk_10A680 + 8 * HIBYTE(v154));
    v261 = (_QWORD *)((char *)&unk_108E80 + 8 * HIBYTE(v118));
    v258 = (_QWORD *)((char *)&unk_10A680 + 8 * HIBYTE(v95));
    v265 = (_QWORD *)((char *)&unk_10A680 + 8 * HIBYTE(v157));
    v269 = (_QWORD *)((char *)&unk_108E80 + 8 * ((v245 ^ v308) >> 24));
    v272 = (_QWORD *)((char *)&unk_10A680 + 8 * HIBYTE(v133));
    v56 = &qword_109778[BYTE1(v123)];
    v81 += 2;
    v233 = *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v139));
    LOWORD(v21) = v139;
    v57 = (int *)((char *)&unk_10AE80 + 8 * (unsigned __int8)v103);
    v58 = *v57;
    LODWORD(v45) = *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v98 + 1)
                 ^ *((_DWORD *)&unk_108E80 + 2 * BYTE3(v105) + 1)
                 ^ *((_DWORD *)v56 - 61)
                 ^ *((_DWORD *)&unk_109E80 + 2 * (unsigned __int8)((v237 ^ v306) >> 16) + 1)
                 ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v139) + 1);
    v59 = BYTE2(v139);
    v140 = v57[1];
    HIDWORD(v52) = BYTE2(v54);
    v60 = (unsigned __int8)v126;
    v228 = BYTE2(v126);
    v282 = BYTE1(v54);
    v296 = (unsigned __int8)v54;
    v61 = (_DWORD *)((char *)&unk_10B680 + 8 * BYTE1(v126));
    BYTE2(v21) = BYTE2(v144);
    LODWORD(v126) = &qword_109778[BYTE1(v21)];
    LODWORD(v229) = *((_DWORD *)&unk_109E80 + 2 * (unsigned __int8)((v237 ^ v306) >> 16))
                  ^ *((_DWORD *)&unk_108E80 + 2 * BYTE3(v105))
                  ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v98)
                  ^ *((_DWORD *)v56 - 62)
                  ^ v233
                  ^ v58
                  ^ *v61
                  ^ *((_DWORD *)&unk_10BE80 + 2 * HIDWORD(v52));
    LODWORD(v45) = v45 ^ v140 ^ v61[1];
    v62 = (unsigned __int8)v144;
    HIDWORD(v229) = v45 ^ *((_DWORD *)&unk_10BE80 + 2 * HIDWORD(v52) + 1);
    v63 = qword_109778[(unsigned __int8)((unsigned __int16)(v237 ^ v306) >> 8) - 31];
    v91 = (unsigned __int8)(v237 ^ v306);
    HIDWORD(v160) = (v237 ^ v306) >> 24;
    v234 = *((_DWORD *)&unk_109E80 + 2 * v59)
         ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v123)
         ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v109))
         ^ v63
         ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v144))
         ^ *((_DWORD *)&unk_10AE80 + 2 * v60)
         ^ *((_DWORD *)&unk_10B680 + 2 * v282)
         ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v160));
    v170 = *((_DWORD *)&unk_10B680 + 2 * v282 + 1)
         ^ *((_DWORD *)&unk_109E80 + 2 * v59 + 1)
         ^ HIDWORD(v63)
         ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v123 + 1)
         ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v109) + 1)
         ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v144) + 1)
         ^ *((_DWORD *)&unk_10AE80 + 2 * v60 + 1)
         ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v160) + 1);
    HIDWORD(v45) = *((_DWORD *)&unk_10B680 + 2 * BYTE1(v155))
                 ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v21)
                 ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v129));
    v64 = qword_109778[BYTE1(v144) - 31];
    LODWORD(v45) = *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v21 + 1)
                 ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v155) + 1)
                 ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v129) + 1)
                 ^ HIDWORD(v64);
    LOWORD(v21) = v278;
    v279 = BYTE2(v278);
    v145 = &qword_109778[BYTE1(v21)];
    v309 = (unsigned __int8)v21;
    v299 = BYTE1(v136);
    v311 = (unsigned __int8)v136;
    LODWORD(v45) = v45
                 ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v149) + 1)
                 ^ *((_DWORD *)&unk_10A680 + 2 * v178 + 1)
                 ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v160 + 1);
    v301 = BYTE2(v105);
    v303 = BYTE2(v95);
    v174 = HIDWORD(v45)
         ^ v64
         ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v149))
         ^ *((_DWORD *)&unk_10A680 + 2 * v178)
         ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v160)
         ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE6(v105));
    v238 = v45 ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE6(v105) + 1);
    LODWORD(v52) = *(_DWORD *)(v126 - 248);
    HIDWORD(v45) = *((_DWORD *)&unk_108680 + 2 * v91 + 1)
                 ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v155) + 1)
                 ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v114) + 1)
                 ^ *(_DWORD *)(v126 - 244);
    v289 = BYTE1(v105);
    v318 = (unsigned __int8)v105;
    v313 = BYTE2(v109);
    v322 = (unsigned __int8)v95;
    v242 = &qword_109778[BYTE1(v95)];
    LODWORD(v45) = *((_DWORD *)&unk_109E80 + 2 * BYTE2(v21) + 1);
    v65 = *((_DWORD *)&unk_108680 + 2 * v91)
        ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v155))
        ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v114))
        ^ v52
        ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v21));
    v284 = BYTE2(v114);
    v316 = BYTE2(v157);
    v320 = BYTE1(v109);
    v323 = (unsigned __int8)v109;
    v66 = *((_DWORD *)&unk_10AE80 + 2 * v296 + 1);
    v67 = v65 ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v149)) ^ *((_DWORD *)&unk_10AE80 + 2 * v296);
    v297 = BYTE1(v114);
    v324 = (unsigned __int8)v114;
    v92 = (unsigned __int8)v157;
    v246 = &qword_109778[BYTE1(v157)];
    v287 = BYTE2(v133);
    LODWORD(v162) = v67 ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v160));
    v68 = HIDWORD(v45)
        ^ v45
        ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v149) + 1)
        ^ v66
        ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v160) + 1);
    v69 = *((_QWORD *)&unk_108680 + v62) ^ *((_QWORD *)&unk_10AE80 + (unsigned __int8)v155);
    HIDWORD(v162) = v68;
    v70 = qword_109778[BYTE1(v149) - 31];
    v96 = (unsigned __int8)v133;
    v71 = HIDWORD(v69) ^ v250[1] ^ HIDWORD(v70) ^ *((_DWORD *)&unk_109E80 + 2 * v279 + 1) ^ v255[1];
    LODWORD(v69) = v69 ^ *v250 ^ v70 ^ *((_DWORD *)&unk_109E80 + 2 * v279) ^ *v255;
    v72 = &qword_109778[BYTE5(v126)];
    v251 = &qword_109778[BYTE1(v133)];
    v73 = BYTE2(v88);
    LOWORD(v52) = WORD2(v127);
    LODWORD(v105) = BYTE6(v127);
    v110 = BYTE1(v88);
    HIDWORD(v127) = (unsigned __int8)v88;
    LODWORD(v179) = v69 ^ *((_DWORD *)&unk_10B680 + 2 * BYTE5(v105)) ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v136));
    HIDWORD(v179) = v71
                  ^ *((_DWORD *)&unk_10B680 + 2 * BYTE5(v105) + 1)
                  ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v136) + 1);
    v115 = BYTE2(v118);
    BYTE4(v52) = v118;
    LODWORD(v126) = BYTE6(v88);
    v134 = v52 & 0xFF000000FFLL;
    v280 = &qword_109778[BYTE1(v52)];
    v119 = BYTE1(v118);
    v141 = BYTE4(v88);
    LOWORD(v52) = v127;
    LODWORD(v88) = &qword_109778[BYTE5(v88)];
    HIDWORD(v88) = BYTE2(v127);
    LODWORD(v127) = BYTE2(v85);
    v186 = *v258
         ^ *((_QWORD *)&unk_108680 + (unsigned __int8)v149)
         ^ *v261
         ^ *(v145 - 31)
         ^ *((_QWORD *)&unk_109E80 + BYTE2(v154))
         ^ *((_QWORD *)&unk_10AE80 + BYTE4(v105))
         ^ *((_QWORD *)&unk_10B680 + v299)
         ^ *((_QWORD *)&unk_10BE80 + v301);
    v150 = BYTE1(v85);
    v158 = (unsigned __int8)v85;
    v86 = &qword_109778[BYTE1(v131)];
    v187 = *((_QWORD *)&unk_109E80 + v303)
         ^ *((_QWORD *)&unk_108680 + v309)
         ^ *((_QWORD *)&unk_108E80 + HIBYTE(HIDWORD(v123)))
         ^ qword_109778[BYTE1(v154) - 31]
         ^ *v265
         ^ *((_QWORD *)&unk_10AE80 + v311)
         ^ *((_QWORD *)&unk_10B680 + v289)
         ^ *((_QWORD *)&unk_10BE80 + v313);
    v195 = *((_QWORD *)&unk_10AE80 + v318)
         ^ *(v242 - 31)
         ^ *((_QWORD *)&unk_108680 + (unsigned __int8)v154)
         ^ *((_QWORD *)&unk_10BE80 + v284)
         ^ *v269
         ^ *((_QWORD *)&unk_109E80 + v316)
         ^ *v272
         ^ *((_QWORD *)&unk_10B680 + v320);
    v74 = *(v251 - 31);
    v199 = *(v246 - 31)
         ^ *((_QWORD *)&unk_108E80 + HIBYTE(v101))
         ^ *((_QWORD *)&unk_10B680 + v297)
         ^ *((_QWORD *)&unk_108680 + v322)
         ^ *((_QWORD *)&unk_109E80 + v287)
         ^ *((_QWORD *)&unk_10A680 + HIBYTE(HIDWORD(v126)))
         ^ *((_QWORD *)&unk_10AE80 + v323)
         ^ *((_QWORD *)&unk_10BE80 + BYTE2(v129));
    v285 = *((_DWORD *)&unk_109E80 + 2 * v105 + 1);
    v75 = *((_DWORD *)&unk_10A680 + 2 * v202 + 1)
        ^ *((_DWORD *)&unk_108680 + 2 * v96 + 1)
        ^ *((_DWORD *)&unk_108E80 + 2 * v209 + 1);
    LODWORD(v69) = *((_DWORD *)&unk_10A680 + 2 * v202) ^ *((_DWORD *)&unk_108680 + 2 * v96);
    HIDWORD(v105) = *((_DWORD *)&unk_109E80 + 2 * v105);
    v203 = (_DWORD *)((char *)&unk_108680 + 8 * v134);
    v298 = *((_DWORD *)&unk_10BE80 + 2 * v115 + 1);
    v294 = *((_DWORD *)&unk_10BE80 + 2 * v115);
    v104 = *((_DWORD *)&unk_10AE80 + 2 * v324 + 1)
         ^ *((_DWORD *)&unk_108680 + 2 * v92 + 1)
         ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v103) + 1)
         ^ HIDWORD(v74)
         ^ *((_DWORD *)&unk_109E80 + 2 * BYTE6(v126) + 1)
         ^ *((_DWORD *)&unk_10A680 + 2 * v325 + 1)
         ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v129) + 1)
         ^ *((_DWORD *)&unk_10BE80 + 2 * v73 + 1);
    v111 = v74
         ^ *((_DWORD *)&unk_10AE80 + 2 * v324)
         ^ *((_DWORD *)&unk_108680 + 2 * v92)
         ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v103))
         ^ *((_DWORD *)&unk_109E80 + 2 * BYTE6(v126))
         ^ *((_DWORD *)&unk_10A680 + 2 * v325)
         ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v129))
         ^ *((_DWORD *)&unk_10BE80 + 2 * v73);
    v266 = v69
         ^ *((_DWORD *)&unk_108E80 + 2 * v209)
         ^ *((_DWORD *)v72 - 62)
         ^ HIDWORD(v105)
         ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v129)
         ^ *((_DWORD *)&unk_10B680 + 2 * v110);
    v106 = v75
         ^ *((_DWORD *)v72 - 61)
         ^ v285
         ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v129 + 1)
         ^ *((_DWORD *)&unk_10B680 + 2 * v110 + 1)
         ^ v298;
    v76 = *(_DWORD *)(v88 - 248) ^ *v203 ^ *((_DWORD *)&unk_108E80 + 2 * BYTE3(v160));
    HIDWORD(v69) = v203[1]
                 ^ *(_DWORD *)(v88 - 244)
                 ^ *((_DWORD *)&unk_108E80 + 2 * BYTE3(v160) + 1)
                 ^ *((_DWORD *)&unk_109E80 + 2 * HIDWORD(v88) + 1)
                 ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v131) + 1);
    v204 = *((_QWORD *)&unk_10B680 + BYTE5(v123));
    v77 = *((_DWORD *)&unk_108E80 + 2 * v223 + 1)
        ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v52 + 1)
        ^ *((_DWORD *)v86 - 61)
        ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v98) + 1)
        ^ *((_DWORD *)&unk_10A680 + 2 * BYTE3(v123) + 1)
        ^ *((_DWORD *)&unk_10AE80 + 2 * v158 + 1);
    v78 = *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v52)
        ^ *((_DWORD *)&unk_108E80 + 2 * v223)
        ^ *((_DWORD *)v86 - 62)
        ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v98))
        ^ *((_DWORD *)&unk_10A680 + 2 * BYTE3(v123))
        ^ *((_DWORD *)&unk_10AE80 + 2 * v158)
        ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v101));
    v93 = v266 ^ v294;
    v87 = *((_DWORD *)&unk_109E80 + 2 * v126 + 1)
        ^ *((_DWORD *)&unk_108680 + 2 * BYTE4(v126) + 1)
        ^ *((_DWORD *)&unk_108E80 + 2 * v212 + 1)
        ^ *((_DWORD *)v280 - 61)
        ^ *((_DWORD *)&unk_10A680 + 2 * v215 + 1)
        ^ *((_DWORD *)&unk_10AE80 + 2 * HIDWORD(v127) + 1)
        ^ *((_DWORD *)&unk_10B680 + 2 * v119 + 1)
        ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE6(v123) + 1);
    v79 = *((_DWORD *)&unk_10A680 + 2 * v215)
        ^ *((_DWORD *)&unk_109E80 + 2 * v126)
        ^ *((_DWORD *)&unk_108680 + 2 * BYTE4(v126))
        ^ *((_DWORD *)&unk_108E80 + 2 * v212)
        ^ *((_DWORD *)v280 - 62)
        ^ *((_DWORD *)&unk_10AE80 + 2 * HIDWORD(v127))
        ^ *((_DWORD *)&unk_10B680 + 2 * v119)
        ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE6(v123));
    v89 = HIDWORD(v69)
        ^ *((_DWORD *)&unk_10AE80 + 2 * HIDWORD(v134) + 1)
        ^ HIDWORD(v204)
        ^ *((_DWORD *)&unk_10BE80 + 2 * v127 + 1);
    v13 = v76
        ^ *((_DWORD *)&unk_109E80 + 2 * HIDWORD(v88))
        ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v131))
        ^ *((_DWORD *)&unk_10AE80 + 2 * HIDWORD(v134))
        ^ v204
        ^ *((_DWORD *)&unk_10BE80 + 2 * v127);
    v14 = *((_QWORD *)&unk_10A680 + HIBYTE(v98))
        ^ *((_QWORD *)&unk_108680 + v141)
        ^ *((_QWORD *)&unk_108E80 + HIBYTE(v155))
        ^ qword_109778[BYTE1(v52) - 31]
        ^ *((_QWORD *)&unk_109E80 + BYTE2(v131))
        ^ *((_QWORD *)&unk_10AE80 + BYTE4(v123))
        ^ *((_QWORD *)&unk_10B680 + v150)
        ^ *((_QWORD *)&unk_10BE80 + BYTE2(v101));
    v116 = v77 ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v101) + 1) ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v103) + 1);
    v107 = *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v103)) ^ v78;
    v12 = __PAIR64__(v87, v79);
    v15 = *((_QWORD *)&unk_108E80 + v226)
        ^ *((_QWORD *)&unk_108680 + (unsigned __int8)v131)
        ^ qword_109778[BYTE1(v98) - 31]
        ^ *((_QWORD *)&unk_109E80 + BYTE2(v123))
        ^ *((_QWORD *)&unk_10A680 + HIDWORD(v160))
        ^ *((_QWORD *)&unk_10AE80 + (unsigned __int8)v101)
        ^ *((_QWORD *)&unk_10B680 + BYTE1(v103))
        ^ *((_QWORD *)&unk_10BE80 + v228);
  }
  while ( v81 != 14 );
  s[0] = (unsigned __int8)(v229 ^ LOBYTE(dest[8]))
       | (unsigned __int16)((unsigned __int8)((unsigned __int16)(v229 ^ LOWORD(dest[8])) >> 8) << 8)
       | ((unsigned __int8)(((unsigned int)v229 ^ LODWORD(dest[8])) >> 16) << 16) & 0xFFFFFF
       | (((unsigned int)v229 ^ LODWORD(dest[8])) >> 24 << 24);
  s[2] = (unsigned __int8)(v234 ^ LOBYTE(dest[9]))
       | (unsigned __int16)((unsigned __int8)((unsigned __int16)(v234 ^ LOWORD(dest[9])) >> 8) << 8)
       | ((unsigned __int8)((v234 ^ LODWORD(dest[9])) >> 16) << 16) & 0xFFFFFF
       | ((v234 ^ LODWORD(dest[9])) >> 24 << 24);
  s[4] = (unsigned __int8)(v162 ^ LOBYTE(dest[10]))
       | (unsigned __int16)((unsigned __int8)((unsigned __int16)(v162 ^ LOWORD(dest[10])) >> 8) << 8)
       | ((unsigned __int8)(((unsigned int)v162 ^ LODWORD(dest[10])) >> 16) << 16) & 0xFFFFFF
       | (((unsigned int)v162 ^ LODWORD(dest[10])) >> 24 << 24);
  s[6] = (unsigned __int8)(v174 ^ LOBYTE(dest[11]))
       | (unsigned __int16)((unsigned __int8)((unsigned __int16)(v174 ^ LOWORD(dest[11])) >> 8) << 8)
       | ((unsigned __int8)((v174 ^ LODWORD(dest[11])) >> 16) << 16) & 0xFFFFFF
       | ((v174 ^ LODWORD(dest[11])) >> 24 << 24);
  s[8] = (unsigned __int8)(v179 ^ LOBYTE(dest[12]))
       | (unsigned __int16)((unsigned __int8)((unsigned __int16)(v179 ^ LOWORD(dest[12])) >> 8) << 8)
       | ((unsigned __int8)(((unsigned int)v179 ^ LODWORD(dest[12])) >> 16) << 16) & 0xFFFFFF
       | (((unsigned int)v179 ^ LODWORD(dest[12])) >> 24 << 24);
  s[10] = (unsigned __int8)(v186 ^ LOBYTE(dest[13]))
        | (unsigned __int16)((unsigned __int8)((unsigned __int16)(v186 ^ LOWORD(dest[13])) >> 8) << 8)
        | ((unsigned __int8)(((unsigned int)v186 ^ LODWORD(dest[13])) >> 16) << 16) & 0xFFFFFF
        | (((unsigned int)v186 ^ LODWORD(dest[13])) >> 24 << 24);
  s[12] = (unsigned __int8)(v187 ^ LOBYTE(dest[14]))
        | (unsigned __int16)((unsigned __int8)((unsigned __int16)(v187 ^ LOWORD(dest[14])) >> 8) << 8)
        | ((unsigned __int8)(((unsigned int)v187 ^ LODWORD(dest[14])) >> 16) << 16) & 0xFFFFFF
        | (((unsigned int)v187 ^ LODWORD(dest[14])) >> 24 << 24);
  s[5] = (unsigned __int8)(BYTE4(v162) ^ BYTE4(dest[10]))
       | (unsigned __int16)((unsigned __int8)((unsigned __int16)(WORD2(v162) ^ WORD2(dest[10])) >> 8) << 8)
       | ((unsigned __int8)((unsigned int)(HIDWORD(v162) ^ HIDWORD(dest[10])) >> 16) << 16) & 0xFFFFFF
       | ((unsigned int)(HIDWORD(v162) ^ HIDWORD(dest[10])) >> 24 << 24);
  s[14] = (unsigned __int8)(v195 ^ LOBYTE(dest[15]))
        | (unsigned __int16)((unsigned __int8)((unsigned __int16)(v195 ^ LOWORD(dest[15])) >> 8) << 8)
        | ((unsigned __int8)(((unsigned int)v195 ^ LODWORD(dest[15])) >> 16) << 16) & 0xFFFFFF
        | (((unsigned int)v195 ^ LODWORD(dest[15])) >> 24 << 24);
  s[3] = (unsigned __int8)(v170 ^ BYTE4(dest[9]))
       | (unsigned __int16)((unsigned __int8)((unsigned __int16)(v170 ^ WORD2(dest[9])) >> 8) << 8)
       | ((unsigned __int8)(((unsigned int)v170 ^ HIDWORD(dest[9])) >> 16) << 16) & 0xFFFFFF
       | (((unsigned int)v170 ^ HIDWORD(dest[9])) >> 24 << 24);
  s[1] = (unsigned __int8)(BYTE4(v229) ^ BYTE4(dest[8]))
       | (unsigned __int16)((unsigned __int8)((unsigned __int16)(WORD2(v229) ^ WORD2(dest[8])) >> 8) << 8)
       | ((unsigned __int8)((unsigned int)(HIDWORD(v229) ^ HIDWORD(dest[8])) >> 16) << 16) & 0xFFFFFF
       | ((unsigned int)(HIDWORD(v229) ^ HIDWORD(dest[8])) >> 24 << 24);
  s[7] = (unsigned __int8)(v238 ^ BYTE4(dest[11]))
       | (unsigned __int16)((unsigned __int8)((unsigned __int16)(v238 ^ WORD2(dest[11])) >> 8) << 8)
       | ((unsigned __int8)((v238 ^ HIDWORD(dest[11])) >> 16) << 16) & 0xFFFFFF
       | ((v238 ^ HIDWORD(dest[11])) >> 24 << 24);
  s[9] = (unsigned __int8)(BYTE4(v179) ^ BYTE4(dest[12]))
       | (unsigned __int16)((unsigned __int8)((unsigned __int16)(WORD2(v179) ^ WORD2(dest[12])) >> 8) << 8)
       | ((unsigned __int8)((unsigned int)(HIDWORD(v179) ^ HIDWORD(dest[12])) >> 16) << 16) & 0xFFFFFF
       | ((unsigned int)(HIDWORD(v179) ^ HIDWORD(dest[12])) >> 24 << 24);
  s[11] = (unsigned __int8)(BYTE4(v186) ^ BYTE4(dest[13]))
        | (unsigned __int16)((unsigned __int8)((unsigned __int16)(WORD2(v186) ^ WORD2(dest[13])) >> 8) << 8)
        | ((unsigned __int8)((unsigned int)(HIDWORD(v186) ^ HIDWORD(dest[13])) >> 16) << 16) & 0xFFFFFF
        | ((unsigned int)(HIDWORD(v186) ^ HIDWORD(dest[13])) >> 24 << 24);
  s[15] = (unsigned __int8)(BYTE4(v195) ^ BYTE4(dest[15]))
        | (unsigned __int16)((unsigned __int8)((unsigned __int16)(WORD2(v195) ^ WORD2(dest[15])) >> 8) << 8)
        | ((unsigned __int8)((unsigned int)(HIDWORD(v195) ^ HIDWORD(dest[15])) >> 16) << 16) & 0xFFFFFF
        | ((unsigned int)(HIDWORD(v195) ^ HIDWORD(dest[15])) >> 24 << 24);
  s[13] = (unsigned __int8)(BYTE4(v187) ^ BYTE4(dest[14]))
        | (unsigned __int16)((unsigned __int8)((unsigned __int16)(WORD2(v187) ^ WORD2(dest[14])) >> 8) << 8)
        | ((unsigned __int8)((unsigned int)(HIDWORD(v187) ^ HIDWORD(dest[14])) >> 16) << 16) & 0xFFFFFF
        | ((unsigned int)(HIDWORD(v187) ^ HIDWORD(dest[14])) >> 24 << 24);
  memcpy(a4, (char *)s + 64 - n, n);
  *(_DWORD *)(a1 + 128) = 0;
  memset((void *)(a1 + 136), 0, 0x78u);
  *(_DWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_DWORD *)(a1 + 260) = (n << 11) & 0xFF0000 | (n << 27);
  return 0;
}
