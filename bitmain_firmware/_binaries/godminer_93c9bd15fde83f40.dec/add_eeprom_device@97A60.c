int __fastcall add_eeprom_device(int a1)
{
  int v1; // r12
  int v2; // lr

  v2 = dword_1A88C8[0] + 1;
  dword_1AA668[dword_1A88C8[0]] = a1;
  dword_1A88C8[0] = v2;
  return v1;
}
