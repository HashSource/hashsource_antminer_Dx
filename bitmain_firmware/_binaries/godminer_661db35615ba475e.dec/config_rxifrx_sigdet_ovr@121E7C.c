int __fastcall config_rxifrx_sigdet_ovr(int a1, int a2, unsigned __int8 a3, int a4)
{
  int v7; // r11
  int v8; // lr
  int v9; // r2
  void (__fastcall *v10)(int, unsigned int *); // r2
  void (__fastcall *v11)(int, unsigned int *); // r3
  void (__fastcall *v12)(int, unsigned int *); // r3
  void (__fastcall *v13)(int, unsigned int *); // r3
  void (__fastcall *v14)(int, unsigned int *); // r3
  void (__fastcall *v15)(int, unsigned int *); // r3
  void (__fastcall *v16)(int, unsigned int *); // r3
  unsigned int v18; // [sp+10h] [bp-100Ch]
  unsigned int v19; // [sp+14h] [bp-1008h]
  unsigned int v20; // [sp+18h] [bp-1004h] BYREF
  int v21; // [sp+1Ch] [bp-1000h]
  int v22; // [sp+20h] [bp-FFCh]
  int v23; // [sp+24h] [bp-FF8h]

  v7 = -2147422055;
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v20, 0x1000u, 0, "%s...", "config_rxifrx_sigdet_ovr");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "config_rxifrx_sigdet_ovr",
    24,
    9195,
    60,
    &v20);
  v8 = -2147483495;
  if ( a4 == 8 )
    v8 = -2147422055;
  v9 = -2147483521;
  v18 = v8;
  if ( a4 == 8 )
    v9 = -2147422081;
  v20 = -134217729;
  v22 = 9437184;
  v23 = 0;
  v21 = 0;
  if ( a4 == 8 )
    v7 = -2147422207;
  v19 = v9;
  if ( a4 != 8 )
    v7 = -2147483647;
  v10 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v23) = a3;
  LOBYTE(v22) = 1;
  v10(a1, &v20);
  usleep((__useconds_t)"ead_unregister_cancel");
  v20 = v7;
  v22 = 0;
  v23 = 0;
  v11 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v21 = 0;
  LOBYTE(v22) = 1;
  LOBYTE(v23) = a3;
  HIWORD(v22) = 145;
  v11(a1, &v20);
  usleep((__useconds_t)"ead_unregister_cancel");
  v21 = 0;
  v22 = 9437185;
  v20 = 0x8000000;
  v23 = a3;
  (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v20);
  usleep((__useconds_t)"ead_unregister_cancel");
  v20 = v18;
  v22 = 0;
  v23 = 0;
  v12 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v21 = 0;
  LOBYTE(v22) = 1;
  HIWORD(v22) = 145;
  LOBYTE(v23) = a3;
  v12(a1, &v20);
  usleep((__useconds_t)"ead_unregister_cancel");
  v21 = 0;
  v22 = 9437185;
  v20 = 0x7FFFFFFF;
  v23 = a3;
  (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v20);
  usleep((__useconds_t)"ead_unregister_cancel");
  v20 = v7;
  v22 = 0;
  v23 = 0;
  v13 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v21 = 0;
  LOBYTE(v22) = 1;
  HIWORD(v22) = 145;
  LOBYTE(v23) = a3;
  v13(a1, &v20);
  usleep((__useconds_t)"ead_unregister_cancel");
  v21 = 0;
  v22 = 9437185;
  v20 = 0x80000000;
  v23 = a3;
  (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v20);
  usleep((__useconds_t)"ead_unregister_cancel");
  v14 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v20 = v19;
  v21 = 0;
  v22 = 9502721;
  v23 = a3;
  v14(a1, &v20);
  usleep((__useconds_t)"ead_unregister_cancel");
  v22 = 9437184;
  v15 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v21 = 0;
  LOBYTE(v22) = 1;
  v23 = a3;
  v20 = 0;
  v15(a1, &v20);
  usleep((__useconds_t)"ead_unregister_cancel");
  v20 = v7;
  v22 = 0;
  v23 = 0;
  v16 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v21 = 0;
  LOBYTE(v22) = 1;
  HIWORD(v22) = 145;
  LOBYTE(v23) = a3;
  v16(a1, &v20);
  usleep((__useconds_t)"ead_unregister_cancel");
  return 0;
}
