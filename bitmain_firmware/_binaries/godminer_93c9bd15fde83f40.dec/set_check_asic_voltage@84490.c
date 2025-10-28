int __fastcall set_check_asic_voltage(int a1)
{
  int result; // r0

  if ( a1 )
  {
    result = set_voltage_by_steps(dword_1A4610, (unsigned __int8)byte_1A45FC);
    if ( !result )
      return result;
    return sub_80744();
  }
  result = set_voltage(dword_1A4610, (unsigned __int8)byte_1A45FC);
  if ( result )
    return sub_80744();
  return result;
}
