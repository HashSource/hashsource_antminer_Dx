int __fastcall config_rxifrx_sigdet_ovr_one_lane(int a1, int a2, unsigned __int8 a3, __int16 a4)
{
  void (__fastcall *v7)(int, unsigned int *); // r3
  void (__fastcall *v8)(int, unsigned int *); // r3
  void (__fastcall *v9)(int, unsigned int *); // r3
  void (__fastcall *v10)(int, unsigned int *); // r3
  void (__fastcall *v11)(int, unsigned int *); // r3
  void (__fastcall *v12)(int, unsigned int *); // r3
  void (__fastcall *v13)(int, unsigned int *); // r3
  void (__fastcall *v14)(int, unsigned int *); // r3
  void (__fastcall *v15)(int, unsigned int *); // r3
  void (__fastcall *v16)(int, unsigned int *); // r3
  unsigned int v18; // [sp+18h] [bp-1004h] BYREF
  int v19; // [sp+1Ch] [bp-1000h]
  int v20; // [sp+20h] [bp-FFCh]
  int v21; // [sp+24h] [bp-FF8h]

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v18, 0x1000u, 0, "%s...", "config_rxifrx_sigdet_ovr_one_lane");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "config_rxifrx_sigdet_ovr_one_lane",
    33,
    9211,
    60,
    &v18);
  v18 = -134217729;
  v20 = 0;
  v21 = 0;
  v19 = 0;
  v7 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v21) = a3;
  LOBYTE(v20) = 1;
  HIWORD(v20) = 144;
  v7(a1, &v18);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v20 = 0;
  v21 = 0;
  v19 = 0;
  v8 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v20) = 1;
  v18 = (unsigned __int16)(a4 << 12) | 0x80000001;
  LOBYTE(v21) = a3;
  HIWORD(v20) = 145;
  v8(a1, &v18);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v20 = 0;
  v21 = 0;
  v19 = 0;
  v18 = 0x8000000;
  v9 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v20) = 1;
  HIWORD(v20) = 144;
  LOBYTE(v21) = a3;
  v9(a1, &v18);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v21 = 0;
  v19 = 0;
  v20 = 9502721;
  v18 = (unsigned __int16)(a4 << 12) | 0x80000099;
  v10 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v21) = a3;
  v10(a1, &v18);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v20 = 0;
  v21 = 0;
  v19 = 0;
  v18 = 0x7FFFFFFF;
  v11 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v20) = 1;
  HIWORD(v20) = 144;
  LOBYTE(v21) = a3;
  v11(a1, &v18);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v12 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v18 = (unsigned __int16)(a4 << 12) | 0x80000001;
  v19 = 0;
  v20 = 9502721;
  v21 = a3;
  v12(a1, &v18);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v20 = 0;
  v21 = 0;
  v19 = 0;
  v18 = 0x80000000;
  v13 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v20) = 1;
  HIWORD(v20) = 144;
  LOBYTE(v21) = a3;
  v13(a1, &v18);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v21 = 0;
  v19 = 0;
  v20 = 9502721;
  v18 = (unsigned __int16)(a4 << 12) | 0x8000007F;
  v14 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v21) = a3;
  v14(a1, &v18);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v20 = 9437184;
  v21 = 0;
  v19 = 0;
  v15 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v20) = 1;
  LOBYTE(v21) = a3;
  v18 = 0;
  v15(a1, &v18);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v16 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v18 = (unsigned __int16)(a4 << 12) | 0x80000001;
  v19 = 0;
  v20 = 9502721;
  v21 = a3;
  v16(a1, &v18);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  return 0;
}
