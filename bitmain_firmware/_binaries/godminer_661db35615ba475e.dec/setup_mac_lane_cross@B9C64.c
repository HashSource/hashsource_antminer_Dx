int __fastcall setup_mac_lane_cross(int a1)
{
  int *v2; // r3
  int v3; // r4
  char v4; // lr
  void (__fastcall *v5)(int, int *); // r3
  void (__fastcall *v6)(int, int *); // r3
  char v7; // r12
  void (__fastcall *v8)(int, int *); // r3
  char v9; // r12
  char v10; // r12
  void (__fastcall *v11)(int, int *); // r12
  char v12; // lr
  char v13; // lr
  char v14; // lr
  char v15; // r12
  char v16; // r12
  char v17; // r12
  char v18; // r12
  void (__fastcall *v19)(int, int *); // r12
  char v20; // r12
  void (__fastcall *v21)(int, int *); // r12
  void (__fastcall *v22)(int, int *); // r3
  char v23; // r12
  char v24; // r12
  char v25; // r12
  void (__fastcall *v26)(int, int *); // r3
  char v27; // r12
  char v28; // r12
  char v29; // r12
  void (__fastcall *v30)(int, int *); // r12
  char v31; // lr
  void (__fastcall *v32)(int, int *); // r12
  char v33; // r12
  void (__fastcall *v34)(int, int *); // r6
  char v35; // r12
  void (__fastcall *v36)(int, int *); // r6
  char v37; // r12
  void (__fastcall *v38)(int, int *); // r6
  char v39; // r12
  void (__fastcall *v40)(int, int *); // r6
  char v41; // r12
  void (__fastcall *v42)(int, int *); // r6
  char v43; // r12
  void (__fastcall *v44)(int, int *); // r6
  char v45; // r12
  void (__fastcall *v46)(int, int *); // r6
  char v47; // r12
  void (__fastcall *v48)(int, int *); // r6
  char v49; // r12
  void (__fastcall *v50)(int, int *); // r6
  char v51; // r12
  int *v52; // r3
  int v53; // r4
  char v54; // r12
  void (__fastcall *v55)(int, int *); // r7
  void (__fastcall *v56)(int, int *); // r7
  char v57; // r12
  void (__fastcall *v58)(int, int *); // r7
  char v59; // r12
  void (__fastcall *v60)(int, int *); // r7
  char v61; // r12
  void (__fastcall *v62)(int, int *); // r7
  char v63; // r12
  void (__fastcall *v64)(int, int *); // r7
  char v65; // r12
  char v66; // r12
  char v67; // r12
  char v68; // r12
  void (__fastcall *v69)(int, int *); // r12
  char v70; // r12
  void (__fastcall *v71)(int, int *); // r12
  char v72; // r12
  void (__fastcall *v73)(int, int *); // r12
  char v74; // r12
  void (__fastcall *v75)(int, int *); // r5
  char v76; // r12
  void (__fastcall *v77)(int, int *); // r5
  char v78; // r12
  void (__fastcall *v79)(int, int *); // r5
  char v80; // r12
  void (__fastcall *v81)(int, int *); // r5
  char v82; // r0
  void (__fastcall *v83)(int, int *); // r5
  char v84; // r0
  void (__fastcall *v85)(int, int *); // r5
  char v86; // r0
  void (__fastcall *v87)(int, int *); // r5
  char v88; // r12
  void (__fastcall *v89)(int, int *); // r5
  char v90; // r12
  void (__fastcall *v91)(int, int *); // r3
  char v92; // r12
  void (__fastcall *v93)(int, int *); // r3
  char v94; // r0
  char v95; // r12
  void (__fastcall *v96)(int, int *); // r3
  char v97; // r12
  void (__fastcall *v98)(int, int *); // r3
  char v99; // r12
  char v100; // r12
  void (__fastcall *v101)(int, int *); // r7
  void (__fastcall *v102)(int, int *); // r7
  char v103; // r12
  void (__fastcall *v104)(int, int *); // r7
  char v105; // r12
  void (__fastcall *v106)(int, int *); // r7
  char v107; // r12
  void (__fastcall *v108)(int, int *); // r7
  char v109; // r12
  void (__fastcall *v110)(int, int *); // r7
  char v111; // r12
  void (__fastcall *v112)(int, int *); // r7
  char v113; // r12
  void (__fastcall *v114)(int, int *); // r7
  char v115; // r12
  void (__fastcall *v116)(int, int *); // r7
  char v117; // r12
  void (__fastcall *v118)(int, int *); // r7
  char v119; // r12
  void (__fastcall *v120)(int, int *); // r7
  char v121; // r12
  void (__fastcall *v122)(int, int *); // r7
  char v123; // r12
  void (__fastcall *v124)(int, int *); // r7
  char v125; // r12
  void (__fastcall *v126)(int, int *); // r7
  char v127; // r12
  void (__fastcall *v128)(int, int *); // r7
  char v129; // r12
  int *v131; // [sp+10h] [bp-18h]
  int *v132; // [sp+14h] [bp-14h]
  int v133; // [sp+20h] [bp-8h] BYREF
  int v134; // [sp+24h] [bp-4h] BYREF
  int v135; // [sp+28h] [bp+0h] BYREF
  int v136; // [sp+2Ch] [bp+4h]
  int v137; // [sp+30h] [bp+8h]
  int v138; // [sp+34h] [bp+Ch]

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v135, 0x1000u, 0, "%s...", "setup_mac_lane_cross");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "setup_mac_lane_cross",
    20,
    11343,
    60,
    &v135);
  v133 = 117768961;
  v2 = &v134;
  v134 = 100925952;
  do
  {
    v3 = *(unsigned __int8 *)v2;
    v131 = (int *)((char *)v2 + 1);
    v4 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v135 = 1757183;
    v136 = 0;
    v137 = 0;
    BYTE1(v137) = v4;
    v138 = 3;
    v5 = *(void (__fastcall **)(int, int *))(a1 + 144);
    HIWORD(v137) = 199;
    v5(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v6 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v7 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v137 = 5439488;
    v138 = 0;
    BYTE1(v137) = v7;
    v135 = 255;
    v136 = 0;
    v6(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v8 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v9 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v137 = 5439488;
    v138 = 1;
    BYTE1(v137) = v9;
    v135 = 255;
    v136 = 0;
    v8(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v10 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v137 = 5439488;
    v138 = 2;
    BYTE1(v137) = v10;
    v136 = 0;
    v11 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v135 = 0;
    v11(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v12 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v137 = 5439488;
    v138 = 3;
    BYTE1(v137) = v12;
    v135 = 192;
    v136 = 0;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v13 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v137 = 5439488;
    v138 = 5;
    BYTE1(v137) = v13;
    v135 = 127;
    v136 = 0;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v14 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v137 = 5439488;
    v138 = 6;
    BYTE1(v137) = v14;
    v135 = 254;
    v136 = 0;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v15 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v137 = 5439488;
    v138 = 7;
    BYTE1(v137) = v15;
    v135 = 255;
    v136 = 0;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v16 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v135 = 255;
    v137 = 5439488;
    v138 = 8;
    BYTE1(v137) = v16;
    v136 = 0;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v17 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v137 = 5439488;
    v138 = 9;
    BYTE1(v137) = v17;
    v135 = 15;
    v136 = 0;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v18 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v137 = 5439488;
    v138 = 10;
    BYTE1(v137) = v18;
    v135 = 32;
    v19 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v136 = 0;
    v19(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v20 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v137 = 5439488;
    v138 = 11;
    BYTE1(v137) = v20;
    v21 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v136 = 0;
    v135 = 0;
    v21(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v22 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v23 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v137 = 5439488;
    v138 = 13;
    BYTE1(v137) = v23;
    v136 = 0;
    v135 = 0;
    v22(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v24 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v137 = 5439488;
    v138 = 14;
    v135 = 15;
    v136 = 0;
    BYTE1(v137) = v24;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v25 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v137 = 5439488;
    v138 = 15;
    BYTE1(v137) = v25;
    v136 = 0;
    v26 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v135 = 0;
    v26(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v27 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v137 = 6291456;
    v138 = 0;
    BYTE1(v137) = v27;
    v135 = 1;
    v136 = 0;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v28 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v137 = 6291456;
    v138 = 1;
    v135 = 1;
    v136 = 0;
    BYTE1(v137) = v28;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v29 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v138 = 2;
    v137 = 0;
    BYTE1(v137) = v29;
    v135 = 128;
    v136 = 0;
    v30 = *(void (__fastcall **)(int, int *))(a1 + 144);
    HIWORD(v137) = 96;
    v30(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v31 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v138 = 3;
    v137 = 6291456;
    BYTE1(v137) = v31;
    v135 = 16;
    v32 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v136 = 0;
    v32(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v33 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v138 = 5;
    v137 = 6291456;
    BYTE1(v137) = v33;
    v135 = 128;
    v136 = 0;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v34 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v35 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v138 = 6;
    v137 = 6291456;
    BYTE1(v137) = v35;
    v135 = 1;
    v136 = 0;
    v34(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v36 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v37 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v138 = 7;
    v137 = 6291456;
    BYTE1(v137) = v37;
    v135 = 1;
    v136 = 0;
    v36(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v38 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v39 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v138 = 8;
    v137 = 6291456;
    BYTE1(v137) = v39;
    v135 = 1;
    v136 = 0;
    v38(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v40 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v41 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v138 = 9;
    v137 = 6291456;
    BYTE1(v137) = v41;
    v135 = 1;
    v136 = 0;
    v40(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v42 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v43 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v138 = 10;
    v137 = 6291456;
    BYTE1(v137) = v43;
    v135 = 1;
    v136 = 0;
    v42(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v44 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v45 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v138 = 11;
    v135 = 1;
    v136 = 0;
    v137 = 6291456;
    BYTE1(v137) = v45;
    v44(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v46 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v47 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v138 = 13;
    v135 = 1;
    v136 = 0;
    v137 = 6291456;
    BYTE1(v137) = v47;
    v46(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v48 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v49 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v138 = 14;
    v135 = 1;
    v136 = 0;
    v137 = 6291456;
    BYTE1(v137) = v49;
    v48(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v50 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v51 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v137 = 6291456;
    v135 = 1;
    BYTE1(v137) = v51;
    v138 = 15;
    v136 = 0;
    v50(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v2 = v131;
  }
  while ( v131 != &v135 );
  v52 = &v133;
  do
  {
    v53 = *(unsigned __int8 *)v52;
    v132 = (int *)((char *)v52 + 1);
    v54 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v55 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v135 = (int)&loc_53970;
    v137 = 13041664;
    BYTE1(v137) = v54;
    v136 = 0;
    v138 = 0;
    v55(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v56 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v57 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v137 = 13041664;
    v138 = 1;
    v135 = (int)&loc_53970;
    BYTE1(v137) = v57;
    v136 = 0;
    v56(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v58 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v59 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v137 = 13041664;
    v138 = 3;
    BYTE1(v137) = v59;
    v135 = (int)"CY_MS\"}}";
    v136 = 0;
    v58(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v60 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v61 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v137 = 13041664;
    v138 = 6;
    BYTE1(v137) = v61;
    v135 = (int)&loc_53970;
    v136 = 0;
    v60(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v62 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v63 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v137 = 13041664;
    v138 = 7;
    BYTE1(v137) = v63;
    v135 = (int)&loc_53970;
    v136 = 0;
    v62(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v64 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v65 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v137 = 13041664;
    v138 = 8;
    BYTE1(v137) = v65;
    v135 = (int)&loc_53970;
    v136 = 0;
    v64(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v66 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v137 = 13041664;
    v138 = 9;
    BYTE1(v137) = v66;
    v135 = (int)&loc_53970;
    v136 = 0;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v67 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v137 = 13041664;
    v138 = 10;
    BYTE1(v137) = v67;
    v135 = (int)&loc_53970;
    v136 = 0;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v68 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v137 = 13041664;
    v138 = 11;
    v135 = (int)&loc_53970;
    BYTE1(v137) = v68;
    v69 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v136 = 0;
    v69(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v70 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v137 = 13041664;
    v138 = 13;
    v135 = (int)&loc_53970;
    BYTE1(v137) = v70;
    v71 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v136 = 0;
    v71(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v72 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v137 = 13041664;
    v138 = 14;
    v135 = (int)&loc_53970;
    BYTE1(v137) = v72;
    v73 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v136 = 0;
    v73(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v74 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v137 = 13041664;
    v138 = 15;
    BYTE1(v137) = v74;
    v135 = (int)&loc_53970;
    v136 = 0;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v75 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v76 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v137 = 5439488;
    v136 = 0;
    BYTE1(v137) = v76;
    v138 = 0;
    v135 = 255;
    v75(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v77 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v78 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v137 = 5439488;
    v138 = 1;
    v135 = 255;
    BYTE1(v137) = v78;
    v136 = 0;
    v77(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v79 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v80 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v137 = 5439488;
    v138 = 2;
    BYTE1(v137) = v80;
    v136 = 0;
    v135 = 0;
    v79(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v81 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v82 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v137 = 5439488;
    v138 = 3;
    v135 = 192;
    BYTE1(v137) = v82;
    v136 = 0;
    v81(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v83 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v84 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v137 = 5439488;
    v138 = 5;
    v135 = 127;
    BYTE1(v137) = v84;
    v136 = 0;
    v83(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v85 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v86 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v137 = 5439488;
    v138 = 6;
    v135 = 254;
    BYTE1(v137) = v86;
    v136 = 0;
    v85(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v87 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v88 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v137 = 5439488;
    v138 = 7;
    BYTE1(v137) = v88;
    v135 = 255;
    v136 = 0;
    v87(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v89 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v90 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v135 = 255;
    v137 = 5439488;
    v138 = 8;
    BYTE1(v137) = v90;
    v136 = 0;
    v89(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v91 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v92 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v137 = 5439488;
    v138 = 9;
    BYTE1(v137) = v92;
    v135 = 15;
    v136 = 0;
    v91(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v93 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v94 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v137 = 5439488;
    v138 = 10;
    v135 = 32;
    BYTE1(v137) = v94;
    v136 = 0;
    v93(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v95 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v137 = 5439488;
    v138 = 11;
    BYTE1(v137) = v95;
    v136 = 0;
    v96 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v135 = 0;
    v96(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v97 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v137 = 5439488;
    v138 = 13;
    BYTE1(v137) = v97;
    v136 = 0;
    v98 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v135 = 0;
    v98(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v99 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v137 = 5439488;
    v138 = 14;
    BYTE1(v137) = v99;
    v135 = 15;
    v136 = 0;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v100 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v137 = 5439488;
    v138 = 15;
    BYTE1(v137) = v100;
    v136 = 0;
    v101 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v135 = 0;
    v101(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v102 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v103 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v137 = 6291456;
    v136 = 0;
    BYTE1(v137) = v103;
    v138 = 0;
    v135 = 1;
    v102(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v104 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v105 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v137 = 6291456;
    v138 = 1;
    BYTE1(v137) = v105;
    v135 = 1;
    v136 = 0;
    v104(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v106 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v107 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v138 = 2;
    v136 = 0;
    v137 = 6291456;
    v135 = 128;
    BYTE1(v137) = v107;
    v106(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v108 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v109 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v138 = 3;
    v136 = 0;
    v137 = 6291456;
    v135 = 16;
    BYTE1(v137) = v109;
    v108(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v110 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v111 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v138 = 5;
    v135 = 128;
    v136 = 0;
    v137 = 6291456;
    BYTE1(v137) = v111;
    v110(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v112 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v113 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v138 = 6;
    v135 = 1;
    v136 = 0;
    v137 = 6291456;
    BYTE1(v137) = v113;
    v112(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v114 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v115 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v138 = 7;
    v135 = 1;
    v136 = 0;
    v137 = 6291456;
    BYTE1(v137) = v115;
    v114(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v116 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v117 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v138 = 8;
    v135 = 1;
    v136 = 0;
    v137 = 6291456;
    BYTE1(v137) = v117;
    v116(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v118 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v119 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v138 = 9;
    v135 = 1;
    v136 = 0;
    v137 = 6291456;
    BYTE1(v137) = v119;
    v118(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v120 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v121 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v138 = 10;
    v135 = 1;
    v136 = 0;
    v137 = 6291456;
    BYTE1(v137) = v121;
    v120(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v122 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v123 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v138 = 11;
    v135 = 1;
    v136 = 0;
    v137 = 6291456;
    BYTE1(v137) = v123;
    v122(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v124 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v125 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v138 = 13;
    v135 = 1;
    v136 = 0;
    v137 = 6291456;
    BYTE1(v137) = v125;
    v124(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v126 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v127 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v138 = 14;
    v135 = 1;
    v136 = 0;
    v137 = 6291456;
    BYTE1(v137) = v127;
    v126(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v128 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v129 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v53);
    v137 = 6291456;
    v135 = 1;
    BYTE1(v137) = v129;
    v136 = 0;
    v138 = 15;
    v128(a1, &v135);
    usleep((__useconds_t)"ead_unregister_cancel");
    v52 = v132;
  }
  while ( v132 != &v134 );
  usleep(0xF4240u);
  return 0;
}
