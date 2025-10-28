int __fastcall fan_get_realtime_speed(int a1)
{
  int v1; // r5
  unsigned int v2; // r4
  char s[2048]; // [sp+18h] [bp-7F8h] BYREF
  char v6[4100]; // [sp+818h] [bp+8h] BYREF

  v1 = 8;
  while ( 1 )
  {
    v2 = *(_DWORD *)(dword_1A8A8C + 4);
    snprintf(s, 0x800u, "FAN_SPEED fpga value = 0x%x\n", v2);
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v6, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_fan.c",
      164,
      "fan_get_realtime_speed",
      22,
      56,
      20,
      v6);
    if ( ((v2 >> 8) & 7) == a1 )
      break;
    usleep(0x2710u);
    if ( !--v1 )
      return -1;
  }
  return 120 * (unsigned __int8)v2;
}
