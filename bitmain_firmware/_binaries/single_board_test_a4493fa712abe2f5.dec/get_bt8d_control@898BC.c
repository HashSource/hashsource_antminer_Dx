int get_bt8d_control()
{
  if ( platform_inited )
    return *(_DWORD *)(dword_3B52A4 + 60);
  else
    return sub_857C4();
}
