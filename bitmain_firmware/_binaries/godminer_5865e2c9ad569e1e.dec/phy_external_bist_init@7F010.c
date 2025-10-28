int __fastcall phy_external_bist_init(int a1, unsigned int a2, unsigned __int8 a3, int a4, int a5)
{
  int v7; // r8
  char *v8; // r1
  int v9; // r1
  unsigned __int8 *v10; // r2
  int v11; // r9
  int v12; // r10
  char *v13; // r1
  const char *v14; // r12
  const char *v15; // lr
  int v16; // r9
  int v17; // r1
  char *v18; // r1
  int v19; // lr
  int v20; // r1
  int v21; // r8
  char *v22; // r1
  int v23; // r11
  int v24; // lr
  int v25; // r1
  char *v27; // r1
  int v28; // r1
  char *v29; // r1
  int v30; // r1
  int v31; // [sp+38h] [bp-10DCh]
  int v32; // [sp+3Ch] [bp-10D8h]
  int v33; // [sp+40h] [bp-10D4h]
  unsigned __int8 v35; // [sp+48h] [bp-10CCh]
  unsigned __int8 v36; // [sp+4Fh] [bp-10C5h] BYREF
  _DWORD v37[7]; // [sp+50h] [bp-10C4h] BYREF
  int v38; // [sp+6Ch] [bp-10A8h]
  _DWORD v39[7]; // [sp+70h] [bp-10A4h] BYREF
  int v40; // [sp+8Ch] [bp-1088h]
  _DWORD v41[7]; // [sp+90h] [bp-1084h] BYREF
  int v42; // [sp+ACh] [bp-1068h]
  _DWORD v43[7]; // [sp+B0h] [bp-1064h] BYREF
  int v44; // [sp+CCh] [bp-1048h]
  _DWORD v45[7]; // [sp+D0h] [bp-1044h] BYREF
  int v46; // [sp+ECh] [bp-1028h]
  _DWORD v47[7]; // [sp+F0h] [bp-1024h] BYREF
  int v48; // [sp+10Ch] [bp-1008h]
  char v49[4080]; // [sp+110h] [bp-1004h] BYREF

  v36 = a3;
  LOWORD(v7) = -5776;
  V_LOCK();
  LOWORD(v8) = 620;
  HIWORD(v8) = (unsigned int)" %lld" >> 16;
  V_INT((int)v37, v8, *(int *)(a1 + 232));
  HIWORD(v7) = (unsigned int)"Setting_bridge_reset_HNS_2130" >> 16;
  logfmt_raw(
    v49,
    0x1000u,
    0,
    v38,
    v37[0],
    v37[1],
    v37[2],
    v37[3],
    v37[4],
    v37[5],
    v37[6],
    v38,
    v7,
    "phy_external_bist_init",
    v36);
  V_UNLOCK();
  LOWORD(v9) = -9688;
  HIWORD(v9) = (unsigned int)"%02x sram ext load done" >> 16;
  zlog(g_zc, v9, 173, "phy_external_bist_init", 22, 1051, 60, v49);
  v10 = (unsigned __int8 *)&eth_2280_phy_eq + 16 * a5;
  v11 = v10[12];
  v31 = *v10;
  v12 = v10[4];
  v35 = v10[4];
  v33 = v11;
  v32 = v10[8];
  V_LOCK();
  LOWORD(v13) = 620;
  HIWORD(v13) = (unsigned int)" %lld" >> 16;
  V_INT((int)v39, v13, *(int *)(a1 + 232));
  LOWORD(v14) = -5788;
  v15 = "enabled";
  if ( !v11 )
  {
    HIWORD(v14) = (unsigned int)"_2130" >> 16;
    v15 = v14;
  }
  LOWORD(v16) = -5752;
  HIWORD(v16) = (unsigned int)"_2130" >> 16;
  logfmt_raw(v49, 0x1000u, 0, v40, v39[0], v39[1], v39[2], v39[3], v39[4], v39[5], v39[6], v40, v16, v15, v31, v12, v32);
  V_UNLOCK();
  LOWORD(v17) = -9688;
  HIWORD(v17) = (unsigned int)"%02x sram ext load done" >> 16;
  zlog(g_zc, v17, 173, "phy_external_bist_init", 22, 1071, 60, v49);
  sub_7660C(a1, v36, 86, 3670024);
  usleep(0x12Cu);
  sub_7660C(a1, v36, 85, 109905420);
  usleep(0x12Cu);
  sub_7660C(a1, v36, 101, -268374016);
  usleep(0x12Cu);
  sub_7660C(a1, v36, 64, 256);
  usleep(0x12Cu);
  sub_7660C(a1, v36, 80, 33423870);
  usleep(0x12Cu);
  sub_7660C(a1, v36, 81, 832516511);
  usleep(0x12Cu);
  sub_7660C(a1, v36, 88, -1);
  usleep(0x12Cu);
  if ( check_core_reg_with_expect_data_eth(a1, a2, v36, 125, 0x70007000u) )
  {
    V_LOCK();
    LOWORD(v29) = 620;
    HIWORD(v29) = (unsigned int)" %lld" >> 16;
    V_INT((int)v41, v29, *(int *)(a1 + 232));
    logfmt_raw(
      v49,
      0x1000u,
      0,
      v42,
      v41[0],
      v41[1],
      v41[2],
      v41[3],
      v41[4],
      v41[5],
      v41[6],
      v42,
      "%s sram boot failed!",
      "phy_external_bist_init");
    V_UNLOCK();
    LOWORD(v30) = -9688;
    HIWORD(v30) = (unsigned int)"%02x sram ext load done" >> 16;
    zlog(g_zc, v30, 173, "phy_external_bist_init", 22, 1104, 100, v49);
  }
  phy_eq_main_set_by_apb(a1, a2, &v36, 1, v31);
  phy_eq_pre_set_by_apb(a1, a2, &v36, 1, v35);
  phy_eq_post_set_by_apb(a1, a2, &v36, 1, v32);
  sub_7660C(a1, v36, 86, 137889800);
  usleep(0x12Cu);
  sub_7660C(a1, v36, 80, 0);
  usleep(0x12Cu);
  if ( check_core_reg_with_expect_data(a1, a2, v36, 119, 0) )
  {
    V_LOCK();
    LOWORD(v27) = 620;
    HIWORD(v27) = (unsigned int)" %lld" >> 16;
    V_INT((int)v43, v27, *(int *)(a1 + 232));
    logfmt_raw(
      v49,
      0x1000u,
      0,
      v44,
      v43[0],
      v43[1],
      v43[2],
      v43[3],
      v43[4],
      v43[5],
      v43[6],
      v44,
      "%s PHY core %02x wait ack failed!",
      "phy_external_bist_init",
      v36);
    V_UNLOCK();
    LOWORD(v28) = -9688;
    HIWORD(v28) = (unsigned int)"%02x sram ext load done" >> 16;
    zlog(g_zc, v28, 173, "phy_external_bist_init", 22, 1131, 100, v49);
  }
  sub_7660C(a1, v36, 82, 0);
  usleep(0x64u);
  V_LOCK();
  LOWORD(v18) = 620;
  HIWORD(v18) = (unsigned int)" %lld" >> 16;
  V_INT((int)v45, v18, *(int *)(a1 + 232));
  LOWORD(v19) = -6500;
  HIWORD(v19) = (unsigned int)" lost cnt> %lld" >> 16;
  logfmt_raw(
    v49,
    0x1000u,
    0,
    v46,
    v45[0],
    v45[1],
    v45[2],
    v45[3],
    v45[4],
    v45[5],
    v45[6],
    v46,
    v19,
    "phy_external_bist_init",
    v36);
  V_UNLOCK();
  LOWORD(v20) = -9688;
  HIWORD(v20) = (unsigned int)"%02x sram ext load done" >> 16;
  zlog(g_zc, v20, 173, "phy_external_bist_init", 22, 1137, 100, v49);
  v21 = v36;
  sub_7660C(a1, v36, 83, 16711935);
  if ( check_core_reg_with_expect_data(a1, a2, v21, 83, 0) )
  {
    V_LOCK();
    LOWORD(v22) = 620;
    HIWORD(v22) = (unsigned int)" %lld" >> 16;
    V_INT((int)v47, v22, *(int *)(a1 + 232));
    LOWORD(v23) = -6464;
    HIWORD(v23) = (unsigned int)"%d" >> 16;
    LOWORD(v24) = -9728;
    HIWORD(v24) = (unsigned int)"ore %d reg %04x rdata %08x" >> 16;
    logfmt_raw(
      v49,
      0x1000u,
      0,
      v48,
      v47[0],
      v47[1],
      v47[2],
      v47[3],
      v47[4],
      v47[5],
      v47[6],
      v48,
      v24,
      "phy_handshake",
      v21,
      v23);
    V_UNLOCK();
    LOWORD(v25) = -9688;
    HIWORD(v25) = (unsigned int)"%02x sram ext load done" >> 16;
    zlog(g_zc, v25, 173, "phy_handshake", 13, 890, 100, v49);
  }
  phy_pll_switch(a1, a2, v36, a4);
  if ( v33 )
    phy_rx_adapt(a1, a2, v36);
  return usleep(0x64u);
}
