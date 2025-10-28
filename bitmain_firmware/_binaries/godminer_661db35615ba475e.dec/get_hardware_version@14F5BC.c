int get_hardware_version()
{
  if ( platform_inited )
    return *(_DWORD *)dword_197C8C;
  else
    return sub_14F510();
}
