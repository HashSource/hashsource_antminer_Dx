int __fastcall do_32G_retry_seq_by_worse_phy(int a1, int a2, int a3, int a4, int a5)
{
  int v6; // r6
  void (__fastcall *v7)(int, int *); // r2
  void (__fastcall *v8)(int, int *); // r2
  void (__fastcall *v9)(int, int *); // r2
  void (__fastcall *v10)(int, int *); // r2
  void (__fastcall *v11)(int, int *); // r2
  void (__fastcall *v12)(int, int *); // r2
  void (__fastcall *v13)(int, int *); // r2
  void (__fastcall *v14)(int, int *); // r2
  void (__fastcall *v15)(int, int *); // r2
  void (__fastcall *v16)(int, int *); // r2
  void (__fastcall *v17)(int, int *); // r2
  void (__fastcall *v18)(int, int *); // r3
  void (__fastcall *v19)(int, int *); // r2
  void (__fastcall *v20)(int, int *); // r2
  void (__fastcall *v21)(int, int *); // r2
  void (__fastcall *v22)(int, int *); // r2
  void (__fastcall *v23)(int, int *); // r2
  void (__fastcall *v24)(int, int *); // r2
  void (__fastcall *v25)(int, int *); // r2
  void (__fastcall *v26)(int, int *); // r2
  void (__fastcall *v27)(int, int *); // r2
  void (__fastcall *v28)(int, int *); // r2
  void (__fastcall *v29)(int, int *); // r2
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
  void (__fastcall *v61)(int, int *); // r3
  void (__fastcall *v62)(int, int *); // r3
  void (__fastcall *v63)(int, int *); // r3
  void (__fastcall *v64)(int, int *); // r3
  void (__fastcall *v65)(int, int *); // r3
  void (__fastcall *v66)(int, int *); // r3
  void (__fastcall *v67)(int, int *); // r3
  void (__fastcall *v68)(int, int *); // r3
  void (__fastcall *v69)(int, int *); // r3
  void (__fastcall *v70)(int, int *); // r3
  void (__fastcall *v71)(int, int *); // r3
  void (__fastcall *v72)(int, int *); // r3
  void (__fastcall *v73)(int, int *); // r3
  void (__fastcall *v74)(int, int *); // r3
  void (__fastcall *v75)(int, int *); // r3
  void (__fastcall *v76)(int, int *); // r3
  void (__fastcall *v77)(int, int *); // r3
  void (__fastcall *v78)(int, int *); // r3
  void (__fastcall *v79)(int, int *); // r3
  void (__fastcall *v80)(int, int *); // r3
  void (__fastcall *v81)(int, int *); // r3
  void (__fastcall *v82)(int, int *); // r3
  _WORD *v84; // [sp+14h] [bp-44Ch]
  int v85; // [sp+1Ch] [bp-444h]
  int v86; // [sp+2Ch] [bp-434h]
  char *v87; // [sp+34h] [bp-42Ch]
  int v88; // [sp+38h] [bp-428h]
  int v89; // [sp+3Ch] [bp-424h]
  _DWORD v90[4]; // [sp+4Ch] [bp-414h] BYREF
  __int16 v91; // [sp+5Ch] [bp-404h] BYREF
  _BYTE s[1024]; // [sp+60h] [bp-400h] BYREF
  int v93; // [sp+460h] [bp+0h] BYREF
  int v94; // [sp+464h] [bp+4h]
  int v95; // [sp+468h] [bp+8h]
  int v96; // [sp+46Ch] [bp+Ch]

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v93, 0x1000u, 0, "%s...", "do_32G_retry_seq_by_worse_phy");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "do_32G_retry_seq_by_worse_phy",
    29,
    8645,
    60,
    &v93);
  v85 = 0;
  memset(s, 0, sizeof(s));
  v90[1] = 100991489;
  v90[2] = 235735561;
  v90[3] = 134677248;
  v91 = 3851;
  v87 = s;
  v89 = 0;
  do
  {
    v86 = 16 * v85;
    v84 = (_WORD *)((char *)v90 + 3);
    do
    {
      while ( 1 )
      {
        v6 = *((unsigned __int8 *)v84 + 1);
        v84 = (_WORD *)((char *)v84 + 1);
        pthread_mutex_lock(&stru_197BB8);
        logfmt_raw(
          (char *)&v93,
          0x1000u,
          0,
          "%s chip %x core %x cmn status %x",
          "do_32G_retry_seq_by_worse_phy",
          v85,
          v6,
          *(unsigned __int8 *)(a5 + v6 + v86));
        pthread_mutex_unlock(&stru_197BB8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_eth/backend_eth.c",
          154,
          "do_32G_retry_seq_by_worse_phy",
          29,
          8655,
          20,
          &v93);
        if ( *(_BYTE *)(a5 + v6 + v86) )
          break;
        if ( (__int16 *)((char *)&v91 + 1) == v84 )
          goto LABEL_6;
      }
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw((char *)&v93, 0x1000u, 0, "do retry chip %02x core_id %02x", v85, v6);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_eth/backend_eth.c",
        154,
        "do_32G_retry_seq_by_worse_phy",
        29,
        8657,
        60,
        &v93);
      sprintf(v87, "%1x-%1x ", v85, v6);
      v95 = 0;
      v96 = 0;
      v93 = -131073;
      v7 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = 0;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      HIWORD(v95) = 144;
      ++v89;
      v90[0] = -2147450850;
      v7(a1, &v93);
      v87 += 4;
      usleep((__useconds_t)"ead_unregister_cancel");
      v95 = 0;
      v96 = 0;
      v93 = -2147450879;
      v94 = 0;
      v8 = *(void (__fastcall **)(int, int *))(a1 + 144);
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      HIWORD(v95) = 145;
      v8(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v95 = 0;
      v96 = 0;
      v93 = 0x20000;
      v9 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = 0;
      HIWORD(v95) = 144;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v9(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v95 = 0;
      v96 = 0;
      v10 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v93 = v90[0];
      v94 = 0;
      HIWORD(v95) = 145;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v10(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v95 = 0;
      v96 = 0;
      v93 = -536870913;
      v11 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = 0;
      HIWORD(v95) = 144;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v11(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v12 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v93 = -2147450879;
      v95 = 9502720;
      v94 = 0;
      BYTE1(v95) = v85;
      v96 = (unsigned __int8)v6;
      v12(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v95 = 0;
      v96 = 0;
      v93 = 0x20000000;
      v13 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = 0;
      HIWORD(v95) = 144;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v13(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v95 = 0;
      v96 = 0;
      v93 = -2147450852;
      v94 = 0;
      v14 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v95) = 145;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v14(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v15 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v93 = -131073;
      v95 = 9437184;
      v94 = 0;
      BYTE1(v95) = v85;
      v96 = (unsigned __int8)v6;
      v15(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v16 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v93 = -2147450879;
      v95 = 9502720;
      v94 = 0;
      BYTE1(v95) = v85;
      v96 = (unsigned __int8)v6;
      v16(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v95 = 0;
      v96 = 0;
      v17 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = 0;
      HIWORD(v95) = 144;
      v93 = 0;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v17(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v93 = v90[0];
      v95 = 0;
      v96 = 0;
      v18 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = 0;
      HIWORD(v95) = 145;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v18(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v93 = -536870913;
      v95 = 0;
      v96 = 0;
      v19 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = 0;
      HIWORD(v95) = 144;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v90[0] = -2147450851;
      v19(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v20 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v93 = -2147450879;
      v95 = 9502720;
      v94 = 0;
      BYTE1(v95) = v85;
      v96 = (unsigned __int8)v6;
      v20(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v95 = 0;
      v96 = 0;
      v21 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = 0;
      HIWORD(v95) = 144;
      v93 = 0;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v21(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v93 = -2147450852;
      v95 = 0;
      v96 = 0;
      v22 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = 0;
      HIWORD(v95) = 145;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v22(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v95 = 0;
      v96 = 0;
      v93 = -134217729;
      v23 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = 0;
      HIWORD(v95) = 144;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v23(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v24 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v93 = -2147450879;
      v95 = 9502720;
      v94 = 0;
      BYTE1(v95) = v85;
      v96 = (unsigned __int8)v6;
      v24(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v95 = 0;
      v96 = 0;
      v93 = 0x8000000;
      v25 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = 0;
      HIWORD(v95) = 144;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v25(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v95 = 0;
      v96 = 0;
      v26 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v93 = v90[0];
      v94 = 0;
      HIWORD(v95) = 145;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v88 = v90[0];
      v26(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v93 = -134217729;
      v95 = 0;
      v96 = 0;
      v27 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = 0;
      HIWORD(v95) = 144;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v27(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v28 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v93 = -2147450879;
      v95 = 9502720;
      v94 = 0;
      BYTE1(v95) = v85;
      v96 = (unsigned __int8)v6;
      v28(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v29 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v95 = 9437184;
      v94 = 0;
      v93 = 0;
      BYTE1(v95) = v85;
      v96 = (unsigned __int8)v6;
      v29(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v93 = v88;
      v95 = 0;
      v96 = 0;
      v30 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = 0;
      HIWORD(v95) = 145;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v30(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v95 = 0;
      v96 = 0;
      v93 = -8388609;
      v31 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = 0;
      HIWORD(v95) = 144;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v31(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v93 = -2147450879;
      v95 = 0;
      v32 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v95) = 145;
      v94 = 0;
      BYTE1(v95) = v85;
      v96 = (unsigned __int8)v6;
      v32(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v95 = 0;
      v96 = 0;
      v93 = 0x800000;
      v33 = *(void (__fastcall **)(int, int *))(a1 + 144);
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v94 = 0;
      HIWORD(v95) = 144;
      v33(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v34 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v93 = -2147450807;
      v95 = 9502720;
      v94 = 0;
      BYTE1(v95) = v85;
      v96 = (unsigned __int8)v6;
      v34(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v95 = 0;
      v96 = 0;
      v93 = -33554433;
      v35 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = 0;
      HIWORD(v95) = 144;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v35(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v93 = -2147450879;
      v95 = 0;
      v36 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v95) = 145;
      v94 = 0;
      BYTE1(v95) = v85;
      v96 = (unsigned __int8)v6;
      v36(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v95 = 0;
      v37 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v95) = 144;
      v94 = 0;
      v93 = 0;
      BYTE1(v95) = v85;
      v96 = (unsigned __int8)v6;
      v37(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v38 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v93 = -2147450803;
      v95 = 9502720;
      v94 = 0;
      BYTE1(v95) = v85;
      v96 = (unsigned __int8)v6;
      v38(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v39 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v93 = -33554433;
      v95 = 9437184;
      v94 = 0;
      BYTE1(v95) = v85;
      v96 = (unsigned __int8)v6;
      v39(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v93 = -2147450879;
      v95 = 0;
      v96 = 0;
      v40 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = 0;
      HIWORD(v95) = 145;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v40(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v95 = 0;
      v96 = 0;
      v93 = 0x2000000;
      v41 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = 0;
      HIWORD(v95) = 144;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v41(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v95 = 0;
      v96 = 0;
      v42 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v93 = -2147450803;
      v94 = 0;
      HIWORD(v95) = 145;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v42(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v43 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v93 = -33554433;
      v95 = 9437184;
      v94 = 0;
      BYTE1(v95) = v85;
      v96 = (unsigned __int8)v6;
      v43(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v93 = -2147450879;
      v95 = 0;
      v44 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v95) = 145;
      v94 = 0;
      BYTE1(v95) = v85;
      v96 = (unsigned __int8)v6;
      v44(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v95 = 0;
      v45 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v95) = 144;
      v94 = 0;
      v93 = 0;
      BYTE1(v95) = v85;
      v96 = (unsigned __int8)v6;
      v45(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v46 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v93 = -2147450803;
      v95 = 9502720;
      v94 = 0;
      BYTE1(v95) = v85;
      v96 = (unsigned __int8)v6;
      v46(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v95 = 0;
      v96 = 0;
      v93 = -268435457;
      v47 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v95) = 144;
      v94 = 0;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v47(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v93 = -2147450879;
      v95 = 0;
      v48 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v95) = 145;
      v94 = 0;
      BYTE1(v95) = v85;
      v96 = (unsigned __int8)v6;
      v48(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v95 = 0;
      v96 = 0;
      v93 = 0x10000000;
      v49 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v95) = 144;
      v94 = 0;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v49(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v50 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v93 = -2147450807;
      v95 = 9502720;
      v94 = 0;
      BYTE1(v95) = v85;
      v96 = (unsigned __int8)v6;
      v50(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v94 = 0;
      v95 = 0;
      v51 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v95) = 144;
      v93 = -67108865;
      BYTE1(v95) = v85;
      v96 = (unsigned __int8)v6;
      v51(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v94 = 0;
      v93 = -2147450879;
      v95 = 0;
      v96 = 0;
      v52 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v95) = 145;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v52(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v94 = 0;
      v93 = 0;
      v95 = 0;
      v96 = 0;
      v53 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v95) = 144;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v53(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v94 = 0;
      v54 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v93 = -2147450803;
      v95 = 9502720;
      BYTE1(v95) = v85;
      v96 = (unsigned __int8)v6;
      v54(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v93 = -67108865;
      v94 = 0;
      v55 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v95 = 9437184;
      BYTE1(v95) = v85;
      v96 = (unsigned __int8)v6;
      v55(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v93 = -2147450879;
      v95 = 0;
      v96 = 0;
      v56 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = 0;
      HIWORD(v95) = 145;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v56(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v95 = 0;
      v96 = 0;
      v93 = 0x4000000;
      v57 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = 0;
      HIWORD(v95) = 144;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v57(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v95 = 0;
      v96 = 0;
      v58 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v93 = -2147450803;
      v94 = 0;
      HIWORD(v95) = 145;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v58(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v93 = -67108865;
      v94 = 0;
      v59 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v95 = 9437184;
      BYTE1(v95) = v85;
      v96 = (unsigned __int8)v6;
      v59(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v94 = 0;
      v93 = -2147450879;
      v95 = 0;
      v96 = 0;
      v60 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v95) = 145;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v60(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v94 = 0;
      v93 = 0;
      v95 = 0;
      v96 = 0;
      v61 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v95) = 144;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v61(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v94 = 0;
      v62 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v93 = -2147450803;
      v95 = 9502720;
      BYTE1(v95) = v85;
      v96 = (unsigned __int8)v6;
      v62(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v94 = 0;
      v95 = 0;
      v63 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v95) = 144;
      v93 = -257;
      BYTE1(v95) = v85;
      v96 = (unsigned __int8)v6;
      v63(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v93 = -2147450879;
      v95 = 0;
      v96 = 0;
      v64 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = 0;
      HIWORD(v95) = 145;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v64(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v95 = 0;
      v96 = 0;
      v93 = 256;
      v65 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = 0;
      HIWORD(v95) = 144;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v65(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v95 = 0;
      v96 = 0;
      v66 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v93 = -2147450804;
      v94 = 0;
      HIWORD(v95) = 145;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v66(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v95 = 0;
      v96 = 0;
      v93 = -3;
      v67 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = 0;
      HIWORD(v95) = 144;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v67(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v93 = -2147450879;
      v95 = 0;
      v96 = 0;
      v68 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = 0;
      HIWORD(v95) = 145;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v68(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v95 = 0;
      v96 = 0;
      v93 = 2;
      v69 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = 0;
      HIWORD(v95) = 144;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v69(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v95 = 0;
      v96 = 0;
      v70 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v93 = -2147450800;
      v94 = 0;
      HIWORD(v95) = 145;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v70(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v95 = 0;
      v96 = 0;
      v71 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = 0;
      HIWORD(v95) = 144;
      v93 = 0;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v71(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v93 = -2147450879;
      v95 = 0;
      v96 = 0;
      v72 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = 0;
      HIWORD(v95) = 145;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v72(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      usleep((__useconds_t)"ead_unregister_cancel");
      check_cmn_calibration_status_1_phy(a1, v85, v6);
      v93 = -3;
      v95 = 0;
      v96 = 0;
      v73 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = 0;
      HIWORD(v95) = 144;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v73(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v93 = -2147450879;
      v95 = 0;
      v96 = 0;
      v74 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = 0;
      HIWORD(v95) = 145;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v74(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v95 = 0;
      v96 = 0;
      v75 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = 0;
      HIWORD(v95) = 144;
      v93 = 0;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v75(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v95 = 0;
      v96 = 0;
      v76 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v93 = -2147450800;
      v94 = 0;
      HIWORD(v95) = 145;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v76(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v93 = -257;
      v94 = 0;
      v77 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v95 = 9437184;
      BYTE1(v95) = v85;
      v96 = (unsigned __int8)v6;
      v77(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v94 = 0;
      v93 = -2147450879;
      v95 = 0;
      v96 = 0;
      v78 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v95) = 145;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v78(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v95 = 0;
      v96 = 0;
      v79 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v94 = 0;
      HIWORD(v95) = 144;
      v93 = 0;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v79(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v95 = 0;
      v96 = 0;
      v80 = *(void (__fastcall **)(int, int *))(a1 + 144);
      v93 = -2147450804;
      v94 = 0;
      HIWORD(v95) = 145;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v80(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v95 = 0;
      v81 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v95) = 144;
      v94 = 0;
      v93 = 0;
      BYTE1(v95) = v85;
      v96 = (unsigned __int8)v6;
      v81(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
      v94 = 0;
      v93 = -2147450879;
      v95 = 0;
      v96 = 0;
      v82 = *(void (__fastcall **)(int, int *))(a1 + 144);
      HIWORD(v95) = 145;
      BYTE1(v95) = v85;
      LOBYTE(v96) = v6;
      v82(a1, &v93);
      usleep((__useconds_t)"ead_unregister_cancel");
    }
    while ( (__int16 *)((char *)&v91 + 1) != v84 );
LABEL_6:
    ++v85;
  }
  while ( v85 != 8 );
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v93, 0x1000u, 0, "%s (%d) %s", "do_32G_retry_seq_by_worse_phy", v89, s);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "do_32G_retry_seq_by_worse_phy",
    29,
    8707,
    60,
    &v93);
  return 0;
}
