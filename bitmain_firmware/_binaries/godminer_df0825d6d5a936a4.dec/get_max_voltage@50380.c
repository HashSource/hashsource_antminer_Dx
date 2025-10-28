int get_max_voltage()
{
  double v0; // d0
  int v1; // r4
  char v4[4100]; // [sp+10h] [bp-1004h] BYREF

  v1 = (unsigned __int8)byte_165F18;
  if ( byte_165F18 )
  {
    bitmain_convert_N_to_V();
    return (int)(v0 * 100.0);
  }
  else
  {
    V_LOCK();
    logfmt_raw(v4, 0x1000u, v1, 1198464, 1199232);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/miner_util/power_api.c",
      149,
      "get_max_voltage",
      15,
      487,
      100,
      v4);
    return -1;
  }
}
