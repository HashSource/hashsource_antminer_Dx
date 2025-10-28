int __fastcall api_get_eeprom_miner_type(int a1, void *a2)
{
  return sub_26E60(*(_DWORD *)&byte_12A418[4 * a1 + 8], a2);
}
