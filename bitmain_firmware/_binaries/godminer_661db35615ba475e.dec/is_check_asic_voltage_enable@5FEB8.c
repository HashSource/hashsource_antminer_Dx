int is_check_asic_voltage_enable()
{
  int result; // r0

  result = (unsigned __int8)byte_195C8C;
  if ( byte_195C8C )
    return (unsigned __int8)byte_195C98;
  return result;
}
