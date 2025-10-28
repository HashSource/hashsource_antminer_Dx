int __fastcall sub_C0DB4(int a1, char a2, char a3, void *a4, size_t n)
{
  unsigned int v5; // r5
  unsigned int v6; // r4
  unsigned int v7; // r6
  size_t v8; // r5
  unsigned int v9; // r4
  int v10; // r6
  char *v11; // r3
  int *v12; // r6
  int *v13; // r4
  int v14; // r0
  int v15; // r1
  int *v16; // r5
  int v17; // r2
  int v18; // r3
  int v19; // lr
  int v20; // r7
  int v21; // r11
  unsigned int v22; // r9
  unsigned int v23; // r12
  unsigned int v24; // r5
  unsigned int v25; // r7
  unsigned int v26; // r0
  unsigned int v27; // r12
  _QWORD *v28; // r1
  int v29; // lr
  int v30; // r5
  __int64 v31; // kr38_8
  int v32; // r11
  int v33; // r2
  int v34; // r0
  int v35; // r2
  int v36; // r6
  int v37; // r3
  int v38; // r2
  int v39; // r3
  int *v40; // lr
  int v41; // r5
  int *v42; // r3
  unsigned int v43; // r1
  int v44; // r2
  int v45; // r0
  int v46; // r9
  int v47; // r11
  int v48; // r3
  int v49; // r7
  __int64 v50; // kr48_8
  int v51; // lr
  int v52; // r3
  unsigned int v53; // r8
  unsigned int v54; // r1
  __int64 v55; // kr60_8
  int v56; // r2
  int v57; // r9
  int v58; // r5
  int v59; // r7
  int v60; // r9
  int v61; // r6
  __int64 v63; // [sp+0h] [bp-1CCh]
  unsigned int v64; // [sp+Ch] [bp-1C0h]
  int v65; // [sp+Ch] [bp-1C0h]
  int v66; // [sp+Ch] [bp-1C0h]
  unsigned int v67; // [sp+Ch] [bp-1C0h]
  unsigned int v68; // [sp+Ch] [bp-1C0h]
  int v69; // [sp+10h] [bp-1BCh]
  unsigned int v70; // [sp+10h] [bp-1BCh]
  unsigned int v71; // [sp+10h] [bp-1BCh]
  int v72; // [sp+10h] [bp-1BCh]
  unsigned int v73; // [sp+14h] [bp-1B8h]
  unsigned int v74; // [sp+14h] [bp-1B8h]
  int v75; // [sp+14h] [bp-1B8h]
  int v76; // [sp+18h] [bp-1B4h]
  unsigned int v77; // [sp+18h] [bp-1B4h]
  unsigned int v78; // [sp+18h] [bp-1B4h]
  int v79; // [sp+18h] [bp-1B4h]
  int v80; // [sp+1Ch] [bp-1B0h]
  unsigned int v81; // [sp+1Ch] [bp-1B0h]
  unsigned int v82; // [sp+1Ch] [bp-1B0h]
  int v83; // [sp+20h] [bp-1ACh]
  unsigned int v84; // [sp+20h] [bp-1ACh]
  unsigned int v85; // [sp+20h] [bp-1ACh]
  int v86; // [sp+20h] [bp-1ACh]
  int v87; // [sp+24h] [bp-1A8h]
  unsigned int v88; // [sp+24h] [bp-1A8h]
  int v89; // [sp+24h] [bp-1A8h]
  unsigned int v90; // [sp+24h] [bp-1A8h]
  unsigned int v91; // [sp+28h] [bp-1A4h]
  unsigned int v92; // [sp+28h] [bp-1A4h]
  int v93; // [sp+28h] [bp-1A4h]
  char *v94; // [sp+28h] [bp-1A4h]
  _QWORD *v95; // [sp+2Ch] [bp-1A0h]
  unsigned int v96; // [sp+2Ch] [bp-1A0h]
  int v97; // [sp+30h] [bp-19Ch]
  unsigned int v98; // [sp+30h] [bp-19Ch]
  unsigned int v99; // [sp+34h] [bp-198h]
  unsigned int v100; // [sp+34h] [bp-198h]
  _QWORD *v101; // [sp+34h] [bp-198h]
  unsigned int v102; // [sp+38h] [bp-194h]
  unsigned int v103; // [sp+38h] [bp-194h]
  int v104; // [sp+3Ch] [bp-190h]
  unsigned int v105; // [sp+3Ch] [bp-190h]
  unsigned int v106; // [sp+40h] [bp-18Ch]
  int v107; // [sp+40h] [bp-18Ch]
  unsigned int v108; // [sp+44h] [bp-188h]
  int v109; // [sp+44h] [bp-188h]
  unsigned int v110; // [sp+44h] [bp-188h]
  __int64 v111; // [sp+4Ch] [bp-180h]
  int v112; // [sp+54h] [bp-178h]
  int v113; // [sp+54h] [bp-178h]
  int v114; // [sp+58h] [bp-174h]
  unsigned int v115; // [sp+5Ch] [bp-170h]
  unsigned int v116; // [sp+60h] [bp-16Ch]
  int v117; // [sp+60h] [bp-16Ch]
  int v118; // [sp+60h] [bp-16Ch]
  unsigned int v119; // [sp+68h] [bp-164h]
  int v120; // [sp+68h] [bp-164h]
  unsigned int v121; // [sp+68h] [bp-164h]
  int v122; // [sp+6Ch] [bp-160h]
  int v123; // [sp+6Ch] [bp-160h]
  int v124; // [sp+70h] [bp-15Ch]
  int v125; // [sp+70h] [bp-15Ch]
  int v126; // [sp+74h] [bp-158h]
  int v127; // [sp+78h] [bp-154h]
  int v128; // [sp+78h] [bp-154h]
  unsigned int v129; // [sp+78h] [bp-154h]
  __int128 v130; // [sp+7Ch] [bp-150h]
  int v131; // [sp+8Ch] [bp-140h]
  char *v132; // [sp+8Ch] [bp-140h]
  int v133; // [sp+8Ch] [bp-140h]
  _QWORD *v134; // [sp+94h] [bp-138h]
  int v135; // [sp+94h] [bp-138h]
  _DWORD *v136; // [sp+98h] [bp-134h]
  int v137; // [sp+98h] [bp-134h]
  char *v138; // [sp+9Ch] [bp-130h]
  _QWORD *v139; // [sp+A0h] [bp-12Ch]
  _DWORD *v140; // [sp+A0h] [bp-12Ch]
  _DWORD *v141; // [sp+A4h] [bp-128h]
  _QWORD *v142; // [sp+A4h] [bp-128h]
  char *v143; // [sp+A8h] [bp-124h]
  int v144; // [sp+A8h] [bp-124h]
  _DWORD *v145; // [sp+A8h] [bp-124h]
  int v146; // [sp+ACh] [bp-120h]
  _DWORD *v147; // [sp+ACh] [bp-120h]
  int v148; // [sp+B0h] [bp-11Ch]
  _QWORD *v149; // [sp+B0h] [bp-11Ch]
  _DWORD *v150; // [sp+B0h] [bp-11Ch]
  int v151; // [sp+B4h] [bp-118h]
  _QWORD *v152; // [sp+B4h] [bp-118h]
  _QWORD *v153; // [sp+B4h] [bp-118h]
  _QWORD *v154; // [sp+B8h] [bp-114h]
  _DWORD *v155; // [sp+B8h] [bp-114h]
  int v156; // [sp+BCh] [bp-110h]
  _DWORD *v157; // [sp+BCh] [bp-110h]
  char *v158; // [sp+C0h] [bp-10Ch]
  int v159; // [sp+C4h] [bp-108h]
  _DWORD *v160; // [sp+C4h] [bp-108h]
  int v161; // [sp+C8h] [bp-104h]
  _QWORD *v162; // [sp+C8h] [bp-104h]
  int v163; // [sp+CCh] [bp-100h]
  _DWORD *v164; // [sp+CCh] [bp-100h]
  int v165; // [sp+D0h] [bp-FCh]
  int v166; // [sp+D4h] [bp-F8h]
  int v167; // [sp+D8h] [bp-F4h]
  int v168; // [sp+DCh] [bp-F0h]
  int v169; // [sp+E0h] [bp-ECh]
  int v170; // [sp+E4h] [bp-E8h]
  int v171; // [sp+E8h] [bp-E4h]
  unsigned int v172; // [sp+ECh] [bp-E0h]
  int v175; // [sp+100h] [bp-CCh] BYREF
  int v176; // [sp+104h] [bp-C8h]
  int v177; // [sp+108h] [bp-C4h]
  int v178; // [sp+10Ch] [bp-C0h]
  int v179; // [sp+110h] [bp-BCh]
  int v180; // [sp+114h] [bp-B8h]
  int v181; // [sp+118h] [bp-B4h]
  int v182; // [sp+11Ch] [bp-B0h]
  __int128 v183; // [sp+120h] [bp-ACh]
  __int64 v184; // [sp+130h] [bp-9Ch]
  unsigned int v185; // [sp+138h] [bp-94h]
  int v186; // [sp+13Ch] [bp-90h]
  int v187; // [sp+140h] [bp-8Ch]
  int v188; // [sp+144h] [bp-88h]
  int v189; // [sp+148h] [bp-84h]
  int v190; // [sp+14Ch] [bp-80h]
  int v191; // [sp+150h] [bp-7Ch]
  int v192; // [sp+154h] [bp-78h]
  int v193; // [sp+158h] [bp-74h]
  int v194; // [sp+15Ch] [bp-70h]
  __int128 v195; // [sp+160h] [bp-6Ch]
  __int64 v196; // [sp+170h] [bp-5Ch]
  unsigned int v197; // [sp+178h] [bp-54h]
  int v198; // [sp+17Ch] [bp-50h]
  _DWORD s[19]; // [sp+180h] [bp-4Ch] BYREF

  v5 = *(_DWORD *)(a1 + 64);
  v6 = *(_DWORD *)(a1 + 136);
  v7 = *(_DWORD *)(a1 + 140);
  LOBYTE(s[0]) = (128 >> a3) | a2 & -(128 >> a3);
  if ( v5 > 0x37 )
  {
    v8 = 128 - v5;
    v10 = (__PAIR64__(v7, v6) + 2) >> 32;
    v9 = v6 + 2;
  }
  else
  {
    v8 = 64 - v5;
    v10 = (__PAIR64__(v7, v6) + 1) >> 32;
    v9 = v6 + 1;
  }
  memset((char *)s + 1, 0, v8 - 9);
  *(_DWORD *)((char *)&s[-2] + v8) = HIBYTE(v10)
                                   | (unsigned __int16)(BYTE2(v10) << 8)
                                   | (BYTE1(v10) << 16) & 0xFFFFFF
                                   | ((unsigned __int8)v10 << 24);
  v11 = (char *)&s[-2] + v8;
  v11[7] = v9;
  v11[5] = BYTE2(v9);
  v11[6] = BYTE1(v9);
  v12 = &v175;
  v11[4] = HIBYTE(v9);
  v13 = (int *)(a1 + 72);
  sph_groestl256_0((__int64 *)a1, (char *)s, v8);
  do
  {
    v14 = *v13;
    v13 += 4;
    v15 = *(v13 - 3);
    v16 = v12;
    v17 = *(v13 - 2);
    v12 += 4;
    v18 = *(v13 - 1);
    *v16 = v14;
    v16[1] = v15;
    v16[2] = v17;
    v16[3] = v18;
  }
  while ( v13 != (int *)(a1 + 136) );
  v187 = v175;
  v188 = v176;
  v189 = v177;
  v190 = v178;
  v63 = 0;
  v191 = v179;
  v192 = v180;
  v193 = v181;
  v194 = v182;
  v195 = v183;
  v196 = v184;
  v197 = v185;
  v198 = v186;
  v80 = v175;
  v19 = v181;
  v20 = v179;
  v87 = v176;
  v69 = v177;
  v130 = v183;
  v83 = v182;
  v111 = v184;
  v112 = v185;
  v131 = v186;
  v21 = v178;
  v76 = v180;
  do
  {
    v64 = v80 ^ v63;
    v22 = ((unsigned __int64)(v63 + 32) >> 32) ^ v76;
    v73 = ((unsigned __int64)(v63 + 16) >> 32) ^ v21;
    v77 = (v63 + 48) ^ v19;
    v23 = ((unsigned __int64)(v63 + 48) >> 32) ^ v83;
    v84 = DWORD1(v130) ^ ((unsigned __int64)(v63 + 64) >> 32);
    v81 = v23;
    v99 = v112 ^ (v63 + 112);
    v116 = v130 ^ (v63 + 64);
    v24 = v87 ^ HIDWORD(v63);
    v70 = v69 ^ (v63 + 16);
    v25 = v20 ^ (v63 + 32);
    v102 = v131 ^ ((unsigned __int64)(v63 + 112) >> 32);
    v119 = DWORD2(v130) ^ (v63 + 80);
    v88 = HIDWORD(v130) ^ ((unsigned __int64)(v63 + 80) >> 32);
    v108 = HIBYTE(v119);
    v91 = ((unsigned __int64)(v63 + 96) >> 32) ^ HIDWORD(v111);
    v26 = v23;
    v27 = HIBYTE(v24);
    v106 = HIBYTE(v73);
    HIDWORD(v111) = HIBYTE(v26);
    v115 = HIBYTE(v64);
    HIDWORD(v130) = (char *)&unk_108E80 + 8 * HIBYTE(v73);
    v132 = (char *)&unk_10A680 + 8 * HIBYTE(v119);
    v172 = HIBYTE(v91);
    v136 = (_DWORD *)((char *)&unk_10A680 + 8 * (((unsigned int)v111 ^ ((_DWORD)v63 + 96)) >> 24));
    v138 = (char *)&unk_108E80 + 8 * HIBYTE(v26);
    v141 = (_DWORD *)((char *)&unk_10A680 + 8 * HIBYTE(v99));
    v143 = (char *)&unk_10A680 + 8 * HIBYTE(v64);
    v151 = *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v116) + 1);
    v148 = *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v116));
    v28 = &qword_109778[BYTE1(v70)];
    v122 = ((unsigned __int64)(v63 + 17) >> 32) ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v24) + 1);
    v104 = BYTE2(v77);
    v29 = BYTE1(v91);
    v161 = (unsigned __int8)v91;
    v156 = BYTE2(v24);
    DWORD2(v130) = HIBYTE(v25);
    v166 = (unsigned __int8)v77;
    v95 = &qword_109778[BYTE1(v77)];
    v159 = BYTE2(v116);
    v163 = BYTE1(v102);
    v168 = (unsigned __int8)v102;
    v165 = BYTE1(v24);
    v170 = (unsigned __int8)v24;
    v171 = (unsigned __int8)(v130 ^ (v63 + 64));
    v134 = &qword_109778[BYTE1(v116)];
    v30 = *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v91));
    v167 = BYTE2(v119);
    v169 = BYTE2(v73);
    v117 = (unsigned __int8)v119;
    v139 = &qword_109778[BYTE1(v119)];
    v92 = *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v64 + 1)
        ^ ((unsigned __int64)(v63 + 1) >> 32)
        ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v102) + 1)
        ^ *((_DWORD *)v28 - 61)
        ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v25) + 1)
        ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v77) + 1)
        ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v84 + 1)
        ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v88) + 1)
        ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v91) + 1);
    v78 = *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v64)
        ^ (v63 + 1)
        ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v102))
        ^ *((_DWORD *)v28 - 62)
        ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v25))
        ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v77))
        ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v84)
        ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v88))
        ^ v30;
    v31 = qword_109778[BYTE1(v25) - 31];
    v32 = (unsigned __int8)(((unsigned int)v111 ^ ((_DWORD)v63 + 96)) >> 16);
    v33 = *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v70 + 1)
        ^ v122
        ^ HIDWORD(v31)
        ^ *((_DWORD *)&unk_109E80 + 2 * v104 + 1);
    v97 = BYTE1(v73);
    v34 = *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v70)
        ^ (v63 + 17)
        ^ *((_DWORD *)&unk_108E80 + 2 * v27)
        ^ v31
        ^ *((_DWORD *)&unk_109E80 + 2 * v104)
        ^ v148
        ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v88);
    v123 = (unsigned __int8)v73;
    v127 = (unsigned __int8)(v111 ^ (v63 + 96));
    v149 = &qword_109778[(unsigned __int8)((unsigned __int16)(v111 ^ (v63 + 96)) >> 8)];
    v120 = BYTE2(v99);
    v35 = v33 ^ v151 ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v88 + 1) ^ *((_DWORD *)&unk_10B680 + 2 * v29 + 1);
    LODWORD(v130) = (unsigned __int8)v22;
    v36 = BYTE1(v64);
    v65 = BYTE2(v64);
    v154 = &qword_109778[v36];
    DWORD1(v130) = (unsigned __int8)(v112 ^ (v63 + 112));
    v152 = &qword_109778[BYTE1(v99)];
    v37 = *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v102) + 1);
    v103 = *((_DWORD *)&unk_10B680 + 2 * v29) ^ v34 ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v102));
    v74 = v35 ^ v37;
    v105 = *((_DWORD *)&unk_10BE80 + 2 * v156)
         ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v25)
         ^ (v63 + 33)
         ^ *((_DWORD *)&unk_108E80 + 2 * v106)
         ^ *((_DWORD *)v95 - 62)
         ^ *((_DWORD *)&unk_109E80 + 2 * v159)
         ^ *((_DWORD *)&unk_10A680 + 2 * v108)
         ^ *((_DWORD *)&unk_10AE80 + 2 * v161)
         ^ *((_DWORD *)&unk_10B680 + 2 * v163);
    v96 = *((_DWORD *)v95 - 61)
        ^ *((_DWORD *)&unk_10BE80 + 2 * v156 + 1)
        ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v25 + 1)
        ^ (__CFADD__((_DWORD)v63, 33) + HIDWORD(v63))
        ^ *(_DWORD *)(HIDWORD(v130) + 4)
        ^ *((_DWORD *)&unk_109E80 + 2 * v159 + 1)
        ^ *((_DWORD *)v132 + 1)
        ^ *((_DWORD *)&unk_10AE80 + 2 * v161 + 1)
        ^ *((_DWORD *)&unk_10B680 + 2 * v163 + 1);
    v38 = *((_DWORD *)&unk_10B680 + 2 * v165 + 1)
        ^ *((_DWORD *)&unk_108680 + 2 * v166 + 1)
        ^ ((unsigned __int64)(v63 + 49) >> 32)
        ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v22) + 1)
        ^ *((_DWORD *)v134 - 61)
        ^ *((_DWORD *)&unk_109E80 + 2 * v167 + 1)
        ^ v136[1];
    v39 = (v63 + 49)
        ^ *((_DWORD *)&unk_10B680 + 2 * v165)
        ^ *((_DWORD *)&unk_108680 + 2 * v166)
        ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v22))
        ^ *((_DWORD *)v134 - 62)
        ^ *((_DWORD *)&unk_109E80 + 2 * v167)
        ^ *v136
        ^ *((_DWORD *)&unk_10AE80 + 2 * v168);
    v135 = *((_DWORD *)&unk_10B680 + 2 * v97 + 1);
    v137 = *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v22) + 1);
    v113 = *((_DWORD *)&unk_10B680 + 2 * v97);
    v114 = *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v22));
    v100 = v38 ^ *((_DWORD *)&unk_10AE80 + 2 * v168 + 1) ^ *((_DWORD *)&unk_10BE80 + 2 * v169 + 1);
    v40 = (int *)((char *)&unk_10B680 + 8 * BYTE1(v22));
    v41 = *((_DWORD *)&unk_10A680 + 2 * v115) ^ *((_DWORD *)&unk_108680 + 2 * v117);
    v98 = v39 ^ *((_DWORD *)&unk_10BE80 + 2 * v169);
    v42 = (int *)((char *)&unk_10BE80 + 8 * BYTE2(v81));
    v124 = *v40;
    LODWORD(v111) = *((_DWORD *)&unk_108680 + 2 * v117 + 1) ^ *((_DWORD *)v143 + 1);
    v144 = v40[1];
    v43 = v88;
    v126 = *v42;
    v89 = BYTE2(v88);
    v146 = v42[1];
    v44 = *((_DWORD *)&unk_109E80 + 2 * v65 + 1) ^ *((_DWORD *)&unk_108680 + 2 * v127 + 1);
    v45 = *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v84));
    v109 = *((_DWORD *)&unk_10AE80 + 2 * v170 + 1)
         ^ *((_DWORD *)&unk_108680 + 2 * v171 + 1)
         ^ ((unsigned __int64)(v63 + 65) >> 32)
         ^ *((_DWORD *)v138 + 1)
         ^ *((_DWORD *)v139 - 61)
         ^ *((_DWORD *)&unk_109E80 + 2 * v32 + 1);
    v107 = *((_DWORD *)&unk_10AE80 + 2 * v170)
         ^ *((_DWORD *)&unk_108680 + 2 * v171)
         ^ (v63 + 65)
         ^ *((_DWORD *)&unk_108E80 + 2 * HIDWORD(v111))
         ^ *((_DWORD *)v139 - 62)
         ^ *((_DWORD *)&unk_109E80 + 2 * v32);
    v46 = *((_DWORD *)v154 - 62) ^ *((_DWORD *)&unk_108680 + 2 * DWORD1(v130));
    v47 = *((_DWORD *)v154 - 61) ^ *((_DWORD *)&unk_108680 + 2 * DWORD1(v130) + 1);
    DWORD1(v130) = *((_DWORD *)&unk_109E80 + 2 * BYTE2(v70));
    v133 = *((_DWORD *)&unk_109E80 + 2 * BYTE2(v70) + 1);
    v48 = *((_DWORD *)&unk_108680 + 2 * v127)
        ^ *((_DWORD *)&unk_109E80 + 2 * v65)
        ^ (v63 + 97)
        ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v43));
    v49 = (unsigned __int8)v81;
    v50 = *(v152 - 31);
    v66 = BYTE2(v84);
    v118 = *((_DWORD *)&unk_10B680 + 2 * BYTE1(v84));
    v51 = *((_DWORD *)&unk_10BE80 + 2 * v89 + 1);
    v128 = *((_DWORD *)&unk_10BE80 + 2 * v89);
    v52 = v48
        ^ v50
        ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v70))
        ^ *((_DWORD *)&unk_10AE80 + 2 * v130)
        ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v81));
    v53 = v44
        ^ ((unsigned __int64)(v63 + 97) >> 32)
        ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v43) + 1)
        ^ HIDWORD(v50)
        ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v70) + 1)
        ^ *((_DWORD *)&unk_10AE80 + 2 * v130 + 1)
        ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v81) + 1)
        ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v84) + 1);
    v90 = v109 ^ v141[1] ^ v135 ^ v137;
    v71 = *v141 ^ v107 ^ v113 ^ v114;
    v54 = v111
        ^ (__CFADD__((_DWORD)v63, 81) + HIDWORD(v63))
        ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v84) + 1)
        ^ *((_DWORD *)v149 - 61)
        ^ *((_DWORD *)&unk_109E80 + 2 * v120 + 1)
        ^ *((_DWORD *)&unk_10AE80 + 2 * v123 + 1)
        ^ v144
        ^ v146;
    v85 = v47
        ^ ((unsigned __int64)(v63 + 113) >> 32)
        ^ *((_DWORD *)&unk_108E80 + 2 * v172 + 1)
        ^ v133
        ^ *((_DWORD *)&unk_10A680 + 2 * DWORD2(v130) + 1)
        ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v81 + 1)
        ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v84) + 1)
        ^ v51;
    v82 = v41
        ^ (v63 + 81)
        ^ v45
        ^ *((_DWORD *)v149 - 62)
        ^ *((_DWORD *)&unk_109E80 + 2 * v120)
        ^ *((_DWORD *)&unk_10AE80 + 2 * v123)
        ^ v124
        ^ v126;
    v67 = *((_DWORD *)&unk_10BE80 + 2 * v66) ^ v52;
    v110 = v118
         ^ DWORD1(v130)
         ^ v46
         ^ (v63 + 113)
         ^ *((_DWORD *)&unk_108E80 + 2 * v172)
         ^ *((_DWORD *)&unk_10A680 + 2 * DWORD2(v130))
         ^ *((_DWORD *)&unk_10AE80 + 2 * v49)
         ^ v128;
    v121 = HIBYTE(v74);
    v145 = (_DWORD *)((char *)&unk_108E80 + 8 * HIBYTE(v85));
    v147 = (_DWORD *)((char *)&unk_10A680 + 8 * HIBYTE(v98));
    v150 = (_DWORD *)((char *)&unk_108E80 + 8 * HIBYTE(v92));
    v155 = (_DWORD *)((char *)&unk_10A680 + 8 * HIBYTE(v71));
    v63 += 2;
    v125 = BYTE2(v74);
    v129 = HIBYTE(v67);
    *(_QWORD *)&v130 = *((_QWORD *)&unk_108680 + (unsigned __int8)(*(_BYTE *)v141 ^ v107 ^ v113 ^ v114))
                     ^ *((_QWORD *)&unk_10AE80 + (unsigned __int8)v92)
                     ^ *((_QWORD *)&unk_10B680 + BYTE1(v74))
                     ^ *((_QWORD *)&unk_108E80 + HIBYTE(v100))
                     ^ qword_109778[BYTE1(v82) - 31]
                     ^ *((_QWORD *)&unk_109E80 + BYTE2(v67))
                     ^ *((_QWORD *)&unk_10A680 + HIBYTE(v110))
                     ^ *((_QWORD *)&unk_10BE80 + BYTE2(v96));
    v142 = &qword_109778[BYTE1(v103)];
    v153 = &qword_109778[BYTE1(v105)];
    *((_QWORD *)&v130 + 1) = *((_QWORD *)&unk_108680 + (unsigned __int8)v82)
                           ^ *((_QWORD *)&unk_10A680 + HIBYTE(v78))
                           ^ *((_QWORD *)&unk_10AE80 + (unsigned __int8)v74)
                           ^ *((_QWORD *)&unk_108E80 + HIBYTE(v90))
                           ^ qword_109778[BYTE1(v67) - 31]
                           ^ *((_QWORD *)&unk_109E80 + BYTE2(v110))
                           ^ *((_QWORD *)&unk_10B680 + BYTE1(v96))
                           ^ *((_QWORD *)&unk_10BE80 + BYTE2(v100));
    BYTE1(v41) = BYTE1(v92);
    v93 = BYTE2(v92);
    v162 = &qword_109778[BYTE1(v98)];
    v55 = qword_109778[BYTE1(v78) - 31];
    v111 = *((_QWORD *)&unk_108680 + (unsigned __int8)v67)
         ^ *((_QWORD *)&unk_109E80 + BYTE2(v78))
         ^ *((_QWORD *)&unk_10A680 + HIBYTE(v103))
         ^ *((_QWORD *)&unk_108E80 + HIBYTE(v54))
         ^ qword_109778[BYTE1(v110) - 31]
         ^ *((_QWORD *)&unk_10AE80 + (unsigned __int8)v96)
         ^ *((_QWORD *)&unk_10B680 + BYTE1(v100))
         ^ *((_QWORD *)&unk_10BE80 + BYTE2(v90));
    v140 = (_DWORD *)((char *)&unk_10B680 + 8 * BYTE1(v53));
    v157 = (_DWORD *)((char *)&unk_10BE80 + 8 * BYTE2(v85));
    v158 = (char *)&unk_10BE80 + 8 * v93;
    v160 = (_DWORD *)((char *)&unk_108680 + 8 * (unsigned __int8)v105);
    v164 = (_DWORD *)((char *)&unk_10B680 + 8 * BYTE1(v41));
    v112 = *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v110)
         ^ v55
         ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v103))
         ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v53))
         ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v105))
         ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v100)
         ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v90))
         ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v54));
    v131 = *((_DWORD *)&unk_109E80 + 2 * BYTE2(v103) + 1)
         ^ HIDWORD(v55)
         ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v110 + 1)
         ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v53) + 1)
         ^ *((_DWORD *)&unk_10A680 + 2 * HIBYTE(v105) + 1)
         ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v100 + 1)
         ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v90) + 1)
         ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v54) + 1);
    v56 = *((_DWORD *)&unk_10B680 + 2 * BYTE1(v54))
        ^ *((_DWORD *)v142 - 62)
        ^ *v145
        ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v78)
        ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v105))
        ^ *v147
        ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v90);
    v87 = *((_DWORD *)v142 - 61)
        ^ v145[1]
        ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v78 + 1)
        ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v105) + 1)
        ^ v147[1]
        ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v90 + 1)
        ^ *((_DWORD *)&unk_10B680 + 2 * BYTE1(v54) + 1)
        ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v53) + 1);
    v57 = BYTE2(v71);
    v68 = HIBYTE(v82);
    v101 = &qword_109778[BYTE1(v71)];
    v75 = BYTE2(v82);
    v80 = v56 ^ *((_DWORD *)&unk_10BE80 + 2 * BYTE2(v53));
    v58 = v93;
    v94 = (char *)&unk_109E80 + 8 * BYTE2(v71);
    v72 = BYTE1(v85);
    v79 = (unsigned __int8)v85;
    v59 = BYTE1(v85);
    v86 = *((_DWORD *)&unk_109E80 + 2 * v57);
    v60 = *((_DWORD *)&unk_10B680 + 2 * v59 + 1);
    v61 = *((_DWORD *)&unk_10AE80 + 2 * v79 + 1);
    v19 = *((_DWORD *)v101 - 62)
        ^ *v164
        ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v98)
        ^ *((_DWORD *)&unk_10BE80 + 2 * v125)
        ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v96))
        ^ *((_DWORD *)&unk_109E80 + 2 * v75)
        ^ *((_DWORD *)&unk_10A680 + 2 * v129)
        ^ *((_DWORD *)&unk_10AE80 + 2 * v79);
    v20 = *((_DWORD *)&unk_10B680 + 2 * v72)
        ^ *v160
        ^ *((_DWORD *)&unk_10BE80 + 2 * v58)
        ^ *((_DWORD *)&unk_108E80 + 2 * v121)
        ^ *((_DWORD *)v162 - 62)
        ^ v86
        ^ *((_DWORD *)&unk_10A680 + 2 * v68)
        ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v53);
    v21 = *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v103 + 1)
        ^ v150[1]
        ^ *((_DWORD *)v153 - 61)
        ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v98) + 1)
        ^ v155[1]
        ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v54 + 1)
        ^ v140[1]
        ^ v157[1];
    v69 = *v157
        ^ *((_DWORD *)&unk_109E80 + 2 * BYTE2(v98))
        ^ *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v103)
        ^ *v150
        ^ *((_DWORD *)v153 - 62)
        ^ *v155
        ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v54)
        ^ *v140;
    v76 = *((_DWORD *)v158 + 1)
        ^ v160[1]
        ^ *((_DWORD *)&unk_108E80 + 2 * v121 + 1)
        ^ *((_DWORD *)v162 - 61)
        ^ *((_DWORD *)v94 + 1)
        ^ *((_DWORD *)&unk_10A680 + 2 * v68 + 1)
        ^ *((_DWORD *)&unk_10AE80 + 2 * (unsigned __int8)v53 + 1)
        ^ v60;
    v83 = *((_DWORD *)&unk_108680 + 2 * (unsigned __int8)v98 + 1)
        ^ v164[1]
        ^ *((_DWORD *)&unk_10BE80 + 2 * v125 + 1)
        ^ *((_DWORD *)&unk_108E80 + 2 * HIBYTE(v96) + 1)
        ^ *((_DWORD *)v101 - 61)
        ^ *((_DWORD *)&unk_109E80 + 2 * v75 + 1)
        ^ *((_DWORD *)&unk_10A680 + 2 * v129 + 1)
        ^ v61;
  }
  while ( v63 != 10 );
  s[0] = (unsigned __int8)(v130 ^ v183)
       | (unsigned __int16)((unsigned __int8)((unsigned __int16)(v130 ^ v183) >> 8) << 8)
       | ((unsigned __int8)(((unsigned int)v130 ^ (unsigned int)v183) >> 16) << 16) & 0xFFFFFF
       | (((unsigned int)v130 ^ (unsigned int)v183) >> 24 << 24);
  s[2] = (unsigned __int8)(BYTE8(v130) ^ BYTE8(v183))
       | (unsigned __int16)((unsigned __int8)((unsigned __int16)(WORD4(v130) ^ WORD4(v183)) >> 8) << 8)
       | ((unsigned __int8)((unsigned int)(DWORD2(v130) ^ DWORD2(v183)) >> 16) << 16) & 0xFFFFFF
       | ((unsigned int)(DWORD2(v130) ^ DWORD2(v183)) >> 24 << 24);
  s[4] = (unsigned __int8)(v111 ^ v184)
       | (unsigned __int16)((unsigned __int8)((unsigned __int16)(v111 ^ v184) >> 8) << 8)
       | ((unsigned __int8)(((unsigned int)v111 ^ (unsigned int)v184) >> 16) << 16) & 0xFFFFFF
       | (((unsigned int)v111 ^ (unsigned int)v184) >> 24 << 24);
  s[6] = (unsigned __int8)(v112 ^ v185)
       | (unsigned __int16)((unsigned __int8)((unsigned __int16)(v112 ^ v185) >> 8) << 8)
       | ((unsigned __int8)((v112 ^ v185) >> 16) << 16) & 0xFFFFFF
       | ((v112 ^ v185) >> 24 << 24);
  s[5] = (unsigned __int8)(BYTE4(v111) ^ BYTE4(v184))
       | (unsigned __int16)((unsigned __int8)((unsigned __int16)(WORD2(v111) ^ WORD2(v184)) >> 8) << 8)
       | ((unsigned __int8)((unsigned int)(HIDWORD(v111) ^ HIDWORD(v184)) >> 16) << 16) & 0xFFFFFF
       | ((unsigned int)(HIDWORD(v111) ^ HIDWORD(v184)) >> 24 << 24);
  s[3] = (unsigned __int8)(BYTE12(v130) ^ BYTE12(v183))
       | (unsigned __int16)((unsigned __int8)((unsigned __int16)(WORD6(v130) ^ WORD6(v183)) >> 8) << 8)
       | ((unsigned __int8)((unsigned int)(HIDWORD(v130) ^ HIDWORD(v183)) >> 16) << 16) & 0xFFFFFF
       | ((unsigned int)(HIDWORD(v130) ^ HIDWORD(v183)) >> 24 << 24);
  s[7] = (unsigned __int8)(v131 ^ v186)
       | (unsigned __int16)((unsigned __int8)((unsigned __int16)(v131 ^ v186) >> 8) << 8)
       | ((unsigned __int8)((v131 ^ (unsigned int)v186) >> 16) << 16) & 0xFFFFFF
       | ((v131 ^ (unsigned int)v186) >> 24 << 24);
  s[1] = (unsigned __int8)(BYTE4(v130) ^ BYTE4(v183))
       | (unsigned __int16)((unsigned __int8)((unsigned __int16)(WORD2(v130) ^ WORD2(v183)) >> 8) << 8)
       | ((unsigned __int8)((unsigned int)(DWORD1(v130) ^ DWORD1(v183)) >> 16) << 16) & 0xFFFFFF
       | ((unsigned int)(DWORD1(v130) ^ DWORD1(v183)) >> 24 << 24);
  memcpy(a4, (char *)s + 32 - n, n);
  *(_DWORD *)(a1 + 64) = 0;
  memset((void *)(a1 + 72), 0, 0x38u);
  *(_DWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 132) = (n << 11) & 0xFF0000 | (n << 27);
  return 0;
}
