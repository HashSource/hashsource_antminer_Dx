int __fastcall set_fan_control(int result)
{
  if ( !platform_inited )
    return sub_14F0D8();
  *(_DWORD *)(dword_197C8C + 132) = result;
  return result;
}
