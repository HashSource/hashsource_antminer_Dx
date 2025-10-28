int __fastcall setup_mac_lane_cross(int a1)
{
  int *v2; // r3
  int v3; // r4
  char v4; // r2
  void (__fastcall *v5)(int, int *); // r3
  char v6; // r2
  void (__fastcall *v7)(int, int *); // r3
  char v8; // r2
  void (__fastcall *v9)(int, int *); // r3
  char v10; // r2
  char v11; // r2
  void (__fastcall *v12)(int, int *); // r3
  char v13; // r2
  void (__fastcall *v14)(int, int *); // r3
  char v15; // r2
  void (__fastcall *v16)(int, int *); // r3
  char v17; // r2
  void (__fastcall *v18)(int, int *); // r3
  char v19; // r2
  void (__fastcall *v20)(int, int *); // r3
  char v21; // r2
  void (__fastcall *v22)(int, int *); // r3
  char v23; // r2
  void (__fastcall *v24)(int, int *); // r3
  char v25; // r2
  void (__fastcall *v26)(int, int *); // r3
  char v27; // r2
  void (__fastcall *v28)(int, int *); // r3
  char v29; // r2
  void (__fastcall *v30)(int, int *); // r3
  char v31; // r2
  char v32; // r2
  void (__fastcall *v33)(int, int *); // r3
  char v34; // r2
  void (__fastcall *v35)(int, int *); // r3
  char v36; // r2
  char v37; // r12
  void (__fastcall *v38)(int, int *); // r3
  char v39; // r2
  void (__fastcall *v40)(int, int *); // r5
  char v41; // r2
  void (__fastcall *v42)(int, int *); // r5
  char v43; // r2
  void (__fastcall *v44)(int, int *); // r5
  char v45; // r2
  void (__fastcall *v46)(int, int *); // r5
  char v47; // r2
  void (__fastcall *v48)(int, int *); // r5
  char v49; // r2
  void (__fastcall *v50)(int, int *); // r5
  char v51; // r2
  void (__fastcall *v52)(int, int *); // r5
  char v53; // r2
  void (__fastcall *v54)(int, int *); // r5
  char v55; // r2
  void (__fastcall *v56)(int, int *); // r5
  char v57; // r2
  int *v58; // r3
  int v59; // r6
  void (__fastcall *v60)(int, int *); // r7
  char v61; // r2
  void (__fastcall *v62)(int, int *); // r7
  char v63; // r2
  void (__fastcall *v64)(int, int *); // r7
  char v65; // r2
  void (__fastcall *v66)(int, int *); // r7
  char v67; // r2
  void (__fastcall *v68)(int, int *); // r7
  char v69; // r2
  void (__fastcall *v70)(int, int *); // r7
  char v71; // r2
  char v72; // r2
  char v73; // r2
  char v74; // r2
  void (__fastcall *v75)(int, int *); // r2
  char v76; // r2
  char v77; // r2
  char v78; // r2
  void (__fastcall *v79)(int, int *); // r4
  char v80; // r2
  void (__fastcall *v81)(int, int *); // r4
  char v82; // r2
  void (__fastcall *v83)(int, int *); // r4
  char v84; // r2
  void (__fastcall *v85)(int, int *); // r3
  void (__fastcall *v86)(int, int *); // r3
  void (__fastcall *v87)(int, int *); // r3
  void (__fastcall *v88)(int, int *); // r4
  char v89; // r2
  void (__fastcall *v90)(int, int *); // r4
  char v91; // r2
  char v92; // r2
  char v93; // r12
  void (__fastcall *v94)(int, int *); // r3
  char v95; // r2
  void (__fastcall *v96)(int, int *); // r3
  char v97; // r2
  void (__fastcall *v98)(int, int *); // r3
  char v99; // r2
  void (__fastcall *v100)(int, int *); // r3
  char v101; // r2
  void (__fastcall *v102)(int, int *); // r7
  char v103; // r2
  void (__fastcall *v104)(int, int *); // r7
  char v105; // r2
  void (__fastcall *v106)(int, int *); // r7
  char v107; // r2
  void (__fastcall *v108)(int, int *); // r3
  char v109; // r2
  void (__fastcall *v110)(int, int *); // r7
  char v111; // r2
  void (__fastcall *v112)(int, int *); // r7
  char v113; // r2
  void (__fastcall *v114)(int, int *); // r7
  char v115; // r2
  void (__fastcall *v116)(int, int *); // r7
  char v117; // r2
  void (__fastcall *v118)(int, int *); // r7
  char v119; // r2
  void (__fastcall *v120)(int, int *); // r7
  char v121; // r2
  void (__fastcall *v122)(int, int *); // r7
  char v123; // r2
  void (__fastcall *v124)(int, int *); // r7
  char v125; // r2
  void (__fastcall *v126)(int, int *); // r7
  char v127; // r2
  void (__fastcall *v128)(int, int *); // r7
  char v129; // r2
  int *v131; // [sp+10h] [bp-101Ch]
  int *v132; // [sp+14h] [bp-1018h]
  int v133; // [sp+20h] [bp-100Ch] BYREF
  int v134; // [sp+24h] [bp-1008h] BYREF
  int v135; // [sp+28h] [bp-1004h] BYREF
  int v136; // [sp+2Ch] [bp-1000h]
  int v137; // [sp+30h] [bp-FFCh]
  int v138; // [sp+34h] [bp-FF8h]

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v135, 0x1000u, 0, "%s...", "setup_mac_lane_cross");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
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
    v136 = 0;
    v137 = 13041664;
    v138 = 3;
    v135 = (int)&unk_1ACFFF;
    BYTE1(v137) = v4;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v5 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v6 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v136 = 0;
    v137 = 5439488;
    v138 = 0;
    BYTE1(v137) = v6;
    v135 = 255;
    v5(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v7 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v8 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v136 = 0;
    v137 = 5439488;
    v138 = 1;
    BYTE1(v137) = v8;
    v135 = 255;
    v7(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v9 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v10 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v136 = 0;
    v137 = 5439488;
    v138 = 2;
    BYTE1(v137) = v10;
    v135 = 0;
    v9(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v11 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v136 = 0;
    v137 = 5439488;
    v138 = 3;
    BYTE1(v137) = v11;
    v135 = 192;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v12 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v13 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v136 = 0;
    v137 = 5439488;
    v138 = 5;
    BYTE1(v137) = v13;
    v135 = 127;
    v12(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v14 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v15 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v136 = 0;
    v137 = 5439488;
    v138 = 6;
    BYTE1(v137) = v15;
    v135 = 254;
    v14(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v16 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v17 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v136 = 0;
    v137 = 5439488;
    v138 = 7;
    BYTE1(v137) = v17;
    v135 = 255;
    v16(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v18 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v19 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v136 = 0;
    v137 = 5439488;
    v138 = 8;
    v135 = 255;
    BYTE1(v137) = v19;
    v18(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v20 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v21 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v136 = 0;
    v137 = 5439488;
    v138 = 9;
    BYTE1(v137) = v21;
    v135 = 15;
    v20(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v22 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v23 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v136 = 0;
    v137 = 5439488;
    v138 = 10;
    BYTE1(v137) = v23;
    v135 = 32;
    v22(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v24 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v25 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v136 = 0;
    v137 = 5439488;
    v138 = 11;
    BYTE1(v137) = v25;
    v135 = 0;
    v24(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v26 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v27 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v136 = 0;
    v137 = 5439488;
    v138 = 13;
    BYTE1(v137) = v27;
    v135 = 0;
    v26(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v28 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v29 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v136 = 0;
    v137 = 5439488;
    v138 = 14;
    v135 = 15;
    BYTE1(v137) = v29;
    v28(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v30 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v31 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v136 = 0;
    v137 = 5439488;
    v138 = 15;
    BYTE1(v137) = v31;
    v135 = 0;
    v30(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v32 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v136 = 0;
    v137 = 6291456;
    v138 = 0;
    BYTE1(v137) = v32;
    v135 = 1;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v33 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v34 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v136 = 0;
    v137 = 6291456;
    v138 = 1;
    BYTE1(v137) = v34;
    v135 = 1;
    v33(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v35 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v36 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v136 = 0;
    v137 = 6291456;
    v138 = 2;
    BYTE1(v137) = v36;
    v135 = 128;
    v35(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v37 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v136 = 0;
    v137 = 6291456;
    v138 = 3;
    BYTE1(v137) = v37;
    v135 = 16;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v38 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v39 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v136 = 0;
    v137 = 6291456;
    v138 = 5;
    BYTE1(v137) = v39;
    v135 = 128;
    v38(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v40 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v41 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v136 = 0;
    v137 = 6291456;
    v138 = 6;
    BYTE1(v137) = v41;
    v135 = 1;
    v40(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v42 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v43 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v136 = 0;
    v137 = 6291456;
    v138 = 7;
    BYTE1(v137) = v43;
    v135 = 1;
    v42(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v44 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v45 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v136 = 0;
    v137 = 6291456;
    v138 = 8;
    BYTE1(v137) = v45;
    v135 = 1;
    v44(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v46 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v47 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v136 = 0;
    v137 = 6291456;
    v138 = 9;
    BYTE1(v137) = v47;
    v135 = 1;
    v46(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v48 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v49 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v136 = 0;
    v137 = 6291456;
    v138 = 10;
    BYTE1(v137) = v49;
    v135 = 1;
    v48(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v50 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v51 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v136 = 0;
    v137 = 6291456;
    v138 = 11;
    BYTE1(v137) = v51;
    v135 = 1;
    v50(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v52 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v53 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v136 = 0;
    v137 = 6291456;
    v138 = 13;
    BYTE1(v137) = v53;
    v135 = 1;
    v52(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v54 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v55 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v136 = 0;
    v137 = 6291456;
    v138 = 14;
    BYTE1(v137) = v55;
    v135 = 1;
    v54(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v56 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v57 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v136 = 0;
    v137 = 6291456;
    v138 = 15;
    BYTE1(v137) = v57;
    v135 = 1;
    v56(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v2 = v131;
  }
  while ( v131 != &v135 );
  v58 = &v133;
  do
  {
    v59 = *(unsigned __int8 *)v58;
    v60 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v132 = (int *)((char *)v58 + 1);
    v61 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 13041664;
    v138 = 0;
    BYTE1(v137) = v61;
    v135 = (int)&loc_53970;
    v60(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v62 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v63 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 13041664;
    v138 = 1;
    BYTE1(v137) = v63;
    v135 = (int)&loc_53970;
    v62(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v64 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v65 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 13041664;
    v138 = 3;
    BYTE1(v137) = v65;
    v135 = 1527807;
    v64(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v66 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v67 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 13041664;
    v138 = 6;
    BYTE1(v137) = v67;
    v135 = (int)&loc_53970;
    v66(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v68 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v69 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 13041664;
    v138 = 7;
    BYTE1(v137) = v69;
    v135 = (int)&loc_53970;
    v68(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v70 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v71 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 13041664;
    v138 = 8;
    BYTE1(v137) = v71;
    v135 = (int)&loc_53970;
    v70(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v72 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 13041664;
    v138 = 9;
    v135 = (int)&loc_53970;
    BYTE1(v137) = v72;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v73 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 13041664;
    v138 = 10;
    BYTE1(v137) = v73;
    v135 = (int)&loc_53970;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v74 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 0;
    v138 = 11;
    BYTE1(v137) = v74;
    v75 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v135 = (int)&loc_53970;
    HIWORD(v137) = 199;
    v75(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v76 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 13041664;
    v138 = 13;
    v135 = (int)&loc_53970;
    BYTE1(v137) = v76;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v77 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 13041664;
    v138 = 14;
    v135 = (int)&loc_53970;
    BYTE1(v137) = v77;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v78 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 13041664;
    v138 = 15;
    BYTE1(v137) = v78;
    v135 = (int)&loc_53970;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v79 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v80 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 5439488;
    v138 = 0;
    BYTE1(v137) = v80;
    v135 = 255;
    v79(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v81 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v82 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 5439488;
    v138 = 1;
    BYTE1(v137) = v82;
    v135 = 255;
    v81(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v83 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v84 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 5439488;
    v138 = 2;
    BYTE1(v137) = v84;
    v135 = 0;
    v83(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v85 = *(void (__fastcall **)(int, int *))(a1 + 144);
    LOBYTE(v83) = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 5439488;
    v138 = 3;
    v135 = 192;
    BYTE1(v137) = (_BYTE)v83;
    v85(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v86 = *(void (__fastcall **)(int, int *))(a1 + 144);
    LOBYTE(v83) = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 5439488;
    v138 = 5;
    BYTE1(v137) = (_BYTE)v83;
    v135 = 127;
    v86(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v87 = *(void (__fastcall **)(int, int *))(a1 + 144);
    LOBYTE(v83) = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 5439488;
    v138 = 6;
    v135 = 254;
    BYTE1(v137) = (_BYTE)v83;
    v87(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v88 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v89 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 5439488;
    v138 = 7;
    BYTE1(v137) = v89;
    v135 = 255;
    v88(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v90 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v91 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 5439488;
    v138 = 8;
    v135 = 255;
    BYTE1(v137) = v91;
    v90(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v92 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 5439488;
    v138 = 9;
    BYTE1(v137) = v92;
    v135 = 15;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v93 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 5439488;
    v138 = 10;
    BYTE1(v137) = v93;
    v135 = 32;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v94 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v95 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 5439488;
    v138 = 11;
    BYTE1(v137) = v95;
    v135 = 0;
    v94(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v96 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v97 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 5439488;
    v138 = 13;
    BYTE1(v137) = v97;
    v135 = 0;
    v96(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v98 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v99 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 5439488;
    v138 = 14;
    BYTE1(v137) = v99;
    v135 = 15;
    v98(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v100 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v101 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 5439488;
    v138 = 15;
    BYTE1(v137) = v101;
    v135 = 0;
    v100(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v102 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v103 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 6291456;
    v138 = 0;
    BYTE1(v137) = v103;
    v135 = 1;
    v102(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v104 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v105 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 6291456;
    v138 = 1;
    BYTE1(v137) = v105;
    v135 = 1;
    v104(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v106 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v107 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 6291456;
    v138 = 2;
    BYTE1(v137) = v107;
    v135 = 128;
    v106(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v108 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v109 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 6291456;
    v138 = 3;
    BYTE1(v137) = v109;
    v135 = 16;
    v108(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v110 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v111 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 6291456;
    v138 = 5;
    BYTE1(v137) = v111;
    v135 = 128;
    v110(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v112 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v113 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 6291456;
    v138 = 6;
    BYTE1(v137) = v113;
    v135 = 1;
    v112(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v114 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v115 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 6291456;
    v138 = 7;
    v135 = 1;
    BYTE1(v137) = v115;
    v114(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v116 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v117 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 6291456;
    v138 = 8;
    BYTE1(v137) = v117;
    v135 = 1;
    v116(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v118 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v119 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 6291456;
    v138 = 9;
    v135 = 1;
    BYTE1(v137) = v119;
    v118(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v120 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v121 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 6291456;
    v138 = 10;
    BYTE1(v137) = v121;
    v135 = 1;
    v120(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v122 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v123 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 6291456;
    v138 = 11;
    BYTE1(v137) = v123;
    v135 = 1;
    v122(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v124 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v125 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 6291456;
    v138 = 13;
    BYTE1(v137) = v125;
    v135 = 1;
    v124(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v126 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v127 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 6291456;
    v138 = 14;
    BYTE1(v137) = v127;
    v135 = 1;
    v126(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v128 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v129 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v59);
    v136 = 0;
    v137 = 6291456;
    v138 = 15;
    BYTE1(v137) = v129;
    v135 = 1;
    v128(a1, &v135);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v58 = v132;
  }
  while ( v132 != &v134 );
  usleep(0xF4240u);
  return 0;
}
