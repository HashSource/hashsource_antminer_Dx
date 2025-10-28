int __fastcall setup_count_sync(int a1, int a2)
{
  void (__fastcall *v4)(int, unsigned int *); // r3
  void (__fastcall *v5)(int, unsigned int *); // r3
  void (__fastcall *v6)(int, unsigned int *); // r3
  unsigned int v8; // [sp+10h] [bp-1004h] BYREF
  int v9; // [sp+14h] [bp-1000h]
  int v10; // [sp+18h] [bp-FFCh]
  int v11; // [sp+1Ch] [bp-FF8h]

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v8, 0x1000u, 0, "%s...", "setup_count_sync");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "setup_count_sync",
    16,
    366,
    60,
    &v8);
  v10 = 0;
  v11 = 0;
  v9 = 0;
  v4 = *(void (__fastcall **)(int, unsigned int *))(a1 + 156);
  LOBYTE(v11) = a2;
  v8 = 0;
  HIWORD(v10) = 202;
  LOBYTE(v10) = 1;
  v4(a1, &v8);
  usleep((__useconds_t)&stru_18694.st_info);
  v10 = 0;
  v11 = 0;
  v5 = *(void (__fastcall **)(int, unsigned int *))(a1 + 156);
  v9 = 0;
  LOBYTE(v10) = 1;
  HIWORD(v10) = 202;
  LOBYTE(v11) = a2;
  v8 = 1;
  v5(a1, &v8);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep(0x3E8u);
  v10 = 1;
  v11 = 0;
  v9 = 0;
  v8 = 0x80000000;
  v6 = *(void (__fastcall **)(int, unsigned int *))(a1 + 156);
  HIWORD(v10) = 202;
  LOBYTE(v11) = a2;
  v6(a1, &v8);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep(0x2710u);
  get_count_sync(a1, a2);
  return 0;
}
