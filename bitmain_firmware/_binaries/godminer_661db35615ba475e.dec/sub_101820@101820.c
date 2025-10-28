int __fastcall sub_101820(unsigned __int16 *a1, unsigned int a2, int a3)
{
  int v3; // r2
  unsigned __int16 *v4; // r4
  int v5; // r3
  int v6; // r7
  unsigned int v7; // lr
  bool v8; // cc
  int v9; // r3
  int v10; // r6
  int v11; // r5
  int v12; // r12
  int v13; // r2
  int v14; // r3
  int v15; // r7
  int v16; // r8
  int v17; // r2
  int v18; // r12
  int v19; // r2
  int v20; // r3
  int v21; // r8
  int v22; // r3
  int v23; // r7
  int v24; // r6
  int v25; // r5
  int v26; // r3
  int v27; // t2
  int v28; // r7
  int v29; // r12
  int v30; // t2
  int v31; // r2
  int v32; // r3
  int v33; // r6
  int v34; // r12
  int v35; // r3
  int v36; // r6
  int v37; // r6
  unsigned __int16 *v38; // r4
  int v39; // r5
  int v40; // r12
  int v41; // r3
  int v42; // r12
  int v43; // r7
  int v44; // r3
  int v45; // r2
  int v46; // r12
  int v47; // r2
  int v48; // r5
  int v49; // r3
  int v50; // r1
  unsigned __int16 *v51; // r4
  int v52; // r5
  unsigned int v53; // lr
  int v54; // r12
  int v55; // r1
  int v56; // r0
  int v57; // r6
  int v58; // r3
  int v59; // r2
  int v60; // r12
  int v61; // r3
  int v62; // r0
  int v63; // r2
  int v64; // r3
  int v65; // r0
  int v66; // r5
  int v67; // r3
  int v68; // r0
  int v69; // r5
  int v70; // r3
  int v71; // r2
  int v72; // r0
  int v73; // r3
  int v74; // r12
  int v75; // r2
  int v76; // r5
  int v77; // r12
  int v78; // r6
  int v79; // r12
  int v80; // r12
  unsigned __int16 *v81; // r4
  int v82; // r5
  int v83; // r12
  int v84; // r6
  int v85; // r1
  int v86; // r3
  int v87; // r2
  int v88; // r12
  int v89; // r7
  int v90; // r3
  int v91; // r2
  int v92; // r1
  int v93; // r5
  int v94; // r1
  int v95; // r3
  int v96; // r1
  unsigned int v97; // lr
  unsigned __int16 *v98; // r4
  int v99; // r9
  int v100; // r3
  int v101; // r2
  int v102; // r6
  int v103; // r12
  int v104; // r3
  int v105; // r0
  int v106; // r2
  int v107; // r7
  int v108; // r8
  int v109; // r3
  int v110; // r0
  int v111; // r12
  int v112; // r1
  int v113; // r5
  int v114; // r0
  int v115; // r1
  int v116; // r12
  int v117; // r2
  int v118; // r3
  int v119; // r12
  int v120; // r5
  int v121; // r2
  int v122; // r12
  int v123; // r5
  int v124; // r3
  int v125; // r12
  int v126; // r12
  unsigned __int16 *v127; // r4
  int v128; // r5
  int v129; // r1
  int v130; // r6
  int v131; // r8
  int v132; // r3
  int v133; // r2
  int v134; // r12
  int v135; // r3
  int v136; // r1
  int v137; // r2
  int v138; // r12
  int v139; // r1
  int v140; // r5
  int v141; // r1
  int v142; // r1
  int v143; // r2
  int v144; // r3
  int v145; // r2
  int v146; // r7
  int v147; // r3
  int v148; // r2
  int v149; // r2
  __int64 v151; // r0
  int v152; // lr

  v3 = a3 - 559038737 + a2;
  if ( ((unsigned __int8)a1 & 3) == 0 )
  {
    if ( a2 <= 0xC )
    {
      v7 = a2;
      v5 = v3;
      v6 = v3;
    }
    else
    {
      if ( a2 - 12 <= 0x18 )
      {
        v7 = a2;
        v5 = v3;
        v6 = v3;
      }
      else
      {
        v4 = a1 + 12;
        v5 = v3;
        v6 = v3;
        do
        {
          v7 = a2 - 24;
          v8 = a2 - 36 > 0x18;
          v9 = v5 + *((_DWORD *)v4 - 4);
          v10 = *((_DWORD *)v4 - 1);
          v11 = *((_DWORD *)v4 - 3);
          v12 = v6 + *((_DWORD *)v4 - 5);
          v13 = (*((_DWORD *)v4 - 6) - v9 + v3) ^ __ROR4__(v9, 28);
          v14 = v12 + v9;
          v15 = *((_DWORD *)v4 - 2);
          a1 = v4;
          v16 = v13 + v14;
          v17 = (v12 - v13) ^ __ROR4__(v13, 26);
          __pld(v4 + 24);
          a2 -= 24;
          v4 += 12;
          v18 = (v14 - v17) ^ __ROR4__(v17, 24);
          v19 = v17 + v16;
          v20 = (v16 - v18) ^ __ROR4__(v18, 16);
          v21 = v20 + v18 + v19;
          v22 = (v19 - v20) ^ __ROR4__(v20, 13);
          v23 = v21 + v15 + v22;
          v24 = ((v18 + v19 - v22) ^ __ROR4__(v22, 28)) + v10;
          v25 = v21 + v11 - v24;
          v26 = v24 + v23;
          v27 = __ROR4__(v24, 28);
          v28 = v23 - (v25 ^ v27);
          v29 = v26 + (v25 ^ v27);
          v30 = __ROR4__(v25 ^ v27, 26);
          v31 = v29 + (v28 ^ v30);
          v32 = (v26 - (v28 ^ v30)) ^ __ROR4__(v28 ^ v30, 24);
          v33 = v29 - v32;
          v34 = v31 + v32;
          v35 = v33 ^ __ROR4__(v32, 16);
          v36 = v31 - v35;
          v3 = v34 + v35;
          v37 = v36 ^ __ROR4__(v35, 13);
          v6 = v34 + v35 + v37;
          v5 = (v34 - v37) ^ __ROR4__(v37, 28);
        }
        while ( v8 );
      }
      v38 = a1 + 6;
      do
      {
        v7 -= 12;
        v39 = *((_DWORD *)v38 - 3);
        v40 = *((_DWORD *)v38 - 2);
        a1 = v38;
        v41 = v5 + *((_DWORD *)v38 - 1);
        v38 += 6;
        v42 = v6 + v40;
        v43 = (v39 - v41 + v3) ^ __ROR4__(v41, 28);
        v44 = v41 + v42;
        v45 = (v42 - v43) ^ __ROR4__(v43, 26);
        v46 = v44 + v43 + v45;
        v47 = (v44 - v45) ^ __ROR4__(v45, 24);
        v48 = v46 + v47;
        v49 = (v44 + v43 - v47) ^ __ROR4__(v47, 16);
        v3 = v46 + v47 + v49;
        v50 = (v46 - v49) ^ __ROR4__(v49, 13);
        v6 = v3 + v50;
        v5 = (v48 - v50) ^ __ROR4__(v50, 28);
      }
      while ( v7 > 0xC );
    }
    switch ( v7 )
    {
      case 1u:
        goto LABEL_36;
      case 2u:
        goto LABEL_41;
      case 3u:
        v143 = (*(_DWORD *)a1 & 0xFFFFFF) + v3;
        goto LABEL_37;
      case 4u:
        v143 = v3 + *(_DWORD *)a1;
        goto LABEL_37;
      case 5u:
        v6 += *((unsigned __int8 *)a1 + 4);
        v143 = v3 + *(_DWORD *)a1;
        goto LABEL_37;
      case 6u:
        v6 += a1[2];
        v143 = v3 + *(_DWORD *)a1;
        goto LABEL_37;
      case 7u:
        v151 = *(_QWORD *)a1;
        v143 = v3 + v151;
        v6 += HIDWORD(v151) & 0xFFFFFF;
        goto LABEL_37;
      case 8u:
        v6 += *((_DWORD *)a1 + 1);
        v143 = v3 + *(_DWORD *)a1;
        goto LABEL_37;
      case 9u:
        v152 = *((unsigned __int8 *)a1 + 8);
        goto LABEL_49;
      case 0xAu:
        v152 = a1[4];
        goto LABEL_49;
      case 0xBu:
        v5 += *((_DWORD *)a1 + 2) & 0xFFFFFF;
        v6 += *((_DWORD *)a1 + 1);
        v143 = v3 + *(_DWORD *)a1;
        goto LABEL_37;
      case 0xCu:
        v152 = *((_DWORD *)a1 + 2);
LABEL_49:
        v5 += v152;
        v6 += *((_DWORD *)a1 + 1);
        v143 = v3 + *(_DWORD *)a1;
        goto LABEL_37;
      default:
        return v5;
    }
  }
  if ( ((unsigned __int8)a1 & 1) == 0 )
  {
    if ( a2 <= 0xC )
    {
      v53 = a2;
      v5 = v3;
      v6 = v3;
    }
    else
    {
      if ( a2 - 12 <= 0x18 )
      {
        v53 = a2;
        v5 = v3;
        v6 = v3;
      }
      else
      {
        v51 = a1 + 12;
        v5 = v3;
        v6 = v3;
        do
        {
          v8 = a2 - 36 > 0x18;
          v52 = *(v51 - 12);
          v53 = a2 - 24;
          v54 = *(v51 - 11);
          v55 = *(v51 - 1);
          v56 = *(v51 - 8) + (*(v51 - 7) << 16);
          v57 = *(v51 - 9);
          __pld(v51 + 18);
          v58 = v56 + v5;
          v59 = (v52 + (v54 << 16) - v58 + v3) ^ __ROR4__(v58, 28);
          v60 = *(v51 - 10) + (v57 << 16) + v6;
          v61 = v60 + v58;
          v62 = (v60 - v59) ^ __ROR4__(v59, 26);
          v63 = v59 + v61;
          v64 = (v61 - v62) ^ __ROR4__(v62, 24);
          v65 = v62 + v63;
          v66 = (v63 - v64) ^ __ROR4__(v64, 16);
          v67 = v64 + v65;
          v68 = (v65 - v66) ^ __ROR4__(v66, 13);
          v69 = v66 + v67;
          v70 = *(v51 - 2) + (v55 << 16) + ((v67 - v68) ^ __ROR4__(v68, 28));
          v71 = (*(v51 - 6) + (*(v51 - 5) << 16) + v69 - v70) ^ __ROR4__(v70, 28);
          v72 = *(v51 - 4) + (*(v51 - 3) << 16) + v69 + v68;
          v73 = v70 + v72;
          v74 = (v72 - v71) ^ __ROR4__(v71, 26);
          v75 = v73 + v71;
          a1 = v51;
          v76 = v75 + v74;
          v77 = (v73 - v74) ^ __ROR4__(v74, 24);
          a2 = v53;
          v51 += 12;
          v78 = v76 + v77;
          v79 = (v75 - v77) ^ __ROR4__(v77, 16);
          v3 = v78 + v79;
          v80 = (v76 - v79) ^ __ROR4__(v79, 13);
          v6 = v3 + v80;
          v5 = (v78 - v80) ^ __ROR4__(v80, 28);
        }
        while ( v8 );
      }
      v81 = a1 + 6;
      do
      {
        v82 = *(v81 - 1);
        v53 -= 12;
        v83 = *(v81 - 2);
        v84 = *(v81 - 5);
        a1 = v81;
        v85 = *(v81 - 6);
        v81 += 6;
        v86 = v83 + (v82 << 16) + v5;
        v87 = (v85 + (v84 << 16) - v86 + v3) ^ __ROR4__(v86, 28);
        v88 = *(v81 - 10) + (*(v81 - 9) << 16) + v6;
        v89 = v86 + v88;
        v90 = (v88 - v87) ^ __ROR4__(v87, 26);
        v91 = v89 + v87;
        v92 = (v89 - v90) ^ __ROR4__(v90, 24);
        v93 = v91 + v90 + v92;
        v94 = (v91 - v92) ^ __ROR4__(v92, 16);
        v95 = v91 + v90 - v94;
        v3 = v93 + v94;
        v96 = v95 ^ __ROR4__(v94, 13);
        v6 = v3 + v96;
        v5 = (v93 - v96) ^ __ROR4__(v96, 28);
      }
      while ( v53 > 0xC );
    }
    switch ( v53 )
    {
      case 1u:
        goto LABEL_36;
      case 2u:
        goto LABEL_41;
      case 3u:
        v3 += *((unsigned __int8 *)a1 + 2) << 16;
LABEL_41:
        v143 = *a1 + v3;
        goto LABEL_37;
      case 4u:
        goto LABEL_61;
      case 5u:
        v6 += *((unsigned __int8 *)a1 + 4);
LABEL_61:
        v143 = *a1 + v3 + (a1[1] << 16);
        goto LABEL_37;
      case 6u:
        goto LABEL_59;
      case 7u:
        v6 += *((unsigned __int8 *)a1 + 6) << 16;
LABEL_59:
        v143 = *a1 + v3 + (a1[1] << 16);
        v6 += a1[2];
        goto LABEL_37;
      case 8u:
        goto LABEL_57;
      case 9u:
        v5 += *((unsigned __int8 *)a1 + 8);
LABEL_57:
        v6 += a1[2] + (a1[3] << 16);
        v143 = *a1 + v3 + (a1[1] << 16);
        goto LABEL_37;
      case 0xAu:
        goto LABEL_55;
      case 0xBu:
        v5 += *((unsigned __int8 *)a1 + 10) << 16;
LABEL_55:
        v6 += a1[2] + (a1[3] << 16);
        v143 = *a1 + v3 + (a1[1] << 16);
        v5 += a1[4];
        goto LABEL_37;
      case 0xCu:
        v5 += a1[4] + (a1[5] << 16);
        v6 += a1[2] + (a1[3] << 16);
        v143 = *a1 + v3 + (a1[1] << 16);
        goto LABEL_37;
      default:
        return v5;
    }
  }
  if ( a2 > 0xC )
  {
    if ( a2 - 12 <= 0x18 )
    {
      v97 = a2;
      v5 = v3;
      v6 = v3;
    }
    else
    {
      v98 = a1 + 12;
      v5 = v3;
      v6 = v3;
      do
      {
        v97 = a2 - 24;
        v8 = a2 - 36 > 0x18;
        v99 = *((unsigned __int8 *)v98 - 10);
        v100 = (*((unsigned __int8 *)v98 - 14) << 16)
             + (*((unsigned __int8 *)v98 - 15) << 8)
             + *((unsigned __int8 *)v98 - 16)
             + (*((unsigned __int8 *)v98 - 13) << 24)
             + v5;
        v101 = ((*((unsigned __int8 *)v98 - 22) << 16)
              + (*((unsigned __int8 *)v98 - 23) << 8)
              + *((unsigned __int8 *)v98 - 24)
              + (*((unsigned __int8 *)v98 - 21) << 24)
              - v100
              + v3)
             ^ __ROR4__(v100, 28);
        v102 = *((unsigned __int8 *)v98 - 11) << 8;
        v103 = (*((unsigned __int8 *)v98 - 18) << 16)
             + (*((unsigned __int8 *)v98 - 19) << 8)
             + *((unsigned __int8 *)v98 - 20)
             + (*((unsigned __int8 *)v98 - 17) << 24)
             + v6;
        v104 = v103 + v100;
        v105 = (v103 - v101) ^ __ROR4__(v101, 26);
        v106 = v101 + v104;
        v107 = *((unsigned __int8 *)v98 - 4);
        v108 = *((unsigned __int8 *)v98 - 7) << 8;
        v109 = (v104 - v105) ^ __ROR4__(v105, 24);
        v110 = v105 + v106;
        v111 = (*((unsigned __int8 *)v98 - 3) << 8) + (*((unsigned __int8 *)v98 - 2) << 16);
        __pld((char *)v98 + 25);
        v112 = (v106 - v109) ^ __ROR4__(v109, 16);
        v113 = v109 + v110;
        v114 = (v110 - v112) ^ __ROR4__(v112, 13);
        v115 = v112 + v113;
        v116 = v111 + v107 + (*((unsigned __int8 *)v98 - 1) << 24) + ((v113 - v114) ^ __ROR4__(v114, 28));
        v117 = (v102 + (v99 << 16) + *((unsigned __int8 *)v98 - 12) + (*((unsigned __int8 *)v98 - 9) << 24) + v115 - v116)
             ^ __ROR4__(v116, 28);
        v118 = v108
             + (*((unsigned __int8 *)v98 - 6) << 16)
             + *((unsigned __int8 *)v98 - 8)
             + (*((unsigned __int8 *)v98 - 5) << 24)
             + v115
             + v114;
        v119 = v116 + v118;
        v120 = (v118 - v117) ^ __ROR4__(v117, 26);
        v121 = v119 + v117;
        a1 = v98;
        v122 = (v119 - v120) ^ __ROR4__(v120, 24);
        v123 = v121 + v120;
        __pld(v98 + 12);
        a2 = v97;
        v124 = v123 + v122;
        v125 = (v121 - v122) ^ __ROR4__(v122, 16);
        v98 += 12;
        v3 = v124 + v125;
        v126 = (v123 - v125) ^ __ROR4__(v125, 13);
        v6 = v3 + v126;
        v5 = (v124 - v126) ^ __ROR4__(v126, 28);
      }
      while ( v8 );
    }
    v127 = a1 + 6;
    do
    {
      v128 = *((unsigned __int8 *)v127 - 3);
      v97 -= 12;
      v129 = *((unsigned __int8 *)v127 - 11);
      v130 = *((unsigned __int8 *)v127 - 2);
      a1 = v127;
      v131 = *((unsigned __int8 *)v127 - 10);
      v127 += 6;
      v132 = (v128 << 8) + (v130 << 16) + *((unsigned __int8 *)v127 - 16) + (*((unsigned __int8 *)v127 - 13) << 24) + v5;
      v133 = ((v129 << 8)
            + (v131 << 16)
            + *((unsigned __int8 *)v127 - 24)
            + (*((unsigned __int8 *)v127 - 21) << 24)
            - v132
            + v3)
           ^ __ROR4__(v132, 28);
      v134 = (*((unsigned __int8 *)v127 - 19) << 8)
           + (*((unsigned __int8 *)v127 - 18) << 16)
           + *((unsigned __int8 *)v127 - 20)
           + (*((unsigned __int8 *)v127 - 17) << 24)
           + v6;
      v135 = v132 + v134;
      v136 = (v134 - v133) ^ __ROR4__(v133, 26);
      v137 = v135 + v133;
      v138 = v137 + v136;
      v139 = (v135 - v136) ^ __ROR4__(v136, 24);
      v140 = v138 + v139;
      v141 = (v137 - v139) ^ __ROR4__(v139, 16);
      v3 = v140 + v141;
      v142 = (v138 - v141) ^ __ROR4__(v141, 13);
      v6 = v3 + v142;
      v5 = (v140 - v142) ^ __ROR4__(v142, 28);
    }
    while ( v97 > 0xC );
  }
  else
  {
    v97 = a2;
    v5 = v3;
    v6 = v3;
  }
  switch ( v97 )
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
      v143 = *(unsigned __int8 *)a1 + v3;
LABEL_37:
      v144 = (v5 ^ v6) - __ROR4__(v6, 18);
      v145 = (v143 ^ v144) - __ROR4__(v144, 21);
      v146 = (v6 ^ v145) - __ROR4__(v145, 7);
      v147 = (v144 ^ v146) - __ROR4__(v146, 16);
      v148 = (v145 ^ v147) - __ROR4__(v147, 28);
      v149 = (v146 ^ v148) - __ROR4__(v148, 18);
      v5 = (v147 ^ v149) - __ROR4__(v149, 8);
      break;
    default:
      return v5;
  }
  return v5;
}
