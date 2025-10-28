int __fastcall clear_dag_mode(int a1)
{
  void (__fastcall *v2)(int, _DWORD *); // r3
  _DWORD v4[2]; // [sp+10h] [bp-1004h] BYREF
  int v5; // [sp+18h] [bp-FFCh]
  int v6; // [sp+1Ch] [bp-FF8h]

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)v4, 0x1000u, 0, "%s...", "clear_dag_mode");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "clear_dag_mode",
    14,
    388,
    60,
    v4);
  v5 = 12845056;
  v6 = 255;
  v4[1] = 0;
  v4[0] = 0;
  v2 = *(void (__fastcall **)(int, _DWORD *))(a1 + 144);
  LOBYTE(v5) = 1;
  v2(a1, v4);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep(0x2710u);
  return 0;
}
