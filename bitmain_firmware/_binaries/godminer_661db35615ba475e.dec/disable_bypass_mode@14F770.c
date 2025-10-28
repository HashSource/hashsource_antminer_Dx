int disable_bypass_mode()
{
  if ( !platform_inited )
    return sub_14F6C4();
  *(_DWORD *)dword_197C8C &= ~0x20000000u;
  return 0;
}
