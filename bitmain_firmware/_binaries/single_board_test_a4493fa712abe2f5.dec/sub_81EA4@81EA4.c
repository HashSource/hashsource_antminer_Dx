int __fastcall sub_81EA4(int a1)
{
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v3[4100]; // [sp+810h] [bp-1004h] BYREF

  snprintf(s, 0x800u, "gpio port %d is not a supported key\n", a1);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v3, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_3B526C);
  return zlog(
           g_zc,
           "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_ui.c",
           80,
           "gpio_key_callback",
           17,
           134,
           80,
           v3);
}
