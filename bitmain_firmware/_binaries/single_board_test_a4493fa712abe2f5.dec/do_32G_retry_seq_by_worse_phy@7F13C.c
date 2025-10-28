int __fastcall do_32G_retry_seq_by_worse_phy(int a1, int a2, int a3, int a4, int a5)
{
  int v6; // r3
  char v7; // r8
  int v8; // r5
  void (__fastcall *v9)(int, int *); // r3
  int v10; // r2
  void (__fastcall *v11)(int, int *); // r3
  void (__fastcall *v12)(int, int *); // r3
  void (__fastcall *v13)(int, int *); // r3
  void (__fastcall *v14)(int, int *); // r3
  void (__fastcall *v15)(int, int *); // r3
  void (__fastcall *v16)(int, int *); // r3
  void (__fastcall *v17)(int, int *); // r3
  void (__fastcall *v18)(int, int *); // r3
  void (__fastcall *v19)(int, int *); // r3
  void (__fastcall *v20)(int, int *); // r3
  void (__fastcall *v21)(int, int *); // r3
  void (__fastcall *v22)(int, int *); // r3
  void (__fastcall *v23)(int, int *); // r3
  void (__fastcall *v24)(int, int *); // r3
  void (__fastcall *v25)(int, int *); // r3
  void (__fastcall *v26)(int, int *); // r3
  void (__fastcall *v27)(int, int *); // r3
  void (__fastcall *v28)(int, int *); // r3
  void (__fastcall *v29)(int, int *); // r3
  void (__fastcall *v30)(int, int *); // r3
  void (__fastcall *v31)(int, int *); // r3
  void (__fastcall *v32)(int, int *); // r3
  void (__fastcall *v33)(int, int *); // r3
  void (__fastcall *v34)(int, int *); // r3
  void (__fastcall *v35)(int, int *); // r3
  void (__fastcall *v36)(int, int *); // r3
  void (__fastcall *v37)(int, int *); // r3
  void (__fastcall *v38)(int, int *); // r3
  void (__fastcall *v39)(int, int *); // r3
  void (__fastcall *v40)(int, int *); // r3
  void (__fastcall *v41)(int, int *); // r3
  void (__fastcall *v42)(int, int *); // r3
  void (__fastcall *v43)(int, int *); // r3
  void (__fastcall *v44)(int, int *); // r3
  void (__fastcall *v45)(int, int *); // r3
  void (__fastcall *v46)(int, int *); // r3
  void (__fastcall *v47)(int, int *); // r3
  void (__fastcall *v48)(int, int *); // r3
  void (__fastcall *v49)(int, int *); // r3
  void (__fastcall *v50)(int, int *); // r3
  void (__fastcall *v51)(int, int *); // r3
  void (__fastcall *v52)(int, int *); // r3
  void (__fastcall *v53)(int, int *); // r3
  void (__fastcall *v54)(int, int *); // r3
  void (__fastcall *v55)(int, int *); // r3
  void (__fastcall *v56)(int, int *); // r3
  void (__fastcall *v57)(int, int *); // r3
  void (__fastcall *v58)(int, int *); // r3
  void (__fastcall *v59)(int, int *); // r3
  void (__fastcall *v60)(int, int *); // r3
  void (__fastcall *v61)(int, int *); // r2
  void (__fastcall *v62)(int, int *); // r2
  void (__fastcall *v63)(int, int *); // r2
  void (__fastcall *v64)(int, int *); // r2
  void (__fastcall *v65)(int, int *); // r2
  void (__fastcall *v66)(int, int *); // r2
  void (__fastcall *v67)(int, int *); // r2
  void (__fastcall *v68)(int, int *); // r2
  void (__fastcall *v69)(int, int *); // r2
  void (__fastcall *v70)(int, int *); // r2
  void (__fastcall *v71)(int, int *); // r2
  void (__fastcall *v72)(int, int *); // r2
  void (__fastcall *v73)(int, int *); // r2
  void (__fastcall *v74)(int, int *); // r2
  void (__fastcall *v75)(int, int *); // r2
  void (__fastcall *v76)(int, int *); // r2
  void (__fastcall *v77)(int, int *); // r2
  void (__fastcall *v78)(int, int *); // r2
  void (__fastcall *v79)(int, int *); // r2
  void (__fastcall *v80)(int, int *); // r2
  void (__fastcall *v81)(int, int *); // r2
  void (__fastcall *v82)(int, int *); // r3
  void (__fastcall *v83)(int, int *); // r3
  void (__fastcall *v84)(int, int *); // r3
  _WORD *v86; // [sp+18h] [bp-143Ch]
  int v87; // [sp+1Ch] [bp-1438h]
  int v88; // [sp+2Ch] [bp-1428h]
  char *v89; // [sp+34h] [bp-1420h]
  int v90; // [sp+38h] [bp-141Ch]
  _DWORD v91[4]; // [sp+3Ch] [bp-1418h] BYREF
  __int16 v92; // [sp+4Ch] [bp-1408h] BYREF
  _BYTE s[1024]; // [sp+50h] [bp-1404h] BYREF
  int v94; // [sp+450h] [bp-1004h] BYREF
  int v95; // [sp+454h] [bp-1000h]
  int v96; // [sp+458h] [bp-FFCh]
  int v97; // [sp+45Ch] [bp-FF8h]

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v94, 0x1000u, 0, "%s...", "do_32G_retry_seq_by_worse_phy");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "do_32G_retry_seq_by_worse_phy",
    29,
    8645,
    60,
    &v94);
  v87 = 0;
  memset(s, 0, sizeof(s));
  v90 = 0;
  v91[1] = 100991489;
  v91[2] = 235735561;
  v91[3] = 134677248;
  v92 = 3851;
  v6 = 0;
  v89 = s;
  do
  {
    v7 = v6;
    v88 = 16 * v6;
    v86 = (_WORD *)((char *)v91 + 3);
    do
    {
      while ( 1 )
      {
        v8 = *((unsigned __int8 *)v86 + 1);
        v86 = (_WORD *)((char *)v86 + 1);
        pthread_mutex_lock(&stru_3B526C);
        logfmt_raw(
          (char *)&v94,
          0x1000u,
          0,
          "%s chip %x core %x cmn status %x",
          "do_32G_retry_seq_by_worse_phy",
          v87,
          v8,
          *(unsigned __int8 *)(a5 + v8 + v88));
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
          71,
          "do_32G_retry_seq_by_worse_phy",
          29,
          8655,
          20,
          &v94);
        if ( *(_BYTE *)(a5 + v8 + v88) )
          break;
        if ( (__int16 *)((char *)&v92 + 1) == v86 )
          goto LABEL_6;
      }
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw((char *)&v94, 0x1000u, 0, "do retry chip %02x core_id %02x", v87, v8);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
        71,
        "do_32G_retry_seq_by_worse_phy",
        29,
        8657,
        60,
        &v94);
      sprintf(v89, "%1x-%1x ", v87, v8);
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v94 = -131073;
      v9 = *(void (__fastcall **)(int, int *))(a1 + 144);
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      HIWORD(v96) = 144;
      ++v90;
      v9(a1, &v94);
      v89 += 4;
      v91[0] = 32796;
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      LOWORD(v10) = v91[0];
      v96 = 0;
      HIWORD(v10) = 0x8000;
      v97 = 0;
      v95 = 0;
      v94 = -2147450879;
      BYTE1(v96) = v7;
      v11 = *(void (__fastcall **)(int, int *))(a1 + 144);
      LOBYTE(v97) = v8;
      HIWORD(v96) = 145;
      v91[0] = v10;
      v11(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v96 = 9437184;
      v97 = 0;
      v95 = 0;
      v94 = 0x20000;
      v12 = *(void (__fastcall **)(int, int *))(a1 + 144);
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v12(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v13 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = -2147450850;
      HIWORD(v96) = 145;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v13(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v94 = -536870913;
      v14 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 144;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v14(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v94 = -2147450879;
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v15 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 145;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v15(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v96 = 9437184;
      v97 = 0;
      v95 = 0;
      v94 = 0x20000000;
      v16 = *(void (__fastcall **)(int, int *))(a1 + 144);
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v16(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v17 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = v91[0];
      HIWORD(v96) = 145;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v17(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v94 = -131073;
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v18 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 144;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v18(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v94 = -2147450879;
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v19 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 145;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v19(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v20 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 144;
      v94 = 0;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v20(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v94 = -2147450850;
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v21 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 145;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v21(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v94 = -536870913;
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v22 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 144;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v22(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v94 = -2147450879;
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v23 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 145;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v23(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v24 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 144;
      v94 = 0;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v24(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v25 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = v91[0];
      v96 = 9502720;
      v95 = 0;
      BYTE1(v96) = v7;
      v97 = (unsigned __int8)v8;
      v25(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v94 = -134217729;
      v26 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 144;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v26(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v94 = -2147450879;
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v27 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 145;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v27(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v96 = 9437184;
      v97 = 0;
      v95 = 0;
      v94 = 0x8000000;
      v28 = *(void (__fastcall **)(int, int *))(a1 + 144);
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v28(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v29 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = -2147450851;
      HIWORD(v96) = 145;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v29(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v94 = -134217729;
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v30 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 144;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v91[0] = -2147450807;
      v30(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v94 = -2147450879;
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v31 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 145;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v31(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v32 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 144;
      v94 = 0;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v32(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v94 = -2147450851;
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v33 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 145;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v33(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v96 = 9437184;
      v97 = 0;
      v95 = 0;
      v94 = -8388609;
      v34 = *(void (__fastcall **)(int, int *))(a1 + 144);
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v34(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v94 = -2147450879;
      v96 = 0;
      v35 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 145;
      v95 = 0;
      BYTE1(v96) = v7;
      v97 = (unsigned __int8)v8;
      v35(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v96 = 9437184;
      BYTE1(v96) = v7;
      v97 = (unsigned __int8)v8;
      v95 = 0;
      v94 = 0x800000;
      (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v96 = 9502720;
      v36 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v95 = 0;
      v94 = v91[0];
      BYTE1(v96) = v7;
      v97 = (unsigned __int8)v8;
      v36(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v94 = -33554433;
      v37 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 144;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v37(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v94 = -2147450879;
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v38 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 145;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v38(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v39 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 144;
      v94 = 0;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v39(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v40 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = -2147450803;
      HIWORD(v96) = 145;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v40(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v94 = -33554433;
      v41 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 144;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v41(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v94 = -2147450879;
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v42 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 145;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v42(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v96 = 9437184;
      v97 = 0;
      v95 = 0;
      v94 = 0x2000000;
      v43 = *(void (__fastcall **)(int, int *))(a1 + 144);
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v43(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v94 = -2147450803;
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v44 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 145;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v44(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v94 = -33554433;
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v45 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 144;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v45(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v94 = -2147450879;
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v46 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 145;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v46(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v47 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 144;
      v94 = 0;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v47(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v94 = -2147450803;
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v48 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 145;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v48(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v96 = 9437184;
      v97 = 0;
      v95 = 0;
      v94 = -268435457;
      v49 = *(void (__fastcall **)(int, int *))(a1 + 144);
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v49(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v94 = -2147450879;
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v50 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 145;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v50(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v96 = 9437184;
      v97 = 0;
      v95 = 0;
      v94 = 0x10000000;
      v51 = *(void (__fastcall **)(int, int *))(a1 + 144);
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v51(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v52 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = v91[0];
      v96 = 9502720;
      v95 = 0;
      BYTE1(v96) = v7;
      v97 = (unsigned __int8)v8;
      v52(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v96 = 9437184;
      v53 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v95 = 0;
      v94 = -67108865;
      BYTE1(v96) = v7;
      v97 = (unsigned __int8)v8;
      v53(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v94 = -2147450879;
      v96 = 0;
      v54 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 145;
      v95 = 0;
      BYTE1(v96) = v7;
      v97 = (unsigned __int8)v8;
      v54(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v94 = 0;
      v96 = 9437184;
      v55 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v95 = 0;
      BYTE1(v96) = v7;
      v97 = (unsigned __int8)v8;
      v55(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v94 = -2147450803;
      v96 = 9502720;
      v56 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v95 = 0;
      BYTE1(v96) = v7;
      v97 = (unsigned __int8)v8;
      v56(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v94 = -67108865;
      v96 = 0;
      v57 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 144;
      v95 = 0;
      BYTE1(v96) = v7;
      v97 = (unsigned __int8)v8;
      v57(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v94 = -2147450879;
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v58 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 145;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v58(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v96 = 9437184;
      v97 = 0;
      v95 = 0;
      v94 = 0x4000000;
      v59 = *(void (__fastcall **)(int, int *))(a1 + 144);
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v59(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v94 = -2147450803;
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v60 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 145;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v60(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v94 = -67108865;
      v96 = 9437184;
      v97 = 0;
      v95 = 0;
      v61 = *(void (__fastcall **)(int, int *))(a1 + 144);
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v91[0] = -2147450804;
      v61(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v62 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = -2147450879;
      v96 = 9502720;
      v95 = 0;
      BYTE1(v96) = v7;
      v97 = (unsigned __int8)v8;
      v62(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v63 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 144;
      v94 = 0;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v63(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v94 = -2147450803;
      v96 = 9502720;
      v97 = 0;
      v95 = 0;
      v64 = *(void (__fastcall **)(int, int *))(a1 + 144);
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v64(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v96 = 9437184;
      v97 = 0;
      v95 = 0;
      v94 = -257;
      BYTE1(v96) = v7;
      v65 = *(void (__fastcall **)(int, int *))(a1 + 144);
      LOBYTE(v97) = v8;
      v65(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v66 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = -2147450879;
      v96 = 9502720;
      v95 = 0;
      BYTE1(v96) = v7;
      v97 = (unsigned __int8)v8;
      v66(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v96 = 9437184;
      v97 = 0;
      v95 = 0;
      v94 = 256;
      v67 = *(void (__fastcall **)(int, int *))(a1 + 144);
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v67(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v68 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = v91[0];
      HIWORD(v96) = 145;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v68(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v96 = 9437184;
      v97 = 0;
      v95 = 0;
      v94 = -3;
      v69 = *(void (__fastcall **)(int, int *))(a1 + 144);
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v69(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v70 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = -2147450879;
      v96 = 9502720;
      v95 = 0;
      BYTE1(v96) = v7;
      v97 = (unsigned __int8)v8;
      v70(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v96 = 9437184;
      v97 = 0;
      v95 = 0;
      v94 = 2;
      v71 = *(void (__fastcall **)(int, int *))(a1 + 144);
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v71(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v72 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 145;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v94 = -2147450800;
      v72(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v73 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 144;
      v94 = 0;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v73(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v74 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = -2147450879;
      v96 = 9502720;
      v95 = 0;
      BYTE1(v96) = v7;
      v97 = (unsigned __int8)v8;
      v74(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      check_cmn_calibration_status_1_phy(a1, v7, v8);
      v94 = -3;
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v75 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 144;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v75(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v76 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = -2147450879;
      v96 = 9502720;
      v95 = 0;
      BYTE1(v96) = v7;
      v97 = (unsigned __int8)v8;
      v76(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v77 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 144;
      v94 = 0;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v77(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v94 = -2147450800;
      v96 = 0;
      v97 = 0;
      v95 = 0;
      v78 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 145;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v78(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v94 = -257;
      v96 = 0;
      v79 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 144;
      v95 = 0;
      BYTE1(v96) = v7;
      v97 = (unsigned __int8)v8;
      v79(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v80 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = -2147450879;
      v96 = 9502720;
      v95 = 0;
      BYTE1(v96) = v7;
      v97 = (unsigned __int8)v8;
      v80(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v81 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v96 = 9437184;
      v95 = 0;
      v94 = 0;
      BYTE1(v96) = v7;
      v97 = (unsigned __int8)v8;
      v81(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v94 = v91[0];
      v96 = 0;
      v82 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v96) = 145;
      v95 = 0;
      BYTE1(v96) = v7;
      v97 = (unsigned __int8)v8;
      v82(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v96 = 9437184;
      v97 = 0;
      v95 = 0;
      v83 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = 0;
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v83(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v96 = 9502720;
      v94 = -2147450879;
      v97 = 0;
      v95 = 0;
      v84 = *(void (__fastcall **)(int, int *))(a1 + 144);
      BYTE1(v96) = v7;
      LOBYTE(v97) = v8;
      v84(a1, &v94);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    }
    while ( (__int16 *)((char *)&v92 + 1) != v86 );
LABEL_6:
    v6 = ++v87;
  }
  while ( v87 != 8 );
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v94, 0x1000u, 0, "%s (%d) %s", "do_32G_retry_seq_by_worse_phy", v90, s);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "do_32G_retry_seq_by_worse_phy",
    29,
    8707,
    60,
    &v94);
  return 0;
}
