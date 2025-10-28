int enable_bypass_mode()
{
  if ( !platform_inited )
    return sub_9F2A4();
  *(_DWORD *)dword_1A8A8C |= 0x20000000u;
  return 0;
}
