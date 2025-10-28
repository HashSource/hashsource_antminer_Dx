void *machine_runtime_ctrl_ltc_1489()
{
  void *v0; // r0
  void *v1; // r8
  int v2; // r1
  int v3; // r12
  int v4; // r3
  int v5; // r2
  _DWORD v7[28]; // [sp+10h] [bp-1070h] BYREF
  char v8[4096]; // [sp+80h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v8, 0x1000u, 0, 1216536);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/machine_runtime/ltc_1489/machine_runtime_ltc_1498.c",
    178,
    "machine_runtime_ctrl_ltc_1489",
    29,
    39,
    40,
    v8);
  memset(&v7[4], 0, 0x5Cu);
  v0 = calloc(1u, 0x70u);
  v1 = v0;
  if ( v0 )
  {
    LOWORD(v2) = 28456;
    LOWORD(v3) = 28452;
    HIWORD(v2) = (unsigned int)&loc_49E88 >> 16;
    LOWORD(v4) = 31608;
    HIWORD(v3) = (unsigned int)&loc_49E84 >> 16;
    HIWORD(v4) = (unsigned int)&locret_4AB50 >> 16;
    v7[1] = v2;
    LOWORD(v5) = 31976;
    LOWORD(v2) = 29420;
    HIWORD(v5) = (unsigned int)&loc_4ACC0 >> 16;
    v7[0] = v3;
    HIWORD(v2) = (unsigned int)&loc_4A2C4 >> 16;
    v7[2] = v4;
    LOWORD(v3) = 32584;
    LOWORD(v4) = 32616;
    HIWORD(v3) = (unsigned int)&loc_4AF20 >> 16;
    HIWORD(v4) = (unsigned int)&loc_4AF40 >> 16;
    v7[3] = v5;
    v7[8] = v2;
    LOWORD(v5) = -31232;
    LOWORD(v2) = -29648;
    v7[7] = v3;
    HIWORD(v5) = (unsigned int)&loc_4B788 >> 16;
    v7[9] = v4;
    HIWORD(v2) = (unsigned int)&loc_4BDB8 >> 16;
    LOWORD(v3) = -29860;
    LOWORD(v4) = -32172;
    HIWORD(v3) = (unsigned int)&loc_4BCE4 >> 16;
    HIWORD(v4) = (unsigned int)&loc_4B3DC >> 16;
    v7[10] = v5;
    v7[12] = v2;
    LOWORD(v5) = 29912;
    v7[11] = v3;
    HIWORD(v5) = (unsigned int)&dbl_4A4B0 >> 16;
    v7[13] = v4;
    v7[14] = v5;
    v7[19] = 3000000;
    v7[18] = "ync_get_dag_node_base";
    v7[22] = 1680;
    v7[27] = 1215804;
    memcpy(v0, v7, 0x70u);
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, 1216572);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/machine_runtime/ltc_1489/machine_runtime_ltc_1498.c",
      178,
      "machine_runtime_ctrl_ltc_1489",
      29,
      69,
      40,
      v8);
  }
  else
  {
    printf("invalid pointer(%s)!\n", 1215164);
  }
  return v1;
}
