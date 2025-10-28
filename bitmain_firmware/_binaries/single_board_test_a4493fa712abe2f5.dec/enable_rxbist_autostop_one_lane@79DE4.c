int __fastcall enable_rxbist_autostop_one_lane(int a1, int a2, unsigned __int8 a3, __int16 a4, unsigned __int8 a5)
{
  void (__fastcall *v8)(int, int *); // r3
  void (__fastcall *v9)(int, int *); // r3
  void (__fastcall *v10)(int, int *); // r3
  void (__fastcall *v11)(int, int *); // r3
  void (__fastcall *v12)(int, int *); // r3
  void (__fastcall *v13)(int, int *); // r3
  void (__fastcall *v14)(int, int *); // r3
  void (__fastcall *v15)(int, int *); // r3
  void (__fastcall *v16)(int, int *); // r3
  int v18; // [sp+18h] [bp-1004h] BYREF
  int v19; // [sp+1Ch] [bp-1000h]
  int v20; // [sp+20h] [bp-FFCh]
  int v21; // [sp+24h] [bp-FF8h]

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v18, 0x1000u, 0, "%s...", "enable_rxbist_autostop_one_lane");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "enable_rxbist_autostop_one_lane",
    31,
    9240,
    60,
    &v18);
  v18 = -5;
  v20 = 0;
  v21 = 0;
  v19 = 0;
  v8 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v21) = a3;
  LOBYTE(v20) = 1;
  HIWORD(v20) = 144;
  v8(a1, &v18);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v20 = 9502720;
  v21 = 0;
  v19 = 0;
  v9 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v20) = 1;
  LOBYTE(v21) = a3;
  v18 = (unsigned __int16)(a4 << 12) | 0x80000001;
  v9(a1, &v18);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v20 = 0;
  v21 = 0;
  v19 = 0;
  v18 = 4;
  v10 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v20) = 1;
  HIWORD(v20) = 144;
  LOBYTE(v21) = a3;
  v10(a1, &v18);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v20 = 9502721;
  v21 = 0;
  v19 = 0;
  v18 = (unsigned __int16)(a4 << 12) | 0x80000011;
  v11 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v21) = a3;
  v11(a1, &v18);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v20 = 0;
  v21 = 0;
  v19 = 0;
  v18 = -66060289;
  v12 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v20) = 1;
  HIWORD(v20) = 144;
  LOBYTE(v21) = a3;
  v12(a1, &v18);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v18 = (unsigned __int16)(a4 << 12) | 0x80000001;
  v20 = 0;
  v21 = 0;
  v19 = 0;
  v13 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v20) = 145;
  LOBYTE(v20) = 1;
  LOBYTE(v21) = a3;
  v13(a1, &v18);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v19 = 0;
  v20 = 9437185;
  v21 = a3;
  v18 = (a5 << 20) & 0x3F00000;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v18);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v20 = 9502721;
  v21 = 0;
  v19 = 0;
  v18 = (unsigned __int16)(a4 << 12) | 0x80000013;
  v14 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v21) = a3;
  v14(a1, &v18);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v20 = 9437184;
  v21 = 0;
  v19 = 0;
  v15 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v20) = 1;
  LOBYTE(v21) = a3;
  v18 = 0;
  v15(a1, &v18);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v18 = (unsigned __int16)(a4 << 12) | 0x80000001;
  v20 = 0;
  v21 = 0;
  v19 = 0;
  v16 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v20) = 145;
  LOBYTE(v20) = 1;
  LOBYTE(v21) = a3;
  v16(a1, &v18);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  return 0;
}
