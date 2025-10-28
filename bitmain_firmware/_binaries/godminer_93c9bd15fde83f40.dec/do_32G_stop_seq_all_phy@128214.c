int __fastcall do_32G_stop_seq_all_phy(int a1, int a2, unsigned __int8 a3)
{
  void (__fastcall *v5)(int, int *); // r2
  void (__fastcall *v6)(int, int *); // r2
  void (__fastcall *v7)(int, int *); // r2
  void (__fastcall *v8)(int, int *); // r2
  void (__fastcall *v9)(int, int *); // r2
  void (__fastcall *v10)(int, int *); // r2
  void (__fastcall *v11)(int, int *); // r2
  void (__fastcall *v12)(int, int *); // r2
  void (__fastcall *v13)(int, int *); // r2
  int v15; // [sp+18h] [bp-4h] BYREF
  int v16; // [sp+1Ch] [bp+0h]
  int v17; // [sp+20h] [bp+4h]
  int v18; // [sp+24h] [bp+8h]

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v15, 0x1000u, 0, "%s...", "do_32G_stop_seq_all_phy");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "do_32G_stop_seq_all_phy",
    23,
    8592,
    60,
    &v15);
  v15 = -3;
  v17 = 0;
  v18 = 0;
  v5 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v16 = 0;
  LOBYTE(v18) = a3;
  HIWORD(v17) = 144;
  LOBYTE(v17) = 1;
  v5(a1, &v15);
  usleep((__useconds_t)&stru_18694.st_info);
  v17 = 9502720;
  v18 = 0;
  v16 = 0;
  v6 = *(void (__fastcall **)(int, int *))(a1 + 156);
  LOBYTE(v17) = 1;
  v15 = -2147450879;
  LOBYTE(v18) = a3;
  v6(a1, &v15);
  usleep((__useconds_t)&stru_18694.st_info);
  v17 = 0;
  v18 = 0;
  v16 = 0;
  v7 = *(void (__fastcall **)(int, int *))(a1 + 156);
  LOBYTE(v17) = 1;
  HIWORD(v17) = 144;
  LOBYTE(v18) = a3;
  v15 = 0;
  v7(a1, &v15);
  usleep((__useconds_t)&stru_18694.st_info);
  v17 = 9502721;
  v18 = 0;
  v16 = 0;
  v15 = -2147450800;
  v8 = *(void (__fastcall **)(int, int *))(a1 + 156);
  LOBYTE(v18) = a3;
  v8(a1, &v15);
  usleep((__useconds_t)&stru_18694.st_info);
  v17 = 1;
  v18 = 0;
  v16 = 0;
  v15 = -257;
  v9 = *(void (__fastcall **)(int, int *))(a1 + 156);
  HIWORD(v17) = 144;
  LOBYTE(v18) = a3;
  v9(a1, &v15);
  usleep((__useconds_t)&stru_18694.st_info);
  v17 = 0;
  v18 = 0;
  v15 = -2147450879;
  v10 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v16 = 0;
  LOBYTE(v17) = 1;
  HIWORD(v17) = 145;
  LOBYTE(v18) = a3;
  v10(a1, &v15);
  usleep((__useconds_t)&stru_18694.st_info);
  v17 = 0;
  v18 = 0;
  v16 = 0;
  v11 = *(void (__fastcall **)(int, int *))(a1 + 156);
  LOBYTE(v17) = 1;
  HIWORD(v17) = 144;
  LOBYTE(v18) = a3;
  v15 = 0;
  v11(a1, &v15);
  usleep((__useconds_t)&stru_18694.st_info);
  v17 = 9502721;
  v18 = 0;
  v16 = 0;
  v15 = -2147450804;
  v12 = *(void (__fastcall **)(int, int *))(a1 + 156);
  LOBYTE(v18) = a3;
  v12(a1, &v15);
  usleep((__useconds_t)&stru_18694.st_info);
  v17 = 0;
  v13 = *(void (__fastcall **)(int, int *))(a1 + 156);
  HIWORD(v17) = 144;
  v16 = 0;
  LOBYTE(v17) = 1;
  v18 = a3;
  v15 = 0;
  v13(a1, &v15);
  usleep((__useconds_t)&stru_18694.st_info);
  v15 = -2147450879;
  v17 = 9502721;
  v16 = 0;
  v18 = a3;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v15);
  usleep((__useconds_t)&stru_18694.st_info);
  return 0;
}
