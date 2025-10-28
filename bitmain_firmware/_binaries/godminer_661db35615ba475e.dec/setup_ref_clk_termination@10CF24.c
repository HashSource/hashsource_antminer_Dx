int __fastcall setup_ref_clk_termination(int a1)
{
  void (__fastcall *v2)(int, int *); // r2
  void (__fastcall *v3)(int, int *); // r2
  void (__fastcall *v4)(int, int *); // r2
  void (__fastcall *v5)(int, int *); // r2
  void (__fastcall *v6)(int, int *); // r3
  void (__fastcall *v7)(int, int *); // r3
  void (__fastcall *v8)(int, int *); // r3
  void (__fastcall *v9)(int, int *); // r3
  void (__fastcall *v10)(int, int *); // r9
  void (__fastcall *v11)(int, int *); // r2
  int v13; // [sp+18h] [bp-1004h] BYREF
  int v14; // [sp+1Ch] [bp-1000h]
  int v15; // [sp+20h] [bp-FFCh]
  int v16; // [sp+24h] [bp-FF8h]

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v13, 0x1000u, 0, "%s...", "setup_ref_clk_termination");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "setup_ref_clk_termination",
    25,
    12423,
    60,
    &v13);
  v13 = 256;
  v15 = 0;
  v16 = 0;
  v2 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v16) = -1;
  v14 = 0;
  LOBYTE(v15) = 1;
  HIWORD(v15) = 81;
  v2(a1, &v13);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep(0x2710u);
  v15 = 0;
  v16 = 0;
  v3 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v14 = 0;
  LOBYTE(v15) = 1;
  v13 = 138;
  HIWORD(v15) = 81;
  LOBYTE(v16) = 1;
  v3(a1, &v13);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep(0x2710u);
  v15 = 0;
  v16 = 5;
  v4 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v14 = 0;
  LOBYTE(v15) = 1;
  v13 = 138;
  HIWORD(v15) = 81;
  v4(a1, &v13);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep(0x2710u);
  v15 = 0;
  v16 = 9;
  v14 = 0;
  v13 = 138;
  v5 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v15) = 81;
  LOBYTE(v15) = 1;
  v5(a1, &v13);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep(0x2710u);
  v13 = 138;
  v15 = 0;
  v16 = 0;
  v6 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v16) = 13;
  v14 = 0;
  LOBYTE(v15) = 1;
  HIWORD(v15) = 81;
  v6(a1, &v13);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep(0x2710u);
  v15 = 0;
  v16 = 2;
  v7 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v14 = 0;
  LOBYTE(v15) = 1;
  HIWORD(v15) = 81;
  v13 = 6;
  v7(a1, &v13);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep(0x2710u);
  v15 = 0;
  v16 = 0;
  v8 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v14 = 0;
  LOBYTE(v16) = 6;
  HIWORD(v15) = 81;
  v13 = 6;
  LOBYTE(v15) = 1;
  v8(a1, &v13);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep(0x2710u);
  v9 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v16 = 10;
  v14 = 0;
  v15 = 5308417;
  v13 = 6;
  v9(a1, &v13);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep(0x2710u);
  v16 = 14;
  v15 = 5308417;
  v14 = 0;
  v10 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v13 = 6;
  v10(a1, &v13);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep(0x2710u);
  v16 = 255;
  v14 = 0;
  v15 = 5505025;
  v13 = 9586980;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v13);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep(0x2710u);
  v13 = 9586980;
  v15 = 0;
  v16 = 0;
  v11 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v14 = 0;
  LOBYTE(v15) = 1;
  HIWORD(v15) = 92;
  LOBYTE(v16) = -1;
  v11(a1, &v13);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep(0x2710u);
  return 0;
}
