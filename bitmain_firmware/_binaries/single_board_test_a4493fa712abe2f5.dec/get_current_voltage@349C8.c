int get_current_voltage()
{
  if ( byte_12C0F0 )
    return dword_12C10C;
  else
    return -1;
}
