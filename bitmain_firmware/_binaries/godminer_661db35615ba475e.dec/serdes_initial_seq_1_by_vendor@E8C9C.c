int __fastcall serdes_initial_seq_1_by_vendor(int a1, int a2, unsigned __int8 a3, unsigned __int16 a4)
{
  void (__fastcall *v6)(int, unsigned int *); // r2
  void (__fastcall *v7)(int, unsigned int *); // r2
  void (__fastcall *v8)(int, unsigned int *); // r2
  void (__fastcall *v9)(int, unsigned int *); // r2
  void (__fastcall *v10)(int, unsigned int *); // r2
  void (__fastcall *v11)(int, unsigned int *); // r2
  void (__fastcall *v12)(int, unsigned int *); // r2
  void (__fastcall *v13)(int, unsigned int *); // r3
  void (__fastcall *v14)(int, unsigned int *); // r3
  void (__fastcall *v15)(int, unsigned int *); // r3
  __int16 v16; // r3
  void (__fastcall *v17)(int, unsigned int *); // r2
  void (__fastcall *v18)(int, unsigned int *); // r2
  void (__fastcall *v19)(int, unsigned int *); // r2
  void (__fastcall *v20)(int, unsigned int *); // r2
  void (__fastcall *v21)(int, unsigned int *); // r2
  void (__fastcall *v22)(int, unsigned int *); // r2
  void (__fastcall *v23)(int, unsigned int *); // r2
  void (__fastcall *v24)(int, unsigned int *); // r2
  void (__fastcall *v25)(int, unsigned int *); // r2
  void (__fastcall *v26)(int, unsigned int *); // r2
  __int16 v29; // [sp+10h] [bp-1024h]
  unsigned __int16 v30; // [sp+14h] [bp-1020h]
  int v31; // [sp+18h] [bp-101Ch]
  unsigned int v32; // [sp+30h] [bp-1004h] BYREF
  int v33; // [sp+34h] [bp-1000h]
  int v34; // [sp+38h] [bp-FFCh]
  int v35; // [sp+3Ch] [bp-FF8h]

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v32, 0x1000u, 0, "%s ...", "serdes_initial_seq_1_by_vendor");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_initial_seq_1_by_vendor",
    30,
    3346,
    60,
    &v32);
  v34 = 9437184;
  v35 = 0;
  v33 = 0;
  v32 = 252182532;
  v6 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v35) = a3;
  LOBYTE(v34) = 1;
  v31 = a4;
  v6(a1, &v32);
  usleep((__useconds_t)"ead_unregister_cancel");
  v35 = 0;
  v33 = 0;
  v32 = -2147438529;
  v34 = 9502721;
  v7 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v35) = a3;
  v7(a1, &v32);
  usleep((__useconds_t)"ead_unregister_cancel");
  v33 = 0;
  v34 = 9437185;
  v32 = 839027724;
  v35 = a3;
  (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v32);
  usleep((__useconds_t)"ead_unregister_cancel");
  v35 = 0;
  v33 = 0;
  v32 = -2147438590;
  v34 = 9502721;
  v8 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v35) = a3;
  v8(a1, &v32);
  usleep((__useconds_t)"ead_unregister_cancel");
  v35 = 0;
  v33 = 0;
  v34 = 9437185;
  v9 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v35) = a3;
  v32 = -1073676160;
  v9(a1, &v32);
  usleep((__useconds_t)"ead_unregister_cancel");
  v35 = 0;
  v33 = 0;
  v32 = -2147438589;
  v34 = 9502721;
  v10 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v35) = a3;
  v10(a1, &v32);
  usleep((__useconds_t)"ead_unregister_cancel");
  v32 = 252182532;
  v34 = 0;
  v35 = 0;
  v11 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v33 = 0;
  LOBYTE(v34) = 1;
  HIWORD(v34) = 144;
  LOBYTE(v35) = a3;
  v11(a1, &v32);
  usleep((__useconds_t)"ead_unregister_cancel");
  v35 = 0;
  v33 = 0;
  v32 = -2147434433;
  v34 = 9502721;
  v12 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v35) = a3;
  v12(a1, &v32);
  usleep((__useconds_t)"ead_unregister_cancel");
  v32 = 839027724;
  v34 = 0;
  v35 = 0;
  v13 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v33 = 0;
  LOBYTE(v34) = 1;
  HIWORD(v34) = 144;
  LOBYTE(v35) = a3;
  v13(a1, &v32);
  usleep((__useconds_t)"ead_unregister_cancel");
  v35 = 0;
  v33 = 0;
  v32 = -2147434494;
  v34 = 9502721;
  v14 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v35) = a3;
  v14(a1, &v32);
  usleep((__useconds_t)"ead_unregister_cancel");
  v32 = -1073676160;
  v34 = 0;
  v35 = 0;
  v15 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v33 = 0;
  LOBYTE(v34) = 1;
  HIWORD(v34) = 144;
  LOBYTE(v35) = a3;
  v15(a1, &v32);
  usleep((__useconds_t)"ead_unregister_cancel");
  v34 = 9502721;
  v33 = 0;
  v35 = a3;
  v32 = -2147434493;
  (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v32);
  usleep((__useconds_t)"ead_unregister_cancel");
  if ( a4 )
  {
    v16 = 0;
    v30 = 0;
    do
    {
      v32 = 17694978;
      v34 = 9437184;
      v35 = 0;
      v33 = 0;
      v17 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      LOBYTE(v35) = a3;
      LOBYTE(v34) = 1;
      v29 = v16 << 12;
      v17(a1, &v32);
      usleep((__useconds_t)"ead_unregister_cancel");
      v33 = 0;
      v34 = 9502721;
      v35 = a3;
      v32 = v29 & 0xF000 | 0x8000006E;
      (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v32);
      usleep((__useconds_t)"ead_unregister_cancel");
      v34 = 9437184;
      v35 = 0;
      v32 = 134283265;
      v33 = 0;
      v18 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      LOBYTE(v34) = 1;
      LOBYTE(v35) = a3;
      v18(a1, &v32);
      usleep((__useconds_t)"ead_unregister_cancel");
      v35 = 0;
      v33 = 0;
      v34 = 9502721;
      v32 = v29 & 0xF000 | 0x8000001D;
      v19 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      LOBYTE(v35) = a3;
      v19(a1, &v32);
      usleep((__useconds_t)"ead_unregister_cancel");
      v34 = 9437184;
      v35 = 0;
      v32 = 504234034;
      v20 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      v33 = 0;
      LOBYTE(v34) = 1;
      LOBYTE(v35) = a3;
      v20(a1, &v32);
      usleep((__useconds_t)"ead_unregister_cancel");
      v35 = 0;
      v33 = 0;
      v34 = 9502721;
      v32 = v29 & 0xF000 | 0x8000002A;
      v21 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      LOBYTE(v35) = a3;
      v21(a1, &v32);
      usleep((__useconds_t)"ead_unregister_cancel");
      v34 = 9437184;
      v35 = 0;
      v32 = 267913217;
      v33 = 0;
      v22 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      LOBYTE(v34) = 1;
      LOBYTE(v35) = a3;
      v22(a1, &v32);
      usleep((__useconds_t)"ead_unregister_cancel");
      v35 = 0;
      v33 = 0;
      v34 = 9502721;
      v32 = v29 & 0xF000 | 0x80000019;
      v23 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      LOBYTE(v35) = a3;
      v23(a1, &v32);
      usleep((__useconds_t)"ead_unregister_cancel");
      v34 = 9437184;
      v35 = 0;
      v32 = -1610579952;
      v33 = 0;
      v24 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      LOBYTE(v34) = 1;
      LOBYTE(v35) = a3;
      v24(a1, &v32);
      usleep((__useconds_t)"ead_unregister_cancel");
      v35 = 0;
      v33 = 0;
      v34 = 9502721;
      v32 = v29 & 0xF000 | 0x8000001A;
      v25 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      LOBYTE(v35) = a3;
      v25(a1, &v32);
      usleep((__useconds_t)"ead_unregister_cancel");
      v34 = 9437184;
      v35 = 0;
      v32 = 338179136;
      v33 = 0;
      v26 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      LOBYTE(v34) = 1;
      LOBYTE(v35) = a3;
      v26(a1, &v32);
      usleep((__useconds_t)"ead_unregister_cancel");
      v34 = 9502721;
      v33 = 0;
      v32 = v29 & 0xF000 | 0x80000047;
      v35 = a3;
      (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v32);
      usleep((__useconds_t)"ead_unregister_cancel");
      v16 = ++v30;
    }
    while ( v30 != v31 );
  }
  return 0;
}
