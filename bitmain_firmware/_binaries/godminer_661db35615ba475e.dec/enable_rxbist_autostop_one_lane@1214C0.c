int __fastcall enable_rxbist_autostop_one_lane(int a1, int a2, unsigned __int8 a3, __int16 a4, unsigned __int8 a5)
{
  void (__fastcall *v8)(int, int *); // r3
  void (__fastcall *v9)(int, int *); // r3
  void (__fastcall *v10)(int, int *); // r3
  void (__fastcall *v11)(int, int *); // r3
  void (__fastcall *v12)(int, int *); // r3
  void (__fastcall *v13)(int, int *); // r3
  void (__fastcall *v14)(int, int *); // r3
  void (__fastcall *v15)(int, int *); // r3
  void (__fastcall *v16)(int, int *); // r3
  int v18; // [sp+20h] [bp-1004h] BYREF
  int v19; // [sp+24h] [bp-1000h]
  int v20; // [sp+28h] [bp-FFCh]
  int v21; // [sp+2Ch] [bp-FF8h]

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v18, 0x1000u, 0, "%s...", "enable_rxbist_autostop_one_lane");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "enable_rxbist_autostop_one_lane",
    31,
    9240,
    60,
    &v18);
  v18 = -5;
  v20 = 0;
  v21 = 0;
  v8 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v19 = 0;
  LOBYTE(v21) = a3;
  HIWORD(v20) = 144;
  LOBYTE(v20) = 1;
  v8(a1, &v18);
  usleep((__useconds_t)"ead_unregister_cancel");
  v20 = 9502721;
  v21 = 0;
  v19 = 0;
  v18 = (unsigned __int16)(a4 << 12) | 0x80000001;
  v9 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v21) = a3;
  v9(a1, &v18);
  usleep((__useconds_t)"ead_unregister_cancel");
  v20 = 1;
  v21 = 0;
  v19 = 0;
  v18 = 4;
  v10 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v20) = 144;
  LOBYTE(v21) = a3;
  v10(a1, &v18);
  usleep((__useconds_t)"ead_unregister_cancel");
  v20 = 9502721;
  v21 = 0;
  v19 = 0;
  v18 = (unsigned __int16)(a4 << 12) | 0x80000011;
  v11 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v21) = a3;
  v11(a1, &v18);
  usleep((__useconds_t)"ead_unregister_cancel");
  v20 = 1;
  v21 = 0;
  v19 = 0;
  v18 = -66060289;
  v12 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v20) = 144;
  LOBYTE(v21) = a3;
  v12(a1, &v18);
  usleep((__useconds_t)"ead_unregister_cancel");
  v13 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v18 = (unsigned __int16)(a4 << 12) | 0x80000001;
  v20 = 9502721;
  v19 = 0;
  v21 = a3;
  v13(a1, &v18);
  usleep((__useconds_t)"ead_unregister_cancel");
  v20 = 9437185;
  v19 = 0;
  v21 = a3;
  v18 = (a5 << 20) & 0x3F00000;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v18);
  usleep((__useconds_t)"ead_unregister_cancel");
  v20 = 1;
  v18 = (unsigned __int16)(a4 << 12) | 0x80000013;
  v21 = a3;
  v14 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v19 = 0;
  HIWORD(v20) = 145;
  v14(a1, &v18);
  usleep((__useconds_t)"ead_unregister_cancel");
  v20 = 9437184;
  v21 = 0;
  v15 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v19 = 0;
  LOBYTE(v20) = 1;
  LOBYTE(v21) = a3;
  v18 = 0;
  v15(a1, &v18);
  usleep((__useconds_t)"ead_unregister_cancel");
  v16 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v18 = (unsigned __int16)(a4 << 12) | 0x80000001;
  v20 = 9502721;
  v19 = 0;
  v21 = a3;
  v16(a1, &v18);
  usleep((__useconds_t)"ead_unregister_cancel");
  return 0;
}
