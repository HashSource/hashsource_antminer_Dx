unsigned int __fastcall sub_A4D3C(unsigned int *a1, char a2, char a3, unsigned int *a4, int a5)
{
  unsigned int v5; // r4
  unsigned int v7; // r6
  unsigned int *v8; // r3
  unsigned int v9; // r10
  unsigned int v10; // r2
  unsigned int v11; // r5
  int v12; // r4
  unsigned int v13; // r10
  unsigned int v14; // r11
  unsigned int v15; // r9
  unsigned int v16; // r1
  unsigned int v17; // r2
  unsigned int v18; // r12
  int v19; // r8
  unsigned int v20; // r10
  int v21; // r5
  int v22; // r6
  int v23; // r4
  int v24; // r3
  int v25; // r7
  int v26; // r2
  int v27; // r11
  int v28; // r0
  int v29; // r12
  int v30; // r3
  int v31; // r6
  int v32; // r2
  int v33; // r9
  int v34; // r12
  int v35; // r4
  int v36; // r1
  unsigned int v37; // lr
  int v38; // r0
  int v39; // r2
  int v40; // r5
  int v41; // r10
  int v42; // lr
  int v43; // r0
  int v44; // r1
  int v45; // r0
  int v46; // r7
  int v47; // r6
  int v48; // r4
  int v49; // r8
  int v50; // r5
  int v51; // r2
  int v52; // r3
  int v53; // r6
  int v54; // r3
  int v55; // r1
  int v56; // r2
  int v57; // r12
  int v58; // r8
  int v59; // r7
  int v60; // r12
  int v61; // r0
  int v62; // r1
  int v63; // lr
  int v64; // r3
  int v65; // r2
  int v66; // r5
  int v67; // r6
  int v68; // r4
  int v69; // r12
  int v70; // r1
  int v71; // lr
  int v72; // r5
  int v73; // r9
  int v74; // r3
  unsigned int v75; // r12
  int v76; // r2
  unsigned int v77; // r1
  unsigned int v78; // lr
  int v79; // r4
  int v80; // r0
  int v81; // r2
  int v82; // r6
  int v83; // r10
  int v84; // lr
  int v85; // r0
  int v86; // r1
  int v87; // r0
  int v88; // r7
  int v89; // r5
  int v90; // r4
  int v91; // r8
  int v92; // r6
  int v93; // r2
  int v94; // r3
  int v95; // r5
  int v96; // r3
  int v97; // r1
  int v98; // r2
  int v99; // r12
  int v100; // r8
  int v101; // r7
  int v102; // r12
  int v103; // r0
  int v104; // r1
  int v105; // lr
  int v106; // r3
  int v107; // r2
  int v108; // r6
  int v109; // r5
  int v110; // r4
  int v111; // r12
  int v112; // r1
  int v113; // lr
  int v114; // r9
  int v115; // r3
  unsigned int v116; // r12
  int v117; // r2
  unsigned int v118; // r1
  unsigned int v119; // lr
  int v120; // r0
  int v121; // r5
  int v122; // r2
  int v123; // r6
  int v124; // r10
  int v125; // lr
  int v126; // r0
  int v127; // r1
  int v128; // r0
  int v129; // r7
  int v130; // r4
  int v131; // r5
  int v132; // r8
  int v133; // r6
  int v134; // r2
  int v135; // r3
  int v136; // r4
  int v137; // r3
  int v138; // r1
  int v139; // r2
  int v140; // r12
  int v141; // r8
  int v142; // r7
  int v143; // r12
  int v144; // r0
  int v145; // r1
  int v146; // lr
  int v147; // r3
  int v148; // r2
  int v149; // r6
  int v150; // r4
  int v151; // r5
  int v152; // r12
  int v153; // r1
  int v154; // lr
  unsigned int result; // r0
  unsigned int v156; // r7
  int v157; // [sp+0h] [bp-84h]
  int v158; // [sp+0h] [bp-84h]
  int v159; // [sp+0h] [bp-84h]
  int v160; // [sp+0h] [bp-84h]
  int v161; // [sp+8h] [bp-7Ch]
  int v162; // [sp+8h] [bp-7Ch]
  int v163; // [sp+Ch] [bp-78h]
  int v164; // [sp+Ch] [bp-78h]
  unsigned int v165; // [sp+10h] [bp-74h]
  int v166; // [sp+10h] [bp-74h]
  unsigned int v167; // [sp+14h] [bp-70h]
  int v168; // [sp+14h] [bp-70h]
  unsigned int v169; // [sp+18h] [bp-6Ch]
  int v170; // [sp+18h] [bp-6Ch]
  unsigned int v171; // [sp+1Ch] [bp-68h]
  int v172; // [sp+1Ch] [bp-68h]
  unsigned int v173; // [sp+20h] [bp-64h]
  unsigned int v174; // [sp+20h] [bp-64h]
  unsigned int v175; // [sp+24h] [bp-60h]
  unsigned int v176; // [sp+24h] [bp-60h]
  unsigned int v177; // [sp+28h] [bp-5Ch]
  unsigned int v178; // [sp+28h] [bp-5Ch]
  int v179; // [sp+28h] [bp-5Ch]
  unsigned int v181; // [sp+30h] [bp-54h]
  unsigned int v182; // [sp+30h] [bp-54h]
  int v183; // [sp+34h] [bp-50h]
  int v184; // [sp+34h] [bp-50h]
  unsigned int v185; // [sp+38h] [bp-4Ch]
  unsigned int v186; // [sp+38h] [bp-4Ch]
  int v187; // [sp+3Ch] [bp-48h]
  int v188; // [sp+3Ch] [bp-48h]
  unsigned int v189; // [sp+40h] [bp-44h]
  int v190; // [sp+40h] [bp-44h]
  unsigned int v191; // [sp+44h] [bp-40h]
  unsigned int v192; // [sp+44h] [bp-40h]
  unsigned int v193; // [sp+48h] [bp-3Ch]
  int v194; // [sp+48h] [bp-3Ch]
  unsigned int v195; // [sp+4Ch] [bp-38h]
  unsigned int v196; // [sp+4Ch] [bp-38h]
  unsigned int v197; // [sp+50h] [bp-34h]
  int v198; // [sp+50h] [bp-34h]
  unsigned int v199; // [sp+54h] [bp-30h]
  int v200; // [sp+54h] [bp-30h]
  int v201; // [sp+54h] [bp-30h]
  unsigned int v202; // [sp+54h] [bp-30h]
  unsigned int v203; // [sp+58h] [bp-2Ch]
  int v204; // [sp+58h] [bp-2Ch]
  unsigned int v205; // [sp+5Ch] [bp-28h]
  int v206; // [sp+60h] [bp-24h]
  unsigned int v207; // [sp+60h] [bp-24h]
  unsigned int v208; // [sp+64h] [bp-20h]
  int v209; // [sp+68h] [bp-1Ch]
  int v210; // [sp+6Ch] [bp-18h]
  int v211; // [sp+74h] [bp-10h]
  int v212; // [sp+78h] [bp-Ch]

  v5 = a1[8];
  *((_BYTE *)a1 + v5) = (128 >> a3) | a2 & -(128 >> a3);
  memset((char *)a1 + v5 + 1, 0, 31 - v5);
  v7 = a1[12];
  v205 = a1[11];
  v208 = a1[9];
  v169 = a1[13];
  v203 = a1[10];
  v209 = 2;
  v8 = a1;
  v165 = a1[14];
  v9 = a1[21];
  v167 = a1[15];
  v177 = a1[16];
  v197 = a1[17];
  v189 = a1[18];
  v10 = a1[19];
  v11 = a1[20];
  v193 = v10;
  v191 = v8[22];
  v195 = v8[23];
  v175 = v8[24];
  v163 = v8[25];
  v12 = v8[28];
  v171 = v9;
  v161 = v8[26];
  v183 = v8[27];
  v187 = v8[29];
  v181 = v8[30];
  v185 = v8[31];
  v13 = v8[32];
  v173 = v13;
  while ( 1 )
  {
    v14 = bswap32(a1[6]);
    v15 = bswap32(a1[7]);
    v16 = bswap32(a1[2]);
    v17 = bswap32(a1[4]);
    v18 = bswap32(a1[3]);
    v19 = v177 ^ v13 ^ v175;
    v199 = bswap32(a1[5]);
    v157 = v169 ^ v187 ^ v171;
    v210 = v15 ^ v16 ^ v11;
    v206 = v7 ^ v12 ^ v11 ^ v19;
    v188 = __ROR4__(v187 ^ v14 ^ v15 ^ v16 ^ v206, 30);
    v20 = bswap32(a1[1]);
    v212 = v177 ^ v15;
    v178 = bswap32(*a1);
    v211 = v7 ^ v18;
    v21 = v165 ^ v181 ^ v191;
    v172 = __ROR4__(v18 ^ v15 ^ v171 ^ v206, 31);
    v22 = v167 ^ v185 ^ v195;
    v182 = __ROR4__(v18 ^ v15 ^ v181 ^ v157, 30);
    v192 = __ROR4__(v17 ^ v191 ^ v157, 31);
    v186 = __ROR4__(v185 ^ v17 ^ v21, 30);
    v176 = __ROR4__(v22 ^ v14 ^ v175, 31);
    v196 = __ROR4__(v199 ^ v195 ^ v21, 31);
    v174 = __ROR4__(v22 ^ v173 ^ v199, 30);
    v168 = v167 ^ v14;
    v166 = v165 ^ v199;
    v200 = v12 ^ v20 ^ v14;
    v170 = v206 ^ v169 ^ v17;
    v23 = v183 ^ v193 ^ v205 ^ v19;
    v24 = v163 ^ v197 ^ v208 ^ v19;
    v25 = v183 ^ v15 ^ v178;
    v198 = v15 ^ v197 ^ v19;
    v26 = v161 ^ v14 ^ v15;
    v164 = v19 ^ v14 ^ v163;
    v27 = v178 ^ v208 ^ v19;
    v28 = v189 ^ v161 ^ v203;
    v190 = v15 ^ v178 ^ v189 ^ v24;
    v29 = v24 ^ v26;
    v30 = v20 ^ v203 ^ v24;
    v179 = v22 ^ v212;
    v31 = v211 ^ v23;
    v162 = v29;
    v184 = v28 ^ v25;
    v32 = v16 ^ v205 ^ v28;
    v194 = v20 ^ v193 ^ v28;
    v201 = v23 ^ v200;
    v204 = v210 ^ v23;
    v33 = 0;
    v34 = v157 ^ v166;
    v35 = v27;
    v36 = v21 ^ v168;
    v37 = v179;
    v38 = v170;
    do
    {
      v39 = v32 ^ v31;
      v40 = v38 ^ v37;
      v41 = ~v30 ^ v35 & v31;
      v42 = (v34 | v36) ^ v38;
      v43 = v38 & v34;
      v44 = ~v36 ^ v43;
      v45 = v43 ^ v40;
      v158 = v39 ^ v35 & v31;
      v46 = v44 | v45;
      v47 = v31 ^ (v35 | v30);
      v48 = v35 ^ (v41 | v158);
      v49 = v40 & v42 ^ v44;
      v50 = v48 ^ v49 ^ v45;
      v51 = v39 & v47 ^ v41;
      v52 = ~v47;
      v53 = v158 ^ v51;
      v54 = v52 ^ (v41 | v158);
      v55 = ~v42 ^ (v44 | v45);
      v56 = v51 & (v41 | v158);
      v57 = v34 ^ v46;
      v58 = v49 & v46;
      v59 = v50 ^ __ROR4__(v48, 30);
      v60 = v57 ^ v54;
      v61 = dword_17A6D8[v33];
      v62 = v55 ^ v56;
      v63 = v53 ^ v58;
      v64 = v60 ^ __ROR4__(v54, 30);
      v65 = v62 ^ __ROR4__(v56, 30);
      v66 = v59 ^ __ROR4__(v50, 18);
      v67 = v53 ^ v58 ^ __ROR4__(v53, 30);
      v68 = dword_17A6B8[v33];
      v69 = v64 ^ __ROR4__(v60, 18);
      ++v33;
      v70 = v65 ^ __ROR4__(v62, 18);
      v71 = v67 ^ __ROR4__(v63, 18);
      v30 = v69 ^ __ROR4__(v64, 22);
      v32 = v70 ^ __ROR4__(v65, 22);
      v31 = v71 ^ __ROR4__(v67, 22);
      v34 = __ROR4__(v69, 31);
      v36 = __ROR4__(v70, 31);
      v37 = __ROR4__(v71, 31);
      v38 = v61 ^ __ROR4__(v66, 31);
      v35 = v68 ^ v66 ^ __ROR4__(v59, 22);
    }
    while ( v33 != 8 );
    v72 = v204;
    v73 = 0;
    v203 = v30;
    v165 = v34;
    v205 = v32;
    v167 = v36;
    v177 = v37;
    v208 = v35;
    v169 = v38;
    v74 = v190;
    v75 = v192;
    v76 = v194;
    v77 = v196;
    v78 = v176;
    v79 = v198;
    v80 = v172;
    v207 = v31;
    do
    {
      v81 = v76 ^ v72;
      v82 = v80 ^ v78;
      v83 = ~v74 ^ v79 & v72;
      v84 = (v75 | v77) ^ v80;
      v85 = v80 & v75;
      v86 = ~v77 ^ v85;
      v87 = v85 ^ v82;
      v159 = v81 ^ v79 & v72;
      v88 = v86 | v87;
      v89 = v72 ^ (v79 | v74);
      v90 = v79 ^ (v83 | v159);
      v91 = v82 & v84 ^ v86;
      v92 = v90 ^ v91 ^ v87;
      v93 = v81 & v89 ^ v83;
      v94 = ~v89;
      v95 = v159 ^ v93;
      v96 = v94 ^ (v83 | v159);
      v97 = ~v84 ^ (v86 | v87);
      v98 = v93 & (v83 | v159);
      v99 = v75 ^ v88;
      v100 = v91 & v88;
      v101 = v92 ^ __ROR4__(v90, 30);
      v102 = v99 ^ v96;
      v103 = dword_17A718[v73];
      v104 = v97 ^ v98;
      v105 = v95 ^ v100;
      v106 = v102 ^ __ROR4__(v96, 30);
      v107 = v104 ^ __ROR4__(v98, 30);
      v108 = v101 ^ __ROR4__(v92, 18);
      v109 = v95 ^ v100 ^ __ROR4__(v95, 30);
      v110 = dword_17A6F8[v73];
      v111 = v106 ^ __ROR4__(v102, 18);
      ++v73;
      v112 = v107 ^ __ROR4__(v104, 18);
      v113 = v109 ^ __ROR4__(v105, 18);
      v74 = v111 ^ __ROR4__(v106, 22);
      v76 = v112 ^ __ROR4__(v107, 22);
      v72 = v113 ^ __ROR4__(v109, 22);
      v75 = __ROR4__(v111, 31);
      v77 = __ROR4__(v112, 31);
      v78 = __ROR4__(v113, 31);
      v80 = v103 ^ __ROR4__(v108, 31);
      v79 = v110 ^ v108 ^ __ROR4__(v101, 22);
    }
    while ( v73 != 8 );
    v189 = v74;
    v191 = v75;
    v114 = 0;
    v193 = v76;
    v195 = v77;
    v175 = v78;
    v197 = v79;
    v171 = v80;
    v12 = v201;
    v115 = v162;
    v202 = v72;
    v116 = v182;
    v117 = v184;
    v118 = v186;
    v119 = v174;
    v120 = v188;
    v121 = v164;
    do
    {
      v122 = v117 ^ v12;
      v123 = v120 ^ v119;
      v124 = ~v115 ^ v121 & v12;
      v125 = (v116 | v118) ^ v120;
      v126 = v120 & v116;
      v127 = ~v118 ^ v126;
      v128 = v126 ^ v123;
      v160 = v122 ^ v121 & v12;
      v129 = v127 | v128;
      v130 = v12 ^ (v121 | v115);
      v131 = v121 ^ (v124 | v160);
      v132 = v123 & v125 ^ v127;
      v133 = v131 ^ v132 ^ v128;
      v134 = v122 & v130 ^ v124;
      v135 = ~v130;
      v136 = v160 ^ v134;
      v137 = v135 ^ (v124 | v160);
      v138 = ~v125 ^ (v127 | v128);
      v139 = v134 & (v124 | v160);
      v140 = v116 ^ v129;
      v141 = v132 & v129;
      v142 = v133 ^ __ROR4__(v131, 30);
      v143 = v140 ^ v137;
      v144 = dword_17A758[v114];
      v145 = v138 ^ v139;
      v146 = v136 ^ v141;
      v147 = v143 ^ __ROR4__(v137, 30);
      v148 = v145 ^ __ROR4__(v139, 30);
      v149 = v142 ^ __ROR4__(v133, 18);
      v150 = v136 ^ v141 ^ __ROR4__(v136, 30);
      v151 = dword_17A738[v114];
      v152 = v147 ^ __ROR4__(v143, 18);
      ++v114;
      v153 = v148 ^ __ROR4__(v145, 18);
      v154 = v150 ^ __ROR4__(v146, 18);
      v115 = v152 ^ __ROR4__(v147, 22);
      v117 = v153 ^ __ROR4__(v148, 22);
      v12 = v154 ^ __ROR4__(v150, 22);
      v116 = __ROR4__(v152, 31);
      v118 = __ROR4__(v153, 31);
      v119 = __ROR4__(v154, 31);
      v120 = v144 ^ __ROR4__(v149, 31);
      v121 = v151 ^ v149 ^ __ROR4__(v142, 22);
    }
    while ( v114 != 8 );
    v183 = v117;
    v185 = v118;
    v187 = v120;
    v161 = v115;
    v163 = v121;
    v181 = v116;
    v173 = v119;
    v11 = v202;
    v7 = v207;
    memset(a1, 0, 0x20u);
    if ( v209 == 1 )
      break;
    v13 = v173;
    v209 = 1;
  }
  result = ((v207 ^ v12 ^ v202) >> 24)
         | (unsigned __int16)((unsigned __int8)((v207 ^ v12 ^ v202) >> 16) << 8)
         | ((unsigned __int8)((unsigned __int16)(v207 ^ v12 ^ v202) >> 8) << 16) & 0xFFFFFF
         | ((unsigned __int8)(v207 ^ v12 ^ v202) << 24);
  *a4 = ((v208 ^ v163 ^ v197) >> 24)
      | (unsigned __int16)((unsigned __int8)((v208 ^ v163 ^ v197) >> 16) << 8)
      | ((unsigned __int8)((unsigned __int16)(v208 ^ v163 ^ v197) >> 8) << 16) & 0xFFFFFF
      | ((unsigned __int8)(v208 ^ v163 ^ v197) << 24);
  a4[1] = ((v189 ^ v203 ^ v161) >> 24)
        | (unsigned __int16)((unsigned __int8)((v189 ^ v203 ^ v161) >> 16) << 8)
        | ((unsigned __int8)((unsigned __int16)(v189 ^ v203 ^ v161) >> 8) << 16) & 0xFFFFFF
        | ((unsigned __int8)(v189 ^ v203 ^ v161) << 24);
  a4[2] = ((v183 ^ v193 ^ v205) >> 24)
        | (unsigned __int16)((unsigned __int8)((v183 ^ v193 ^ v205) >> 16) << 8)
        | ((unsigned __int8)((unsigned __int16)(v183 ^ v193 ^ v205) >> 8) << 16) & 0xFFFFFF
        | ((unsigned __int8)(v183 ^ v193 ^ v205) << 24);
  a4[3] = result;
  a4[4] = ((v187 ^ v171 ^ v169) >> 24)
        | (unsigned __int16)((unsigned __int8)((v187 ^ v171 ^ v169) >> 16) << 8)
        | ((unsigned __int8)((unsigned __int16)(v187 ^ v171 ^ v169) >> 8) << 16) & 0xFFFFFF
        | ((unsigned __int8)(v187 ^ v171 ^ v169) << 24);
  a4[5] = ((v191 ^ v165 ^ v181) >> 24)
        | (unsigned __int16)((unsigned __int8)((v191 ^ v165 ^ v181) >> 16) << 8)
        | ((unsigned __int8)((unsigned __int16)(v191 ^ v165 ^ v181) >> 8) << 16) & 0xFFFFFF
        | ((unsigned __int8)(v191 ^ v165 ^ v181) << 24);
  a4[6] = ((v185 ^ v195 ^ v167) >> 24)
        | (unsigned __int16)((unsigned __int8)((v185 ^ v195 ^ v167) >> 16) << 8)
        | ((unsigned __int8)((unsigned __int16)(v185 ^ v195 ^ v167) >> 8) << 16) & 0xFFFFFF
        | ((unsigned __int8)(v185 ^ v195 ^ v167) << 24);
  if ( a5 == 8 )
  {
    v156 = v177 ^ v173 ^ v175;
    a4[7] = HIBYTE(v156)
          | (unsigned __int16)(BYTE2(v156) << 8)
          | (BYTE1(v156) << 16) & 0xFFFFFF
          | ((unsigned __int8)v156 << 24);
    return HIBYTE(v156);
  }
  return result;
}
