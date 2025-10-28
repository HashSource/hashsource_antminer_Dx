int __fastcall set_bt8d_control(int result)
{
  if ( !platform_inited )
    return sub_9EB4C();
  *(_DWORD *)(dword_1A8A8C + 60) = result;
  return result;
}
