int is_check_asic_voltage_enable()
{
  int result; // r0

  result = (unsigned __int8)byte_1A4600;
  if ( byte_1A4600 )
    return (unsigned __int8)byte_1A460C;
  return result;
}
