int get_hardware_version()
{
  if ( platform_inited )
    return *(_DWORD *)dword_3B52A4;
  else
    return sub_85B3C();
}
