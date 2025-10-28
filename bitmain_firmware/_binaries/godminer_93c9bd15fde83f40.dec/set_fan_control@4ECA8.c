int __fastcall set_fan_control(int result)
{
  if ( !platform_inited )
    return sub_9ED48();
  *(_DWORD *)(dword_1A8A8C + 132) = result;
  return result;
}
