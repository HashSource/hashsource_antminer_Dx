int __fastcall check_cmn_calibration_status_1_phy(int a1, char a2, int a3)
{
  char *v6; // r2
  _BYTE v8[4]; // [sp+10h] [bp-1040h] BYREF
  int v9; // [sp+14h] [bp-103Ch]
  char v10[4096]; // [sp+50h] [bp-1000h] BYREF

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v10, 0x1000u, 0, "%s...", "check_cmn_calibration_status_1_phy");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_cmn_calibration_status_1_phy",
    34,
    8556,
    60,
    v10);
  if ( serdes_apb_read_back_1_chip(a1, a2, a3, 0x801Du, (int)v8) )
  {
    pthread_mutex_lock(&stru_197BB8);
    v6 = "not ready";
    if ( (v9 & 0x8000) != 0 )
      v6 = "done";
    logfmt_raw(v10, 0x1000u, 0, "chip_id %02x core_id %02x cmn clibration %08x", v8[0], v8[1], v9, v6);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "check_cmn_calibration_status_1_phy",
      34,
      8562,
      60,
      v10);
  }
  return 0;
}
