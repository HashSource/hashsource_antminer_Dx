int bitmain_power_open()
{
  int result; // r0

  result = dword_195CAC[0];
  if ( !dword_195CAC[0] || !dword_195CB0 )
    return sub_B6B8C();
  return result;
}
