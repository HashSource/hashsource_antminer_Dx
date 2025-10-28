int set_working_voltage()
{
  int result; // r0

  result = (unsigned __int16)set_voltage_by_steps(dword_12C0FC, (unsigned __int8)byte_12C0F0);
  if ( (_WORD)result )
    return sub_383E4();
  return result;
}
