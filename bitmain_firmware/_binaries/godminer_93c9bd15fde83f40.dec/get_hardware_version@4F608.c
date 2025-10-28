int get_hardware_version()
{
  if ( platform_inited )
    return *(_DWORD *)dword_1A8A8C;
  else
    return sub_9F0A0();
}
