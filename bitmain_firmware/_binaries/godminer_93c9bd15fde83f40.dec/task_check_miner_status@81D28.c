int task_check_miner_status()
{
  int *v0; // r11
  int v1; // r4
  int *v2; // r10
  int v3; // t1
  int *v4; // r4
  int v5; // r3
  int v6; // r2
  bool v7; // zf
  int v8; // r1
  int v9; // r2
  int v10; // r2
  int v11; // r12
  int *v12; // r3
  char *v13; // r1
  int v14; // r4
  int *v15; // r10
  int v16; // t1
  int *v17; // r3
  __int64 v18; // r6
  int v19; // r12
  int v20; // r3
  int v21; // r12
  float *v22; // r3
  float v23; // s20
  float v24; // s17
  float v25; // s16
  int v26; // r5
  int v27; // r8
  int v28; // r10
  pthread_mutex_t *v29; // r9
  int v30; // r10
  __int64 v31; // r8
  int v32; // r5
  int v33; // r0
  int v34; // r6
  int v35; // r3
  int v36; // r2
  int v37; // r3
  int v38; // r9
  const char **v39; // lr
  const char *v40; // r1
  const char *v41; // r3
  int v42; // r2
  int v43; // r3
  int v44; // r9
  const char **v45; // lr
  const char *v46; // r1
  const char *v47; // r3
  int v48; // r2
  int v49; // r3
  int v50; // r8
  const char **v51; // lr
  const char *v52; // r1
  const char *v53; // r3
  int v54; // r3
  pthread_mutex_t *v55; // r9
  int v56; // r2
  int v57; // r2
  const char **v58; // lr
  const char *v59; // r1
  const char *v60; // r3
  int v61; // r6
  int v62; // r3
  int v63; // r5
  int v64; // r0
  int v65; // r1
  int result; // r0
  unsigned __int8 v67; // r3
  unsigned __int16 v68; // r3
  int v69; // r0
  int v70; // r8
  _DWORD *v71; // r9
  int v72; // r10
  int v73; // r0
  int *v74; // r7
  int v75; // t1
  __int64 v76; // [sp+0h] [bp-1AFCh]
  int v77; // [sp+Ch] [bp-1AF0h]
  const char *v78; // [sp+20h] [bp-1ADCh] BYREF
  const char *v79; // [sp+24h] [bp-1AD8h]
  char *v80; // [sp+40h] [bp-1ABCh]
  const char *v81; // [sp+44h] [bp-1AB8h]
  pthread_mutex_t *mutex; // [sp+48h] [bp-1AB4h]
  int v83; // [sp+4Ch] [bp-1AB0h]
  int v84; // [sp+50h] [bp-1AACh]
  int v85; // [sp+54h] [bp-1AA8h]
  int v86; // [sp+58h] [bp-1AA4h]
  pthread_mutex_t *v87; // [sp+5Ch] [bp-1AA0h]
  __int64 v88; // [sp+60h] [bp-1A9Ch]
  int v89; // [sp+68h] [bp-1A94h]
  int v90; // [sp+6Ch] [bp-1A90h]
  int *v91; // [sp+70h] [bp-1A8Ch]
  char *v92; // [sp+74h] [bp-1A88h]
  const char *v93; // [sp+78h] [bp-1A84h]
  int *v94; // [sp+7Ch] [bp-1A80h]
  int v95; // [sp+80h] [bp-1A7Ch]
  int v96; // [sp+84h] [bp-1A78h]
  const char **v97; // [sp+88h] [bp-1A74h]
  int *v98; // [sp+8Ch] [bp-1A70h]
  int v99; // [sp+90h] [bp-1A6Ch]
  int v100; // [sp+94h] [bp-1A68h]
  int v101; // [sp+98h] [bp-1A64h]
  int v102; // [sp+9Ch] [bp-1A60h]
  char *v103; // [sp+A0h] [bp-1A5Ch]
  int v104; // [sp+A4h] [bp-1A58h]
  int v105; // [sp+A8h] [bp-1A54h]
  int v106; // [sp+ACh] [bp-1A50h]
  unsigned int v107; // [sp+B0h] [bp-1A4Ch]
  int *v108; // [sp+B4h] [bp-1A48h]
  int v109; // [sp+B8h] [bp-1A44h]
  int v110; // [sp+BCh] [bp-1A40h]
  int v111; // [sp+C0h] [bp-1A3Ch]
  int v112; // [sp+C4h] [bp-1A38h]
  int v113; // [sp+C8h] [bp-1A34h]
  int v114; // [sp+CCh] [bp-1A30h]
  int v115; // [sp+D0h] [bp-1A2Ch]
  int v116; // [sp+D4h] [bp-1A28h]
  int v117; // [sp+D8h] [bp-1A24h]
  int v118; // [sp+DCh] [bp-1A20h]
  int *v119; // [sp+E0h] [bp-1A1Ch]
  int v120; // [sp+E4h] [bp-1A18h]
  const char **v121; // [sp+E8h] [bp-1A14h]
  const char *v122; // [sp+ECh] [bp-1A10h]
  int v123; // [sp+F0h] [bp-1A0Ch]
  int v124; // [sp+F4h] [bp-1A08h]
  int v125; // [sp+F8h] [bp-1A04h]
  int v126; // [sp+FCh] [bp-1A00h]
  __int64 v127; // [sp+108h] [bp-19F4h]
  int v128; // [sp+110h] [bp-19ECh]
  int v129; // [sp+114h] [bp-19E8h]
  const char *v130; // [sp+118h] [bp-19E4h]
  int v131; // [sp+11Ch] [bp-19E0h]
  int v132; // [sp+120h] [bp-19DCh]
  int v133; // [sp+124h] [bp-19D8h]
  __int64 v134; // [sp+128h] [bp-19D4h]
  int v135; // [sp+130h] [bp-19CCh]
  int v136; // [sp+134h] [bp-19C8h]
  char *v137; // [sp+138h] [bp-19C4h]
  int v138; // [sp+13Ch] [bp-19C0h]
  int v139; // [sp+140h] [bp-19BCh]
  int v140; // [sp+144h] [bp-19B8h]
  __int64 v141; // [sp+148h] [bp-19B4h]
  int v142; // [sp+150h] [bp-19ACh]
  int v143; // [sp+154h] [bp-19A8h]
  _DWORD v144[4]; // [sp+158h] [bp-19A4h] BYREF
  __int64 v145; // [sp+168h] [bp-1994h]
  int v146; // [sp+170h] [bp-198Ch]
  int v147; // [sp+174h] [bp-1988h]
  __int64 v148; // [sp+178h] [bp-1984h]
  int v149; // [sp+180h] [bp-197Ch]
  int v150; // [sp+184h] [bp-1978h]
  __int64 v151; // [sp+188h] [bp-1974h]
  int v152; // [sp+190h] [bp-196Ch]
  int v153; // [sp+194h] [bp-1968h]
  char *v154; // [sp+198h] [bp-1964h]
  int v155; // [sp+19Ch] [bp-1960h]
  int v156; // [sp+1A0h] [bp-195Ch]
  int v157; // [sp+1A4h] [bp-1958h]
  __int64 v158; // [sp+1A8h] [bp-1954h]
  int v159; // [sp+1B0h] [bp-194Ch]
  int v160; // [sp+1B4h] [bp-1948h]
  char *v161; // [sp+1B8h] [bp-1944h]
  int v162; // [sp+1BCh] [bp-1940h]
  int v163; // [sp+1C0h] [bp-193Ch]
  int v164; // [sp+1C4h] [bp-1938h]
  const char *v165; // [sp+1C8h] [bp-1934h]
  const char *v166; // [sp+1CCh] [bp-1930h]
  int v167; // [sp+1D0h] [bp-192Ch]
  const char *v168; // [sp+1D4h] [bp-1928h]
  const char *v169; // [sp+1D8h] [bp-1924h]
  int v170; // [sp+1DCh] [bp-1920h]
  int v171; // [sp+1E0h] [bp-191Ch]
  int v172; // [sp+1E4h] [bp-1918h]
  __int64 v173; // [sp+1E8h] [bp-1914h]
  int v174; // [sp+1F0h] [bp-190Ch]
  int v175; // [sp+1F4h] [bp-1908h]
  char *v176; // [sp+1F8h] [bp-1904h]
  int v177; // [sp+1FCh] [bp-1900h]
  int v178; // [sp+200h] [bp-18FCh]
  int v179; // [sp+204h] [bp-18F8h]
  const char *v180; // [sp+208h] [bp-18F4h]
  const char *v181; // [sp+20Ch] [bp-18F0h]
  int v182; // [sp+210h] [bp-18ECh]
  const char *v183; // [sp+214h] [bp-18E8h]
  const char *v184; // [sp+218h] [bp-18E4h]
  int v185; // [sp+21Ch] [bp-18E0h]
  int v186; // [sp+220h] [bp-18DCh]
  int v187; // [sp+224h] [bp-18D8h]
  __int64 v188; // [sp+228h] [bp-18D4h]
  int v189; // [sp+230h] [bp-18CCh]
  int v190; // [sp+234h] [bp-18C8h]
  char *v191; // [sp+238h] [bp-18C4h]
  int v192; // [sp+23Ch] [bp-18C0h]
  int v193; // [sp+240h] [bp-18BCh]
  int v194; // [sp+244h] [bp-18B8h]
  const char *v195; // [sp+248h] [bp-18B4h]
  const char *v196; // [sp+24Ch] [bp-18B0h]
  int v197; // [sp+250h] [bp-18ACh]
  const char *v198; // [sp+254h] [bp-18A8h]
  const char *v199; // [sp+258h] [bp-18A4h]
  int v200; // [sp+25Ch] [bp-18A0h]
  int v201; // [sp+260h] [bp-189Ch]
  int v202; // [sp+264h] [bp-1898h]
  __int64 v203; // [sp+268h] [bp-1894h]
  int v204; // [sp+270h] [bp-188Ch]
  int v205; // [sp+274h] [bp-1888h]
  char *v206; // [sp+278h] [bp-1884h]
  int v207; // [sp+27Ch] [bp-1880h]
  int v208; // [sp+280h] [bp-187Ch]
  int v209; // [sp+284h] [bp-1878h]
  const char *v210; // [sp+288h] [bp-1874h]
  const char *v211; // [sp+28Ch] [bp-1870h]
  int v212; // [sp+290h] [bp-186Ch]
  const char *v213; // [sp+294h] [bp-1868h]
  const char *v214; // [sp+298h] [bp-1864h]
  int v215; // [sp+29Ch] [bp-1860h]
  int v216; // [sp+2A0h] [bp-185Ch]
  int v217; // [sp+2A4h] [bp-1858h]
  __int64 v218; // [sp+2A8h] [bp-1854h]
  int v219; // [sp+2B0h] [bp-184Ch]
  int v220; // [sp+2B4h] [bp-1848h]
  char *v221; // [sp+2B8h] [bp-1844h]
  int v222; // [sp+2BCh] [bp-1840h]
  int v223; // [sp+2C0h] [bp-183Ch]
  int v224; // [sp+2C4h] [bp-1838h]
  const char *v225; // [sp+2C8h] [bp-1834h]
  int v226; // [sp+2CCh] [bp-1830h]
  int v227; // [sp+2D0h] [bp-182Ch]
  int v228; // [sp+2D4h] [bp-1828h]
  const char *v229; // [sp+2D8h] [bp-1824h]
  int v230; // [sp+2DCh] [bp-1820h]
  int v231; // [sp+2E0h] [bp-181Ch]
  int v232; // [sp+2E4h] [bp-1818h]
  __int64 v233; // [sp+2E8h] [bp-1814h]
  int v234; // [sp+2F0h] [bp-180Ch]
  int v235; // [sp+2F4h] [bp-1808h]
  _QWORD v236[255]; // [sp+2F8h] [bp-1804h] BYREF
  int v237[1025]; // [sp+AF8h] [bp-1004h] BYREF

  v0 = (int *)qword_1A4030;
  if ( !byte_1A45C0 )
  {
    dword_1A45C4 = (unsigned __int8)byte_1A45C0;
    dword_1A45C8 = (unsigned __int8)byte_1A45C0;
    byte_1A45CC = byte_1A45C0;
    byte_1A45C0 = 1;
  }
  pthread_mutex_lock(&::mutex);
  v119 = &dword_1A9B60;
  v86 = (unsigned __int8)byte_1A45CC ^ 1;
  pthread_mutex_lock(&stru_1A9B48);
  v1 = dword_1A9B60;
  pthread_mutex_unlock(&stru_1A9B48);
  memset(v236, 0, 16);
  if ( v1 <= 0 )
  {
    v97 = 0;
    v95 = 0;
    v94 = 0;
    v93 = 0;
    LODWORD(v88) = 0;
    v108 = dword_1A9B64;
    goto LABEL_22;
  }
  v2 = dword_1A9B64;
  v108 = dword_1A9B64;
  v87 = &stru_1A8A24;
  v94 = &dword_1A9B64[v1];
  v91 = (int *)qword_1A4030;
  v122 = "uneffective temp exceed limit";
  do
  {
    v3 = *v2++;
    v83 = 0;
    v4 = &v91[20 * *(_DWORD *)(v3 + 132)];
    v5 = v4[4];
    mutex = (pthread_mutex_t *)(v5 & 1);
    if ( (v5 & 1) == 0 )
    {
      v90 = 0;
      v89 = v5 & 2;
      if ( (v5 & 2) == 0 )
      {
        v106 = 0;
        v105 = v5 & 4;
        if ( (v5 & 4) == 0 )
          goto LABEL_57;
        v7 = v86 == 0;
        v8 = v4[7];
        v10 = v4[6] | 4;
        v4[6] = v10;
        if ( !v7 )
        {
          v104 = v236[0];
          v103 = "error";
          v107 = HIDWORD(v236[0]);
          v92 = "%s";
          v93 = "chain";
          v98 = &g_zc;
          v97 = &v78;
          goto LABEL_70;
        }
LABEL_13:
        v101 = v5 & 8;
        v102 = 0;
        if ( (v5 & 8) != 0 )
        {
          v4[7] = v8;
          v4[6] = v10 | 8;
        }
LABEL_15:
        v84 = v5 & 0x10;
        v85 = 0;
        if ( (v5 & 0x10) != 0 )
        {
          v7 = v86 == 0;
          v4[6] |= 0x10u;
          if ( !v7 )
          {
            v93 = "chain";
            v103 = "error";
            v92 = "%s";
            v98 = &g_zc;
            v97 = &v78;
            goto LABEL_111;
          }
        }
        continue;
      }
      v7 = v86 == 0;
      v8 = v4[7];
      v9 = v4[6] | 2;
      v4[6] = v9;
      if ( !v7 )
      {
        v104 = v236[0];
        v103 = "error";
        v107 = HIDWORD(v236[0]);
        v92 = "%s";
        v93 = "chain";
        v98 = &g_zc;
        v97 = &v78;
        goto LABEL_68;
      }
      LODWORD(v88) = v5 & 4;
      HIDWORD(v88) = v86;
LABEL_55:
      if ( !v88 )
        goto LABEL_57;
      v10 = v9 | 4;
      v4[7] = v8;
      v4[6] = v10;
      goto LABEL_13;
    }
    v6 = v4[6];
    v7 = v86 == 0;
    v8 = v4[7];
    v4[6] = v6 | 1;
    if ( v7 )
    {
      v99 = v5 & 2;
      LODWORD(v88) = v5 & 4;
      v100 = v86;
      HIDWORD(v88) = v86;
      if ( !(v99 | v86) )
      {
        if ( !v88 )
        {
          v123 = v5 & 8;
          v124 = v86;
          if ( v123 | v86 )
          {
            v4[6] = v6 | 9;
LABEL_60:
            v109 = v5 & 0x10;
            v110 = 0;
            if ( (v5 & 0x10) != 0 )
              v4[6] |= 0x10u;
            continue;
          }
          goto LABEL_15;
        }
        v10 = v6 | 5;
        v4[6] = v10;
        goto LABEL_13;
      }
      v9 = v6 | 3;
      v4[6] = v9;
      goto LABEL_55;
    }
    pthread_mutex_lock(v87);
    v33 = *(v2 - 1);
    v223 = 0;
    v98 = (int *)(dword_1A8A20[0] + 2);
    v224 = 0;
    v225 = 0;
    v226 = 0;
    v227 = 9;
    v221 = "error";
    v228 = 0;
    v103 = "error";
    v92 = "%s";
    v34 = *(_DWORD *)(v33 + 136);
    v222 = 5;
    v231 = 3;
    v225 = "temp lost";
    v230 = 5;
    v234 = 0;
    v93 = "chain";
    v97 = &v78;
    dword_1A8A20[0] += 2;
    v233 = v34;
    v229 = "chain";
    v98 = &g_zc;
    logfmt_raw(
      (char *)v237,
      0x1000u,
      0,
      v235,
      "chain",
      5,
      3,
      v232,
      (__int64)v34,
      0,
      v235,
      "error",
      5,
      0,
      0,
      "temp lost",
      0,
      9,
      0,
      "%s",
      "check_temp",
      mutex,
      v83);
    pthread_mutex_unlock(v87);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/miner_monitor/check_miner_status.c",
      166,
      "check_temp",
      10,
      34,
      100,
      v237);
    v35 = v4[4];
    v112 = 0;
    v107 = HIDWORD(v236[0]);
    v111 = v35 & 2;
    v104 = LODWORD(v236[0]) | 1;
    LODWORD(v236[0]) |= 1u;
    if ( (v35 & 2) != 0 )
    {
      v4[6] |= 2u;
LABEL_68:
      pthread_mutex_lock(v87);
      v36 = *(v2 - 1);
      v206 = v103;
      v208 = 0;
      v209 = 0;
      v210 = 0;
      v211 = 0;
      v212 = 0;
      v213 = 0;
      v37 = *(_DWORD *)(v36 + 136);
      v214 = v93;
      v207 = 5;
      v120 = v37;
      v104 |= 2u;
      v215 = 5;
      v219 = 0;
      v38 = dword_1A8A20[0];
      v39 = v97;
      v81 = "check_temp";
      v80 = v92;
      *v97 = v103;
      v39[1] = (const char *)5;
      v39[2] = 0;
      v39[3] = 0;
      v39 += 4;
      v218 = v120;
      v216 = 3;
      v210 = "temp too high";
      v212 = 13;
      v40 = v211;
      v41 = v213;
      dword_1A8A20[0] = v38 + 2;
      *v39 = "temp too high";
      v39[1] = v40;
      v39[2] = (const char *)13;
      v39[3] = v41;
      logfmt_raw((char *)v237, 0x1000u, 0, v220, v214, v215, v216, v217, v218, v219, v220);
      pthread_mutex_unlock(v87);
      zlog(
        *v98,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_miner_status.c",
        166,
        "check_temp",
        10,
        42,
        100,
        v237);
      v5 = v4[4];
      v114 = 0;
      v113 = v5 & 4;
      v236[0] = __PAIR64__(v107, v104);
      if ( (v5 & 4) != 0 )
      {
LABEL_69:
        v4[6] |= 4u;
LABEL_70:
        pthread_mutex_lock(v87);
        v42 = *(v2 - 1);
        v121 = v97;
        v191 = v103;
        v193 = 0;
        v194 = 0;
        v199 = v93;
        v195 = 0;
        v196 = 0;
        v197 = 0;
        v198 = 0;
        v43 = *(_DWORD *)(v42 + 136);
        v192 = 5;
        v200 = 5;
        v204 = 0;
        v44 = dword_1A8A20[0];
        v104 |= 4u;
        v120 = v43;
        v81 = "check_temp";
        v80 = v92;
        v45 = v97;
        *v97 = v103;
        v45[1] = (const char *)5;
        v45[2] = 0;
        v45[3] = 0;
        v45 += 4;
        v195 = "temp too low";
        dword_1A8A20[0] = v44 + 2;
        v201 = 3;
        v203 = v120;
        v197 = 12;
        v46 = v196;
        v47 = v198;
        *v45 = "temp too low";
        v45[1] = v46;
        v45[2] = (const char *)12;
        v45[3] = v47;
        logfmt_raw((char *)v237, 0x1000u, 0, v205, v199, v200, v201, v202, v203, v204, v205);
        pthread_mutex_unlock(v87);
        zlog(
          *v98,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/miner_util/miner_monitor/check_miner_status.c",
          166,
          "check_temp",
          10,
          50,
          100,
          v237);
        v5 = v4[4];
        v116 = 0;
        v115 = v5 & 8;
        v236[0] = __PAIR64__(v107, v104);
        if ( (v5 & 8) != 0 )
        {
          v4[6] |= 8u;
          goto LABEL_72;
        }
        goto LABEL_15;
      }
LABEL_57:
      v95 = v5 & 8;
      v96 = 0;
      if ( (v5 & 8) != 0 )
      {
        v7 = v86 == 0;
        v4[6] |= 8u;
        if ( !v7 )
        {
          v93 = "chain";
          v103 = "error";
          v92 = "%s";
          v98 = &g_zc;
          v97 = &v78;
          goto LABEL_112;
        }
        goto LABEL_60;
      }
      goto LABEL_15;
    }
    v126 = 0;
    v125 = v35 & 4;
    if ( (v35 & 4) != 0 )
      goto LABEL_69;
    v127 = v35 & 8;
    if ( (v35 & 8) != 0 )
    {
      v4[6] |= 8u;
LABEL_112:
      v107 = HIDWORD(v236[0]);
      v104 = v236[0];
LABEL_72:
      pthread_mutex_lock(v87);
      v48 = *(v2 - 1);
      v121 = v97;
      v176 = v103;
      v178 = 0;
      v179 = 0;
      v184 = v93;
      v180 = 0;
      v181 = 0;
      v182 = 0;
      v183 = 0;
      v49 = *(_DWORD *)(v48 + 136);
      v177 = 5;
      v185 = 5;
      v189 = 0;
      v50 = dword_1A8A20[0];
      v104 |= 8u;
      v120 = v49;
      v81 = "check_temp";
      v80 = v92;
      v51 = v97;
      *v97 = v103;
      v51[1] = (const char *)5;
      v51[2] = 0;
      v51[3] = 0;
      v51 += 4;
      v180 = "read no temp";
      dword_1A8A20[0] = v50 + 2;
      v186 = 3;
      v188 = v120;
      v182 = 12;
      v52 = v181;
      v53 = v183;
      *v51 = "read no temp";
      v51[1] = v52;
      v51[2] = (const char *)12;
      v51[3] = v53;
      logfmt_raw((char *)v237, 0x1000u, 0, v190, v184, v185, v186, v187, v188, v189, v190);
      pthread_mutex_unlock(v87);
      zlog(
        *v98,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_miner_status.c",
        166,
        "check_temp",
        10,
        58,
        100,
        v237);
      v54 = v4[4];
      v118 = 0;
      v117 = v54 & 0x10;
      v236[0] = __PAIR64__(v107, v104);
      if ( (v54 & 0x10) == 0 )
        continue;
      v4[6] |= 0x10u;
      goto LABEL_74;
    }
    v129 = 0;
    v128 = v35 & 0x10;
    if ( (v35 & 0x10) != 0 )
    {
      v4[6] |= 0x10u;
LABEL_111:
      v107 = HIDWORD(v236[0]);
      v104 = v236[0];
LABEL_74:
      v55 = v87;
      pthread_mutex_lock(v87);
      v56 = *(v2 - 1);
      v163 = 0;
      v164 = 0;
      v57 = *(_DWORD *)(v56 + 136);
      v166 = 0;
      v168 = 0;
      v169 = v93;
      v161 = v103;
      v162 = 5;
      v173 = v57;
      v81 = "check_temp";
      v93 = (const char *)(dword_1A8A20[0] + 2);
      v80 = v92;
      v58 = v97;
      v170 = 5;
      v174 = 0;
      v165 = v122;
      *v97 = v103;
      v58[1] = (const char *)5;
      v58[2] = 0;
      v58[3] = 0;
      v58 += 4;
      v171 = 3;
      dword_1A8A20[0] = (int)v93;
      v167 = 29;
      v59 = v166;
      v60 = v168;
      *v58 = v165;
      v58[1] = v59;
      v58[2] = (const char *)29;
      v58[3] = v60;
      logfmt_raw((char *)v237, 0x1000u, 0, v175, v169, v170, v171, v172, v173, v174, v175);
      pthread_mutex_unlock(v55);
      zlog(
        *v98,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_miner_status.c",
        166,
        "check_temp",
        10,
        66,
        100,
        v237);
      HIDWORD(v236[0]) = v107;
      LODWORD(v236[0]) = v104 | 0x10;
    }
  }
  while ( v94 != v2 );
  v0 = v91;
  v11 = v236[0] & 0x1E;
  v97 = (const char **)((v236[0] >> 1) & 1);
  if ( (v236[0] & 0x1E) != 0 )
    v11 = 1;
  v93 = (const char *)((LODWORD(v236[0]) >> 4) & 1);
  LODWORD(v88) = v11;
  v94 = (int *)((LODWORD(v236[0]) >> 3) & 1);
  v95 = (LODWORD(v236[0]) >> 2) & 1;
LABEL_22:
  pthread_mutex_lock(&stru_1A9B48);
  pthread_mutex_unlock(&stru_1A9B48);
  v12 = &v0[20 * *(_DWORD *)(*v108 + 132)];
  if ( (v12[8] & 4) != 0 )
  {
    v13 = (char *)v86;
    v7 = v86 == 0;
    v12[10] |= 4u;
    if ( v7 )
    {
      v92 = v13;
    }
    else
    {
      pthread_mutex_lock(&stru_1A8A24);
      v156 = 0;
      v157 = 0;
      v160 = 0;
      v154 = "error";
      v155 = 5;
      v158 = (unsigned int)"fan error exceed limit";
      v159 = 22;
      LODWORD(v88) = v86;
      v92 = (char *)v86;
      ++dword_1A8A20[0];
      logfmt_raw(
        (char *)v237,
        0x1000u,
        0,
        0,
        "error",
        5,
        0,
        0,
        "fan error exceed limit",
        0,
        22,
        0,
        "%s",
        "check_fan_err");
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_miner_status.c",
        166,
        "check_fan_err",
        13,
        83,
        100,
        v237);
    }
  }
  else
  {
    v92 = 0;
  }
  pthread_mutex_lock(&stru_1A9B48);
  v14 = *v119;
  pthread_mutex_unlock(&stru_1A9B48);
  if ( v14 <= 0 )
  {
    v26 = v88;
    v89 = 0;
  }
  else
  {
    v15 = dword_1A9B64;
    mutex = &stru_1A8A24;
    v84 = (int)&v108[v14];
    v91 = dword_1A8A20;
    v89 = 0;
    do
    {
      while ( 1 )
      {
        v16 = *v15++;
        v17 = &v0[20 * *(_DWORD *)(v16 + 132)];
        if ( (*v17 & 1) != 0 )
        {
          v7 = v86 == 0;
          v17[2] |= 1u;
          if ( !v7 )
            break;
        }
        if ( (int *)v84 == v15 )
          goto LABEL_33;
      }
      pthread_mutex_lock(mutex);
      HIDWORD(v18) = *(_DWORD *)(*(v15 - 1) + 136);
      LODWORD(v148) = "chain";
      v19 = HIDWORD(v18);
      HIDWORD(v148) = 5;
      v149 = 3;
      v152 = 0;
      v87 = (pthread_mutex_t *)&g_zc;
      SHIDWORD(v18) >>= 31;
      v78 = "%s low hashrate happened!";
      LODWORD(v18) = v19;
      v79 = "check_low_hashrate";
      v151 = v18;
      v76 = v148;
      v77 = v150;
      v20 = v153;
      v21 = v86;
      ++*v91;
      v89 = v21;
      logfmt_raw((char *)v237, 0x1000u, 0, v20, v76, 3, v77, v18, 0, v20, v78, v79);
      pthread_mutex_unlock(mutex);
      zlog(
        v87->__lock,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_miner_status.c",
        166,
        "check_low_hashrate",
        18,
        102,
        80,
        v237);
      v22 = (float *)&dword_1A4178[52 * *(_DWORD *)(*(v15 - 1) + 132)];
      v23 = v22[8];
      v24 = v22[9];
      v25 = v22[10];
      pthread_mutex_lock(mutex);
      logfmt_raw((char *)v237, 0x1000u, 0, "no ratio hashrate last_5s: %f", v23 * 0.000000001);
      pthread_mutex_unlock(mutex);
      zlog(
        v87->__lock,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_miner_status.c",
        166,
        "check_low_hashrate",
        18,
        105,
        80,
        v237);
      pthread_mutex_lock(mutex);
      logfmt_raw((char *)v237, 0x1000u, 0, "no ratio hashrate last_30min: %f", v24 * 0.000000001);
      pthread_mutex_unlock(mutex);
      zlog(
        v87->__lock,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_miner_status.c",
        166,
        "check_low_hashrate",
        18,
        106,
        80,
        v237);
      pthread_mutex_lock(mutex);
      logfmt_raw((char *)v237, 0x1000u, 0, "no ratio hashrate lifetime: %f", v25 * 0.000000001);
      pthread_mutex_unlock(mutex);
      zlog(
        v87->__lock,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_miner_status.c",
        166,
        "check_low_hashrate",
        18,
        107,
        80,
        v237);
    }
    while ( (int *)v84 != v15 );
LABEL_33:
    v26 = (unsigned __int8)(v89 | v88);
  }
  if ( !*((_BYTE *)v0 + 2472) )
  {
    clock_gettime(1, &stru_1A49DC);
    *((_BYTE *)v0 + 2472) = 1;
  }
  if ( v0[625] > 0 )
  {
    v27 = 0;
    do
    {
      while ( 1 )
      {
        v28 = *(_DWORD *)(v0[623] + 4 * v27++);
        v29 = (pthread_mutex_t *)(v28 + 1192);
        pthread_mutex_lock((pthread_mutex_t *)(v28 + 1192));
        v30 = *(unsigned __int8 *)(v28 + 1272);
        pthread_mutex_unlock(v29);
        if ( !v30 )
        {
          if ( *((_BYTE *)v0 + 2496) )
            break;
        }
        if ( v27 >= v0[625] )
          goto LABEL_42;
      }
      clock_gettime(1, &stru_1A49DC);
    }
    while ( v27 < v0[625] );
  }
LABEL_42:
  clock_gettime(1, (struct timespec *)&dword_1A49E4);
  if ( !v86 )
  {
LABEL_76:
    v61 = *((unsigned __int8 *)v0 + 1436);
    if ( *((_BYTE *)v0 + 1436) )
    {
      LODWORD(v88) = 0;
    }
    else if ( (_DWORD)v88 )
    {
      goto LABEL_104;
    }
LABEL_79:
    if ( !v26 )
      LOBYTE(v26) = *((_BYTE *)v0 + 1436);
LABEL_81:
    v62 = v86;
    *((_BYTE *)v0 + 1435) = v26;
    if ( v62 )
      goto LABEL_92;
    goto LABEL_82;
  }
  v31 = 1000LL * (v0[621] - v0[619]) + (v0[622] - v0[620]) / 1000000;
  if ( v31 <= 60000 )
  {
    v0[626] = 0;
    goto LABEL_76;
  }
  v32 = v0[626];
  v0[626] = v32 + 1;
  if ( !(v32 % 60) )
  {
    pthread_mutex_lock(&stru_1A8A24);
    sub_B61F4(v144, "net lost");
    logfmt_raw(
      (char *)v237,
      0x1000u,
      0,
      v147,
      v144[0],
      v144[1],
      v144[2],
      v144[3],
      v145,
      v146,
      v147,
      "lost internet for %d seconds",
      (int)v31 / 1000);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/miner_monitor/check_miner_status.c",
      166,
      "check_lost_connection_to_pool",
      29,
      140,
      100,
      v237);
  }
  if ( v31 > 1800000 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    v139 = 0;
    v140 = 0;
    v138 = 5;
    v143 = 0;
    v137 = "error";
    v141 = (unsigned int)"net lost";
    v142 = 8;
    ++dword_1A8A20[0];
    logfmt_raw(
      (char *)v237,
      0x1000u,
      0,
      0,
      "error",
      5,
      0,
      0,
      "net lost",
      0,
      8,
      0,
      "lost internet %d seconds > 30 minutes, reboot zynq.",
      (int)v31 / 1000);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/miner_monitor/check_miner_status.c",
      166,
      "check_lost_connection_to_pool",
      29,
      149,
      120,
      v237);
    system("reboot");
  }
  if ( !*((_BYTE *)v0 + 1436) )
  {
    if ( !(_DWORD)v88 )
    {
      LOBYTE(v26) = v86;
      LODWORD(v88) = v86;
      goto LABEL_81;
    }
    v26 = v88;
    v61 = v88;
LABEL_104:
    *((_BYTE *)v0 + 1436) = 1;
    pthread_mutex_lock(&stru_1A9B48);
    v70 = *v119;
    pthread_mutex_unlock(&stru_1A9B48);
    if ( v70 > 0 )
    {
      if ( v70 <= 8 )
      {
        v72 = 0;
      }
      else
      {
        v71 = &unk_1A9B78;
        v72 = 0;
        do
        {
          v73 = *(v71 - 5);
          v72 += 8;
          __pld(v71);
          v71 += 8;
          (*(void (**)(void))(v73 + 8))();
          off_1A2B88(*(_DWORD *)(*(v71 - 13) + 132));
          (*(void (**)(void))(*(v71 - 12) + 8))();
          off_1A2B88(*(_DWORD *)(*(v71 - 12) + 132));
          (*(void (**)(void))(*(v71 - 11) + 8))();
          off_1A2B88(*(_DWORD *)(*(v71 - 11) + 132));
          (*(void (**)(void))(*(v71 - 10) + 8))();
          off_1A2B88(*(_DWORD *)(*(v71 - 10) + 132));
          (*(void (**)(void))(*(v71 - 9) + 8))();
          off_1A2B88(*(_DWORD *)(*(v71 - 9) + 132));
          (*(void (**)(void))(*(v71 - 8) + 8))();
          off_1A2B88(*(_DWORD *)(*(v71 - 8) + 132));
          (*(void (**)(void))(*(v71 - 7) + 8))();
          off_1A2B88(*(_DWORD *)(*(v71 - 7) + 132));
          (*(void (**)(void))(*(v71 - 6) + 8))();
          off_1A2B88(*(_DWORD *)(*(v71 - 6) + 132));
        }
        while ( ((v70 - 9) & 0xFFFFFFF8) + 8 != v72 );
      }
      v74 = &v108[v72 - 1];
      do
      {
        v75 = v74[1];
        ++v74;
        ++v72;
        (*(void (**)(void))(v75 + 8))();
        off_1A2B88(*(_DWORD *)(*v74 + 132));
      }
      while ( v70 > v72 );
    }
    LODWORD(v88) = v61;
    pthread_mutex_lock(&stru_1A8A24);
    v133 = 0;
    v130 = "poweroff";
    v134 = 1;
    v131 = 8;
    v132 = 2;
    v135 = 0;
    v136 = 0;
    ++dword_1A8A20[0];
    logfmt_raw(
      (char *)v237,
      0x1000u,
      0,
      0,
      "poweroff",
      8,
      2,
      0,
      1,
      0,
      0,
      0,
      "high temp %d low temp %d fan err %d read no temp %d, uneffective temp %d",
      v97,
      v95,
      v92,
      v94,
      v93);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/miner_monitor/check_miner_status.c",
      166,
      "task_check_miner_status",
      23,
      267,
      120,
      v237);
    goto LABEL_79;
  }
  LODWORD(v88) = *((unsigned __int8 *)v0 + 1436);
  *((_BYTE *)v0 + 1435) = 1;
LABEL_92:
  *((_BYTE *)v0 + 1432) = (_BYTE)v92;
  v67 = (unsigned __int8)v97;
  *((_BYTE *)v0 + 1433) = v89;
  v68 = v67 | ((unsigned __int8)v95 << 8);
  *((_BYTE *)v0 + 1434) = v88;
  v0[357] = v68 | ((unsigned __int8)v94 << 16) & 0xFFFFFF | ((unsigned __int8)v93 << 24);
LABEL_82:
  pthread_mutex_unlock(&::mutex);
  v63 = *((unsigned __int8 *)v0 + 1435);
  byte_1A25D0 ^= 1u;
  if ( v63 )
  {
    v64 = sub_A00A8(2, 1);
    if ( byte_1A25D0 )
    {
      v65 = 0;
      v64 = 1;
    }
    else
    {
      v65 = 1;
    }
    if ( !byte_1A25D0 )
      v64 = v65;
    sub_A00A8(v64, v65);
    if ( !*((_BYTE *)v0 + 1435) )
      return set_pwm_by_temp();
  }
  else
  {
    sub_A00A8(1, 1);
    sub_A00A8(2, byte_1A25D0 == 0);
    if ( !*((_BYTE *)v0 + 1435) )
      return set_pwm_by_temp();
  }
  if ( *((_BYTE *)v0 + 2400) )
  {
    v69 = v0[601];
  }
  else
  {
    if ( platform_inited )
    {
      v69 = 1;
      byte_1A88E8 = 1;
      dword_1A88E4 = 100;
    }
    else
    {
      strcpy((char *)v236, "please init platform first!!\n");
      V_LOCK();
      logfmt_raw((char *)v237, 0x1000u, 0, v236);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_pwm.c",
        164,
        "pwm_init",
        8,
        25,
        100,
        v237);
      v69 = -2;
    }
    v0[601] = v69;
    *((_BYTE *)v0 + 2400) = 1;
  }
  result = pwm_get(v69, v237);
  if ( v237[0] != 100 )
    return pwm_set(v0[601], 0x64u);
  return result;
}
