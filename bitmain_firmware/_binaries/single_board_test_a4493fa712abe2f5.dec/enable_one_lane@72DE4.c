int __fastcall enable_one_lane(int a1, int a2)
{
  void (__fastcall *v4)(int, int *); // r3
  void (__fastcall *v5)(int, int *); // r3
  void (__fastcall *v6)(int, int *); // r3
  void (__fastcall *v7)(int, int *); // r3
  void (__fastcall *v8)(int, int *); // r3
  void (__fastcall *v9)(int, int *); // r3
  void (__fastcall *v10)(int, int *); // r3
  void (__fastcall *v11)(int, int *); // r3
  void (__fastcall *v12)(int, int *); // r3
  void (__fastcall *v13)(int, int *); // r3
  void (__fastcall *v14)(int, int *); // r3
  void (__fastcall *v15)(int, int *); // r3
  void (__fastcall *v16)(int, int *); // r3
  void (__fastcall *v17)(int, int *); // r3
  void (__fastcall *v18)(int, int *); // r3
  int v20; // [sp+18h] [bp-1004h] BYREF
  int v21; // [sp+1Ch] [bp-1000h]
  int v22; // [sp+20h] [bp-FFCh]
  int v23; // [sp+24h] [bp-FF8h]

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v20, 0x1000u, 0, "%s lane %d...", "enable_one_lane", a2);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "enable_one_lane",
    15,
    547,
    60,
    &v20);
  v22 = 12910592;
  v23 = 255;
  v21 = 0;
  v4 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v20 = 0;
  v4(a1, &v20);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v22 = 0;
  v21 = 0;
  v23 = 0;
  v5 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v22) = 199;
  v20 = (int)&loc_7FFFE;
  LOBYTE(v22) = 1;
  v5(a1, &v20);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v22 = 0;
  v23 = 0;
  v21 = 0;
  v6 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v20 = (int)&unk_1FFFCF;
  HIWORD(v22) = 199;
  LOBYTE(v22) = 1;
  LOBYTE(v23) = 1;
  v6(a1, &v20);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v20 = (int)&loc_7FFFE;
  v22 = 13041665;
  v23 = 2;
  v21 = 0;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v20);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v20 = (int)&loc_7FFFE;
  v22 = 0;
  v23 = 0;
  v21 = 0;
  v7 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v23) = 5;
  HIWORD(v22) = 199;
  LOBYTE(v22) = 1;
  v7(a1, &v20);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v20 = (int)&loc_7FFFE;
  v22 = 0;
  v23 = 0;
  v21 = 0;
  v8 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v23) = 6;
  HIWORD(v22) = 199;
  LOBYTE(v22) = 1;
  v8(a1, &v20);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v9 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v20 = (int)&unk_1FFFCF;
  v22 = 13041665;
  v23 = 7;
  v21 = 0;
  v9(a1, &v20);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v20 = (int)&loc_7FFFE;
  v22 = 0;
  v23 = 0;
  v21 = 0;
  v10 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v22) = 199;
  LOBYTE(v23) = 15;
  LOBYTE(v22) = 1;
  v10(a1, &v20);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v11 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v20 = (int)&unk_1FFFCF;
  v22 = 13041665;
  v23 = 8;
  v21 = 0;
  v11(a1, &v20);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v22 = 0;
  v21 = 0;
  v23 = 0;
  v12 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v22) = 159;
  LOBYTE(v22) = 1;
  v20 = 29360576;
  v12(a1, &v20);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v22 = 0;
  v23 = 0;
  v21 = 0;
  v13 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v22) = 159;
  LOBYTE(v22) = 1;
  LOBYTE(v23) = 1;
  v20 = 25297282;
  v13(a1, &v20);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v23 = 2;
  v20 = 29360576;
  v21 = 0;
  v22 = 0;
  v14 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v22) = 159;
  LOBYTE(v22) = 1;
  v14(a1, &v20);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v23 = 5;
  v15 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v20 = 29360576;
  v21 = 0;
  v22 = 10420225;
  v15(a1, &v20);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v23 = 6;
  v16 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v20 = 29360576;
  v21 = 0;
  v22 = 10420225;
  v16(a1, &v20);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v23 = 7;
  v17 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v20 = 25297282;
  v21 = 0;
  v22 = 10420225;
  v17(a1, &v20);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v20 = 29360576;
  v22 = 10420225;
  v23 = 15;
  v21 = 0;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v20);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v20 = 25297282;
  v22 = 10420224;
  v23 = 0;
  v21 = 0;
  v18 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v22) = 1;
  LOBYTE(v23) = 8;
  v18(a1, &v20);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  return 0;
}
