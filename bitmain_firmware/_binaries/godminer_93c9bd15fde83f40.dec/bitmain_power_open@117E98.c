int bitmain_power_open()
{
  int result; // r0

  result = dword_1AA5F0;
  if ( !dword_1AA5F0 || !dword_1AA5F4 )
    return sub_117000();
  return result;
}
