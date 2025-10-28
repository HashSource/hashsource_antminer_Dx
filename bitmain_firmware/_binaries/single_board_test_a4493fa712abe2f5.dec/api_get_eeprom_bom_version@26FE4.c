int __fastcall api_get_eeprom_bom_version(int a1, char *a2)
{
  return sub_26F2C(*(_DWORD *)&byte_12A418[4 * a1 + 8], a2);
}
