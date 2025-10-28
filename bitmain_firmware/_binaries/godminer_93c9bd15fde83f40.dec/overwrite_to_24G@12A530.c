int __fastcall overwrite_to_24G(int a1, int a2, int a3, int a4)
{
  void (__fastcall *v7)(int, int *); // r3
  void (__fastcall *v8)(int, int *); // r3
  void (__fastcall *v9)(int, int *); // r3
  void (__fastcall *v10)(int, int *); // r3
  void (__fastcall *v11)(int, int *); // r3
  void (__fastcall *v12)(int, int *); // r3
  void (__fastcall *v13)(int, int *); // r3
  void (__fastcall *v14)(int, int *); // r3
  void (__fastcall *v15)(int, int *); // r3
  void (__fastcall *v16)(int, int *); // r3
  void (__fastcall *v17)(int, int *); // r3
  void (__fastcall *v18)(int, int *); // r3
  void (__fastcall *v19)(int, int *); // r3
  void (__fastcall *v20)(int, int *); // r3
  void (__fastcall *v21)(int, int *); // r3
  void (__fastcall *v22)(int, int *); // r3
  void (__fastcall *v23)(int, int *); // r3
  void (__fastcall *v24)(int, int *); // r3
  void (__fastcall *v25)(int, int *); // r3
  int v27; // [sp+18h] [bp-1014h]
  int v28; // [sp+1Ch] [bp-1010h]
  int v29; // [sp+20h] [bp-100Ch]
  int v30; // [sp+24h] [bp-1008h]
  int v31; // [sp+28h] [bp-1004h] BYREF
  int v32; // [sp+2Ch] [bp-1000h]
  int v33; // [sp+30h] [bp-FFCh]
  int v34; // [sp+34h] [bp-FF8h]

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v31, 0x1000u, 0, &unk_171848, "overwrite_to_24G", a3);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "overwrite_to_24G",
    16,
    8235,
    60,
    &v31);
  if ( a4 == 8 )
  {
    v30 = 61442;
    v28 = 61448;
    v29 = 61443;
    v27 = 61441;
  }
  else
  {
    v27 = (unsigned __int16)((_WORD)a4 << 12) | 1;
    v30 = (unsigned __int16)((_WORD)a4 << 12) | 2;
    v28 = (unsigned __int16)((_WORD)a4 << 12) | 8;
    v29 = (unsigned __int16)((_WORD)a4 << 12) | 3;
  }
  v33 = 0;
  v34 = 0;
  v32 = 0;
  v31 = -1009;
  v7 = *(void (__fastcall **)(int, int *))(a1 + 156);
  LOBYTE(v34) = a3;
  LOBYTE(v33) = 1;
  HIWORD(v33) = 144;
  v7(a1, &v31);
  usleep((__useconds_t)&stru_18694.st_info);
  v33 = 0;
  v34 = 0;
  v8 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v32 = 0;
  LOBYTE(v33) = 1;
  v31 = -2147450879;
  LOBYTE(v34) = a3;
  HIWORD(v33) = 145;
  v8(a1, &v31);
  usleep((__useconds_t)&stru_18694.st_info);
  v33 = 1;
  v34 = 0;
  v32 = 0;
  v31 = 64;
  v9 = *(void (__fastcall **)(int, int *))(a1 + 156);
  HIWORD(v33) = 144;
  LOBYTE(v34) = a3;
  v9(a1, &v31);
  usleep((__useconds_t)&stru_18694.st_info);
  v34 = 0;
  v32 = 0;
  v33 = 9502721;
  v31 = -2147450878;
  v10 = *(void (__fastcall **)(int, int *))(a1 + 156);
  LOBYTE(v34) = a3;
  v10(a1, &v31);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_BF774(a1, a3, v27, 0xFFFCFFFF);
  sub_BF774(a1, a3, v30, 0x20000u);
  sub_BF774(a1, a3, v27, 0xFFFFFFFC);
  sub_BF774(a1, a3, v28, 2u);
  sub_BF774(a1, a3, v27, 0xFFFCFFFF);
  sub_BF774(a1, a3, v28, 0x30000u);
  sub_BF774(a1, a3, v27, 0xFFFCFFFF);
  sub_BF774(a1, a3, v29, 0x30000u);
  v33 = 1;
  v34 = 0;
  v32 = 0;
  v31 = -786433;
  v11 = *(void (__fastcall **)(int, int *))(a1 + 156);
  HIWORD(v33) = 144;
  LOBYTE(v34) = a3;
  v11(a1, &v31);
  usleep((__useconds_t)&stru_18694.st_info);
  v31 = -2147450879;
  v33 = 0;
  v34 = 0;
  v12 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v32 = 0;
  LOBYTE(v33) = 1;
  HIWORD(v33) = 145;
  LOBYTE(v34) = a3;
  v12(a1, &v31);
  usleep((__useconds_t)&stru_18694.st_info);
  v33 = 1;
  v34 = 0;
  v32 = 0;
  v31 = 786432;
  v13 = *(void (__fastcall **)(int, int *))(a1 + 156);
  HIWORD(v33) = 144;
  LOBYTE(v34) = a3;
  v13(a1, &v31);
  usleep((__useconds_t)&stru_18694.st_info);
  v34 = 0;
  v32 = 0;
  v33 = 9502721;
  v31 = -2147450818;
  v14 = *(void (__fastcall **)(int, int *))(a1 + 156);
  LOBYTE(v34) = a3;
  v14(a1, &v31);
  usleep((__useconds_t)&stru_18694.st_info);
  v33 = 1;
  v34 = 0;
  v32 = 0;
  v31 = -8388609;
  v15 = *(void (__fastcall **)(int, int *))(a1 + 156);
  HIWORD(v33) = 144;
  LOBYTE(v34) = a3;
  v15(a1, &v31);
  usleep((__useconds_t)&stru_18694.st_info);
  v31 = -2147450879;
  v33 = 0;
  v34 = 0;
  v16 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v32 = 0;
  LOBYTE(v33) = 1;
  HIWORD(v33) = 145;
  LOBYTE(v34) = a3;
  v16(a1, &v31);
  usleep((__useconds_t)&stru_18694.st_info);
  v33 = 1;
  v34 = 0;
  v32 = 0;
  v31 = 0x800000;
  v17 = *(void (__fastcall **)(int, int *))(a1 + 156);
  HIWORD(v33) = 144;
  LOBYTE(v34) = a3;
  v17(a1, &v31);
  usleep((__useconds_t)&stru_18694.st_info);
  v34 = 0;
  v32 = 0;
  v33 = 9502721;
  v31 = -2147450808;
  v18 = *(void (__fastcall **)(int, int *))(a1 + 156);
  LOBYTE(v34) = a3;
  v18(a1, &v31);
  usleep((__useconds_t)&stru_18694.st_info);
  v33 = 1;
  v34 = 0;
  v32 = 0;
  v31 = -805306369;
  v19 = *(void (__fastcall **)(int, int *))(a1 + 156);
  HIWORD(v33) = 144;
  LOBYTE(v34) = a3;
  v19(a1, &v31);
  usleep((__useconds_t)&stru_18694.st_info);
  v31 = -2147450879;
  v33 = 0;
  v34 = 0;
  v20 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v32 = 0;
  LOBYTE(v33) = 1;
  HIWORD(v33) = 145;
  LOBYTE(v34) = a3;
  v20(a1, &v31);
  usleep((__useconds_t)&stru_18694.st_info);
  v33 = 1;
  v34 = 0;
  v32 = 0;
  v31 = 805306368;
  v21 = *(void (__fastcall **)(int, int *))(a1 + 156);
  HIWORD(v33) = 144;
  LOBYTE(v34) = a3;
  v21(a1, &v31);
  usleep((__useconds_t)&stru_18694.st_info);
  v34 = 0;
  v32 = 0;
  v33 = 9502721;
  v31 = -2147450804;
  v22 = *(void (__fastcall **)(int, int *))(a1 + 156);
  LOBYTE(v34) = a3;
  v22(a1, &v31);
  usleep((__useconds_t)&stru_18694.st_info);
  sub_BF774(a1, a3, v27, 0);
  v33 = 0;
  v34 = 0;
  v32 = 0;
  v23 = *(void (__fastcall **)(int, int *))(a1 + 156);
  LOBYTE(v33) = 1;
  HIWORD(v33) = 144;
  v31 = 0;
  LOBYTE(v34) = a3;
  v23(a1, &v31);
  usleep((__useconds_t)&stru_18694.st_info);
  v31 = -2147450879;
  v33 = 0;
  v34 = 0;
  v24 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v32 = 0;
  LOBYTE(v33) = 1;
  HIWORD(v33) = 145;
  LOBYTE(v34) = a3;
  v24(a1, &v31);
  usleep((__useconds_t)&stru_18694.st_info);
  v33 = 9437184;
  v34 = 0;
  v25 = *(void (__fastcall **)(int, int *))(a1 + 156);
  v32 = 0;
  LOBYTE(v33) = 1;
  v31 = 0;
  LOBYTE(v34) = a3;
  v25(a1, &v31);
  usleep((__useconds_t)&stru_18694.st_info);
  v33 = 9502721;
  v32 = 0;
  v34 = (unsigned __int8)a3;
  v31 = -2147442687;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v31);
  usleep((__useconds_t)&stru_18694.st_info);
  return 0;
}
