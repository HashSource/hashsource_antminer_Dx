int task_check_miner_status()
{
  unsigned int v0; // r11
  char *all_created_runtime; // r0
  int v2; // r11
  int v3; // r2
  bool v4; // zf
  __int64 v5; // r0
  int v6; // r0
  char *flag_from_monitor; // r0
  int v8; // r3
  char *v9; // r4
  __int64 v10; // r4
  int v11; // r3
  int *v12; // r0
  char *v13; // r0
  int *v14; // r0
  int v15; // r3
  int *v16; // r2
  int v17; // t1
  int v18; // r4
  char *v19; // r0
  int *v20; // r5
  int v21; // t1
  char *v22; // r0
  int v23; // r4
  char v24; // r9
  int v25; // r9
  unsigned __int8 v26; // r4
  int v27; // r10
  _BOOL4 v28; // r8
  int v29; // r11
  int v30; // r3
  int v31; // r5
  int v32; // r3
  int v33; // r2
  int v34; // r1
  int v35; // r2
  int v36; // r3
  int *v37; // r10
  int v38; // r1
  int v39; // r2
  int v40; // r3
  int v41; // r3
  int v42; // r4
  char *v43; // r0
  char *v44; // r9
  int v45; // t1
  int v46; // r0
  int v47; // r0
  char *v48; // r3
  char *v49; // r3
  char v50; // r2
  int v51; // r2
  int v53; // r1
  int v54; // r2
  int v55; // r3
  int *v56; // r12
  int v57; // r1
  int v58; // r2
  int v59; // r3
  int v60; // r10
  int v61; // r1
  int v62; // r2
  int v63; // r3
  int *v64; // r12
  int v65; // r1
  int v66; // r2
  int v67; // r3
  int v68; // r3
  int v69; // r1
  int v70; // r2
  int v71; // r3
  int *v72; // r12
  int v73; // r1
  int v74; // r2
  int v75; // r3
  int v76; // r1
  int v77; // r2
  int v78; // r3
  int *v79; // r12
  int v80; // r1
  int v81; // r2
  int v82; // r3
  int v83; // r5
  int v84; // r10
  int v85; // r0
  int v86; // r1
  unsigned int v87; // r4
  int v88; // [sp+20h] [bp-138Ch] BYREF
  int v89; // [sp+40h] [bp-136Ch]
  const char *v90; // [sp+44h] [bp-1368h]
  int v91; // [sp+4Ch] [bp-1360h]
  int v92; // [sp+50h] [bp-135Ch]
  int v93; // [sp+54h] [bp-1358h]
  __int64 v94; // [sp+58h] [bp-1354h]
  char *v95; // [sp+60h] [bp-134Ch]
  char *v96; // [sp+64h] [bp-1348h]
  __int64 v97; // [sp+68h] [bp-1344h]
  int v98; // [sp+70h] [bp-133Ch]
  int v99; // [sp+74h] [bp-1338h]
  __int64 v100; // [sp+78h] [bp-1334h]
  int v101; // [sp+80h] [bp-132Ch]
  int v102; // [sp+84h] [bp-1328h]
  int *v103; // [sp+88h] [bp-1324h]
  const char *v104; // [sp+8Ch] [bp-1320h]
  int v105; // [sp+90h] [bp-131Ch]
  int v106; // [sp+94h] [bp-1318h]
  int v107; // [sp+98h] [bp-1314h]
  int v108; // [sp+9Ch] [bp-1310h]
  char *v109; // [sp+A0h] [bp-130Ch]
  char *s; // [sp+A4h] [bp-1308h]
  int v111; // [sp+A8h] [bp-1304h]
  int v112; // [sp+ACh] [bp-1300h]
  int v113; // [sp+B0h] [bp-12FCh]
  int v114; // [sp+B4h] [bp-12F8h]
  int v115; // [sp+B8h] [bp-12F4h]
  int v116; // [sp+BCh] [bp-12F0h]
  int v117; // [sp+C0h] [bp-12ECh]
  int v118; // [sp+C4h] [bp-12E8h]
  int v119; // [sp+C8h] [bp-12E4h]
  int v120; // [sp+CCh] [bp-12E0h]
  int v121; // [sp+D0h] [bp-12DCh]
  int v122; // [sp+D4h] [bp-12D8h]
  int v123; // [sp+D8h] [bp-12D4h]
  const char *v124; // [sp+DCh] [bp-12D0h]
  int v125; // [sp+E0h] [bp-12CCh]
  int v126; // [sp+E4h] [bp-12C8h]
  int v127; // [sp+E8h] [bp-12C4h]
  int v128; // [sp+ECh] [bp-12C0h]
  int v129; // [sp+F8h] [bp-12B4h]
  int v130; // [sp+FCh] [bp-12B0h]
  int v131; // [sp+100h] [bp-12ACh]
  int v132; // [sp+104h] [bp-12A8h]
  int v133; // [sp+10Ch] [bp-12A0h] BYREF
  _DWORD v134[7]; // [sp+110h] [bp-129Ch] BYREF
  int v135; // [sp+12Ch] [bp-1280h]
  _DWORD v136[8]; // [sp+130h] [bp-127Ch] BYREF
  _DWORD v137[7]; // [sp+150h] [bp-125Ch] BYREF
  int v138; // [sp+16Ch] [bp-1240h]
  _DWORD v139[8]; // [sp+170h] [bp-123Ch] BYREF
  _DWORD v140[7]; // [sp+190h] [bp-121Ch] BYREF
  int v141; // [sp+1ACh] [bp-1200h]
  _DWORD v142[8]; // [sp+1B0h] [bp-11FCh] BYREF
  _DWORD v143[7]; // [sp+1D0h] [bp-11DCh] BYREF
  int v144; // [sp+1ECh] [bp-11C0h]
  _DWORD v145[8]; // [sp+1F0h] [bp-11BCh] BYREF
  _DWORD v146[7]; // [sp+210h] [bp-119Ch] BYREF
  int v147; // [sp+22Ch] [bp-1180h]
  _DWORD v148[8]; // [sp+230h] [bp-117Ch] BYREF
  _DWORD v149[7]; // [sp+250h] [bp-115Ch] BYREF
  int v150; // [sp+26Ch] [bp-1140h]
  _DWORD v151[7]; // [sp+270h] [bp-113Ch] BYREF
  int v152; // [sp+28Ch] [bp-1120h]
  _DWORD v153[7]; // [sp+290h] [bp-111Ch] BYREF
  int v154; // [sp+2ACh] [bp-1100h]
  _DWORD v155[7]; // [sp+2B0h] [bp-10FCh] BYREF
  int v156; // [sp+2CCh] [bp-10E0h]
  int v157; // [sp+2D0h] [bp-10DCh] BYREF
  int v158; // [sp+2D4h] [bp-10D8h]
  int v159; // [sp+2D8h] [bp-10D4h] BYREF
  int v160; // [sp+2DCh] [bp-10D0h]
  int v161; // [sp+2E0h] [bp-10CCh]
  int v162; // [sp+2E4h] [bp-10C8h]
  int v163; // [sp+2E8h] [bp-10C4h]
  int v164; // [sp+2ECh] [bp-10C0h]
  float v165; // [sp+2F0h] [bp-10BCh]
  float v166; // [sp+2F8h] [bp-10B4h]
  float v167; // [sp+2FCh] [bp-10B0h]
  _DWORD v168[1025]; // [sp+3A8h] [bp-1004h] BYREF

  v96 = &byte_165F8C;
  if ( !byte_165F8C )
  {
    byte_165F90 = 0;
    byte_165F91 = 0;
    byte_165F92 = 0;
    byte_165F93 = 0;
    byte_165F94 = 0;
    byte_165F95 = 0;
    byte_165F96 = 0;
    byte_165F97 = 0;
    byte_165F98 = 0;
    byte_165F8C = 1;
  }
  pthread_mutex_lock(&stru_165F9C);
  v155[0] = 0;
  v91 = (unsigned __int8)v96[12] ^ 1;
  all_created_runtime = (char *)get_all_created_runtime(v155);
  v157 = 0;
  v158 = 0;
  v159 = 0;
  if ( v155[0] <= 0 )
    v0 = 0;
  v160 = 0;
  if ( v155[0] <= 0 )
  {
    v98 = v0;
    LODWORD(v97) = v0;
    goto LABEL_36;
  }
  v109 = "chain";
  v124 = "uneffective temp exceed limit";
  v2 = 0;
  s = "error";
  v95 = all_created_runtime - 4;
  do
  {
    while ( 1 )
    {
      v6 = *((_DWORD *)v95 + 1);
      v95 += 4;
      flag_from_monitor = get_flag_from_monitor(v6);
      v8 = *((_DWORD *)flag_from_monitor + 4);
      v9 = flag_from_monitor;
      v93 = 0;
      v92 = v8 & 1;
      if ( (v8 & 1) == 0 )
      {
        v99 = 0;
        v98 = v8 & 2;
        if ( (v8 & 2) == 0 )
        {
          v112 = 0;
          v111 = v8 & 4;
          if ( (v8 & 4) != 0 )
          {
            v4 = v91 == 0;
            *((_DWORD *)flag_from_monitor + 6) |= 4u;
            if ( v4 )
              goto LABEL_13;
            v104 = "check_temp";
            v83 = v158;
            v84 = v157;
            LODWORD(v100) = "%s";
            v103 = &v88;
            goto LABEL_113;
          }
          goto LABEL_24;
        }
        v4 = v91 == 0;
        *((_DWORD *)flag_from_monitor + 6) |= 2u;
        if ( v4 )
        {
          LODWORD(v97) = v8 & 4;
          HIDWORD(v97) = v91;
          if ( (unsigned int)v97 | v91 )
          {
LABEL_12:
            *((_DWORD *)v9 + 6) |= 4u;
LABEL_13:
            v107 = v8 & 8;
            v108 = 0;
            if ( (v8 & 8) != 0 )
              *((_DWORD *)v9 + 6) |= 8u;
LABEL_15:
            v94 = v8 & 0x10;
            if ( (v8 & 0x10) == 0 )
              goto LABEL_18;
            v4 = v91 == 0;
            *((_DWORD *)v9 + 6) |= 0x10u;
            if ( v4 )
              goto LABEL_18;
            v104 = "check_temp";
            LODWORD(v100) = "%s";
            v103 = &v88;
            goto LABEL_120;
          }
          goto LABEL_24;
        }
        v104 = "check_temp";
        v83 = v158;
        v84 = v157;
        LODWORD(v100) = "%s";
        v103 = &v88;
        goto LABEL_111;
      }
      v3 = *((_DWORD *)flag_from_monitor + 6);
      v4 = v91 == 0;
      *((_DWORD *)flag_from_monitor + 6) = v3 | 1;
      if ( v4 )
        break;
      V_LOCK();
      v32 = *(_DWORD *)v95;
      v103 = &v88;
      v33 = *(_DWORD *)(v32 + 216);
      v104 = "check_temp";
      LODWORD(v100) = "%s";
      V_INT((int)v149, v109, v33);
      V_STR(v148, s, "temp lost");
      v34 = v148[1];
      v35 = v148[2];
      v36 = v148[3];
      v37 = v103;
      v90 = "check_temp";
      v89 = v100;
      *v103 = v148[0];
      v37[1] = v34;
      v37[2] = v35;
      v37[3] = v36;
      v37 += 4;
      v38 = v148[5];
      v39 = v148[6];
      v40 = v148[7];
      *v37 = v148[4];
      v37[1] = v38;
      v37[2] = v39;
      v37[3] = v40;
      logfmt_raw((char *)v168, 0x1000u, 0, v150, v149[0], v149[1], v149[2], v149[3], v149[4], v149[5], v149[6], v150);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        172,
        "check_temp",
        10,
        35,
        100,
        v168);
      v116 = 0;
      v84 = v157 | 1;
      v157 |= 1u;
      v83 = v158;
      v41 = *((_DWORD *)v9 + 4);
      v115 = v41 & 2;
      if ( (v41 & 2) != 0 )
      {
        *((_DWORD *)v9 + 6) |= 2u;
LABEL_111:
        V_LOCK();
        v84 |= 2u;
        V_INT((int)v146, v109, *(int *)(*(_DWORD *)v95 + 216));
        V_STR(v145, s, "temp too high");
        v53 = v145[1];
        v54 = v145[2];
        v55 = v145[3];
        v56 = v103;
        v90 = v104;
        v89 = v100;
        *v103 = v145[0];
        v56[1] = v53;
        v56[2] = v54;
        v56[3] = v55;
        v56 += 4;
        v57 = v145[5];
        v58 = v145[6];
        v59 = v145[7];
        *v56 = v145[4];
        v56[1] = v57;
        v56[2] = v58;
        v56[3] = v59;
        logfmt_raw((char *)v168, 0x1000u, 0, v147, v146[0], v146[1], v146[2], v146[3], v146[4], v146[5], v146[6], v147);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
          172,
          "check_temp",
          10,
          43,
          100,
          v168);
        V_LOCK();
        logfmt_raw((char *)v168, 0x1000u, 0, "Sweep error string = %s.", "P:1");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
          172,
          "check_temp",
          10,
          44,
          100,
          v168);
        v157 = v84;
        v158 = v83;
        v8 = *((_DWORD *)v9 + 4);
        v117 = v8 & 4;
        v118 = 0;
        if ( (v8 & 4) != 0 )
          goto LABEL_112;
        goto LABEL_24;
      }
      v128 = 0;
      v127 = v41 & 4;
      if ( (v41 & 4) == 0 )
      {
        v130 = 0;
        v129 = v41 & 8;
        if ( (v41 & 8) == 0 )
        {
          v132 = 0;
          v131 = v41 & 0x10;
          if ( (v41 & 0x10) == 0 )
            goto LABEL_18;
          *((_DWORD *)v9 + 6) |= 0x10u;
LABEL_120:
          v60 = v158;
          v123 = v157;
          goto LABEL_117;
        }
        *((_DWORD *)v9 + 6) |= 8u;
        goto LABEL_121;
      }
LABEL_112:
      *((_DWORD *)v9 + 6) |= 4u;
LABEL_113:
      V_LOCK();
      v123 = v84 | 4;
      v60 = v83;
      V_INT((int)v143, v109, *(int *)(*(_DWORD *)v95 + 216));
      V_STR(v142, s, "temp too low");
      v61 = v142[1];
      v62 = v142[2];
      v63 = v142[3];
      v64 = v103;
      v90 = v104;
      v89 = v100;
      *v103 = v142[0];
      v64[1] = v61;
      v64[2] = v62;
      v64[3] = v63;
      v64 += 4;
      v65 = v142[5];
      v66 = v142[6];
      v67 = v142[7];
      *v64 = v142[4];
      v64[1] = v65;
      v64[2] = v66;
      v64[3] = v67;
      logfmt_raw((char *)v168, 0x1000u, 0, v144, v143[0], v143[1], v143[2], v143[3], v143[4], v143[5], v143[6], v144);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        172,
        "check_temp",
        10,
        52,
        100,
        v168);
      V_LOCK();
      logfmt_raw((char *)v168, 0x1000u, 0, "Sweep error string = %s.", "P:2");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        172,
        "check_temp",
        10,
        53,
        100,
        v168);
      v158 = v83;
      v157 = v123;
      v8 = *((_DWORD *)v9 + 4);
      v119 = v8 & 8;
      v120 = 0;
      if ( (v8 & 8) == 0 )
        goto LABEL_15;
      *((_DWORD *)v9 + 6) |= 8u;
LABEL_115:
      V_LOCK();
      v68 = *(_DWORD *)v95;
      v123 |= 8u;
      V_INT((int)v140, v109, *(int *)(v68 + 216));
      V_STR(v139, s, "read no temp");
      v69 = v139[1];
      v70 = v139[2];
      v71 = v139[3];
      v72 = v103;
      v90 = v104;
      v89 = v100;
      *v103 = v139[0];
      v72[1] = v69;
      v72[2] = v70;
      v72[3] = v71;
      v72 += 4;
      v73 = v139[5];
      v74 = v139[6];
      v75 = v139[7];
      *v72 = v139[4];
      v72[1] = v73;
      v72[2] = v74;
      v72[3] = v75;
      logfmt_raw((char *)v168, 0x1000u, 0, v141, v140[0], v140[1], v140[2], v140[3], v140[4], v140[5], v140[6], v141);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        172,
        "check_temp",
        10,
        61,
        100,
        v168);
      v158 = v60;
      v157 = v123;
      v121 = *((_DWORD *)v9 + 4) & 0x10;
      v122 = 0;
      if ( v121 )
      {
        *((_DWORD *)v9 + 6) |= 0x10u;
LABEL_117:
        V_LOCK();
        V_INT((int)v137, v109, *(int *)(*(_DWORD *)v95 + 216));
        V_STR(v136, s, v124);
        v76 = v136[1];
        v77 = v136[2];
        v78 = v136[3];
        v79 = v103;
        v90 = v104;
        v89 = v100;
        *v103 = v136[0];
        v79[1] = v76;
        v79[2] = v77;
        v79[3] = v78;
        v79 += 4;
        v80 = v136[5];
        v81 = v136[6];
        v82 = v136[7];
        *v79 = v136[4];
        v79[1] = v80;
        v79[2] = v81;
        v79[3] = v82;
        logfmt_raw((char *)v168, 0x1000u, 0, v138, v137[0], v137[1], v137[2], v137[3], v137[4], v137[5], v137[6], v138);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
          172,
          "check_temp",
          10,
          69,
          100,
          v168);
        v158 = v60;
        v157 = v123 | 0x10;
      }
LABEL_18:
      if ( ++v2 >= v155[0] )
        goto LABEL_29;
    }
    v105 = v8 & 2;
    LODWORD(v97) = v8 & 4;
    v106 = v91;
    HIDWORD(v97) = v91;
    if ( !(v105 | v91) )
    {
      if ( v97 )
      {
        *((_DWORD *)flag_from_monitor + 6) = v3 | 5;
        goto LABEL_13;
      }
      v125 = v8 & 8;
      v126 = v91;
      if ( !(v125 | v91) )
        goto LABEL_15;
      *((_DWORD *)flag_from_monitor + 6) = v3 | 9;
      goto LABEL_27;
    }
    v5 = v97;
    *((_DWORD *)v9 + 6) = v3 | 3;
    if ( v5 )
      goto LABEL_12;
LABEL_24:
    v101 = v8 & 8;
    v102 = 0;
    if ( (v8 & 8) == 0 )
      goto LABEL_15;
    v4 = v91 == 0;
    *((_DWORD *)v9 + 6) |= 8u;
    if ( !v4 )
    {
      v104 = "check_temp";
      LODWORD(v100) = "%s";
      v103 = &v88;
LABEL_121:
      v60 = v158;
      v123 = v157;
      goto LABEL_115;
    }
LABEL_27:
    v113 = v8 & 0x10;
    v114 = 0;
    if ( (v8 & 0x10) == 0 )
      goto LABEL_18;
    ++v2;
    *((_DWORD *)v9 + 6) |= 0x10u;
  }
  while ( v2 < v155[0] );
LABEL_29:
  v0 = v157;
  v92 = (int)&v159;
  v10 = v157 & 4;
  v11 = v157 & 4;
  if ( (v157 & 4) != 0 )
    v11 = 1;
  LODWORD(v97) = v11;
  if ( (v157 & 2) != 0 )
  {
    V_LOCK();
    logfmt_raw((char *)v168, 0x1000u, 0, "Sweep error string = %s.", "P:1");
    V_UNLOCK();
    v98 = 1;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/miner_util/miner_monitor/check_miner_status.c",
      172,
      "task_check_miner_status",
      23,
      285,
      100,
      v168);
  }
  else
  {
    v98 = 0;
  }
  if ( v10 )
  {
    V_LOCK();
    logfmt_raw((char *)v168, 0x1000u, 0, "Sweep error string = %s.", "P:2");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/miner_util/miner_monitor/check_miner_status.c",
      172,
      "task_check_miner_status",
      23,
      291,
      100,
      v168);
  }
LABEL_36:
  v157 = 0;
  v12 = (int *)get_all_created_runtime(&v157);
  v13 = get_flag_from_monitor(*v12);
  if ( (*((_DWORD *)v13 + 8) & 4) == 0 || (v4 = v91 == 0, *((_DWORD *)v13 + 10) |= 4u, v4) )
  {
    v95 = 0;
  }
  else
  {
    V_LOCK();
    V_STR(v151, "error", "fan error exceed limit");
    v95 = (char *)v91;
    logfmt_raw(
      (char *)v168,
      0x1000u,
      0,
      v152,
      v151[0],
      v151[1],
      v151[2],
      v151[3],
      v151[4],
      v151[5],
      v151[6],
      v152,
      "%s",
      "check_fan_err");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/miner_util/miner_monitor/check_miner_status.c",
      172,
      "check_fan_err",
      13,
      86,
      100,
      v168);
  }
  v133 = 0;
  v14 = (int *)get_all_created_runtime(&v133);
  if ( v133 > 0 )
  {
    LOBYTE(v15) = v91;
    v16 = &v14[v133];
    do
    {
      v17 = *v14++;
      v15 = (unsigned __int8)(v15 & *(_BYTE *)(v17 + 222));
    }
    while ( v16 != v14 );
    v91 = v15;
  }
  v18 = 0;
  v153[0] = 0;
  v19 = (char *)get_all_created_runtime(v153);
  v92 = 0;
  if ( v153[0] > 0 )
  {
    v20 = (int *)(v19 - 4);
    LODWORD(v94) = "chain";
    LODWORD(v100) = v0;
    do
    {
      while ( 1 )
      {
        v21 = v20[1];
        ++v20;
        v22 = get_flag_from_monitor(v21);
        if ( (*(_DWORD *)v22 & 1) != 0 )
        {
          v4 = v91 == 0;
          *((_DWORD *)v22 + 2) |= 1u;
          if ( !v4 )
            break;
        }
        if ( ++v18 >= v153[0] )
          goto LABEL_50;
      }
      V_LOCK();
      ++v18;
      V_INT((int)v155, (char *)v94, *(int *)(*v20 + 216));
      v92 = v91;
      logfmt_raw(
        (char *)v168,
        0x1000u,
        0,
        v156,
        v155[0],
        v155[1],
        v155[2],
        v155[3],
        v155[4],
        v155[5],
        v155[6],
        v156,
        "%s low hashrate happened!",
        "check_low_hashrate");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        172,
        "check_low_hashrate",
        18,
        118,
        80,
        v168);
      read_status_from_monitor(&v157, *v20);
      V_LOCK();
      logfmt_raw((char *)v168, 0x1000u, 0, "no ratio hashrate last_5s: %f", v165 / 1000000000.0);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        172,
        "check_low_hashrate",
        18,
        121,
        80,
        v168);
      V_LOCK();
      logfmt_raw((char *)v168, 0x1000u, 0, "no ratio hashrate last_30min: %f", v166 / 1000000000.0);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        172,
        "check_low_hashrate",
        18,
        122,
        80,
        v168);
      V_LOCK();
      logfmt_raw((char *)v168, 0x1000u, 0, "no ratio hashrate lifetime: %f", v167 / 1000000000.0);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        172,
        "check_low_hashrate",
        18,
        123,
        80,
        v168);
    }
    while ( v18 < v153[0] );
LABEL_50:
    v0 = v100;
  }
  if ( !v96[40] )
  {
    clock_gettime(1, &stru_165FB8);
    v96[40] = 1;
  }
  if ( total_pools > 0 )
  {
    v23 = 0;
    do
    {
      while ( pool_tget(*(_DWORD *)(pools + 4 * v23), (unsigned __int8 *)(*(_DWORD *)(pools + 4 * v23) + 1896))
           || !pools_active )
      {
        if ( ++v23 >= total_pools )
          goto LABEL_59;
      }
      clock_gettime(1, &stru_165FB8);
      ++v23;
    }
    while ( v23 < total_pools );
  }
LABEL_59:
  clock_gettime(1, &stru_165FC0);
  v24 = v96[60];
  v94 = 1000LL * (*((_DWORD *)v96 + 13) - *((_DWORD *)v96 + 11))
      + (*((_DWORD *)v96 + 14) - *((_DWORD *)v96 + 12)) / 1000000;
  if ( v94 <= 59999 )
    v25 = v24 & 1;
  else
    v25 = 0;
  if ( v25 )
  {
    v85 = rand();
    sub_1223AC(v85, 0x78u);
    v87 = v86 + 60;
    V_LOCK();
    logfmt_raw(
      (char *)v168,
      0x1000u,
      0,
      "The pool connection recovered after the system poweroff. Exit and restart mining(%d)!",
      v87);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/miner_util/miner_monitor/check_miner_status.c",
      172,
      "check_lost_connection_to_pool",
      29,
      156,
      80,
      v168);
    sleep(v87);
    exit(1);
  }
  v26 = (unsigned __int8)v95;
  v27 = (v0 >> 3) & 1;
  if ( (v0 & 0x1E) != 0 )
    v26 = (unsigned __int8)v95 | 1;
  v28 = (v0 & 0x1A) != 0;
  v29 = (v0 >> 4) & 1;
  LODWORD(v100) = (unsigned __int8)(v92 | v26);
  if ( !v91 )
    goto LABEL_84;
  if ( v94 <= 60000 )
  {
    *((_DWORD *)v96 + 16) = 0;
LABEL_84:
    LOBYTE(v31) = v96[12];
    if ( (_BYTE)v31 )
      goto LABEL_94;
    if ( !v26 )
    {
      if ( (_DWORD)v100 )
      {
        LOBYTE(v25) = 0;
        goto LABEL_94;
      }
      goto LABEL_92;
    }
    LODWORD(v94) = (unsigned __int8)v96[12];
LABEL_87:
    v42 = 0;
    v168[0] = 0;
    v96[12] = 1;
    v43 = (char *)get_all_created_runtime(v168);
    if ( v168[0] > 0 )
    {
      v44 = v43 - 4;
      do
      {
        v45 = *((_DWORD *)v44 + 1);
        v44 += 4;
        ++v42;
        v46 = (*(int (**)(void))(v45 + 20))();
        v47 = dev_ctrl(v46);
        (*(void (__fastcall **)(_DWORD))(v47 + 28))(*(_DWORD *)(*(_DWORD *)v44 + 212));
      }
      while ( v42 < v168[0] );
    }
    power_off();
    V_LOCK();
    V_BOOL((int)v134, "poweroff", 1);
    logfmt_raw(
      (char *)v168,
      0x1000u,
      0,
      v135,
      v134[0],
      v134[1],
      v134[2],
      v134[3],
      v134[4],
      v134[5],
      v134[6],
      v135,
      "high temp %d low temp %d fan err %d read no temp %d, uneffective temp %d, lost connection too long %d",
      v98,
      (_DWORD)v97,
      v95,
      v27,
      v29,
      (_DWORD)v94);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/miner_util/miner_monitor/check_miner_status.c",
      172,
      "task_check_miner_status",
      23,
      328,
      120,
      v168);
    if ( (_DWORD)v100 || v96[12] )
      goto LABEL_93;
LABEL_92:
    LOBYTE(v25) = v31;
    v96[11] = 0;
    goto LABEL_95;
  }
  v30 = *((_DWORD *)v96 + 16);
  *((_DWORD *)v96 + 16) = v30 + 1;
  v100 = -2004318071LL * v30;
  if ( !(v30 % 60) )
  {
    V_LOCK();
    V_STR(&v157, "error", "net lost");
    v100 = 274877907LL * (int)v94;
    logfmt_raw(
      (char *)v168,
      0x1000u,
      0,
      v164,
      v157,
      v158,
      v159,
      v160,
      v161,
      v162,
      v163,
      v164,
      "lost internet for %d seconds",
      (int)v94 / 1000);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/miner_util/miner_monitor/check_miner_status.c",
      172,
      "check_lost_connection_to_pool",
      29,
      164,
      100,
      v168);
  }
  if ( (unsigned int)"age" >= v94 )
  {
    v25 = (unsigned __int8)v96[12];
    if ( v96[12] )
      goto LABEL_94;
    if ( !v26 )
    {
      LOBYTE(v25) = v91;
      goto LABEL_94;
    }
LABEL_73:
    LODWORD(v100) = v26;
    LODWORD(v94) = v25;
    LOBYTE(v31) = v26;
    goto LABEL_87;
  }
  v31 = (unsigned __int8)v96[60];
  if ( !v96[60] )
  {
    V_LOCK();
    V_STR(v153, "error", "net lost");
    logfmt_raw(
      (char *)v168,
      0x1000u,
      v31,
      v154,
      v153[0],
      v153[1],
      v153[2],
      v153[3],
      v153[4],
      v153[5],
      v153[6],
      v154,
      "lost internet %d seconds > 20 minutes, poweroff.",
      (int)v94 / 1000);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/miner_util/miner_monitor/check_miner_status.c",
      172,
      "check_lost_connection_to_pool",
      29,
      174,
      120,
      v168);
    v25 = (unsigned __int8)v96[12];
    v96[60] = 1;
    if ( v25 )
    {
      v28 = v25;
      goto LABEL_94;
    }
    LOBYTE(v31) = v91;
    LODWORD(v94) = 1;
    v28 = v91;
    LODWORD(v100) = v91;
    goto LABEL_87;
  }
  v25 = (unsigned __int8)v96[12];
  if ( !v96[12] )
  {
    if ( v26 )
      goto LABEL_73;
LABEL_93:
    LOBYTE(v25) = v31;
  }
LABEL_94:
  v96[11] = 1;
LABEL_95:
  if ( v91 )
  {
    v4 = v92 == 0;
    v48 = v96;
    v96[4] = v98;
    v48[5] = v97;
    v48[8] = (char)v95;
    if ( v4 )
      v92 = (unsigned __int8)v48[12];
    v49 = v96;
    v50 = v92;
    v96[10] = v25;
    v49[9] = v50;
    v49[6] = v27;
    v49[7] = v29;
  }
  pthread_mutex_unlock(&stru_165F9C);
  v51 = (unsigned __int8)v96[11];
  byte_163498 ^= 1u;
  if ( v51 )
  {
    green_led_off();
    if ( byte_163498 )
    {
      red_led_on();
      if ( !v28 )
        return set_pwm_by_temp();
      return fan_pwm_set_max();
    }
    red_led_off();
  }
  else
  {
    red_led_off();
    if ( byte_163498 )
      green_led_on();
    else
      green_led_off();
  }
  if ( v28 )
    return fan_pwm_set_max();
  return set_pwm_by_temp();
}
