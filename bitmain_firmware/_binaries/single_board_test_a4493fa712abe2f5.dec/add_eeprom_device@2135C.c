int __fastcall add_eeprom_device(int a1, int a2)
{
  unsigned __int8 *v2; // r2

  v2 = &byte_12A418[4 * dword_12A41C++];
  *((_DWORD *)v2 + 2) = a1;
  return a2;
}
