int __fastcall api_get_eeprom_test_standard_code(int a1)
{
  int v2; // r0
  char s[2048]; // [sp+10h] [bp-1810h] BYREF
  char v4[4112]; // [sp+810h] [bp-1010h] BYREF

  v2 = *(_DWORD *)&byte_12A418[4 * a1 + 8];
  if ( dword_12C0EC && *(_BYTE *)(dword_12C0EC + 80) )
    return *(unsigned __int8 *)(*(_DWORD *)(dword_12C0EC + 4 * v2) + 46);
  snprintf(s, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.\n", "get_test_standard_code", v2);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v4, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
    80,
    "get_test_standard_code",
    22,
    723,
    100,
    v4);
  return 255;
}
