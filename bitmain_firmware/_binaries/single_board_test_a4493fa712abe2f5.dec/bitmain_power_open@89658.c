int bitmain_power_open()
{
  int result; // r0

  result = dword_12B728[0];
  if ( !dword_12B728[0] || !dword_12B72C )
    return sub_882E8();
  return result;
}
