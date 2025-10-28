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
  _DWORD *v27; // r0
  _DWORD *v28; // r0
  int v29; // r9
  int v30; // r0
  size_t v31; // r9
  _DWORD *v32; // r0
  int v33; // r6
  int v34; // r0
  _DWORD *v35; // r0
  int v36; // r6
  int v37; // r0
  _DWORD *v38; // r0
  int v39; // r6
  int v40; // r0
  _DWORD *v41; // r0
  int v42; // r6
  int v43; // r0
  _DWORD *v44; // r0
  int v45; // r8
  int v46; // r0
  _DWORD *v47; // r0
  _DWORD *v48; // r8
  char *v49; // r2
  _DWORD *v50; // r0
  int v51; // r8
  int v52; // r0
  _DWORD *v53; // r0
  int v54; // r8
  int v55; // r0
  size_t v56; // r0
  int v57; // r6
  void *v58; // r0
  _DWORD *v59; // r0
  int v60; // r6
  int v61; // r0
  _DWORD *v62; // r0
  int v63; // r6
  int v64; // r0
  _DWORD *v65; // r0
  int v66; // r6
  int v67; // r0
  _DWORD *v68; // r0
  int v69; // r6
  int v70; // r0
  int v71; // r3
  _DWORD *v72; // r0
  _DWORD *v73; // r0
  _DWORD *v74; // r11
  _DWORD *v75; // r0
  int v76; // r7
  int v77; // r0
  int v78; // r0
  int v79; // r9
  _DWORD *v80; // r9
  _DWORD *v81; // r0
  _DWORD *v82; // r7
  _DWORD *v83; // r0
  const char *v84; // r6
  int v85; // r3
  _DWORD *v86; // r0
  int v87; // r6
  int v88; // r0
  _DWORD *v89; // r0
  _DWORD *v90; // r6
  _DWORD *v91; // r0
  int v92; // r7
  char **v93; // r8
  const char *v94; // r0
  const char *v95; // r1
  const char *v96; // r10
  const char *v97; // t1
  int v98; // r6
  _DWORD *v99; // r0
  _DWORD *v100; // r8
  _DWORD *v101; // r0
  const char **v102; // r7
  const char *v103; // r0
  const char *v104; // r1
  const char *v105; // r8
  const char *v106; // t1
  int v107; // r0
  int v108; // r2
  int v109; // r0
  int v110; // r2
  _DWORD *v111; // r0
  _DWORD *v112; // r0
  int v113; // r8
  _DWORD *v114; // r0
  _DWORD *v115; // r0
  int v116; // r9
  char **v117; // r6
  int v118; // r4
  const char *v119; // r7
  const char *v120; // r1
  const char *v121; // t1
  int v122; // r2
  _DWORD *v123; // r0
  int v124; // r6
  int v125; // r0
  int v126; // r4
  int v127; // r5
  int v128; // r0
  int v129; // r3
  int v130; // r6
  int v131; // r5
  int v132; // r4
  void *v133; // r0
  unsigned int *v134; // r3
  unsigned int v135; // r2
  unsigned int v136; // r2
  int v137; // r0
  int v138; // r3
  _DWORD *v139; // r0
  _DWORD *v140; // r0
  _DWORD *v141; // r11
  _DWORD *v142; // r0
  int v143; // r7
  int v144; // r0
  int v145; // r0
  int v146; // r10
  _DWORD *v147; // r10
  _DWORD *v148; // r0
  _DWORD *v149; // r7
  _DWORD *v150; // r0
  const char *v151; // r6
  int v152; // r3
  _DWORD *v153; // r0
  int v154; // r6
  int v155; // r0
  _DWORD *v156; // r0
  _DWORD *v157; // r6
  _DWORD *v158; // r0
  int v159; // r7
  char **v160; // r8
  const char *v161; // r0
  const char *v162; // r1
  const char *v163; // r9
  const char *v164; // t1
  int v165; // r6
  _DWORD *v166; // r0
  _DWORD *v167; // r8
  _DWORD *v168; // r0
  const char **v169; // r7
  const char *v170; // r0
  const char *v171; // r1
  const char *v172; // r8
  const char *v173; // t1
  int v174; // r0
  int v175; // r0
  int v176; // r0
  int v177; // [sp+10h] [bp-1124h]
  _DWORD *v178; // [sp+14h] [bp-1120h]
  int v179; // [sp+14h] [bp-1120h]
  unsigned int v180; // [sp+18h] [bp-111Ch]
  _DWORD *v181; // [sp+18h] [bp-111Ch]
  unsigned int i; // [sp+18h] [bp-111Ch]
  _DWORD *v183; // [sp+1Ch] [bp-1118h]
  _DWORD *v184; // [sp+1Ch] [bp-1118h]
  double *v185; // [sp+1Ch] [bp-1118h]
  double *v186; // [sp+20h] [bp-1114h]
  _DWORD *v187; // [sp+20h] [bp-1114h]
  char v188[252]; // [sp+34h] [bp-1100h] BYREF
  char v189[4100]; // [sp+130h] [bp-1004h] BYREF

  file = json_load_file("/etc/topol.conf", 0, v188);
  v1 = file;
  if ( !file || *(_DWORD *)file )
  {
    V_LOCK();
    v177 = -1;
    logfmt_raw(v189, 0x1000u, 0, 1297424, 1297408);
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
      v189);
    return v177;
  }
  v2 = (_DWORD *)json_object_get(file, "machine");
  v3 = v2;
  if ( !v2 || *v2 != 2 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, 1297468);
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
      v189);
LABEL_27:
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, 1297688);
    V_UNLOCK();
    v19 = g_zc;
    v20 = 1495;
    goto LABEL_16;
  }
  V_LOCK();
  v4 = json_string_value(v3);
  logfmt_raw(v189, 0x1000u, 0, 1297488, v4);
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
    v189);
  v5 = (const char *)json_string_value(v3);
  v6 = strlen(v5);
  v7 = (char *)calloc(v6 + 1, 1u);
  topol_machine = (int)v7;
  if ( !v7 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, 1297512);
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
      v189);
    goto LABEL_27;
  }
  strcpy(v7, v5);
  V_LOCK();
  logfmt_raw(v189, 0x1000u, 0, "machine : %s ", topol_machine);
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
    v189);
  v8 = (_DWORD *)json_object_get(v1, "hw_version");
  v9 = v8;
  if ( !v8 || *v8 != 2 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, 1297584);
    V_UNLOCK();
    v25 = g_zc;
    v26 = 158;
    goto LABEL_26;
  }
  V_LOCK();
  v10 = json_string_value(v9);
  logfmt_raw(v189, 0x1000u, 0, 1297608, v10);
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
    v189);
  v11 = (_DWORD *)json_object_get(v1, "sw_version");
  v12 = v11;
  if ( !v11 || *v11 != 2 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, 1297636);
    V_UNLOCK();
    v25 = g_zc;
    v26 = 166;
    goto LABEL_26;
  }
  V_LOCK();
  v13 = json_string_value(v12);
  logfmt_raw(v189, 0x1000u, 0, 1297660, v13);
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
    v189);
  v14 = (_DWORD *)json_object_get(v1, "processor");
  v15 = v14;
  if ( !v14 || *v14 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, 1297712);
    V_UNLOCK();
    v107 = g_zc;
    v108 = 181;
LABEL_95:
    zlog(
      v107,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/topol/topol.c",
      148,
      "_parse_processor",
      16,
      v108,
      100,
      v189);
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, 1297748);
    V_UNLOCK();
    v19 = g_zc;
    v20 = 1502;
    goto LABEL_16;
  }
  V_LOCK();
  logfmt_raw(v189, 0x1000u, 0, 1297736);
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
    v189);
  v16 = (_DWORD *)json_object_get(v15, "type");
  v17 = v16;
  if ( !v16 || *v16 != 2 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, 1295060);
    V_UNLOCK();
    v107 = g_zc;
    v108 = 189;
    goto LABEL_95;
  }
  V_LOCK();
  v18 = json_string_value(v17);
  logfmt_raw(v189, 0x1000u, 0, 1295076, v18);
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
    v189);
  if ( sub_55F58(v1) )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, 1297772);
    V_UNLOCK();
    v19 = g_zc;
    v20 = 1509;
    goto LABEL_16;
  }
  if ( sub_56654(v1) )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, 1297792);
    V_UNLOCK();
    v19 = g_zc;
    v20 = 1516;
    goto LABEL_16;
  }
  v27 = (_DWORD *)json_object_get(v1, "chain");
  v178 = v27;
  if ( !v27 || *v27 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, 1297812);
    V_UNLOCK();
    v109 = g_zc;
    v110 = 908;
    goto LABEL_97;
  }
  V_LOCK();
  logfmt_raw(v189, 0x1000u, 0, 1297832);
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
    v189);
  v28 = (_DWORD *)json_object_get(v178, "chain_num");
  v29 = (int)v28;
  if ( !v28 || *v28 != 3 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, 1297840);
    V_UNLOCK();
    v109 = g_zc;
    v110 = 916;
    goto LABEL_97;
  }
  V_LOCK();
  v30 = json_integer_value(v29);
  logfmt_raw(v189, 0x1000u, 0, 1297864, v30);
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
    v189);
  v31 = json_integer_value(v29);
  dword_1786F0 = v31;
  V_LOCK();
  logfmt_raw(v189, 0x1000u, 0, 1297880, v31);
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
    v189);
  dword_178710 = (int)calloc(v31, 0x78u);
  if ( !dword_178710 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, 1297896, v31);
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
      v189);
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, 1198464, 1201468);
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
      v189);
    goto LABEL_98;
  }
  v32 = (_DWORD *)json_object_get(v178, "chain_row");
  v33 = (int)v32;
  if ( !v32 || *v32 != 3 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, 1297936);
    V_UNLOCK();
    v109 = g_zc;
    v110 = 927;
LABEL_97:
    zlog(
      v109,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/topol/topol.c",
      148,
      "_parse_chain",
      12,
      v110,
      100,
      v189);
LABEL_98:
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, 1299016);
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
      v189);
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
  v34 = json_integer_value(v33);
  logfmt_raw(v189, 0x1000u, 0, 1297960, v34);
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
    v189);
  dword_1786F4 = json_integer_value(v33);
  v35 = (_DWORD *)json_object_get(v178, "chain_column");
  v36 = (int)v35;
  if ( !v35 || *v35 != 3 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, 1297992);
    V_UNLOCK();
    v109 = g_zc;
    v110 = 936;
    goto LABEL_97;
  }
  V_LOCK();
  v37 = json_integer_value(v36);
  logfmt_raw(v189, 0x1000u, 0, 1298016, v37);
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
    v189);
  dword_1786F8 = json_integer_value(v36);
  v38 = (_DWORD *)json_object_get(v178, "chain_domain_num");
  v39 = (int)v38;
  if ( !v38 || *v38 != 3 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, 1298056);
    V_UNLOCK();
    v109 = g_zc;
    v110 = 945;
    goto LABEL_97;
  }
  V_LOCK();
  v40 = json_integer_value(v39);
  logfmt_raw(v189, 0x1000u, 0, 1298084, v40);
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
    v189);
  dword_1786FC = json_integer_value(v39);
  v41 = (_DWORD *)json_object_get(v178, "chain_asic_num");
  v42 = (int)v41;
  if ( !v41 || *v41 != 3 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, 1298124);
    V_UNLOCK();
    v109 = g_zc;
    v110 = 954;
    goto LABEL_97;
  }
  V_LOCK();
  v43 = json_integer_value(v42);
  logfmt_raw(v189, 0x1000u, 0, 1298152, v43);
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
    v189);
  dword_178700 = json_integer_value(v42);
  v44 = (_DWORD *)json_object_get(v178, "domain_asic_num");
  v45 = (int)v44;
  if ( !v44 || *v44 != 3 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, 1298188);
    V_UNLOCK();
    v109 = g_zc;
    v110 = 963;
    goto LABEL_97;
  }
  V_LOCK();
  v46 = json_integer_value(v45);
  logfmt_raw(v189, 0x1000u, 0, 1298216, v46);
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
    v189);
  dword_178704 = json_integer_value(v45);
  v47 = (_DWORD *)json_object_get(v178, "pic_mcu_en");
  v48 = v47;
  if ( !v47 || (unsigned int)(*v47 - 5) > 1 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, 1298252);
    V_UNLOCK();
    v137 = 972;
    goto LABEL_134;
  }
  V_LOCK();
  v49 = "false";
  if ( *v48 == 5 )
    v49 = "true";
  logfmt_raw(v189, 0x1000u, 0, 1298276, v49);
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
    v189);
  byte_178708 = *v48 == 5;
  v50 = (_DWORD *)json_object_get(v178, "sensor_mode");
  v51 = (int)v50;
  if ( !v50 || *v50 != 3 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, 1298304);
    V_UNLOCK();
    v137 = 981;
    goto LABEL_134;
  }
  V_LOCK();
  v52 = json_integer_value(v51);
  logfmt_raw(v189, 0x1000u, 0, 1298328, v52);
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
    v189);
  *(_DWORD *)(dword_178710 + 88) = json_integer_value(v51);
  v53 = (_DWORD *)json_object_get(v178, "sensor_num");
  v54 = (int)v53;
  if ( !v53 || *v53 != 3 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, 1298360);
    V_UNLOCK();
    v137 = 990;
LABEL_134:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/topol/topol.c",
      148,
      "_parse_chain",
      12,
      v137,
      100,
      v189);
    goto LABEL_98;
  }
  V_LOCK();
  v55 = json_integer_value(v54);
  logfmt_raw(v189, 0x1000u, 0, 1298384, v55);
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
    v189);
  v56 = json_integer_value(v54);
  v57 = dword_178710;
  *(_DWORD *)(dword_178710 + 92) = v56;
  v58 = calloc(v56, 0x18u);
  *(_DWORD *)(v57 + 84) = v58;
  if ( !v58 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, "calloc sensor failed!");
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
      v189);
    goto LABEL_98;
  }
  v59 = (_DWORD *)json_object_get(v178, "max_chip_temp");
  v60 = (int)v59;
  if ( !v59 || *v59 != 3 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, 1298440);
    V_UNLOCK();
    v137 = 1001;
    goto LABEL_134;
  }
  V_LOCK();
  v61 = json_integer_value(v60);
  logfmt_raw(v189, 0x1000u, 0, 1298468, v61);
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
    v189);
  *(_DWORD *)(dword_178710 + 96) = json_integer_value(v60);
  v62 = (_DWORD *)json_object_get(v178, "max_pcb_temp");
  v63 = (int)v62;
  if ( !v62 || *v62 != 3 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, 1298504);
    V_UNLOCK();
    v137 = 1010;
    goto LABEL_134;
  }
  V_LOCK();
  v64 = json_integer_value(v63);
  logfmt_raw(v189, 0x1000u, 0, 1298528, v64);
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
    v189);
  *(_DWORD *)(dword_178710 + 100) = json_integer_value(v63);
  v65 = (_DWORD *)json_object_get(v178, "min_pcb_temp");
  v66 = (int)v65;
  if ( !v65 || *v65 != 3 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, 1298564);
    V_UNLOCK();
    v137 = 1019;
    goto LABEL_134;
  }
  V_LOCK();
  v67 = json_integer_value(v66);
  logfmt_raw(v189, 0x1000u, 0, 1298588, v67);
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
    v189);
  *(_DWORD *)(dword_178710 + 104) = json_integer_value(v66);
  v68 = (_DWORD *)json_object_get(v178, "max_uneffective_count");
  v69 = (int)v68;
  if ( !v68 || *v68 != 3 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, 1298632);
    V_UNLOCK();
    v137 = 1028;
    goto LABEL_134;
  }
  V_LOCK();
  v70 = json_integer_value(v69);
  logfmt_raw(v189, 0x1000u, 0, 1298668, v70);
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
    v189);
  *(_DWORD *)(dword_178710 + 108) = json_integer_value(v69);
  v177 = sub_574F4(v178);
  if ( v177 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, 1298696);
    V_UNLOCK();
    v138 = 1037;
    goto LABEL_139;
  }
  if ( byte_178708 && sub_57CC4(v178) )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, 1298716);
    V_UNLOCK();
    v138 = 1045;
LABEL_139:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/topol/topol.c",
      148,
      "_parse_chain",
      12,
      v138,
      100,
      v189);
    goto LABEL_98;
  }
  v71 = *(_DWORD *)(dword_178710 + 88);
  if ( v71 == 3 )
  {
    v139 = (_DWORD *)json_object_get(v178, "ctrlboard_sensor");
    v187 = v139;
    if ( !v139 || *v139 != 1 )
    {
      V_LOCK();
      logfmt_raw(v189, 0x1000u, 0, 1298760);
      V_UNLOCK();
      v176 = 640;
LABEL_186:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/topol/topol.c",
        148,
        "_parse_chain_ctrlboard_sensor",
        29,
        v176,
        100,
        v189);
      V_LOCK();
      logfmt_raw(v189, 0x1000u, 0, 1298816);
      V_UNLOCK();
      v137 = 1054;
      goto LABEL_134;
    }
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, 1298796);
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
      v189);
    v185 = v1;
    for ( i = 0; i < (unsigned int)json_array_size(v187); ++i )
    {
      v140 = json_array_get(v187, i);
      v141 = v140;
      if ( !v140 || *v140 )
      {
        v1 = v185;
        V_LOCK();
        logfmt_raw(v189, 0x1000u, 0, 1296288, i);
        V_UNLOCK();
        v176 = 650;
        goto LABEL_186;
      }
      v142 = (_DWORD *)json_object_get(v140, "index");
      v143 = (int)v142;
      if ( !v142 || *v142 != 3 )
      {
        v1 = v185;
        V_LOCK();
        logfmt_raw(v189, 0x1000u, 0, 1297196, i);
        V_UNLOCK();
        v176 = 657;
        goto LABEL_186;
      }
      V_LOCK();
      v144 = json_integer_value(v143);
      logfmt_raw(v189, 0x1000u, 0, 1297224, v144);
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
        v189);
      v145 = json_integer_value(v143);
      v146 = *(_DWORD *)(dword_178710 + 84);
      *(_DWORD *)(v146 + 24 * v145) = v145;
      v147 = (_DWORD *)(v146 + 24 * v145);
      v147[2] = 2;
      v148 = (_DWORD *)json_object_get(v141, "type");
      v149 = v148;
      if ( !v148 || *v148 != 2 )
      {
        v1 = v185;
        V_LOCK();
        logfmt_raw(v189, 0x1000u, 0, 1297236, i);
        V_UNLOCK();
        v176 = 669;
        goto LABEL_186;
      }
      V_LOCK();
      v150 = json_string_value(v149);
      logfmt_raw(v189, 0x1000u, 0, 1295076, v150);
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
        v189);
      v151 = (const char *)json_string_value(v149);
      v152 = strcmp(v151, "TMP451");
      if ( v152 )
      {
        if ( !strcmp(v151, "LM75A") )
        {
          v152 = 1;
        }
        else if ( !strcmp(v151, "unknow") )
        {
          v152 = 2;
        }
        else
        {
          v152 = 3;
        }
      }
      v147[1] = v152;
      v153 = (_DWORD *)json_object_get(v141, "iic");
      v154 = (int)v153;
      if ( !v153 || *v153 != 3 )
      {
        v1 = v185;
        V_LOCK();
        logfmt_raw(v189, 0x1000u, 0, 1297292, i);
        V_UNLOCK();
        v176 = 678;
        goto LABEL_186;
      }
      V_LOCK();
      v155 = json_integer_value(v154);
      logfmt_raw(v189, 0x1000u, 0, 1297324, v155);
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
        v189);
      v147[5] = json_integer_value(v154);
      v156 = (_DWORD *)json_object_get(v141, "x");
      v157 = v156;
      if ( !v156 || *v156 != 2 )
      {
        v1 = v185;
        V_LOCK();
        logfmt_raw(v189, 0x1000u, 0, 1297332, i);
        V_UNLOCK();
        v176 = 687;
        goto LABEL_186;
      }
      V_LOCK();
      v158 = json_string_value(v157);
      logfmt_raw(v189, 0x1000u, 0, 1297356, v158);
      V_UNLOCK();
      v159 = 0;
      v160 = off_13C0F4;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/topol/topol.c",
        148,
        "_parse_chain_ctrlboard_sensor",
        29,
        690,
        20,
        v189);
      v161 = (const char *)json_string_value(v157);
      v162 = "air_in";
      v163 = v161;
      while ( strcmp(v163, v162) )
      {
        v164 = *v160++;
        v162 = v164;
        ++v159;
      }
      v165 = 0;
      v147[3] = v159;
      v166 = (_DWORD *)json_object_get(v141, "y");
      v167 = v166;
      if ( !v166 || *v166 != 2 )
      {
        v1 = v185;
        V_LOCK();
        logfmt_raw(v189, 0x1000u, 0, 1297364, i);
        V_UNLOCK();
        v176 = 696;
        goto LABEL_186;
      }
      V_LOCK();
      v168 = json_string_value(v167);
      logfmt_raw(v189, 0x1000u, 0, 1297388, v168);
      V_UNLOCK();
      v169 = (const char **)&unk_13C114;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/topol/topol.c",
        148,
        "_parse_chain_ctrlboard_sensor",
        29,
        699,
        20,
        v189);
      v170 = (const char *)json_string_value(v167);
      v171 = "top";
      v172 = v170;
      while ( strcmp(v172, v171) )
      {
        v173 = *v169++;
        v171 = v173;
        ++v165;
      }
      v147[4] = v165;
    }
    v1 = v185;
    v71 = *(_DWORD *)(dword_178710 + 88);
  }
  if ( (v71 & 0xFFFFFFFD) == 0 )
  {
    v72 = (_DWORD *)json_object_get(v178, "asic_sensor");
    v183 = v72;
    if ( v72 && *v72 == 1 )
    {
      V_LOCK();
      v180 = 0;
      logfmt_raw(v189, 0x1000u, 0, 1298880);
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
        v189);
      v186 = v1;
      while ( 1 )
      {
        if ( v180 >= (unsigned int)json_array_size(v183) )
        {
          v1 = v186;
          goto LABEL_105;
        }
        v73 = json_array_get(v183, v180);
        v74 = v73;
        if ( !v73 || *v73 )
          break;
        v75 = (_DWORD *)json_object_get(v73, "index");
        v76 = (int)v75;
        if ( !v75 || *v75 != 3 )
        {
          v1 = v186;
          V_LOCK();
          logfmt_raw(v189, 0x1000u, 0, 1297196, v180);
          V_UNLOCK();
          v175 = 817;
          goto LABEL_178;
        }
        V_LOCK();
        v77 = json_integer_value(v76);
        logfmt_raw(v189, 0x1000u, 0, 1297224, v77);
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
          v189);
        v78 = json_integer_value(v76);
        v79 = *(_DWORD *)(dword_178710 + 84);
        *(_DWORD *)(v79 + 24 * v78) = v78;
        v80 = (_DWORD *)(v79 + 24 * v78);
        v80[2] = 1;
        v81 = (_DWORD *)json_object_get(v74, "type");
        v82 = v81;
        if ( !v81 || *v81 != 2 )
        {
          v1 = v186;
          V_LOCK();
          logfmt_raw(v189, 0x1000u, 0, 1297236, v180);
          V_UNLOCK();
          v175 = 829;
          goto LABEL_178;
        }
        V_LOCK();
        v83 = json_string_value(v82);
        logfmt_raw(v189, 0x1000u, 0, 1295076, v83);
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
          v189);
        v84 = (const char *)json_string_value(v82);
        v85 = strcmp(v84, "TMP451");
        if ( v85 )
        {
          if ( !strcmp(v84, "LM75A") )
          {
            v85 = 1;
          }
          else if ( !strcmp(v84, "unknow") )
          {
            v85 = 2;
          }
          else
          {
            v85 = 3;
          }
        }
        v80[1] = v85;
        v86 = (_DWORD *)json_object_get(v74, "bind_asic");
        v87 = (int)v86;
        if ( !v86 || *v86 != 3 )
        {
          v1 = v186;
          V_LOCK();
          logfmt_raw(v189, 0x1000u, 0, 1297292, v180);
          V_UNLOCK();
          v175 = 838;
          goto LABEL_178;
        }
        V_LOCK();
        v88 = json_integer_value(v87);
        logfmt_raw(v189, 0x1000u, 0, 1298908, v88);
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
          v189);
        v80[5] = json_integer_value(v87);
        v89 = (_DWORD *)json_object_get(v74, "x");
        v90 = v89;
        if ( !v89 || *v89 != 2 )
        {
          v1 = v186;
          V_LOCK();
          logfmt_raw(v189, 0x1000u, 0, 1297332, v180);
          V_UNLOCK();
          v175 = 847;
          goto LABEL_178;
        }
        V_LOCK();
        v91 = json_string_value(v90);
        logfmt_raw(v189, 0x1000u, 0, 1297356, v91);
        V_UNLOCK();
        v92 = 0;
        v93 = off_13C0F4;
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/backend/topol/topol.c",
          148,
          "_parse_chain_sensor",
          19,
          850,
          20,
          v189);
        v94 = (const char *)json_string_value(v90);
        v95 = "air_in";
        v96 = v94;
        while ( strcmp(v96, v95) )
        {
          v97 = *v93++;
          v95 = v97;
          ++v92;
        }
        v98 = 0;
        v80[3] = v92;
        v99 = (_DWORD *)json_object_get(v74, "y");
        v100 = v99;
        if ( !v99 || *v99 != 2 )
        {
          v1 = v186;
          V_LOCK();
          logfmt_raw(v189, 0x1000u, 0, 1297364, v180);
          V_UNLOCK();
          v175 = 856;
          goto LABEL_178;
        }
        V_LOCK();
        v101 = json_string_value(v100);
        logfmt_raw(v189, 0x1000u, 0, 1297388, v101);
        V_UNLOCK();
        v102 = (const char **)&unk_13C114;
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/backend/topol/topol.c",
          148,
          "_parse_chain_sensor",
          19,
          859,
          20,
          v189);
        v103 = (const char *)json_string_value(v100);
        v104 = "top";
        v105 = v103;
        while ( strcmp(v105, v104) )
        {
          v106 = *v102++;
          v104 = v106;
          ++v98;
        }
        v80[4] = v98;
        ++v180;
      }
      v1 = v186;
      V_LOCK();
      logfmt_raw(v189, 0x1000u, 0, 1296288, v180);
      V_UNLOCK();
      v175 = 810;
    }
    else
    {
      V_LOCK();
      logfmt_raw(v189, 0x1000u, 0, 1298860);
      V_UNLOCK();
      v175 = 799;
    }
LABEL_178:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/topol/topol.c",
      148,
      "_parse_chain_sensor",
      19,
      v175,
      100,
      v189);
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, 1298924);
    V_UNLOCK();
    v137 = 1064;
    goto LABEL_134;
  }
LABEL_105:
  v111 = v178;
  v179 = dword_1786F0;
  v112 = (_DWORD *)json_object_get(v111, "eeprom");
  v181 = v112;
  if ( !v112 || (v113 = *v112) != 0 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, 1298960);
    V_UNLOCK();
    v174 = 760;
    goto LABEL_173;
  }
  V_LOCK();
  logfmt_raw(v189, 0x1000u, 0, 1298980);
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
    v189);
  v114 = (_DWORD *)json_object_get(v181, "type");
  v184 = v114;
  if ( !v114 || *v114 != 2 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, 1295060);
    V_UNLOCK();
    v174 = 768;
    goto LABEL_173;
  }
  V_LOCK();
  v115 = json_string_value(v184);
  logfmt_raw(v189, 0x1000u, 0, 1295076, v115);
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
    v189);
  if ( v179 > 0 )
  {
    v116 = 0;
    do
    {
      v117 = off_13C1E0;
      v118 = 0;
      v119 = (const char *)json_string_value(v184);
      v120 = "AT24C02D";
      while ( strcmp(v119, v120) )
      {
        v121 = v117[1];
        ++v117;
        v120 = v121;
        ++v118;
      }
      ++v113;
      v122 = dword_178710 + v116;
      v116 += 120;
      *(_DWORD *)(v122 + 112) = v118;
    }
    while ( v179 != v113 );
  }
  v123 = (_DWORD *)json_object_get(v181, "i2c_addr");
  v124 = (int)v123;
  if ( !v123 || *v123 != 3 )
  {
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, 1295380);
    V_UNLOCK();
    v174 = 780;
LABEL_173:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/topol/topol.c",
      148,
      "_parse_chain_eeprom",
      19,
      v174,
      100,
      v189);
    V_LOCK();
    logfmt_raw(v189, 0x1000u, 0, 1298988);
    V_UNLOCK();
    v137 = 1072;
    goto LABEL_134;
  }
  V_LOCK();
  v125 = json_integer_value(v124);
  logfmt_raw(v189, 0x1000u, 0, 1295400, v125);
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
    v189);
  if ( v179 > 0 )
  {
    v126 = 0;
    v127 = 0;
    do
    {
      ++v126;
      v128 = json_integer_value(v124);
      v129 = dword_178710 + v127;
      v127 += 120;
      *(_DWORD *)(v129 + 116) = v128;
    }
    while ( v179 != v126 );
  }
  v130 = dword_1786F0;
  if ( dword_1786F0 > 1 )
  {
    v131 = 120;
    v132 = 1;
    do
    {
      ++v132;
      v133 = (void *)(dword_178710 + v131);
      v131 += 120;
      memcpy(v133, (const void *)dword_178710, 0x78u);
    }
    while ( v130 != v132 );
  }
  if ( *((_DWORD *)v1 + 1) != -1 )
  {
    v134 = (unsigned int *)v1 + 1;
    __dmb(0xBu);
    do
    {
      v135 = __ldrex(v134);
      v136 = v135 - 1;
    }
    while ( __strex(v136, v134) );
    if ( !v136 )
      json_delete(v1);
  }
  return v177;
}
