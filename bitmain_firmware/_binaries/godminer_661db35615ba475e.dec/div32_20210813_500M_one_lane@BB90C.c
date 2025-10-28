int __fastcall div32_20210813_500M_one_lane(int a1, int a2, int a3, int a4)
{
  void (__fastcall *v8)(int, unsigned int *); // r2
  void (__fastcall *v9)(int, unsigned int *); // r2
  void (__fastcall *v10)(int, unsigned int *); // r2
  void (__fastcall *v11)(int, unsigned int *); // r2
  void (__fastcall *v12)(int, unsigned int *); // r3
  void (__fastcall *v13)(int, unsigned int *); // r3
  void (__fastcall *v14)(int, unsigned int *); // r2
  void (__fastcall *v15)(int, unsigned int *); // r2
  void (__fastcall *v16)(int, unsigned int *); // r2
  void (__fastcall *v17)(int, unsigned int *); // r3
  void (__fastcall *v18)(int, unsigned int *); // r3
  void (__fastcall *v19)(int, unsigned int *); // r3
  void (__fastcall *v20)(int, unsigned int *); // r3
  void (__fastcall *v21)(int, unsigned int *); // r2
  void (__fastcall *v22)(int, unsigned int *); // r2
  void (__fastcall *v23)(int, unsigned int *); // r2
  void (__fastcall *v24)(int, unsigned int *); // r3
  void (__fastcall *v25)(int, unsigned int *); // r3
  void (__fastcall *v26)(int, unsigned int *); // r3
  void (__fastcall *v27)(int, unsigned int *); // r3
  void (__fastcall *v28)(int, unsigned int *); // r3
  void (__fastcall *v29)(int, unsigned int *); // r3
  void (__fastcall *v30)(int, unsigned int *); // r3
  void (__fastcall *v31)(int, unsigned int *); // r3
  void (__fastcall *v32)(int, unsigned int *); // r3
  void (__fastcall *v33)(int, unsigned int *); // r3
  void (__fastcall *v34)(int, unsigned int *); // r3
  void (__fastcall *v35)(int, unsigned int *); // r3
  void (__fastcall *v36)(int, unsigned int *); // r3
  unsigned int v38; // [sp+20h] [bp-1004h] BYREF
  int v39; // [sp+24h] [bp-1000h]
  int v40; // [sp+28h] [bp-FFCh]
  int v41; // [sp+2Ch] [bp-FF8h]

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(
    (char *)&v38,
    0x1000u,
    0,
    "%s chip_id %02x core_id %02x channel_id %02x",
    "div32_20210813_500M_one_lane",
    a2,
    a3,
    a4);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "div32_20210813_500M_one_lane",
    28,
    10003,
    60,
    &v38);
  v40 = 0;
  v41 = 0;
  v39 = 0;
  v38 = 0xFFFF;
  v8 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v41) = a3;
  HIWORD(v40) = 144;
  LOBYTE(v40) = 1;
  v8(a1, &v38);
  usleep((__useconds_t)"ead_unregister_cancel");
  v41 = 0;
  v39 = 0;
  v40 = 9502721;
  v38 = (unsigned __int16)((_WORD)a4 << 12) | 0x80000001;
  v9 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v41) = a3;
  v9(a1, &v38);
  usleep((__useconds_t)"ead_unregister_cancel");
  v40 = 0;
  v41 = 0;
  v10 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v39 = 0;
  LOBYTE(v40) = 1;
  v38 = -65536;
  HIWORD(v40) = 144;
  LOBYTE(v41) = a3;
  v10(a1, &v38);
  usleep((__useconds_t)"ead_unregister_cancel");
  v40 = 0;
  v41 = 0;
  v39 = 0;
  v11 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v38 = (unsigned __int16)((_WORD)a4 << 12) | 0x8000008B;
  HIWORD(v40) = 145;
  LOBYTE(v40) = 1;
  LOBYTE(v41) = a3;
  v11(a1, &v38);
  usleep((__useconds_t)"ead_unregister_cancel");
  v38 = -65536;
  v40 = 0;
  v41 = 0;
  v12 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v39 = 0;
  LOBYTE(v40) = 1;
  HIWORD(v40) = 144;
  LOBYTE(v41) = a3;
  v12(a1, &v38);
  usleep((__useconds_t)"ead_unregister_cancel");
  v38 = (unsigned __int16)((_WORD)a4 << 12) | 0x80000001;
  v39 = 0;
  v40 = 9502721;
  v41 = (unsigned __int8)a3;
  (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v38);
  usleep((__useconds_t)"ead_unregister_cancel");
  v38 = 0xFFFF;
  v40 = 0;
  v41 = 0;
  v13 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v39 = 0;
  LOBYTE(v40) = 1;
  HIWORD(v40) = 144;
  LOBYTE(v41) = a3;
  v13(a1, &v38);
  usleep((__useconds_t)"ead_unregister_cancel");
  v40 = 9502720;
  v41 = 0;
  v39 = 0;
  v38 = (unsigned __int16)((_WORD)a4 << 12) | 0x8000008C;
  v14 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v40) = 1;
  LOBYTE(v41) = a3;
  v14(a1, &v38);
  usleep((__useconds_t)"ead_unregister_cancel");
  v41 = 0;
  v39 = 0;
  v40 = 9437185;
  v38 = (unsigned int)&loc_FFFFC + 3;
  v15 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v41) = a3;
  v15(a1, &v38);
  usleep((__useconds_t)"ead_unregister_cancel");
  v38 = (unsigned __int16)((_WORD)a4 << 12) | 0x80000001;
  v39 = 0;
  v40 = 9502721;
  v41 = (unsigned __int8)a3;
  (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v38);
  usleep((__useconds_t)"ead_unregister_cancel");
  v40 = 0;
  v41 = 0;
  v39 = 0;
  v16 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v40) = 1;
  HIWORD(v40) = 144;
  LOBYTE(v41) = a3;
  v38 = 0;
  v16(a1, &v38);
  usleep((__useconds_t)"ead_unregister_cancel");
  v38 = (unsigned __int16)((_WORD)a4 << 12) | 0x8000008C;
  v40 = 0;
  v41 = 0;
  v17 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v39 = 0;
  LOBYTE(v40) = 1;
  HIWORD(v40) = 145;
  LOBYTE(v41) = a3;
  v17(a1, &v38);
  usleep((__useconds_t)"ead_unregister_cancel");
  v41 = 0;
  v39 = 0;
  v40 = 9437185;
  v38 = -1048576;
  v18 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v41) = a3;
  v18(a1, &v38);
  usleep((__useconds_t)"ead_unregister_cancel");
  v19 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v38 = (unsigned __int16)((_WORD)a4 << 12) | 0x80000001;
  v39 = 0;
  v40 = 9502721;
  v41 = (unsigned __int8)a3;
  v19(a1, &v38);
  usleep((__useconds_t)"ead_unregister_cancel");
  v40 = 0;
  v41 = 0;
  v39 = 0;
  v20 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v40) = 1;
  HIWORD(v40) = 144;
  LOBYTE(v41) = a3;
  v38 = 0;
  v20(a1, &v38);
  usleep((__useconds_t)"ead_unregister_cancel");
  v40 = 9502720;
  v41 = 0;
  v39 = 0;
  v21 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v38 = (unsigned __int16)((_WORD)a4 << 12) | 0x8000008D;
  LOBYTE(v40) = 1;
  LOBYTE(v41) = a3;
  v21(a1, &v38);
  usleep((__useconds_t)"ead_unregister_cancel");
  v40 = 0;
  v41 = 0;
  v39 = 0;
  v38 = 0xFFFFFF;
  v22 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v40) = 1;
  HIWORD(v40) = 144;
  LOBYTE(v41) = a3;
  v22(a1, &v38);
  usleep((__useconds_t)"ead_unregister_cancel");
  v38 = (unsigned __int16)((_WORD)a4 << 12) | 0x80000001;
  v39 = 0;
  v40 = 9502721;
  v41 = (unsigned __int8)a3;
  (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v38);
  usleep((__useconds_t)"ead_unregister_cancel");
  v40 = 0;
  v41 = 0;
  v39 = 0;
  v38 = -16777216;
  v23 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v40) = 1;
  HIWORD(v40) = 144;
  LOBYTE(v41) = a3;
  v23(a1, &v38);
  usleep((__useconds_t)"ead_unregister_cancel");
  v38 = (unsigned __int16)((_WORD)a4 << 12) | 0x8000008D;
  v40 = 0;
  v41 = 0;
  v24 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v39 = 0;
  LOBYTE(v40) = 1;
  HIWORD(v40) = 145;
  LOBYTE(v41) = a3;
  v24(a1, &v38);
  usleep((__useconds_t)"ead_unregister_cancel");
  v38 = -16777216;
  v40 = 0;
  v41 = 0;
  v25 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v39 = 0;
  LOBYTE(v40) = 1;
  HIWORD(v40) = 144;
  LOBYTE(v41) = a3;
  v25(a1, &v38);
  usleep((__useconds_t)"ead_unregister_cancel");
  v26 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v38 = (unsigned __int16)((_WORD)a4 << 12) | 0x80000001;
  v39 = 0;
  v40 = 9502721;
  v41 = (unsigned __int8)a3;
  v26(a1, &v38);
  usleep((__useconds_t)"ead_unregister_cancel");
  v38 = 0xFFFFFF;
  v40 = 0;
  v41 = 0;
  v27 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v39 = 0;
  LOBYTE(v40) = 1;
  HIWORD(v40) = 144;
  LOBYTE(v41) = a3;
  v27(a1, &v38);
  usleep((__useconds_t)"ead_unregister_cancel");
  v39 = 0;
  v40 = 9502721;
  v38 = (unsigned __int16)((_WORD)a4 << 12) | 0x8000008E;
  v41 = (unsigned __int8)a3;
  (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v38);
  usleep((__useconds_t)"ead_unregister_cancel");
  v40 = 1;
  v41 = 0;
  v39 = 0;
  v38 = 4095;
  v28 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  HIWORD(v40) = 144;
  LOBYTE(v41) = a3;
  v28(a1, &v38);
  usleep((__useconds_t)"ead_unregister_cancel");
  v29 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v38 = (unsigned __int16)((_WORD)a4 << 12) | 0x80000001;
  v39 = 0;
  v40 = 9502721;
  v41 = (unsigned __int8)a3;
  v29(a1, &v38);
  usleep((__useconds_t)"ead_unregister_cancel");
  v40 = 0;
  v41 = 0;
  v39 = 0;
  v30 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v40) = 1;
  HIWORD(v40) = 144;
  LOBYTE(v41) = a3;
  v38 = 0;
  v30(a1, &v38);
  usleep((__useconds_t)"ead_unregister_cancel");
  v39 = 0;
  v40 = 9502721;
  v38 = (unsigned __int16)((_WORD)a4 << 12) | 0x8000008A;
  v41 = (unsigned __int8)a3;
  (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v38);
  usleep((__useconds_t)"ead_unregister_cancel");
  v41 = 0;
  v39 = 0;
  v40 = 9437185;
  v38 = -4096;
  v31 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v41) = a3;
  v31(a1, &v38);
  usleep((__useconds_t)"ead_unregister_cancel");
  v32 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v38 = (unsigned __int16)((_WORD)a4 << 12) | 0x80000001;
  v39 = 0;
  v40 = 9502721;
  v41 = (unsigned __int8)a3;
  v32(a1, &v38);
  usleep((__useconds_t)"ead_unregister_cancel");
  v40 = 0;
  v41 = 0;
  v39 = 0;
  v33 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v40) = 1;
  HIWORD(v40) = 144;
  LOBYTE(v41) = a3;
  v38 = 0;
  v33(a1, &v38);
  usleep((__useconds_t)"ead_unregister_cancel");
  v34 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v38 = (unsigned __int16)((_WORD)a4 << 12) | 0x8000008B;
  v39 = 0;
  v40 = 9502721;
  v41 = (unsigned __int8)a3;
  v34(a1, &v38);
  usleep((__useconds_t)"ead_unregister_cancel");
  v40 = 9437184;
  v41 = 0;
  v35 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v39 = 0;
  LOBYTE(v40) = 1;
  LOBYTE(v41) = a3;
  v38 = 0;
  v35(a1, &v38);
  usleep((__useconds_t)"ead_unregister_cancel");
  v36 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v38 = (unsigned __int16)((_WORD)a4 << 12) | 0x80000001;
  v39 = 0;
  v40 = 9502721;
  v41 = (unsigned __int8)a3;
  v36(a1, &v38);
  usleep((__useconds_t)"ead_unregister_cancel");
  return 0;
}
