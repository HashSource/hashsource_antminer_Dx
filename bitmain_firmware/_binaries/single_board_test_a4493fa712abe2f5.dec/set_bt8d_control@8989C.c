int __fastcall set_bt8d_control(int result)
{
  if ( !platform_inited )
    return sub_85748();
  *(_DWORD *)(dword_3B52A4 + 60) = result;
  return result;
}
