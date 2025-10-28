int __fastcall div32_20210813_500M(int a1, int a2, int a3, int a4)
{
  int v8; // r3
  unsigned int v9; // r2
  void (__fastcall *v10)(int, int *); // r12
  void (__fastcall *v11)(int, int *); // r12
  void (__fastcall *v12)(int, int *); // r12
  void (__fastcall *v13)(int, int *); // r12
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
  void (__fastcall *v26)(int, int *); // r3
  void (__fastcall *v27)(int, int *); // r3
  void (__fastcall *v28)(int, int *); // r3
  void (__fastcall *v29)(int, int *); // r3
  void (__fastcall *v30)(int, int *); // r3
  void (__fastcall *v31)(int, int *); // r3
  void (__fastcall *v32)(int, int *); // r3
  void (__fastcall *v33)(int, int *); // r3
  void (__fastcall *v34)(int, int *); // r3
  void (__fastcall *v35)(int, int *); // r3
  void (__fastcall *v36)(int, int *); // r3
  void (__fastcall *v37)(int, int *); // r3
  void (__fastcall *v38)(int, int *); // r3
  void (__fastcall *v39)(int, int *); // r3
  void (__fastcall *v40)(int, int *); // r3
  void (__fastcall *v41)(int, int *); // r3
  void (__fastcall *v42)(int, int *); // r3
  unsigned int v44; // [sp+10h] [bp-1024h]
  unsigned int v45; // [sp+14h] [bp-1020h]
  unsigned int v46; // [sp+18h] [bp-101Ch]
  unsigned int v47; // [sp+24h] [bp-1010h]
  unsigned int v48; // [sp+28h] [bp-100Ch]
  unsigned int v49; // [sp+2Ch] [bp-1008h]
  int v50; // [sp+30h] [bp-1004h] BYREF
  int v51; // [sp+34h] [bp-1000h]
  int v52; // [sp+38h] [bp-FFCh]
  int v53; // [sp+3Ch] [bp-FF8h]

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v50, 0x1000u, 0, "%s chip_id %02x core_id %02x", "div32_20210813_500M", a2, a3);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "div32_20210813_500M",
    19,
    9889,
    60,
    &v50);
  if ( a4 == 8 )
  {
    v9 = -2147422069;
    v44 = -2147422207;
    v46 = -2147422068;
    v45 = -2147422067;
    v49 = -2147422066;
    v48 = -2147422070;
  }
  else
  {
    v8 = (unsigned __int16)((_WORD)a4 << 12);
    v9 = v8 | 0x8000008B;
    v48 = v8 | 0x8000008A;
    v49 = v8 | 0x8000008E;
    v45 = v8 | 0x8000008D;
    v46 = v8 | 0x8000008C;
    v44 = v8 | 0x80000001;
  }
  v52 = 0;
  v53 = 0;
  v51 = 0;
  v50 = 0xFFFF;
  v10 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v53) = a3;
  LOBYTE(v52) = 1;
  HIWORD(v52) = 144;
  v47 = v9;
  v10(a1, &v50);
  usleep((__useconds_t)"ead_unregister_cancel");
  v52 = 0;
  v53 = 0;
  v11 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v51 = 0;
  LOBYTE(v52) = 1;
  v50 = v44;
  LOBYTE(v53) = a3;
  HIWORD(v52) = 145;
  v11(a1, &v50);
  usleep((__useconds_t)"ead_unregister_cancel");
  v52 = 0;
  v53 = 0;
  v12 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v51 = 0;
  LOBYTE(v52) = 1;
  v50 = -65536;
  HIWORD(v52) = 144;
  LOBYTE(v53) = a3;
  v12(a1, &v50);
  usleep((__useconds_t)"ead_unregister_cancel");
  v13 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v51 = 0;
  v52 = 9502721;
  v50 = v47;
  v53 = (unsigned __int8)a3;
  v13(a1, &v50);
  usleep((__useconds_t)"ead_unregister_cancel");
  v50 = -65536;
  v52 = 0;
  v53 = 0;
  v14 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v51 = 0;
  LOBYTE(v52) = 1;
  HIWORD(v52) = 144;
  LOBYTE(v53) = a3;
  v14(a1, &v50);
  usleep((__useconds_t)"ead_unregister_cancel");
  v53 = 0;
  v51 = 0;
  v52 = 9502721;
  v50 = v44;
  v15 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v53) = a3;
  v15(a1, &v50);
  usleep((__useconds_t)"ead_unregister_cancel");
  v50 = 0xFFFF;
  v52 = 0;
  v53 = 0;
  v16 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v51 = 0;
  LOBYTE(v52) = 1;
  HIWORD(v52) = 144;
  LOBYTE(v53) = a3;
  v16(a1, &v50);
  usleep((__useconds_t)"ead_unregister_cancel");
  v52 = 0;
  v53 = 0;
  v17 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v51 = 0;
  LOBYTE(v52) = 1;
  v50 = v46;
  HIWORD(v52) = 145;
  LOBYTE(v53) = a3;
  v17(a1, &v50);
  usleep((__useconds_t)"ead_unregister_cancel");
  v53 = 0;
  v51 = 0;
  v52 = 9437185;
  v50 = (int)&loc_FFFFC + 3;
  v18 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v53) = a3;
  v18(a1, &v50);
  usleep((__useconds_t)"ead_unregister_cancel");
  v53 = 0;
  v51 = 0;
  v52 = 9502721;
  v50 = v44;
  v19 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v53) = a3;
  v19(a1, &v50);
  usleep((__useconds_t)"ead_unregister_cancel");
  v52 = 0;
  v53 = 0;
  v51 = 0;
  v20 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v52) = 1;
  HIWORD(v52) = 144;
  v50 = 0;
  LOBYTE(v53) = a3;
  v20(a1, &v50);
  usleep((__useconds_t)"ead_unregister_cancel");
  v52 = 0;
  v53 = 0;
  v21 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v51 = 0;
  LOBYTE(v52) = 1;
  v50 = v46;
  HIWORD(v52) = 145;
  LOBYTE(v53) = a3;
  v21(a1, &v50);
  usleep((__useconds_t)"ead_unregister_cancel");
  v53 = 0;
  v51 = 0;
  v52 = 9437185;
  v50 = -1048576;
  v22 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v53) = a3;
  v22(a1, &v50);
  usleep((__useconds_t)"ead_unregister_cancel");
  v53 = 0;
  v51 = 0;
  v52 = 9502721;
  v50 = v44;
  v23 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v53) = a3;
  v23(a1, &v50);
  usleep((__useconds_t)"ead_unregister_cancel");
  v52 = 0;
  v53 = 0;
  v51 = 0;
  v24 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v52) = 1;
  HIWORD(v52) = 144;
  v50 = 0;
  LOBYTE(v53) = a3;
  v24(a1, &v50);
  usleep((__useconds_t)"ead_unregister_cancel");
  v52 = 0;
  v53 = 0;
  v25 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v51 = 0;
  LOBYTE(v52) = 1;
  v50 = v45;
  HIWORD(v52) = 145;
  LOBYTE(v53) = a3;
  v25(a1, &v50);
  usleep((__useconds_t)"ead_unregister_cancel");
  v52 = 0;
  v53 = 0;
  v51 = 0;
  v50 = 0xFFFFFF;
  v26 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v52) = 1;
  HIWORD(v52) = 144;
  LOBYTE(v53) = a3;
  v26(a1, &v50);
  usleep((__useconds_t)"ead_unregister_cancel");
  v53 = 0;
  v51 = 0;
  v52 = 9502721;
  v50 = v44;
  v27 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v53) = a3;
  v27(a1, &v50);
  usleep((__useconds_t)"ead_unregister_cancel");
  v52 = 0;
  v53 = 0;
  v51 = 0;
  v50 = -16777216;
  v28 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v52) = 1;
  HIWORD(v52) = 144;
  LOBYTE(v53) = a3;
  v28(a1, &v50);
  usleep((__useconds_t)"ead_unregister_cancel");
  v52 = 0;
  v53 = 0;
  v29 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v51 = 0;
  LOBYTE(v52) = 1;
  v50 = v45;
  HIWORD(v52) = 145;
  LOBYTE(v53) = a3;
  v29(a1, &v50);
  usleep((__useconds_t)"ead_unregister_cancel");
  v50 = -16777216;
  v52 = 0;
  v53 = 0;
  v30 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v51 = 0;
  LOBYTE(v52) = 1;
  HIWORD(v52) = 144;
  LOBYTE(v53) = a3;
  v30(a1, &v50);
  usleep((__useconds_t)"ead_unregister_cancel");
  v53 = 0;
  v51 = 0;
  v52 = 9502721;
  v50 = v44;
  v31 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v53) = a3;
  v31(a1, &v50);
  usleep((__useconds_t)"ead_unregister_cancel");
  v50 = 0xFFFFFF;
  v52 = 0;
  v53 = 0;
  v32 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v51 = 0;
  LOBYTE(v52) = 1;
  HIWORD(v52) = 144;
  LOBYTE(v53) = a3;
  v32(a1, &v50);
  usleep((__useconds_t)"ead_unregister_cancel");
  v52 = 0;
  v53 = 0;
  v33 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v51 = 0;
  LOBYTE(v52) = 1;
  v50 = v49;
  HIWORD(v52) = 145;
  LOBYTE(v53) = a3;
  v33(a1, &v50);
  usleep((__useconds_t)"ead_unregister_cancel");
  v52 = 1;
  v53 = 0;
  v51 = 0;
  v50 = 4095;
  v34 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v52) = 144;
  LOBYTE(v53) = a3;
  v34(a1, &v50);
  usleep((__useconds_t)"ead_unregister_cancel");
  v53 = 0;
  v51 = 0;
  v52 = 9502721;
  v50 = v44;
  v35 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v53) = a3;
  v35(a1, &v50);
  usleep((__useconds_t)"ead_unregister_cancel");
  v52 = 0;
  v53 = 0;
  v51 = 0;
  v36 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v52) = 1;
  HIWORD(v52) = 144;
  v50 = 0;
  LOBYTE(v53) = a3;
  v36(a1, &v50);
  usleep((__useconds_t)"ead_unregister_cancel");
  v52 = 0;
  v53 = 0;
  v37 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v51 = 0;
  LOBYTE(v52) = 1;
  v50 = v48;
  HIWORD(v52) = 145;
  LOBYTE(v53) = a3;
  v37(a1, &v50);
  usleep((__useconds_t)"ead_unregister_cancel");
  v53 = 0;
  v51 = 0;
  v52 = 9437185;
  v50 = -4096;
  v38 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v53) = a3;
  v38(a1, &v50);
  usleep((__useconds_t)"ead_unregister_cancel");
  v53 = 0;
  v51 = 0;
  v52 = 9502721;
  v50 = v44;
  v39 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v53) = a3;
  v39(a1, &v50);
  usleep((__useconds_t)"ead_unregister_cancel");
  v52 = 0;
  v53 = 0;
  v51 = 0;
  v40 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v52) = 1;
  HIWORD(v52) = 144;
  v50 = 0;
  LOBYTE(v53) = a3;
  v40(a1, &v50);
  usleep((__useconds_t)"ead_unregister_cancel");
  v52 = 0;
  v53 = 0;
  v41 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v51 = 0;
  LOBYTE(v52) = 1;
  v50 = v47;
  HIWORD(v52) = 145;
  LOBYTE(v53) = a3;
  v41(a1, &v50);
  usleep((__useconds_t)"ead_unregister_cancel");
  v52 = 9437184;
  v53 = 0;
  v42 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v51 = 0;
  LOBYTE(v52) = 1;
  v50 = 0;
  LOBYTE(v53) = a3;
  v42(a1, &v50);
  usleep((__useconds_t)"ead_unregister_cancel");
  v52 = 9502721;
  v51 = 0;
  v53 = (unsigned __int8)a3;
  v50 = v44;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v50);
  usleep((__useconds_t)"ead_unregister_cancel");
  return 0;
}
