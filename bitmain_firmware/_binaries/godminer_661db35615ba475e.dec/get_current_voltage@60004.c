int get_current_voltage()
{
  if ( byte_195C88 )
    return dword_195CA4;
  else
    return -1;
}
