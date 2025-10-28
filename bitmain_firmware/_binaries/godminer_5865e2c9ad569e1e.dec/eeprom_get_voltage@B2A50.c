int __fastcall eeprom_get_voltage(int a1, _DWORD *a2)
{
  int v2; // r3
  int result; // r0
  const char *v4; // r2
  int v5; // r1
  int *v6; // r12
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r1
  _DWORD s[512]; // [sp+10h] [bp-1804h] BYREF
  char v14[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( dword_18A790[0] && *(_BYTE *)(dword_18A790[0] + 80) )
  {
    v2 = *(unsigned __int16 *)(*(_DWORD *)(dword_18A790[0] + 4 * a1) + 39);
    if ( a2 )
    {
      result = 0;
      *a2 = v2;
    }
    else
    {
      LOWORD(v6) = 25428;
      HIWORD(v6) = (unsigned int)"ULL\n" >> 16;
      v7 = *v6;
      v8 = v6[1];
      v9 = v6[2];
      v10 = v6[3];
      v6 += 4;
      s[0] = v7;
      s[1] = v8;
      s[2] = v9;
      s[3] = v10;
      v11 = v6[1];
      s[4] = *v6;
      s[5] = v11;
      V_LOCK();
      logfmt_raw(v14, 0x1000u, 0, s);
      V_UNLOCK();
      LOWORD(v12) = 23620;
      HIWORD(v12) = (unsigned int)"ithout_header_len:%d, fixture_actual_len:%d" >> 16;
      zlog(g_zc, v12, 169, "eeprom_get_voltage", 18, 1044, 100, v14);
      return -2;
    }
  }
  else
  {
    LOWORD(v4) = 25392;
    HIWORD(v4) = (unsigned int)"chain = %d.\n" >> 16;
    snprintf((char *)s, 0x800u, v4, a1);
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v5) = 23620;
    HIWORD(v5) = (unsigned int)"ithout_header_len:%d, fixture_actual_len:%d" >> 16;
    zlog(g_zc, v5, 169, "eeprom_get_voltage", 18, 1033, 100, v14);
    return -1;
  }
  return result;
}
