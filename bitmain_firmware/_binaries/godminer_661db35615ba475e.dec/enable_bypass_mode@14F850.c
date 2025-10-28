int enable_bypass_mode()
{
  if ( !platform_inited )
    return sub_14F7A8();
  *(_DWORD *)dword_197C8C |= 0x20000000u;
  return 0;
}
