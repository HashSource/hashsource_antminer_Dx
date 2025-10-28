int __fastcall set_check_asic_voltage(int a1)
{
  int result; // r0
  char v3[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, 1290180);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/miner_util/power_api.c",
    149,
    "set_check_asic_voltage",
    22,
    519,
    40,
    v3);
  if ( a1 )
    result = set_voltage_by_steps(dword_165F2C, (unsigned __int8)byte_165F18);
  else
    result = set_voltage(dword_165F2C, (unsigned __int8)byte_165F18);
  if ( result )
  {
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, 1290204);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/miner_util/power_api.c",
      149,
      "set_check_asic_voltage",
      22,
      527,
      100,
      v3);
    return -1;
  }
  return result;
}
