int __fastcall setup_clk(int a1)
{
  void (__fastcall *v2)(int, int *); // r3
  void (__fastcall *v3)(int, int *); // r3
  int v5; // [sp+10h] [bp-1000h] BYREF
  int v6; // [sp+14h] [bp-FFCh]
  int v7; // [sp+18h] [bp-FF8h]
  int v8; // [sp+1Ch] [bp-FF4h]

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v5, 0x1000u, 0, "%s...", "setup_clk");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "setup_clk",
    9,
    574,
    60,
    &v5);
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v2 = *(void (__fastcall **)(int, int *))(a1 + 140);
  LOBYTE(v7) = 1;
  v5 = 1;
  HIWORD(v7) = 32;
  v2(a1, &v5);
  v7 = 0;
  v6 = 0;
  v8 = 0;
  v3 = *(void (__fastcall **)(int, int *))(a1 + 140);
  LOBYTE(v7) = 1;
  v5 = 0;
  HIWORD(v7) = 16;
  v3(a1, &v5);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v6 = 0;
  v7 = 1179649;
  v8 = 0;
  v5 = 4727297;
  (*(void (__fastcall **)(int, int *))(a1 + 140))(a1, &v5);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v6 = 0;
  v7 = 1310721;
  v8 = 0;
  v5 = (int)&unk_202201;
  (*(void (__fastcall **)(int, int *))(a1 + 140))(a1, &v5);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v6 = 0;
  v7 = 1048577;
  v8 = 0;
  v5 = 7;
  (*(void (__fastcall **)(int, int *))(a1 + 140))(a1, &v5);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v6 = 0;
  v7 = 2097153;
  v8 = 0;
  v5 = 15;
  (*(void (__fastcall **)(int, int *))(a1 + 140))(a1, &v5);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v6 = 0;
  v7 = 1441793;
  v8 = 0;
  v5 = -2147483633;
  (*(void (__fastcall **)(int, int *))(a1 + 140))(a1, &v5);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v6 = 0;
  v7 = 3211265;
  v8 = 0;
  v5 = 0;
  (*(void (__fastcall **)(int, int *))(a1 + 140))(a1, &v5);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  set_core_reset(a1);
  setup_ref_clk_termination(a1);
  return 0;
}
