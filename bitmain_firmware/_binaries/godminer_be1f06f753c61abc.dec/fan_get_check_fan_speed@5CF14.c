int __fastcall fan_get_check_fan_speed(int a1)
{
  int v1; // r4
  char v3[4100]; // [sp+10h] [bp-1004h] BYREF

  v1 = 90 * a1;
  V_LOCK();
  v1 /= 110;
  logfmt_raw(v3, 0x1000u, 0, "fan_get_check_fan_speed %d", v1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/miner_util/fan_speed_moderator.c",
    159,
    "fan_get_check_fan_speed",
    23,
    33,
    20,
    v3);
  return v1;
}
