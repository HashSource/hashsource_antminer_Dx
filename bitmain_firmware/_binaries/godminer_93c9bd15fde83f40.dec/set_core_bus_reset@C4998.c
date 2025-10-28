int __fastcall set_core_bus_reset(int a1)
{
  int v2; // r7
  unsigned __int8 v3; // r11
  void (__fastcall *v4)(int, int *); // r2
  void (__fastcall *v5)(int, int *); // r3
  int v7; // [sp+10h] [bp-1004h] BYREF
  int v8; // [sp+14h] [bp-1000h]
  __int16 v9; // [sp+18h] [bp-FFCh]
  __int16 v10; // [sp+1Ah] [bp-FFAh]
  int v11; // [sp+1Ch] [bp-FF8h]

  pthread_mutex_lock(&stru_1A8A24);
  v2 = 0;
  logfmt_raw((char *)&v7, 0x1000u, 0, "%s...", "set_core_bus_reset");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "set_core_bus_reset",
    18,
    11764,
    60,
    &v7);
  do
  {
    v3 = v2;
    v4 = *(void (__fastcall **)(int, int *))(a1 + 156);
    v10 = 201;
    ++v2;
    v8 = 0;
    v7 = 0;
    v9 = 1;
    v11 = v3;
    v4(a1, &v7);
    usleep((__useconds_t)&stru_18694.st_info);
    usleep((__useconds_t)&stru_18694.st_info);
    v9 = 0;
    v10 = 201;
    v11 = 0;
    v5 = *(void (__fastcall **)(int, int *))(a1 + 156);
    v8 = 0;
    LOBYTE(v11) = v3;
    LOBYTE(v9) = 1;
    v7 = 1;
    v5(a1, &v7);
    usleep((__useconds_t)&stru_18694.st_info);
    usleep((__useconds_t)&stru_18694.st_info);
  }
  while ( v2 != 16 );
  return 0;
}
