int __fastcall setup_clk(int a1)
{
  void (__fastcall *v2)(int, int *); // r3
  void (__fastcall *v3)(int, int *); // r3
  int v5; // [sp+10h] [bp-1004h] BYREF
  int v6; // [sp+14h] [bp-1000h]
  int v7; // [sp+18h] [bp-FFCh]
  int v8; // [sp+1Ch] [bp-FF8h]

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v5, 0x1000u, 0, "%s...", "setup_clk");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "setup_clk",
    9,
    574,
    60,
    &v5);
  v7 = 0;
  v8 = 0;
  v6 = 0;
  v2 = *(void (__fastcall **)(int, int *))(a1 + 152);
  HIWORD(v7) = 32;
  v5 = 1;
  LOBYTE(v7) = 1;
  v2(a1, &v5);
  v7 = 0;
  v8 = 0;
  v6 = 0;
  v3 = *(void (__fastcall **)(int, int *))(a1 + 152);
  LOBYTE(v7) = 1;
  v5 = 0;
  HIWORD(v7) = 16;
  v3(a1, &v5);
  usleep((__useconds_t)&stru_18694.st_info);
  v7 = 1179649;
  v8 = 0;
  v6 = 0;
  v5 = 4727297;
  (*(void (__fastcall **)(int, int *))(a1 + 152))(a1, &v5);
  usleep((__useconds_t)&stru_18694.st_info);
  v7 = 1310721;
  v8 = 0;
  v6 = 0;
  v5 = 2105857;
  (*(void (__fastcall **)(int, int *))(a1 + 152))(a1, &v5);
  usleep((__useconds_t)&stru_18694.st_info);
  v7 = 1048577;
  v8 = 0;
  v6 = 0;
  v5 = 7;
  (*(void (__fastcall **)(int, int *))(a1 + 152))(a1, &v5);
  usleep((__useconds_t)&stru_18694.st_info);
  v7 = 2097153;
  v8 = 0;
  v6 = 0;
  v5 = 15;
  (*(void (__fastcall **)(int, int *))(a1 + 152))(a1, &v5);
  usleep((__useconds_t)&stru_18694.st_info);
  v7 = 1441793;
  v8 = 0;
  v6 = 0;
  v5 = -2147483633;
  (*(void (__fastcall **)(int, int *))(a1 + 152))(a1, &v5);
  usleep((__useconds_t)&stru_18694.st_info);
  v7 = 3211265;
  v8 = 0;
  v6 = 0;
  v5 = 0;
  (*(void (__fastcall **)(int, int *))(a1 + 152))(a1, &v5);
  usleep((__useconds_t)&stru_18694.st_info);
  set_core_reset(a1);
  setup_ref_clk_termination(a1);
  return 0;
}
