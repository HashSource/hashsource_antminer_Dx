int is_eeprom_loaded()
{
  int result; // r0

  if ( !dword_1AA6AC )
    return sub_113ACC();
  result = *(unsigned __int8 *)(dword_1AA6AC + 80);
  if ( !*(_BYTE *)(dword_1AA6AC + 80) )
    return sub_113ACC();
  return result;
}
