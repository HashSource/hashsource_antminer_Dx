int __fastcall set_bt8d_control(int result)
{
  if ( !platform_inited )
    return sub_14EE54();
  *(_DWORD *)(dword_197C8C + 60) = result;
  return result;
}
