int sub_B0D44()
{
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v2[4096]; // [sp+810h] [bp-1000h] BYREF

  snprintf(s, 0x800u, "%s: g_eeprom_data is not ready\n", "is_eeprom_loaded");
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v2, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "is_eeprom_loaded",
    16,
    692,
    20,
    v2);
  return 0;
}
