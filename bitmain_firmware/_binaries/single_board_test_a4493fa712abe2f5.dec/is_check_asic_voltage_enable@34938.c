int is_check_asic_voltage_enable()
{
  int result; // r0

  result = (unsigned __int8)byte_12C0F4;
  if ( byte_12C0F4 )
    return (unsigned __int8)byte_12C100;
  return result;
}
