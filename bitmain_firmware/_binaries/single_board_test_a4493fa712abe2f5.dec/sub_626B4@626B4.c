unsigned int __fastcall sub_626B4(int a1, char a2, char a3, unsigned int *a4, int a5)
{
  int v5; // r6
  int v7; // r6
  int v8; // r4
  int v9; // r0
  unsigned int v10; // r9
  unsigned int v11; // r11
  int v12; // r8
  unsigned int v13; // r12
  unsigned int v14; // r3
  unsigned int v15; // r10
  unsigned int v16; // r7
  int v17; // r5
  int v18; // r2
  int v19; // r6
  int v20; // r4
  int v21; // r4
  int v22; // r2
  int v23; // r12
  int v24; // r7
  int v25; // r0
  int v26; // r6
  int v27; // r5
  int v28; // r3
  int v29; // r10
  int v30; // r7
  int v31; // r1
  int v32; // r2
  int v33; // r4
  int v34; // r0
  int v35; // r8
  int v36; // r2
  int v37; // lr
  int v38; // r9
  int v39; // r4
  int v40; // r1
  int v41; // r0
  int v42; // r11
  int v43; // r3
  int v44; // r12
  int v45; // r1
  int v46; // r2
  int v47; // lr
  int v48; // r9
  int v49; // r3
  int v50; // r6
  int v51; // r2
  int v52; // r0
  int v53; // r7
  int v54; // r5
  int v55; // r4
  int v56; // r0
  int v57; // r3
  int v58; // r2
  int v59; // lr
  int v60; // r6
  int v61; // r8
  int v62; // r0
  int v63; // r4
  int v64; // r7
  int v65; // r12
  int v66; // r9
  int v67; // r3
  int v68; // r8
  int v69; // r0
  int v70; // r2
  int v71; // r5
  int v72; // r4
  int v73; // r1
  int v74; // r6
  int v75; // r2
  int v76; // lr
  int v77; // r10
  int v78; // r4
  int v79; // r1
  int v80; // r0
  int v81; // r11
  int v82; // r3
  int v83; // r12
  int v84; // r1
  int v85; // r2
  int v86; // lr
  int v87; // r10
  int v88; // r3
  int v89; // r5
  int v90; // r2
  int v91; // r0
  int v92; // r7
  int v93; // r6
  int v94; // r4
  int v95; // r0
  int v96; // r3
  int v97; // r2
  int v98; // lr
  int v99; // r5
  int v100; // r8
  int v101; // r0
  int v102; // r4
  int v103; // r7
  int v104; // r12
  int v105; // r10
  int v106; // r3
  unsigned int v107; // r8
  int v108; // r0
  int v109; // r2
  int v110; // r1
  int v111; // r5
  int v112; // r6
  int v113; // r2
  int v114; // lr
  int v115; // r9
  int v116; // r5
  int v117; // r1
  int v118; // r0
  int v119; // r11
  int v120; // r3
  int v121; // r12
  int v122; // r1
  int v123; // r2
  int v124; // lr
  int v125; // r9
  int v126; // r3
  int v127; // r4
  int v128; // r2
  int v129; // r0
  int v130; // r7
  int v131; // r6
  int v132; // r5
  int v133; // r0
  int v134; // r3
  int v135; // r2
  int v136; // lr
  int v137; // r4
  int v138; // r8
  int v139; // r0
  int v140; // r5
  int v141; // r7
  int v142; // r12
  unsigned int result; // r0
  int v144; // [sp+4h] [bp-88h]
  int v145; // [sp+4h] [bp-88h]
  int v146; // [sp+4h] [bp-88h]
  int v147; // [sp+4h] [bp-88h]
  int v148; // [sp+4h] [bp-88h]
  int v149; // [sp+4h] [bp-88h]
  int v150; // [sp+4h] [bp-88h]
  int v152; // [sp+10h] [bp-7Ch]
  int v153; // [sp+10h] [bp-7Ch]
  int v154; // [sp+14h] [bp-78h]
  int v155; // [sp+14h] [bp-78h]
  int v156; // [sp+18h] [bp-74h]
  int v157; // [sp+1Ch] [bp-70h]
  int v158; // [sp+1Ch] [bp-70h]
  int v159; // [sp+20h] [bp-6Ch]
  int v160; // [sp+20h] [bp-6Ch]
  unsigned __int64 v161; // [sp+24h] [bp-68h]
  int v163; // [sp+2Ch] [bp-60h]
  int v164; // [sp+2Ch] [bp-60h]
  int v165; // [sp+30h] [bp-5Ch]
  int v166; // [sp+30h] [bp-5Ch]
  int v167; // [sp+34h] [bp-58h]
  int v168; // [sp+34h] [bp-58h]
  unsigned int v169; // [sp+38h] [bp-54h]
  unsigned int v170; // [sp+38h] [bp-54h]
  int v171; // [sp+3Ch] [bp-50h]
  int v172; // [sp+3Ch] [bp-50h]
  int v173; // [sp+40h] [bp-4Ch]
  int v174; // [sp+40h] [bp-4Ch]
  int v175; // [sp+44h] [bp-48h]
  int v176; // [sp+44h] [bp-48h]
  int v177; // [sp+48h] [bp-44h]
  int v178; // [sp+48h] [bp-44h]
  int v179; // [sp+4Ch] [bp-40h]
  int v180; // [sp+4Ch] [bp-40h]
  int v181; // [sp+50h] [bp-3Ch]
  int v182; // [sp+50h] [bp-3Ch]
  int v183; // [sp+50h] [bp-3Ch]
  int v184; // [sp+54h] [bp-38h]
  int v185; // [sp+54h] [bp-38h]
  int v186; // [sp+58h] [bp-34h]
  int v187; // [sp+58h] [bp-34h]
  int v188; // [sp+5Ch] [bp-30h]
  int v189; // [sp+5Ch] [bp-30h]
  unsigned int v190; // [sp+60h] [bp-2Ch]
  int v191; // [sp+60h] [bp-2Ch]
  int v192; // [sp+64h] [bp-28h]
  int v193; // [sp+68h] [bp-24h]
  int v194; // [sp+6Ch] [bp-20h]
  unsigned int v195; // [sp+70h] [bp-1Ch]
  int v196; // [sp+74h] [bp-18h]
  int v197; // [sp+78h] [bp-14h]
  int v198; // [sp+80h] [bp-Ch]

  v5 = *(_DWORD *)(a1 + 32);
  *(_BYTE *)(a1 + v5) = (128 >> a3) | a2 & -(128 >> a3);
  memset((void *)(v5 + 1 + a1), 0, 31 - v5);
  v193 = *(_DWORD *)(a1 + 44);
  v7 = *(_DWORD *)(a1 + 48);
  v194 = *(_DWORD *)(a1 + 36);
  v159 = *(_DWORD *)(a1 + 52);
  v192 = *(_DWORD *)(a1 + 40);
  v196 = 2;
  v156 = *(_DWORD *)(a1 + 56);
  v157 = *(_DWORD *)(a1 + 60);
  v165 = *(_DWORD *)(a1 + 64);
  v154 = *(_DWORD *)(a1 + 68);
  v177 = *(_DWORD *)(a1 + 72);
  v181 = *(_DWORD *)(a1 + 76);
  v179 = *(_DWORD *)(a1 + 88);
  v184 = *(_DWORD *)(a1 + 92);
  v175 = *(_DWORD *)(a1 + 100);
  v167 = *(_DWORD *)(a1 + 104);
  v161 = *(_QWORD *)(a1 + 80);
  v171 = *(_DWORD *)(a1 + 108);
  v8 = *(_DWORD *)(a1 + 112);
  v9 = *(_DWORD *)(a1 + 128);
  v163 = v9;
  v186 = *(_DWORD *)(a1 + 96);
  v152 = *(_DWORD *)(a1 + 116);
  v169 = *(_DWORD *)(a1 + 120);
  v173 = *(_DWORD *)(a1 + 124);
  while ( 1 )
  {
    v195 = bswap32(*(_DWORD *)(a1 + 8));
    v10 = bswap32(*(_DWORD *)(a1 + 28));
    v11 = bswap32(*(_DWORD *)(a1 + 24));
    v190 = bswap32(*(_DWORD *)(a1 + 20));
    v12 = v165 ^ v9 ^ v186;
    v13 = bswap32(*(_DWORD *)(a1 + 12));
    v188 = v7 ^ v8 ^ v161 ^ v12;
    v14 = bswap32(*(_DWORD *)(a1 + 16));
    v144 = v159 ^ v152 ^ HIDWORD(v161);
    v15 = bswap32(*(_DWORD *)(a1 + 4));
    v198 = v8 ^ v15;
    v197 = v7 ^ v13;
    v16 = bswap32(*(_DWORD *)a1);
    v153 = __ROR4__(v152 ^ v11 ^ v10 ^ v195 ^ v188, 30);
    HIDWORD(v161) = __ROR4__(v10 ^ v13 ^ HIDWORD(v161) ^ v188, 31);
    v17 = v169 ^ v156 ^ v179;
    v18 = v157 ^ v173 ^ v184;
    v174 = __ROR4__(v17 ^ v14 ^ v173, 30);
    v19 = v18;
    v180 = __ROR4__(v14 ^ v179 ^ v144, 31);
    v170 = __ROR4__(v10 ^ v13 ^ v169 ^ v144, 30);
    v187 = __ROR4__(v11 ^ v186 ^ v18, 31);
    v185 = __ROR4__(v17 ^ v190 ^ v184, 31);
    v164 = __ROR4__(v190 ^ v163 ^ v18, 30);
    v160 = v159 ^ v14 ^ v188;
    v20 = v171 ^ v181 ^ v193;
    v182 = v15 ^ v181;
    v21 = v20 ^ v12;
    v22 = v154 ^ v175 ^ v194 ^ v12;
    v23 = v16 ^ v194;
    v24 = v10 ^ v16;
    v25 = v177 ^ v167 ^ v192;
    v158 = v17 ^ v157 ^ v11;
    v166 = v19 ^ v165 ^ v10;
    LODWORD(v161) = v161 ^ v10 ^ v195 ^ v21;
    v155 = v10 ^ v154 ^ v12;
    v176 = v12 ^ v175 ^ v11;
    v26 = v197 ^ v21;
    v27 = v23 ^ v12;
    v178 = v24 ^ v177 ^ v22;
    v168 = v22 ^ v167 ^ v11 ^ v10;
    v172 = v25 ^ v171 ^ v24;
    v28 = v15 ^ v192 ^ v22;
    v29 = 0;
    v30 = v182 ^ v25;
    v189 = v21 ^ v198 ^ v11;
    v31 = v160;
    v32 = v195 ^ v193 ^ v25;
    v33 = v166;
    v35 = v144 ^ v156 ^ v190;
    v34 = v158;
    v183 = v30;
    do
    {
      v36 = v32 ^ v26;
      v37 = v31 ^ v33;
      v145 = v36 ^ v27 & v26;
      v38 = ~v28 ^ v27 & v26;
      v39 = (v35 | v34) ^ v31;
      v40 = v31 & v35;
      v41 = ~v34 ^ v40;
      v42 = v38 | v145;
      v43 = (v28 | v27) ^ v26;
      v44 = v41 ^ v37 & v39;
      v45 = v37 ^ v40;
      v46 = v38 ^ v36 & v43;
      v47 = (v38 | v145) ^ v27 ^ v44 ^ v45;
      v48 = v41 | v45;
      v49 = ~v43 ^ v42;
      v50 = v145 ^ v46;
      v51 = v46 & v42;
      v52 = ~v39 ^ (v41 | v45);
      v53 = v47 ^ __ROR4__(v42 ^ v27, 30);
      v54 = v48 ^ v35 ^ v49;
      v55 = v50 ^ v44 & v48;
      v56 = v52 ^ v51;
      v57 = v54 ^ __ROR4__(v49, 30);
      v58 = v56 ^ __ROR4__(v51, 30);
      v146 = dword_FD4F0[v29];
      v59 = v53 ^ __ROR4__(v47, 18);
      v60 = v55 ^ __ROR4__(v50, 30);
      v61 = v57 ^ __ROR4__(v54, 18);
      v62 = v58 ^ __ROR4__(v56, 18);
      v63 = v60 ^ __ROR4__(v55, 18);
      v64 = v59 ^ __ROR4__(v53, 22);
      v65 = dword_FD4D0[v29];
      v28 = v61 ^ __ROR4__(v57, 22);
      ++v29;
      v32 = v62 ^ __ROR4__(v58, 22);
      v26 = v63 ^ __ROR4__(v60, 22);
      v35 = __ROR4__(v61, 31);
      v34 = __ROR4__(v62, 31);
      v33 = __ROR4__(v63, 31);
      v31 = v146 ^ __ROR4__(v59, 31);
      v27 = v64 ^ v65;
    }
    while ( v29 != 8 );
    v192 = v28;
    v66 = 0;
    v156 = v35;
    v193 = v32;
    v157 = v34;
    v165 = v33;
    v194 = v64 ^ v65;
    v159 = v31;
    v191 = v26;
    v67 = v178;
    v68 = v180;
    v70 = v183;
    v69 = v185;
    v71 = v161;
    v72 = v187;
    v73 = HIDWORD(v161);
    v74 = v155;
    do
    {
      v75 = v70 ^ v71;
      v76 = v73 ^ v72;
      v147 = v75 ^ v74 & v71;
      v77 = ~v67 ^ v74 & v71;
      v78 = (v68 | v69) ^ v73;
      v79 = v73 & v68;
      v80 = ~v69 ^ v79;
      v81 = v77 | v147;
      v82 = (v67 | v74) ^ v71;
      v83 = v80 ^ v76 & v78;
      v84 = v76 ^ v79;
      v85 = v77 ^ v75 & v82;
      v86 = (v77 | v147) ^ v74 ^ v83 ^ v84;
      v87 = v80 | v84;
      v88 = ~v82 ^ v81;
      v89 = v147 ^ v85;
      v90 = v85 & v81;
      v91 = ~v78 ^ (v80 | v84);
      v92 = v86 ^ __ROR4__(v81 ^ v74, 30);
      v93 = v87 ^ v68 ^ v88;
      v94 = v89 ^ v83 & v87;
      v95 = v91 ^ v90;
      v96 = v93 ^ __ROR4__(v88, 30);
      v97 = v95 ^ __ROR4__(v90, 30);
      v148 = dword_FD530[v66];
      v98 = v92 ^ __ROR4__(v86, 18);
      v99 = v94 ^ __ROR4__(v89, 30);
      v100 = v96 ^ __ROR4__(v93, 18);
      v101 = v97 ^ __ROR4__(v95, 18);
      v102 = v99 ^ __ROR4__(v94, 18);
      v103 = v98 ^ __ROR4__(v92, 22);
      v104 = dword_FD510[v66];
      v67 = v100 ^ __ROR4__(v96, 22);
      ++v66;
      v70 = v101 ^ __ROR4__(v97, 22);
      v71 = v102 ^ __ROR4__(v99, 22);
      v68 = __ROR4__(v100, 31);
      v69 = __ROR4__(v101, 31);
      v72 = __ROR4__(v102, 31);
      v73 = v148 ^ __ROR4__(v98, 31);
      v74 = v103 ^ v104;
    }
    while ( v66 != 8 );
    v154 = v103 ^ v104;
    v105 = 0;
    v177 = v67;
    v179 = v68;
    v181 = v70;
    v184 = v69;
    v161 = __PAIR64__(v73, v71);
    v186 = v72;
    v8 = v189;
    v106 = v168;
    v107 = v170;
    v109 = v172;
    v108 = v174;
    v110 = v153;
    v111 = v164;
    v112 = v176;
    do
    {
      v113 = v109 ^ v8;
      v114 = v110 ^ v111;
      v149 = v113 ^ v112 & v8;
      v115 = ~v106 ^ v112 & v8;
      v116 = (v107 | v108) ^ v110;
      v117 = v110 & v107;
      v118 = ~v108 ^ v117;
      v119 = v115 | v149;
      v120 = (v106 | v112) ^ v8;
      v121 = v118 ^ v114 & v116;
      v122 = v114 ^ v117;
      v123 = v115 ^ v113 & v120;
      v124 = (v115 | v149) ^ v112 ^ v121 ^ v122;
      v125 = v118 | v122;
      v126 = ~v120 ^ v119;
      v127 = v149 ^ v123;
      v128 = v123 & v119;
      v129 = ~v116 ^ (v118 | v122);
      v130 = v124 ^ __ROR4__(v119 ^ v112, 30);
      v131 = v125 ^ v107 ^ v126;
      v132 = v127 ^ v121 & v125;
      v133 = v129 ^ v128;
      v134 = v131 ^ __ROR4__(v126, 30);
      v135 = v133 ^ __ROR4__(v128, 30);
      v150 = dword_FD570[v105];
      v136 = v130 ^ __ROR4__(v124, 18);
      v137 = v132 ^ __ROR4__(v127, 30);
      v138 = v134 ^ __ROR4__(v131, 18);
      v139 = v135 ^ __ROR4__(v133, 18);
      v140 = v137 ^ __ROR4__(v132, 18);
      v141 = v136 ^ __ROR4__(v130, 22);
      v142 = dword_FD550[v105];
      v106 = v138 ^ __ROR4__(v134, 22);
      ++v105;
      v109 = v139 ^ __ROR4__(v135, 22);
      v8 = v140 ^ __ROR4__(v137, 22);
      v107 = __ROR4__(v138, 31);
      v108 = __ROR4__(v139, 31);
      v111 = __ROR4__(v140, 31);
      v110 = v150 ^ __ROR4__(v136, 31);
      v112 = v141 ^ v142;
    }
    while ( v105 != 8 );
    v171 = v109;
    v173 = v108;
    v152 = v110;
    v167 = v106;
    v169 = v107;
    v175 = v141 ^ v142;
    v163 = v111;
    v7 = v191;
    memset((void *)a1, 0, 0x20u);
    if ( v196 == 1 )
      break;
    v9 = v111;
    v196 = 1;
  }
  result = ((v8 ^ (unsigned int)v161 ^ v191) >> 24)
         | (unsigned __int16)((unsigned __int8)((v8 ^ (unsigned int)v161 ^ v191) >> 16) << 8)
         | ((unsigned __int8)((unsigned __int16)(v8 ^ v161 ^ v191) >> 8) << 16) & 0xFFFFFF
         | ((unsigned __int8)(v8 ^ v161 ^ v191) << 24);
  a4[2] = ((v181 ^ v193 ^ (unsigned int)v171) >> 24)
        | (unsigned __int16)((unsigned __int8)((v181 ^ v193 ^ (unsigned int)v171) >> 16) << 8)
        | ((unsigned __int8)((unsigned __int16)(v181 ^ v193 ^ v171) >> 8) << 16) & 0xFFFFFF
        | ((unsigned __int8)(v181 ^ v193 ^ v171) << 24);
  *a4 = ((v175 ^ v154 ^ (unsigned int)v194) >> 24)
      | (unsigned __int16)((unsigned __int8)((v175 ^ v154 ^ (unsigned int)v194) >> 16) << 8)
      | ((unsigned __int8)((unsigned __int16)(v175 ^ v154 ^ v194) >> 8) << 16) & 0xFFFFFF
      | ((unsigned __int8)(v175 ^ v154 ^ v194) << 24);
  a4[1] = ((v167 ^ v177 ^ (unsigned int)v192) >> 24)
        | (unsigned __int16)((unsigned __int8)((v167 ^ v177 ^ (unsigned int)v192) >> 16) << 8)
        | ((unsigned __int8)((unsigned __int16)(v167 ^ v177 ^ v192) >> 8) << 16) & 0xFFFFFF
        | ((unsigned __int8)(v167 ^ v177 ^ v192) << 24);
  a4[3] = result;
  a4[4] = ((v152 ^ HIDWORD(v161) ^ (unsigned int)v159) >> 24)
        | (unsigned __int16)((unsigned __int8)((v152 ^ HIDWORD(v161) ^ (unsigned int)v159) >> 16) << 8)
        | ((unsigned __int8)((unsigned __int16)(v152 ^ WORD2(v161) ^ v159) >> 8) << 16) & 0xFFFFFF
        | ((unsigned __int8)(v152 ^ BYTE4(v161) ^ v159) << 24);
  a4[5] = ((v179 ^ v156 ^ v107) >> 24)
        | (unsigned __int16)((unsigned __int8)((v179 ^ v156 ^ v107) >> 16) << 8)
        | ((unsigned __int8)((unsigned __int16)(v179 ^ v156 ^ v107) >> 8) << 16) & 0xFFFFFF
        | ((unsigned __int8)(v179 ^ v156 ^ v107) << 24);
  a4[6] = ((v173 ^ v184 ^ (unsigned int)v157) >> 24)
        | (unsigned __int16)((unsigned __int8)((v173 ^ v184 ^ (unsigned int)v157) >> 16) << 8)
        | ((unsigned __int8)((unsigned __int16)(v173 ^ v184 ^ v157) >> 8) << 16) & 0xFFFFFF
        | ((unsigned __int8)(v173 ^ v184 ^ v157) << 24);
  if ( a5 == 8 )
  {
    a4[7] = ((v111 ^ v186 ^ (unsigned int)v165) >> 24)
          | (unsigned __int16)((unsigned __int8)((v111 ^ v186 ^ (unsigned int)v165) >> 16) << 8)
          | ((unsigned __int8)((unsigned __int16)(v111 ^ v186 ^ v165) >> 8) << 16) & 0xFFFFFF
          | ((unsigned __int8)(v111 ^ v186 ^ v165) << 24);
    return (v111 ^ v186 ^ (unsigned int)v165) >> 24;
  }
  return result;
}
