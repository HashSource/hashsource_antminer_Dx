int is_bypass_mode_enable()
{
  if ( platform_inited )
    return (*(_DWORD *)dword_197C8C >> 29) & 1;
  else
    return sub_14F5E8();
}
