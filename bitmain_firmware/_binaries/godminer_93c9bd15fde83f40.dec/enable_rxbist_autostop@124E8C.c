int __fastcall enable_rxbist_autostop(int a1, int a2, unsigned __int8 a3, int a4, unsigned __int8 a5)
{
  bool v8; // zf
  int v9; // r3
  int v10; // r2
  void (__fastcall *v11)(int, int *); // r12
  void (__fastcall *v12)(int, int *); // r2
  void (__fastcall *v13)(int, int *); // r3
  void (__fastcall *v14)(int, int *); // r3
  void (__fastcall *v15)(int, int *); // r3
  void (__fastcall *v16)(int, int *); // r3
  void (__fastcall *v17)(int, int *); // r3
  void (__fastcall *v18)(int, int *); // r3
  int v20; // [sp+18h] [bp-100Ch]
  int v21; // [sp+1Ch] [bp-1008h]
  int v22; // [sp+20h] [bp-1004h] BYREF
  int v23; // [sp+24h] [bp-1000h]
  int v24; // [sp+28h] [bp-FFCh]
  int v25; // [sp+2Ch] [bp-FF8h]

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v22, 0x1000u, 0, "%s...", "enable_rxbist_autostop");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "enable_rxbist_autostop",
    22,
    9223,
    60,
    &v22);
  v8 = a4 == 8;
  LOWORD(v9) = -4079;
  LOWORD(v10) = -4077;
  if ( a4 == 8 )
    a4 = -2147422207;
  v11 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v24 = 0;
  HIWORD(v9) = 0x8000;
  v22 = -5;
  if ( !v8 )
    v9 = -2147483631;
  v25 = 0;
  HIWORD(v10) = 0x8000;
  if ( !v8 )
    v10 = -2147483629;
  v23 = 0;
  if ( !v8 )
    a4 = -2147483647;
  HIWORD(v24) = 144;
  LOBYTE(v25) = a3;
  LOBYTE(v24) = 1;
  v21 = v9;
  v20 = v10;
  v11(a1, &v22);
  usleep((__useconds_t)&stru_18694.st_info);
  v22 = a4;
  v24 = 0;
  v25 = 0;
  v12 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v23 = 0;
  LOBYTE(v24) = 1;
  LOBYTE(v25) = a3;
  HIWORD(v24) = 145;
  v12(a1, &v22);
  usleep((__useconds_t)&stru_18694.st_info);
  v23 = 0;
  v24 = 9437185;
  v22 = 4;
  v25 = a3;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v22);
  usleep((__useconds_t)&stru_18694.st_info);
  v22 = v21;
  v24 = 0;
  v25 = 0;
  v13 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v23 = 0;
  LOBYTE(v24) = 1;
  HIWORD(v24) = 145;
  LOBYTE(v25) = a3;
  v13(a1, &v22);
  usleep((__useconds_t)&stru_18694.st_info);
  v23 = 0;
  v24 = 9437185;
  v22 = -66060289;
  v25 = a3;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v22);
  usleep((__useconds_t)&stru_18694.st_info);
  v22 = a4;
  v24 = 0;
  v25 = 0;
  v14 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v23 = 0;
  LOBYTE(v24) = 1;
  HIWORD(v24) = 145;
  LOBYTE(v25) = a3;
  v14(a1, &v22);
  usleep((__useconds_t)&stru_18694.st_info);
  v15 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v22 = (a5 << 20) & 0x3F00000;
  v23 = 0;
  v24 = 9437185;
  v25 = a3;
  v15(a1, &v22);
  usleep((__useconds_t)&stru_18694.st_info);
  v16 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v22 = v20;
  v23 = 0;
  v24 = 9502721;
  v25 = a3;
  v16(a1, &v22);
  usleep((__useconds_t)&stru_18694.st_info);
  v24 = 9437184;
  v17 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v23 = 0;
  LOBYTE(v24) = 1;
  v25 = a3;
  v22 = 0;
  v17(a1, &v22);
  usleep((__useconds_t)&stru_18694.st_info);
  v22 = a4;
  v24 = 0;
  v25 = 0;
  v18 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v23 = 0;
  LOBYTE(v24) = 1;
  HIWORD(v24) = 145;
  LOBYTE(v25) = a3;
  v18(a1, &v22);
  usleep((__useconds_t)&stru_18694.st_info);
  return 0;
}
