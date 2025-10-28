int get_bt8d_control()
{
  if ( platform_inited )
    return *(_DWORD *)(dword_197C8C + 60);
  else
    return sub_14EF28();
}
