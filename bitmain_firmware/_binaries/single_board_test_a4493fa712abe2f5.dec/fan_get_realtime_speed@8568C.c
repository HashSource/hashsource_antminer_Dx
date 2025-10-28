int __fastcall fan_get_realtime_speed(int a1)
{
  int v2; // r5
  unsigned int v3; // r4
  char s[2048]; // [sp+10h] [bp-800h] BYREF
  char v6[4100]; // [sp+810h] [bp+0h] BYREF

  v2 = 8;
  while ( 1 )
  {
    v3 = *(_DWORD *)(dword_3B52A4 + 4);
    snprintf(s, 0x800u, "FAN_SPEED fpga value = 0x%x\n", v3);
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v6, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_fan.c",
      81,
      "fan_get_realtime_speed",
      22,
      56,
      20,
      v6);
    if ( ((v3 >> 8) & 7) == a1 )
      break;
    usleep(0x2710u);
    if ( !--v2 )
      return -1;
  }
  return 120 * (unsigned __int8)v3;
}
