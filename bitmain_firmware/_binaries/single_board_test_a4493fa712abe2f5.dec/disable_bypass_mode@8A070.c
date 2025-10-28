int disable_bypass_mode()
{
  if ( !platform_inited )
    return sub_85C3C();
  *(_DWORD *)dword_3B52A4 &= ~0x20000000u;
  return 0;
}
