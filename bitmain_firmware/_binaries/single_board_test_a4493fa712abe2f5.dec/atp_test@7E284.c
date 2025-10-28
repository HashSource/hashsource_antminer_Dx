int __fastcall atp_test(int a1, int a2, int a3, int a4)
{
  __int16 v6; // r9
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
  unsigned int v19; // [sp+20h] [bp-1004h] BYREF
  int v20; // [sp+24h] [bp-1000h]
  int v21; // [sp+28h] [bp-FFCh]
  int v22; // [sp+2Ch] [bp-FF8h]

  v21 = 0;
  v20 = 0;
  v22 = (unsigned __int8)a3;
  v19 = -520093697;
  v6 = (_WORD)a4 << 12;
  v7 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  HIWORD(v21) = 144;
  LOBYTE(v21) = 1;
  v7(a1, &v19);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v21 = 9502720;
  v22 = 0;
  v20 = 0;
  v19 = v6 & 0xF000 | 0x80000001;
  v8 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v21) = 1;
  LOBYTE(v22) = a3;
  v8(a1, &v19);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v21 = 9437184;
  v22 = 0;
  v20 = 0;
  v19 = 251658240;
  v9 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v21) = 1;
  LOBYTE(v22) = a3;
  v9(a1, &v19);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v21 = 0;
  v10 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v21) = 1;
  v19 = v6 & 0xF000 | 0x80000089;
  v20 = 0;
  HIWORD(v21) = 145;
  v22 = (unsigned __int8)a3;
  v10(a1, &v19);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v19, 0x1000u, 0, "%s channel_id %1x, core_id %1x test vdda please", "atp_test", a4, a3);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "atp_test",
    8,
    8346,
    60,
    &v19);
  while ( IO_getc((_IO_FILE *)stdin) != 10 )
    ;
  v21 = 9437184;
  v20 = 0;
  v19 = 385875968;
  v22 = (unsigned __int8)a3;
  v11 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v21) = 1;
  v11(a1, &v19);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v22 = 0;
  v20 = 0;
  v19 = v6 & 0xF000 | 0x80000089;
  v21 = 1;
  v12 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v22) = a3;
  HIWORD(v21) = 145;
  v12(a1, &v19);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v19, 0x1000u, 0, "%s channel_id %1x, core_id %1x test vddhv please", "atp_test", a4, a3);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "atp_test",
    8,
    8350,
    60,
    &v19);
  IO_getc((_IO_FILE *)stdin);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v19, 0x1000u, 0, "%s reset atp address", "atp_test");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "atp_test",
    8,
    8353,
    60,
    &v19);
  v21 = 0;
  v22 = 0;
  v20 = 0;
  v13 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v21) = 1;
  HIWORD(v21) = 144;
  v19 = 0;
  LOBYTE(v22) = a3;
  v13(a1, &v19);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v22 = 0;
  v20 = 0;
  v19 = v6 & 0xF000 | 0x80000089;
  v21 = 1;
  v14 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  HIWORD(v21) = 145;
  LOBYTE(v22) = a3;
  v14(a1, &v19);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v21 = 9437184;
  v22 = 0;
  v20 = 0;
  v15 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v21) = 1;
  v19 = 0;
  LOBYTE(v22) = a3;
  v15(a1, &v19);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v21 = 9502721;
  v22 = 0;
  v20 = 0;
  v19 = v6 & 0xF000 | 0x80000001;
  v16 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v22) = a3;
  v16(a1, &v19);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  return 0;
}
