int __fastcall setup_ref_clk_termination(int a1)
{
  void (__fastcall *v2)(int, int *); // r3
  void (__fastcall *v3)(int, int *); // r3
  void (__fastcall *v4)(int, int *); // r3
  void (__fastcall *v5)(int, int *); // r3
  void (__fastcall *v6)(int, int *); // r3
  void (__fastcall *v7)(int, int *); // r3
  void (__fastcall *v8)(int, int *); // r3
  void (__fastcall *v9)(int, int *); // r3
  void (__fastcall *v10)(int, int *); // r3
  void (__fastcall *v11)(int, int *); // r3
  int v13; // [sp+10h] [bp-1004h] BYREF
  int v14; // [sp+14h] [bp-1000h]
  int v15; // [sp+18h] [bp-FFCh]
  int v16; // [sp+1Ch] [bp-FF8h]

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v13, 0x1000u, 0, "%s...", "setup_ref_clk_termination");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "setup_ref_clk_termination",
    25,
    12423,
    60,
    &v13);
  v13 = 256;
  v15 = 0;
  v16 = 255;
  v14 = 0;
  v2 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v15) = 1;
  HIWORD(v15) = 81;
  v2(a1, &v13);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep(0x2710u);
  v16 = 0;
  v14 = 0;
  v13 = 138;
  v15 = 1;
  v3 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v15) = 81;
  LOBYTE(v16) = 1;
  v3(a1, &v13);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep(0x2710u);
  v16 = 5;
  v14 = 0;
  v13 = 138;
  v15 = 1;
  v4 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v15) = 81;
  v4(a1, &v13);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep(0x2710u);
  v16 = 9;
  v14 = 0;
  v13 = 138;
  v15 = 1;
  v5 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v15) = 81;
  v5(a1, &v13);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep(0x2710u);
  v16 = 13;
  v14 = 0;
  v13 = 138;
  v15 = 1;
  v6 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v15) = 81;
  v6(a1, &v13);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep(0x2710u);
  v15 = 0;
  v16 = 2;
  v14 = 0;
  v7 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v15) = 1;
  HIWORD(v15) = 81;
  v13 = 6;
  v7(a1, &v13);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep(0x2710u);
  v15 = 0;
  v16 = 0;
  v14 = 0;
  v8 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v15) = 1;
  HIWORD(v15) = 81;
  LOBYTE(v16) = 6;
  v13 = 6;
  v8(a1, &v13);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep(0x2710u);
  v15 = 0;
  v16 = 10;
  v14 = 0;
  v9 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v15) = 1;
  HIWORD(v15) = 81;
  v13 = 6;
  v9(a1, &v13);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep(0x2710u);
  v15 = 5308417;
  v16 = 14;
  v14 = 0;
  v10 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v13 = 6;
  v10(a1, &v13);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep(0x2710u);
  v15 = 5505025;
  v16 = 255;
  v14 = 0;
  v11 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v13 = 9586980;
  v11(a1, &v13);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep(0x2710u);
  v13 = 9586980;
  v15 = 6029313;
  v16 = 255;
  v14 = 0;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v13);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep(0x2710u);
  return 0;
}
