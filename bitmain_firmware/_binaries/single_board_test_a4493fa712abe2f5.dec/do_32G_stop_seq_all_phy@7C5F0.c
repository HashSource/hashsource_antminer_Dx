int __fastcall do_32G_stop_seq_all_phy(int a1, int a2, unsigned __int8 a3)
{
  void (__fastcall *v5)(int, int *); // r2
  void (__fastcall *v6)(int, int *); // r2
  void (__fastcall *v7)(int, int *); // r2
  void (__fastcall *v8)(int, int *); // r2
  void (__fastcall *v9)(int, int *); // r2
  void (__fastcall *v10)(int, int *); // r2
  void (__fastcall *v11)(int, int *); // r2
  void (__fastcall *v12)(int, int *); // r2
  void (__fastcall *v13)(int, int *); // r2
  void (__fastcall *v14)(int, int *); // r3
  int v16; // [sp+18h] [bp-1004h] BYREF
  int v17; // [sp+1Ch] [bp-1000h]
  int v18; // [sp+20h] [bp-FFCh]
  int v19; // [sp+24h] [bp-FF8h]

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v16, 0x1000u, 0, "%s...", "do_32G_stop_seq_all_phy");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "do_32G_stop_seq_all_phy",
    23,
    8592,
    60,
    &v16);
  v16 = -3;
  v18 = 0;
  v19 = 0;
  v17 = 0;
  v5 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v19) = a3;
  LOBYTE(v18) = 1;
  HIWORD(v18) = 144;
  v5(a1, &v16);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v18 = 0;
  v19 = 0;
  v17 = 0;
  v6 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v16 = -2147450879;
  LOBYTE(v18) = 1;
  LOBYTE(v19) = a3;
  HIWORD(v18) = 145;
  v6(a1, &v16);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v18 = 0;
  v19 = 0;
  v17 = 0;
  v7 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v18) = 1;
  HIWORD(v18) = 144;
  LOBYTE(v19) = a3;
  v16 = 0;
  v7(a1, &v16);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v18 = 0;
  v19 = 0;
  v17 = 0;
  v16 = -2147450800;
  v8 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v18) = 1;
  HIWORD(v18) = 145;
  LOBYTE(v19) = a3;
  v8(a1, &v16);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v18 = 0;
  v19 = 0;
  v17 = 0;
  v16 = -257;
  v9 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v18) = 1;
  HIWORD(v18) = 144;
  LOBYTE(v19) = a3;
  v9(a1, &v16);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v10 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v16 = -2147450879;
  v17 = 0;
  v18 = 9502721;
  v19 = a3;
  v10(a1, &v16);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v18 = 0;
  v19 = 0;
  v17 = 0;
  v11 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v18) = 1;
  HIWORD(v18) = 144;
  LOBYTE(v19) = a3;
  v16 = 0;
  v11(a1, &v16);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v18 = 0;
  v19 = 0;
  v17 = 0;
  v16 = -2147450804;
  v12 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v18) = 1;
  HIWORD(v18) = 145;
  LOBYTE(v19) = a3;
  v12(a1, &v16);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v18 = 0;
  v13 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v18) = 144;
  v17 = 0;
  LOBYTE(v18) = 1;
  v19 = a3;
  v16 = 0;
  v13(a1, &v16);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v16 = -2147450879;
  v18 = 0;
  v19 = 0;
  v17 = 0;
  v14 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v18) = 1;
  HIWORD(v18) = 145;
  LOBYTE(v19) = a3;
  v14(a1, &v16);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  return 0;
}
