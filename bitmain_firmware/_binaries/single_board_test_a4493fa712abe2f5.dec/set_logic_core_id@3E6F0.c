int __fastcall set_logic_core_id(int a1)
{
  int *v2; // r9
  int v3; // t1
  char v4; // r2
  void (__fastcall *v5)(int, int *); // r3
  char v6; // r1
  void (__fastcall *v7)(int, int *); // r3
  char v8; // r1
  void (__fastcall *v9)(int, int *); // r3
  char v10; // r1
  void (__fastcall *v11)(int, int *); // r3
  char v12; // r1
  void (__fastcall *v13)(int, int *); // r3
  char v14; // r1
  void (__fastcall *v15)(int, int *); // r3
  char v16; // r1
  void (__fastcall *v17)(int, int *); // r3
  char v18; // r1
  void (__fastcall *v19)(int, int *); // r3
  char v20; // r1
  void (__fastcall *v21)(int, int *); // r3
  char v22; // r1
  void (__fastcall *v23)(int, int *); // r3
  char v24; // r1
  void (__fastcall *v25)(int, int *); // r3
  char v26; // r1
  void (__fastcall *v27)(int, int *); // r3
  char v28; // r1
  void (__fastcall *v29)(int, int *); // r3
  char v30; // r1
  void (__fastcall *v31)(int, int *); // r3
  char v32; // r1
  void (__fastcall *v33)(int, int *); // r3
  char v34; // r0
  int *v35; // r10
  int v36; // t1
  char v37; // r2
  void (__fastcall *v38)(int, int *); // r3
  char v39; // r1
  void (__fastcall *v40)(int, int *); // r3
  char v41; // r1
  void (__fastcall *v42)(int, int *); // r3
  char v43; // r1
  void (__fastcall *v44)(int, int *); // r3
  char v45; // r1
  void (__fastcall *v46)(int, int *); // r3
  char v47; // r1
  void (__fastcall *v48)(int, int *); // r3
  char v49; // r1
  void (__fastcall *v50)(int, int *); // r3
  char v51; // r1
  void (__fastcall *v52)(int, int *); // r3
  char v53; // r1
  void (__fastcall *v54)(int, int *); // r3
  char v55; // r1
  void (__fastcall *v56)(int, int *); // r3
  char v57; // r1
  void (__fastcall *v58)(int, int *); // r3
  char v59; // r1
  void (__fastcall *v60)(int, int *); // r3
  char v61; // r1
  void (__fastcall *v62)(int, int *); // r3
  char v63; // r1
  void (__fastcall *v64)(int, int *); // r3
  char v65; // r1
  void (__fastcall *v66)(int, int *); // r3
  char v67; // r0
  int v69; // [sp+10h] [bp-100Ch] BYREF
  int v70; // [sp+14h] [bp-1008h] BYREF
  int v71; // [sp+18h] [bp-1004h] BYREF
  int v72; // [sp+1Ch] [bp-1000h]
  int v73; // [sp+20h] [bp-FFCh]
  int v74; // [sp+24h] [bp-FF8h]

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v71, 0x1000u, 0, "%s...", "set_logic_core_id");
  pthread_mutex_unlock(&stru_3B526C);
  v2 = &v70;
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "set_logic_core_id",
    17,
    11234,
    60,
    &v71);
  v70 = 100925952;
  v69 = 117768961;
  do
  {
    v3 = *(unsigned __int8 *)v2;
    v2 = (int *)((char *)v2 + 1);
    v4 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v72 = 0;
    v73 = 1245184;
    BYTE1(v73) = v4;
    v74 = 0;
    v71 = 256;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v5 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v6 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v73 = 1245184;
    v74 = 1;
    BYTE1(v73) = v6;
    v72 = 0;
    v71 = 257;
    v5(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v7 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v8 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v73 = 1245184;
    v74 = 2;
    BYTE1(v73) = v8;
    v72 = 0;
    v71 = 258;
    v7(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v9 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v10 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v73 = 1245184;
    v74 = 3;
    BYTE1(v73) = v10;
    v72 = 0;
    v71 = 259;
    v9(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v11 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v12 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v73 = 1245184;
    v74 = 4;
    BYTE1(v73) = v12;
    v72 = 0;
    v71 = 260;
    v11(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v13 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v14 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v73 = 1245184;
    v74 = 5;
    BYTE1(v73) = v14;
    v72 = 0;
    v71 = 261;
    v13(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v15 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v16 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v73 = 1245184;
    v74 = 6;
    BYTE1(v73) = v16;
    v72 = 0;
    v71 = 262;
    v15(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v17 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v18 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v73 = 1245184;
    v74 = 7;
    BYTE1(v73) = v18;
    v72 = 0;
    v71 = 263;
    v17(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v19 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v20 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v73 = 1245184;
    v74 = 8;
    BYTE1(v73) = v20;
    v72 = 0;
    v71 = 264;
    v19(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v21 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v22 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v73 = 1245184;
    v74 = 9;
    BYTE1(v73) = v22;
    v72 = 0;
    v71 = 265;
    v21(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v23 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v24 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v73 = 1245184;
    v74 = 10;
    BYTE1(v73) = v24;
    v72 = 0;
    v71 = 266;
    v23(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v25 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v26 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v73 = 1245184;
    v74 = 11;
    BYTE1(v73) = v26;
    v72 = 0;
    v71 = 267;
    v25(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v27 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v28 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v73 = 1245184;
    v74 = 12;
    BYTE1(v73) = v28;
    v72 = 0;
    v71 = 268;
    v27(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v29 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v30 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v73 = 1245184;
    v74 = 13;
    BYTE1(v73) = v30;
    v72 = 0;
    v71 = 269;
    v29(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v31 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v32 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v73 = 1245184;
    v74 = 14;
    BYTE1(v73) = v32;
    v72 = 0;
    v71 = 270;
    v31(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v33 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v34 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v73 = 1245184;
    v74 = 15;
    BYTE1(v73) = v34;
    v72 = 0;
    v71 = 271;
    v33(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  }
  while ( v2 != &v71 );
  v35 = &v69;
  do
  {
    v36 = *(unsigned __int8 *)v35;
    v35 = (int *)((char *)v35 + 1);
    v37 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v36);
    v72 = 0;
    v73 = 1245184;
    BYTE1(v73) = v37;
    v74 = 0;
    v71 = 263;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v38 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v39 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v36);
    v73 = 1245184;
    v74 = 1;
    BYTE1(v73) = v39;
    v72 = 0;
    v71 = 262;
    v38(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v40 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v41 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v36);
    v73 = 1245184;
    v74 = 2;
    BYTE1(v73) = v41;
    v72 = 0;
    v71 = 261;
    v40(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v42 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v43 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v36);
    v73 = 1245184;
    v74 = 3;
    BYTE1(v73) = v43;
    v72 = 0;
    v71 = 259;
    v42(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v44 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v45 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v36);
    v73 = 1245184;
    v74 = 4;
    BYTE1(v73) = v45;
    v72 = 0;
    v71 = 260;
    v44(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v46 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v47 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v36);
    v73 = 1245184;
    v74 = 5;
    BYTE1(v73) = v47;
    v72 = 0;
    v71 = 258;
    v46(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v48 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v49 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v36);
    v73 = 1245184;
    v74 = 6;
    BYTE1(v73) = v49;
    v72 = 0;
    v71 = 257;
    v48(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v50 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v51 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v36);
    v73 = 1245184;
    v74 = 7;
    BYTE1(v73) = v51;
    v72 = 0;
    v71 = 256;
    v50(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v52 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v53 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v36);
    v73 = 1245184;
    v74 = 8;
    BYTE1(v73) = v53;
    v72 = 0;
    v71 = 271;
    v52(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v54 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v55 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v36);
    v73 = 1245184;
    v74 = 9;
    BYTE1(v73) = v55;
    v72 = 0;
    v71 = 270;
    v54(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v56 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v57 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v36);
    v73 = 1245184;
    v74 = 10;
    BYTE1(v73) = v57;
    v72 = 0;
    v71 = 269;
    v56(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v58 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v59 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v36);
    v73 = 1245184;
    v74 = 11;
    BYTE1(v73) = v59;
    v72 = 0;
    v71 = 267;
    v58(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v60 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v61 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v36);
    v73 = 1245184;
    v74 = 12;
    BYTE1(v73) = v61;
    v72 = 0;
    v71 = 268;
    v60(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v62 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v63 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v36);
    v73 = 1245184;
    v74 = 13;
    BYTE1(v73) = v63;
    v72 = 0;
    v71 = 266;
    v62(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v64 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v65 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v36);
    v73 = 1245184;
    v74 = 14;
    BYTE1(v73) = v65;
    v72 = 0;
    v71 = 265;
    v64(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v66 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v67 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v36);
    v73 = 1245184;
    v74 = 15;
    BYTE1(v73) = v67;
    v72 = 0;
    v71 = 264;
    v66(a1, &v71);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  }
  while ( v35 != &v70 );
  return 0;
}
