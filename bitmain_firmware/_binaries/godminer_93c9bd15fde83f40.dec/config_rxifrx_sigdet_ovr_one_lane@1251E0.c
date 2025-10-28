int __fastcall config_rxifrx_sigdet_ovr_one_lane(int a1, int a2, unsigned __int8 a3, __int16 a4)
{
  void (__fastcall *v7)(int, unsigned int *); // r3
  void (__fastcall *v8)(int, unsigned int *); // r3
  void (__fastcall *v9)(int, unsigned int *); // r3
  void (__fastcall *v10)(int, unsigned int *); // r3
  void (__fastcall *v11)(int, unsigned int *); // r3
  void (__fastcall *v12)(int, unsigned int *); // r3
  void (__fastcall *v13)(int, unsigned int *); // r3
  void (__fastcall *v14)(int, unsigned int *); // r3
  void (__fastcall *v15)(int, unsigned int *); // r3
  unsigned int v17; // [sp+18h] [bp-4h] BYREF
  int v18; // [sp+1Ch] [bp+0h]
  int v19; // [sp+20h] [bp+4h]
  int v20; // [sp+24h] [bp+8h]

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v17, 0x1000u, 0, "%s...", "config_rxifrx_sigdet_ovr_one_lane");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "config_rxifrx_sigdet_ovr_one_lane",
    33,
    9211,
    60,
    &v17);
  v17 = -134217729;
  v19 = 0;
  v20 = 0;
  v18 = 0;
  v7 = *(void (__fastcall **)(int, unsigned int *))(a1 + 156);
  LOBYTE(v20) = a3;
  HIWORD(v19) = 144;
  LOBYTE(v19) = 1;
  v7(a1, &v17);
  usleep((__useconds_t)&stru_18694.st_info);
  v19 = 9502721;
  v18 = 0;
  v17 = (unsigned __int16)(a4 << 12) | 0x80000001;
  v20 = a3;
  (*(void (__fastcall **)(int, unsigned int *))(a1 + 156))(a1, &v17);
  usleep((__useconds_t)&stru_18694.st_info);
  v19 = 1;
  v20 = 0;
  v18 = 0;
  v17 = 0x8000000;
  v8 = *(void (__fastcall **)(int, unsigned int *))(a1 + 156);
  HIWORD(v19) = 144;
  LOBYTE(v20) = a3;
  v8(a1, &v17);
  usleep((__useconds_t)&stru_18694.st_info);
  v19 = 9502721;
  v20 = 0;
  v18 = 0;
  v17 = (unsigned __int16)(a4 << 12) | 0x80000099;
  v9 = *(void (__fastcall **)(int, unsigned int *))(a1 + 156);
  LOBYTE(v20) = a3;
  v9(a1, &v17);
  usleep((__useconds_t)&stru_18694.st_info);
  v19 = 1;
  v20 = 0;
  v18 = 0;
  v17 = 0x7FFFFFFF;
  v10 = *(void (__fastcall **)(int, unsigned int *))(a1 + 156);
  HIWORD(v19) = 144;
  LOBYTE(v20) = a3;
  v10(a1, &v17);
  usleep((__useconds_t)&stru_18694.st_info);
  v11 = *(void (__fastcall **)(int, unsigned int *))(a1 + 156);
  v17 = (unsigned __int16)(a4 << 12) | 0x80000001;
  v19 = 9502721;
  v18 = 0;
  v20 = a3;
  v11(a1, &v17);
  usleep((__useconds_t)&stru_18694.st_info);
  v19 = 1;
  v20 = 0;
  v18 = 0;
  v17 = 0x80000000;
  v12 = *(void (__fastcall **)(int, unsigned int *))(a1 + 156);
  HIWORD(v19) = 144;
  LOBYTE(v20) = a3;
  v12(a1, &v17);
  usleep((__useconds_t)&stru_18694.st_info);
  v19 = 9502721;
  v20 = 0;
  v18 = 0;
  v17 = (unsigned __int16)(a4 << 12) | 0x8000007F;
  v13 = *(void (__fastcall **)(int, unsigned int *))(a1 + 156);
  LOBYTE(v20) = a3;
  v13(a1, &v17);
  usleep((__useconds_t)&stru_18694.st_info);
  v19 = 9437184;
  v20 = 0;
  v14 = *(void (__fastcall **)(int, unsigned int *))(a1 + 156);
  v18 = 0;
  LOBYTE(v19) = 1;
  LOBYTE(v20) = a3;
  v17 = 0;
  v14(a1, &v17);
  usleep((__useconds_t)&stru_18694.st_info);
  v15 = *(void (__fastcall **)(int, unsigned int *))(a1 + 156);
  v17 = (unsigned __int16)(a4 << 12) | 0x80000001;
  v19 = 9502721;
  v18 = 0;
  v20 = a3;
  v15(a1, &v17);
  usleep((__useconds_t)&stru_18694.st_info);
  return 0;
}
