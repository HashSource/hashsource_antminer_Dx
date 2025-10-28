int get_hardware_type()
{
  if ( platform_inited )
    return *(_DWORD *)dword_197C8C >> 31;
  else
    return sub_14F97C();
}
