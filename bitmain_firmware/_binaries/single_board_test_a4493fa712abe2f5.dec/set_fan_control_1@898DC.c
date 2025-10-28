int __fastcall set_fan_control_1(int result)
{
  if ( !platform_inited )
    return sub_85844();
  *(_DWORD *)(dword_3B52A4 + 160) = result;
  return result;
}
