void *machine_runtime_ctrl_ltc_1489()
{
  int v0; // r3
  int v1; // r1
  void *v2; // r0
  void *v3; // r8
  int v4; // r1
  int v5; // r12
  int v6; // r3
  int v7; // r2
  int v8; // r3
  int v9; // r1
  int v11; // r1
  const char *v12; // r0
  _DWORD v13[30]; // [sp+10h] [bp-1078h] BYREF
  char v14[4096]; // [sp+88h] [bp-1000h] BYREF

  V_LOCK();
  LOWORD(v0) = 25004;
  HIWORD(v0) = (unsigned int)"ic_num_base" >> 16;
  logfmt_raw(v14, 0x1000u, 0, v0);
  V_UNLOCK();
  LOWORD(v1) = 24788;
  HIWORD(v1) = (unsigned int)"ime_ctrl_ltc_1489() out" >> 16;
  zlog(g_zc, v1, 178, "machine_runtime_ctrl_ltc_1489", 29, 39, 40, v14);
  memset(&v13[4], 0, 0x64u);
  v2 = calloc(1u, 0x78u);
  v3 = v2;
  if ( v2 )
  {
    LOWORD(v4) = -17644;
    LOWORD(v5) = -17648;
    HIWORD(v4) = (unsigned int)&loc_4BBDC >> 16;
    LOWORD(v6) = -14252;
    HIWORD(v5) = (unsigned int)&loc_4BBD8 >> 16;
    HIWORD(v6) = (unsigned int)&loc_4C91C >> 16;
    v13[1] = v4;
    LOWORD(v7) = -13884;
    LOWORD(v4) = -16440;
    HIWORD(v7) = (unsigned int)&loc_4CA8C >> 16;
    v13[0] = v5;
    HIWORD(v4) = (unsigned int)&loc_4C090 >> 16;
    v13[2] = v6;
    LOWORD(v5) = -13268;
    LOWORD(v6) = -13236;
    HIWORD(v5) = (unsigned int)&loc_4CCF4 >> 16;
    HIWORD(v6) = (unsigned int)&loc_4CD14 >> 16;
    v13[3] = v7;
    v13[10] = v4;
    LOWORD(v7) = -9412;
    LOWORD(v4) = -7712;
    v13[7] = v5;
    HIWORD(v7) = (unsigned int)&loc_4DC04 >> 16;
    v13[11] = v6;
    HIWORD(v4) = (unsigned int)&loc_4E2A8 >> 16;
    LOWORD(v5) = -7924;
    LOWORD(v6) = -11852;
    HIWORD(v5) = (unsigned int)&loc_4E1D4 >> 16;
    HIWORD(v6) = (unsigned int)&loc_4D27C >> 16;
    v13[12] = v7;
    v13[14] = v4;
    LOWORD(v7) = -15948;
    v13[13] = v5;
    HIWORD(v7) = (unsigned int)&loc_4C27C >> 16;
    v13[15] = v6;
    LOWORD(v6) = 23172;
    HIWORD(v6) = (unsigned int)"oot/tmp/release/build/godminer-origin_godminer-new/machine_runtime/hns_2130/machine_runtime_hns_2130.c" >> 16;
    v13[16] = v7;
    v13[21] = 3000000;
    v13[20] = "json_delete";
    v13[24] = 1680;
    v13[29] = v6;
    memcpy(v2, v13, 0x78u);
    V_LOCK();
    LOWORD(v8) = 25040;
    HIWORD(v8) = (unsigned int)"start_mining_base" >> 16;
    logfmt_raw(v14, 0x1000u, 0, v8);
    V_UNLOCK();
    LOWORD(v9) = 24788;
    HIWORD(v9) = (unsigned int)"ime_ctrl_ltc_1489() out" >> 16;
    zlog(g_zc, v9, 178, "machine_runtime_ctrl_ltc_1489", 29, 69, 40, v14);
  }
  else
  {
    LOWORD(v11) = 22532;
    LOWORD(v12) = 5892;
    HIWORD(v11) = (unsigned int)"d/godminer-origin_godminer-new/machine_runtime/dash_1766/machine_runtime_dash_1766.c" >> 16;
    HIWORD(v12) = (unsigned int)"simulation submit thread create failed" >> 16;
    printf(v12, v11);
  }
  return v3;
}
