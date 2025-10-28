int sub_2696C()
{
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v2[4100]; // [sp+810h] [bp-1004h] BYREF

  snprintf(s, 0x800u, "%s: g_eeprom_data is not ready\n", "eeprom_get_min_freq");
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v2, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
    80,
    "eeprom_get_min_freq",
    19,
    676,
    100,
    v2);
  return -1;
}
