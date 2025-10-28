int task_check_miner_status()
{
  unsigned int v0; // r11
  char *all_created_runtime; // r0
  char *v2; // r3
  const char *v3; // r2
  char *v4; // r1
  int v5; // r11
  int v6; // r2
  bool v7; // zf
  __int64 v8; // r0
  int v9; // r0
  char *flag_from_monitor; // r0
  int v11; // r3
  char *v12; // r4
  __int64 v13; // r4
  int v14; // r3
  int v15; // r1
  int v16; // r3
  int v17; // r1
  int *v18; // r0
  char *v19; // r0
  int *v20; // r0
  int v21; // r3
  int *v22; // r2
  int v23; // t1
  int v24; // r4
  char *v25; // r0
  int v26; // r3
  int *v27; // r5
  int v28; // t1
  char *v29; // r0
  int v30; // r1
  int v31; // r1
  int v32; // r1
  int v33; // r3
  int v34; // r1
  int v35; // r4
  char v36; // r10
  int v37; // r10
  unsigned __int8 v38; // r4
  _BOOL4 v39; // r9
  int v40; // r11
  int v41; // r5
  int v42; // r3
  int v43; // r8
  const char *v44; // r12
  int v45; // r3
  const char *v46; // r5
  int v47; // r2
  const char *v48; // r2
  int v49; // r1
  int v50; // r2
  int v51; // r3
  _DWORD *v52; // r10
  int v53; // r1
  int v54; // r2
  int v55; // r3
  int v56; // r1
  int v57; // r3
  int v58; // r4
  char *v59; // r0
  char *v60; // r10
  int v61; // t1
  int v62; // r0
  int v63; // r0
  char *v64; // r1
  int v65; // r1
  char *v66; // r3
  char *v67; // r3
  char v68; // r2
  char v69; // r2
  int v70; // r2
  const char *v72; // r2
  int v73; // r1
  int v74; // r2
  int v75; // r3
  _DWORD *v76; // r12
  int v77; // r1
  int v78; // r2
  int v79; // r3
  int v80; // r3
  int v81; // r1
  int v82; // r2
  int v83; // r3
  int v84; // r3
  int v85; // r1
  int v86; // r10
  const char *v87; // r2
  int v88; // r1
  int v89; // r2
  int v90; // r3
  _DWORD *v91; // r12
  int v92; // r1
  int v93; // r2
  int v94; // r3
  int v95; // r3
  int v96; // r1
  int v97; // r2
  int v98; // r3
  int v99; // r3
  int v100; // r1
  int v101; // r3
  const char *v102; // r2
  int v103; // r1
  int v104; // r2
  int v105; // r3
  _DWORD *v106; // r12
  int v107; // r1
  int v108; // r2
  int v109; // r3
  int v110; // r3
  int v111; // r1
  int v112; // r1
  int v113; // r2
  int v114; // r3
  _DWORD *v115; // r12
  int v116; // r1
  int v117; // r2
  int v118; // r3
  int v119; // r3
  int v120; // r1
  int v121; // r2
  int v122; // r3
  int v123; // r1
  int v124; // r5
  int v125; // r10
  const char *v126; // r3
  int v127; // r2
  const char *v128; // r3
  int v129; // r2
  const char *v130; // r2
  char *v131; // r1
  int v132; // r6
  int v133; // r1
  const char *v134; // r2
  char *v135; // r1
  int v136; // r1
  const char *v137; // r2
  char *v138; // r1
  int v139; // lr
  int v140; // r1
  int v141; // r0
  int v142; // r1
  unsigned int v143; // r4
  int v144; // r3
  int v145; // r1
  int v146; // [sp+20h] [bp-138Ch] BYREF
  int v147; // [sp+40h] [bp-136Ch]
  const char *v148; // [sp+44h] [bp-1368h]
  int v149; // [sp+4Ch] [bp-1360h]
  int v150; // [sp+50h] [bp-135Ch]
  int v151; // [sp+54h] [bp-1358h]
  __int64 v152; // [sp+58h] [bp-1354h]
  char *v153; // [sp+60h] [bp-134Ch]
  char *v154; // [sp+64h] [bp-1348h]
  __int64 v155; // [sp+68h] [bp-1344h]
  int v156; // [sp+70h] [bp-133Ch]
  int v157; // [sp+74h] [bp-1338h]
  __int64 v158; // [sp+78h] [bp-1334h]
  int v159; // [sp+80h] [bp-132Ch]
  int v160; // [sp+84h] [bp-1328h]
  int v161; // [sp+88h] [bp-1324h]
  const char *v162; // [sp+8Ch] [bp-1320h]
  int v163; // [sp+90h] [bp-131Ch]
  int v164; // [sp+94h] [bp-1318h]
  int v165; // [sp+98h] [bp-1314h]
  int v166; // [sp+9Ch] [bp-1310h]
  char *v167; // [sp+A0h] [bp-130Ch]
  char *s; // [sp+A4h] [bp-1308h]
  int v169; // [sp+A8h] [bp-1304h]
  int v170; // [sp+ACh] [bp-1300h]
  int v171; // [sp+B0h] [bp-12FCh]
  int v172; // [sp+B4h] [bp-12F8h]
  int v173; // [sp+B8h] [bp-12F4h]
  int v174; // [sp+BCh] [bp-12F0h]
  int v175; // [sp+C0h] [bp-12ECh]
  int v176; // [sp+C4h] [bp-12E8h]
  int v177; // [sp+C8h] [bp-12E4h]
  int v178; // [sp+CCh] [bp-12E0h]
  int v179; // [sp+D0h] [bp-12DCh]
  int v180; // [sp+D4h] [bp-12D8h]
  int v181; // [sp+D8h] [bp-12D4h]
  const char *v182; // [sp+DCh] [bp-12D0h]
  int v183; // [sp+E0h] [bp-12CCh]
  int v184; // [sp+E4h] [bp-12C8h]
  int v185; // [sp+E8h] [bp-12C4h]
  int v186; // [sp+ECh] [bp-12C0h]
  int v187; // [sp+F8h] [bp-12B4h]
  int v188; // [sp+FCh] [bp-12B0h]
  int v189; // [sp+100h] [bp-12ACh]
  int v190; // [sp+104h] [bp-12A8h]
  int v191; // [sp+10Ch] [bp-12A0h] BYREF
  _DWORD v192[7]; // [sp+110h] [bp-129Ch] BYREF
  int v193; // [sp+12Ch] [bp-1280h]
  _DWORD v194[8]; // [sp+130h] [bp-127Ch] BYREF
  _DWORD v195[7]; // [sp+150h] [bp-125Ch] BYREF
  int v196; // [sp+16Ch] [bp-1240h]
  _DWORD v197[8]; // [sp+170h] [bp-123Ch] BYREF
  _DWORD v198[7]; // [sp+190h] [bp-121Ch] BYREF
  int v199; // [sp+1ACh] [bp-1200h]
  _DWORD v200[8]; // [sp+1B0h] [bp-11FCh] BYREF
  _DWORD v201[7]; // [sp+1D0h] [bp-11DCh] BYREF
  int v202; // [sp+1ECh] [bp-11C0h]
  _DWORD v203[8]; // [sp+1F0h] [bp-11BCh] BYREF
  _DWORD v204[7]; // [sp+210h] [bp-119Ch] BYREF
  int v205; // [sp+22Ch] [bp-1180h]
  _DWORD v206[8]; // [sp+230h] [bp-117Ch] BYREF
  _DWORD v207[7]; // [sp+250h] [bp-115Ch] BYREF
  int v208; // [sp+26Ch] [bp-1140h]
  _DWORD v209[7]; // [sp+270h] [bp-113Ch] BYREF
  int v210; // [sp+28Ch] [bp-1120h]
  __int64 v211; // [sp+290h] [bp-111Ch] BYREF
  int v212; // [sp+298h] [bp-1114h]
  int v213; // [sp+29Ch] [bp-1110h]
  int v214; // [sp+2A0h] [bp-110Ch]
  int v215; // [sp+2A4h] [bp-1108h]
  int v216; // [sp+2A8h] [bp-1104h]
  int v217; // [sp+2ACh] [bp-1100h]
  _DWORD v218[7]; // [sp+2B0h] [bp-10FCh] BYREF
  int v219; // [sp+2CCh] [bp-10E0h]
  int v220; // [sp+2D0h] [bp-10DCh] BYREF
  int v221; // [sp+2D4h] [bp-10D8h]
  int v222; // [sp+2D8h] [bp-10D4h] BYREF
  int v223; // [sp+2DCh] [bp-10D0h]
  int v224; // [sp+2E0h] [bp-10CCh]
  int v225; // [sp+2E4h] [bp-10C8h]
  int v226; // [sp+2E8h] [bp-10C4h]
  int v227; // [sp+2ECh] [bp-10C0h]
  float v228; // [sp+2F0h] [bp-10BCh]
  float v229; // [sp+2F8h] [bp-10B4h]
  float v230; // [sp+2FCh] [bp-10B0h]
  _DWORD v231[1025]; // [sp+3A8h] [bp-1004h] BYREF

  v154 = &byte_1752AC;
  if ( !byte_1752AC )
  {
    byte_1752B0 = 0;
    byte_1752B1 = 0;
    byte_1752B2 = 0;
    byte_1752B3 = 0;
    byte_1752B4 = 0;
    byte_1752B5 = 0;
    byte_1752B6 = 0;
    byte_1752B7 = 0;
    byte_1752B8 = 0;
    byte_1752AC = 1;
  }
  pthread_mutex_lock(&stru_1752BC);
  v218[0] = 0;
  v149 = (unsigned __int8)v154[12] ^ 1;
  all_created_runtime = (char *)get_all_created_runtime(v218);
  v220 = 0;
  v221 = 0;
  v222 = 0;
  if ( v218[0] <= 0 )
    v0 = 0;
  v223 = 0;
  if ( v218[0] <= 0 )
  {
    v161 = v0;
    v156 = v0;
    goto LABEL_36;
  }
  LOWORD(v2) = 620;
  LOWORD(v3) = -30156;
  LOWORD(v4) = 4756;
  HIWORD(v2) = (unsigned int)" %lld" >> 16;
  HIWORD(v3) = (unsigned int)"lost internet for %d seconds" >> 16;
  HIWORD(v4) = (unsigned int)"ot be here" >> 16;
  v167 = v2;
  v182 = v3;
  v5 = 0;
  s = v4;
  v153 = all_created_runtime - 4;
  do
  {
    while ( 1 )
    {
      v9 = *((_DWORD *)v153 + 1);
      v153 += 4;
      flag_from_monitor = get_flag_from_monitor(v9);
      v11 = *((_DWORD *)flag_from_monitor + 4);
      v12 = flag_from_monitor;
      v151 = 0;
      v150 = v11 & 1;
      if ( (v11 & 1) == 0 )
      {
        v157 = 0;
        v156 = v11 & 2;
        if ( (v11 & 2) == 0 )
        {
          v170 = 0;
          v169 = v11 & 4;
          if ( (v11 & 4) != 0 )
          {
            v7 = v149 == 0;
            *((_DWORD *)flag_from_monitor + 6) |= 4u;
            if ( v7 )
              goto LABEL_13;
            v162 = "check_temp";
            v124 = v221;
            v125 = v220;
            v161 = (int)"%s";
            LODWORD(v158) = &v146;
            goto LABEL_113;
          }
          goto LABEL_24;
        }
        v7 = v149 == 0;
        *((_DWORD *)flag_from_monitor + 6) |= 2u;
        if ( v7 )
        {
          LODWORD(v155) = v11 & 4;
          HIDWORD(v155) = v149;
          if ( (unsigned int)v155 | v149 )
          {
LABEL_12:
            *((_DWORD *)v12 + 6) |= 4u;
LABEL_13:
            v165 = v11 & 8;
            v166 = 0;
            if ( (v11 & 8) != 0 )
              *((_DWORD *)v12 + 6) |= 8u;
LABEL_15:
            v152 = v11 & 0x10;
            if ( (v11 & 0x10) == 0 )
              goto LABEL_18;
            v7 = v149 == 0;
            *((_DWORD *)v12 + 6) |= 0x10u;
            if ( v7 )
              goto LABEL_18;
            LOWORD(v126) = -30500;
            HIWORD(v126) = (unsigned int)"us.c" >> 16;
            LOWORD(v127) = -25124;
            v162 = v126;
            HIWORD(v127) = (unsigned int)"core_little_core_num failed" >> 16;
            v161 = v127;
            LODWORD(v158) = &v146;
            goto LABEL_120;
          }
          goto LABEL_24;
        }
        v162 = "check_temp";
        v124 = v221;
        v125 = v220;
        v161 = (int)"%s";
        LODWORD(v158) = &v146;
        goto LABEL_111;
      }
      v6 = *((_DWORD *)flag_from_monitor + 6);
      v7 = v149 == 0;
      *((_DWORD *)flag_from_monitor + 6) = v6 | 1;
      if ( v7 )
        break;
      V_LOCK();
      LOWORD(v44) = -30500;
      HIWORD(v44) = (unsigned int)"us.c" >> 16;
      v45 = *(_DWORD *)v153;
      v46 = v44;
      LODWORD(v158) = &v146;
      v47 = *(_DWORD *)(v45 + 232);
      v162 = v44;
      v161 = (int)"%s";
      V_INT((int)v207, v167, v47);
      LOWORD(v48) = -30396;
      HIWORD(v48) = (unsigned int)"ceed limit" >> 16;
      V_STR(v206, s, v48);
      v49 = v206[1];
      v50 = v206[2];
      v51 = v206[3];
      v52 = (_DWORD *)v158;
      v148 = v46;
      v147 = v161;
      *(_DWORD *)v158 = v206[0];
      v52[1] = v49;
      v52[2] = v50;
      v52[3] = v51;
      v52 += 4;
      v53 = v206[5];
      v54 = v206[6];
      v55 = v206[7];
      *v52 = v206[4];
      v52[1] = v53;
      v52[2] = v54;
      v52[3] = v55;
      logfmt_raw((char *)v231, 0x1000u, 0, v208, v207[0], v207[1], v207[2], v207[3], v207[4], v207[5], v207[6], v208);
      V_UNLOCK();
      LOWORD(v56) = -30384;
      HIWORD(v56) = (unsigned int)"%s low hashrate happened!" >> 16;
      zlog(g_zc, v56, 172, v46, 10, 36, 100, v231);
      v174 = 0;
      v125 = v220 | 1;
      v220 |= 1u;
      v124 = v221;
      v57 = *((_DWORD *)v12 + 4);
      v173 = v57 & 2;
      if ( (v57 & 2) != 0 )
      {
        *((_DWORD *)v12 + 6) |= 2u;
LABEL_111:
        V_LOCK();
        v125 |= 2u;
        V_INT((int)v204, v167, *(int *)(*(_DWORD *)v153 + 232));
        LOWORD(v72) = -30208;
        HIWORD(v72) = (unsigned int)"oweroff. Exit and restart mining(%d)!" >> 16;
        V_STR(v203, s, v72);
        v73 = v203[1];
        v74 = v203[2];
        v75 = v203[3];
        v76 = (_DWORD *)v158;
        v148 = v162;
        v147 = v161;
        *(_DWORD *)v158 = v203[0];
        v76[1] = v73;
        v76[2] = v74;
        v76[3] = v75;
        v76 += 4;
        v77 = v203[5];
        v78 = v203[6];
        v79 = v203[7];
        *v76 = v203[4];
        v76[1] = v77;
        v76[2] = v78;
        v76[3] = v79;
        logfmt_raw((char *)v231, 0x1000u, 0, v205, v204[0], v204[1], v204[2], v204[3], v204[4], v204[5], v204[6], v205);
        V_UNLOCK();
        LOWORD(v80) = -30500;
        LOWORD(v81) = -30384;
        HIWORD(v80) = (unsigned int)"us.c" >> 16;
        HIWORD(v81) = (unsigned int)"%s low hashrate happened!" >> 16;
        zlog(g_zc, v81, 172, v80, 10, 44, 100, v231);
        V_LOCK();
        LOWORD(v82) = 6708;
        LOWORD(v83) = 4784;
        HIWORD(v82) = (unsigned int)"" >> 16;
        HIWORD(v83) = (unsigned int)"ch" >> 16;
        logfmt_raw((char *)v231, 0x1000u, 0, v83, v82);
        V_UNLOCK();
        LOWORD(v84) = -30500;
        LOWORD(v85) = -30384;
        HIWORD(v84) = (unsigned int)"us.c" >> 16;
        HIWORD(v85) = (unsigned int)"%s low hashrate happened!" >> 16;
        zlog(g_zc, v85, 172, v84, 10, 45, 100, v231);
        v220 = v125;
        v221 = v124;
        v11 = *((_DWORD *)v12 + 4);
        v175 = v11 & 4;
        v176 = 0;
        if ( (v11 & 4) != 0 )
          goto LABEL_112;
        goto LABEL_24;
      }
      v186 = 0;
      v185 = v57 & 4;
      if ( (v57 & 4) == 0 )
      {
        v188 = 0;
        v187 = v57 & 8;
        if ( (v57 & 8) == 0 )
        {
          v190 = 0;
          v189 = v57 & 0x10;
          if ( (v57 & 0x10) == 0 )
            goto LABEL_18;
          *((_DWORD *)v12 + 6) |= 0x10u;
LABEL_120:
          v86 = v221;
          v181 = v220;
          goto LABEL_117;
        }
        *((_DWORD *)v12 + 6) |= 8u;
        goto LABEL_121;
      }
LABEL_112:
      *((_DWORD *)v12 + 6) |= 4u;
LABEL_113:
      V_LOCK();
      v181 = v125 | 4;
      v86 = v124;
      V_INT((int)v201, v167, *(int *)(*(_DWORD *)v153 + 232));
      LOWORD(v87) = -30192;
      HIWORD(v87) = (unsigned int)"d restart mining(%d)!" >> 16;
      V_STR(v200, s, v87);
      v88 = v200[1];
      v89 = v200[2];
      v90 = v200[3];
      v91 = (_DWORD *)v158;
      v148 = v162;
      v147 = v161;
      *(_DWORD *)v158 = v200[0];
      v91[1] = v88;
      v91[2] = v89;
      v91[3] = v90;
      v91 += 4;
      v92 = v200[5];
      v93 = v200[6];
      v94 = v200[7];
      *v91 = v200[4];
      v91[1] = v92;
      v91[2] = v93;
      v91[3] = v94;
      logfmt_raw((char *)v231, 0x1000u, 0, v202, v201[0], v201[1], v201[2], v201[3], v201[4], v201[5], v201[6], v202);
      V_UNLOCK();
      LOWORD(v95) = -30500;
      LOWORD(v96) = -30384;
      HIWORD(v95) = (unsigned int)"us.c" >> 16;
      HIWORD(v96) = (unsigned int)"%s low hashrate happened!" >> 16;
      zlog(g_zc, v96, 172, v95, 10, 53, 100, v231);
      V_LOCK();
      LOWORD(v97) = -30176;
      LOWORD(v98) = 4784;
      HIWORD(v97) = (unsigned int)"(%d)!" >> 16;
      HIWORD(v98) = (unsigned int)"ch" >> 16;
      logfmt_raw((char *)v231, 0x1000u, 0, v98, v97);
      V_UNLOCK();
      LOWORD(v99) = -30500;
      LOWORD(v100) = -30384;
      HIWORD(v99) = (unsigned int)"us.c" >> 16;
      HIWORD(v100) = (unsigned int)"%s low hashrate happened!" >> 16;
      zlog(g_zc, v100, 172, v99, 10, 54, 100, v231);
      v221 = v124;
      v220 = v181;
      v11 = *((_DWORD *)v12 + 4);
      v177 = v11 & 8;
      v178 = 0;
      if ( (v11 & 8) == 0 )
        goto LABEL_15;
      *((_DWORD *)v12 + 6) |= 8u;
LABEL_115:
      V_LOCK();
      v101 = *(_DWORD *)v153;
      v181 |= 8u;
      V_INT((int)v198, v167, *(int *)(v101 + 232));
      LOWORD(v102) = -30172;
      HIWORD(v102) = (unsigned int)"!" >> 16;
      V_STR(v197, s, v102);
      v103 = v197[1];
      v104 = v197[2];
      v105 = v197[3];
      v106 = (_DWORD *)v158;
      v148 = v162;
      v147 = v161;
      *(_DWORD *)v158 = v197[0];
      v106[1] = v103;
      v106[2] = v104;
      v106[3] = v105;
      v106 += 4;
      v107 = v197[5];
      v108 = v197[6];
      v109 = v197[7];
      *v106 = v197[4];
      v106[1] = v107;
      v106[2] = v108;
      v106[3] = v109;
      logfmt_raw((char *)v231, 0x1000u, 0, v199, v198[0], v198[1], v198[2], v198[3], v198[4], v198[5], v198[6], v199);
      V_UNLOCK();
      LOWORD(v110) = -30500;
      LOWORD(v111) = -30384;
      HIWORD(v110) = (unsigned int)"us.c" >> 16;
      HIWORD(v111) = (unsigned int)"%s low hashrate happened!" >> 16;
      zlog(g_zc, v111, 172, v110, 10, 62, 100, v231);
      v221 = v86;
      v220 = v181;
      v179 = *((_DWORD *)v12 + 4) & 0x10;
      v180 = 0;
      if ( v179 )
      {
        *((_DWORD *)v12 + 6) |= 0x10u;
LABEL_117:
        V_LOCK();
        V_INT((int)v195, v167, *(int *)(*(_DWORD *)v153 + 232));
        V_STR(v194, s, v182);
        v112 = v194[1];
        v113 = v194[2];
        v114 = v194[3];
        v115 = (_DWORD *)v158;
        v148 = v162;
        v147 = v161;
        *(_DWORD *)v158 = v194[0];
        v115[1] = v112;
        v115[2] = v113;
        v115[3] = v114;
        v115 += 4;
        v116 = v194[5];
        v117 = v194[6];
        v118 = v194[7];
        *v115 = v194[4];
        v115[1] = v116;
        v115[2] = v117;
        v115[3] = v118;
        logfmt_raw((char *)v231, 0x1000u, 0, v196, v195[0], v195[1], v195[2], v195[3], v195[4], v195[5], v195[6], v196);
        V_UNLOCK();
        LOWORD(v119) = -30500;
        LOWORD(v120) = -30384;
        HIWORD(v119) = (unsigned int)"us.c" >> 16;
        HIWORD(v120) = (unsigned int)"%s low hashrate happened!" >> 16;
        zlog(g_zc, v120, 172, v119, 10, 70, 100, v231);
        v221 = v86;
        v220 = v181 | 0x10;
      }
LABEL_18:
      if ( ++v5 >= v218[0] )
        goto LABEL_29;
    }
    v163 = v11 & 2;
    LODWORD(v155) = v11 & 4;
    v164 = v149;
    HIDWORD(v155) = v149;
    if ( !(v163 | v149) )
    {
      if ( v155 )
      {
        *((_DWORD *)flag_from_monitor + 6) = v6 | 5;
        goto LABEL_13;
      }
      v183 = v11 & 8;
      v184 = v149;
      if ( !(v183 | v149) )
        goto LABEL_15;
      *((_DWORD *)flag_from_monitor + 6) = v6 | 9;
      goto LABEL_27;
    }
    v8 = v155;
    *((_DWORD *)v12 + 6) = v6 | 3;
    if ( v8 )
      goto LABEL_12;
LABEL_24:
    v159 = v11 & 8;
    v160 = 0;
    if ( (v11 & 8) == 0 )
      goto LABEL_15;
    v7 = v149 == 0;
    *((_DWORD *)v12 + 6) |= 8u;
    if ( !v7 )
    {
      LOWORD(v128) = -30500;
      HIWORD(v128) = (unsigned int)"us.c" >> 16;
      LOWORD(v129) = -25124;
      v162 = v128;
      HIWORD(v129) = (unsigned int)"core_little_core_num failed" >> 16;
      v161 = v129;
      LODWORD(v158) = &v146;
LABEL_121:
      v86 = v221;
      v181 = v220;
      goto LABEL_115;
    }
LABEL_27:
    v171 = v11 & 0x10;
    v172 = 0;
    if ( (v11 & 0x10) == 0 )
      goto LABEL_18;
    ++v5;
    *((_DWORD *)v12 + 6) |= 0x10u;
  }
  while ( v5 < v218[0] );
LABEL_29:
  v0 = v220;
  v150 = (int)&v222;
  v13 = v220 & 4;
  v14 = v220 & 4;
  if ( (v220 & 4) != 0 )
    v14 = 1;
  v156 = v14;
  if ( (v220 & 2) != 0 )
  {
    V_LOCK();
    LOWORD(v15) = 6708;
    LOWORD(v16) = 4784;
    HIWORD(v15) = (unsigned int)"" >> 16;
    HIWORD(v16) = (unsigned int)"ch" >> 16;
    logfmt_raw((char *)v231, 0x1000u, 0, v16, v15);
    V_UNLOCK();
    LOWORD(v17) = -30384;
    HIWORD(v17) = (unsigned int)"%s low hashrate happened!" >> 16;
    v161 = 1;
    zlog(g_zc, v17, 172, "task_check_miner_status", 23, 286, 100, v231);
    set_miner_6060info_status_high_temp_err(1);
  }
  else
  {
    v161 = 0;
  }
  if ( v13 )
  {
    V_LOCK();
    LOWORD(v121) = -30176;
    LOWORD(v122) = 4784;
    HIWORD(v121) = (unsigned int)"(%d)!" >> 16;
    HIWORD(v122) = (unsigned int)"ch" >> 16;
    logfmt_raw((char *)v231, 0x1000u, 0, v122, v121);
    V_UNLOCK();
    LOWORD(v123) = -30384;
    HIWORD(v123) = (unsigned int)"%s low hashrate happened!" >> 16;
    zlog(g_zc, v123, 172, "task_check_miner_status", 23, 293, 100, v231);
  }
LABEL_36:
  v220 = 0;
  v18 = (int *)get_all_created_runtime(&v220);
  v19 = get_flag_from_monitor(*v18);
  if ( (*((_DWORD *)v19 + 8) & 4) == 0 || (v7 = v149 == 0, *((_DWORD *)v19 + 10) |= 4u, v7) )
  {
    v153 = 0;
  }
  else
  {
    V_LOCK();
    LOWORD(v130) = -30124;
    LOWORD(v131) = 4756;
    HIWORD(v130) = (unsigned int)"lost internet %d seconds > 20 minutes, poweroff." >> 16;
    HIWORD(v131) = (unsigned int)"ot be here" >> 16;
    LOWORD(v132) = -25124;
    V_STR(v209, v131, v130);
    HIWORD(v132) = (unsigned int)"core_little_core_num failed" >> 16;
    v153 = (char *)v149;
    logfmt_raw(
      (char *)v231,
      0x1000u,
      0,
      v210,
      v209[0],
      v209[1],
      v209[2],
      v209[3],
      v209[4],
      v209[5],
      v209[6],
      v210,
      v132,
      "check_fan_err");
    V_UNLOCK();
    LOWORD(v133) = -30384;
    HIWORD(v133) = (unsigned int)"%s low hashrate happened!" >> 16;
    zlog(g_zc, v133, 172, "check_fan_err", 13, 87, 100, v231);
  }
  v191 = 0;
  v20 = (int *)get_all_created_runtime(&v191);
  if ( v191 > 0 )
  {
    LOBYTE(v21) = v149;
    v22 = &v20[v191];
    do
    {
      v23 = *v20++;
      v21 = (unsigned __int8)(v21 & *(_BYTE *)(v23 + 238));
    }
    while ( v22 != v20 );
    v149 = v21;
  }
  v24 = 0;
  LODWORD(v211) = 0;
  v25 = (char *)get_all_created_runtime(&v211);
  v150 = 0;
  if ( (int)v211 > 0 )
  {
    LOWORD(v26) = 620;
    HIWORD(v26) = (unsigned int)" %lld" >> 16;
    v27 = (int *)(v25 - 4);
    LODWORD(v152) = v26;
    LODWORD(v155) = v0;
    do
    {
      while ( 1 )
      {
        v28 = v27[1];
        ++v27;
        v29 = get_flag_from_monitor(v28);
        if ( (*(_DWORD *)v29 & 1) != 0 )
        {
          v7 = v149 == 0;
          *((_DWORD *)v29 + 2) |= 1u;
          if ( !v7 )
            break;
        }
        if ( ++v24 >= (int)v211 )
          goto LABEL_50;
      }
      V_LOCK();
      ++v24;
      V_INT((int)v218, (char *)v152, *(int *)(*v27 + 232));
      v150 = v149;
      logfmt_raw(
        (char *)v231,
        0x1000u,
        0,
        v219,
        v218[0],
        v218[1],
        v218[2],
        v218[3],
        v218[4],
        v218[5],
        v218[6],
        v219,
        "%s low hashrate happened!",
        "check_low_hashrate");
      V_UNLOCK();
      LOWORD(v30) = -30384;
      HIWORD(v30) = (unsigned int)"%s low hashrate happened!" >> 16;
      zlog(g_zc, v30, 172, "check_low_hashrate", 18, 119, 80, v231);
      read_status_from_monitor(&v220, *v27);
      V_LOCK();
      logfmt_raw((char *)v231, 0x1000u, 0, "no ratio hashrate last_5s: %f", v228 / 1000000000.0);
      V_UNLOCK();
      LOWORD(v31) = -30384;
      HIWORD(v31) = (unsigned int)"%s low hashrate happened!" >> 16;
      zlog(g_zc, v31, 172, "check_low_hashrate", 18, 122, 80, v231);
      V_LOCK();
      logfmt_raw((char *)v231, 0x1000u, 0, "no ratio hashrate last_30min: %f", v229 / 1000000000.0);
      V_UNLOCK();
      LOWORD(v32) = -30384;
      HIWORD(v32) = (unsigned int)"%s low hashrate happened!" >> 16;
      zlog(g_zc, v32, 172, "check_low_hashrate", 18, 123, 80, v231);
      V_LOCK();
      LOWORD(v33) = -30004;
      HIWORD(v33) = (unsigned int)"ffective temp %d, lost connection too long %d" >> 16;
      logfmt_raw((char *)v231, 0x1000u, 0, v33, v230 / 1000000000.0);
      V_UNLOCK();
      LOWORD(v34) = -30384;
      HIWORD(v34) = (unsigned int)"%s low hashrate happened!" >> 16;
      zlog(g_zc, v34, 172, "check_low_hashrate", 18, 124, 80, v231);
    }
    while ( v24 < (int)v211 );
LABEL_50:
    v0 = v155;
  }
  if ( !v154[40] )
  {
    clock_gettime(1, &stru_1752D8);
    v154[40] = 1;
  }
  if ( total_pools > 0 )
  {
    v35 = 0;
    do
    {
      while ( pool_tget(
                *(pthread_mutex_t **)(pools + 4 * v35),
                (unsigned __int8 *)(*(_DWORD *)(pools + 4 * v35) + 1904))
           || !pools_active )
      {
        if ( ++v35 >= total_pools )
          goto LABEL_59;
      }
      clock_gettime(1, &stru_1752D8);
      ++v35;
    }
    while ( v35 < total_pools );
  }
LABEL_59:
  clock_gettime(1, &stru_1752E0);
  v36 = v154[60];
  v152 = 1000LL * (*((_DWORD *)v154 + 13) - *((_DWORD *)v154 + 11))
       + (*((_DWORD *)v154 + 14) - *((_DWORD *)v154 + 12)) / 1000000;
  if ( v152 <= 59999 )
    v37 = v36 & 1;
  else
    v37 = 0;
  if ( v37 )
  {
    v141 = rand();
    sub_12ECD4(v141, 0x78u);
    v143 = v142 + 60;
    V_LOCK();
    LOWORD(v144) = -29972;
    HIWORD(v144) = (unsigned int)"n too long %d" >> 16;
    logfmt_raw((char *)v231, 0x1000u, 0, v144, v143);
    V_UNLOCK();
    LOWORD(v145) = -30384;
    HIWORD(v145) = (unsigned int)"%s low hashrate happened!" >> 16;
    zlog(g_zc, v145, 172, "check_lost_connection_to_pool", 29, 157, 80, v231);
    sleep(v143);
    exit(1);
  }
  v38 = (unsigned __int8)v153;
  LODWORD(v155) = (v0 >> 3) & 1;
  if ( (v0 & 0x1E) != 0 )
    v38 = (unsigned __int8)v153 | 1;
  v39 = (v0 & 0x1A) != 0;
  v40 = (v0 >> 4) & 1;
  v41 = (unsigned __int8)(v150 | v38);
  if ( !v149 )
    goto LABEL_84;
  if ( v152 <= 60000 )
  {
    *((_DWORD *)v154 + 16) = 0;
LABEL_84:
    LOBYTE(v43) = v154[12];
    if ( (_BYTE)v43 )
      goto LABEL_94;
    if ( !v38 )
    {
      if ( v41 )
      {
        LOBYTE(v37) = 0;
        goto LABEL_94;
      }
      goto LABEL_92;
    }
    LODWORD(v152) = (unsigned __int8)v154[12];
LABEL_87:
    v58 = 0;
    v231[0] = 0;
    v154[12] = 1;
    v59 = (char *)get_all_created_runtime(v231);
    if ( v231[0] > 0 )
    {
      v60 = v59 - 4;
      do
      {
        v61 = *((_DWORD *)v60 + 1);
        v60 += 4;
        ++v58;
        v62 = (*(int (**)(void))(v61 + 20))();
        v63 = dev_ctrl(v62);
        (*(void (__fastcall **)(_DWORD))(v63 + 28))(*(_DWORD *)(*(_DWORD *)v60 + 228));
      }
      while ( v58 < v231[0] );
    }
    power_off();
    V_LOCK();
    LOWORD(v64) = -29788;
    HIWORD(v64) = (unsigned int)"LATFORM_MAX_CHAIN_NUM" >> 16;
    V_BOOL((int)v192, v64, 1);
    logfmt_raw(
      (char *)v231,
      0x1000u,
      0,
      v193,
      v192[0],
      v192[1],
      v192[2],
      v192[3],
      v192[4],
      v192[5],
      v192[6],
      v193,
      "high temp %d low temp %d fan err %d read no temp %d, uneffective temp %d, lost connection too long %d",
      v161,
      v156,
      v153,
      (_DWORD)v155,
      v40,
      (_DWORD)v152);
    V_UNLOCK();
    LOWORD(v65) = -30384;
    HIWORD(v65) = (unsigned int)"%s low hashrate happened!" >> 16;
    zlog(g_zc, v65, 172, "task_check_miner_status", 23, 331, 120, v231);
    if ( v41 || v154[12] )
      goto LABEL_93;
LABEL_92:
    LOBYTE(v37) = v43;
    v154[11] = 0;
    goto LABEL_95;
  }
  v42 = *((_DWORD *)v154 + 16);
  *((_DWORD *)v154 + 16) = v42 + 1;
  if ( !(v42 % 60) )
  {
    V_LOCK();
    LOWORD(v137) = -29884;
    LOWORD(v138) = 4756;
    HIWORD(v137) = (unsigned int)"err" >> 16;
    HIWORD(v138) = (unsigned int)"ot be here" >> 16;
    V_STR(&v220, v138, v137);
    LOWORD(v139) = -29872;
    HIWORD(v139) = (unsigned int)"r_6060info_some_chip_not_working_err" >> 16;
    v158 = 274877907LL * (int)v152;
    logfmt_raw((char *)v231, 0x1000u, 0, v227, v220, v221, v222, v223, v224, v225, v226, v227, v139, (int)v152 / 1000);
    V_UNLOCK();
    LOWORD(v140) = -30384;
    HIWORD(v140) = (unsigned int)"%s low hashrate happened!" >> 16;
    zlog(g_zc, v140, 172, "check_lost_connection_to_pool", 29, 165, 100, v231);
  }
  if ( v152 <= 1200000 )
  {
    v37 = (unsigned __int8)v154[12];
    if ( v154[12] )
      goto LABEL_94;
    if ( !v38 )
    {
      LOBYTE(v37) = v149;
      goto LABEL_94;
    }
LABEL_73:
    v41 = v38;
    LODWORD(v152) = v37;
    LOBYTE(v43) = v38;
    goto LABEL_87;
  }
  v43 = (unsigned __int8)v154[60];
  if ( !v154[60] )
  {
    V_LOCK();
    LOWORD(v134) = -29884;
    LOWORD(v135) = 4756;
    HIWORD(v134) = (unsigned int)"err" >> 16;
    HIWORD(v135) = (unsigned int)"ot be here" >> 16;
    V_STR(&v211, v135, v134);
    logfmt_raw(
      (char *)v231,
      0x1000u,
      v43,
      v217,
      v211,
      v212,
      v213,
      v214,
      v215,
      v216,
      v217,
      "lost internet %d seconds > 20 minutes, poweroff.",
      (int)v152 / 1000);
    V_UNLOCK();
    LOWORD(v136) = -30384;
    HIWORD(v136) = (unsigned int)"%s low hashrate happened!" >> 16;
    zlog(g_zc, v136, 172, "check_lost_connection_to_pool", 29, 175, 120, v231);
    v37 = (unsigned __int8)v154[12];
    v154[60] = 1;
    if ( v37 )
    {
      v39 = v37;
      goto LABEL_94;
    }
    LOBYTE(v43) = v149;
    LODWORD(v152) = 1;
    v39 = v149;
    v41 = v149;
    goto LABEL_87;
  }
  v37 = (unsigned __int8)v154[12];
  if ( !v154[12] )
  {
    if ( v38 )
      goto LABEL_73;
LABEL_93:
    LOBYTE(v37) = v43;
  }
LABEL_94:
  v154[11] = 1;
LABEL_95:
  if ( v149 )
  {
    v7 = v150 == 0;
    v66 = v154;
    v154[4] = v161;
    v66[5] = v156;
    v66[8] = (char)v153;
    if ( v7 )
      v150 = (unsigned __int8)v66[12];
    v67 = v154;
    v68 = v150;
    v154[10] = v37;
    v67[9] = v68;
    v69 = v155;
    v67[7] = v40;
    v67[6] = v69;
  }
  pthread_mutex_unlock(&stru_1752BC);
  v70 = (unsigned __int8)v154[11];
  byte_172710 ^= 1u;
  if ( v70 )
  {
    green_led_off();
    if ( byte_172710 )
    {
      red_led_on();
      if ( !v39 )
        return set_pwm_by_temp();
      return fan_pwm_set_max();
    }
    red_led_off();
  }
  else
  {
    red_led_off();
    if ( byte_172710 )
      green_led_on();
    else
      green_led_off();
  }
  if ( v39 )
    return fan_pwm_set_max();
  return set_pwm_by_temp();
}
