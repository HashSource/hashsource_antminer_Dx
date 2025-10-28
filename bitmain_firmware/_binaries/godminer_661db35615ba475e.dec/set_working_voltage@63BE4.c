int set_working_voltage()
{
  int result; // r0

  result = (unsigned __int16)set_voltage_by_steps(dword_195C94, (unsigned __int8)byte_195C88);
  if ( (_WORD)result )
    return sub_636C8();
  return result;
}
