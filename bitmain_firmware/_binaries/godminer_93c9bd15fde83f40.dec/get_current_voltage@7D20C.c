int get_current_voltage()
{
  if ( byte_1A45FC )
    return dword_1A4618;
  else
    return -1;
}
