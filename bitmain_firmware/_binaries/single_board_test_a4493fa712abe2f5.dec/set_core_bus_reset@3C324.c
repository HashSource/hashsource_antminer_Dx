int __fastcall set_core_bus_reset(int a1)
{
  int v2; // r6
  char v3; // r10
  void (__fastcall *v4)(int, int *); // r3
  void (__fastcall *v5)(int, int *); // r3
  int v7; // [sp+10h] [bp-1004h] BYREF
  int v8; // [sp+14h] [bp-1000h]
  int v9; // [sp+18h] [bp-FFCh]
  int v10; // [sp+1Ch] [bp-FF8h]

  pthread_mutex_lock(&stru_3B526C);
  v2 = 0;
  logfmt_raw((char *)&v7, 0x1000u, 0, "%s...", "set_core_bus_reset");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "set_core_bus_reset",
    18,
    11763,
    60,
    &v7);
  do
  {
    v3 = v2;
    v9 = 0;
    v10 = 0;
    v8 = 0;
    ++v2;
    v4 = *(void (__fastcall **)(int, int *))(a1 + 144);
    LOBYTE(v9) = 1;
    v7 = 0;
    LOBYTE(v10) = v3;
    HIWORD(v9) = 201;
    v4(a1, &v7);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v9 = 13172736;
    v10 = 0;
    v8 = 0;
    v5 = *(void (__fastcall **)(int, int *))(a1 + 144);
    LOBYTE(v10) = v3;
    LOBYTE(v9) = 1;
    v7 = 1;
    v5(a1, &v7);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  }
  while ( v2 != 16 );
  return 0;
}
