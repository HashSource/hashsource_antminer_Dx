int __fastcall api_get_eeprom_nonce_response_rate(int a1, _DWORD *a2)
{
  int v2; // r3
  int result; // r0
  const char *v4; // r2
  int v5; // r1
  const char *v6; // r2
  int v7; // r1
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v9[4100]; // [sp+810h] [bp-1004h] BYREF

  v2 = dword_18A790[a1 + 2];
  if ( dword_18A790[0] && *(_BYTE *)(dword_18A790[0] + 80) )
  {
    if ( a2 )
    {
      result = 0;
      *a2 = *(_DWORD *)(*(_DWORD *)(dword_18A790[0] + 4 * v2) + 43);
    }
    else
    {
      LOWORD(v6) = 25532;
      HIWORD(v6) = (unsigned int)"bitmain_power_close" >> 16;
      snprintf(s, 0x800u, v6, "api_get_eeprom_nonce_response_rate", dword_18A790[a1 + 2]);
      V_LOCK();
      logfmt_raw(v9, 0x1000u, 0, s);
      V_UNLOCK();
      LOWORD(v7) = 23620;
      HIWORD(v7) = (unsigned int)"ithout_header_len:%d, fixture_actual_len:%d" >> 16;
      zlog(g_zc, v7, 169, "api_get_eeprom_nonce_response_rate", 34, 1249, 100, v9);
      return -2;
    }
  }
  else
  {
    LOWORD(v4) = 23576;
    HIWORD(v4) = (unsigned int)"EEPROM info error! fixture_len:%d, fixture_without_header_len:%d, fixture_actual_len:%d" >> 16;
    snprintf(s, 0x800u, v4, "api_get_eeprom_nonce_response_rate", dword_18A790[a1 + 2]);
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v5) = 23620;
    HIWORD(v5) = (unsigned int)"ithout_header_len:%d, fixture_actual_len:%d" >> 16;
    zlog(g_zc, v5, 169, "api_get_eeprom_nonce_response_rate", 34, 1240, 100, v9);
    return -1;
  }
  return result;
}
