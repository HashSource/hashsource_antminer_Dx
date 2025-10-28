int get_working_voltage()
{
  int v0; // r4
  char v2[4100]; // [sp+10h] [bp-1004h] BYREF

  v0 = (unsigned __int8)byte_165F18;
  if ( byte_165F18 )
    return dword_165F24;
  V_LOCK();
  logfmt_raw(v2, 0x1000u, v0, 1198464, 1199232);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/miner_util/power_api.c",
    149,
    "get_working_voltage",
    19,
    472,
    100,
    v2);
  return -1;
}
