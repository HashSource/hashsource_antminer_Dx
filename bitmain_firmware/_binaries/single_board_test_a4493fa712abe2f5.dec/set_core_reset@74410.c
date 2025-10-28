int __fastcall set_core_reset(int a1)
{
  void (__fastcall *v2)(int, unsigned int *); // r3
  unsigned int v4; // [sp+10h] [bp-1004h] BYREF
  int v5; // [sp+14h] [bp-1000h]
  int v6; // [sp+18h] [bp-FFCh]
  int v7; // [sp+1Ch] [bp-FF8h]

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v4, 0x1000u, 0, "%s...", "set_core_reset");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "set_core_reset",
    14,
    287,
    60,
    &v4);
  v4 = 9;
  v6 = 0;
  v5 = 0;
  v7 = 0;
  v2 = *(void (__fastcall **)(int, unsigned int *))(a1 + 140);
  LOBYTE(v6) = 1;
  HIWORD(v6) = 32;
  v2(a1, &v4);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v5 = 0;
  v6 = 2097153;
  v7 = 0;
  v4 = 15;
  (*(void (__fastcall **)(int, unsigned int *))(a1 + 140))(a1, &v4);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v7 = 255;
  v6 = 15728641;
  v5 = 0;
  v4 = 0x80000000;
  (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v4);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep(0x2710u);
  return 0;
}
