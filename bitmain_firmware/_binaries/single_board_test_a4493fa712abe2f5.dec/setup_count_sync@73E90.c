int __fastcall setup_count_sync(_DWORD *a1, int a2)
{
  void (__fastcall *v4)(_DWORD *, unsigned int *); // r3
  void (__fastcall *v5)(_DWORD *, unsigned int *); // r3
  void (__fastcall *v6)(_DWORD *, unsigned int *); // r3
  unsigned int v8; // [sp+10h] [bp-1000h] BYREF
  int v9; // [sp+14h] [bp-FFCh]
  int v10; // [sp+18h] [bp-FF8h]
  int v11; // [sp+1Ch] [bp-FF4h]

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v8, 0x1000u, 0, "%s...", "setup_count_sync");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "setup_count_sync",
    16,
    366,
    60,
    &v8);
  v10 = 0;
  v11 = 0;
  v9 = 0;
  v4 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
  LOBYTE(v11) = a2;
  v8 = 0;
  LOBYTE(v10) = 1;
  HIWORD(v10) = 202;
  v4(a1, &v8);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v10 = 0;
  v11 = 0;
  v9 = 0;
  v5 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
  LOBYTE(v10) = 1;
  HIWORD(v10) = 202;
  LOBYTE(v11) = a2;
  v8 = 1;
  v5(a1, &v8);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep(0x3E8u);
  v10 = 0;
  v11 = 0;
  v9 = 0;
  v8 = 0x80000000;
  v6 = (void (__fastcall *)(_DWORD *, unsigned int *))a1[36];
  LOBYTE(v10) = 1;
  HIWORD(v10) = 202;
  LOBYTE(v11) = a2;
  v6(a1, &v8);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep(0x2710u);
  get_count_sync(a1, a2);
  return 0;
}
