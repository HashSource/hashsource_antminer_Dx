int get_hardware_type()
{
  if ( platform_inited )
    return *(_DWORD *)dword_1A8A8C >> 31;
  else
    return sub_9F3F8();
}
