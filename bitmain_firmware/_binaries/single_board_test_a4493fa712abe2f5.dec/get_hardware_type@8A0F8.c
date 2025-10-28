int get_hardware_type()
{
  if ( platform_inited )
    return *(_DWORD *)dword_3B52A4 >> 31;
  else
    return sub_85DC0();
}
