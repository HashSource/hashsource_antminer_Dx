int is_check_asic_voltage_enable()
{
  int result; // r0

  result = (unsigned __int8)byte_165F1C;
  if ( byte_165F1C )
    return (unsigned __int8)byte_165F28;
  return result;
}
