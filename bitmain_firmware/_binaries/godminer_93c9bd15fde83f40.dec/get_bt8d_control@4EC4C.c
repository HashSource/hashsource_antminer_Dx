int get_bt8d_control()
{
  if ( platform_inited )
    return *(_DWORD *)(dword_1A8A8C + 60);
  else
    return sub_9EBF4();
}
