int __fastcall phy_power_reset(int a1)
{
  void (__fastcall *v2)(int, int *); // r3
  char v3; // r9
  void (__fastcall *v4)(int, int *); // r2
  void (__fastcall *v5)(int, int *); // r2
  void (__fastcall *v6)(int, int *); // r2
  void (__fastcall *v7)(int, int *); // r2
  void (__fastcall *v8)(int, int *); // r2
  void (__fastcall *v9)(int, int *); // r2
  void (__fastcall *v10)(int, int *); // r2
  void (__fastcall *v11)(int, int *); // r2
  void (__fastcall *v12)(int, int *); // r2
  void (__fastcall *v13)(int, int *); // r2
  void (__fastcall *v14)(int, int *); // r2
  void (__fastcall *v15)(int, int *); // r2
  void (__fastcall *v16)(int, int *); // r2
  void (__fastcall *v17)(int, int *); // r3
  int v19; // [sp+14h] [bp-1008h]
  int v20; // [sp+18h] [bp-1004h] BYREF
  int v21; // [sp+1Ch] [bp-1000h]
  int v22; // [sp+20h] [bp-FFCh]
  int v23; // [sp+24h] [bp-FF8h]

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v20, 0x1000u, 0, "%s...", "phy_power_reset");
  v19 = 0;
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "phy_power_reset",
    15,
    675,
    60,
    &v20);
  v22 = 0;
  v23 = 0;
  v21 = 0;
  v2 = *(void (__fastcall **)(int, int *))(a1 + 156);
  HIWORD(v22) = 80;
  LOBYTE(v22) = 1;
  LOBYTE(v23) = -1;
  v20 = 0;
  v2(a1, &v20);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep((__useconds_t)&stru_18694.st_info);
  do
  {
    v21 = 0;
    v3 = v19;
    v22 = 5242880;
    v23 = 1;
    v4 = *(void (__fastcall **)(int, int *))(a1 + 156);
    BYTE1(v22) = v19;
    v20 = 0x10000;
    ++v19;
    v4(a1, &v20);
    usleep((__useconds_t)&stru_18694.st_info);
    usleep((__useconds_t)&stru_18694.st_info);
    v22 = 0;
    v23 = 2;
    v5 = *(void (__fastcall **)(int, int *))(a1 + 156);
    BYTE1(v22) = v3;
    v20 = 0x10000;
    v21 = 0;
    HIWORD(v22) = 80;
    v5(a1, &v20);
    usleep((__useconds_t)&stru_18694.st_info);
    usleep((__useconds_t)&stru_18694.st_info);
    v22 = 0;
    v23 = 5;
    v6 = *(void (__fastcall **)(int, int *))(a1 + 156);
    BYTE1(v22) = v3;
    v20 = 0x10000;
    v21 = 0;
    HIWORD(v22) = 80;
    v6(a1, &v20);
    usleep((__useconds_t)&stru_18694.st_info);
    usleep((__useconds_t)&stru_18694.st_info);
    v22 = 0;
    v23 = 6;
    v7 = *(void (__fastcall **)(int, int *))(a1 + 156);
    BYTE1(v22) = v3;
    v20 = 0x10000;
    v21 = 0;
    HIWORD(v22) = 80;
    v7(a1, &v20);
    usleep((__useconds_t)&stru_18694.st_info);
    usleep((__useconds_t)&stru_18694.st_info);
    v22 = 0;
    v23 = 9;
    v8 = *(void (__fastcall **)(int, int *))(a1 + 156);
    BYTE1(v22) = v3;
    v20 = 0x10000;
    v21 = 0;
    HIWORD(v22) = 80;
    v8(a1, &v20);
    usleep((__useconds_t)&stru_18694.st_info);
    usleep((__useconds_t)&stru_18694.st_info);
    v22 = 0;
    v23 = 10;
    v9 = *(void (__fastcall **)(int, int *))(a1 + 156);
    BYTE1(v22) = v3;
    v20 = 0x10000;
    v21 = 0;
    HIWORD(v22) = 80;
    v9(a1, &v20);
    usleep((__useconds_t)&stru_18694.st_info);
    usleep((__useconds_t)&stru_18694.st_info);
    v22 = 0;
    v23 = 13;
    v10 = *(void (__fastcall **)(int, int *))(a1 + 156);
    BYTE1(v22) = v3;
    v20 = 0x10000;
    v21 = 0;
    HIWORD(v22) = 80;
    v10(a1, &v20);
    usleep((__useconds_t)&stru_18694.st_info);
    usleep((__useconds_t)&stru_18694.st_info);
    v22 = 0;
    v23 = 14;
    v11 = *(void (__fastcall **)(int, int *))(a1 + 156);
    BYTE1(v22) = v3;
    v20 = 0x10000;
    v21 = 0;
    HIWORD(v22) = 80;
    v11(a1, &v20);
    usleep((__useconds_t)&stru_18694.st_info);
    usleep((__useconds_t)&stru_18694.st_info);
    v22 = 0;
    v23 = 0;
    v12 = *(void (__fastcall **)(int, int *))(a1 + 156);
    BYTE1(v22) = v3;
    v20 = 0x10000;
    v21 = 0;
    HIWORD(v22) = 80;
    v12(a1, &v20);
    usleep((__useconds_t)&stru_18694.st_info);
    usleep((__useconds_t)&stru_18694.st_info);
    v22 = 0;
    v23 = 3;
    v13 = *(void (__fastcall **)(int, int *))(a1 + 156);
    BYTE1(v22) = v3;
    v20 = 0x10000;
    v21 = 0;
    HIWORD(v22) = 80;
    v13(a1, &v20);
    usleep((__useconds_t)&stru_18694.st_info);
    usleep((__useconds_t)&stru_18694.st_info);
    v22 = 0;
    v23 = 7;
    v14 = *(void (__fastcall **)(int, int *))(a1 + 156);
    BYTE1(v22) = v3;
    v20 = 0x10000;
    v21 = 0;
    HIWORD(v22) = 80;
    v14(a1, &v20);
    usleep((__useconds_t)&stru_18694.st_info);
    usleep((__useconds_t)&stru_18694.st_info);
    v22 = 0;
    v23 = 8;
    v15 = *(void (__fastcall **)(int, int *))(a1 + 156);
    BYTE1(v22) = v3;
    v20 = 0x10000;
    v21 = 0;
    HIWORD(v22) = 80;
    v15(a1, &v20);
    usleep((__useconds_t)&stru_18694.st_info);
    usleep((__useconds_t)&stru_18694.st_info);
    v22 = 0;
    v23 = 11;
    v16 = *(void (__fastcall **)(int, int *))(a1 + 156);
    BYTE1(v22) = v3;
    v20 = 0x10000;
    v21 = 0;
    HIWORD(v22) = 80;
    v16(a1, &v20);
    usleep((__useconds_t)&stru_18694.st_info);
    usleep((__useconds_t)&stru_18694.st_info);
    v22 = 0;
    v23 = 0;
    v17 = *(void (__fastcall **)(int, int *))(a1 + 156);
    LOBYTE(v23) = 15;
    BYTE1(v22) = v3;
    v20 = 0x10000;
    v21 = 0;
    HIWORD(v22) = 80;
    v17(a1, &v20);
    usleep((__useconds_t)&stru_18694.st_info);
    usleep((__useconds_t)&stru_18694.st_info);
  }
  while ( v19 != 8 );
  return 0;
}
