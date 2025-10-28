int __fastcall config_rxifrx_sigdet_ovr(int a1, int a2, unsigned __int8 a3, int a4)
{
  int v7; // r11
  int v8; // r2
  unsigned int v9; // r10
  void (__fastcall *v10)(int, unsigned int *); // r3
  void (__fastcall *v11)(int, unsigned int *); // r3
  void (__fastcall *v12)(int, unsigned int *); // r3
  void (__fastcall *v13)(int, unsigned int *); // r3
  void (__fastcall *v14)(int, unsigned int *); // r3
  void (__fastcall *v15)(int, unsigned int *); // r3
  void (__fastcall *v16)(int, unsigned int *); // r3
  void (__fastcall *v17)(int, unsigned int *); // r3
  void (__fastcall *v18)(int, unsigned int *); // r3
  void (__fastcall *v19)(int, unsigned int *); // r3
  unsigned int v21; // [sp+14h] [bp-1008h]
  unsigned int v22; // [sp+18h] [bp-1004h] BYREF
  int v23; // [sp+1Ch] [bp-1000h]
  int v24; // [sp+20h] [bp-FFCh]
  int v25; // [sp+24h] [bp-FF8h]

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v22, 0x1000u, 0, "%s...", "config_rxifrx_sigdet_ovr");
  pthread_mutex_unlock(&stru_3B526C);
  LOWORD(v7) = -4095;
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "config_rxifrx_sigdet_ovr",
    24,
    9195,
    60,
    &v22);
  v8 = -2147422081;
  if ( a4 != 8 )
    v8 = -2147483521;
  v22 = -134217729;
  HIWORD(v7) = 0x8000;
  v24 = 9437184;
  v25 = 0;
  LOWORD(v9) = 1;
  v23 = 0;
  if ( a4 != 8 )
    v7 = -2147483495;
  v10 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  HIWORD(v9) = 0x8000;
  LOBYTE(v25) = a3;
  if ( a4 == 8 )
    v9 = v7;
  LOBYTE(v24) = 1;
  if ( a4 == 8 )
    v7 = -2147422055;
  v21 = v8;
  v10(a1, &v22);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v22 = v9;
  v24 = 0;
  v25 = 0;
  v23 = 0;
  v11 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v24) = 1;
  LOBYTE(v25) = a3;
  HIWORD(v24) = 145;
  v11(a1, &v22);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v24 = 9437185;
  v25 = 0;
  v23 = 0;
  v22 = 0x8000000;
  v12 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v25) = a3;
  v12(a1, &v22);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v22 = v7;
  v24 = 0;
  v25 = 0;
  v23 = 0;
  v13 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v24) = 1;
  HIWORD(v24) = 145;
  LOBYTE(v25) = a3;
  v13(a1, &v22);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v24 = 0;
  v25 = 0;
  v23 = 0;
  v22 = 0x7FFFFFFF;
  v14 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v24) = 1;
  HIWORD(v24) = 144;
  LOBYTE(v25) = a3;
  v14(a1, &v22);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v22 = v9;
  v24 = 0;
  v25 = 0;
  v23 = 0;
  v15 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v24) = 1;
  HIWORD(v24) = 145;
  LOBYTE(v25) = a3;
  v15(a1, &v22);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v24 = 0;
  v25 = 0;
  v23 = 0;
  v22 = 0x80000000;
  v16 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v24) = 1;
  HIWORD(v24) = 144;
  LOBYTE(v25) = a3;
  v16(a1, &v22);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v17 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v22 = v21;
  v23 = 0;
  v24 = 9502721;
  v25 = a3;
  v17(a1, &v22);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v24 = 9437184;
  v25 = 0;
  v23 = 0;
  v18 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v24) = 1;
  LOBYTE(v25) = a3;
  v22 = 0;
  v18(a1, &v22);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v22 = v9;
  v24 = 0;
  v25 = 0;
  v23 = 0;
  v19 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v24) = 1;
  HIWORD(v24) = 145;
  LOBYTE(v25) = a3;
  v19(a1, &v22);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  return 0;
}
