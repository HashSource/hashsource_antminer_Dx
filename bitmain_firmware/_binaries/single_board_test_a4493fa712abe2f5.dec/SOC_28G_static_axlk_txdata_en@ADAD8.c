int __fastcall SOC_28G_static_axlk_txdata_en(int a1, int a2, unsigned __int8 a3)
{
  void (__fastcall *v5)(int, unsigned int *); // r2
  void (__fastcall *v6)(int, unsigned int *); // r2
  void (__fastcall *v7)(int, unsigned int *); // r2
  void (__fastcall *v8)(int, unsigned int *); // r2
  void (__fastcall *v9)(int, unsigned int *); // r2
  void (__fastcall *v10)(int, unsigned int *); // r2
  void (__fastcall *v11)(int, unsigned int *); // r2
  void (__fastcall *v12)(int, unsigned int *); // r2
  void (__fastcall *v13)(int, unsigned int *); // r2
  void (__fastcall *v14)(int, unsigned int *); // r2
  void (__fastcall *v15)(int, unsigned int *); // r2
  void (__fastcall *v16)(int, unsigned int *); // r2
  void (__fastcall *v17)(int, unsigned int *); // r2
  void (__fastcall *v18)(int, unsigned int *); // r3
  void (__fastcall *v19)(int, unsigned int *); // r3
  void (__fastcall *v20)(int, unsigned int *); // r3
  unsigned int v22; // [sp+18h] [bp-1004h] BYREF
  int v23; // [sp+1Ch] [bp-1000h]
  int v24; // [sp+20h] [bp-FFCh]
  int v25; // [sp+24h] [bp-FF8h]

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v22, 0x1000u, 0, "%s...", "SOC_28G_static_axlk_txdata_en");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "SOC_28G_static_axlk_txdata_en",
    29,
    7772,
    60,
    &v22);
  v24 = 0;
  v25 = 0;
  v23 = 0;
  v5 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v22 = 0x7FFFFFFF;
  LOBYTE(v25) = a3;
  LOBYTE(v24) = 1;
  HIWORD(v24) = 144;
  v5(a1, &v22);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v24 = 0;
  v25 = 0;
  v23 = 0;
  v6 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v22 = -2147422207;
  LOBYTE(v24) = 1;
  LOBYTE(v25) = a3;
  HIWORD(v24) = 145;
  v6(a1, &v22);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v25 = 0;
  v23 = 0;
  v22 = 0x80000000;
  v24 = 1;
  v7 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  HIWORD(v24) = 144;
  LOBYTE(v25) = a3;
  v7(a1, &v22);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v24 = 0;
  v25 = 0;
  v23 = 0;
  v22 = -2147422072;
  v8 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v24) = 1;
  HIWORD(v24) = 145;
  LOBYTE(v25) = a3;
  v8(a1, &v22);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v25 = 0;
  v23 = 0;
  v22 = 0x7FFFFFFF;
  v24 = 1;
  v9 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  HIWORD(v24) = 144;
  LOBYTE(v25) = a3;
  v9(a1, &v22);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v10 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v22 = -2147422207;
  v23 = 0;
  v24 = 9502721;
  v25 = a3;
  v10(a1, &v22);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v25 = 0;
  v23 = 0;
  v22 = 0x80000000;
  v24 = 1;
  v11 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  HIWORD(v24) = 144;
  LOBYTE(v25) = a3;
  v11(a1, &v22);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v24 = 0;
  v25 = 0;
  v23 = 0;
  v12 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v22 = -2147422047;
  LOBYTE(v24) = 1;
  HIWORD(v24) = 145;
  LOBYTE(v25) = a3;
  v12(a1, &v22);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v25 = 0;
  v23 = 0;
  v22 = 0x7FFFFFFF;
  v24 = 1;
  v13 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  HIWORD(v24) = 144;
  LOBYTE(v25) = a3;
  v13(a1, &v22);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v14 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v22 = -2147422207;
  v23 = 0;
  v24 = 9502721;
  v25 = a3;
  v14(a1, &v22);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v24 = 0;
  v25 = 0;
  v23 = 0;
  v15 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v24) = 1;
  HIWORD(v24) = 144;
  LOBYTE(v25) = a3;
  v22 = 0;
  v15(a1, &v22);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v16 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v22 = -2147422047;
  v23 = 0;
  v24 = 9502721;
  v25 = a3;
  v16(a1, &v22);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v22 = 0x7FFFFFFF;
  v17 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v23 = 0;
  v24 = 9437185;
  v25 = a3;
  v17(a1, &v22);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v22 = -2147422207;
  v24 = 0;
  v25 = 0;
  v23 = 0;
  v18 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v24) = 1;
  HIWORD(v24) = 145;
  LOBYTE(v25) = a3;
  v18(a1, &v22);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v24 = 9437184;
  v19 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v23 = 0;
  v22 = 0x80000000;
  LOBYTE(v24) = 1;
  v25 = a3;
  v19(a1, &v22);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v22 = -2147422047;
  v24 = 0;
  v25 = 0;
  v23 = 0;
  v20 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v24) = 1;
  HIWORD(v24) = 145;
  LOBYTE(v25) = a3;
  v20(a1, &v22);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  return 0;
}
