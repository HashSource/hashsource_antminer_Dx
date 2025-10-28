int __fastcall api_get_eeprom_chain_load_state(int a1)
{
  int *v1; // r0
  const char *v3; // r2
  int v4; // r1
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v6[4100]; // [sp+810h] [bp-1004h] BYREF

  v1 = &dword_18A790[a1];
  if ( dword_18A790[0] )
    return *(unsigned __int8 *)(dword_18A790[0] + v1[2] + 64);
  LOWORD(v3) = 23576;
  HIWORD(v3) = (unsigned int)"EEPROM info error! fixture_len:%d, fixture_without_header_len:%d, fixture_actual_len:%d" >> 16;
  snprintf(s, 0x800u, v3, "api_get_eeprom_chain_load_state", v1[2]);
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, s);
  V_UNLOCK();
  LOWORD(v4) = 23620;
  HIWORD(v4) = (unsigned int)"ithout_header_len:%d, fixture_actual_len:%d" >> 16;
  zlog(g_zc, v4, 169, "api_get_eeprom_chain_load_state", 31, 1329, 100, v6);
  return -1;
}
