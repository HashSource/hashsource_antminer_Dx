int __fastcall serdes_initial_seq_1_by_vendor(int a1, int a2, unsigned __int8 a3, unsigned __int16 a4)
{
  void (__fastcall *v6)(int, unsigned int *); // r3
  void (__fastcall *v7)(int, unsigned int *); // r3
  void (__fastcall *v8)(int, unsigned int *); // r3
  void (__fastcall *v9)(int, unsigned int *); // r3
  void (__fastcall *v10)(int, unsigned int *); // r3
  void (__fastcall *v11)(int, unsigned int *); // r3
  void (__fastcall *v12)(int, unsigned int *); // r3
  void (__fastcall *v13)(int, unsigned int *); // r3
  void (__fastcall *v14)(int, unsigned int *); // r3
  void (__fastcall *v15)(int, unsigned int *); // r3
  void (__fastcall *v16)(int, unsigned int *); // r3
  void (__fastcall *v17)(int, unsigned int *); // r3
  int v18; // r2
  void (__fastcall *v19)(int, unsigned int *); // r3
  void (__fastcall *v20)(int, unsigned int *); // r3
  void (__fastcall *v21)(int, unsigned int *); // r3
  void (__fastcall *v22)(int, unsigned int *); // r3
  void (__fastcall *v23)(int, unsigned int *); // r3
  void (__fastcall *v24)(int, unsigned int *); // r3
  void (__fastcall *v25)(int, unsigned int *); // r3
  void (__fastcall *v26)(int, unsigned int *); // r3
  void (__fastcall *v27)(int, unsigned int *); // r3
  __int16 v29; // [sp+10h] [bp-1024h]
  __int16 v31; // [sp+14h] [bp-1020h]
  int v32; // [sp+1Ch] [bp-1018h]
  unsigned int v33; // [sp+30h] [bp-1004h] BYREF
  int v34; // [sp+34h] [bp-1000h]
  int v35; // [sp+38h] [bp-FFCh]
  int v36; // [sp+3Ch] [bp-FF8h]

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v33, 0x1000u, 0, "%s ...", "serdes_initial_seq_1_by_vendor");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "serdes_initial_seq_1_by_vendor",
    30,
    3346,
    60,
    &v33);
  v35 = 0;
  v34 = 0;
  v33 = 252182532;
  v36 = a3;
  v6 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v35) = 1;
  HIWORD(v35) = 144;
  v32 = a4;
  v6(a1, &v33);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v35 = 0;
  v36 = 0;
  v34 = 0;
  v33 = -2147438529;
  v7 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v35) = 1;
  LOBYTE(v36) = a3;
  HIWORD(v35) = 145;
  v7(a1, &v33);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v35 = 0;
  v36 = 0;
  v34 = 0;
  v8 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v35) = 1;
  HIWORD(v35) = 144;
  LOBYTE(v36) = a3;
  v33 = 839027724;
  v8(a1, &v33);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v35 = 0;
  v36 = 0;
  v34 = 0;
  v33 = -2147438590;
  v9 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v35) = 1;
  HIWORD(v35) = 145;
  LOBYTE(v36) = a3;
  v9(a1, &v33);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v35 = 0;
  v36 = 0;
  v34 = 0;
  v10 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v33 = -1073676160;
  LOBYTE(v35) = 1;
  HIWORD(v35) = 144;
  LOBYTE(v36) = a3;
  v10(a1, &v33);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v35 = 0;
  v36 = 0;
  v34 = 0;
  v33 = -2147438589;
  v11 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v35) = 1;
  HIWORD(v35) = 145;
  LOBYTE(v36) = a3;
  v11(a1, &v33);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v33 = 252182532;
  v35 = 0;
  v36 = 0;
  v34 = 0;
  v12 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v35) = 1;
  HIWORD(v35) = 144;
  LOBYTE(v36) = a3;
  v12(a1, &v33);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v35 = 0;
  v36 = 0;
  v34 = 0;
  v33 = -2147434433;
  v13 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v35) = 1;
  HIWORD(v35) = 145;
  LOBYTE(v36) = a3;
  v13(a1, &v33);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v33 = 839027724;
  v35 = 0;
  v36 = 0;
  v34 = 0;
  v14 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v35) = 1;
  HIWORD(v35) = 144;
  LOBYTE(v36) = a3;
  v14(a1, &v33);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v35 = 0;
  v36 = 0;
  v34 = 0;
  v33 = -2147434494;
  v15 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v35) = 1;
  HIWORD(v35) = 145;
  LOBYTE(v36) = a3;
  v15(a1, &v33);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v16 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v33 = -1073676160;
  v34 = 0;
  v35 = 9437185;
  v36 = a3;
  v16(a1, &v33);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v35 = 9502721;
  v36 = 0;
  v34 = 0;
  v33 = -2147434493;
  v17 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v36) = a3;
  v17(a1, &v33);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  if ( a4 )
  {
    LOWORD(v18) = 0;
    do
    {
      v31 = v18;
      v33 = 17694978;
      v35 = 0;
      v34 = 0;
      v29 = (_WORD)v18 << 12;
      v36 = a3;
      v19 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      LOBYTE(v35) = 1;
      HIWORD(v35) = 144;
      v19(a1, &v33);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v34 = 0;
      v35 = 9502721;
      v36 = a3;
      v33 = v29 & 0xF000 | 0x8000006E;
      (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v33);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v35 = 0;
      v36 = 0;
      v34 = 0;
      v33 = 134283265;
      v20 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      LOBYTE(v35) = 1;
      HIWORD(v35) = 144;
      LOBYTE(v36) = a3;
      v20(a1, &v33);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v36 = 0;
      v34 = 0;
      v35 = 9502721;
      v33 = v29 & 0xF000 | 0x8000001D;
      v21 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      LOBYTE(v36) = a3;
      v21(a1, &v33);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v36 = 0;
      v34 = 0;
      v33 = 504234034;
      v35 = 1;
      v22 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      HIWORD(v35) = 144;
      LOBYTE(v36) = a3;
      v22(a1, &v33);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v34 = 0;
      v35 = 9502721;
      v33 = v29 & 0xF000 | 0x8000002A;
      v36 = a3;
      (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v33);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v35 = 0;
      v36 = 0;
      v34 = 0;
      v23 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      v33 = 267913217;
      LOBYTE(v35) = 1;
      HIWORD(v35) = 144;
      LOBYTE(v36) = a3;
      v23(a1, &v33);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v34 = 0;
      v35 = 9502721;
      v33 = v29 & 0xF000 | 0x80000019;
      v36 = a3;
      (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v33);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v36 = 0;
      v34 = 0;
      v33 = -1610579952;
      v35 = 1;
      v24 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      HIWORD(v35) = 144;
      LOBYTE(v36) = a3;
      v24(a1, &v33);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v36 = 0;
      v34 = 0;
      v35 = 9502721;
      v33 = v29 & 0xF000 | 0x8000001A;
      v25 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      LOBYTE(v36) = a3;
      v25(a1, &v33);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v35 = 9437185;
      v36 = 0;
      v34 = 0;
      v33 = 338179136;
      v26 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      LOBYTE(v36) = a3;
      v26(a1, &v33);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v35 = 1;
      v36 = 0;
      v33 = v29 & 0xF000 | 0x80000047;
      v34 = 0;
      v27 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
      HIWORD(v35) = 145;
      LOBYTE(v36) = a3;
      v27(a1, &v33);
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      v18 = (unsigned __int16)(v31 + 1);
    }
    while ( v18 != v32 );
  }
  return 0;
}
