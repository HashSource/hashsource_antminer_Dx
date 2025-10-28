int get_current_voltage()
{
  if ( byte_165F18 )
    return dword_165F34;
  else
    return sub_4FC30();
}
