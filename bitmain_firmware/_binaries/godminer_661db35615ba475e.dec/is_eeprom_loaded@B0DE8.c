int is_eeprom_loaded()
{
  int result; // r0

  if ( !dword_195D14 )
    return sub_B0D44();
  result = *(unsigned __int8 *)(dword_195D14 + 80);
  if ( !*(_BYTE *)(dword_195D14 + 80) )
    return sub_B0D44();
  return result;
}
