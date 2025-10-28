int __fastcall sub_2B5D0(_DWORD *a1, int a2)
{
  bool v4; // zf
  _DWORD *v5; // r4
  _DWORD *v6; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r0
  int v10; // r11
  float v11; // s18
  float v12; // s26
  float v13; // s16
  double v14; // d10
  int v15; // r4
  __int64 v16; // r6
  int v17; // r9
  int v18; // r8
  _QWORD *v19; // r0
  _DWORD *v20; // r0
  _QWORD *v21; // r0
  _QWORD *v22; // r0
  _QWORD *v23; // r0
  _QWORD *v24; // r0
  _QWORD *v25; // r0
  _QWORD *v26; // r0
  _QWORD *v27; // r0
  _DWORD *v28; // r3
  int v29; // r0
  int v30; // r2
  _QWORD *v31; // r0
  _QWORD *v32; // r0
  int v33; // r8
  int v34; // r9
  int v35; // r6
  int v36; // t1
  _DWORD *v37; // r3
  int v38; // r3
  char *v39; // r2
  int v40; // r12
  unsigned int v41; // r0
  char *v42; // r1
  int v43; // lr
  int v44; // r3
  _QWORD *v45; // r0
  char *v46; // r10
  int v47; // r11
  int v48; // r7
  int *v49; // lr
  _DWORD *v50; // r0
  int v51; // r12
  int v52; // r3
  int v53; // r2
  int v54; // r1
  int *v55; // lr
  int v56; // r3
  int v57; // t1
  int v58; // r8
  int v59; // r6
  int *v60; // lr
  _DWORD *v61; // r0
  int v62; // r12
  int v63; // r3
  int v64; // r2
  int v65; // r1
  int *v66; // lr
  int v67; // r3
  int v68; // t1
  int v69; // r9
  int v70; // r2
  _QWORD *v71; // r0
  int v72; // r7
  int *v73; // lr
  _DWORD *v74; // r0
  int v75; // r12
  int v76; // r3
  int v77; // r2
  int v78; // r1
  int *v79; // lr
  int v80; // r3
  int v81; // t1
  int v82; // r6
  int *v83; // lr
  _DWORD *v84; // r0
  int v85; // r12
  int v86; // r3
  int v87; // r2
  int v88; // r1
  int *v89; // lr
  int v90; // r3
  int v91; // t1
  _DWORD *v92; // r0
  char *v93; // r11
  int v94; // r3
  int v95; // r10
  int v96; // r8
  int v97; // r3
  int v98; // r4
  size_t v99; // r0
  _DWORD *v100; // r6
  int v101; // r2
  size_t v102; // r0
  size_t v103; // r0
  size_t v104; // r0
  size_t v105; // r0
  size_t v106; // r0
  size_t v107; // r0
  size_t v108; // r0
  int v109; // t1
  int *v110; // r8
  int v111; // t1
  _DWORD *v112; // r0
  char *v113; // r11
  int v114; // r3
  int v115; // r10
  int v116; // r8
  int v117; // r3
  int v118; // r4
  size_t v119; // r0
  _DWORD *v120; // r6
  int v121; // r2
  size_t v122; // r0
  size_t v123; // r0
  size_t v124; // r0
  size_t v125; // r0
  size_t v126; // r0
  size_t v127; // r0
  size_t v128; // r0
  int v129; // t1
  int *v130; // r8
  int v131; // t1
  _DWORD *v132; // r0
  char *v133; // r11
  int v134; // r3
  int v135; // r10
  int v136; // r8
  int v137; // r3
  int v138; // r4
  size_t v139; // r0
  _DWORD *v140; // r6
  int v141; // r2
  size_t v142; // r0
  size_t v143; // r0
  size_t v144; // r0
  size_t v145; // r0
  size_t v146; // r0
  size_t v147; // r0
  size_t v148; // r0
  int v149; // t1
  int *v150; // r8
  int v151; // t1
  _DWORD *v152; // r0
  char *v153; // r11
  int v154; // r3
  int v155; // r10
  int v156; // r8
  int v157; // r3
  int v158; // r4
  size_t v159; // r0
  _DWORD *v160; // r6
  int v161; // r2
  size_t v162; // r0
  size_t v163; // r0
  size_t v164; // r0
  size_t v165; // r0
  size_t v166; // r0
  size_t v167; // r0
  size_t v168; // r0
  int v169; // t1
  int *v170; // r8
  int v171; // t1
  _DWORD *v172; // r0
  _QWORD *v173; // r0
  char *v174; // r9
  char *v175; // r8
  int v176; // t1
  int v177; // r6
  _DWORD *v178; // r3
  char *v179; // r8
  char *v180; // r6
  int v181; // t1
  _DWORD *v182; // r0
  _DWORD *v183; // r5
  int v184; // r8
  char *v185; // r11
  __int64 v186; // kr00_8
  int v187; // r3
  unsigned int v188; // r7
  unsigned int v189; // r9
  _DWORD *v190; // r3
  _QWORD *v191; // r0
  float *v192; // r5
  char *v193; // r7
  int i; // r6
  int v195; // t1
  double v196; // d8
  bool v197; // zf
  double *v198; // r3
  char *v199; // r6
  int v200; // r5
  _DWORD *v201; // r8
  const char *v202; // r0
  int v203; // t1
  _DWORD *v204; // r0
  int v205; // r8
  char *v206; // r5
  int v207; // t1
  int v208; // r6
  _DWORD *v209; // r3
  _DWORD *v210; // r0
  _QWORD *v211; // r0
  double v213; // d0
  int *v214; // r10
  char *v215; // r4
  char *v216; // r6
  char *v217; // r11
  int v218; // t1
  char *v219; // r0
  _QWORD *v220; // r0
  _QWORD *v221; // r0
  _QWORD *v222; // r0
  _QWORD *v223; // r0
  _QWORD *v224; // r0
  _DWORD *v225; // r0
  _QWORD *v226; // r0
  _DWORD *v227; // [sp+10h] [bp-1254h]
  int v228; // [sp+10h] [bp-1254h]
  char *v229; // [sp+14h] [bp-1250h]
  char *v230; // [sp+14h] [bp-1250h]
  int v231; // [sp+1Ch] [bp-1248h]
  char *v232; // [sp+20h] [bp-1244h]
  char *v233; // [sp+20h] [bp-1244h]
  char *v234; // [sp+20h] [bp-1244h]
  char *v235; // [sp+20h] [bp-1244h]
  char *v236; // [sp+20h] [bp-1244h]
  _DWORD *v237; // [sp+28h] [bp-123Ch]
  char *ptr; // [sp+2Ch] [bp-1238h]
  int v240; // [sp+38h] [bp-122Ch]
  _DWORD *v241; // [sp+3Ch] [bp-1228h]
  int v242; // [sp+40h] [bp-1224h]
  double v243; // [sp+50h] [bp-1214h] BYREF
  char v244[4]; // [sp+5Ch] [bp-1208h] BYREF
  char v245[4]; // [sp+68h] [bp-11FCh] BYREF
  int v246; // [sp+6Ch] [bp-11F8h]
  int v247; // [sp+70h] [bp-11F4h]
  int v248; // [sp+74h] [bp-11F0h]
  char v249[32]; // [sp+78h] [bp-11ECh] BYREF
  char v250[32]; // [sp+98h] [bp-11CCh] BYREF
  char v251[32]; // [sp+B8h] [bp-11ACh] BYREF
  char v252[32]; // [sp+D8h] [bp-118Ch] BYREF
  char s[32]; // [sp+F8h] [bp-116Ch] BYREF
  char v254[32]; // [sp+118h] [bp-114Ch] BYREF
  char v255[4]; // [sp+138h] [bp-112Ch] BYREF
  int v256; // [sp+13Ch] [bp-1128h]
  int v257; // [sp+140h] [bp-1124h]
  float v258; // [sp+144h] [bp-1120h]
  float v259; // [sp+148h] [bp-111Ch]
  float v260; // [sp+14Ch] [bp-1118h]
  double v261; // [sp+150h] [bp-1114h]
  char v262[256]; // [sp+160h] [bp-1104h] BYREF
  char dest[4100]; // [sp+260h] [bp-1004h] BYREF

  v246 = 0;
  v247 = 0;
  v248 = 0;
  *(_DWORD *)v245 = 0;
  memset(s, 0, sizeof(s));
  memset(v262, 0, sizeof(v262));
  v4 = a1 == 0;
  if ( a1 )
    v4 = a2 == 0;
  if ( v4 )
  {
    V_LOCK();
    logfmt_raw(dest, 0x1000u, 0, "%s: input bad api param\n", "get_stats_old");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "get_stats_old",
      13,
      1118,
      100,
      dest);
    return -2147483646;
  }
  sub_27658(a1, 1, 70, *(const char **)(a2 + 8));
  v241 = json_array();
  v5 = json_object();
  v6 = json_string("2.12");
  json_object_set_new(v5, "BMMiner", v6);
  v7 = json_string(g_miner_version);
  json_object_set_new(v5, "Miner", v7);
  v8 = json_string(g_miner_compiletime);
  json_object_set_new(v5, "CompileTime", v8);
  v9 = json_string(g_miner_type);
  json_object_set_new(v5, "Type", v9);
  json_array_append_new((int)v241, v5);
  read_system_status_from_monitor((int)v255);
  v10 = v256;
  v11 = v258;
  v12 = v259;
  v13 = v260;
  v14 = v261;
  pthread_mutex_lock(&stru_190E30);
  v231 = dword_190E48;
  pthread_mutex_unlock(&stru_190E30);
  v240 = dword_191C84;
  if ( !dword_191C84 )
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(dest, 0x1000u, 0, "frontend runtime type not set");
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_interface.c",
      150,
      "frontend_runtime_instance",
      25,
      67,
      100,
      dest);
  }
  if ( v231 > 0 )
  {
    v214 = dword_190E4C;
    v237 = malloc(208 * v231);
    v215 = (char *)(v237 + 364);
    v228 = v10;
    v216 = (char *)malloc(4 * v231);
    v217 = &v216[4 * v231];
    ptr = v216;
    do
    {
      v218 = *v214++;
      __pld(v215);
      memcpy(dest, &dword_191398[52 * *(_DWORD *)(v218 + 120)], 0xD0u);
      v219 = v215 - 1456;
      v215 += 208;
      memcpy(v219, dest, 0xD0u);
      *(_DWORD *)v216 = *(_DWORD *)(v218 + 124) + 1;
      v216 += 4;
    }
    while ( v216 != v217 );
    v15 = v231;
    v10 = v228;
    v17 = v231;
    v16 = v231;
    v18 = v231 >> 31;
  }
  else
  {
    v15 = 0;
    v16 = v231;
    ptr = 0;
    v17 = 0;
    v18 = 0;
    v237 = 0;
  }
  v227 = json_object();
  v19 = json_integer(__SPAIR64__(v18, v17));
  json_object_set_new(v227, "STATS", v19);
  snprintf(v245, 0x10u, "BTM_SOC%d", v15);
  v20 = json_string(v245);
  json_object_set_new(v227, "ID", v20);
  format_hashrate_string(*(const char **)(v240 + 84), v252);
  format_hashrate_string(*(const char **)(v240 + 84), v251);
  format_hashrate_string(*(const char **)(v240 + 84), v250);
  format_hashrate_string(*(const char **)(v240 + 84), v249);
  format_hashrate_double(*(const char **)(v240 + 84), &v243, v244);
  get_miner_elapsed_time();
  v21 = json_integer((__int64)v14);
  json_object_set_new(v227, "Elapsed", v21);
  sub_15D994((__int64)(v11 * 100.0 * v14));
  v22 = json_real();
  json_object_set_new(v227, "GHS 5s", v22);
  sub_15D994((__int64)(v13 * 100.0 * v14));
  v23 = json_real();
  json_object_set_new(v227, "GHS av", v23);
  sub_15D994((__int64)(v12 * 100.0 * v14));
  v24 = json_real();
  json_object_set_new(v227, "rate_30m", v24);
  if ( !strcmp(*(const char **)(dword_190E4C[0] + 172), "dash") )
  {
    v213 = v243;
    update_rate_ideal();
    sub_15D994((__int64)(v213 * 100.0));
  }
  else
  {
    sub_15D994((__int64)(v243 * 100.0));
  }
  v25 = json_real();
  json_object_set_new(v227, "total_rateideal", v25);
  v26 = json_integer(opt_bitmain_work_mode);
  json_object_set_new(v227, "Mode", v26);
  v27 = json_integer(v16);
  json_object_set_new(v227, "miner_count", v27);
  if ( v231 <= 0 )
  {
    v220 = json_integer(0x7FFFFFFF);
    json_object_set_new(v227, "frequency", v220);
    v221 = json_integer(v10);
    json_object_set_new(v227, "fan_num", v221);
    if ( v10 <= 0 )
      goto LABEL_223;
    goto LABEL_16;
  }
  v28 = v237;
  v29 = 0x7FFFFFFF;
  do
  {
    v30 = v28[16];
    v28 += 52;
    if ( v29 >= v30 )
      v29 = v30;
  }
  while ( v28 != &v237[52 * v231] );
  v31 = json_integer(v29);
  json_object_set_new(v227, "frequency", v31);
  v32 = json_integer(v10);
  json_object_set_new(v227, "fan_num", v32);
  if ( v10 > 0 )
  {
LABEL_16:
    v33 = 0;
    v34 = v257 - 4;
    do
    {
      while ( 1 )
      {
        ++v33;
        memset(s, 0, sizeof(s));
        snprintf(s, 0x20u, "fan%d", v33);
        v36 = *(_DWORD *)(v34 + 4);
        v34 += 4;
        v35 = v36;
        v37 = (_DWORD *)off_190780(16);
        if ( !v37 )
          break;
        *v37 = 3;
        v37[1] = 1;
        *((_QWORD *)v37 + 1) = v35;
        json_object_set_new(v227, s, v37);
        if ( v33 == v10 )
          goto LABEL_19;
      }
      json_object_set_new(v227, s, 0);
    }
    while ( v33 != v10 );
LABEL_19:
    v38 = v231;
    if ( v231 > 0 )
      goto LABEL_20;
LABEL_223:
    v222 = json_integer(0);
    json_object_set_new(v227, "temp_num", v222);
    v223 = json_integer(-100);
    json_object_set_new(v227, "temp_max", v223);
    v224 = json_integer(0);
    json_object_set_new(v227, "no_matching_work", v224);
    v225 = json_string(g_miner_version);
    json_object_set_new(v227, "miner_version", v225);
    json_object_set_new(v227, "miner_id", 0);
    json_array_append_new((int)v241, v227);
    json_object_set_new(a1, "STATS", v241);
    v226 = json_integer(1);
    json_object_set_new(a1, "id", v226);
    return 0;
  }
  v38 = v231;
LABEL_20:
  v39 = (char *)v237;
  v40 = -100;
  LOBYTE(v41) = 0;
  v42 = (char *)&v237[52 * v38];
  do
  {
    v43 = *((_DWORD *)v39 + 4);
    v44 = *((_DWORD *)v39 + 6);
    v39 += 208;
    if ( v40 < v43 )
      v40 = v43;
    v41 = (unsigned __int8)(v41 + v44 + *(v39 - 180));
  }
  while ( v39 != v42 );
  v242 = v40;
  v45 = json_integer(v41);
  json_object_set_new(v227, "temp_num", v45);
  v46 = (char *)(v237 + 58);
  v232 = ptr;
  v229 = &ptr[4 * v231];
  do
  {
    while ( 1 )
    {
      v47 = *((_DWORD *)v46 - 52);
      __pld(v46);
      if ( v47 > 0 )
      {
        v49 = (int *)*((_DWORD *)v46 - 58);
        v48 = *v49;
        if ( v47 != 1 )
        {
          if ( v47 <= 9 )
          {
            v51 = 1;
          }
          else
          {
            v50 = v49 + 30;
            v51 = 1;
            do
            {
              v52 = *(v50 - 29);
              v51 += 8;
              v53 = *(v50 - 28);
              v54 = *(v50 - 27);
              __pld(v50);
              v50 += 8;
              if ( v52 < v53 )
                v52 = v53;
              if ( v52 < v54 )
                v52 = v54;
              if ( v52 < *(v50 - 34) )
                v52 = *(v50 - 34);
              if ( v52 < *(v50 - 33) )
                v52 = *(v50 - 33);
              if ( v52 < *(v50 - 32) )
                v52 = *(v50 - 32);
              if ( v52 < *(v50 - 31) )
                v52 = *(v50 - 31);
              if ( v52 < *(v50 - 30) )
                v52 = *(v50 - 30);
              if ( v48 < v52 )
                v48 = v52;
            }
            while ( v51 != ((v47 - 10) & 0xFFFFFFF8) + 9 );
          }
          v55 = &v49[v51];
          do
          {
            v57 = *v55++;
            v56 = v57;
            ++v51;
            if ( v48 < v57 )
              v48 = v56;
          }
          while ( v47 > v51 );
        }
      }
      else
      {
        v48 = 0;
      }
      v58 = *((_DWORD *)v46 - 51);
      __pld(v46 + 4);
      if ( v58 > 0 )
      {
        v60 = (int *)*((_DWORD *)v46 - 56);
        v59 = *v60;
        if ( v58 != 1 )
        {
          if ( v58 <= 9 )
          {
            v62 = 1;
          }
          else
          {
            v61 = v60 + 30;
            v62 = 1;
            do
            {
              v63 = *(v61 - 29);
              v62 += 8;
              v64 = *(v61 - 28);
              v65 = *(v61 - 27);
              __pld(v61);
              v61 += 8;
              if ( v63 < v64 )
                v63 = v64;
              if ( v63 < v65 )
                v63 = v65;
              if ( v63 < *(v61 - 34) )
                v63 = *(v61 - 34);
              if ( v63 < *(v61 - 33) )
                v63 = *(v61 - 33);
              if ( v63 < *(v61 - 32) )
                v63 = *(v61 - 32);
              if ( v63 < *(v61 - 31) )
                v63 = *(v61 - 31);
              if ( v63 < *(v61 - 30) )
                v63 = *(v61 - 30);
              if ( v59 < v63 )
                v59 = v63;
            }
            while ( v62 != ((v58 - 10) & 0xFFFFFFF8) + 9 );
          }
          v66 = &v60[v62];
          do
          {
            v68 = *v66++;
            v67 = v68;
            ++v62;
            if ( v59 < v68 )
              v59 = v67;
          }
          while ( v58 > v62 );
        }
      }
      else
      {
        v59 = 0;
      }
      v69 = *(_DWORD *)v232;
      v70 = *(_DWORD *)v232;
      v232 += 4;
      sprintf(s, "temp%d", v70);
      if ( v59 < v48 )
        v59 = v48;
      v71 = (_QWORD *)off_190780(16);
      if ( v71 )
      {
        v71[1] = v59;
        *(_DWORD *)v71 = 3;
        *((_DWORD *)v71 + 1) = 1;
      }
      json_object_set_new(v227, s, v71);
      if ( v47 > 0 )
      {
        v73 = (int *)*((_DWORD *)v46 - 57);
        v72 = *v73;
        if ( v47 != 1 )
        {
          if ( v47 <= 9 )
          {
            v75 = 1;
          }
          else
          {
            v74 = v73 + 30;
            v75 = 1;
            do
            {
              v76 = *(v74 - 29);
              v75 += 8;
              v77 = *(v74 - 28);
              v78 = *(v74 - 27);
              __pld(v74);
              v74 += 8;
              if ( v76 < v77 )
                v76 = v77;
              if ( v76 < v78 )
                v76 = v78;
              if ( v76 < *(v74 - 34) )
                v76 = *(v74 - 34);
              if ( v76 < *(v74 - 33) )
                v76 = *(v74 - 33);
              if ( v76 < *(v74 - 32) )
                v76 = *(v74 - 32);
              if ( v76 < *(v74 - 31) )
                v76 = *(v74 - 31);
              if ( v76 < *(v74 - 30) )
                v76 = *(v74 - 30);
              if ( v72 < v76 )
                v72 = v76;
            }
            while ( v75 != ((v47 - 10) & 0xFFFFFFF8) + 9 );
          }
          v79 = &v73[v75];
          do
          {
            v81 = *v79++;
            v80 = v81;
            ++v75;
            if ( v72 < v81 )
              v72 = v80;
          }
          while ( v47 > v75 );
        }
      }
      else
      {
        v72 = 0;
      }
      if ( v58 > 0 )
      {
        v83 = (int *)*((_DWORD *)v46 - 55);
        v82 = *v83;
        if ( v58 != 1 )
        {
          if ( v58 <= 9 )
          {
            v85 = 1;
          }
          else
          {
            v84 = v83 + 30;
            v85 = 1;
            do
            {
              v86 = *(v84 - 29);
              v85 += 8;
              v87 = *(v84 - 28);
              v88 = *(v84 - 27);
              __pld(v84);
              v84 += 8;
              if ( v86 < v87 )
                v86 = v87;
              if ( v86 < v88 )
                v86 = v88;
              if ( v86 < *(v84 - 34) )
                v86 = *(v84 - 34);
              if ( v86 < *(v84 - 33) )
                v86 = *(v84 - 33);
              if ( v86 < *(v84 - 32) )
                v86 = *(v84 - 32);
              if ( v86 < *(v84 - 31) )
                v86 = *(v84 - 31);
              if ( v86 < *(v84 - 30) )
                v86 = *(v84 - 30);
              if ( v82 < v86 )
                v82 = v86;
            }
            while ( v85 != ((v58 - 10) & 0xFFFFFFF8) + 9 );
          }
          v89 = &v83[v85];
          do
          {
            v91 = *v89++;
            v90 = v91;
            ++v85;
            if ( v82 < v91 )
              v82 = v90;
          }
          while ( v58 > v85 );
        }
      }
      else
      {
        v82 = 0;
      }
      sprintf(s, "temp2_%d", v69);
      if ( v82 < v72 )
        v82 = v72;
      v92 = (_DWORD *)off_190780(16);
      if ( !v92 )
        break;
      *v92 = 3;
      v92[1] = 1;
      v46 += 208;
      *((_QWORD *)v92 + 1) = v82;
      json_object_set_new(v227, s, v92);
      if ( v232 == v229 )
        goto LABEL_137;
    }
    json_object_set_new(v227, s, 0);
    v46 += 208;
  }
  while ( v232 != v229 );
LABEL_137:
  v93 = (char *)(v237 + 52);
  v233 = ptr;
  do
  {
    __pld(v93);
    memset(s, 0, sizeof(s));
    memset(v262, 0, sizeof(v262));
    v94 = *(_DWORD *)v233;
    v233 += 4;
    snprintf(s, 0x20u, "temp_in_pcb_%d", v94);
    v95 = *((_DWORD *)v93 - 46);
    v96 = *((_DWORD *)v93 - 52);
    if ( v95 > 0 )
    {
      if ( v95 <= 8 )
      {
        v98 = 0;
        v99 = 0;
      }
      else
      {
        v98 = 0;
        v99 = 0;
        v100 = (_DWORD *)(v96 + 28);
        do
        {
          v101 = *(v100 - 7);
          __pld(v100);
          sprintf(&v262[v99], "%d-", v101);
          v98 += 8;
          v102 = strlen(v262);
          sprintf(&v262[v102], "%d-", *(v100 - 6));
          v103 = strlen(v262);
          sprintf(&v262[v103], "%d-", *(v100 - 5));
          v104 = strlen(v262);
          sprintf(&v262[v104], "%d-", *(v100 - 4));
          v105 = strlen(v262);
          sprintf(&v262[v105], "%d-", *(v100 - 3));
          v106 = strlen(v262);
          sprintf(&v262[v106], "%d-", *(v100 - 2));
          v107 = strlen(v262);
          sprintf(&v262[v107], "%d-", *(v100 - 1));
          v108 = strlen(v262);
          v109 = *v100;
          v100 += 8;
          sprintf(&v262[v108], "%d-", v109);
          v99 = strlen(v262);
        }
        while ( v98 != ((v95 - 9) & 0xFFFFFFF8) + 8 );
      }
      v110 = (int *)(v96 + 4 * v98);
      do
      {
        v111 = *v110++;
        ++v98;
        sprintf(&v262[v99], "%d-", v111);
        v99 = strlen(v262);
      }
      while ( v95 > v98 );
      v97 = v99 - 1;
    }
    else
    {
      v97 = -1;
    }
    v262[v97] = 0;
    v93 += 208;
    v112 = json_string(v262);
    json_object_set_new(v227, s, v112);
  }
  while ( v233 != v229 );
  v113 = (char *)(v237 + 54);
  v234 = ptr;
  do
  {
    __pld(v113);
    __pld(v113 + 20);
    memset(s, 0, sizeof(s));
    memset(v262, 0, sizeof(v262));
    v114 = *(_DWORD *)v234;
    v234 += 4;
    snprintf(s, 0x20u, "temp_out_pcb_%d", v114);
    v115 = *((_DWORD *)v113 - 47);
    v116 = *((_DWORD *)v113 - 52);
    if ( v115 > 0 )
    {
      if ( v115 <= 8 )
      {
        v118 = 0;
        v119 = 0;
      }
      else
      {
        v118 = 0;
        v119 = 0;
        v120 = (_DWORD *)(v116 + 28);
        do
        {
          v121 = *(v120 - 7);
          __pld(v120);
          sprintf(&v262[v119], "%d-", v121);
          v118 += 8;
          v122 = strlen(v262);
          sprintf(&v262[v122], "%d-", *(v120 - 6));
          v123 = strlen(v262);
          sprintf(&v262[v123], "%d-", *(v120 - 5));
          v124 = strlen(v262);
          sprintf(&v262[v124], "%d-", *(v120 - 4));
          v125 = strlen(v262);
          sprintf(&v262[v125], "%d-", *(v120 - 3));
          v126 = strlen(v262);
          sprintf(&v262[v126], "%d-", *(v120 - 2));
          v127 = strlen(v262);
          sprintf(&v262[v127], "%d-", *(v120 - 1));
          v128 = strlen(v262);
          v129 = *v120;
          v120 += 8;
          sprintf(&v262[v128], "%d-", v129);
          v119 = strlen(v262);
        }
        while ( v118 != ((v115 - 9) & 0xFFFFFFF8) + 8 );
      }
      v130 = (int *)(v116 + 4 * v118);
      do
      {
        v131 = *v130++;
        ++v118;
        sprintf(&v262[v119], "%d-", v131);
        v119 = strlen(v262);
      }
      while ( v118 < v115 );
      v117 = v119 - 1;
    }
    else
    {
      v117 = -1;
    }
    v262[v117] = 0;
    v113 += 208;
    v132 = json_string(v262);
    json_object_set_new(v227, s, v132);
  }
  while ( v234 != v229 );
  v133 = (char *)(v237 + 53);
  v235 = ptr;
  do
  {
    __pld(v133);
    __pld(v133 + 20);
    memset(s, 0, sizeof(s));
    memset(v262, 0, sizeof(v262));
    v134 = *(_DWORD *)v235;
    v235 += 4;
    snprintf(s, 0x20u, "temp_in_chip_%d", v134);
    v135 = *((_DWORD *)v133 - 47);
    v136 = *((_DWORD *)v133 - 52);
    if ( v135 > 0 )
    {
      if ( v135 <= 8 )
      {
        v138 = 0;
        v139 = 0;
      }
      else
      {
        v138 = 0;
        v139 = 0;
        v140 = (_DWORD *)(v136 + 28);
        do
        {
          v141 = *(v140 - 7);
          __pld(v140);
          sprintf(&v262[v139], "%d-", v141);
          v138 += 8;
          v142 = strlen(v262);
          sprintf(&v262[v142], "%d-", *(v140 - 6));
          v143 = strlen(v262);
          sprintf(&v262[v143], "%d-", *(v140 - 5));
          v144 = strlen(v262);
          sprintf(&v262[v144], "%d-", *(v140 - 4));
          v145 = strlen(v262);
          sprintf(&v262[v145], "%d-", *(v140 - 3));
          v146 = strlen(v262);
          sprintf(&v262[v146], "%d-", *(v140 - 2));
          v147 = strlen(v262);
          sprintf(&v262[v147], "%d-", *(v140 - 1));
          v148 = strlen(v262);
          v149 = *v140;
          v140 += 8;
          sprintf(&v262[v148], "%d-", v149);
          v139 = strlen(v262);
        }
        while ( v138 != ((v135 - 9) & 0xFFFFFFF8) + 8 );
      }
      v150 = (int *)(v136 + 4 * v138);
      do
      {
        v151 = *v150++;
        ++v138;
        sprintf(&v262[v139], "%d-", v151);
        v139 = strlen(v262);
      }
      while ( v135 > v138 );
      v137 = v139 - 1;
    }
    else
    {
      v137 = -1;
    }
    v262[v137] = 0;
    v133 += 208;
    v152 = json_string(v262);
    json_object_set_new(v227, s, v152);
  }
  while ( v235 != v229 );
  v153 = (char *)(v237 + 54);
  v236 = ptr;
  do
  {
    __pld(v153);
    __pld(v153 + 20);
    memset(s, 0, sizeof(s));
    memset(v262, 0, sizeof(v262));
    v154 = *(_DWORD *)v236;
    v236 += 4;
    snprintf(s, 0x20u, "temp_out_chip_%d", v154);
    v155 = *((_DWORD *)v153 - 47);
    v156 = *((_DWORD *)v153 - 52);
    if ( v155 > 0 )
    {
      if ( v155 <= 8 )
      {
        v158 = 0;
        v159 = 0;
      }
      else
      {
        v158 = 0;
        v159 = 0;
        v160 = (_DWORD *)(v156 + 28);
        do
        {
          v161 = *(v160 - 7);
          __pld(v160);
          sprintf(&v262[v159], "%d-", v161);
          v158 += 8;
          v162 = strlen(v262);
          sprintf(&v262[v162], "%d-", *(v160 - 6));
          v163 = strlen(v262);
          sprintf(&v262[v163], "%d-", *(v160 - 5));
          v164 = strlen(v262);
          sprintf(&v262[v164], "%d-", *(v160 - 4));
          v165 = strlen(v262);
          sprintf(&v262[v165], "%d-", *(v160 - 3));
          v166 = strlen(v262);
          sprintf(&v262[v166], "%d-", *(v160 - 2));
          v167 = strlen(v262);
          sprintf(&v262[v167], "%d-", *(v160 - 1));
          v168 = strlen(v262);
          v169 = *v160;
          v160 += 8;
          sprintf(&v262[v168], "%d-", v169);
          v159 = strlen(v262);
        }
        while ( v158 != ((v155 - 9) & 0xFFFFFFF8) + 8 );
      }
      v170 = (int *)(v156 + 4 * v158);
      do
      {
        v171 = *v170++;
        ++v158;
        sprintf(&v262[v159], "%d-", v171);
        v159 = strlen(v262);
      }
      while ( v155 > v158 );
      v157 = v159 - 1;
    }
    else
    {
      v157 = -1;
    }
    v262[v157] = 0;
    v153 += 208;
    v172 = json_string(v262);
    json_object_set_new(v227, s, v172);
  }
  while ( v236 != v229 );
  v173 = json_integer(v242);
  json_object_set_new(v227, "temp_max", v173);
  v174 = ptr;
  v175 = (char *)(v237 + 170);
  do
  {
    while ( 1 )
    {
      __pld(v175);
      memset(s, 0, sizeof(s));
      v176 = *(_DWORD *)v174;
      v174 += 4;
      snprintf(s, 0x20u, "chain_acn%d", v176);
      v177 = *((_DWORD *)v175 - 156);
      v178 = (_DWORD *)off_190780(16);
      if ( !v178 )
        break;
      *v178 = 3;
      v175 += 208;
      v178[1] = 1;
      *((_QWORD *)v178 + 1) = v177;
      json_object_set_new(v227, s, v178);
      if ( v174 == v229 )
        goto LABEL_180;
    }
    json_object_set_new(v227, s, 0);
    v175 += 208;
  }
  while ( v174 != v229 );
LABEL_180:
  v179 = ptr;
  v180 = (char *)(v237 + 119);
  do
  {
    v181 = *(_DWORD *)v179;
    v179 += 4;
    __pld(v180);
    v180 += 208;
    sprintf(v254, "chain_acs%d", v181);
    memset(s, 0, sizeof(s));
    memset(v262, 0, sizeof(v262));
    snprintf(s, 0x20u, "chain_acs%d", v181);
    snprintf(v262, 0x100u, "%s", *((const char **)v180 - 156));
    v182 = json_string(v262);
    json_object_set_new(v227, s, v182);
  }
  while ( v179 != v229 );
  v183 = v237;
  v184 = 0;
  v185 = ptr - 4;
  v230 = ptr - 4;
  v186 = 0;
  do
  {
    while ( 1 )
    {
      __pld(v183 + 174);
      memset(s, 0, sizeof(s));
      v187 = *((_DWORD *)v230 + 1);
      v230 += 4;
      snprintf(s, 0x20u, "chain_hw%d", v187);
      v188 = v183[18];
      v189 = v183[19];
      v190 = (_DWORD *)off_190780(16);
      if ( !v190 )
        break;
      *v190 = 3;
      ++v184;
      v190[1] = 1;
      v183 += 52;
      v190[2] = v188;
      v190[3] = v189;
      json_object_set_new(v227, s, v190);
      v186 += __PAIR64__(v189, v188);
      if ( v231 <= v184 )
        goto LABEL_185;
    }
    json_object_set_new(v227, s, 0);
    ++v184;
    v183 += 52;
    v186 += __PAIR64__(v189, v188);
  }
  while ( v184 < v231 );
LABEL_185:
  v191 = json_integer(v186);
  json_object_set_new(v227, "no_matching_work", v191);
  v192 = (float *)v237;
  v193 = ptr - 4;
  for ( i = 0; i < v231; ++i )
  {
    while ( 1 )
    {
      __pld(v192 + 166);
      memset(s, 0, sizeof(s));
      v195 = *((_DWORD *)v193 + 1);
      v193 += 4;
      snprintf(s, 0x20u, "chain_rate%d", v195);
      v196 = v192[10];
      v197 = opt_algo == 3;
      if ( opt_algo != 3 )
        v197 = opt_algo == 0;
      if ( !v197 )
        v196 = v196 * 0.000000001;
      v198 = (double *)off_190780(16);
      if ( !v198 )
        break;
      *(_DWORD *)v198 = 4;
      ++i;
      *((_DWORD *)v198 + 1) = 1;
      v192 += 52;
      v198[1] = v196;
      json_object_set_new(v227, s, v198);
      if ( v231 <= i )
        goto LABEL_192;
    }
    json_object_set_new(v227, s, 0);
    v192 += 52;
  }
LABEL_192:
  v199 = ptr - 4;
  v200 = 0;
  v201 = v237;
  do
  {
    v202 = *(const char **)(v240 + 84);
    ++v200;
    __pld(v201 + 218);
    v201 += 52;
    format_hashrate_string(v202, v254);
    v203 = *((_DWORD *)v199 + 1);
    v199 += 4;
    snprintf(s, 0x20u, "CHAIN AVG HASHRATE%d", v203);
    v204 = json_string(v254);
    json_object_set_new(v227, s, v204);
  }
  while ( v200 < v231 );
  v205 = 0;
  v206 = (char *)(v237 + 172);
  do
  {
    while ( 1 )
    {
      __pld(v206);
      memset(s, 0, sizeof(s));
      v207 = *((_DWORD *)v185 + 1);
      v185 += 4;
      snprintf(s, 0x20u, "freq%d", v207);
      v208 = *((_DWORD *)v206 - 156);
      v209 = (_DWORD *)off_190780(16);
      if ( !v209 )
        break;
      *v209 = 3;
      ++v205;
      v209[1] = 1;
      v206 += 208;
      *((_QWORD *)v209 + 1) = v208;
      json_object_set_new(v227, s, v209);
      if ( v231 <= v205 )
        goto LABEL_197;
    }
    json_object_set_new(v227, s, 0);
    ++v205;
    v206 += 208;
  }
  while ( v205 < v231 );
LABEL_197:
  v210 = json_string(g_miner_version);
  json_object_set_new(v227, "miner_version", v210);
  json_object_set_new(v227, "miner_id", 0);
  json_array_append_new((int)v241, v227);
  json_object_set_new(a1, "STATS", v241);
  v211 = json_integer(1);
  json_object_set_new(a1, "id", v211);
  free(ptr);
  free(v237);
  return 0;
}
