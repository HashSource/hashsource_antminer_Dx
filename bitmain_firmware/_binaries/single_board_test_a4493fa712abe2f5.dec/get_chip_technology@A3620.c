int __fastcall get_chip_technology(int result)
{
  char v1; // r2

  v1 = *(_BYTE *)(result + 118);
  byte_3B5844 = *(_BYTE *)(result + 117);
  byte_3B5845 = v1;
  return result;
}
