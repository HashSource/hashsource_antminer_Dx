int __fastcall eth_sha3_512(void *a1, size_t a2, int a3, unsigned int a4)
{
  unsigned int v4; // r1
  unsigned int v6; // r1
  unsigned __int8 *v7; // r10
  int *v8; // r0
  _DWORD *v9; // r1
  int v10; // t1
  int v11; // r7
  int v12; // r8
  int v13; // r10
  int v14; // r11
  unsigned int v15; // r6
  unsigned int v16; // r5
  unsigned int v17; // r4
  unsigned int v18; // lr
  unsigned int v19; // r1
  unsigned int v20; // r12
  int v21; // r2
  unsigned int v22; // r0
  unsigned int v23; // r3
  int v24; // r2
  unsigned int v25; // r6
  int v26; // r5
  int v27; // r8
  int v28; // r11
  int v29; // r10
  int v30; // r1
  int v31; // r4
  int v32; // r9
  int v33; // r11
  int v34; // r3
  unsigned int v35; // lr
  unsigned __int8 *v36; // r1
  unsigned __int8 *v37; // r9
  unsigned __int8 *v38; // r0
  int v39; // r10
  int v40; // t1
  int v41; // t1
  int v42; // r4
  unsigned int v43; // r8
  int v44; // r7
  int v45; // r2
  int v46; // r2
  int v47; // r9
  int v48; // r7
  int v49; // r6
  int v50; // r1
  int v51; // r9
  int v52; // r2
  int v53; // r12
  int v54; // r10
  int v55; // r1
  int v56; // r6
  int v57; // r7
  int v58; // r5
  int v59; // r9
  int v60; // r3
  int v61; // r12
  int v62; // r4
  int v63; // lr
  int v64; // r8
  int v65; // r1
  int v66; // r0
  int v67; // r2
  int v68; // r10
  int v69; // r6
  int v70; // t1
  int v71; // r5
  int v72; // r9
  unsigned int v73; // r3
  bool v74; // cc
  int *v75; // r12
  unsigned int v76; // lr
  unsigned int v77; // r0
  _DWORD *v78; // r1
  int v79; // t1
  unsigned int v80; // r3
  int v81; // r12
  unsigned int v82; // lr
  unsigned int v83; // r2
  unsigned int v84; // r3
  int v85; // lr
  int v86; // r7
  int v87; // r3
  unsigned int v88; // r12
  __int64 v89; // r0
  unsigned int v90; // r11
  unsigned int v91; // r6
  int v92; // r9
  unsigned int v93; // r5
  unsigned int v94; // r2
  int v95; // lr
  int v96; // r7
  unsigned int v97; // r4
  int v98; // r3
  unsigned int v99; // r8
  int v100; // r9
  int v101; // r2
  int v102; // r3
  unsigned int v103; // r0
  unsigned __int8 *v104; // r12
  unsigned __int8 *v105; // r1
  int v106; // r9
  int v107; // t1
  int v108; // t1
  int v109; // r4
  unsigned int v110; // r8
  int v111; // r7
  int v112; // r2
  int v113; // r11
  int v114; // r7
  int v115; // r6
  int v116; // r5
  int v117; // r1
  int v118; // r2
  int v119; // r8
  int v120; // r0
  int v121; // r1
  int v122; // r7
  int v123; // r12
  int v124; // r6
  int v125; // r5
  int v126; // r8
  int v127; // r9
  int v128; // lr
  int v129; // r7
  int v130; // r4
  int v131; // r12
  int v132; // r1
  int v133; // r0
  int v134; // r3
  char *v135; // r2
  int v136; // r11
  int v137; // r6
  int v138; // r2
  char *v139; // r5
  int v140; // r9
  int v142; // [sp+4h] [bp-1B0h]
  int v143; // [sp+4h] [bp-1B0h]
  int v144; // [sp+4h] [bp-1B0h]
  int v145; // [sp+8h] [bp-1ACh]
  int v146; // [sp+8h] [bp-1ACh]
  int v147; // [sp+8h] [bp-1ACh]
  int v148; // [sp+Ch] [bp-1A8h]
  int v149; // [sp+Ch] [bp-1A8h]
  int v150; // [sp+Ch] [bp-1A8h]
  int v151; // [sp+10h] [bp-1A4h]
  int v152; // [sp+10h] [bp-1A4h]
  int v153; // [sp+14h] [bp-1A0h]
  int v154; // [sp+14h] [bp-1A0h]
  int v155; // [sp+14h] [bp-1A0h]
  int v156; // [sp+14h] [bp-1A0h]
  int v157; // [sp+18h] [bp-19Ch]
  int v158; // [sp+18h] [bp-19Ch]
  int v159; // [sp+1Ch] [bp-198h]
  int v160; // [sp+1Ch] [bp-198h]
  int v161; // [sp+20h] [bp-194h]
  int v162; // [sp+20h] [bp-194h]
  int v163; // [sp+24h] [bp-190h]
  int v164; // [sp+24h] [bp-190h]
  int v165; // [sp+28h] [bp-18Ch]
  int v166; // [sp+28h] [bp-18Ch]
  int v167; // [sp+28h] [bp-18Ch]
  int v168; // [sp+2Ch] [bp-188h]
  int v169; // [sp+2Ch] [bp-188h]
  int v170; // [sp+30h] [bp-184h]
  int v171; // [sp+30h] [bp-184h]
  int v172; // [sp+34h] [bp-180h]
  int v173; // [sp+34h] [bp-180h]
  int v174; // [sp+34h] [bp-180h]
  int v175; // [sp+38h] [bp-17Ch]
  int v176; // [sp+38h] [bp-17Ch]
  int v177; // [sp+38h] [bp-17Ch]
  int v178; // [sp+3Ch] [bp-178h]
  int v179; // [sp+3Ch] [bp-178h]
  int v180; // [sp+3Ch] [bp-178h]
  int v181; // [sp+3Ch] [bp-178h]
  int v182; // [sp+40h] [bp-174h]
  int v183; // [sp+40h] [bp-174h]
  int v184; // [sp+40h] [bp-174h]
  int v185; // [sp+44h] [bp-170h]
  int v186; // [sp+44h] [bp-170h]
  int v187; // [sp+44h] [bp-170h]
  int v188; // [sp+48h] [bp-16Ch]
  int v189; // [sp+48h] [bp-16Ch]
  int v190; // [sp+4Ch] [bp-168h]
  int v191; // [sp+4Ch] [bp-168h]
  int v192; // [sp+4Ch] [bp-168h]
  int v193; // [sp+4Ch] [bp-168h]
  int v194; // [sp+4Ch] [bp-168h]
  int v195; // [sp+50h] [bp-164h]
  int v196; // [sp+50h] [bp-164h]
  int v197; // [sp+50h] [bp-164h]
  int v198; // [sp+50h] [bp-164h]
  int v199; // [sp+54h] [bp-160h]
  int v200; // [sp+54h] [bp-160h]
  int v201; // [sp+58h] [bp-15Ch]
  int v202; // [sp+58h] [bp-15Ch]
  int v203; // [sp+5Ch] [bp-158h]
  int v204; // [sp+5Ch] [bp-158h]
  unsigned int v205; // [sp+60h] [bp-154h]
  int v206; // [sp+60h] [bp-154h]
  int v207; // [sp+60h] [bp-154h]
  int v208; // [sp+64h] [bp-150h]
  int v209; // [sp+64h] [bp-150h]
  int v210; // [sp+68h] [bp-14Ch]
  int v211; // [sp+68h] [bp-14Ch]
  int v212; // [sp+6Ch] [bp-148h]
  int v213; // [sp+6Ch] [bp-148h]
  int v214; // [sp+70h] [bp-144h]
  int v215; // [sp+70h] [bp-144h]
  int v216; // [sp+74h] [bp-140h]
  int v217; // [sp+74h] [bp-140h]
  int v218; // [sp+78h] [bp-13Ch]
  int v219; // [sp+78h] [bp-13Ch]
  int v220; // [sp+7Ch] [bp-138h]
  int v221; // [sp+7Ch] [bp-138h]
  int v222; // [sp+80h] [bp-134h]
  int v223; // [sp+80h] [bp-134h]
  int v224; // [sp+84h] [bp-130h]
  int v225; // [sp+84h] [bp-130h]
  int v226; // [sp+88h] [bp-12Ch]
  int v227; // [sp+88h] [bp-12Ch]
  int v228; // [sp+8Ch] [bp-128h]
  int v229; // [sp+8Ch] [bp-128h]
  int v230; // [sp+8Ch] [bp-128h]
  int v231; // [sp+90h] [bp-124h]
  int v232; // [sp+90h] [bp-124h]
  int v233; // [sp+90h] [bp-124h]
  int v234; // [sp+94h] [bp-120h]
  int v235; // [sp+94h] [bp-120h]
  int v236; // [sp+94h] [bp-120h]
  int v237; // [sp+98h] [bp-11Ch]
  int v238; // [sp+98h] [bp-11Ch]
  int v239; // [sp+98h] [bp-11Ch]
  int v240; // [sp+9Ch] [bp-118h]
  int v241; // [sp+9Ch] [bp-118h]
  int v242; // [sp+9Ch] [bp-118h]
  int v243; // [sp+9Ch] [bp-118h]
  int v244; // [sp+A0h] [bp-114h]
  int v245; // [sp+A4h] [bp-110h]
  int v246; // [sp+A8h] [bp-10Ch]
  int v247; // [sp+ACh] [bp-108h]
  int v248; // [sp+B0h] [bp-104h]
  int v249; // [sp+B4h] [bp-100h]
  int v250; // [sp+B8h] [bp-FCh]
  int v251; // [sp+BCh] [bp-F8h]
  unsigned int v252; // [sp+C0h] [bp-F4h]
  int v253; // [sp+C4h] [bp-F0h]
  int v254; // [sp+C8h] [bp-ECh]
  int v255; // [sp+CCh] [bp-E8h]
  char *v256; // [sp+D0h] [bp-E4h]
  char *v257; // [sp+D4h] [bp-E0h]
  int v258; // [sp+D8h] [bp-DCh]
  unsigned int v259; // [sp+DCh] [bp-D8h]
  size_t n; // [sp+E0h] [bp-D4h]
  void *dest; // [sp+E4h] [bp-D0h]
  _DWORD s[51]; // [sp+E8h] [bp-CCh] BYREF

  n = a2;
  dest = a1;
  v258 = a3;
  v259 = a4;
  if ( a2 > 0x40 || !a1 )
    return -1;
  v4 = a4;
  if ( a4 )
    v4 = 1;
  if ( a3 )
    v4 = 0;
  if ( v4 )
    return -1;
  memset(s, 0, 0xC8u);
  v7 = (unsigned __int8 *)&unk_171D97;
  if ( a4 <= 0x47 )
    v6 = v259;
  v256 = (char *)&unk_171D78;
  if ( a4 > 0x47 )
  {
    v257 = (char *)&unk_171D97;
    do
    {
      v8 = (int *)v258;
      v9 = s;
      do
      {
        v10 = *v8++;
        *v9++ ^= v10;
      }
      while ( v9 != &s[18] );
      v251 = s[2];
      v11 = s[0];
      v250 = s[3];
      v249 = s[4];
      v172 = s[5];
      v161 = s[6];
      v224 = s[7];
      v222 = s[8];
      v220 = s[9];
      v163 = s[10];
      v218 = s[11];
      v216 = s[12];
      v170 = s[13];
      v214 = s[14];
      v159 = s[15];
      v212 = s[16];
      v157 = s[17];
      v12 = s[30];
      v13 = s[1];
      v142 = s[18];
      v248 = s[19];
      v247 = s[20];
      v246 = s[21];
      v245 = s[22];
      v244 = s[23];
      v168 = s[24];
      v153 = s[25];
      v151 = s[26];
      v148 = s[27];
      v210 = s[28];
      v145 = s[29];
      v240 = s[31];
      v253 = (int)&unk_171CB8;
      v237 = s[32];
      v14 = s[40];
      v234 = s[33];
      v208 = s[34];
      v205 = s[35];
      v165 = s[36];
      v203 = s[37];
      v231 = s[38];
      v201 = s[39];
      v199 = s[41];
      v228 = s[42];
      v195 = s[43];
      v190 = s[44];
      v188 = s[45];
      v185 = s[46];
      v182 = s[47];
      v178 = s[48];
      v175 = s[49];
      do
      {
        v15 = v251 ^ v216 ^ v245 ^ v237 ^ v228;
        v16 = v250 ^ v170 ^ v244 ^ v234 ^ v195;
        v17 = v222 ^ v142 ^ v210 ^ v231 ^ v178;
        v252 = v163 ^ v247 ^ v12 ^ v14 ^ v11;
        v18 = v161 ^ v212 ^ v151 ^ v165 ^ v185;
        v19 = v218 ^ v246 ^ v240 ^ v199 ^ v13;
        v20 = v249 ^ v214 ^ v168 ^ v208 ^ v190;
        v21 = ((2 * v15) | (v16 >> 31)) ^ v17;
        v22 = v172 ^ v159 ^ v153 ^ v205 ^ v188;
        s[0] = v11 ^ v21;
        s[30] = v12 ^ v21;
        s[40] = v14 ^ v21;
        s[10] = v21 ^ v163;
        v23 = v220 ^ v248 ^ v145 ^ v201 ^ v175;
        s[20] = v21 ^ v247;
        v24 = ((2 * v16) | (v15 >> 31)) ^ v23;
        v25 = v15 ^ ((2 * v18) | ((v224 ^ v157 ^ v148 ^ v203 ^ (unsigned int)v182) >> 31));
        s[1] = v13 ^ v24;
        s[4] = v25 ^ v249;
        v26 = v16 ^ ((2 * (v224 ^ v157 ^ v148 ^ v203 ^ v182)) | (v18 >> 31));
        v27 = ((2 * v17) | (v23 >> 31)) ^ v20;
        v28 = (2 * v19) | (v252 >> 31);
        v29 = ((2 * v252) | (v19 >> 31)) ^ v18;
        v30 = v19 ^ ((2 * v22) | (v20 >> 31));
        v31 = ((2 * v23) | (v17 >> 31)) ^ v22;
        v32 = ((2 * v20) | (v22 >> 31)) ^ v252;
        v33 = v28 ^ v224 ^ v157 ^ v148 ^ v203 ^ v182;
        s[8] = v29 ^ v222;
        s[18] = v29 ^ v142;
        s[28] = v29 ^ v210;
        s[38] = v29 ^ v231;
        s[24] = v25 ^ v168;
        s[5] = v26 ^ v172;
        s[15] = v26 ^ v159;
        s[25] = v26 ^ v153;
        s[35] = v26 ^ v205;
        s[11] = v24 ^ v218;
        s[21] = v24 ^ v246;
        s[31] = v24 ^ v240;
        s[6] = v27 ^ v161;
        s[16] = v27 ^ v212;
        s[7] = v31 ^ v224;
        s[17] = v31 ^ v157;
        s[26] = v27 ^ v151;
        s[27] = v31 ^ v148;
        s[36] = v27 ^ v165;
        s[13] = v30 ^ v170;
        s[37] = v31 ^ v203;
        s[12] = v32 ^ v216;
        s[23] = v30 ^ v244;
        s[22] = v32 ^ v245;
        v34 = v32 ^ v251;
        s[33] = v30 ^ v234;
        s[32] = v32 ^ v237;
        v35 = v30 ^ v250;
        s[9] = v33 ^ v220;
        s[42] = v32 ^ v228;
        s[43] = v30 ^ v195;
        v36 = (unsigned __int8 *)&unk_171D7F;
        s[19] = v33 ^ v248;
        v37 = (unsigned __int8 *)v257;
        s[14] = v25 ^ v214;
        s[34] = v25 ^ v208;
        s[29] = v33 ^ v145;
        s[44] = v25 ^ v190;
        s[45] = v26 ^ v188;
        s[41] = v24 ^ v199;
        s[39] = v33 ^ v201;
        s[2] = v34;
        s[3] = v35;
        v38 = (unsigned __int8 *)&unk_171D97;
        s[46] = v27 ^ v185;
        s[47] = v31 ^ v182;
        s[48] = v29 ^ v178;
        s[49] = v33 ^ v175;
        do
        {
          v40 = *++v38;
          v39 = v40;
          v41 = *++v36;
          v42 = -v39 & 0x3F;
          v43 = s[2 * v41 + 1];
          v44 = s[2 * v41];
          v45 = (__PAIR64__(v35, v34) << v39 >> 32) | (v35 >> v42);
          s[2 * v41] = (__PAIR64__(v35, v34) >> v42) | (v34 << v39);
          v35 = v43;
          v34 = v44;
          s[2 * v41 + 1] = v45;
        }
        while ( v36 != v37 );
        v46 = s[2];
        v146 = s[4];
        v47 = s[0] & ~s[8];
        v149 = s[3];
        v179 = s[8] & ~s[6] ^ s[4];
        v48 = s[3] & ~s[1] ^ s[9];
        s[8] ^= s[2] & ~s[0];
        v49 = s[9] & ~s[7] ^ s[5];
        v161 = v47 ^ s[6];
        v163 = s[14] & ~s[12] ^ s[10];
        v170 = s[17] & ~s[15] ^ s[13];
        s[2] ^= s[6] & ~s[4];
        s[4] = v179;
        s[3] ^= s[7] & ~s[5];
        v142 = s[12] & ~s[10] ^ s[18];
        s[6] ^= v47;
        v50 = s[11];
        v51 = s[13] & ~s[11];
        v191 = s[10] & ~s[18] ^ s[16];
        s[7] ^= s[1] & ~s[9];
        s[11] ^= s[15] & ~s[13];
        s[13] = v170;
        s[10] = v163;
        v254 = v146 & ~v46 ^ s[0];
        v52 = v50 & ~s[19];
        v255 = s[5] & ~v149 ^ s[1];
        s[9] = v48;
        s[5] = v49;
        s[12] ^= s[16] & ~s[14];
        s[14] ^= s[18] & ~s[16];
        v53 = s[19] & ~s[17] ^ s[15];
        v157 = v52 ^ s[17];
        v226 = s[24] & ~s[22] ^ s[20];
        v54 = s[22] & ~s[20] ^ s[28];
        v151 = s[20] & ~s[28] ^ s[26];
        v168 = s[28] & ~s[26] ^ s[24];
        v55 = s[26] & ~s[24] ^ s[22];
        v229 = s[25] & ~s[23] ^ s[21];
        v235 = s[23] & ~s[21] ^ s[29];
        v148 = s[21] & ~s[29] ^ s[27];
        v232 = s[27] & ~s[25] ^ s[23];
        s[16] = v191;
        v153 = s[29] & ~s[27] ^ s[25];
        v251 = s[2];
        s[19] ^= v51;
        s[18] = v142;
        v222 = s[8];
        v249 = v179;
        v250 = s[3];
        v220 = v48;
        v172 = v49;
        v216 = s[12];
        s[17] ^= v52;
        s[15] = v53;
        s[20] = v226;
        v210 = v54;
        s[28] = v54;
        s[26] = v151;
        v224 = s[7];
        v241 = v55;
        s[22] = v55;
        s[24] = v168;
        s[21] = v229;
        s[29] = v235;
        v218 = s[11];
        v212 = v191;
        v214 = s[14];
        s[27] = v148;
        s[23] = v232;
        v159 = v53;
        v248 = s[19];
        v56 = s[36] & ~s[34] ^ s[32];
        s[25] = v153;
        v238 = s[30] ^ s[34] & ~s[32];
        v165 = s[30] & ~s[38] ^ s[36];
        v57 = s[32] & ~s[30] ^ s[38];
        v58 = s[35] & ~s[33] ^ s[31];
        v203 = s[31] & ~s[39] ^ s[37];
        v59 = s[38] & ~s[36] ^ s[34];
        v201 = s[33] & ~s[31] ^ s[39];
        v252 = s[39] & ~s[37] ^ s[35];
        v206 = s[37] & ~s[35] ^ s[33];
        v14 = s[40] ^ s[44] & ~s[42];
        v196 = s[42] & ~s[40] ^ s[48];
        v180 = s[40] & ~s[48] ^ s[46];
        v190 = s[48] & ~s[46] ^ s[44];
        v60 = s[42] ^ s[46] & ~s[44];
        v61 = s[45] & ~s[43] ^ s[41];
        v62 = s[41] & ~s[49] ^ s[47];
        v63 = s[43] & ~s[41] ^ s[49];
        v64 = v238;
        v65 = s[43] ^ s[47] & ~s[45];
        v66 = v253;
        v67 = s[49] & ~s[47] ^ s[45];
        v68 = v165;
        __pld((void *)(v253 + 16));
        s[30] = v64;
        s[36] = v68;
        v247 = v226;
        s[37] = v203;
        v245 = v241;
        s[38] = v57;
        s[34] = v59;
        v246 = v229;
        s[32] = v56;
        s[31] = v58;
        v145 = v235;
        s[39] = v201;
        s[35] = v252;
        v244 = v232;
        s[33] = v206;
        s[40] = v14;
        v231 = v57;
        v240 = v58;
        s[48] = v196;
        v12 = v238;
        s[42] = v60;
        s[46] = v180;
        v237 = v56;
        v69 = v206;
        s[44] = v190;
        v205 = v252;
        v70 = *(_DWORD *)(v66 + 8);
        v71 = v180;
        v228 = v60;
        v208 = v59;
        v253 = v66 + 8;
        v72 = *(_DWORD *)(v66 + 12);
        v178 = v196;
        s[41] = v61;
        s[47] = v62;
        s[43] = v65;
        s[45] = v67;
        v11 = v70 ^ v254;
        v234 = v69;
        s[49] = v63;
        v185 = v71;
        v199 = v61;
        v182 = v62;
        v175 = v63;
        v195 = v65;
        v13 = v255 ^ v72;
        v188 = v67;
        s[0] = v70 ^ v254;
        s[1] = v255 ^ v72;
      }
      while ( (char *)(v66 + 8) != v256 );
      v73 = v259 - 72;
      v74 = v259 - 72 > 0x47;
      v259 -= 72;
      v258 += 72;
    }
    while ( v74 );
    v7 = (unsigned __int8 *)v257;
    v6 = v73;
  }
  *((_BYTE *)s + v6) ^= 1u;
  HIBYTE(s[17]) = ~(HIBYTE(s[17]) ^ 0x7F);
  if ( v6 )
  {
    if ( v6 - 1 <= 2 )
    {
      v80 = 0;
      goto LABEL_25;
    }
    v75 = (int *)v258;
    v76 = v6 >> 2;
    v77 = 0;
    v78 = s;
    do
    {
      ++v77;
      v79 = *v75++;
      *v78++ ^= v79;
    }
    while ( v77 < v76 );
    v80 = v259 & 0xFFFFFFFC;
    if ( v259 != (v259 & 0xFFFFFFFC) )
    {
LABEL_25:
      v81 = v258;
      v82 = v259;
      v83 = v80 + 1;
      v74 = v259 > v80 + 1;
      *((_BYTE *)s + v80) ^= *(_BYTE *)(v258 + v80);
      if ( v74 )
      {
        v84 = v80 + 2;
        *((_BYTE *)s + v83) ^= *(_BYTE *)(v81 + v83);
        if ( v82 > v84 )
          *((_BYTE *)s + v84) ^= *(_BYTE *)(v81 + v84);
      }
    }
  }
  v242 = s[1];
  v85 = s[0];
  v249 = s[2];
  v250 = s[3];
  v230 = s[4];
  v211 = s[5];
  v213 = s[6];
  v162 = s[7];
  v215 = s[8];
  v217 = s[9];
  v164 = s[10];
  v219 = s[11];
  v221 = s[12];
  v171 = s[13];
  v223 = s[14];
  v158 = s[15];
  v225 = s[16];
  v86 = s[20];
  v160 = s[17];
  v173 = s[18];
  v251 = s[19];
  v252 = s[21];
  v253 = s[22];
  v254 = s[23];
  v166 = s[24];
  v143 = s[25];
  v147 = s[26];
  v150 = s[27];
  v181 = s[28];
  v152 = s[29];
  v244 = s[30];
  v245 = s[31];
  v257 = (char *)&unk_171CB8;
  v246 = s[32];
  v247 = s[33];
  v227 = s[47];
  v183 = s[34];
  v186 = s[35];
  v189 = s[36];
  v192 = s[37];
  v197 = s[38];
  v200 = s[39];
  v202 = s[41];
  v248 = s[42];
  v204 = s[43];
  v154 = s[44];
  v207 = s[45];
  v209 = s[46];
  v169 = s[49];
  v87 = s[40];
  v176 = s[48];
  do
  {
    v88 = v215 ^ v173 ^ v181 ^ v197 ^ v176;
    LODWORD(v89) = v249 ^ v221 ^ v253 ^ v246 ^ v248;
    HIDWORD(v89) = v250 ^ v171 ^ v254 ^ v247 ^ v204;
    v90 = v164 ^ v86 ^ v244 ^ v87 ^ v85;
    v91 = v230 ^ v223 ^ v166 ^ v183 ^ v154;
    v92 = ((2 * v89) | (HIDWORD(v89) >> 31)) ^ v88;
    v93 = v211 ^ v158 ^ v143 ^ v186 ^ v207;
    s[20] = v86 ^ v92;
    s[0] = v85 ^ v92;
    s[40] = v87 ^ v92;
    v94 = v217 ^ v251 ^ v152 ^ v200 ^ v169;
    v95 = (v89 >> 31) ^ v94;
    s[10] = v92 ^ v164;
    s[30] = v92 ^ v244;
    v96 = ((2 * (v213 ^ v225 ^ v147 ^ v189 ^ v209)) | ((v162 ^ v160 ^ v150 ^ v192 ^ (unsigned int)v227) >> 31)) ^ v89;
    s[4] = v96 ^ v230;
    s[1] = v95 ^ v242;
    v97 = ((2 * (v162 ^ v160 ^ v150 ^ v192 ^ v227)) | ((v213 ^ v225 ^ v147 ^ v189 ^ (unsigned int)v209) >> 31))
        ^ HIDWORD(v89);
    v98 = ((2 * v94) | (v88 >> 31)) ^ v93;
    LODWORD(v89) = ((2 * v88) | (v94 >> 31)) ^ v91;
    v99 = ((2 * v90) | ((v219 ^ v252 ^ v245 ^ v202 ^ v242) >> 31)) ^ v213 ^ v225 ^ v147 ^ v189 ^ v209;
    HIDWORD(v89) = ((2 * v93) | (v91 >> 31)) ^ v219 ^ v252 ^ v245 ^ v202 ^ v242;
    s[8] = v99 ^ v215;
    v100 = ((2 * v91) | (v93 >> 31)) ^ v90;
    v101 = ((2 * (v219 ^ v252 ^ v245 ^ v202 ^ v242)) | (v90 >> 31)) ^ v162 ^ v160 ^ v150 ^ v192 ^ v227;
    s[18] = v99 ^ v173;
    s[28] = v99 ^ v181;
    s[38] = v99 ^ v197;
    s[15] = v97 ^ v158;
    s[34] = v96 ^ v183;
    s[25] = v97 ^ v143;
    s[35] = v97 ^ v186;
    s[45] = v97 ^ v207;
    s[11] = v95 ^ v219;
    s[21] = v95 ^ v252;
    s[31] = v95 ^ v245;
    s[6] = v89 ^ v213;
    s[16] = v89 ^ v225;
    s[7] = v98 ^ v162;
    s[17] = v98 ^ v160;
    s[26] = v89 ^ v147;
    s[27] = v98 ^ v150;
    s[36] = v89 ^ v189;
    s[37] = v98 ^ v192;
    s[46] = v89 ^ v209;
    s[47] = v98 ^ v227;
    v102 = v100 ^ v249;
    s[22] = v100 ^ v253;
    s[32] = v100 ^ v246;
    s[13] = HIDWORD(v89) ^ v171;
    v103 = HIDWORD(v89) ^ v250;
    s[12] = v100 ^ v221;
    v104 = (unsigned __int8 *)&unk_171D97;
    s[14] = v96 ^ v223;
    s[23] = HIDWORD(v89) ^ v254;
    s[24] = v96 ^ v166;
    s[44] = v96 ^ v154;
    s[5] = v97 ^ v211;
    s[33] = HIDWORD(v89) ^ v247;
    s[41] = v95 ^ v202;
    s[2] = v100 ^ v249;
    s[43] = HIDWORD(v89) ^ v204;
    v105 = (unsigned __int8 *)&unk_171D7F;
    s[42] = v100 ^ v248;
    s[9] = v101 ^ v217;
    s[3] = v103;
    s[48] = v99 ^ v176;
    s[19] = v101 ^ v251;
    s[29] = v101 ^ v152;
    s[39] = v101 ^ v200;
    s[49] = v101 ^ v169;
    do
    {
      v107 = *++v104;
      v106 = v107;
      v108 = *++v105;
      v109 = -v106 & 0x3F;
      v110 = s[2 * v108 + 1];
      v111 = s[2 * v108];
      v112 = (__PAIR64__(v103, v102) << v106 >> 32) | (v103 >> v109);
      s[2 * v108] = (__PAIR64__(v103, v102) >> v109) | (v102 << v106);
      v103 = v110;
      v102 = v111;
      s[2 * v108 + 1] = v112;
    }
    while ( v7 != v105 );
    v113 = s[4];
    v144 = s[2];
    v114 = s[3];
    v155 = s[6] & ~s[4] ^ s[2];
    v230 = s[8] & ~s[6] ^ s[4];
    v162 = s[1] & ~s[9] ^ s[7];
    v115 = s[3] & ~s[1] ^ s[9];
    v116 = s[9] & ~s[7] ^ s[5];
    v164 = s[14] & ~s[12] ^ s[10];
    v193 = s[2] & ~s[0] ^ s[8];
    v171 = s[17] & ~s[15] ^ s[13];
    v117 = s[12] & ~s[10];
    s[4] = v230;
    s[2] = v155;
    s[6] ^= s[0] & ~s[8];
    v118 = s[11];
    v119 = s[10] & ~s[18];
    v198 = s[13] & ~s[11];
    s[10] = v164;
    v120 = v117 ^ s[18];
    s[3] ^= s[7] & ~s[5];
    s[8] = v193;
    s[11] ^= s[15] & ~s[13];
    v121 = s[5] & ~v114;
    s[9] = v115;
    s[5] = v116;
    s[7] = v162;
    s[12] ^= s[16] & ~s[14];
    s[13] = v171;
    s[14] ^= s[18] & ~s[16];
    v258 = v113 & ~v144 ^ s[0];
    v259 = v121 ^ s[1];
    v174 = v118 & ~s[19];
    s[16] ^= v119;
    v122 = s[28] & ~s[26] ^ s[24];
    v123 = s[19] & ~s[17] ^ s[15];
    v233 = s[24] & ~s[22] ^ s[20];
    v181 = s[22] & ~s[20] ^ s[28];
    v147 = s[20] & ~s[28] ^ s[26];
    v236 = s[25] & ~s[23] ^ s[21];
    v152 = s[23] & ~s[21] ^ s[29];
    v150 = s[21] & ~s[29] ^ s[27];
    v239 = s[27] & ~s[25] ^ s[23];
    v143 = s[29] & ~s[27] ^ s[25];
    s[19] ^= v198;
    v249 = v155;
    v167 = s[26] & ~s[24] ^ s[22];
    s[22] = v167;
    v213 = s[6];
    v250 = s[3];
    v211 = v116;
    v221 = s[12];
    v219 = s[11];
    s[18] = v120;
    v215 = v193;
    s[17] ^= v174;
    s[15] = v123;
    s[20] = v233;
    v217 = v115;
    s[28] = v181;
    s[26] = v147;
    v244 = v122;
    s[24] = v122;
    s[21] = v236;
    s[29] = v152;
    v160 = s[17];
    s[27] = v150;
    v225 = s[16];
    v158 = v123;
    v173 = v120;
    v223 = s[14];
    s[23] = v239;
    s[25] = v143;
    v251 = s[19];
    v124 = s[35] & ~s[33] ^ s[31];
    v243 = s[34] & ~s[32] ^ s[30];
    v125 = s[31] & ~s[39] ^ s[37];
    v126 = s[32] & ~s[30] ^ s[38];
    v189 = s[30] & ~s[38] ^ s[36];
    v200 = s[33] & ~s[31] ^ s[39];
    v184 = s[36] & ~s[34] ^ s[32];
    v127 = s[38] & ~s[36] ^ s[34];
    v248 = s[39] & ~s[37] ^ s[35];
    v187 = s[37] & ~s[35] ^ s[33];
    v255 = s[44] & ~s[42] ^ s[40];
    v194 = s[42] & ~s[40] ^ s[48];
    v128 = s[40] & ~s[48] ^ s[46];
    v156 = s[46] & ~s[44] ^ s[42];
    v177 = s[48] & ~s[46] ^ s[44];
    v202 = s[45] & ~s[43] ^ s[41];
    v129 = v243;
    v130 = s[43] & ~s[41] ^ s[49];
    v131 = s[47] ^ s[41] & ~s[49];
    v132 = s[47] & ~s[45] ^ s[43];
    v133 = s[49] & ~s[47] ^ s[45];
    v134 = v189;
    v135 = v257;
    v136 = v184;
    __pld(v257 + 16);
    s[36] = v134;
    s[30] = v129;
    s[38] = v126;
    v253 = v167;
    s[34] = v127;
    s[32] = v136;
    v166 = v244;
    v86 = v233;
    s[31] = v124;
    v197 = v126;
    s[35] = v248;
    v252 = v236;
    v254 = v239;
    s[42] = v156;
    s[33] = v187;
    s[39] = v200;
    v246 = v184;
    v244 = v243;
    v183 = v127;
    s[37] = v125;
    s[40] = v255;
    s[48] = v194;
    s[46] = v128;
    s[41] = v202;
    v245 = v124;
    v192 = v125;
    s[44] = v177;
    s[47] = v131;
    s[43] = v132;
    s[45] = v133;
    v209 = v128;
    v137 = v187;
    v186 = v248;
    v139 = v135 + 8;
    v138 = *((_DWORD *)v135 + 2);
    v176 = s[48];
    v248 = v156;
    v140 = *((_DWORD *)v139 + 1);
    v247 = v137;
    v85 = v258 ^ v138;
    s[49] = v130;
    v257 = v139;
    v87 = v255;
    v154 = s[44];
    v227 = v131;
    v169 = v130;
    v242 = v259 ^ v140;
    v204 = v132;
    v207 = v133;
    s[0] = v258 ^ v138;
    s[1] = v259 ^ v140;
  }
  while ( v256 != v139 );
  if ( n )
    memcpy(dest, s, n);
  return 0;
}
