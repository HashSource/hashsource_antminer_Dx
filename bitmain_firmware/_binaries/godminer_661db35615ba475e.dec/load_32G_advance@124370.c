int __fastcall load_32G_advance(int a1, int a2, unsigned __int8 a3)
{
  void (__fastcall *v5)(int, int *); // r2
  void (__fastcall *v6)(int, int *); // r2
  void (__fastcall *v7)(int, int *); // r2
  void (__fastcall *v8)(int, int *); // r2
  void (__fastcall *v9)(int, int *); // r3
  int v11; // [sp+10h] [bp-1004h] BYREF
  int v12; // [sp+14h] [bp-1000h]
  int v13; // [sp+18h] [bp-FFCh]
  int v14; // [sp+1Ch] [bp-FF8h]

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v11, 0x1000u, 0, "%s...", "load_32G_advance");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "load_32G_advance",
    16,
    8714,
    60,
    &v11);
  v13 = 0;
  v14 = 0;
  v11 = 0x7FFFFFFF;
  v5 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v12 = 0;
  LOBYTE(v14) = a3;
  HIWORD(v13) = 144;
  LOBYTE(v13) = 1;
  v5(a1, &v11);
  usleep((__useconds_t)"ead_unregister_cancel");
  v13 = 9502720;
  v14 = 0;
  v12 = 0;
  v6 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v13) = 1;
  LOBYTE(v14) = a3;
  v11 = -2147450879;
  v6(a1, &v11);
  usleep((__useconds_t)"ead_unregister_cancel");
  v13 = 9437184;
  v14 = 0;
  v12 = 0;
  v7 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v13) = 1;
  LOBYTE(v14) = a3;
  v11 = 0;
  v7(a1, &v11);
  usleep((__useconds_t)"ead_unregister_cancel");
  v13 = 9502721;
  v14 = 0;
  v12 = 0;
  v11 = -2147450807;
  v8 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v14) = a3;
  v8(a1, &v11);
  usleep((__useconds_t)"ead_unregister_cancel");
  v13 = 9437184;
  v14 = 0;
  v9 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v12 = 0;
  LOBYTE(v13) = 1;
  LOBYTE(v14) = a3;
  v11 = 0;
  v9(a1, &v11);
  usleep((__useconds_t)"ead_unregister_cancel");
  v13 = 9502721;
  v11 = -2147450879;
  v12 = 0;
  v14 = a3;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v11);
  usleep((__useconds_t)"ead_unregister_cancel");
  return 0;
}
