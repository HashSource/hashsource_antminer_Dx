int __fastcall sub_208E0(unsigned __int16 *a1, unsigned int a2, int a3)
{
  int v3; // r8
  unsigned __int16 *v4; // r6
  int v5; // r3
  int v6; // lr
  bool v7; // cc
  unsigned int v8; // r7
  int v9; // r0
  int v10; // r9
  int v11; // r3
  int v12; // r4
  int v13; // r2
  int v14; // r10
  int v15; // r8
  int v16; // lr
  int v17; // r4
  int v18; // r2
  int v19; // lr
  int v20; // r2
  int v21; // r4
  int v22; // lr
  int v23; // r2
  int v24; // r4
  int v25; // r8
  int v26; // r4
  int v27; // r3
  int v28; // lr
  int v29; // r3
  int v30; // r5
  int v31; // r2
  int v32; // r4
  int v33; // r3
  int v34; // r2
  int v35; // r5
  int v36; // r3
  int v37; // r2
  unsigned __int16 *v38; // r6
  int v39; // r2
  int v40; // r4
  int v41; // r3
  int v42; // lr
  int v43; // r2
  int v44; // r3
  int v45; // r4
  int v46; // r2
  int v47; // r1
  int v48; // r2
  int v49; // r3
  int v50; // r4
  int v51; // r3
  int v52; // r2
  unsigned __int16 *v53; // r7
  unsigned int v54; // r6
  int v55; // r1
  int v56; // r10
  int v57; // r5
  int v58; // r0
  int v59; // r3
  int v60; // r4
  int v61; // r9
  int v62; // r4
  int v63; // lr
  int v64; // r1
  int v65; // r4
  int v66; // r2
  int v67; // r3
  int v68; // r4
  int v69; // r3
  int v70; // r2
  int v71; // r4
  int v72; // r0
  int v73; // r2
  int v74; // r5
  int v75; // r1
  int v76; // r4
  int v77; // r3
  int v78; // r2
  int v79; // r5
  int v80; // r2
  int v81; // r4
  int v82; // lr
  int v83; // t2
  int v84; // r2
  int v85; // r3
  unsigned __int16 *v86; // r1
  int v87; // r5
  int v88; // r4
  int v89; // r7
  int v90; // r2
  int v91; // r3
  int v92; // r8
  int v93; // lr
  int v94; // r2
  int v95; // lr
  int v96; // r3
  int v97; // r8
  int v98; // r2
  int v99; // r5
  int v100; // r2
  int v101; // r3
  int v102; // r2
  unsigned int v103; // r5
  unsigned __int16 *v104; // r6
  int v105; // r10
  int v106; // r2
  int v107; // r5
  int v108; // r12
  int v109; // r4
  int v110; // r0
  int v111; // r9
  int v112; // r2
  int v113; // r5
  int v114; // r3
  int v115; // r4
  int v116; // r8
  int v117; // lr
  int v118; // r3
  int v119; // r12
  int v120; // r0
  int v121; // r3
  int v122; // r8
  int v123; // r0
  int v124; // r3
  int v125; // r12
  int v126; // r8
  int v127; // r5
  int v128; // lr
  int v129; // r3
  int v130; // r2
  int v131; // r4
  int v132; // r7
  int v133; // r4
  int v134; // r8
  int v135; // r3
  int v136; // lr
  int v137; // r4
  int v138; // r12
  int v139; // r2
  int v140; // r4
  int v141; // lr
  int v142; // t2
  int v143; // r2
  int v144; // r3
  unsigned __int16 *v145; // r1
  int v146; // r6
  int v147; // r2
  int v148; // r7
  int v149; // r12
  int v150; // r3
  int v151; // r8
  int v152; // lr
  int v153; // r2
  int v154; // lr
  int v155; // r3
  int v156; // r8
  int v157; // r2
  int v158; // r6
  int v159; // r2
  int v160; // r3
  int v161; // r2
  int v162; // r2
  int v163; // r3
  int v164; // r2
  int v165; // lr
  int v166; // r3
  int v167; // r2
  int v168; // r2
  int v170; // r4

  v3 = a3 - 559038737 + a2;
  if ( !((_DWORD)a1 << 30) )
  {
    if ( a2 <= 0xC )
    {
      v8 = a2;
      v5 = a3 - 559038737 + a2;
      v6 = v5;
    }
    else
    {
      if ( a2 - 12 <= 0x18 )
      {
        v8 = a2;
        v5 = a3 - 559038737 + a2;
        v6 = v5;
      }
      else
      {
        v4 = a1 + 12;
        v5 = a3 - 559038737 + a2;
        v6 = v5;
        do
        {
          v7 = a2 - 36 > 0x18;
          v8 = a2 - 24;
          v9 = *((_DWORD *)v4 - 4) + v5;
          v10 = *((_DWORD *)v4 - 2);
          v11 = *((_DWORD *)v4 - 1);
          v12 = *((_DWORD *)v4 - 5) + v6;
          v13 = (*((_DWORD *)v4 - 6) - v9 + v3) ^ __ROR4__(v9, 28);
          v14 = v12 + v9;
          v15 = *((_DWORD *)v4 - 3);
          a1 = v4;
          v16 = v12 - v13;
          v17 = v13 + v14;
          v18 = v16 ^ __ROR4__(v13, 26);
          __pld(v4 + 24);
          a2 -= 24;
          v4 += 12;
          v19 = (v14 - v18) ^ __ROR4__(v18, 24);
          v20 = v18 + v17;
          v21 = (v17 - v19) ^ __ROR4__(v19, 16);
          v22 = v19 + v20;
          v23 = (v20 - v21) ^ __ROR4__(v21, 13);
          v24 = v21 + v22;
          v25 = v15 + v24;
          v26 = v24 + v10 + v23;
          v27 = v11 + ((v22 - v23) ^ __ROR4__(v23, 28));
          v28 = v27 + v26;
          v29 = (v25 - v27) ^ __ROR4__(v27, 28);
          v30 = v28 + v29;
          v31 = (v26 - v29) ^ __ROR4__(v29, 26);
          v32 = v28 + v29 + v31;
          v33 = (v28 - v31) ^ __ROR4__(v31, 24);
          v34 = v30 - v33;
          v35 = v32 + v33;
          v36 = v34 ^ __ROR4__(v33, 16);
          v3 = v35 + v36;
          v37 = (v32 - v36) ^ __ROR4__(v36, 13);
          v6 = v35 + v36 + v37;
          v5 = (v35 - v37) ^ __ROR4__(v37, 28);
        }
        while ( v7 );
      }
      v38 = a1 + 6;
      do
      {
        v8 -= 12;
        v39 = *((_DWORD *)v38 - 3);
        v40 = *((_DWORD *)v38 - 2);
        a1 = v38;
        v41 = v5 + *((_DWORD *)v38 - 1);
        v38 += 6;
        v42 = v6 + v40;
        v43 = (v39 - v41 + v3) ^ __ROR4__(v41, 28);
        v44 = v41 + v42;
        v45 = v44 + v43;
        v46 = (v42 - v43) ^ __ROR4__(v43, 26);
        v47 = v45 + v46;
        v48 = (v44 - v46) ^ __ROR4__(v46, 24);
        v49 = v45 - v48;
        v50 = v47 + v48;
        v51 = v49 ^ __ROR4__(v48, 16);
        v3 = v47 + v48 + v51;
        v52 = (v47 - v51) ^ __ROR4__(v51, 13);
        v6 = v3 + v52;
        v5 = (v50 - v52) ^ __ROR4__(v52, 28);
      }
      while ( v8 > 0xC );
    }
    switch ( v8 )
    {
      case 1u:
        goto LABEL_36;
      case 2u:
        goto LABEL_41;
      case 3u:
        v162 = (*(_DWORD *)a1 & 0xFFFFFF) + v3;
        goto LABEL_37;
      case 4u:
        v162 = *(_DWORD *)a1 + v3;
        goto LABEL_37;
      case 5u:
        v6 += *((unsigned __int8 *)a1 + 4);
        v162 = *(_DWORD *)a1 + v3;
        goto LABEL_37;
      case 6u:
        v6 += a1[2];
        v162 = *(_DWORD *)a1 + v3;
        goto LABEL_37;
      case 7u:
        v6 += *((_DWORD *)a1 + 1) & 0xFFFFFF;
        v162 = v3 + *(_DWORD *)a1;
        goto LABEL_37;
      case 8u:
        v6 += *((_DWORD *)a1 + 1);
        v162 = *(_DWORD *)a1 + v3;
        goto LABEL_37;
      case 9u:
        v170 = *((unsigned __int8 *)a1 + 8);
        goto LABEL_49;
      case 0xAu:
        v170 = a1[4];
        goto LABEL_49;
      case 0xBu:
        v6 += *((_DWORD *)a1 + 1);
        v5 += *((_DWORD *)a1 + 2) & 0xFFFFFF;
        v162 = v3 + *(_DWORD *)a1;
        goto LABEL_37;
      case 0xCu:
        v170 = *((_DWORD *)a1 + 2);
LABEL_49:
        v5 += v170;
        v6 += *((_DWORD *)a1 + 1);
        v162 = *(_DWORD *)a1 + v3;
        goto LABEL_37;
      default:
        return v5;
    }
  }
  if ( ((unsigned __int8)a1 & 1) == 0 )
  {
    if ( a2 <= 0xC )
    {
      v54 = a2;
      v5 = a3 - 559038737 + a2;
      v6 = v5;
    }
    else
    {
      if ( a2 - 12 <= 0x18 )
      {
        v54 = a2;
        v5 = a3 - 559038737 + a2;
        v6 = v5;
      }
      else
      {
        v53 = a1 + 12;
        v5 = a3 - 559038737 + a2;
        v6 = v5;
        do
        {
          v54 = a2 - 24;
          v7 = a2 - 36 > 0x18;
          v55 = *(v53 - 9);
          v56 = *(v53 - 1);
          v57 = *(v53 - 2);
          v58 = *(v53 - 8) + (*(v53 - 7) << 16) + v5;
          v59 = *(v53 - 10);
          v60 = *(v53 - 12) + (*(v53 - 11) << 16);
          v61 = *(v53 - 5);
          __pld(v53 + 18);
          v62 = (v60 - v58 + v3) ^ __ROR4__(v58, 28);
          v63 = v6 + v59 + (v55 << 16);
          v64 = (v63 - v62) ^ __ROR4__(v62, 26);
          v65 = v62 + v63 + v58;
          v66 = v64 + v65;
          v67 = (v63 + v58 - v64) ^ __ROR4__(v64, 24);
          v68 = (v65 - v67) ^ __ROR4__(v67, 16);
          v69 = v67 + v66;
          v70 = (v66 - v68) ^ __ROR4__(v68, 13);
          v71 = v68 + v69;
          v72 = (v69 - v70) ^ __ROR4__(v70, 28);
          v73 = v70 + v71 + *(v53 - 4) + (*(v53 - 3) << 16);
          v74 = v57 + (v56 << 16) + v72;
          v75 = (*(v53 - 6) + (v61 << 16) + v71 - v74) ^ __ROR4__(v74, 28);
          v76 = v74 + v73 + v75;
          v77 = (v73 - v75) ^ __ROR4__(v75, 26);
          a2 = v54;
          v78 = v74 + v73 - v77;
          v79 = v76 + v77;
          v80 = v78 ^ __ROR4__(v77, 24);
          a1 = v53;
          v53 += 12;
          v81 = v76 - v80;
          v82 = v79 + v80;
          v83 = __ROR4__(v80, 16);
          v3 = v79 + v80 + (v81 ^ v83);
          v84 = (v79 - (v81 ^ v83)) ^ __ROR4__(v81 ^ v83, 13);
          v85 = v82 - v84;
          v6 = v3 + v84;
          v5 = v85 ^ __ROR4__(v84, 28);
        }
        while ( v7 );
      }
      v86 = a1 + 6;
      do
      {
        v87 = *(v86 - 1);
        v54 -= 12;
        v88 = *(v86 - 2);
        v89 = *(v86 - 5);
        a1 = v86;
        v90 = *(v86 - 6);
        v86 += 6;
        v91 = v5 + v88 + (v87 << 16);
        v92 = (v3 + v90 + (v89 << 16) - v91) ^ __ROR4__(v91, 28);
        v93 = v6 + *(v86 - 10) + (*(v86 - 9) << 16);
        v94 = v93 - v92;
        v95 = v93 + v91;
        v96 = v94 ^ __ROR4__(v92, 26);
        v97 = v92 + v95;
        v98 = (v95 - v96) ^ __ROR4__(v96, 24);
        v99 = v97 + v96 + v98;
        v100 = (v97 - v98) ^ __ROR4__(v98, 16);
        v101 = v97 + v96 - v100;
        v3 = v99 + v100;
        v102 = v101 ^ __ROR4__(v100, 13);
        v6 = v3 + v102;
        v5 = (v99 - v102) ^ __ROR4__(v102, 28);
      }
      while ( v54 > 0xC );
    }
    switch ( v54 )
    {
      case 1u:
        goto LABEL_36;
      case 2u:
        goto LABEL_41;
      case 3u:
        v3 += *((unsigned __int8 *)a1 + 2) << 16;
LABEL_41:
        v162 = *a1 + v3;
        goto LABEL_37;
      case 4u:
        goto LABEL_61;
      case 5u:
        v6 += *((unsigned __int8 *)a1 + 4);
LABEL_61:
        v162 = *a1 + v3 + (a1[1] << 16);
        goto LABEL_37;
      case 6u:
        goto LABEL_59;
      case 7u:
        v6 += *((unsigned __int8 *)a1 + 6) << 16;
LABEL_59:
        v162 = *a1 + v3 + (a1[1] << 16);
        v6 += a1[2];
        goto LABEL_37;
      case 8u:
        goto LABEL_57;
      case 9u:
        v5 += *((unsigned __int8 *)a1 + 8);
LABEL_57:
        v6 += a1[2] + (a1[3] << 16);
        v162 = *a1 + v3 + (a1[1] << 16);
        goto LABEL_37;
      case 0xAu:
        goto LABEL_55;
      case 0xBu:
        v5 += *((unsigned __int8 *)a1 + 10) << 16;
LABEL_55:
        v6 += a1[2] + (a1[3] << 16);
        v162 = *a1 + v3 + (a1[1] << 16);
        v5 += a1[4];
        goto LABEL_37;
      case 0xCu:
        v5 += a1[4] + (a1[5] << 16);
        v6 += a1[2] + (a1[3] << 16);
        v162 = *a1 + v3 + (a1[1] << 16);
        goto LABEL_37;
      default:
        return v5;
    }
  }
  if ( a2 > 0xC )
  {
    if ( a2 - 12 <= 0x18 )
    {
      v103 = a2;
      v5 = a3 - 559038737 + a2;
      v6 = v5;
    }
    else
    {
      v104 = a1 + 12;
      v5 = a3 - 559038737 + a2;
      v6 = v5;
      do
      {
        v105 = *((unsigned __int8 *)v104 - 6);
        v106 = (*((unsigned __int8 *)v104 - 22) << 16)
             + (*((unsigned __int8 *)v104 - 23) << 8)
             + *((unsigned __int8 *)v104 - 24);
        v107 = *((unsigned __int8 *)v104 - 21);
        v108 = *((unsigned __int8 *)v104 - 19);
        v109 = *((unsigned __int8 *)v104 - 18) << 16;
        v110 = (*((unsigned __int8 *)v104 - 14) << 16)
             + (*((unsigned __int8 *)v104 - 15) << 8)
             + *((unsigned __int8 *)v104 - 16)
             + (*((unsigned __int8 *)v104 - 13) << 24)
             + v5;
        v111 = *((unsigned __int8 *)v104 - 2);
        __pld((char *)v104 + 25);
        v112 = v106 + (v107 << 24);
        v113 = *((unsigned __int8 *)v104 - 20);
        v114 = v109 + (v108 << 8);
        v115 = *((unsigned __int8 *)v104 - 17);
        __pld(v104 + 12);
        v116 = (v3 + v112 - v110) ^ __ROR4__(v110, 28);
        v117 = v6 + v114 + v113 + (v115 << 24);
        v118 = v117 + v110;
        v119 = (v117 - v116) ^ __ROR4__(v116, 26);
        v120 = v116 + v117 + v110;
        v121 = (v118 - v119) ^ __ROR4__(v119, 24);
        v122 = v119 + v120;
        v123 = (v120 - v121) ^ __ROR4__(v121, 16);
        v124 = v121 + v122;
        v125 = (v122 - v123) ^ __ROR4__(v123, 13);
        v126 = v123 + v124;
        v127 = (*((unsigned __int8 *)v104 - 7) << 8) + (v105 << 16);
        v128 = *((unsigned __int8 *)v104 - 8);
        a1 = v104;
        v129 = ((v124 - v125) ^ __ROR4__(v125, 28))
             + (*((unsigned __int8 *)v104 - 3) << 8)
             + (v111 << 16)
             + *((unsigned __int8 *)v104 - 4)
             + (*((unsigned __int8 *)v104 - 1) << 24);
        v130 = *((unsigned __int8 *)v104 - 5);
        v131 = (*((unsigned __int8 *)v104 - 11) << 8)
             + (*((unsigned __int8 *)v104 - 10) << 16)
             + *((unsigned __int8 *)v104 - 12)
             + (*((unsigned __int8 *)v104 - 9) << 24);
        v104 += 12;
        v132 = v127 + v128;
        v103 = a2 - 24;
        v133 = (v131 + v126 - v129) ^ __ROR4__(v129, 28);
        v134 = v126 + v132 + (v130 << 24) + v125;
        v135 = v129 + v134;
        v136 = (v134 - v133) ^ __ROR4__(v133, 26);
        v137 = v133 + v135;
        v7 = a2 - 36 > 0x18;
        v138 = v137 + v136;
        v139 = (v135 - v136) ^ __ROR4__(v136, 24);
        a2 -= 24;
        v140 = v137 - v139;
        v141 = v138 + v139;
        v142 = __ROR4__(v139, 16);
        v3 = v138 + v139 + (v140 ^ v142);
        v143 = (v138 - (v140 ^ v142)) ^ __ROR4__(v140 ^ v142, 13);
        v144 = v141 - v143;
        v6 = v3 + v143;
        v5 = v144 ^ __ROR4__(v143, 28);
      }
      while ( v7 );
    }
    v145 = a1 + 6;
    do
    {
      v146 = *((unsigned __int8 *)v145 - 3);
      v103 -= 12;
      v147 = *((unsigned __int8 *)v145 - 11);
      v148 = *((unsigned __int8 *)v145 - 2);
      a1 = v145;
      v149 = *((unsigned __int8 *)v145 - 10);
      v145 += 6;
      v150 = v5 + (v146 << 8) + (v148 << 16) + *((unsigned __int8 *)v145 - 16) + (*((unsigned __int8 *)v145 - 13) << 24);
      v151 = (v3
            + (v147 << 8)
            + (v149 << 16)
            + *((unsigned __int8 *)v145 - 24)
            + (*((unsigned __int8 *)v145 - 21) << 24)
            - v150)
           ^ __ROR4__(v150, 28);
      v152 = v6
           + (*((unsigned __int8 *)v145 - 19) << 8)
           + (*((unsigned __int8 *)v145 - 18) << 16)
           + *((unsigned __int8 *)v145 - 20)
           + (*((unsigned __int8 *)v145 - 17) << 24);
      v153 = v152 - v151;
      v154 = v152 + v150;
      v155 = v153 ^ __ROR4__(v151, 26);
      v156 = v151 + v154;
      v157 = (v154 - v155) ^ __ROR4__(v155, 24);
      v158 = v156 + v155 + v157;
      v159 = (v156 - v157) ^ __ROR4__(v157, 16);
      v160 = v156 + v155 - v159;
      v3 = v158 + v159;
      v161 = v160 ^ __ROR4__(v159, 13);
      v6 = v3 + v161;
      v5 = (v158 - v161) ^ __ROR4__(v161, 28);
    }
    while ( v103 > 0xC );
  }
  else
  {
    v103 = a2;
    v5 = a3 - 559038737 + a2;
    v6 = v5;
  }
  switch ( v103 )
  {
    case 1u:
      goto LABEL_36;
    case 2u:
      goto LABEL_35;
    case 3u:
      goto LABEL_34;
    case 4u:
      goto LABEL_33;
    case 5u:
      goto LABEL_32;
    case 6u:
      goto LABEL_31;
    case 7u:
      goto LABEL_30;
    case 8u:
      goto LABEL_29;
    case 9u:
      goto LABEL_28;
    case 0xAu:
      goto LABEL_27;
    case 0xBu:
      goto LABEL_26;
    case 0xCu:
      v5 += *((unsigned __int8 *)a1 + 11) << 24;
LABEL_26:
      v5 += *((unsigned __int8 *)a1 + 10) << 16;
LABEL_27:
      v5 += *((unsigned __int8 *)a1 + 9) << 8;
LABEL_28:
      v5 += *((unsigned __int8 *)a1 + 8);
LABEL_29:
      v6 += *((unsigned __int8 *)a1 + 7) << 24;
LABEL_30:
      v6 += *((unsigned __int8 *)a1 + 6) << 16;
LABEL_31:
      v6 += *((unsigned __int8 *)a1 + 5) << 8;
LABEL_32:
      v6 += *((unsigned __int8 *)a1 + 4);
LABEL_33:
      v3 += *((unsigned __int8 *)a1 + 3) << 24;
LABEL_34:
      v3 += *((unsigned __int8 *)a1 + 2) << 16;
LABEL_35:
      v3 += *((unsigned __int8 *)a1 + 1) << 8;
LABEL_36:
      v162 = *(unsigned __int8 *)a1 + v3;
LABEL_37:
      v163 = (v6 ^ v5) - __ROR4__(v6, 18);
      v164 = (v162 ^ v163) - __ROR4__(v163, 21);
      v165 = (v6 ^ v164) - __ROR4__(v164, 7);
      v166 = (v163 ^ v165) - __ROR4__(v165, 16);
      v167 = (v164 ^ v166) - __ROR4__(v166, 28);
      v168 = (v165 ^ v167) - __ROR4__(v167, 18);
      v5 = (v166 ^ v168) - __ROR4__(v168, 8);
      break;
    default:
      return v5;
  }
  return v5;
}
