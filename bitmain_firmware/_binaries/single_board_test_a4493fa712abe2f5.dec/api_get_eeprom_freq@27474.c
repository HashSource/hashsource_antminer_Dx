int __fastcall api_get_eeprom_freq(int a1)
{
  int v2; // [sp+4h] [bp-8h] BYREF

  v2 = 0;
  eeprom_get_freq(*(_DWORD *)&byte_12A418[4 * a1 + 8], &v2);
  return v2;
}
