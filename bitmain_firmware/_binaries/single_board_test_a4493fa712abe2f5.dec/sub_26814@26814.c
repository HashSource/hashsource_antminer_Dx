int __fastcall sub_26814(int a1)
{
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v3[4100]; // [sp+810h] [bp-1004h] BYREF

  snprintf(
    s,
    0x800u,
    "%s: g_eeprom_data is not ready, chain = %d.\n",
    "api_get_eeprom_chain_load_state",
    *(_DWORD *)&byte_12A418[4 * a1 + 8]);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v3, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
    80,
    "api_get_eeprom_chain_load_state",
    31,
    820,
    100,
    v3);
  return -1;
}
