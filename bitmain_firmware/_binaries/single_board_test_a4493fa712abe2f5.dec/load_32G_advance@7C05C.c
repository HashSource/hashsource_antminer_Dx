int __fastcall load_32G_advance(int a1, int a2, char a3)
{
  void (__fastcall *v5)(int, int *); // r3
  void (__fastcall *v6)(int, int *); // r3
  void (__fastcall *v7)(int, int *); // r3
  void (__fastcall *v8)(int, int *); // r3
  void (__fastcall *v9)(int, int *); // r3
  void (__fastcall *v10)(int, int *); // r3
  int v12; // [sp+10h] [bp-1004h] BYREF
  int v13; // [sp+14h] [bp-1000h]
  int v14; // [sp+18h] [bp-FFCh]
  int v15; // [sp+1Ch] [bp-FF8h]

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v12, 0x1000u, 0, "%s...", "load_32G_advance");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "load_32G_advance",
    16,
    8714,
    60,
    &v12);
  v12 = 0x7FFFFFFF;
  v14 = 0;
  v15 = 0;
  v13 = 0;
  v5 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v15) = a3;
  LOBYTE(v14) = 1;
  HIWORD(v14) = 144;
  v5(a1, &v12);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v14 = 9502721;
  v15 = 0;
  v13 = 0;
  v6 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v15) = a3;
  v12 = -2147450879;
  v6(a1, &v12);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v14 = 0;
  v15 = 0;
  v13 = 0;
  v7 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v14) = 1;
  HIWORD(v14) = 144;
  LOBYTE(v15) = a3;
  v12 = 0;
  v7(a1, &v12);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v14 = 9502721;
  v15 = 0;
  v13 = 0;
  v12 = -2147450807;
  v8 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v15) = a3;
  v8(a1, &v12);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v14 = 9437184;
  v15 = 0;
  v13 = 0;
  v9 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v14) = 1;
  LOBYTE(v15) = a3;
  v12 = 0;
  v9(a1, &v12);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v12 = -2147450879;
  v14 = 0;
  v15 = 0;
  v13 = 0;
  v10 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v14) = 145;
  LOBYTE(v14) = 1;
  LOBYTE(v15) = a3;
  v10(a1, &v12);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  return 0;
}
