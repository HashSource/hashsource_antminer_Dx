int is_eeprom_loaded()
{
  int result; // r0

  if ( !dword_12C0EC )
    return sub_268D0();
  result = *(unsigned __int8 *)(dword_12C0EC + 80);
  if ( !*(_BYTE *)(dword_12C0EC + 80) )
    return sub_268D0();
  return result;
}
