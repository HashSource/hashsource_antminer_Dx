int task_check_miner_status()
{
  pthread_mutex_t *v0; // r11
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
  int v13; // r1
  int lock; // r9
  int *v15; // r10
  pthread_mutex_t *v16; // r7
  int v17; // t1
  int *v18; // r3
  int v19; // r9
  int v20; // r3
  pthread_mutex_t *v21; // r12
  float *v22; // r3
  float v23; // s20
  float v24; // s17
  float v25; // s16
  int v26; // r5
  signed int v27; // r7
  int v28; // r9
  pthread_mutex_t *v29; // r8
  int v30; // r9
  __int64 v31; // r6
  int spins; // r5
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
  int kind; // r0
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
  int v82; // [sp+4Ch] [bp-1AB0h]
  int *v83; // [sp+50h] [bp-1AACh]
  int v84; // [sp+54h] [bp-1AA8h]
  int v86; // [sp+5Ch] [bp-1AA0h]
  int v87; // [sp+60h] [bp-1A9Ch]
  int v88; // [sp+64h] [bp-1A98h]
  __int64 v89; // [sp+68h] [bp-1A94h]
  pthread_mutex_t *mutex; // [sp+70h] [bp-1A8Ch]
  pthread_mutex_t *v91; // [sp+74h] [bp-1A88h]
  int v92; // [sp+78h] [bp-1A84h]
  int v93; // [sp+7Ch] [bp-1A80h]
  const char *v94; // [sp+80h] [bp-1A7Ch]
  char *v95; // [sp+84h] [bp-1A78h]
  int v96; // [sp+88h] [bp-1A74h]
  int v97; // [sp+8Ch] [bp-1A70h]
  int *v98; // [sp+90h] [bp-1A6Ch]
  int *v99; // [sp+94h] [bp-1A68h]
  char *v100; // [sp+98h] [bp-1A64h]
  const char **v101; // [sp+9Ch] [bp-1A60h]
  int v102; // [sp+A0h] [bp-1A5Ch]
  int v103; // [sp+A4h] [bp-1A58h]
  int v104; // [sp+A8h] [bp-1A54h]
  int v105; // [sp+ACh] [bp-1A50h]
  int v106; // [sp+B0h] [bp-1A4Ch]
  int v107; // [sp+B4h] [bp-1A48h]
  __int64 v108; // [sp+B8h] [bp-1A44h]
  int v109; // [sp+C0h] [bp-1A3Ch]
  int v110; // [sp+C4h] [bp-1A38h]
  int v111; // [sp+C8h] [bp-1A34h]
  int v112; // [sp+CCh] [bp-1A30h]
  int v113; // [sp+D0h] [bp-1A2Ch]
  int v114; // [sp+D4h] [bp-1A28h]
  int v115; // [sp+D8h] [bp-1A24h]
  int v116; // [sp+DCh] [bp-1A20h]
  int v117; // [sp+E0h] [bp-1A1Ch]
  int v118; // [sp+E4h] [bp-1A18h]
  int v119; // [sp+E8h] [bp-1A14h]
  const char **v120; // [sp+ECh] [bp-1A10h]
  const char *v121; // [sp+F0h] [bp-1A0Ch]
  pthread_mutex_t *v122; // [sp+F4h] [bp-1A08h]
  int v123; // [sp+F8h] [bp-1A04h]
  int v124; // [sp+FCh] [bp-1A00h]
  __int64 v125; // [sp+100h] [bp-19FCh]
  __int64 v126; // [sp+108h] [bp-19F4h]
  int v127; // [sp+110h] [bp-19ECh]
  int v128; // [sp+114h] [bp-19E8h]
  const char *v129; // [sp+118h] [bp-19E4h]
  int v130; // [sp+11Ch] [bp-19E0h]
  int v131; // [sp+120h] [bp-19DCh]
  int v132; // [sp+124h] [bp-19D8h]
  __int64 v133; // [sp+128h] [bp-19D4h]
  int v134; // [sp+130h] [bp-19CCh]
  int v135; // [sp+134h] [bp-19C8h]
  char *v136; // [sp+138h] [bp-19C4h]
  int v137; // [sp+13Ch] [bp-19C0h]
  int v138; // [sp+140h] [bp-19BCh]
  int v139; // [sp+144h] [bp-19B8h]
  __int64 v140; // [sp+148h] [bp-19B4h]
  int v141; // [sp+150h] [bp-19ACh]
  int v142; // [sp+154h] [bp-19A8h]
  _DWORD v143[4]; // [sp+158h] [bp-19A4h] BYREF
  __int64 v144; // [sp+168h] [bp-1994h]
  int v145; // [sp+170h] [bp-198Ch]
  int v146; // [sp+174h] [bp-1988h]
  __int64 v147; // [sp+178h] [bp-1984h]
  int v148; // [sp+180h] [bp-197Ch]
  int v149; // [sp+184h] [bp-1978h]
  __int64 v150; // [sp+188h] [bp-1974h]
  int v151; // [sp+190h] [bp-196Ch]
  int v152; // [sp+194h] [bp-1968h]
  char *v153; // [sp+198h] [bp-1964h]
  int v154; // [sp+19Ch] [bp-1960h]
  int v155; // [sp+1A0h] [bp-195Ch]
  int v156; // [sp+1A4h] [bp-1958h]
  __int64 v157; // [sp+1A8h] [bp-1954h]
  int v158; // [sp+1B0h] [bp-194Ch]
  int v159; // [sp+1B4h] [bp-1948h]
  char *v160; // [sp+1B8h] [bp-1944h]
  int v161; // [sp+1BCh] [bp-1940h]
  int v162; // [sp+1C0h] [bp-193Ch]
  int v163; // [sp+1C4h] [bp-1938h]
  const char *v164; // [sp+1C8h] [bp-1934h]
  const char *v165; // [sp+1CCh] [bp-1930h]
  int v166; // [sp+1D0h] [bp-192Ch]
  const char *v167; // [sp+1D4h] [bp-1928h]
  const char *v168; // [sp+1D8h] [bp-1924h]
  int v169; // [sp+1DCh] [bp-1920h]
  int v170; // [sp+1E0h] [bp-191Ch]
  int v171; // [sp+1E4h] [bp-1918h]
  __int64 v172; // [sp+1E8h] [bp-1914h]
  int v173; // [sp+1F0h] [bp-190Ch]
  int v174; // [sp+1F4h] [bp-1908h]
  char *v175; // [sp+1F8h] [bp-1904h]
  int v176; // [sp+1FCh] [bp-1900h]
  int v177; // [sp+200h] [bp-18FCh]
  int v178; // [sp+204h] [bp-18F8h]
  const char *v179; // [sp+208h] [bp-18F4h]
  const char *v180; // [sp+20Ch] [bp-18F0h]
  int v181; // [sp+210h] [bp-18ECh]
  const char *v182; // [sp+214h] [bp-18E8h]
  const char *v183; // [sp+218h] [bp-18E4h]
  int v184; // [sp+21Ch] [bp-18E0h]
  int v185; // [sp+220h] [bp-18DCh]
  int v186; // [sp+224h] [bp-18D8h]
  __int64 v187; // [sp+228h] [bp-18D4h]
  int v188; // [sp+230h] [bp-18CCh]
  int v189; // [sp+234h] [bp-18C8h]
  char *v190; // [sp+238h] [bp-18C4h]
  int v191; // [sp+23Ch] [bp-18C0h]
  int v192; // [sp+240h] [bp-18BCh]
  int v193; // [sp+244h] [bp-18B8h]
  const char *v194; // [sp+248h] [bp-18B4h]
  const char *v195; // [sp+24Ch] [bp-18B0h]
  int v196; // [sp+250h] [bp-18ACh]
  const char *v197; // [sp+254h] [bp-18A8h]
  const char *v198; // [sp+258h] [bp-18A4h]
  int v199; // [sp+25Ch] [bp-18A0h]
  int v200; // [sp+260h] [bp-189Ch]
  int v201; // [sp+264h] [bp-1898h]
  __int64 v202; // [sp+268h] [bp-1894h]
  int v203; // [sp+270h] [bp-188Ch]
  int v204; // [sp+274h] [bp-1888h]
  char *v205; // [sp+278h] [bp-1884h]
  int v206; // [sp+27Ch] [bp-1880h]
  int v207; // [sp+280h] [bp-187Ch]
  int v208; // [sp+284h] [bp-1878h]
  const char *v209; // [sp+288h] [bp-1874h]
  const char *v210; // [sp+28Ch] [bp-1870h]
  int v211; // [sp+290h] [bp-186Ch]
  const char *v212; // [sp+294h] [bp-1868h]
  const char *v213; // [sp+298h] [bp-1864h]
  int v214; // [sp+29Ch] [bp-1860h]
  int v215; // [sp+2A0h] [bp-185Ch]
  int v216; // [sp+2A4h] [bp-1858h]
  __int64 v217; // [sp+2A8h] [bp-1854h]
  int v218; // [sp+2B0h] [bp-184Ch]
  int v219; // [sp+2B4h] [bp-1848h]
  char *v220; // [sp+2B8h] [bp-1844h]
  int v221; // [sp+2BCh] [bp-1840h]
  int v222; // [sp+2C0h] [bp-183Ch]
  int v223; // [sp+2C4h] [bp-1838h]
  const char *v224; // [sp+2C8h] [bp-1834h]
  int v225; // [sp+2CCh] [bp-1830h]
  int v226; // [sp+2D0h] [bp-182Ch]
  int v227; // [sp+2D4h] [bp-1828h]
  const char *v228; // [sp+2D8h] [bp-1824h]
  int v229; // [sp+2DCh] [bp-1820h]
  int v230; // [sp+2E0h] [bp-181Ch]
  int v231; // [sp+2E4h] [bp-1818h]
  __int64 v232; // [sp+2E8h] [bp-1814h]
  int v233; // [sp+2F0h] [bp-180Ch]
  int v234; // [sp+2F4h] [bp-1808h]
  char v235[2040]; // [sp+2F8h] [bp-1804h] BYREF
  int v236[1025]; // [sp+AF8h] [bp-1004h] BYREF

  v0 = &stru_190E30;
  if ( !byte_191BD8 )
  {
    dword_191BDC = (unsigned __int8)byte_191BD8;
    dword_191BE0 = (unsigned __int8)byte_191BD8;
    byte_191BE4 = byte_191BD8;
    byte_191BD8 = 1;
  }
  pthread_mutex_lock(&::mutex);
  v82 = (unsigned __int8)byte_191BE4 ^ 1;
  pthread_mutex_lock(&stru_190E30);
  v1 = dword_190E48;
  pthread_mutex_unlock(&stru_190E30);
  memset(v235, 0, 16);
  if ( v1 <= 0 )
  {
    v96 = 0;
    v98 = 0;
    v91 = (pthread_mutex_t *)qword_191250;
    v95 = 0;
    v94 = 0;
    v87 = 0;
    goto LABEL_22;
  }
  v2 = dword_190E4C;
  mutex = &stru_197BB8;
  v122 = &stru_190E30;
  v91 = (pthread_mutex_t *)qword_191250;
  v98 = &dword_190E4C[v1];
  v121 = "uneffective temp exceed limit";
  do
  {
    v3 = *v2++;
    v84 = 0;
    v4 = &v91->__lock + 20 * *(_DWORD *)(v3 + 120);
    v5 = v4[4];
    v83 = (int *)(v5 & 1);
    if ( (v5 & 1) == 0 )
    {
      v93 = 0;
      v92 = v5 & 2;
      if ( (v5 & 2) == 0 )
      {
        v107 = 0;
        v106 = v5 & 4;
        if ( (v5 & 4) == 0 )
          goto LABEL_57;
        v7 = v82 == 0;
        v8 = v4[7];
        v10 = v4[6] | 4;
        v4[6] = v10;
        if ( !v7 )
        {
          v108 = *(_QWORD *)v235;
          v100 = "error";
          v95 = "%s";
          v94 = "chain";
          v99 = &g_zc;
          v101 = &v78;
          goto LABEL_70;
        }
LABEL_13:
        v104 = v5 & 8;
        v105 = 0;
        if ( (v5 & 8) != 0 )
        {
          v4[7] = v8;
          v4[6] = v10 | 8;
        }
LABEL_15:
        v87 = v5 & 0x10;
        v88 = 0;
        if ( (v5 & 0x10) != 0 )
        {
          v7 = v82 == 0;
          v4[6] |= 0x10u;
          if ( !v7 )
          {
            v94 = "chain";
            v100 = "error";
            v95 = "%s";
            v99 = &g_zc;
            v101 = &v78;
            goto LABEL_111;
          }
        }
        continue;
      }
      v7 = v82 == 0;
      v8 = v4[7];
      v9 = v4[6] | 2;
      v4[6] = v9;
      if ( !v7 )
      {
        v108 = *(_QWORD *)v235;
        v100 = "error";
        v95 = "%s";
        v94 = "chain";
        v99 = &g_zc;
        v101 = &v78;
        goto LABEL_68;
      }
      LODWORD(v89) = v5 & 4;
      HIDWORD(v89) = v82;
LABEL_55:
      if ( !v89 )
        goto LABEL_57;
      v10 = v9 | 4;
      v4[7] = v8;
      v4[6] = v10;
      goto LABEL_13;
    }
    v6 = v4[6];
    v7 = v82 == 0;
    v8 = v4[7];
    v4[6] = v6 | 1;
    if ( v7 )
    {
      v102 = v5 & 2;
      LODWORD(v89) = v5 & 4;
      v103 = v82;
      HIDWORD(v89) = v82;
      if ( !(v102 | v82) )
      {
        if ( !v89 )
        {
          v123 = v5 & 8;
          v124 = v82;
          if ( v123 | v82 )
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
    pthread_mutex_lock(mutex);
    v33 = *(v2 - 1);
    v222 = 0;
    v99 = (int *)(dword_197BD4 + 2);
    v223 = 0;
    v224 = 0;
    v225 = 0;
    v226 = 9;
    v220 = "error";
    v227 = 0;
    v100 = "error";
    v95 = "%s";
    v34 = *(_DWORD *)(v33 + 124);
    v221 = 5;
    v230 = 3;
    v224 = "temp lost";
    v229 = 5;
    v233 = 0;
    v94 = "chain";
    v101 = &v78;
    dword_197BD4 += 2;
    v232 = v34;
    v228 = "chain";
    v99 = &g_zc;
    logfmt_raw(
      (char *)v236,
      0x1000u,
      0,
      v234,
      "chain",
      5,
      3,
      v231,
      (__int64)v34,
      0,
      v234,
      "error",
      5,
      0,
      0,
      "temp lost",
      0,
      9,
      0,
      "%s",
      "check_temp");
    pthread_mutex_unlock(mutex);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/miner_monitor/check_miner_status.c",
      166,
      "check_temp",
      10,
      34,
      100,
      v236);
    v35 = v4[4];
    v112 = 0;
    v111 = v35 & 2;
    v108 = *(_QWORD *)v235 | 1LL;
    *(_DWORD *)v235 |= 1u;
    if ( (v35 & 2) != 0 )
    {
      v4[6] |= 2u;
LABEL_68:
      pthread_mutex_lock(mutex);
      v36 = *(v2 - 1);
      v205 = v100;
      v207 = 0;
      v208 = 0;
      v209 = 0;
      v210 = 0;
      v211 = 0;
      v212 = 0;
      v37 = *(_DWORD *)(v36 + 124);
      v213 = v94;
      v206 = 5;
      v119 = v37;
      LODWORD(v108) = v108 | 2;
      v214 = 5;
      v218 = 0;
      v38 = dword_197BD4;
      v39 = v101;
      v81 = "check_temp";
      v80 = v95;
      *v101 = v100;
      v39[1] = (const char *)5;
      v39[2] = 0;
      v39[3] = 0;
      v39 += 4;
      v217 = v119;
      v215 = 3;
      v209 = "temp too high";
      v211 = 13;
      v40 = v210;
      v41 = v212;
      dword_197BD4 = v38 + 2;
      *v39 = "temp too high";
      v39[1] = v40;
      v39[2] = (const char *)13;
      v39[3] = v41;
      logfmt_raw((char *)v236, 0x1000u, 0, v219, v213, v214, v215, v216, v217, v218, v219);
      pthread_mutex_unlock(mutex);
      zlog(
        *v99,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_miner_status.c",
        166,
        "check_temp",
        10,
        42,
        100,
        v236);
      v5 = v4[4];
      v114 = 0;
      v113 = v5 & 4;
      *(_QWORD *)v235 = v108;
      if ( (v5 & 4) != 0 )
      {
LABEL_69:
        v4[6] |= 4u;
LABEL_70:
        pthread_mutex_lock(mutex);
        v42 = *(v2 - 1);
        v120 = v101;
        v190 = v100;
        v192 = 0;
        v193 = 0;
        v198 = v94;
        v194 = 0;
        v195 = 0;
        v196 = 0;
        v197 = 0;
        v43 = *(_DWORD *)(v42 + 124);
        v191 = 5;
        v199 = 5;
        v203 = 0;
        v44 = dword_197BD4;
        LODWORD(v108) = v108 | 4;
        v119 = v43;
        v81 = "check_temp";
        v80 = v95;
        v45 = v101;
        *v101 = v100;
        v45[1] = (const char *)5;
        v45[2] = 0;
        v45[3] = 0;
        v45 += 4;
        v194 = "temp too low";
        dword_197BD4 = v44 + 2;
        v200 = 3;
        v202 = v119;
        v196 = 12;
        v46 = v195;
        v47 = v197;
        *v45 = "temp too low";
        v45[1] = v46;
        v45[2] = (const char *)12;
        v45[3] = v47;
        logfmt_raw((char *)v236, 0x1000u, 0, v204, v198, v199, v200, v201, v202, v203, v204);
        pthread_mutex_unlock(mutex);
        zlog(
          *v99,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/miner_util/miner_monitor/check_miner_status.c",
          166,
          "check_temp",
          10,
          50,
          100,
          v236);
        v5 = v4[4];
        v116 = 0;
        v115 = v5 & 8;
        *(_QWORD *)v235 = v108;
        if ( (v5 & 8) != 0 )
        {
          v4[6] |= 8u;
          goto LABEL_72;
        }
        goto LABEL_15;
      }
LABEL_57:
      v96 = v5 & 8;
      v97 = 0;
      if ( (v5 & 8) != 0 )
      {
        v7 = v82 == 0;
        v4[6] |= 8u;
        if ( !v7 )
        {
          v94 = "chain";
          v100 = "error";
          v95 = "%s";
          v99 = &g_zc;
          v101 = &v78;
          goto LABEL_112;
        }
        goto LABEL_60;
      }
      goto LABEL_15;
    }
    v125 = v35 & 4;
    if ( (v35 & 4) != 0 )
      goto LABEL_69;
    v126 = v35 & 8;
    if ( (v35 & 8) != 0 )
    {
      v4[6] |= 8u;
LABEL_112:
      v108 = *(_QWORD *)v235;
LABEL_72:
      pthread_mutex_lock(mutex);
      v48 = *(v2 - 1);
      v120 = v101;
      v175 = v100;
      v177 = 0;
      v178 = 0;
      v183 = v94;
      v179 = 0;
      v180 = 0;
      v181 = 0;
      v182 = 0;
      v49 = *(_DWORD *)(v48 + 124);
      v176 = 5;
      v184 = 5;
      v188 = 0;
      v50 = dword_197BD4;
      LODWORD(v108) = v108 | 8;
      v119 = v49;
      v81 = "check_temp";
      v80 = v95;
      v51 = v101;
      *v101 = v100;
      v51[1] = (const char *)5;
      v51[2] = 0;
      v51[3] = 0;
      v51 += 4;
      v179 = "read no temp";
      dword_197BD4 = v50 + 2;
      v185 = 3;
      v187 = v119;
      v181 = 12;
      v52 = v180;
      v53 = v182;
      *v51 = "read no temp";
      v51[1] = v52;
      v51[2] = (const char *)12;
      v51[3] = v53;
      logfmt_raw((char *)v236, 0x1000u, 0, v189, v183, v184, v185, v186, v187, v188, v189);
      pthread_mutex_unlock(mutex);
      zlog(
        *v99,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_miner_status.c",
        166,
        "check_temp",
        10,
        58,
        100,
        v236);
      v54 = v4[4];
      v118 = 0;
      v117 = v54 & 0x10;
      *(_QWORD *)v235 = v108;
      if ( (v54 & 0x10) == 0 )
        continue;
      v4[6] |= 0x10u;
      goto LABEL_74;
    }
    v128 = 0;
    v127 = v35 & 0x10;
    if ( (v35 & 0x10) != 0 )
    {
      v4[6] |= 0x10u;
LABEL_111:
      v108 = *(_QWORD *)v235;
LABEL_74:
      v55 = mutex;
      pthread_mutex_lock(mutex);
      v56 = *(v2 - 1);
      v162 = 0;
      v163 = 0;
      v57 = *(_DWORD *)(v56 + 124);
      v165 = 0;
      v167 = 0;
      v168 = v94;
      v160 = v100;
      v161 = 5;
      v172 = v57;
      v81 = "check_temp";
      v94 = (const char *)(dword_197BD4 + 2);
      v80 = v95;
      v58 = v101;
      v169 = 5;
      v173 = 0;
      v164 = v121;
      *v101 = v100;
      v58[1] = (const char *)5;
      v58[2] = 0;
      v58[3] = 0;
      v58 += 4;
      v170 = 3;
      dword_197BD4 = (int)v94;
      v166 = 29;
      v59 = v165;
      v60 = v167;
      *v58 = v164;
      v58[1] = v59;
      v58[2] = (const char *)29;
      v58[3] = v60;
      logfmt_raw((char *)v236, 0x1000u, 0, v174, v168, v169, v170, v171, v172, v173, v174);
      pthread_mutex_unlock(v55);
      zlog(
        *v99,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_miner_status.c",
        166,
        "check_temp",
        10,
        66,
        100,
        v236);
      *(_QWORD *)v235 = v108 | 0x10;
    }
  }
  while ( v98 != v2 );
  v0 = v122;
  v11 = v235[0] & 0x1E;
  v96 = (*(__int64 *)v235 >> 1) & 1;
  if ( (v235[0] & 0x1E) != 0 )
    v11 = 1;
  v94 = (const char *)((*(_DWORD *)v235 >> 4) & 1);
  v87 = v11;
  v95 = (char *)((*(_DWORD *)v235 >> 3) & 1);
  v98 = (int *)((*(_DWORD *)v235 >> 2) & 1);
LABEL_22:
  pthread_mutex_lock(&stru_190E30);
  pthread_mutex_unlock(&stru_190E30);
  v12 = &v91->__lock + 20 * *(_DWORD *)(v0[1].__count + 120);
  if ( (v12[8] & 4) != 0 )
  {
    v13 = v82;
    v7 = v82 == 0;
    v12[10] |= 4u;
    if ( v7 )
    {
      v92 = v13;
    }
    else
    {
      pthread_mutex_lock(&stru_197BB8);
      v155 = 0;
      v156 = 0;
      v159 = 0;
      v153 = "error";
      v154 = 5;
      v157 = (unsigned int)"fan error exceed limit";
      v158 = 22;
      v87 = v82;
      v92 = v82;
      ++dword_197BD4;
      logfmt_raw(
        (char *)v236,
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
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_miner_status.c",
        166,
        "check_fan_err",
        13,
        83,
        100,
        v236);
    }
  }
  else
  {
    v92 = 0;
  }
  pthread_mutex_lock(&stru_190E30);
  lock = v0[1].__lock;
  pthread_mutex_unlock(&stru_190E30);
  if ( lock <= 0 )
  {
    v26 = v87;
    mutex = 0;
  }
  else
  {
    v15 = dword_190E4C;
    LODWORD(v89) = &dword_197BD4;
    v16 = v91;
    mutex = 0;
    v83 = &dword_190E4C[lock];
    v91 = v0;
    do
    {
      while ( 1 )
      {
        v17 = *v15++;
        v86 = 0;
        v18 = &v16->__lock + 20 * *(_DWORD *)(v17 + 120);
        if ( *v18 & 1 )
        {
          v7 = v82 == 0;
          v18[2] |= 1u;
          if ( !v7 )
            break;
        }
        if ( v83 == v15 )
          goto LABEL_33;
      }
      pthread_mutex_lock(&stru_197BB8);
      v19 = *(_DWORD *)(*(v15 - 1) + 124);
      LODWORD(v147) = "chain";
      HIDWORD(v147) = 5;
      v148 = 3;
      v151 = 0;
      v78 = "%s low hashrate happened!";
      v79 = "check_low_hashrate";
      v150 = v19;
      v76 = v147;
      v77 = v149;
      v20 = v152;
      v21 = (pthread_mutex_t *)v82;
      ++*(_DWORD *)v89;
      mutex = v21;
      logfmt_raw((char *)v236, 0x1000u, 0, v20, v76, 3, v77, (__int64)v19, 0, v20, v78, v79);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_miner_status.c",
        166,
        "check_low_hashrate",
        18,
        102,
        80,
        v236);
      v22 = (float *)&dword_191398[52 * *(_DWORD *)(*(v15 - 1) + 120)];
      v23 = v22[8];
      v24 = v22[9];
      v25 = v22[10];
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw((char *)v236, 0x1000u, 0, "no ratio hashrate last_5s: %f", v23 * 0.000000001);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_miner_status.c",
        166,
        "check_low_hashrate",
        18,
        105,
        80,
        v236);
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw((char *)v236, 0x1000u, 0, "no ratio hashrate last_30min: %f", v24 * 0.000000001);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_miner_status.c",
        166,
        "check_low_hashrate",
        18,
        106,
        80,
        v236);
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw((char *)v236, 0x1000u, 0, "no ratio hashrate lifetime: %f", v25 * 0.000000001);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_miner_status.c",
        166,
        "check_low_hashrate",
        18,
        107,
        80,
        v236);
    }
    while ( v83 != v15 );
LABEL_33:
    v0 = v91;
    v26 = (unsigned __int8)((unsigned __int8)mutex | v87);
  }
  if ( !v0[155].__size[12] )
  {
    clock_gettime(1, &stru_191CC8);
    v0[155].__size[12] = 1;
  }
  if ( (int)v0[156].__nusers > 0 )
  {
    v27 = 0;
    do
    {
      while ( 1 )
      {
        v28 = *(_DWORD *)(v0[156].__owner + 4 * v27++);
        v29 = (pthread_mutex_t *)(v28 + 1192);
        pthread_mutex_lock((pthread_mutex_t *)(v28 + 1192));
        v30 = *(unsigned __int8 *)(v28 + 1272);
        pthread_mutex_unlock(v29);
        if ( !v30 )
        {
          if ( v0[156].__size[12] )
            break;
        }
        if ( v27 >= (signed int)v0[156].__nusers )
          goto LABEL_42;
      }
      clock_gettime(1, &stru_191CC8);
    }
    while ( v27 < (signed int)v0[156].__nusers );
  }
LABEL_42:
  clock_gettime(1, &stru_191CD0);
  if ( !v82 )
  {
LABEL_76:
    v61 = (unsigned __int8)v0[146].__size[4];
    if ( v0[146].__size[4] )
    {
      v87 = 0;
    }
    else if ( v87 )
    {
      goto LABEL_104;
    }
LABEL_79:
    if ( !v26 )
      LOBYTE(v26) = v0[146].__size[4];
LABEL_81:
    v62 = v82;
    v0[146].__size[3] = v26;
    if ( v62 )
      goto LABEL_92;
    goto LABEL_82;
  }
  v31 = 1000LL * (v0[156].__lock - v0[155].__nusers) + (signed int)(v0[156].__count - v0[155].__spins) / 1000000;
  if ( v31 <= 60000 )
  {
    v0[156].__spins = 0;
    goto LABEL_76;
  }
  spins = v0[156].__spins;
  v0[156].__spins = spins + 1;
  if ( !(spins % 60) )
  {
    pthread_mutex_lock(&stru_197BB8);
    V_STR(v143, "error", "net lost");
    logfmt_raw(
      (char *)v236,
      0x1000u,
      0,
      v146,
      v143[0],
      v143[1],
      v143[2],
      v143[3],
      v144,
      v145,
      v146,
      "lost internet for %d seconds",
      (int)v31 / 1000);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/miner_monitor/check_miner_status.c",
      166,
      "check_lost_connection_to_pool",
      29,
      140,
      100,
      v236);
  }
  if ( v31 > 1800000 )
  {
    pthread_mutex_lock(&stru_197BB8);
    v138 = 0;
    v139 = 0;
    v137 = 5;
    v142 = 0;
    v136 = "error";
    v140 = (unsigned int)"net lost";
    v141 = 8;
    ++dword_197BD4;
    logfmt_raw(
      (char *)v236,
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
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/miner_monitor/check_miner_status.c",
      166,
      "check_lost_connection_to_pool",
      29,
      149,
      120,
      v236);
    system("reboot");
  }
  if ( !v0[146].__size[4] )
  {
    if ( !v87 )
    {
      LOBYTE(v26) = v82;
      v87 = v82;
      goto LABEL_81;
    }
    v26 = v87;
    v61 = v87;
LABEL_104:
    v0[146].__size[4] = 1;
    pthread_mutex_lock(&stru_190E30);
    v70 = v0[1].__lock;
    pthread_mutex_unlock(&stru_190E30);
    if ( v70 > 0 )
    {
      if ( v70 <= 8 )
      {
        v72 = 0;
      }
      else
      {
        v71 = &unk_190E60;
        v72 = 0;
        do
        {
          v73 = *(v71 - 5);
          v72 += 8;
          __pld(v71);
          v71 += 8;
          (*(void (**)(void))(v73 + 8))();
          off_18F4DC(*(_DWORD *)(*(v71 - 13) + 120));
          (*(void (**)(void))(*(v71 - 12) + 8))();
          off_18F4DC(*(_DWORD *)(*(v71 - 12) + 120));
          (*(void (**)(void))(*(v71 - 11) + 8))();
          off_18F4DC(*(_DWORD *)(*(v71 - 11) + 120));
          (*(void (**)(void))(*(v71 - 10) + 8))();
          off_18F4DC(*(_DWORD *)(*(v71 - 10) + 120));
          (*(void (**)(void))(*(v71 - 9) + 8))();
          off_18F4DC(*(_DWORD *)(*(v71 - 9) + 120));
          (*(void (**)(void))(*(v71 - 8) + 8))();
          off_18F4DC(*(_DWORD *)(*(v71 - 8) + 120));
          (*(void (**)(void))(*(v71 - 7) + 8))();
          off_18F4DC(*(_DWORD *)(*(v71 - 7) + 120));
          (*(void (**)(void))(*(v71 - 6) + 8))();
          off_18F4DC(*(_DWORD *)(*(v71 - 6) + 120));
        }
        while ( ((v70 - 9) & 0xFFFFFFF8) + 8 != v72 );
      }
      v74 = &dword_190E4C[v72 - 1];
      do
      {
        v75 = v74[1];
        ++v74;
        ++v72;
        (*(void (**)(void))(v75 + 8))();
        off_18F4DC(*(_DWORD *)(*v74 + 120));
      }
      while ( v70 > v72 );
    }
    v87 = v61;
    pthread_mutex_lock(&stru_197BB8);
    v132 = 0;
    v129 = "poweroff";
    v133 = 1;
    v130 = 8;
    v131 = 2;
    v134 = 0;
    v135 = 0;
    ++dword_197BD4;
    logfmt_raw(
      (char *)v236,
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
      v96,
      v98,
      v92,
      v95,
      v94);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/miner_monitor/check_miner_status.c",
      166,
      "task_check_miner_status",
      23,
      267,
      120,
      v236);
    goto LABEL_79;
  }
  v87 = (unsigned __int8)v0[146].__size[4];
  v0[146].__size[3] = 1;
LABEL_92:
  v0[146].__size[0] = v92;
  v67 = v96;
  v0[146].__size[1] = (char)mutex;
  v68 = v67 | ((unsigned __int8)v98 << 8);
  v0[146].__size[2] = v87;
  v0[145].__spins = v68 | ((unsigned __int8)v95 << 16) & 0xFFFFFF | ((unsigned __int8)v94 << 24);
LABEL_82:
  pthread_mutex_unlock(&::mutex);
  v63 = (unsigned __int8)v0[146].__size[3];
  byte_18F4BC ^= 1u;
  if ( v63 )
  {
    v64 = sub_B5F2C(2, 1);
    if ( byte_18F4BC )
    {
      v65 = 0;
      v64 = 1;
    }
    else
    {
      v65 = 1;
    }
    if ( !byte_18F4BC )
      v64 = v65;
    sub_B5F2C(v64, v65);
    if ( !v0[146].__size[3] )
      return set_pwm_by_temp();
  }
  else
  {
    sub_B5F2C(1, 1);
    sub_B5F2C(2, byte_18F4BC == 0);
    if ( !v0[146].__size[3] )
      return set_pwm_by_temp();
  }
  if ( v0[152].__size[9] )
  {
    kind = v0[152].__kind;
  }
  else
  {
    if ( platform_inited )
    {
      kind = 1;
      byte_195D30 = 1;
      dword_195D2C = 100;
    }
    else
    {
      strcpy(v235, "please init platform first!!\n");
      V_LOCK();
      logfmt_raw((char *)v236, 0x1000u, 0, v235);
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
        v236);
      kind = -2;
    }
    v0[152].__kind = kind;
    v0[152].__size[9] = 1;
  }
  result = pwm_get(kind, v236);
  if ( v236[0] != 100 )
    return pwm_set(v0[152].__kind, 0x64u);
  return result;
}
