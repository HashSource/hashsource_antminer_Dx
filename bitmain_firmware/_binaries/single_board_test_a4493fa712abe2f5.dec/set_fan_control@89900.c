int __fastcall set_fan_control(int result)
{
  if ( !platform_inited )
    return sub_858C0();
  *(_DWORD *)(dword_3B52A4 + 132) = result;
  return result;
}
