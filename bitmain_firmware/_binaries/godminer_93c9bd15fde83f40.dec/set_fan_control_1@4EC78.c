int __fastcall set_fan_control_1(int result)
{
  if ( !platform_inited )
    return sub_9ECA0();
  *(_DWORD *)(dword_1A8A8C + 160) = result;
  return result;
}
