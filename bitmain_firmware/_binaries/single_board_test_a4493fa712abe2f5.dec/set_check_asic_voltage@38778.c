int set_check_asic_voltage()
{
  int result; // r0

  result = (unsigned __int16)set_voltage_by_steps(dword_12C104, (unsigned __int8)byte_12C0F0);
  if ( (_WORD)result )
    return sub_3836C();
  return result;
}
