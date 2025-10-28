int __fastcall setup_serdes_phy_x_y(int a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6)
{
  int v10; // r2
  int v11; // r12
  void (__fastcall *v12)(int, int *); // r2
  void (__fastcall *v13)(int, int *); // r2
  void (__fastcall *v14)(int, int *); // r2
  void (__fastcall *v15)(int, int *); // r2
  void (__fastcall *v16)(int, int *); // r2
  void (__fastcall *v17)(int, int *); // r2
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
  int v34; // [sp+1Ch] [bp-1018h]
  int v35; // [sp+20h] [bp-1014h]
  int v36; // [sp+30h] [bp-1004h] BYREF
  int v37; // [sp+34h] [bp-1000h]
  int v38; // [sp+38h] [bp-FFCh]
  int v39; // [sp+3Ch] [bp-FF8h]

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v36, 0x1000u, 0, "%s PHY%dL%d->PHY%dL%d", "setup_serdes_phy_x_y", a2, a4, a3, a5);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "setup_serdes_phy_x_y",
    20,
    11166,
    60,
    &v36);
  v10 = -2147422207;
  LOWORD(v11) = 105;
  if ( a6 != 8 )
    v10 = -2147483647;
  HIWORD(v11) = 0x8000;
  v38 = 0;
  if ( a6 == 8 )
    v11 = -2147422103;
  v37 = 0;
  v36 = -13;
  HIWORD(v38) = 144;
  v34 = v10;
  v39 = (unsigned __int8)a2;
  v12 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v38) = 1;
  v35 = v11;
  v12(a1, &v36);
  usleep((__useconds_t)"ead_unregister_cancel");
  v36 = v34;
  v38 = 0;
  v39 = 0;
  v13 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v37 = 0;
  LOBYTE(v38) = 1;
  HIWORD(v38) = 145;
  LOBYTE(v39) = a2;
  v13(a1, &v36);
  usleep((__useconds_t)"ead_unregister_cancel");
  v38 = 0;
  v39 = 0;
  v37 = 0;
  v36 = 8;
  v14 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v38) = 144;
  LOBYTE(v38) = 1;
  LOBYTE(v39) = a2;
  v14(a1, &v36);
  usleep((__useconds_t)"ead_unregister_cancel");
  v15 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v36 = v35;
  v37 = 0;
  v38 = 9502721;
  v39 = (unsigned __int8)a2;
  v15(a1, &v36);
  usleep((__useconds_t)"ead_unregister_cancel");
  v38 = 0;
  v39 = 0;
  v37 = 0;
  v16 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v38) = 144;
  LOBYTE(v38) = 1;
  LOBYTE(v39) = a2;
  v36 = 0;
  v16(a1, &v36);
  usleep((__useconds_t)"ead_unregister_cancel");
  v36 = v34;
  v38 = 0;
  v39 = 0;
  v17 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v37 = 0;
  LOBYTE(v38) = 1;
  HIWORD(v38) = 145;
  LOBYTE(v39) = a2;
  v17(a1, &v36);
  usleep((__useconds_t)"ead_unregister_cancel");
  v36 = -13;
  v38 = 0;
  v39 = 0;
  v18 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v37 = 0;
  LOBYTE(v38) = 1;
  HIWORD(v38) = 144;
  LOBYTE(v39) = a3;
  v18(a1, &v36);
  usleep((__useconds_t)"ead_unregister_cancel");
  v36 = v34;
  v37 = 0;
  v38 = 9502721;
  v39 = (unsigned __int8)a3;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v36);
  usleep((__useconds_t)"ead_unregister_cancel");
  v36 = 8;
  v38 = 0;
  v39 = 0;
  v19 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v37 = 0;
  LOBYTE(v38) = 1;
  HIWORD(v38) = 144;
  LOBYTE(v39) = a3;
  v19(a1, &v36);
  usleep((__useconds_t)"ead_unregister_cancel");
  v36 = v35;
  v37 = 0;
  v38 = 9502721;
  v39 = (unsigned __int8)a3;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v36);
  usleep((__useconds_t)"ead_unregister_cancel");
  v38 = 9437184;
  v39 = 0;
  v20 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v37 = 0;
  LOBYTE(v38) = 1;
  LOBYTE(v39) = a3;
  v36 = 0;
  v20(a1, &v36);
  usleep((__useconds_t)"ead_unregister_cancel");
  v36 = v34;
  v37 = 0;
  v38 = 9502721;
  v39 = (unsigned __int8)a3;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v36);
  usleep((__useconds_t)"ead_unregister_cancel");
  v37 = 0;
  v38 = 5242881;
  v39 = 255;
  v36 = (int)&loc_1FFFC + 3;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v36);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep(0x2710u);
  v37 = 0;
  v38 = 7340033;
  v39 = 0;
  v36 = 0;
  v21 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v39) = a2;
  v21(a1, &v36);
  usleep((__useconds_t)"ead_unregister_cancel");
  v37 = 0;
  v38 = 0;
  v22 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v38) = 1;
  HIWORD(v38) = 113;
  v36 = 0;
  v39 = (unsigned __int8)a2;
  v22(a1, &v36);
  usleep((__useconds_t)"ead_unregister_cancel");
  v37 = 0;
  v38 = 0;
  v23 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v38) = 1;
  HIWORD(v38) = 114;
  v36 = 0;
  v39 = (unsigned __int8)a2;
  v23(a1, &v36);
  usleep((__useconds_t)"ead_unregister_cancel");
  v37 = 0;
  v38 = 0;
  v24 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v38) = 1;
  HIWORD(v38) = 115;
  v36 = 0;
  v39 = (unsigned __int8)a2;
  v24(a1, &v36);
  usleep((__useconds_t)"ead_unregister_cancel");
  v37 = 0;
  v38 = 0;
  v25 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v38) = 1;
  HIWORD(v38) = 116;
  v36 = 0;
  v39 = (unsigned __int8)a2;
  v25(a1, &v36);
  usleep((__useconds_t)"ead_unregister_cancel");
  v37 = 0;
  v38 = 0;
  v26 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v38) = 1;
  HIWORD(v38) = 117;
  v36 = 0;
  v39 = (unsigned __int8)a2;
  v26(a1, &v36);
  usleep((__useconds_t)"ead_unregister_cancel");
  check_ref_clock_ready(a1, 0, a2);
  v38 = 7340032;
  v39 = 0;
  v27 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v37 = 0;
  LOBYTE(v38) = 1;
  LOBYTE(v39) = a3;
  v36 = 0;
  v27(a1, &v36);
  usleep((__useconds_t)"ead_unregister_cancel");
  v38 = 7405568;
  v28 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v37 = 0;
  LOBYTE(v38) = 1;
  v39 = (unsigned __int8)a3;
  v36 = 0;
  v28(a1, &v36);
  usleep((__useconds_t)"ead_unregister_cancel");
  v38 = 7471104;
  v29 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v37 = 0;
  LOBYTE(v38) = 1;
  v39 = (unsigned __int8)a3;
  v36 = 0;
  v29(a1, &v36);
  usleep((__useconds_t)"ead_unregister_cancel");
  v38 = 7536640;
  v39 = 0;
  v30 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v37 = 0;
  LOBYTE(v38) = 1;
  LOBYTE(v39) = a3;
  v36 = 0;
  v30(a1, &v36);
  usleep((__useconds_t)"ead_unregister_cancel");
  v38 = 7602176;
  v39 = 0;
  v31 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v37 = 0;
  LOBYTE(v38) = 1;
  LOBYTE(v39) = a3;
  v36 = 0;
  v31(a1, &v36);
  usleep((__useconds_t)"ead_unregister_cancel");
  v38 = 7667712;
  v39 = 0;
  v32 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v37 = 0;
  LOBYTE(v38) = 1;
  LOBYTE(v39) = a3;
  v36 = 0;
  v32(a1, &v36);
  usleep((__useconds_t)"ead_unregister_cancel");
  check_ref_clock_ready(a1, 0, a3);
  v38 = 5701633;
  v37 = 0;
  v39 = (unsigned __int8)a2;
  v36 = 255;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v36);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep(0x2710u);
  serdes_phy_bist_external_phy1tx_phy2rx(a1, 0, a6, 17, 0x10u, a2, a3, a4, a5);
  return 0;
}
