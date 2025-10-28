int __fastcall sph_luffa256_0(int result, char *src, size_t a3)
{
  unsigned int v3; // r5
  size_t v4; // r4
  unsigned int v5; // r9
  int v6; // r11
  size_t v7; // r6
  char *v8; // r7
  size_t v9; // r3
  char *v10; // r0
  int v11; // r4
  int v12; // r10
  int v13; // r3
  unsigned int v14; // r8
  unsigned int v15; // r7
  int v16; // r6
  int v17; // r12
  int v18; // r1
  unsigned int v19; // r11
  int v20; // r4
  int v21; // r9
  int v22; // r3
  int v23; // r0
  int v24; // r6
  int v25; // r10
  int v26; // r0
  int v27; // r3
  int v28; // r12
  int v29; // r4
  int v30; // r2
  int v31; // r5
  int v32; // r8
  int v33; // r7
  int v34; // r10
  int v35; // r1
  int v36; // lr
  int v37; // r9
  int v38; // r2
  int v39; // r0
  int v40; // r12
  int v41; // r2
  int v42; // r5
  int v43; // r12
  int v44; // r11
  int v45; // r1
  int v46; // r11
  int v47; // r8
  int v48; // lr
  int v49; // r4
  int v50; // r6
  int v51; // r9
  int v52; // r2
  int v53; // r3
  int v54; // lr
  int v55; // r1
  int v56; // r5
  int v57; // r2
  int v58; // r3
  int v59; // r9
  int v60; // r11
  int v61; // r0
  int v62; // r1
  int v63; // r12
  int v64; // r3
  int v65; // r2
  int v66; // r5
  int v67; // lr
  int v68; // r4
  int v69; // r0
  int v70; // r1
  int v71; // r12
  int v72; // r3
  unsigned int v73; // r12
  int v74; // r2
  unsigned int v75; // r1
  int v76; // r4
  unsigned int v77; // lr
  int v78; // r5
  int v79; // r0
  int v80; // r9
  int v81; // r2
  int v82; // r6
  int v83; // r10
  int v84; // lr
  int v85; // r0
  int v86; // r1
  int v87; // r0
  int v88; // r7
  int v89; // r4
  int v90; // r5
  int v91; // r8
  int v92; // r6
  int v93; // r2
  int v94; // r3
  int v95; // r4
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
  int v109; // r4
  int v110; // r5
  int v111; // r12
  int v112; // r1
  int v113; // lr
  int v114; // r9
  int v115; // r3
  unsigned int v116; // r12
  int v117; // r2
  unsigned int v118; // r1
  int v119; // r4
  size_t v120; // lr
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
  int v155; // r4
  size_t na; // [sp+4h] [bp-90h]
  unsigned int v158; // [sp+8h] [bp-8Ch]
  int v159; // [sp+8h] [bp-8Ch]
  int v160; // [sp+8h] [bp-8Ch]
  int v161; // [sp+8h] [bp-8Ch]
  char *v162; // [sp+Ch] [bp-88h]
  unsigned int *v163; // [sp+10h] [bp-84h]
  int v164; // [sp+20h] [bp-74h]
  int v165; // [sp+20h] [bp-74h]
  int v166; // [sp+24h] [bp-70h]
  int v167; // [sp+24h] [bp-70h]
  size_t v168; // [sp+28h] [bp-6Ch]
  size_t v169; // [sp+28h] [bp-6Ch]
  int v170; // [sp+2Ch] [bp-68h]
  int v171; // [sp+2Ch] [bp-68h]
  int v172; // [sp+30h] [bp-64h]
  int v173; // [sp+30h] [bp-64h]
  int v174; // [sp+34h] [bp-60h]
  int v175; // [sp+34h] [bp-60h]
  int v176; // [sp+38h] [bp-5Ch]
  int v177; // [sp+38h] [bp-5Ch]
  int v178; // [sp+38h] [bp-5Ch]
  unsigned int v179; // [sp+3Ch] [bp-58h]
  unsigned int v180; // [sp+3Ch] [bp-58h]
  int v181; // [sp+40h] [bp-54h]
  int v182; // [sp+40h] [bp-54h]
  int v183; // [sp+40h] [bp-54h]
  int v184; // [sp+44h] [bp-50h]
  int v185; // [sp+48h] [bp-4Ch]
  unsigned int v186; // [sp+48h] [bp-4Ch]
  int v187; // [sp+4Ch] [bp-48h]
  int v188; // [sp+4Ch] [bp-48h]
  unsigned int v189; // [sp+50h] [bp-44h]
  unsigned int v190; // [sp+50h] [bp-44h]
  unsigned int v191; // [sp+54h] [bp-40h]
  unsigned int v192; // [sp+54h] [bp-40h]
  int v193; // [sp+58h] [bp-3Ch]
  int v194; // [sp+58h] [bp-3Ch]
  int v195; // [sp+58h] [bp-3Ch]
  unsigned int v196; // [sp+5Ch] [bp-38h]
  unsigned int v197; // [sp+5Ch] [bp-38h]
  unsigned int v198; // [sp+60h] [bp-34h]
  unsigned int v199; // [sp+60h] [bp-34h]
  int v200; // [sp+64h] [bp-30h]
  int v201; // [sp+64h] [bp-30h]
  int v202; // [sp+64h] [bp-30h]
  unsigned int v203; // [sp+68h] [bp-2Ch]
  int v204; // [sp+6Ch] [bp-28h]
  unsigned int v205; // [sp+70h] [bp-24h]
  unsigned int v206; // [sp+74h] [bp-20h]
  int v207; // [sp+74h] [bp-20h]
  int v208; // [sp+78h] [bp-1Ch]
  unsigned int v209; // [sp+7Ch] [bp-18h]
  unsigned int v210; // [sp+80h] [bp-14h]
  int v211; // [sp+84h] [bp-10h]
  int v212; // [sp+88h] [bp-Ch]
  int v213; // [sp+8Ch] [bp-8h]

  v3 = *(_DWORD *)(result + 32);
  v163 = (unsigned int *)result;
  v4 = 32 - v3;
  if ( 32 - v3 > a3 )
  {
    v155 = result;
    result = (int)memcpy((void *)(result + v3), src, a3);
    *(_DWORD *)(v155 + 32) = v3 + a3;
  }
  else
  {
    v5 = *(_DWORD *)(result + 36);
    v6 = *(_DWORD *)(result + 52);
    v204 = *(_DWORD *)(result + 40);
    v184 = *(_DWORD *)(result + 44);
    v185 = *(_DWORD *)(result + 48);
    v208 = *(_DWORD *)(result + 56);
    v205 = *(_DWORD *)(result + 60);
    v203 = *(_DWORD *)(result + 64);
    v200 = *(_DWORD *)(result + 68);
    v172 = *(_DWORD *)(result + 72);
    v174 = *(_DWORD *)(result + 76);
    v176 = *(_DWORD *)(result + 80);
    v181 = *(_DWORD *)(result + 84);
    v196 = *(_DWORD *)(result + 88);
    v198 = *(_DWORD *)(result + 92);
    v179 = *(_DWORD *)(result + 96);
    v193 = *(_DWORD *)(result + 100);
    v187 = *(_DWORD *)(result + 104);
    v164 = *(_DWORD *)(result + 108);
    v166 = *(_DWORD *)(result + 112);
    v170 = *(_DWORD *)(result + 116);
    v189 = *(_DWORD *)(result + 120);
    v191 = *(_DWORD *)(result + 124);
    v168 = *(_DWORD *)(result + 128);
    if ( a3 )
    {
      v7 = a3;
      v8 = src;
      while ( 1 )
      {
        if ( v4 >= v7 )
          v4 = v7;
        v10 = (char *)v163 + v3;
        v3 += v4;
        result = (int)memcpy(v10, v8, v4);
        na = v7 - v4;
        v162 = &v8[v4];
        if ( v3 == 32 )
        {
          v11 = v185;
          v12 = v168 ^ v179 ^ v203;
          v13 = v185 ^ v176 ^ v166 ^ v12;
          v14 = bswap32(v163[6]);
          v186 = bswap32(v163[3]);
          v15 = bswap32(v163[7]);
          v16 = v184 ^ v174 ^ v164 ^ v12;
          v210 = bswap32(v163[2]);
          v158 = bswap32(v163[5]);
          v211 = v16 ^ v11;
          v206 = bswap32(v163[4]);
          v17 = v170;
          v171 = __ROR4__(v13 ^ v170 ^ v14 ^ v15 ^ v210, 30);
          v18 = v6 ^ v181 ^ v17;
          v212 = v6 ^ v13;
          v182 = v13 ^ v181;
          v177 = v16 ^ v176;
          v19 = bswap32(v163[1]);
          v20 = v193 ^ v200 ^ v5 ^ v12;
          v201 = v200 ^ v12;
          v21 = v5 ^ v12;
          v213 = v193 ^ v12;
          v194 = v16 ^ v166 ^ v19;
          v209 = bswap32(*v163);
          v22 = v208 ^ v196 ^ v189;
          v23 = v198 ^ v205 ^ v191;
          v197 = __ROR4__(v196 ^ v18 ^ v206, 31);
          v180 = __ROR4__(v179 ^ v23 ^ v14, 31);
          v199 = __ROR4__(v198 ^ v22 ^ v158, 31);
          v24 = v205 ^ v22;
          v169 = __ROR4__(v168 ^ v23 ^ v158, 30);
          v192 = __ROR4__(v191 ^ v22 ^ v206, 30);
          v25 = v203 ^ v23;
          v178 = v15 ^ v210 ^ v177;
          v26 = v187 ^ v204 ^ v172;
          v175 = v19 ^ v26 ^ v174;
          v188 = v15 ^ v187 ^ v20 ^ v14;
          v183 = __ROR4__(v15 ^ v186 ^ v182, 31);
          v190 = __ROR4__(v15 ^ v186 ^ v18 ^ v189, 30);
          v27 = v19 ^ v20 ^ v204;
          v202 = v15 ^ v201;
          v28 = v15 ^ v209 ^ v26 ^ v164;
          v29 = v15 ^ v209 ^ v20 ^ v172;
          v30 = v14 ^ v194;
          v195 = v14 ^ v213;
          v31 = v14 ^ v24;
          v32 = v15 ^ v25;
          v33 = 0;
          v34 = v208 ^ v18;
          v6 = v206 ^ v212;
          v167 = v30;
          v35 = v31;
          v36 = v186 ^ v211;
          v37 = v21 ^ v209;
          v38 = v210 ^ v26 ^ v184;
          v39 = v158 ^ v34;
          v165 = v28;
          v40 = v32;
          v173 = v29;
          do
          {
            v41 = v38 ^ v36;
            v42 = v6 ^ v40;
            v43 = (v39 | v35) ^ v6;
            v44 = v6 & v39;
            v45 = ~v35 ^ v44;
            v46 = v44 ^ v42;
            v159 = v41 ^ v37 & v36;
            v47 = ~v27 ^ v37 & v36;
            v48 = v36 ^ (v37 | v27);
            v49 = v45 | v46;
            v50 = v42 & v43 ^ v45;
            v51 = v37 ^ (v47 | v159);
            v52 = v41 & v48 ^ v47;
            v53 = ~v48;
            v54 = v159 ^ v52;
            v55 = ~v43 ^ (v45 | v46);
            v56 = v51 ^ v50 ^ v46;
            v57 = v52 & (v47 | v159);
            v58 = v53 ^ (v47 | v159);
            v59 = v56 ^ __ROR4__(v51, 30);
            v60 = dword_1675BC[v33];
            v61 = v39 ^ v49 ^ v58;
            v62 = v55 ^ v57;
            v63 = v54 ^ v50 & v49;
            v64 = v61 ^ __ROR4__(v58, 30);
            v65 = v62 ^ __ROR4__(v57, 30);
            v66 = v59 ^ __ROR4__(v56, 18);
            v67 = v63 ^ __ROR4__(v54, 30);
            v68 = dword_16759C[v33];
            v69 = v64 ^ __ROR4__(v61, 18);
            ++v33;
            v70 = v65 ^ __ROR4__(v62, 18);
            v71 = v67 ^ __ROR4__(v63, 18);
            v27 = v69 ^ __ROR4__(v64, 22);
            v38 = v70 ^ __ROR4__(v65, 22);
            v36 = v71 ^ __ROR4__(v67, 22);
            v39 = __ROR4__(v69, 31);
            v35 = __ROR4__(v70, 31);
            v40 = __ROR4__(v71, 31);
            v6 = v60 ^ __ROR4__(v66, 31);
            v37 = v66 ^ __ROR4__(v59, 22) ^ v68;
          }
          while ( v33 != 8 );
          v203 = v40;
          v208 = v39;
          v185 = v36;
          v204 = v27;
          v184 = v38;
          v205 = v35;
          v72 = v173;
          v73 = v197;
          v74 = v175;
          v75 = v199;
          v76 = v178;
          v77 = v180;
          v78 = v202;
          v79 = v183;
          v207 = v37;
          v80 = 0;
          do
          {
            v81 = v74 ^ v76;
            v82 = v79 ^ v77;
            v83 = ~v72 ^ v78 & v76;
            v84 = (v73 | v75) ^ v79;
            v85 = v79 & v73;
            v86 = ~v75 ^ v85;
            v87 = v85 ^ v82;
            v160 = v81 ^ v78 & v76;
            v88 = v86 | v87;
            v89 = v76 ^ (v78 | v72);
            v90 = v78 ^ (v83 | v160);
            v91 = v82 & v84 ^ v86;
            v92 = v90 ^ v91 ^ v87;
            v93 = v81 & v89 ^ v83;
            v94 = ~v89;
            v95 = v160 ^ v93;
            v96 = v94 ^ (v83 | v160);
            v97 = ~v84 ^ (v86 | v87);
            v98 = v93 & (v83 | v160);
            v99 = v73 ^ v88;
            v100 = v91 & v88;
            v101 = v92 ^ __ROR4__(v90, 30);
            v102 = v99 ^ v96;
            v103 = dword_1675FC[v80];
            v104 = v97 ^ v98;
            v105 = v95 ^ v100;
            v106 = v102 ^ __ROR4__(v96, 30);
            v107 = v104 ^ __ROR4__(v98, 30);
            v108 = v101 ^ __ROR4__(v92, 18);
            v109 = v95 ^ v100 ^ __ROR4__(v95, 30);
            v110 = dword_1675DC[v80];
            v111 = v106 ^ __ROR4__(v102, 18);
            ++v80;
            v112 = v107 ^ __ROR4__(v104, 18);
            v113 = v109 ^ __ROR4__(v105, 18);
            v72 = v111 ^ __ROR4__(v106, 22);
            v74 = v112 ^ __ROR4__(v107, 22);
            v76 = v113 ^ __ROR4__(v109, 22);
            v73 = __ROR4__(v111, 31);
            v75 = __ROR4__(v112, 31);
            v77 = __ROR4__(v113, 31);
            v79 = v103 ^ __ROR4__(v108, 31);
            v78 = v110 ^ v108 ^ __ROR4__(v101, 22);
          }
          while ( v80 != 8 );
          v172 = v72;
          v196 = v73;
          v114 = 0;
          v174 = v74;
          v198 = v75;
          v176 = v76;
          v179 = v77;
          v200 = v78;
          v181 = v79;
          v115 = v188;
          v116 = v190;
          v117 = v165;
          v118 = v192;
          v119 = v167;
          v120 = v169;
          v121 = v195;
          result = v171;
          do
          {
            v122 = v117 ^ v119;
            v123 = result ^ v120;
            v124 = ~v115 ^ v121 & v119;
            v125 = (v116 | v118) ^ result;
            v126 = result & v116;
            v127 = ~v118 ^ v126;
            v128 = v126 ^ v123;
            v161 = v122 ^ v121 & v119;
            v129 = v127 | v128;
            v130 = v119 ^ (v121 | v115);
            v131 = v121 ^ (v124 | v161);
            v132 = v123 & v125 ^ v127;
            v133 = v131 ^ v132 ^ v128;
            v134 = v122 & v130 ^ v124;
            v135 = ~v130;
            v136 = v161 ^ v134;
            v137 = v135 ^ (v124 | v161);
            v138 = ~v125 ^ (v127 | v128);
            v139 = v134 & (v124 | v161);
            v140 = v116 ^ v129;
            v141 = v132 & v129;
            v142 = v133 ^ __ROR4__(v131, 30);
            v143 = v140 ^ v137;
            v144 = dword_16763C[v114];
            v145 = v138 ^ v139;
            v146 = v136 ^ v141;
            v147 = v143 ^ __ROR4__(v137, 30);
            v148 = v145 ^ __ROR4__(v139, 30);
            v149 = v142 ^ __ROR4__(v133, 18);
            v150 = v136 ^ v141 ^ __ROR4__(v136, 30);
            v151 = dword_16761C[v114];
            v152 = v147 ^ __ROR4__(v143, 18);
            ++v114;
            v153 = v148 ^ __ROR4__(v145, 18);
            v154 = v150 ^ __ROR4__(v146, 18);
            v115 = v152 ^ __ROR4__(v147, 22);
            v117 = v153 ^ __ROR4__(v148, 22);
            v119 = v154 ^ __ROR4__(v150, 22);
            v116 = __ROR4__(v152, 31);
            v118 = __ROR4__(v153, 31);
            v120 = __ROR4__(v154, 31);
            result = v144 ^ __ROR4__(v149, 31);
            v121 = v151 ^ v149 ^ __ROR4__(v142, 22);
          }
          while ( v114 != 8 );
          v187 = v115;
          v9 = na;
          v193 = v121;
          v3 = 0;
          v189 = v116;
          v164 = v117;
          v191 = v118;
          v166 = v119;
          v168 = v120;
          v170 = result;
          v5 = v207;
          if ( !na )
            break;
        }
        else
        {
          v9 = v7 - v4;
          if ( !na )
            break;
        }
        v8 = v162;
        v4 = 32 - v3;
        v7 = v9;
      }
    }
    v163[9] = v5;
    v163[10] = v204;
    v163[13] = v6;
    v163[11] = v184;
    v163[12] = v185;
    v163[14] = v208;
    v163[15] = v205;
    v163[16] = v203;
    v163[17] = v200;
    v163[18] = v172;
    v163[19] = v174;
    v163[20] = v176;
    v163[21] = v181;
    v163[22] = v196;
    v163[23] = v198;
    v163[24] = v179;
    v163[25] = v193;
    v163[8] = v3;
    v163[26] = v187;
    v163[27] = v164;
    v163[28] = v166;
    v163[29] = v170;
    v163[30] = v189;
    v163[31] = v191;
    v163[32] = v168;
  }
  return result;
}
