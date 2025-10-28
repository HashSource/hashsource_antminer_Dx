int platform_topol_init()
{
  double *file; // r0
  double *v1; // r11
  _DWORD *v2; // r0
  _DWORD *v3; // r9
  _DWORD *v4; // r0
  const char *v5; // r9
  size_t v6; // r0
  char *v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r9
  _DWORD *v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r9
  _DWORD *v13; // r0
  _DWORD *v14; // r0
  _DWORD *v15; // r8
  _DWORD *v16; // r0
  _DWORD *v17; // r8
  _DWORD *v18; // r0
  int v19; // r0
  int v20; // r2
  unsigned int *v21; // r3
  unsigned int v22; // r2
  unsigned int v23; // r2
  int v25; // r0
  int v26; // r2
  char *v27; // r1
  _DWORD *v28; // r0
  char *v29; // r1
  _DWORD *v30; // r0
  int v31; // r9
  int v32; // r0
  size_t v33; // r9
  _DWORD *v34; // r0
  int v35; // r6
  int v36; // r0
  _DWORD *v37; // r0
  int v38; // r6
  int v39; // r0
  _DWORD *v40; // r0
  int v41; // r6
  int v42; // r0
  _DWORD *v43; // r0
  int v44; // r6
  int v45; // r0
  _DWORD *v46; // r0
  int v47; // r8
  int v48; // r0
  _DWORD *v49; // r0
  _DWORD *v50; // r8
  char *v51; // r2
  _DWORD *v52; // r0
  int v53; // r8
  int v54; // r0
  _DWORD *v55; // r0
  int v56; // r8
  int v57; // r0
  size_t v58; // r0
  int v59; // r6
  void *v60; // r0
  _DWORD *v61; // r0
  int v62; // r6
  int v63; // r0
  _DWORD *v64; // r0
  int v65; // r6
  int v66; // r0
  _DWORD *v67; // r0
  int v68; // r6
  int v69; // r0
  _DWORD *v70; // r0
  int v71; // r6
  int v72; // r0
  int v73; // r3
  _DWORD *v74; // r0
  _DWORD *v75; // r0
  _DWORD *v76; // r11
  _DWORD *v77; // r0
  int v78; // r7
  int v79; // r0
  int v80; // r0
  int v81; // r9
  _DWORD *v82; // r9
  _DWORD *v83; // r0
  _DWORD *v84; // r7
  _DWORD *v85; // r0
  const char *v86; // r6
  int v87; // r3
  _DWORD *v88; // r0
  int v89; // r6
  int v90; // r0
  _DWORD *v91; // r0
  _DWORD *v92; // r6
  _DWORD *v93; // r0
  int v94; // r7
  char **v95; // r8
  const char *v96; // r0
  const char *v97; // r1
  const char *v98; // r10
  const char *v99; // t1
  char *v100; // r1
  int v101; // r6
  _DWORD *v102; // r0
  _DWORD *v103; // r8
  _DWORD *v104; // r0
  const char **v105; // r7
  const char *v106; // r0
  const char *v107; // r1
  const char *v108; // r8
  const char *v109; // t1
  int v110; // r0
  int v111; // r2
  int v112; // r0
  int v113; // r2
  _DWORD *v114; // r0
  _DWORD *v115; // r0
  int v116; // r8
  _DWORD *v117; // r0
  _DWORD *v118; // r0
  int v119; // r9
  char **v120; // r6
  int v121; // r4
  const char *v122; // r7
  const char *v123; // r1
  const char *v124; // t1
  int v125; // r2
  _DWORD *v126; // r0
  int v127; // r6
  int v128; // r0
  int v129; // r4
  int v130; // r5
  int v131; // r0
  int v132; // r3
  int v133; // r6
  int v134; // r5
  int v135; // r4
  void *v136; // r0
  unsigned int *v137; // r3
  unsigned int v138; // r2
  unsigned int v139; // r2
  int v140; // r0
  int v141; // r3
  _DWORD *v142; // r0
  _DWORD *v143; // r0
  _DWORD *v144; // r11
  _DWORD *v145; // r0
  int v146; // r7
  int v147; // r0
  int v148; // r0
  int v149; // r10
  _DWORD *v150; // r10
  _DWORD *v151; // r0
  _DWORD *v152; // r7
  _DWORD *v153; // r0
  const char *v154; // r6
  int v155; // r3
  _DWORD *v156; // r0
  int v157; // r6
  int v158; // r0
  _DWORD *v159; // r0
  _DWORD *v160; // r6
  _DWORD *v161; // r0
  int v162; // r7
  char **v163; // r8
  const char *v164; // r0
  const char *v165; // r1
  const char *v166; // r9
  const char *v167; // t1
  char *v168; // r1
  int v169; // r6
  _DWORD *v170; // r0
  _DWORD *v171; // r8
  _DWORD *v172; // r0
  const char **v173; // r7
  const char *v174; // r0
  const char *v175; // r1
  const char *v176; // r8
  const char *v177; // t1
  int v178; // r2
  int v179; // r3
  int v180; // r0
  int v181; // r0
  int v182; // r0
  int v183; // [sp+10h] [bp-1124h]
  _DWORD *v184; // [sp+14h] [bp-1120h]
  int v185; // [sp+14h] [bp-1120h]
  unsigned int v186; // [sp+18h] [bp-111Ch]
  _DWORD *v187; // [sp+18h] [bp-111Ch]
  unsigned int i; // [sp+18h] [bp-111Ch]
  _DWORD *v189; // [sp+1Ch] [bp-1118h]
  _DWORD *v190; // [sp+1Ch] [bp-1118h]
  double *v191; // [sp+1Ch] [bp-1118h]
  double *v192; // [sp+20h] [bp-1114h]
  _DWORD *v193; // [sp+20h] [bp-1114h]
  char v194[252]; // [sp+34h] [bp-1100h] BYREF
  char v195[4100]; // [sp+130h] [bp-1004h] BYREF

  file = json_load_file("/etc/topol.conf", 0, v194);
  v1 = file;
  if ( !file || *(_DWORD *)file )
  {
    V_LOCK();
    v183 = -1;
    logfmt_raw(v195, 0x1000u, 0, 1351984, 1351968);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/topol/topol.c",
      148,
      "platform_topol_init",
      19,
      1488,
      20,
      v195);
    return v183;
  }
  v2 = (_DWORD *)json_object_get(file, "machine");
  v3 = v2;
  if ( !v2 || *v2 != 2 )
  {
    V_LOCK();
    logfmt_raw(v195, 0x1000u, 0, 1352028);
    V_UNLOCK();
    v25 = g_zc;
    v26 = 139;
LABEL_26:
    zlog(
      v25,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/topol/topol.c",
      148,
      "_parse_machine",
      14,
      v26,
      100,
      v195);
LABEL_27:
    V_LOCK();
    logfmt_raw(v195, 0x1000u, 0, 1352248);
    V_UNLOCK();
    v19 = g_zc;
    v20 = 1495;
    goto LABEL_16;
  }
  V_LOCK();
  v4 = json_string_value(v3);
  logfmt_raw(v195, 0x1000u, 0, 1352048, v4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/topol/topol.c",
    148,
    "_parse_machine",
    14,
    142,
    20,
    v195);
  v5 = (const char *)json_string_value(v3);
  v6 = strlen(v5);
  v7 = (char *)calloc(v6 + 1, 1u);
  topol_machine = (int)v7;
  if ( !v7 )
  {
    V_LOCK();
    logfmt_raw(v195, 0x1000u, 0, 1352072);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/topol/topol.c",
      148,
      "_parse_machine",
      14,
      148,
      100,
      v195);
    goto LABEL_27;
  }
  strcpy(v7, v5);
  V_LOCK();
  logfmt_raw(v195, 0x1000u, 0, "machine : %s ", topol_machine);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/topol/topol.c",
    148,
    "_parse_machine",
    14,
    153,
    20,
    v195);
  v8 = (_DWORD *)json_object_get(v1, "hw_version");
  v9 = v8;
  if ( !v8 || *v8 != 2 )
  {
    V_LOCK();
    logfmt_raw(v195, 0x1000u, 0, 1352144);
    V_UNLOCK();
    v25 = g_zc;
    v26 = 158;
    goto LABEL_26;
  }
  V_LOCK();
  v10 = json_string_value(v9);
  logfmt_raw(v195, 0x1000u, 0, 1352168, v10);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/topol/topol.c",
    148,
    "_parse_machine",
    14,
    161,
    20,
    v195);
  v11 = (_DWORD *)json_object_get(v1, "sw_version");
  v12 = v11;
  if ( !v11 || *v11 != 2 )
  {
    V_LOCK();
    logfmt_raw(v195, 0x1000u, 0, 1352196);
    V_UNLOCK();
    v25 = g_zc;
    v26 = 166;
    goto LABEL_26;
  }
  V_LOCK();
  v13 = json_string_value(v12);
  logfmt_raw(v195, 0x1000u, 0, 1352220, v13);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/topol/topol.c",
    148,
    "_parse_machine",
    14,
    169,
    20,
    v195);
  v14 = (_DWORD *)json_object_get(v1, "processor");
  v15 = v14;
  if ( !v14 || *v14 )
  {
    V_LOCK();
    logfmt_raw(v195, 0x1000u, 0, 1352272);
    V_UNLOCK();
    v110 = g_zc;
    v111 = 181;
LABEL_95:
    zlog(
      v110,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/topol/topol.c",
      148,
      "_parse_processor",
      16,
      v111,
      100,
      v195);
    V_LOCK();
    logfmt_raw(v195, 0x1000u, 0, 1352308);
    V_UNLOCK();
    v19 = g_zc;
    v20 = 1502;
    goto LABEL_16;
  }
  V_LOCK();
  logfmt_raw(v195, 0x1000u, 0, 1352296);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/topol/topol.c",
    148,
    "_parse_processor",
    16,
    184,
    20,
    v195);
  v16 = (_DWORD *)json_object_get(v15, "type");
  v17 = v16;
  if ( !v16 || *v16 != 2 )
  {
    V_LOCK();
    logfmt_raw(v195, 0x1000u, 0, 1349620);
    V_UNLOCK();
    v110 = g_zc;
    v111 = 189;
    goto LABEL_95;
  }
  V_LOCK();
  v18 = json_string_value(v17);
  logfmt_raw(v195, 0x1000u, 0, 1349636, v18);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/topol/topol.c",
    148,
    "_parse_processor",
    16,
    192,
    20,
    v195);
  if ( sub_5C570(v1) )
  {
    V_LOCK();
    logfmt_raw(v195, 0x1000u, 0, 1352332);
    V_UNLOCK();
    v19 = g_zc;
    v20 = 1509;
    goto LABEL_16;
  }
  if ( sub_5CC6C(v1) )
  {
    V_LOCK();
    logfmt_raw(v195, 0x1000u, 0, 1352352);
    V_UNLOCK();
    v19 = g_zc;
    v20 = 1516;
    goto LABEL_16;
  }
  LOWORD(v27) = 620;
  HIWORD(v27) = (unsigned int)&unk_137E14 >> 16;
  v28 = (_DWORD *)json_object_get(v1, v27);
  v184 = v28;
  if ( !v28 || *v28 )
  {
    V_LOCK();
    logfmt_raw(v195, 0x1000u, 0, 1352372);
    V_UNLOCK();
    v112 = g_zc;
    v113 = 908;
    goto LABEL_97;
  }
  V_LOCK();
  logfmt_raw(v195, 0x1000u, 0, 1352392);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/topol/topol.c",
    148,
    "_parse_chain",
    12,
    911,
    20,
    v195);
  LOWORD(v29) = 504;
  HIWORD(v29) = (unsigned int)&unk_137DA0 >> 16;
  v30 = (_DWORD *)json_object_get(v184, v29);
  v31 = (int)v30;
  if ( !v30 || *v30 != 3 )
  {
    V_LOCK();
    logfmt_raw(v195, 0x1000u, 0, 1352400);
    V_UNLOCK();
    v112 = g_zc;
    v113 = 916;
    goto LABEL_97;
  }
  V_LOCK();
  v32 = json_integer_value(v31);
  logfmt_raw(v195, 0x1000u, 0, 1352424, v32);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/topol/topol.c",
    148,
    "_parse_chain",
    12,
    919,
    20,
    v195);
  v33 = json_integer_value(v31);
  dword_18BB70 = v33;
  V_LOCK();
  logfmt_raw(v195, 0x1000u, 0, 1352440, v33);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/topol/topol.c",
    148,
    "_alloc_chain",
    12,
    80,
    20,
    v195);
  dword_18BB90 = (int)calloc(v33, 0x78u);
  if ( !dword_18BB90 )
  {
    V_LOCK();
    logfmt_raw(v195, 0x1000u, 0, 1352456, v33);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/topol/topol.c",
      148,
      "_alloc_chain",
      12,
      85,
      100,
      v195);
    V_LOCK();
    LOWORD(v178) = 7824;
    LOWORD(v179) = 4784;
    HIWORD(v178) = (unsigned int)&unk_139A14 >> 16;
    HIWORD(v179) = (unsigned int)&unk_138E4C >> 16;
    logfmt_raw(v195, 0x1000u, 0, v179, v178);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/topol/topol.c",
      148,
      "_alloc_chain",
      12,
      86,
      100,
      v195);
    goto LABEL_98;
  }
  v34 = (_DWORD *)json_object_get(v184, "chain_row");
  v35 = (int)v34;
  if ( !v34 || *v34 != 3 )
  {
    V_LOCK();
    logfmt_raw(v195, 0x1000u, 0, 1352496);
    V_UNLOCK();
    v112 = g_zc;
    v113 = 927;
LABEL_97:
    zlog(
      v112,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/topol/topol.c",
      148,
      "_parse_chain",
      12,
      v113,
      100,
      v195);
LABEL_98:
    V_LOCK();
    logfmt_raw(v195, 0x1000u, 0, 1353576);
    V_UNLOCK();
    v19 = g_zc;
    v20 = 1524;
LABEL_16:
    zlog(
      v19,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/topol/topol.c",
      148,
      "platform_topol_init",
      19,
      v20,
      20,
      v195);
    if ( *((_DWORD *)v1 + 1) != -1 )
    {
      v21 = (unsigned int *)v1 + 1;
      __dmb(0xBu);
      do
      {
        v22 = __ldrex(v21);
        v23 = v22 - 1;
      }
      while ( __strex(v23, v21) );
      if ( !v23 )
        json_delete(v1);
    }
    return 34;
  }
  V_LOCK();
  v36 = json_integer_value(v35);
  logfmt_raw(v195, 0x1000u, 0, 1352520, v36);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/topol/topol.c",
    148,
    "_parse_chain",
    12,
    930,
    20,
    v195);
  dword_18BB74 = json_integer_value(v35);
  v37 = (_DWORD *)json_object_get(v184, "chain_column");
  v38 = (int)v37;
  if ( !v37 || *v37 != 3 )
  {
    V_LOCK();
    logfmt_raw(v195, 0x1000u, 0, 1352552);
    V_UNLOCK();
    v112 = g_zc;
    v113 = 936;
    goto LABEL_97;
  }
  V_LOCK();
  v39 = json_integer_value(v38);
  logfmt_raw(v195, 0x1000u, 0, 1352576, v39);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/topol/topol.c",
    148,
    "_parse_chain",
    12,
    939,
    20,
    v195);
  dword_18BB78 = json_integer_value(v38);
  v40 = (_DWORD *)json_object_get(v184, "chain_domain_num");
  v41 = (int)v40;
  if ( !v40 || *v40 != 3 )
  {
    V_LOCK();
    logfmt_raw(v195, 0x1000u, 0, 1352616);
    V_UNLOCK();
    v112 = g_zc;
    v113 = 945;
    goto LABEL_97;
  }
  V_LOCK();
  v42 = json_integer_value(v41);
  logfmt_raw(v195, 0x1000u, 0, 1352644, v42);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/topol/topol.c",
    148,
    "_parse_chain",
    12,
    948,
    20,
    v195);
  dword_18BB7C = json_integer_value(v41);
  v43 = (_DWORD *)json_object_get(v184, "chain_asic_num");
  v44 = (int)v43;
  if ( !v43 || *v43 != 3 )
  {
    V_LOCK();
    logfmt_raw(v195, 0x1000u, 0, 1352684);
    V_UNLOCK();
    v112 = g_zc;
    v113 = 954;
    goto LABEL_97;
  }
  V_LOCK();
  v45 = json_integer_value(v44);
  logfmt_raw(v195, 0x1000u, 0, 1352712, v45);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/topol/topol.c",
    148,
    "_parse_chain",
    12,
    957,
    20,
    v195);
  dword_18BB80 = json_integer_value(v44);
  v46 = (_DWORD *)json_object_get(v184, "domain_asic_num");
  v47 = (int)v46;
  if ( !v46 || *v46 != 3 )
  {
    V_LOCK();
    logfmt_raw(v195, 0x1000u, 0, 1352748);
    V_UNLOCK();
    v112 = g_zc;
    v113 = 963;
    goto LABEL_97;
  }
  V_LOCK();
  v48 = json_integer_value(v47);
  logfmt_raw(v195, 0x1000u, 0, 1352776, v48);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/topol/topol.c",
    148,
    "_parse_chain",
    12,
    966,
    20,
    v195);
  dword_18BB84 = json_integer_value(v47);
  v49 = (_DWORD *)json_object_get(v184, "pic_mcu_en");
  v50 = v49;
  if ( !v49 || (unsigned int)(*v49 - 5) > 1 )
  {
    V_LOCK();
    logfmt_raw(v195, 0x1000u, 0, 1352812);
    V_UNLOCK();
    v140 = 972;
    goto LABEL_134;
  }
  V_LOCK();
  v51 = "false";
  if ( *v50 == 5 )
    v51 = "true";
  logfmt_raw(v195, 0x1000u, 0, 1352836, v51);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/topol/topol.c",
    148,
    "_parse_chain",
    12,
    975,
    20,
    v195);
  byte_18BB88 = *v50 == 5;
  v52 = (_DWORD *)json_object_get(v184, "sensor_mode");
  v53 = (int)v52;
  if ( !v52 || *v52 != 3 )
  {
    V_LOCK();
    logfmt_raw(v195, 0x1000u, 0, 1352864);
    V_UNLOCK();
    v140 = 981;
    goto LABEL_134;
  }
  V_LOCK();
  v54 = json_integer_value(v53);
  logfmt_raw(v195, 0x1000u, 0, 1352888, v54);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/topol/topol.c",
    148,
    "_parse_chain",
    12,
    984,
    20,
    v195);
  *(_DWORD *)(dword_18BB90 + 88) = json_integer_value(v53);
  v55 = (_DWORD *)json_object_get(v184, "sensor_num");
  v56 = (int)v55;
  if ( !v55 || *v55 != 3 )
  {
    V_LOCK();
    logfmt_raw(v195, 0x1000u, 0, 1352920);
    V_UNLOCK();
    v140 = 990;
LABEL_134:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/topol/topol.c",
      148,
      "_parse_chain",
      12,
      v140,
      100,
      v195);
    goto LABEL_98;
  }
  V_LOCK();
  v57 = json_integer_value(v56);
  logfmt_raw(v195, 0x1000u, 0, 1352944, v57);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/topol/topol.c",
    148,
    "_parse_chain",
    12,
    993,
    20,
    v195);
  v58 = json_integer_value(v56);
  v59 = dword_18BB90;
  *(_DWORD *)(dword_18BB90 + 92) = v58;
  v60 = calloc(v58, 0x18u);
  *(_DWORD *)(v59 + 84) = v60;
  if ( !v60 )
  {
    V_LOCK();
    logfmt_raw(v195, 0x1000u, 0, "calloc sensor failed!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/topol/topol.c",
      148,
      "_alloc_sensor",
      13,
      97,
      100,
      v195);
    goto LABEL_98;
  }
  v61 = (_DWORD *)json_object_get(v184, "max_chip_temp");
  v62 = (int)v61;
  if ( !v61 || *v61 != 3 )
  {
    V_LOCK();
    logfmt_raw(v195, 0x1000u, 0, 1353000);
    V_UNLOCK();
    v140 = 1001;
    goto LABEL_134;
  }
  V_LOCK();
  v63 = json_integer_value(v62);
  logfmt_raw(v195, 0x1000u, 0, 1353028, v63);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/topol/topol.c",
    148,
    "_parse_chain",
    12,
    1004,
    20,
    v195);
  *(_DWORD *)(dword_18BB90 + 96) = json_integer_value(v62);
  v64 = (_DWORD *)json_object_get(v184, "max_pcb_temp");
  v65 = (int)v64;
  if ( !v64 || *v64 != 3 )
  {
    V_LOCK();
    logfmt_raw(v195, 0x1000u, 0, 1353064);
    V_UNLOCK();
    v140 = 1010;
    goto LABEL_134;
  }
  V_LOCK();
  v66 = json_integer_value(v65);
  logfmt_raw(v195, 0x1000u, 0, 1353088, v66);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/topol/topol.c",
    148,
    "_parse_chain",
    12,
    1013,
    20,
    v195);
  *(_DWORD *)(dword_18BB90 + 100) = json_integer_value(v65);
  v67 = (_DWORD *)json_object_get(v184, "min_pcb_temp");
  v68 = (int)v67;
  if ( !v67 || *v67 != 3 )
  {
    V_LOCK();
    logfmt_raw(v195, 0x1000u, 0, 1353124);
    V_UNLOCK();
    v140 = 1019;
    goto LABEL_134;
  }
  V_LOCK();
  v69 = json_integer_value(v68);
  logfmt_raw(v195, 0x1000u, 0, 1353148, v69);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/topol/topol.c",
    148,
    "_parse_chain",
    12,
    1022,
    20,
    v195);
  *(_DWORD *)(dword_18BB90 + 104) = json_integer_value(v68);
  v70 = (_DWORD *)json_object_get(v184, "max_uneffective_count");
  v71 = (int)v70;
  if ( !v70 || *v70 != 3 )
  {
    V_LOCK();
    logfmt_raw(v195, 0x1000u, 0, 1353192);
    V_UNLOCK();
    v140 = 1028;
    goto LABEL_134;
  }
  V_LOCK();
  v72 = json_integer_value(v71);
  logfmt_raw(v195, 0x1000u, 0, 1353228, v72);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/topol/topol.c",
    148,
    "_parse_chain",
    12,
    1031,
    20,
    v195);
  *(_DWORD *)(dword_18BB90 + 108) = json_integer_value(v71);
  v183 = sub_5DB0C(v184);
  if ( v183 )
  {
    V_LOCK();
    logfmt_raw(v195, 0x1000u, 0, 1353256);
    V_UNLOCK();
    v141 = 1037;
    goto LABEL_139;
  }
  if ( byte_18BB88 && sub_5E2DC(v184) )
  {
    V_LOCK();
    logfmt_raw(v195, 0x1000u, 0, 1353276);
    V_UNLOCK();
    v141 = 1045;
LABEL_139:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/topol/topol.c",
      148,
      "_parse_chain",
      12,
      v141,
      100,
      v195);
    goto LABEL_98;
  }
  v73 = *(_DWORD *)(dword_18BB90 + 88);
  if ( v73 == 3 )
  {
    v142 = (_DWORD *)json_object_get(v184, "ctrlboard_sensor");
    v193 = v142;
    if ( !v142 || *v142 != 1 )
    {
      V_LOCK();
      logfmt_raw(v195, 0x1000u, 0, 1353320);
      V_UNLOCK();
      v182 = 640;
LABEL_186:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/topol/topol.c",
        148,
        "_parse_chain_ctrlboard_sensor",
        29,
        v182,
        100,
        v195);
      V_LOCK();
      logfmt_raw(v195, 0x1000u, 0, 1353376);
      V_UNLOCK();
      v140 = 1054;
      goto LABEL_134;
    }
    V_LOCK();
    logfmt_raw(v195, 0x1000u, 0, 1353356);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/topol/topol.c",
      148,
      "_parse_chain_ctrlboard_sensor",
      29,
      643,
      20,
      v195);
    v191 = v1;
    for ( i = 0; i < (unsigned int)json_array_size(v193); ++i )
    {
      v143 = json_array_get(v193, i);
      v144 = v143;
      if ( !v143 || *v143 )
      {
        v1 = v191;
        V_LOCK();
        logfmt_raw(v195, 0x1000u, 0, 1350848, i);
        V_UNLOCK();
        v182 = 650;
        goto LABEL_186;
      }
      v145 = (_DWORD *)json_object_get(v143, "index");
      v146 = (int)v145;
      if ( !v145 || *v145 != 3 )
      {
        v1 = v191;
        V_LOCK();
        logfmt_raw(v195, 0x1000u, 0, 1351756, i);
        V_UNLOCK();
        v182 = 657;
        goto LABEL_186;
      }
      V_LOCK();
      v147 = json_integer_value(v146);
      logfmt_raw(v195, 0x1000u, 0, 1351784, v147);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/topol/topol.c",
        148,
        "_parse_chain_ctrlboard_sensor",
        29,
        660,
        20,
        v195);
      v148 = json_integer_value(v146);
      v149 = *(_DWORD *)(dword_18BB90 + 84);
      *(_DWORD *)(v149 + 24 * v148) = v148;
      v150 = (_DWORD *)(v149 + 24 * v148);
      v150[2] = 2;
      v151 = (_DWORD *)json_object_get(v144, "type");
      v152 = v151;
      if ( !v151 || *v151 != 2 )
      {
        v1 = v191;
        V_LOCK();
        logfmt_raw(v195, 0x1000u, 0, 1351796, i);
        V_UNLOCK();
        v182 = 669;
        goto LABEL_186;
      }
      V_LOCK();
      v153 = json_string_value(v152);
      logfmt_raw(v195, 0x1000u, 0, 1349636, v153);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/topol/topol.c",
        148,
        "_parse_chain_ctrlboard_sensor",
        29,
        672,
        20,
        v195);
      v154 = (const char *)json_string_value(v152);
      v155 = strcmp(v154, "TMP451");
      if ( v155 )
      {
        if ( !strcmp(v154, "LM75A") )
        {
          v155 = 1;
        }
        else if ( !strcmp(v154, "unknow") )
        {
          v155 = 2;
        }
        else
        {
          v155 = 3;
        }
      }
      v150[1] = v155;
      v156 = (_DWORD *)json_object_get(v144, "iic");
      v157 = (int)v156;
      if ( !v156 || *v156 != 3 )
      {
        v1 = v191;
        V_LOCK();
        logfmt_raw(v195, 0x1000u, 0, 1351852, i);
        V_UNLOCK();
        v182 = 678;
        goto LABEL_186;
      }
      V_LOCK();
      v158 = json_integer_value(v157);
      logfmt_raw(v195, 0x1000u, 0, 1351884, v158);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/topol/topol.c",
        148,
        "_parse_chain_ctrlboard_sensor",
        29,
        681,
        20,
        v195);
      v150[5] = json_integer_value(v157);
      v159 = (_DWORD *)json_object_get(v144, "x");
      v160 = v159;
      if ( !v159 || *v159 != 2 )
      {
        v1 = v191;
        V_LOCK();
        logfmt_raw(v195, 0x1000u, 0, 1351892, i);
        V_UNLOCK();
        v182 = 687;
        goto LABEL_186;
      }
      V_LOCK();
      v161 = json_string_value(v160);
      logfmt_raw(v195, 0x1000u, 0, 1351916, v161);
      V_UNLOCK();
      v162 = 0;
      v163 = off_149614;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/topol/topol.c",
        148,
        "_parse_chain_ctrlboard_sensor",
        29,
        690,
        20,
        v195);
      v164 = (const char *)json_string_value(v160);
      v165 = "air_in";
      v166 = v164;
      while ( strcmp(v166, v165) )
      {
        v167 = *v163++;
        v165 = v167;
        ++v162;
      }
      LOWORD(v168) = 13868;
      v169 = 0;
      v150[3] = v162;
      HIWORD(v168) = (unsigned int)&unk_13B1A8 >> 16;
      v170 = (_DWORD *)json_object_get(v144, v168);
      v171 = v170;
      if ( !v170 || *v170 != 2 )
      {
        v1 = v191;
        V_LOCK();
        logfmt_raw(v195, 0x1000u, 0, 1351924, i);
        V_UNLOCK();
        v182 = 696;
        goto LABEL_186;
      }
      V_LOCK();
      v172 = json_string_value(v171);
      logfmt_raw(v195, 0x1000u, 0, 1351948, v172);
      V_UNLOCK();
      v173 = (const char **)&unk_149634;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/topol/topol.c",
        148,
        "_parse_chain_ctrlboard_sensor",
        29,
        699,
        20,
        v195);
      v174 = (const char *)json_string_value(v171);
      v175 = "top";
      v176 = v174;
      while ( strcmp(v176, v175) )
      {
        v177 = *v173++;
        v175 = v177;
        ++v169;
      }
      v150[4] = v169;
    }
    v1 = v191;
    v73 = *(_DWORD *)(dword_18BB90 + 88);
  }
  if ( (v73 & 0xFFFFFFFD) == 0 )
  {
    v74 = (_DWORD *)json_object_get(v184, "asic_sensor");
    v189 = v74;
    if ( v74 && *v74 == 1 )
    {
      V_LOCK();
      v186 = 0;
      logfmt_raw(v195, 0x1000u, 0, 1353440);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/topol/topol.c",
        148,
        "_parse_chain_sensor",
        19,
        802,
        20,
        v195);
      v192 = v1;
      while ( 1 )
      {
        if ( v186 >= (unsigned int)json_array_size(v189) )
        {
          v1 = v192;
          goto LABEL_105;
        }
        v75 = json_array_get(v189, v186);
        v76 = v75;
        if ( !v75 || *v75 )
          break;
        v77 = (_DWORD *)json_object_get(v75, "index");
        v78 = (int)v77;
        if ( !v77 || *v77 != 3 )
        {
          v1 = v192;
          V_LOCK();
          logfmt_raw(v195, 0x1000u, 0, 1351756, v186);
          V_UNLOCK();
          v181 = 817;
          goto LABEL_178;
        }
        V_LOCK();
        v79 = json_integer_value(v78);
        logfmt_raw(v195, 0x1000u, 0, 1351784, v79);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/backend/topol/topol.c",
          148,
          "_parse_chain_sensor",
          19,
          820,
          20,
          v195);
        v80 = json_integer_value(v78);
        v81 = *(_DWORD *)(dword_18BB90 + 84);
        *(_DWORD *)(v81 + 24 * v80) = v80;
        v82 = (_DWORD *)(v81 + 24 * v80);
        v82[2] = 1;
        v83 = (_DWORD *)json_object_get(v76, "type");
        v84 = v83;
        if ( !v83 || *v83 != 2 )
        {
          v1 = v192;
          V_LOCK();
          logfmt_raw(v195, 0x1000u, 0, 1351796, v186);
          V_UNLOCK();
          v181 = 829;
          goto LABEL_178;
        }
        V_LOCK();
        v85 = json_string_value(v84);
        logfmt_raw(v195, 0x1000u, 0, 1349636, v85);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/backend/topol/topol.c",
          148,
          "_parse_chain_sensor",
          19,
          832,
          20,
          v195);
        v86 = (const char *)json_string_value(v84);
        v87 = strcmp(v86, "TMP451");
        if ( v87 )
        {
          if ( !strcmp(v86, "LM75A") )
          {
            v87 = 1;
          }
          else if ( !strcmp(v86, "unknow") )
          {
            v87 = 2;
          }
          else
          {
            v87 = 3;
          }
        }
        v82[1] = v87;
        v88 = (_DWORD *)json_object_get(v76, "bind_asic");
        v89 = (int)v88;
        if ( !v88 || *v88 != 3 )
        {
          v1 = v192;
          V_LOCK();
          logfmt_raw(v195, 0x1000u, 0, 1351852, v186);
          V_UNLOCK();
          v181 = 838;
          goto LABEL_178;
        }
        V_LOCK();
        v90 = json_integer_value(v89);
        logfmt_raw(v195, 0x1000u, 0, 1353468, v90);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/backend/topol/topol.c",
          148,
          "_parse_chain_sensor",
          19,
          841,
          20,
          v195);
        v82[5] = json_integer_value(v89);
        v91 = (_DWORD *)json_object_get(v76, "x");
        v92 = v91;
        if ( !v91 || *v91 != 2 )
        {
          v1 = v192;
          V_LOCK();
          logfmt_raw(v195, 0x1000u, 0, 1351892, v186);
          V_UNLOCK();
          v181 = 847;
          goto LABEL_178;
        }
        V_LOCK();
        v93 = json_string_value(v92);
        logfmt_raw(v195, 0x1000u, 0, 1351916, v93);
        V_UNLOCK();
        v94 = 0;
        v95 = off_149614;
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/backend/topol/topol.c",
          148,
          "_parse_chain_sensor",
          19,
          850,
          20,
          v195);
        v96 = (const char *)json_string_value(v92);
        v97 = "air_in";
        v98 = v96;
        while ( strcmp(v98, v97) )
        {
          v99 = *v95++;
          v97 = v99;
          ++v94;
        }
        LOWORD(v100) = 13868;
        v101 = 0;
        v82[3] = v94;
        HIWORD(v100) = (unsigned int)&unk_13B1A8 >> 16;
        v102 = (_DWORD *)json_object_get(v76, v100);
        v103 = v102;
        if ( !v102 || *v102 != 2 )
        {
          v1 = v192;
          V_LOCK();
          logfmt_raw(v195, 0x1000u, 0, 1351924, v186);
          V_UNLOCK();
          v181 = 856;
          goto LABEL_178;
        }
        V_LOCK();
        v104 = json_string_value(v103);
        logfmt_raw(v195, 0x1000u, 0, 1351948, v104);
        V_UNLOCK();
        v105 = (const char **)&unk_149634;
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/backend/topol/topol.c",
          148,
          "_parse_chain_sensor",
          19,
          859,
          20,
          v195);
        v106 = (const char *)json_string_value(v103);
        v107 = "top";
        v108 = v106;
        while ( strcmp(v108, v107) )
        {
          v109 = *v105++;
          v107 = v109;
          ++v101;
        }
        v82[4] = v101;
        ++v186;
      }
      v1 = v192;
      V_LOCK();
      logfmt_raw(v195, 0x1000u, 0, 1350848, v186);
      V_UNLOCK();
      v181 = 810;
    }
    else
    {
      V_LOCK();
      logfmt_raw(v195, 0x1000u, 0, 1353420);
      V_UNLOCK();
      v181 = 799;
    }
LABEL_178:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/topol/topol.c",
      148,
      "_parse_chain_sensor",
      19,
      v181,
      100,
      v195);
    V_LOCK();
    logfmt_raw(v195, 0x1000u, 0, 1353484);
    V_UNLOCK();
    v140 = 1064;
    goto LABEL_134;
  }
LABEL_105:
  v114 = v184;
  v185 = dword_18BB70;
  v115 = (_DWORD *)json_object_get(v114, "eeprom");
  v187 = v115;
  if ( !v115 || (v116 = *v115) != 0 )
  {
    V_LOCK();
    logfmt_raw(v195, 0x1000u, 0, 1353520);
    V_UNLOCK();
    v180 = 760;
    goto LABEL_173;
  }
  V_LOCK();
  logfmt_raw(v195, 0x1000u, 0, 1353540);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/topol/topol.c",
    148,
    "_parse_chain_eeprom",
    19,
    763,
    20,
    v195);
  v117 = (_DWORD *)json_object_get(v187, "type");
  v190 = v117;
  if ( !v117 || *v117 != 2 )
  {
    V_LOCK();
    logfmt_raw(v195, 0x1000u, 0, 1349620);
    V_UNLOCK();
    v180 = 768;
    goto LABEL_173;
  }
  V_LOCK();
  v118 = json_string_value(v190);
  logfmt_raw(v195, 0x1000u, 0, 1349636, v118);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/topol/topol.c",
    148,
    "_parse_chain_eeprom",
    19,
    771,
    20,
    v195);
  if ( v185 > 0 )
  {
    v119 = 0;
    do
    {
      v120 = off_149700;
      v121 = 0;
      v122 = (const char *)json_string_value(v190);
      v123 = "AT24C02D";
      while ( strcmp(v122, v123) )
      {
        v124 = v120[1];
        ++v120;
        v123 = v124;
        ++v121;
      }
      ++v116;
      v125 = dword_18BB90 + v119;
      v119 += 120;
      *(_DWORD *)(v125 + 112) = v121;
    }
    while ( v185 != v116 );
  }
  v126 = (_DWORD *)json_object_get(v187, "i2c_addr");
  v127 = (int)v126;
  if ( !v126 || *v126 != 3 )
  {
    V_LOCK();
    logfmt_raw(v195, 0x1000u, 0, 1349940);
    V_UNLOCK();
    v180 = 780;
LABEL_173:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/topol/topol.c",
      148,
      "_parse_chain_eeprom",
      19,
      v180,
      100,
      v195);
    V_LOCK();
    logfmt_raw(v195, 0x1000u, 0, 1353548);
    V_UNLOCK();
    v140 = 1072;
    goto LABEL_134;
  }
  V_LOCK();
  v128 = json_integer_value(v127);
  logfmt_raw(v195, 0x1000u, 0, 1349960, v128);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/topol/topol.c",
    148,
    "_parse_chain_eeprom",
    19,
    783,
    20,
    v195);
  if ( v185 > 0 )
  {
    v129 = 0;
    v130 = 0;
    do
    {
      ++v129;
      v131 = json_integer_value(v127);
      v132 = dword_18BB90 + v130;
      v130 += 120;
      *(_DWORD *)(v132 + 116) = v131;
    }
    while ( v185 != v129 );
  }
  v133 = dword_18BB70;
  if ( dword_18BB70 > 1 )
  {
    v134 = 120;
    v135 = 1;
    do
    {
      ++v135;
      v136 = (void *)(dword_18BB90 + v134);
      v134 += 120;
      memcpy(v136, (const void *)dword_18BB90, 0x78u);
    }
    while ( v133 != v135 );
  }
  if ( *((_DWORD *)v1 + 1) != -1 )
  {
    v137 = (unsigned int *)v1 + 1;
    __dmb(0xBu);
    do
    {
      v138 = __ldrex(v137);
      v139 = v138 - 1;
    }
    while ( __strex(v139, v137) );
    if ( !v139 )
      json_delete(v1);
  }
  return v183;
}
