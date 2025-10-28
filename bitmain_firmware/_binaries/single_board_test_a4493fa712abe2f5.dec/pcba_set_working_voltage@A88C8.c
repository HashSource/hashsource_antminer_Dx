int __fastcall pcba_set_working_voltage(int a1, int a2)
{
  int result; // r0
  unsigned __int16 *v3; // r3

  result = 17 * a1;
  v3 = &all_algo_system_info[2 * result];
  if ( *((_BYTE *)v3 + 4) && *((_BYTE *)v3 + 16) )
  {
    printf("Set voltage to working_voltage %d\n", a2);
    result = set_voltage_by_steps(a2, 1);
    if ( result )
    {
      puts("set_voltage_by_steps error!");
      return -1;
    }
  }
  return result;
}
