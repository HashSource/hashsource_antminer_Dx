unsigned int __fastcall sph_luffa256_0(unsigned int result, char *a2, size_t a3)
{
  unsigned int v3; // r4
  size_t v4; // r3
  unsigned int v5; // r9
  unsigned int v6; // r11
  char *v7; // r1
  char *v8; // r0
  int v9; // r10
  unsigned int v10; // lr
  int v11; // r3
  unsigned int v12; // r8
  int v13; // r12
  int v14; // r0
  int v15; // r5
  unsigned int v16; // r11
  int v17; // r6
  int v18; // r9
  int v19; // r12
  int v20; // r3
  int v21; // r5
  int v22; // r0
  int v23; // r10
  int v24; // r12
  int v25; // r0
  int v26; // r3
  int v27; // r11
  int v28; // r9
  int v29; // r0
  int v30; // r5
  int v31; // lr
  int v32; // r2
  int v33; // r10
  int v34; // r1
  int v35; // r2
  int v36; // r6
  int v37; // r7
  int v38; // r12
  int v39; // r0
  int v40; // r3
  int v41; // r11
  int v42; // r8
  int v43; // r1
  int v44; // r11
  int v45; // r4
  int v46; // r2
  int v47; // r9
  int v48; // r12
  int v49; // r1
  int v50; // r11
  int v51; // r7
  int v52; // r5
  int v53; // r2
  int v54; // r3
  int v55; // r12
  int v56; // r9
  int v57; // r4
  int v58; // r5
  int v59; // r1
  int v60; // r0
  int v61; // r3
  int v62; // r2
  int v63; // r11
  int v64; // r7
  int v65; // r6
  int v66; // r5
  int v67; // r1
  int v68; // r9
  int v69; // r0
  int v70; // r8
  int v71; // r2
  int v72; // r3
  unsigned int v73; // r0
  unsigned int v74; // r4
  int v75; // r7
  int v76; // r1
  int v77; // r5
  unsigned int v78; // r9
  int v79; // r2
  int v80; // lr
  int v81; // r10
  int v82; // r4
  int v83; // r1
  int v84; // r0
  int v85; // r11
  int v86; // r3
  int v87; // r12
  int v88; // r1
  int v89; // r2
  int v90; // lr
  int v91; // r10
  int v92; // r3
  int v93; // r7
  int v94; // r2
  int v95; // r0
  int v96; // r6
  int v97; // r5
  int v98; // r4
  int v99; // r0
  int v100; // r3
  int v101; // r2
  int v102; // lr
  int v103; // r7
  int v104; // r9
  int v105; // r0
  int v106; // r4
  int v107; // r6
  int v108; // r12
  int v109; // r8
  int v110; // r3
  int v111; // r2
  unsigned int v112; // r4
  int v113; // r7
  int v114; // r5
  int v115; // r1
  unsigned int v116; // r9
  int v117; // r2
  int v118; // lr
  int v119; // r10
  unsigned int v120; // r4
  int v121; // r1
  unsigned int v122; // r0
  int v123; // r11
  int v124; // r3
  int v125; // r12
  int v126; // r1
  int v127; // r2
  int v128; // lr
  int v129; // r10
  int v130; // r3
  int v131; // r7
  int v132; // r2
  int v133; // r0
  int v134; // r6
  int v135; // r5
  int v136; // r4
  int v137; // r0
  int v138; // r3
  int v139; // r2
  int v140; // lr
  int v141; // r7
  int v142; // r9
  int v143; // r0
  int v144; // r4
  int v145; // r6
  int v146; // r12
  int v147; // [sp+4h] [bp-98h]
  int v148; // [sp+4h] [bp-98h]
  int v149; // [sp+4h] [bp-98h]
  int v150; // [sp+4h] [bp-98h]
  int v151; // [sp+4h] [bp-98h]
  size_t n; // [sp+8h] [bp-94h]
  char *src; // [sp+Ch] [bp-90h]
  unsigned int *v154; // [sp+10h] [bp-8Ch]
  int v155; // [sp+20h] [bp-7Ch]
  int v156; // [sp+20h] [bp-7Ch]
  int v157; // [sp+24h] [bp-78h]
  int v158; // [sp+24h] [bp-78h]
  int v159; // [sp+28h] [bp-74h]
  int v160; // [sp+28h] [bp-74h]
  int v161; // [sp+28h] [bp-74h]
  unsigned int v162; // [sp+2Ch] [bp-70h]
  void *v163; // [sp+2Ch] [bp-70h]
  int v164; // [sp+30h] [bp-6Ch]
  int v165; // [sp+30h] [bp-6Ch]
  int v166; // [sp+34h] [bp-68h]
  int v167; // [sp+34h] [bp-68h]
  int v168; // [sp+38h] [bp-64h]
  int v169; // [sp+38h] [bp-64h]
  int v170; // [sp+3Ch] [bp-60h]
  int v171; // [sp+3Ch] [bp-60h]
  int v172; // [sp+3Ch] [bp-60h]
  unsigned int v173; // [sp+40h] [bp-5Ch]
  unsigned int v174; // [sp+40h] [bp-5Ch]
  int v175; // [sp+44h] [bp-58h]
  int v176; // [sp+44h] [bp-58h]
  int v177; // [sp+48h] [bp-54h]
  int v178; // [sp+48h] [bp-54h]
  unsigned int v179; // [sp+4Ch] [bp-50h]
  unsigned int v180; // [sp+4Ch] [bp-50h]
  unsigned int v181; // [sp+50h] [bp-4Ch]
  unsigned int v182; // [sp+50h] [bp-4Ch]
  int v183; // [sp+54h] [bp-48h]
  int v184; // [sp+54h] [bp-48h]
  int v185; // [sp+54h] [bp-48h]
  unsigned int v186; // [sp+58h] [bp-44h]
  unsigned int v187; // [sp+58h] [bp-44h]
  unsigned int v188; // [sp+5Ch] [bp-40h]
  unsigned int v189; // [sp+5Ch] [bp-40h]
  int v190; // [sp+60h] [bp-3Ch]
  int v191; // [sp+60h] [bp-3Ch]
  int v192; // [sp+64h] [bp-38h]
  int v193; // [sp+64h] [bp-38h]
  int v194; // [sp+64h] [bp-38h]
  int v195; // [sp+68h] [bp-34h]
  int v196; // [sp+6Ch] [bp-30h]
  unsigned int v197; // [sp+70h] [bp-2Ch]
  int v198; // [sp+70h] [bp-2Ch]
  unsigned int v199; // [sp+74h] [bp-28h]
  int v200; // [sp+74h] [bp-28h]
  int v201; // [sp+78h] [bp-24h]
  int v202; // [sp+78h] [bp-24h]
  int v203; // [sp+7Ch] [bp-20h]
  unsigned int v204; // [sp+80h] [bp-1Ch]
  unsigned int v205; // [sp+84h] [bp-18h]
  unsigned int v206; // [sp+88h] [bp-14h]
  int v207; // [sp+8Ch] [bp-10h]
  int v208; // [sp+90h] [bp-Ch]
  int v209; // [sp+94h] [bp-8h]

  v3 = *(_DWORD *)(result + 32);
  v154 = (unsigned int *)result;
  v4 = 32 - v3;
  n = a3;
  src = a2;
  if ( 32 - v3 > a3 )
  {
    result = (unsigned int)memcpy((void *)(result + v3), a2, a3);
    v154[8] = v3 + n;
  }
  else
  {
    v5 = *(_DWORD *)(result + 36);
    v6 = *(_DWORD *)(result + 52);
    v203 = *(_DWORD *)(result + 40);
    v175 = *(_DWORD *)(result + 44);
    v155 = *(_DWORD *)(result + 48);
    v201 = *(_DWORD *)(result + 56);
    v196 = *(_DWORD *)(result + 60);
    v195 = *(_DWORD *)(result + 64);
    v190 = *(_DWORD *)(result + 68);
    v166 = *(_DWORD *)(result + 72);
    v168 = *(_DWORD *)(result + 76);
    v170 = *(_DWORD *)(result + 80);
    v192 = *(_DWORD *)(result + 84);
    v186 = *(_DWORD *)(result + 88);
    v188 = *(_DWORD *)(result + 92);
    v173 = *(_DWORD *)(result + 96);
    v183 = *(_DWORD *)(result + 100);
    v177 = *(_DWORD *)(result + 104);
    v157 = *(_DWORD *)(result + 108);
    v159 = *(_DWORD *)(result + 112);
    v164 = *(_DWORD *)(result + 116);
    v179 = *(_DWORD *)(result + 120);
    v181 = *(_DWORD *)(result + 124);
    v162 = *(_DWORD *)(result + 128);
    if ( a3 )
    {
      while ( 1 )
      {
        if ( v4 >= n )
          v4 = n;
        v7 = src;
        v8 = (char *)v154 + v3;
        n -= v4;
        v3 += v4;
        src += v4;
        result = (unsigned int)memcpy(v8, v7, v4);
        if ( v3 == 32 )
        {
          v9 = v162 ^ v173 ^ v195;
          v10 = bswap32(v154[7]);
          v11 = v155 ^ v170 ^ v159 ^ v9;
          v12 = bswap32(v154[6]);
          v13 = v175 ^ v168 ^ v157 ^ v9;
          v204 = bswap32(v154[3]);
          v206 = bswap32(v154[2]);
          v197 = bswap32(v154[5]);
          v199 = bswap32(v154[4]);
          v14 = v6 ^ v192 ^ v164;
          v193 = v11 ^ v192;
          v171 = v13 ^ v170;
          v165 = __ROR4__(v164 ^ v11 ^ v12 ^ v10 ^ v206, 30);
          v207 = v13 ^ v155;
          v208 = v6 ^ v11;
          v15 = v183;
          v16 = bswap32(v154[1]);
          v205 = bswap32(*v154);
          v17 = v183 ^ v190 ^ v5;
          v184 = v190 ^ v9;
          v18 = v9 ^ v5;
          v160 = v13 ^ v159 ^ v16;
          v209 = v15 ^ v9;
          v156 = v14 ^ v179;
          v19 = v201 ^ v14;
          v20 = v201 ^ v186 ^ v179;
          v21 = v186 ^ v14;
          v147 = v17 ^ v9;
          v22 = v188 ^ v196 ^ v181;
          v202 = v19;
          v174 = __ROR4__(v12 ^ v173 ^ v22, 31);
          v187 = __ROR4__(v21 ^ v199, 31);
          v182 = __ROR4__(v181 ^ v20 ^ v199, 30);
          v23 = v195 ^ v22;
          v189 = __ROR4__(v188 ^ v20 ^ v197, 31);
          v163 = (void *)__ROR4__(v197 ^ v162 ^ v22, 30);
          v172 = v171 ^ v10 ^ v206;
          v24 = v196 ^ v20;
          v25 = v177 ^ v203 ^ v166;
          v169 = v16 ^ v25 ^ v168;
          v194 = __ROR4__(v193 ^ v10 ^ v204, 31);
          v26 = v16 ^ v147 ^ v203;
          v180 = __ROR4__(v10 ^ v204 ^ v156, 30);
          v176 = v25 ^ v175 ^ v206;
          v27 = v199 ^ v208;
          v161 = v12 ^ v160;
          v178 = v10 ^ v177 ^ v147 ^ v12;
          v191 = v10 ^ v184;
          v185 = v12 ^ v209;
          v167 = v10 ^ v205 ^ v147 ^ v166;
          v158 = v10 ^ v205 ^ v25 ^ v157;
          v28 = v205 ^ v18;
          v29 = v10 ^ v23;
          v30 = v207 ^ v204;
          v31 = 0;
          v32 = v176;
          v33 = v197 ^ v202;
          v34 = v12 ^ v24;
          do
          {
            v35 = v32 ^ v30;
            v36 = v27 ^ v29;
            v37 = v35 ^ v28 & v30;
            v38 = ~v26 ^ v28 & v30;
            v39 = (v33 | v34) ^ v27;
            v40 = (v28 | v26) ^ v30;
            v41 = v27 & v33;
            v42 = v38 | v37;
            v43 = ~v34 ^ v41;
            v44 = v36 ^ v41;
            v45 = v36 & v39 ^ v43;
            v46 = v38 ^ v35 & v40;
            v47 = (v38 | v37) ^ v28;
            v48 = v43 | v44;
            v49 = ~v39 ^ (v43 | v44);
            v50 = v47 ^ v45 ^ v44;
            v51 = v37 ^ v46;
            v52 = v48 ^ v33;
            v53 = v46 & v42;
            v54 = ~v40 ^ v42;
            v55 = v45 & v48;
            v56 = v50 ^ __ROR4__(v47, 30);
            v57 = dword_FD4F0[v31];
            v58 = v52 ^ v54;
            v59 = v49 ^ v53;
            v60 = v51 ^ v55;
            v61 = v58 ^ __ROR4__(v54, 30);
            v62 = v59 ^ __ROR4__(v53, 30);
            v63 = v56 ^ __ROR4__(v50, 18);
            v64 = v51 ^ v55 ^ __ROR4__(v51, 30);
            v65 = dword_FD4D0[v31];
            v66 = v61 ^ __ROR4__(v58, 18);
            ++v31;
            v67 = v62 ^ __ROR4__(v59, 18);
            v68 = v63 ^ __ROR4__(v56, 22);
            v69 = v64 ^ __ROR4__(v60, 18);
            v26 = v66 ^ __ROR4__(v61, 22);
            v33 = __ROR4__(v66, 31);
            v32 = v67 ^ __ROR4__(v62, 22);
            v30 = v69 ^ __ROR4__(v64, 22);
            v34 = __ROR4__(v67, 31);
            v29 = __ROR4__(v69, 31);
            v27 = v57 ^ __ROR4__(v63, 31);
            v28 = v68 ^ v65;
          }
          while ( v31 != 8 );
          v195 = v29;
          v70 = 0;
          v155 = v30;
          v203 = v26;
          v175 = v32;
          v196 = v34;
          v198 = v28;
          v72 = v167;
          v71 = v169;
          v73 = v189;
          v75 = v172;
          v74 = v174;
          v77 = v191;
          v76 = v194;
          v78 = v187;
          v201 = v33;
          v200 = v27;
          do
          {
            v79 = v71 ^ v75;
            v80 = v76 ^ v74;
            v148 = v79 ^ v77 & v75;
            v81 = ~v72 ^ v77 & v75;
            v82 = (v78 | v73) ^ v76;
            v83 = v76 & v78;
            v84 = ~v73 ^ v83;
            v85 = v81 | v148;
            v86 = (v72 | v77) ^ v75;
            v87 = v84 ^ v80 & v82;
            v88 = v80 ^ v83;
            v89 = v81 ^ v79 & v86;
            v90 = (v81 | v148) ^ v77 ^ v87 ^ v88;
            v91 = v84 | v88;
            v92 = ~v86 ^ v85;
            v93 = v148 ^ v89;
            v94 = v89 & v85;
            v95 = ~v82 ^ (v84 | v88);
            v96 = v90 ^ __ROR4__(v85 ^ v77, 30);
            v97 = v91 ^ v78 ^ v92;
            v98 = v93 ^ v87 & v91;
            v99 = v95 ^ v94;
            v100 = v97 ^ __ROR4__(v92, 30);
            v101 = v99 ^ __ROR4__(v94, 30);
            v149 = dword_FD530[v70];
            v102 = v96 ^ __ROR4__(v90, 18);
            v103 = v98 ^ __ROR4__(v93, 30);
            v104 = v100 ^ __ROR4__(v97, 18);
            v105 = v101 ^ __ROR4__(v99, 18);
            v106 = v103 ^ __ROR4__(v98, 18);
            v107 = v102 ^ __ROR4__(v96, 22);
            v108 = dword_FD510[v70];
            v72 = v104 ^ __ROR4__(v100, 22);
            ++v70;
            v71 = v105 ^ __ROR4__(v101, 22);
            v75 = v106 ^ __ROR4__(v103, 22);
            v78 = __ROR4__(v104, 31);
            v73 = __ROR4__(v105, 31);
            v74 = __ROR4__(v106, 31);
            v76 = v149 ^ __ROR4__(v102, 31);
            v77 = v107 ^ v108;
          }
          while ( v70 != 8 );
          v190 = v107 ^ v108;
          v192 = v76;
          v109 = 0;
          v166 = v72;
          v186 = v78;
          v168 = v71;
          v188 = v73;
          v170 = v75;
          v173 = v74;
          v110 = v178;
          v111 = v158;
          result = v182;
          v113 = v161;
          v112 = (unsigned int)v163;
          v114 = v185;
          v115 = v165;
          v116 = v180;
          do
          {
            v117 = v111 ^ v113;
            v118 = v115 ^ v112;
            v150 = v117 ^ v114 & v113;
            v119 = ~v110 ^ v114 & v113;
            v120 = (v116 | result) ^ v115;
            v121 = v115 & v116;
            v122 = ~result ^ v121;
            v123 = v119 | v150;
            v124 = (v110 | v114) ^ v113;
            v125 = v122 ^ v118 & v120;
            v126 = v118 ^ v121;
            v127 = v119 ^ v117 & v124;
            v128 = (v119 | v150) ^ v114 ^ v125 ^ v126;
            v129 = v122 | v126;
            v130 = ~v124 ^ v123;
            v131 = v150 ^ v127;
            v132 = v127 & v123;
            v133 = ~v120 ^ (v122 | v126);
            v134 = v128 ^ __ROR4__(v123 ^ v114, 30);
            v135 = v129 ^ v116 ^ v130;
            v136 = v131 ^ v125 & v129;
            v137 = v133 ^ v132;
            v138 = v135 ^ __ROR4__(v130, 30);
            v139 = v137 ^ __ROR4__(v132, 30);
            v151 = dword_FD570[v109];
            v140 = v134 ^ __ROR4__(v128, 18);
            v141 = v136 ^ __ROR4__(v131, 30);
            v142 = v138 ^ __ROR4__(v135, 18);
            v143 = v139 ^ __ROR4__(v137, 18);
            v144 = v141 ^ __ROR4__(v136, 18);
            v145 = v140 ^ __ROR4__(v134, 22);
            v146 = dword_FD550[v109];
            v110 = v142 ^ __ROR4__(v138, 22);
            ++v109;
            v111 = v143 ^ __ROR4__(v139, 22);
            v113 = v144 ^ __ROR4__(v141, 22);
            v116 = __ROR4__(v142, 31);
            result = __ROR4__(v143, 31);
            v112 = __ROR4__(v144, 31);
            v115 = v151 ^ __ROR4__(v140, 31);
            v114 = v145 ^ v146;
          }
          while ( v109 != 8 );
          v177 = v110;
          v179 = v116;
          v159 = v113;
          v162 = v112;
          v3 = 0;
          v157 = v111;
          v181 = result;
          v183 = v145 ^ v146;
          v164 = v115;
          v5 = v198;
          v6 = v200;
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
    v154[9] = v5;
    v154[10] = v203;
    v154[13] = v6;
    v154[11] = v175;
    v154[12] = v155;
    v154[14] = v201;
    v154[15] = v196;
    v154[16] = v195;
    v154[17] = v190;
    v154[18] = v166;
    v154[19] = v168;
    v154[20] = v170;
    v154[21] = v192;
    v154[22] = v186;
    v154[23] = v188;
    v154[24] = v173;
    v154[25] = v183;
    v154[8] = v3;
    v154[26] = v177;
    v154[27] = v157;
    v154[28] = v159;
    v154[29] = v164;
    v154[30] = v179;
    v154[31] = v181;
    v154[32] = v162;
  }
  return result;
}
