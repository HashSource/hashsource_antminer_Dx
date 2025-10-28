int __fastcall add_eeprom_device(int a1, int a2)
{
  int *v2; // r2

  v2 = &dword_195CAC[dword_195CB8++];
  v2[4] = a1;
  return a2;
}
