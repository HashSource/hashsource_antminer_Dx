int __fastcall set_chip0_1_work_1_pe(int a1)
{
  void (__fastcall *v2)(int, int *); // r3
  void (__fastcall *v3)(int, int *); // r3
  int v5; // [sp+10h] [bp-1004h] BYREF
  int v6; // [sp+14h] [bp-1000h]
  int v7; // [sp+18h] [bp-FFCh]
  int v8; // [sp+1Ch] [bp-FF8h]

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v5, 0x1000u, 0, "%s...", "set_chip0_1_work_1_pe");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "set_chip0_1_work_1_pe",
    21,
    12082,
    60,
    &v5);
  v7 = 0;
  v8 = 0;
  v6 = 0;
  v2 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v7) = 21;
  v5 = 0;
  LOBYTE(v8) = -1;
  v2(a1, &v5);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep(0x2710u);
  v7 = 0;
  v8 = 0;
  v6 = 0;
  v5 = 1;
  v3 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v7) = 21;
  LOBYTE(v8) = -1;
  v3(a1, &v5);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep(0x2710u);
  return 0;
}
