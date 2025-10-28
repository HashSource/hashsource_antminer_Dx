int is_bypass_mode_enable()
{
  if ( platform_inited )
    return (*(_DWORD *)dword_3B52A4 >> 29) & 1;
  else
    return sub_85BBC();
}
