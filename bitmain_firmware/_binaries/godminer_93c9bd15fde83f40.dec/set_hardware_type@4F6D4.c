int __fastcall set_hardware_type(int a1)
{
  int v1; // r3

  if ( !platform_inited )
    return sub_9F34C();
  v1 = *(_DWORD *)dword_1A8A8C;
  if ( a1 )
  {
    if ( a1 == 1 )
      v1 |= 0x80000000;
  }
  else
  {
    v1 &= ~0x80000000;
  }
  *(_DWORD *)dword_1A8A8C = v1;
  return 0;
}
