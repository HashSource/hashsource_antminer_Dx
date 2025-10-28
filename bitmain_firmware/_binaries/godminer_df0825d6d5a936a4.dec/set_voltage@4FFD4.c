int __fastcall set_voltage(int a1, int a2)
{
  char v4[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( a2 )
  {
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, 1290132, a1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/miner_util/power_api.c",
      149,
      "set_voltage",
      11,
      418,
      40,
      v4);
    return sub_4FD34(a1);
  }
  else
  {
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, 1290100);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/miner_util/power_api.c",
      149,
      "set_voltage",
      11,
      414,
      100,
      v4);
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, 1198464, 1199232);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/miner_util/power_api.c",
      149,
      "set_voltage",
      11,
      415,
      100,
      v4);
    return -1;
  }
}
