int set_check_asic_voltage()
{
  int result; // r0

  result = (unsigned __int16)set_voltage_by_steps(dword_195C9C, (unsigned __int8)byte_195C88);
  if ( (_WORD)result )
    return sub_63630();
  return result;
}
