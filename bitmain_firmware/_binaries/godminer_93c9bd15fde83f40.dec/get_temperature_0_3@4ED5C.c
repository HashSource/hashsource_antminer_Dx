int get_temperature_0_3()
{
  if ( platform_inited )
    return *(_DWORD *)(dword_1A8A8C + 32);
  else
    return sub_9EFF4();
}
