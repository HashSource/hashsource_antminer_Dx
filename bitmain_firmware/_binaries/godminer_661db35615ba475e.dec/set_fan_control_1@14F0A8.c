int __fastcall set_fan_control_1(int result)
{
  if ( !platform_inited )
    return sub_14F000();
  *(_DWORD *)(dword_197C8C + 160) = result;
  return result;
}
