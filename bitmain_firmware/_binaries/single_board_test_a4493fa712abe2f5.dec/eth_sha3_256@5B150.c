int __fastcall eth_sha3_256(void *a1, size_t a2, int *a3, unsigned int a4)
{
  unsigned int v4; // r1
  unsigned int v6; // r1
  unsigned __int8 *v7; // r11
  int *v8; // r0
  _DWORD *v9; // r1
  int v10; // t1
  int v11; // r8
  unsigned __int64 v12; // kr10_8
  int v13; // r9
  int v14; // r10
  int v15; // r2
  int v16; // r11
  unsigned int v17; // lr
  unsigned int v18; // r7
  unsigned int v19; // r12
  __int64 v20; // r4
  int v21; // r1
  int v22; // r1
  int v23; // lr
  unsigned int v24; // r3
  int v25; // r12
  int v26; // r9
  int v27; // r0
  int v28; // r10
  int v29; // r7
  int v30; // r8
  int v31; // r11
  int v32; // r6
  unsigned int v33; // r2
  unsigned int v34; // r3
  unsigned __int8 *v35; // r1
  char *v36; // r0
  unsigned __int8 *v37; // r8
  char v38; // r4
  char v39; // t1
  int v40; // t1
  char v41; // r6
  int *v42; // r12
  int v43; // r5
  int v44; // r7
  int v45; // r3
  int v46; // r10
  int v47; // r8
  int v48; // lr
  int v49; // r12
  int v50; // r1
  int v51; // r7
  int v52; // r0
  int v53; // r0
  int v54; // r4
  int v55; // r5
  int v56; // r1
  int v57; // lr
  int v58; // r12
  int v59; // r8
  int v60; // r11
  int v61; // r0
  int v62; // r5
  int v63; // r3
  int v64; // r7
  int v65; // r1
  int v66; // r6
  int v67; // r10
  int v68; // r7
  int v69; // r4
  int v70; // r6
  bool v71; // zf
  unsigned int v72; // r3
  bool v73; // cc
  int *v74; // r4
  unsigned int v75; // r5
  unsigned int v76; // r0
  _DWORD *v77; // r1
  int v78; // t1
  unsigned int v79; // r3
  int *v80; // r4
  unsigned int v81; // r5
  unsigned int v82; // r2
  unsigned int v83; // r3
  int v84; // r7
  int v85; // r12
  int v86; // r9
  int v87; // r10
  int v88; // r6
  unsigned int v89; // r0
  unsigned int v90; // r2
  unsigned int v91; // r8
  int v92; // r4
  unsigned int v93; // lr
  int v94; // r6
  unsigned int v95; // r3
  unsigned int v96; // r7
  int v97; // r6
  int v98; // r4
  int v99; // r3
  int v100; // r4
  int v101; // r10
  int v102; // r12
  int v103; // r0
  int v104; // r1
  int v105; // r2
  char *v106; // r4
  unsigned int v107; // r7
  unsigned __int8 *v108; // r1
  unsigned int v109; // r6
  char v110; // r2
  char v111; // t1
  int v112; // t1
  char v113; // r0
  unsigned int v114; // r5
  unsigned int v115; // r3
  unsigned int v116; // r9
  int *v117; // lr
  int v118; // r2
  int v119; // r5
  int v120; // r10
  int v121; // r9
  int v122; // r8
  int v123; // lr
  int v124; // r2
  int v125; // r7
  int v126; // r1
  int v127; // r4
  int v128; // r4
  int v129; // r1
  int v130; // r2
  int v131; // r3
  int v132; // r12
  int v133; // r8
  int v134; // lr
  int v135; // r7
  int v136; // r4
  int v137; // r1
  int v138; // r0
  int v139; // r2
  int v140; // r6
  int v141; // r3
  int v142; // r5
  int v143; // r5
  unsigned int v144; // r5
  int v145; // t1
  int v146; // r5
  int v148; // [sp+4h] [bp-1B0h]
  int v149; // [sp+4h] [bp-1B0h]
  int v150; // [sp+4h] [bp-1B0h]
  int v151; // [sp+4h] [bp-1B0h]
  int v152; // [sp+8h] [bp-1ACh]
  int v153; // [sp+8h] [bp-1ACh]
  int v154; // [sp+Ch] [bp-1A8h]
  int v155; // [sp+Ch] [bp-1A8h]
  int v156; // [sp+Ch] [bp-1A8h]
  int v157; // [sp+10h] [bp-1A4h]
  int v158; // [sp+10h] [bp-1A4h]
  int v159; // [sp+14h] [bp-1A0h]
  int v160; // [sp+14h] [bp-1A0h]
  int v161; // [sp+18h] [bp-19Ch]
  int v162; // [sp+18h] [bp-19Ch]
  int v163; // [sp+1Ch] [bp-198h]
  int v164; // [sp+1Ch] [bp-198h]
  int v165; // [sp+20h] [bp-194h]
  int v166; // [sp+20h] [bp-194h]
  int v167; // [sp+24h] [bp-190h]
  int v168; // [sp+24h] [bp-190h]
  int v169; // [sp+28h] [bp-18Ch]
  int v170; // [sp+28h] [bp-18Ch]
  int v171; // [sp+2Ch] [bp-188h]
  int v172; // [sp+2Ch] [bp-188h]
  int v173; // [sp+30h] [bp-184h]
  int v174; // [sp+30h] [bp-184h]
  int v175; // [sp+30h] [bp-184h]
  int v176; // [sp+34h] [bp-180h]
  int v177; // [sp+34h] [bp-180h]
  int v178; // [sp+34h] [bp-180h]
  int v179; // [sp+38h] [bp-17Ch]
  int v180; // [sp+38h] [bp-17Ch]
  int v181; // [sp+38h] [bp-17Ch]
  int v182; // [sp+3Ch] [bp-178h]
  int v183; // [sp+3Ch] [bp-178h]
  int v184; // [sp+40h] [bp-174h]
  int v185; // [sp+40h] [bp-174h]
  int v186; // [sp+44h] [bp-170h]
  int v187; // [sp+44h] [bp-170h]
  int v188; // [sp+44h] [bp-170h]
  int v189; // [sp+48h] [bp-16Ch]
  int v190; // [sp+48h] [bp-16Ch]
  int v191; // [sp+48h] [bp-16Ch]
  int v192; // [sp+48h] [bp-16Ch]
  int v193; // [sp+4Ch] [bp-168h]
  int v194; // [sp+4Ch] [bp-168h]
  int v195; // [sp+4Ch] [bp-168h]
  int v196; // [sp+50h] [bp-164h]
  int v197; // [sp+50h] [bp-164h]
  int v198; // [sp+50h] [bp-164h]
  int v199; // [sp+50h] [bp-164h]
  int v200; // [sp+54h] [bp-160h]
  int v201; // [sp+54h] [bp-160h]
  int v202; // [sp+58h] [bp-15Ch]
  int v203; // [sp+58h] [bp-15Ch]
  int v204; // [sp+5Ch] [bp-158h]
  int v205; // [sp+5Ch] [bp-158h]
  int v206; // [sp+5Ch] [bp-158h]
  int v207; // [sp+5Ch] [bp-158h]
  int v208; // [sp+60h] [bp-154h]
  int v209; // [sp+64h] [bp-150h]
  int v210; // [sp+68h] [bp-14Ch]
  int v211; // [sp+6Ch] [bp-148h]
  int v212; // [sp+70h] [bp-144h]
  int v213; // [sp+74h] [bp-140h]
  int v214; // [sp+78h] [bp-13Ch]
  int v215; // [sp+7Ch] [bp-138h]
  int v216; // [sp+80h] [bp-134h]
  int v217; // [sp+84h] [bp-130h]
  _BYTE v218[12]; // [sp+88h] [bp-12Ch]
  __int64 v219; // [sp+94h] [bp-120h]
  int v220; // [sp+9Ch] [bp-118h]
  int v221; // [sp+A0h] [bp-114h]
  int v222; // [sp+A4h] [bp-110h]
  int v223; // [sp+A8h] [bp-10Ch]
  unsigned __int64 v224; // [sp+ACh] [bp-108h]
  int v225; // [sp+B4h] [bp-100h]
  int v226; // [sp+B8h] [bp-FCh]
  int v227; // [sp+BCh] [bp-F8h]
  int v228; // [sp+C0h] [bp-F4h]
  int v229; // [sp+C4h] [bp-F0h]
  unsigned int v230; // [sp+C8h] [bp-ECh]
  unsigned int v231; // [sp+CCh] [bp-E8h]
  _DWORD *v232; // [sp+D0h] [bp-E4h]
  int v233; // [sp+D4h] [bp-E0h]
  int *v234; // [sp+D8h] [bp-DCh]
  unsigned int v235; // [sp+DCh] [bp-D8h]
  size_t n; // [sp+E0h] [bp-D4h]
  void *dest; // [sp+E4h] [bp-D0h]
  _DWORD s[51]; // [sp+E8h] [bp-CCh] BYREF

  n = a2;
  dest = a1;
  v234 = a3;
  v235 = a4;
  if ( a2 > 0x20 || !a1 )
    return -1;
  v4 = a4;
  if ( a4 )
    v4 = 1;
  if ( a3 )
    v4 = 0;
  if ( v4 )
    return -1;
  memset(s, 0, 0xC8u);
  v7 = (unsigned __int8 *)&unk_FC657;
  if ( a4 <= 0x87 )
    v6 = v235;
  v232 = &unk_FC638;
  if ( a4 > 0x87 )
  {
    v233 = (int)&unk_FC657;
    do
    {
      v8 = v234;
      v9 = s;
      do
      {
        v10 = *v8++;
        *v9++ ^= v10;
      }
      while ( v9 != &s[34] );
      v229 = s[2];
      v11 = s[0];
      v228 = s[3];
      v227 = s[4];
      v196 = s[5];
      *(_DWORD *)&v218[4] = s[6];
      *(_DWORD *)v218 = s[7];
      v217 = s[8];
      v216 = s[9];
      v193 = s[10];
      v215 = s[11];
      v179 = s[12];
      v189 = s[13];
      v176 = s[14];
      v173 = s[15];
      v171 = s[16];
      v169 = s[17];
      v214 = s[18];
      v226 = s[19];
      v225 = s[21];
      v167 = s[24];
      v224 = __PAIR64__(s[22], s[23]);
      v12 = *(_QWORD *)&s[25];
      v161 = s[27];
      v159 = s[28];
      v157 = s[29];
      v223 = s[31];
      v13 = s[30];
      v14 = s[20];
      v220 = (int)&unk_FC578;
      v222 = s[32];
      v221 = s[33];
      v213 = s[34];
      v212 = s[35];
      v211 = s[36];
      v210 = s[37];
      v209 = s[38];
      v182 = s[39];
      v184 = s[41];
      v154 = s[42];
      v208 = s[43];
      v204 = s[44];
      v202 = s[45];
      v200 = s[46];
      v186 = s[47];
      v148 = s[48];
      v152 = s[49];
      v15 = s[40];
      v16 = s[1];
      do
      {
        v230 = v193 ^ v14 ^ v13 ^ v15 ^ v11;
        v17 = v229 ^ v179 ^ HIDWORD(v224) ^ v222 ^ v154;
        v18 = v214 ^ v217 ^ v159 ^ v209 ^ v148;
        v19 = v228 ^ v189 ^ v224 ^ v221 ^ v208;
        LODWORD(v219) = v200 ^ *(_DWORD *)&v218[4] ^ v171 ^ HIDWORD(v12) ^ v211;
        HIDWORD(v219) = *(_DWORD *)v218 ^ v169 ^ v161 ^ v210 ^ v186;
        *(_DWORD *)&v218[8] = v215 ^ v225 ^ v223 ^ v184 ^ v16;
        HIDWORD(v20) = v227 ^ v176 ^ v167 ^ v213 ^ v204;
        LODWORD(v20) = v196 ^ v173 ^ v12 ^ v212 ^ v202;
        v21 = ((2 * v17) | (v19 >> 31)) ^ v18;
        s[0] = v11 ^ v21;
        s[10] = v193 ^ v21;
        s[20] = v21 ^ v14;
        s[30] = v21 ^ v13;
        s[40] = v15 ^ v21;
        v22 = ((2 * v19) | (v17 >> 31)) ^ v226 ^ v216 ^ v157 ^ v182 ^ v152;
        v23 = ((2 * v219) | (HIDWORD(v219) >> 31)) ^ v17;
        v24 = v226 ^ v216 ^ v157 ^ v182 ^ v152;
        s[4] = v23 ^ v227;
        s[1] = v16 ^ v22;
        v25 = (v219 >> 31) ^ v19;
        v26 = ((2 * v18) | (v24 >> 31)) ^ HIDWORD(v20);
        v27 = *(_DWORD *)&v218[8] ^ ((2 * v20) | (HIDWORD(v20) >> 31));
        v28 = ((2 * v230) | (*(_DWORD *)&v218[8] >> 31)) ^ v219;
        v29 = ((2 * v24) | (v18 >> 31)) ^ v20;
        v30 = (v20 >> 31) ^ v230;
        s[8] = v28 ^ v217;
        v31 = ((2 * *(_DWORD *)&v218[8]) | (v230 >> 31)) ^ HIDWORD(v219);
        s[18] = v28 ^ v214;
        s[28] = v28 ^ v159;
        s[38] = v28 ^ v209;
        s[14] = v23 ^ v176;
        s[34] = v23 ^ v213;
        s[5] = v25 ^ v196;
        s[15] = v25 ^ v173;
        s[25] = v25 ^ v12;
        s[35] = v25 ^ v212;
        s[11] = v215 ^ v22;
        s[21] = v225 ^ v22;
        s[31] = v223 ^ v22;
        s[6] = v26 ^ *(_DWORD *)&v218[4];
        s[16] = v26 ^ v171;
        s[7] = v29 ^ *(_DWORD *)v218;
        s[17] = v29 ^ v169;
        s[26] = v26 ^ HIDWORD(v12);
        s[13] = v189 ^ v27;
        s[27] = v161 ^ v29;
        v32 = v224 ^ v27;
        s[36] = v26 ^ v211;
        s[37] = v210 ^ v29;
        v33 = v30 ^ v229;
        s[12] = v30 ^ v179;
        s[22] = v30 ^ HIDWORD(v224);
        s[32] = v30 ^ v222;
        s[33] = v221 ^ v27;
        v34 = v228 ^ v27;
        s[41] = v22 ^ v184;
        s[42] = v30 ^ v154;
        s[43] = v27 ^ v208;
        v35 = (unsigned __int8 *)&unk_FC63F;
        v36 = (char *)&unk_FC657;
        s[9] = v31 ^ v216;
        v37 = (unsigned __int8 *)v233;
        s[24] = v23 ^ v167;
        s[44] = v23 ^ v204;
        s[45] = v25 ^ v202;
        s[19] = v31 ^ v226;
        s[2] = v33;
        s[3] = v34;
        s[23] = v32;
        s[29] = v31 ^ v157;
        s[46] = v26 ^ v200;
        s[47] = v29 ^ v186;
        s[39] = v31 ^ v182;
        s[48] = v28 ^ v148;
        s[49] = v31 ^ v152;
        do
        {
          v39 = *++v36;
          v38 = v39;
          v40 = *++v35;
          v41 = -v38 & 0x3F;
          v42 = &s[2 * v40];
          v43 = (v33 >> v41) | (v34 << (32 - v41)) | (v34 >> (v41 - 32)) | (v33 << v38);
          v44 = (v34 << v38) | (v33 << (v38 - 32)) | (v33 >> (32 - v38)) | (v34 >> v41);
          v34 = v42[1];
          v33 = *v42;
          *v42 = v43;
          v42[1] = v44;
        }
        while ( v35 != v37 );
        v45 = s[4];
        v46 = s[3];
        v47 = s[7] & ~s[5] ^ s[3];
        v149 = s[2];
        v187 = s[2] & ~s[0] ^ s[8];
        v155 = s[8] & ~s[6] ^ s[4];
        v48 = s[3] & ~s[1] ^ s[9];
        v49 = s[9] & ~s[7] ^ s[5];
        v179 = s[16] & ~s[14] ^ s[12];
        v50 = s[11];
        v189 = s[17] & ~s[15] ^ s[13];
        s[2] ^= s[6] & ~s[4];
        s[6] ^= s[0] & ~s[8];
        s[8] = v187;
        v208 = s[13] & ~s[11];
        s[4] = v155;
        s[7] ^= s[1] & ~s[9];
        v51 = s[12] & ~s[10] ^ s[18];
        v52 = s[10] & ~s[18];
        s[3] = v47;
        s[10] ^= s[14] & ~s[12];
        s[12] = v179;
        s[9] = v48;
        v205 = v52 ^ s[16];
        s[11] ^= s[15] & ~s[13];
        s[13] = v189;
        v53 = s[5] & ~v46;
        s[5] = v49;
        s[14] ^= s[18] & ~s[16];
        v230 = v45 & ~v149 ^ s[0];
        v231 = v53 ^ s[1];
        v54 = s[19] & ~s[17] ^ s[15];
        v169 = v50 & ~s[19] ^ s[17];
        *(_DWORD *)&v218[8] = s[24] & ~s[22] ^ s[20];
        v159 = s[22] & ~s[20] ^ s[28];
        v55 = s[20] & ~s[28] ^ s[26];
        v167 = s[28] & ~s[26] ^ s[24];
        v219 = *(_QWORD *)&s[25] & ~*(_QWORD *)&s[23] ^ *(_QWORD *)&s[21];
        v222 = s[23] & ~s[21] ^ s[29];
        v161 = s[21] & ~s[29] ^ s[27];
        v221 = s[27] & ~s[25] ^ s[23];
        v229 = s[2];
        *(_DWORD *)&v218[4] = s[6];
        v217 = v187;
        s[20] = *(_DWORD *)&v218[8];
        v227 = v155;
        s[28] = v159;
        v56 = s[26] & ~s[24] ^ s[22];
        v163 = v55;
        s[26] = v55;
        v165 = s[29] & ~s[27] ^ s[25];
        s[16] = v205;
        s[18] = v51;
        s[19] ^= v208;
        s[17] = v169;
        s[15] = v54;
        v228 = v47;
        v216 = v48;
        v196 = v49;
        *(_DWORD *)v218 = s[7];
        s[22] = v56;
        v173 = v54;
        v193 = s[10];
        s[24] = v167;
        v214 = v51;
        s[21] ^= s[25] & ~s[23];
        v176 = s[14];
        v215 = s[11];
        v171 = v205;
        s[29] = v222;
        s[23] = v221;
        v226 = s[19];
        s[27] = v161;
        s[25] = v165;
        v57 = s[36] & ~s[34] ^ s[32];
        v58 = s[35] & ~s[33] ^ s[31];
        v13 = s[34] & ~s[32] ^ s[30];
        v223 = s[42] & ~s[40];
        v59 = s[32] & ~s[30] ^ s[38];
        v60 = s[30] & ~s[38] ^ s[36];
        v213 = s[38] & ~s[36] ^ s[34];
        v210 = s[31] & ~s[39] ^ s[37];
        v209 = s[39] & ~s[37] ^ s[35];
        v182 = s[33] & ~s[31] ^ s[39];
        v212 = s[37] & ~s[35] ^ s[33];
        v148 = v223 ^ s[48];
        v206 = s[44] & ~s[42] ^ s[40];
        v61 = s[43];
        v200 = s[40] & ~s[48] ^ s[46];
        v62 = s[45];
        v63 = s[42] ^ s[46] & ~s[44];
        v64 = s[41] & ~s[49];
        v184 = s[41] ^ s[45] & ~s[43];
        v208 = s[48] & ~s[46] ^ s[44];
        v65 = s[49] & ~s[47];
        v66 = s[47];
        v67 = s[43] & ~s[41] ^ s[49];
        __pld((void *)(v220 + 16));
        v152 = v67;
        s[30] = v13;
        v14 = *(_DWORD *)&v218[8];
        s[36] = v60;
        v68 = v64 ^ v66;
        s[34] = v213;
        v225 = v219;
        s[40] = v206;
        s[37] = v210;
        v224 = __PAIR64__(HIDWORD(v219), v221);
        s[39] = v182;
        s[48] = v148;
        v157 = v222;
        s[38] = v59;
        s[33] = v212;
        s[35] = v209;
        v211 = v60;
        s[46] = v200;
        v209 = v59;
        s[42] = v63;
        s[31] = v58;
        s[32] = v57;
        v222 = v57;
        s[44] = v208;
        s[43] = v61 ^ v66 & ~v62;
        v221 = v212;
        s[41] = v184;
        v154 = v63;
        s[49] = v152;
        v69 = v208;
        v208 = s[43];
        v70 = *(_DWORD *)(v220 + 8);
        v212 = s[35];
        v15 = v206;
        v204 = v69;
        v16 = v231 ^ *(_DWORD *)(v220 + 12);
        v223 = v58;
        v71 = v220 + 8 == (_DWORD)v232;
        s[47] = v68;
        v11 = v230 ^ v70;
        s[45] = v65 ^ v62;
        v220 += 8;
        v186 = v68;
        v202 = v65 ^ v62;
        s[0] = v230 ^ v70;
        s[1] = v16;
        v12 = __PAIR64__(v163, v165);
      }
      while ( !v71 );
      v72 = v235 - 136;
      v73 = v235 - 136 > 0x87;
      v235 -= 136;
      v234 += 34;
    }
    while ( v73 );
    v7 = (unsigned __int8 *)v233;
    v6 = v72;
  }
  *((_BYTE *)s + v6) ^= 1u;
  HIBYTE(s[33]) ^= 0x80u;
  if ( v6 )
  {
    if ( v6 - 1 <= 2 )
    {
      v79 = 0;
      goto LABEL_26;
    }
    v74 = v234;
    v75 = v6 >> 2;
    v76 = 0;
    v77 = s;
    do
    {
      ++v76;
      v78 = *v74++;
      *v77++ ^= v78;
    }
    while ( v76 < v75 );
    v79 = v235 & 0xFFFFFFFC;
    if ( v235 != (v235 & 0xFFFFFFFC) )
    {
LABEL_26:
      v80 = v234;
      v81 = v235;
      v82 = v79 + 1;
      v73 = v235 > v79 + 1;
      *((_BYTE *)s + v79) ^= *((_BYTE *)v234 + v79);
      if ( v73 )
      {
        v83 = v79 + 2;
        *((_BYTE *)s + v82) ^= *((_BYTE *)v80 + v82);
        if ( v81 > v83 )
          *((_BYTE *)s + v83) ^= *((_BYTE *)v80 + v83);
      }
    }
  }
  v84 = s[0];
  HIDWORD(v219) = s[2];
  v85 = s[1];
  v220 = s[3];
  v221 = s[4];
  v180 = s[5];
  v203 = s[6];
  v168 = s[7];
  v207 = s[8];
  v170 = s[9];
  *(_DWORD *)v218 = s[10];
  v208 = s[11];
  v209 = s[12];
  v183 = s[13];
  v153 = s[14];
  v156 = s[15];
  v210 = s[16];
  v158 = s[17];
  v211 = s[18];
  v222 = s[19];
  v223 = s[20];
  v224 = *(_QWORD *)&s[21];
  v212 = s[24];
  v225 = s[23];
  v160 = s[26];
  v213 = s[25];
  v162 = s[27];
  v164 = s[28];
  v166 = s[29];
  v226 = s[31];
  v216 = (int)&unk_FC578;
  v227 = s[32];
  v228 = s[33];
  v174 = s[48];
  v214 = s[34];
  v177 = s[49];
  v215 = s[35];
  v229 = s[36];
  v185 = s[37];
  v188 = s[38];
  v172 = s[39];
  v190 = s[41];
  v230 = s[40];
  v150 = s[42];
  v194 = s[43];
  v197 = s[44];
  v201 = s[45];
  v217 = s[30];
  v86 = s[47];
  v87 = s[46];
  do
  {
    v88 = *(_DWORD *)v218;
    *(_DWORD *)v218 ^= v223 ^ v217 ^ v230;
    v89 = HIDWORD(v219) ^ v209 ^ HIDWORD(v224) ^ v227 ^ v150;
    v90 = v220 ^ v183 ^ v225 ^ v228 ^ v194;
    *(_DWORD *)v218 ^= v84;
    v231 = v207 ^ v211 ^ v164 ^ v188 ^ v174;
    *(_DWORD *)&v218[8] = v210 ^ v203 ^ v160 ^ v229 ^ v87;
    LODWORD(v219) = v168 ^ v158 ^ v162 ^ v185 ^ v86;
    *(_DWORD *)&v218[4] = v208 ^ v224 ^ v226 ^ v190 ^ v85;
    v91 = v221 ^ v153 ^ v212 ^ v214 ^ v197;
    v92 = ((2 * v89) | (v90 >> 31)) ^ v231;
    s[10] = v92 ^ v88;
    v93 = v180 ^ v156 ^ v213 ^ v215 ^ v201;
    s[0] = v84 ^ v92;
    s[20] = v92 ^ v223;
    v94 = v217 ^ v92;
    v95 = v170 ^ v222 ^ v166 ^ v172 ^ v177;
    v217 = ((2 * v90) | (v89 >> 31)) ^ v95;
    s[30] = v94;
    v96 = ((2 * *(_DWORD *)&v218[8]) | ((unsigned int)v219 >> 31)) ^ v89;
    s[40] = v92 ^ v230;
    s[4] = v221 ^ v96;
    v97 = (__SPAIR64__(v219, *(unsigned int *)&v218[8]) >> 31) ^ v90;
    s[1] = v217 ^ v85;
    v98 = (2 * v231) | (v95 >> 31);
    v99 = ((2 * v95) | (v231 >> 31)) ^ v93;
    v100 = v98 ^ v91;
    v101 = v100 ^ v87;
    v102 = ((2 * *(_DWORD *)v218) | (*(_DWORD *)&v218[4] >> 31)) ^ *(_DWORD *)&v218[8];
    v103 = ((2 * v91) | (v93 >> 31)) ^ *(_DWORD *)v218;
    v104 = ((2 * v93) | (v91 >> 31)) ^ *(_DWORD *)&v218[4];
    v105 = (*(__int64 *)v218 >> 31) ^ v219;
    s[8] = v102 ^ v207;
    s[18] = v102 ^ v211;
    s[28] = v102 ^ v164;
    s[38] = v102 ^ v188;
    s[14] = v96 ^ v153;
    s[5] = v180 ^ v97;
    s[15] = v156 ^ v97;
    s[25] = v213 ^ v97;
    s[35] = v215 ^ v97;
    s[45] = v201 ^ v97;
    s[11] = v208 ^ v217;
    s[21] = v224 ^ v217;
    s[31] = v226 ^ v217;
    s[6] = v203 ^ v100;
    s[16] = v210 ^ v100;
    s[7] = v168 ^ v99;
    s[17] = v158 ^ v99;
    s[26] = v160 ^ v100;
    s[27] = v162 ^ v99;
    s[36] = v229 ^ v100;
    s[37] = v185 ^ v99;
    s[12] = v209 ^ v103;
    v106 = (char *)&unk_FC657;
    s[44] = v96 ^ v197;
    s[22] = HIDWORD(v224) ^ v103;
    s[24] = v96 ^ v212;
    s[34] = v96 ^ v214;
    s[41] = v217 ^ v190;
    s[32] = v227 ^ v103;
    s[2] = HIDWORD(v219) ^ v103;
    s[42] = v103 ^ v150;
    s[13] = v183 ^ v104;
    v107 = v220 ^ v104;
    s[3] = v220 ^ v104;
    s[23] = v225 ^ v104;
    s[33] = v228 ^ v104;
    s[43] = v104 ^ v194;
    v108 = (unsigned __int8 *)&unk_FC63F;
    s[9] = v170 ^ v105;
    s[19] = v222 ^ v105;
    s[29] = v166 ^ v105;
    s[39] = v172 ^ v105;
    s[46] = v101;
    s[47] = v99 ^ v86;
    v109 = HIDWORD(v219) ^ v103;
    s[48] = v102 ^ v174;
    s[49] = v105 ^ v177;
    do
    {
      v111 = *++v106;
      v110 = v111;
      v112 = *++v108;
      v113 = -v110 & 0x3F;
      v114 = v107 << v110;
      v115 = v109 << (v110 - 32);
      v116 = v109 >> (32 - v110);
      v117 = &s[2 * v112];
      v118 = (v109 << v110) | (v109 >> v113) | (v107 << (32 - v113)) | (v107 >> (v113 - 32));
      v119 = v114 | v115 | v116 | (v107 >> v113);
      v107 = v117[1];
      v109 = *v117;
      *v117 = v118;
      v117[1] = v119;
    }
    while ( v7 != v108 );
    v151 = s[2];
    v181 = s[5];
    v120 = s[2] & ~s[0] ^ s[8];
    v121 = s[8] & ~s[6] ^ s[4];
    v122 = s[0] & ~s[8] ^ s[6];
    v123 = s[7] & ~s[5] ^ s[3];
    v170 = s[3] & ~s[1] ^ s[9];
    v168 = s[1] & ~s[9] ^ s[7];
    v178 = s[14] & ~s[12] ^ s[10];
    v183 = s[17] & ~s[15] ^ s[13];
    v124 = s[11];
    s[5] ^= s[9] & ~s[7];
    s[2] ^= s[6] & ~s[4];
    s[9] = v170;
    v125 = s[13] & ~s[11];
    v191 = s[16] ^ s[10] & ~s[18];
    s[11] ^= s[15] & ~s[13];
    v198 = s[12] & ~s[10] ^ s[18];
    v126 = v181 & ~s[3];
    s[12] ^= s[16] & ~s[14];
    v127 = s[4];
    s[8] = v120;
    s[4] = v121;
    s[6] = v122;
    s[3] = v123;
    s[7] = v168;
    s[10] = v178;
    s[13] = v183;
    s[14] ^= s[18] & ~s[16];
    v231 = s[0] ^ v127 & ~v151;
    v233 = s[1] ^ v126;
    v128 = s[19] & ~s[17] ^ s[15];
    v164 = s[22] & ~s[20] ^ s[28];
    v129 = s[20] & ~s[28] ^ s[26];
    v212 = s[28] & ~s[26] ^ s[24];
    *(_QWORD *)&v218[4] = *(_QWORD *)&s[25] & ~*(_QWORD *)&s[23] ^ *(_QWORD *)&s[21];
    v166 = s[23] & ~s[21] ^ s[29];
    v207 = v120;
    v162 = s[21] & ~s[29] ^ s[27];
    LODWORD(v219) = s[27] & ~s[25] ^ s[23];
    HIDWORD(v219) = s[2];
    s[20] ^= s[24] & ~s[22];
    v130 = v124 & ~s[19] ^ s[17];
    s[28] = v164;
    v180 = s[5];
    v131 = s[26] & ~s[24] ^ s[22];
    v226 = s[29] & ~s[27] ^ s[25];
    s[16] = v191;
    s[18] = v198;
    s[19] ^= v125;
    v221 = v121;
    s[17] = v130;
    v203 = v122;
    s[15] = v128;
    v220 = v123;
    LODWORD(v224) = v129;
    s[26] = v129;
    s[22] = v131;
    *(_DWORD *)v218 = v178;
    v209 = s[12];
    s[27] = v162;
    v153 = s[14];
    s[24] = v212;
    v208 = s[11];
    v210 = v191;
    v158 = v130;
    s[21] ^= s[25] & ~s[23];
    s[29] = v166;
    s[23] = v219;
    s[25] = v226;
    v211 = v198;
    v222 = s[19];
    v156 = v128;
    v132 = s[35] & ~s[33] ^ s[31];
    v217 = s[34] & ~s[32] ^ s[30];
    v227 = s[30] & ~s[38] ^ s[36];
    v133 = s[32] & ~s[30] ^ s[38];
    v214 = s[38] & ~s[36] ^ s[34];
    v134 = s[36] & ~s[34] ^ s[32];
    v172 = s[33] & ~s[31] ^ s[39];
    v135 = s[31] & ~s[39] ^ s[37];
    v215 = s[37] & ~s[35] ^ s[33];
    v230 = s[39] & ~s[37] ^ s[35];
    v199 = s[40] ^ s[44] & ~s[42];
    v175 = s[40] & ~s[48] ^ s[46];
    v192 = s[44] ^ s[48] & ~s[46];
    v195 = s[42] & ~s[40] ^ s[48];
    v136 = s[43] & ~s[41] ^ s[49];
    v137 = s[41] ^ s[45] & ~s[43];
    v138 = s[41] & ~s[49] ^ s[47];
    v139 = s[43] ^ s[47] & ~s[45];
    v140 = v216;
    v141 = s[49] & ~s[47] ^ s[45];
    v142 = s[20];
    v150 = s[46] & ~s[44] ^ s[42];
    __pld((void *)(v216 + 16));
    v223 = v142;
    s[30] = v217;
    s[36] = v227;
    v160 = v224;
    s[31] = v132;
    s[32] = v134;
    s[34] = v214;
    v224 = *(_QWORD *)&v218[4];
    s[39] = v172;
    s[35] = v230;
    s[48] = v195;
    v225 = v219;
    s[37] = v135;
    s[42] = v150;
    s[33] = v215;
    s[38] = v133;
    v188 = v133;
    v213 = v226;
    s[40] = v199;
    v143 = v227;
    v227 = v134;
    v229 = v143;
    s[46] = v175;
    v185 = v135;
    s[44] = v192;
    v144 = v230;
    v230 = v199;
    v226 = v132;
    v228 = v215;
    v86 = v138;
    v145 = *(_DWORD *)(v140 + 8);
    v87 = v175;
    v174 = v195;
    s[43] = v139;
    v215 = v144;
    v197 = v192;
    v146 = *(_DWORD *)(v140 + 12);
    v194 = v139;
    v216 = v140 + 8;
    v84 = v145 ^ v231;
    s[45] = v141;
    v85 = v233 ^ v146;
    v201 = v141;
    s[41] = v137;
    s[47] = v138;
    s[49] = v136;
    v190 = v137;
    v177 = v136;
    s[0] = v145 ^ v231;
    s[1] = v233 ^ v146;
  }
  while ( v232 != (_DWORD *)(v140 + 8) );
  if ( n )
    memcpy(dest, s, n);
  return 0;
}
