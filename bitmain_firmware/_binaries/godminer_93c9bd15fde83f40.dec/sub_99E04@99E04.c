int __fastcall sub_99E04(int a1)
{
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v3[4100]; // [sp+810h] [bp-1004h] BYREF

  snprintf(s, 0x800u, "gpio port %d is not a supported key\n", a1);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v3, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/backend/device/hal/platform/7007/7007_ui.c",
           163,
           "gpio_key_callback",
           17,
           134,
           80,
           v3);
}
