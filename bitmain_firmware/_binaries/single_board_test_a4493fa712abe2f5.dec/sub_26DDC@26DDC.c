int __fastcall sub_26DDC(int a1)
{
  int s; // [sp+10h] [bp-1804h] BYREF
  char v3[4100]; // [sp+810h] [bp-1004h] BYREF

  snprintf((char *)&s, 0x800u, "%s: Bad eeprom param, input chain is %d\n", "eeprom_open", a1);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v3, 0x1000u, 0, &s);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
    80,
    "eeprom_open",
    11,
    46,
    100,
    v3);
  return -2147483391;
}
