int __fastcall sub_953DC(int a1, int a2, unsigned __int8 a3, int a4)
{
  void (__fastcall *v6)(int, int *); // r3
  void (__fastcall *v7)(int, int *); // r3
  void (__fastcall *v8)(int, int *); // r3
  void (__fastcall *v9)(int, int *); // r3
  void (__fastcall *v10)(int, int *); // r3
  void (__fastcall *v11)(int, int *); // r3
  void (__fastcall *v12)(int, int *); // r3
  void (__fastcall *v13)(int, int *); // r3
  void (__fastcall *v14)(int, int *); // r3
  int v17; // [sp+18h] [bp-4h] BYREF
  int v18; // [sp+1Ch] [bp+0h]
  int v19; // [sp+20h] [bp+4h]
  int v20; // [sp+24h] [bp+8h]

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v17, 0x1000u, 0, "%s...", "enable_rxbist_autostop_one_lane");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "enable_rxbist_autostop_one_lane",
    31,
    9240,
    60,
    &v17);
  v17 = -5;
  v19 = 0;
  v20 = 0;
  v6 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v18 = 0;
  LOBYTE(v20) = a3;
  HIWORD(v19) = 144;
  LOBYTE(v19) = 1;
  v6(a1, &v17);
  usleep((__useconds_t)&stru_18694.st_info);
  v19 = 9502720;
  v20 = 0;
  v18 = 0;
  v7 = *(void (__fastcall **)(int, int *))(a1 + 156);
  LOBYTE(v19) = 1;
  v17 = -2147454975;
  LOBYTE(v20) = a3;
  v7(a1, &v17);
  usleep((__useconds_t)&stru_18694.st_info);
  v19 = 1;
  v20 = 0;
  v18 = 0;
  v17 = 4;
  v8 = *(void (__fastcall **)(int, int *))(a1 + 156);
  HIWORD(v19) = 144;
  LOBYTE(v20) = a3;
  v8(a1, &v17);
  usleep((__useconds_t)&stru_18694.st_info);
  v19 = 9502721;
  v20 = 0;
  v18 = 0;
  v17 = -2147454959;
  v9 = *(void (__fastcall **)(int, int *))(a1 + 156);
  LOBYTE(v20) = a3;
  v9(a1, &v17);
  usleep((__useconds_t)&stru_18694.st_info);
  v19 = 1;
  v20 = 0;
  v18 = 0;
  v17 = -66060289;
  v10 = *(void (__fastcall **)(int, int *))(a1 + 156);
  HIWORD(v19) = 144;
  LOBYTE(v20) = a3;
  v10(a1, &v17);
  usleep((__useconds_t)&stru_18694.st_info);
  v19 = 0;
  v20 = 0;
  v17 = -2147454975;
  v11 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v18 = 0;
  LOBYTE(v19) = 1;
  HIWORD(v19) = 145;
  LOBYTE(v20) = a3;
  v11(a1, &v17);
  usleep((__useconds_t)&stru_18694.st_info);
  v19 = 9437185;
  v18 = 0;
  v20 = a3;
  v17 = (a4 << 20) & 0x3F00000;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v17);
  usleep((__useconds_t)&stru_18694.st_info);
  v19 = 9502721;
  v20 = 0;
  v18 = 0;
  v17 = -2147454957;
  v12 = *(void (__fastcall **)(int, int *))(a1 + 156);
  LOBYTE(v20) = a3;
  v12(a1, &v17);
  usleep((__useconds_t)&stru_18694.st_info);
  v19 = 9437184;
  v20 = 0;
  v13 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v18 = 0;
  LOBYTE(v19) = 1;
  LOBYTE(v20) = a3;
  v17 = 0;
  v13(a1, &v17);
  usleep((__useconds_t)&stru_18694.st_info);
  v14 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v17 = -2147454975;
  v19 = 9502721;
  v18 = 0;
  v20 = a3;
  v14(a1, &v17);
  usleep((__useconds_t)&stru_18694.st_info);
  return 0;
}
