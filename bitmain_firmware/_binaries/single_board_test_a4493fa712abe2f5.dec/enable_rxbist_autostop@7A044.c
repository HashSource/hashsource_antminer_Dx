int __fastcall enable_rxbist_autostop(int a1, int a2, unsigned __int8 a3, int a4, unsigned __int8 a5)
{
  int v7; // r11
  int v8; // r3
  int v9; // r12
  int v10; // r9
  void (__fastcall *v11)(int, int *, int); // r3
  void (__fastcall *v12)(int, int *); // r3
  void (__fastcall *v13)(int, int *); // r3
  void (__fastcall *v14)(int, int *); // r3
  void (__fastcall *v15)(int, int *); // r3
  void (__fastcall *v16)(int, int *); // r3
  void (__fastcall *v17)(int, int *); // r3
  void (__fastcall *v18)(int, int *); // r3
  void (__fastcall *v19)(int, int *); // r3
  void (__fastcall *v20)(int, int *); // r3
  int v22; // [sp+14h] [bp-1010h]
  int v24; // [sp+1Ch] [bp-1008h]
  int v25; // [sp+20h] [bp-1004h] BYREF
  int v26; // [sp+24h] [bp-1000h]
  int v27; // [sp+28h] [bp-FFCh]
  int v28; // [sp+2Ch] [bp-FF8h]

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v25, 0x1000u, 0, "%s...", "enable_rxbist_autostop");
  LOWORD(v7) = -4095;
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "enable_rxbist_autostop",
    22,
    9223,
    60,
    &v25);
  v27 = 0;
  v8 = -2147483631;
  if ( a4 == 8 )
    v8 = -2147422191;
  v9 = -2147422189;
  v25 = -5;
  v28 = 0;
  if ( a4 != 8 )
    v9 = -2147483629;
  v26 = 0;
  v24 = v8;
  v10 = -2147483647;
  v11 = *(void (__fastcall **)(int, int *, int))(a1 + 144);
  HIWORD(v7) = 0x8000;
  LOBYTE(v28) = a3;
  LOBYTE(v27) = 1;
  if ( a4 == 8 )
    v10 = v7;
  HIWORD(v27) = 144;
  v22 = v9;
  v11(a1, &v25, -2147483629);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v25 = v10;
  v27 = 0;
  v28 = 0;
  v26 = 0;
  v12 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v27) = 1;
  LOBYTE(v28) = a3;
  HIWORD(v27) = 145;
  v12(a1, &v25);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v27 = 0;
  v28 = 0;
  v26 = 0;
  v25 = 4;
  v13 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v27) = 1;
  HIWORD(v27) = 144;
  LOBYTE(v28) = a3;
  v13(a1, &v25);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v25 = v24;
  v27 = 0;
  v28 = 0;
  v26 = 0;
  v14 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v27) = 1;
  HIWORD(v27) = 145;
  LOBYTE(v28) = a3;
  v14(a1, &v25);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v27 = 0;
  v28 = 0;
  v26 = 0;
  v25 = -66060289;
  v15 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v27) = 1;
  HIWORD(v27) = 144;
  LOBYTE(v28) = a3;
  v15(a1, &v25);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v25 = v10;
  v27 = 0;
  v28 = 0;
  v26 = 0;
  v16 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v27) = 1;
  HIWORD(v27) = 145;
  LOBYTE(v28) = a3;
  v16(a1, &v25);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v17 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v25 = (a5 << 20) & 0x3F00000;
  v26 = 0;
  v27 = 9437185;
  v28 = a3;
  v17(a1, &v25);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v18 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v25 = v22;
  v26 = 0;
  v27 = 9502721;
  v28 = a3;
  v18(a1, &v25);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v27 = 9437184;
  v28 = 0;
  v26 = 0;
  v19 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v27) = 1;
  LOBYTE(v28) = a3;
  v25 = 0;
  v19(a1, &v25);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v25 = v10;
  v27 = 0;
  v28 = 0;
  v26 = 0;
  v20 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v27) = 1;
  HIWORD(v27) = 145;
  LOBYTE(v28) = a3;
  v20(a1, &v25);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  return 0;
}
