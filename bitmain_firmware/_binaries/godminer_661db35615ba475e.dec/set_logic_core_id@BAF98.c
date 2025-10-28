int __fastcall set_logic_core_id(int a1)
{
  int *v2; // r11
  int v3; // t1
  void (__fastcall *v4)(int, int *); // r3
  char v5; // r0
  void (__fastcall *v6)(int, int *); // r3
  char v7; // r1
  void (__fastcall *v8)(int, int *); // r3
  char v9; // r1
  void (__fastcall *v10)(int, int *); // r3
  char v11; // r1
  void (__fastcall *v12)(int, int *); // r3
  char v13; // r1
  void (__fastcall *v14)(int, int *); // r3
  char v15; // r1
  void (__fastcall *v16)(int, int *); // r3
  char v17; // r1
  void (__fastcall *v18)(int, int *); // r3
  char v19; // r1
  void (__fastcall *v20)(int, int *); // r3
  char v21; // r1
  void (__fastcall *v22)(int, int *); // r3
  char v23; // r1
  void (__fastcall *v24)(int, int *); // r3
  char v25; // r1
  void (__fastcall *v26)(int, int *); // r3
  char v27; // r1
  void (__fastcall *v28)(int, int *); // r3
  char v29; // r1
  void (__fastcall *v30)(int, int *); // r3
  char v31; // r1
  void (__fastcall *v32)(int, int *); // r3
  char v33; // r1
  void (__fastcall *v34)(int, int *); // r3
  char v35; // lr
  int *v36; // r11
  int v37; // t1
  void (__fastcall *v38)(int, int *); // r2
  char v39; // r0
  void (__fastcall *v40)(int, int *); // r2
  char v41; // r1
  void (__fastcall *v42)(int, int *); // r2
  char v43; // r1
  void (__fastcall *v44)(int, int *); // r2
  char v45; // r1
  void (__fastcall *v46)(int, int *); // r2
  char v47; // r1
  void (__fastcall *v48)(int, int *); // r2
  char v49; // r1
  void (__fastcall *v50)(int, int *); // r2
  char v51; // r1
  void (__fastcall *v52)(int, int *); // r2
  char v53; // r1
  void (__fastcall *v54)(int, int *); // r2
  char v55; // r1
  void (__fastcall *v56)(int, int *); // r2
  char v57; // r1
  void (__fastcall *v58)(int, int *); // r2
  char v59; // r1
  void (__fastcall *v60)(int, int *); // r2
  char v61; // r1
  void (__fastcall *v62)(int, int *); // r2
  char v63; // r1
  void (__fastcall *v64)(int, int *); // r2
  char v65; // r1
  void (__fastcall *v66)(int, int *); // r2
  char v67; // r1
  void (__fastcall *v68)(int, int *); // r2
  char v69; // r8
  int v71; // [sp+18h] [bp-100Ch] BYREF
  int v72; // [sp+1Ch] [bp-1008h] BYREF
  int v73; // [sp+20h] [bp-1004h] BYREF
  int v74; // [sp+24h] [bp-1000h]
  int v75; // [sp+28h] [bp-FFCh]
  int v76; // [sp+2Ch] [bp-FF8h]

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v73, 0x1000u, 0, "%s...", "set_logic_core_id");
  pthread_mutex_unlock(&stru_197BB8);
  v2 = &v72;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "set_logic_core_id",
    17,
    11234,
    60,
    &v73);
  v72 = 100925952;
  v71 = 117768961;
  do
  {
    v3 = *(unsigned __int8 *)v2;
    v2 = (int *)((char *)v2 + 1);
    v4 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v5 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    v74 = 0;
    v75 = 1245184;
    v76 = 0;
    v73 = 256;
    BYTE1(v75) = v5;
    v4(a1, &v73);
    usleep((__useconds_t)"ead_unregister_cancel");
    v6 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v7 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    LOBYTE(v75) = 0;
    v76 = 1;
    v73 = 257;
    BYTE1(v75) = v7;
    v74 = 0;
    HIWORD(v75) = 19;
    v6(a1, &v73);
    usleep((__useconds_t)"ead_unregister_cancel");
    v8 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v9 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    LOBYTE(v75) = 0;
    v76 = 2;
    v73 = 258;
    BYTE1(v75) = v9;
    v74 = 0;
    HIWORD(v75) = 19;
    v8(a1, &v73);
    usleep((__useconds_t)"ead_unregister_cancel");
    v10 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v11 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    LOBYTE(v75) = 0;
    v76 = 3;
    v73 = 259;
    BYTE1(v75) = v11;
    v74 = 0;
    HIWORD(v75) = 19;
    v10(a1, &v73);
    usleep((__useconds_t)"ead_unregister_cancel");
    v12 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v13 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    LOBYTE(v75) = 0;
    v76 = 4;
    v73 = 260;
    BYTE1(v75) = v13;
    v74 = 0;
    HIWORD(v75) = 19;
    v12(a1, &v73);
    usleep((__useconds_t)"ead_unregister_cancel");
    v14 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v15 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    LOBYTE(v75) = 0;
    v76 = 5;
    v73 = 261;
    BYTE1(v75) = v15;
    v74 = 0;
    HIWORD(v75) = 19;
    v14(a1, &v73);
    usleep((__useconds_t)"ead_unregister_cancel");
    v16 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v17 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    LOBYTE(v75) = 0;
    v76 = 6;
    v73 = 262;
    BYTE1(v75) = v17;
    v74 = 0;
    HIWORD(v75) = 19;
    v16(a1, &v73);
    usleep((__useconds_t)"ead_unregister_cancel");
    v18 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v19 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    LOBYTE(v75) = 0;
    v76 = 7;
    v73 = 263;
    BYTE1(v75) = v19;
    v74 = 0;
    HIWORD(v75) = 19;
    v18(a1, &v73);
    usleep((__useconds_t)"ead_unregister_cancel");
    v20 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v21 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    LOBYTE(v75) = 0;
    v76 = 8;
    v73 = 264;
    BYTE1(v75) = v21;
    v74 = 0;
    HIWORD(v75) = 19;
    v20(a1, &v73);
    usleep((__useconds_t)"ead_unregister_cancel");
    v22 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v23 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    LOBYTE(v75) = 0;
    v76 = 9;
    v73 = 265;
    BYTE1(v75) = v23;
    v74 = 0;
    HIWORD(v75) = 19;
    v22(a1, &v73);
    usleep((__useconds_t)"ead_unregister_cancel");
    v24 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v25 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    LOBYTE(v75) = 0;
    v76 = 10;
    v73 = 266;
    BYTE1(v75) = v25;
    v74 = 0;
    HIWORD(v75) = 19;
    v24(a1, &v73);
    usleep((__useconds_t)"ead_unregister_cancel");
    v26 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v27 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    LOBYTE(v75) = 0;
    v76 = 11;
    v73 = 267;
    BYTE1(v75) = v27;
    v74 = 0;
    HIWORD(v75) = 19;
    v26(a1, &v73);
    usleep((__useconds_t)"ead_unregister_cancel");
    v28 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v29 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    LOBYTE(v75) = 0;
    v76 = 12;
    v73 = 268;
    BYTE1(v75) = v29;
    v74 = 0;
    HIWORD(v75) = 19;
    v28(a1, &v73);
    usleep((__useconds_t)"ead_unregister_cancel");
    v30 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v31 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    LOBYTE(v75) = 0;
    v76 = 13;
    v73 = 269;
    BYTE1(v75) = v31;
    v74 = 0;
    HIWORD(v75) = 19;
    v30(a1, &v73);
    usleep((__useconds_t)"ead_unregister_cancel");
    v32 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v33 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    LOBYTE(v75) = 0;
    v76 = 14;
    v73 = 270;
    BYTE1(v75) = v33;
    v74 = 0;
    HIWORD(v75) = 19;
    v32(a1, &v73);
    usleep((__useconds_t)"ead_unregister_cancel");
    v34 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v35 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v3);
    LOBYTE(v75) = 0;
    v76 = 15;
    BYTE1(v75) = v35;
    v73 = 271;
    v74 = 0;
    HIWORD(v75) = 19;
    v34(a1, &v73);
    usleep((__useconds_t)"ead_unregister_cancel");
  }
  while ( v2 != &v73 );
  v36 = &v71;
  do
  {
    v37 = *(unsigned __int8 *)v36;
    v36 = (int *)((char *)v36 + 1);
    v38 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v39 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v37);
    v74 = 0;
    v75 = 1245184;
    v76 = 0;
    v73 = 263;
    BYTE1(v75) = v39;
    v38(a1, &v73);
    usleep((__useconds_t)"ead_unregister_cancel");
    v40 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v41 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v37);
    LOBYTE(v75) = 0;
    v76 = 1;
    v73 = 262;
    BYTE1(v75) = v41;
    v74 = 0;
    HIWORD(v75) = 19;
    v40(a1, &v73);
    usleep((__useconds_t)"ead_unregister_cancel");
    v42 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v43 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v37);
    LOBYTE(v75) = 0;
    v76 = 2;
    v73 = 261;
    BYTE1(v75) = v43;
    v74 = 0;
    HIWORD(v75) = 19;
    v42(a1, &v73);
    usleep((__useconds_t)"ead_unregister_cancel");
    v44 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v45 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v37);
    LOBYTE(v75) = 0;
    v76 = 3;
    v73 = 259;
    BYTE1(v75) = v45;
    v74 = 0;
    HIWORD(v75) = 19;
    v44(a1, &v73);
    usleep((__useconds_t)"ead_unregister_cancel");
    v46 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v47 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v37);
    LOBYTE(v75) = 0;
    v76 = 4;
    v73 = 260;
    BYTE1(v75) = v47;
    v74 = 0;
    HIWORD(v75) = 19;
    v46(a1, &v73);
    usleep((__useconds_t)"ead_unregister_cancel");
    v48 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v49 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v37);
    LOBYTE(v75) = 0;
    v76 = 5;
    v73 = 258;
    BYTE1(v75) = v49;
    v74 = 0;
    HIWORD(v75) = 19;
    v48(a1, &v73);
    usleep((__useconds_t)"ead_unregister_cancel");
    v50 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v51 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v37);
    LOBYTE(v75) = 0;
    v76 = 6;
    v73 = 257;
    BYTE1(v75) = v51;
    v74 = 0;
    HIWORD(v75) = 19;
    v50(a1, &v73);
    usleep((__useconds_t)"ead_unregister_cancel");
    v52 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v53 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v37);
    LOBYTE(v75) = 0;
    v76 = 7;
    v73 = 256;
    BYTE1(v75) = v53;
    v74 = 0;
    HIWORD(v75) = 19;
    v52(a1, &v73);
    usleep((__useconds_t)"ead_unregister_cancel");
    v54 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v55 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v37);
    LOBYTE(v75) = 0;
    v76 = 8;
    v73 = 271;
    BYTE1(v75) = v55;
    v74 = 0;
    HIWORD(v75) = 19;
    v54(a1, &v73);
    usleep((__useconds_t)"ead_unregister_cancel");
    v56 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v57 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v37);
    LOBYTE(v75) = 0;
    v76 = 9;
    v73 = 270;
    BYTE1(v75) = v57;
    v74 = 0;
    HIWORD(v75) = 19;
    v56(a1, &v73);
    usleep((__useconds_t)"ead_unregister_cancel");
    v58 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v59 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v37);
    LOBYTE(v75) = 0;
    v76 = 10;
    v73 = 269;
    BYTE1(v75) = v59;
    v74 = 0;
    HIWORD(v75) = 19;
    v58(a1, &v73);
    usleep((__useconds_t)"ead_unregister_cancel");
    v60 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v61 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v37);
    LOBYTE(v75) = 0;
    v76 = 11;
    v73 = 267;
    BYTE1(v75) = v61;
    v74 = 0;
    HIWORD(v75) = 19;
    v60(a1, &v73);
    usleep((__useconds_t)"ead_unregister_cancel");
    v62 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v63 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v37);
    LOBYTE(v75) = 0;
    v76 = 12;
    v73 = 268;
    BYTE1(v75) = v63;
    v74 = 0;
    HIWORD(v75) = 19;
    v62(a1, &v73);
    usleep((__useconds_t)"ead_unregister_cancel");
    v64 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v65 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v37);
    LOBYTE(v75) = 0;
    v76 = 13;
    v73 = 266;
    BYTE1(v75) = v65;
    v74 = 0;
    HIWORD(v75) = 19;
    v64(a1, &v73);
    usleep((__useconds_t)"ead_unregister_cancel");
    v66 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v67 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v37);
    LOBYTE(v75) = 0;
    v76 = 14;
    v73 = 265;
    BYTE1(v75) = v67;
    v74 = 0;
    HIWORD(v75) = 19;
    v66(a1, &v73);
    usleep((__useconds_t)"ead_unregister_cancel");
    v68 = *(void (__fastcall **)(int, int *))(a1 + 144);
    v69 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + v37);
    LOBYTE(v75) = 0;
    v76 = 15;
    v73 = 264;
    BYTE1(v75) = v69;
    v74 = 0;
    HIWORD(v75) = 19;
    v68(a1, &v73);
    usleep((__useconds_t)"ead_unregister_cancel");
  }
  while ( v36 != &v72 );
  return 0;
}
