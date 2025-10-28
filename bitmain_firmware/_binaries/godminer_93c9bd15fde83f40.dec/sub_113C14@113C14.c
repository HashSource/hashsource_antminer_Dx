int sub_113C14()
{
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v2[4096]; // [sp+810h] [bp-1000h] BYREF

  snprintf(s, 0x800u, "%s: eeprom is not ready\n", "eeprom_get_max_voltage");
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v2, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_get_max_voltage",
    22,
    663,
    100,
    v2);
  return -1;
}
