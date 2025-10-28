int is_bypass_mode_enable()
{
  if ( platform_inited )
    return (*(_DWORD *)dword_1A8A8C >> 29) & 1;
  else
    return sub_9F14C();
}
