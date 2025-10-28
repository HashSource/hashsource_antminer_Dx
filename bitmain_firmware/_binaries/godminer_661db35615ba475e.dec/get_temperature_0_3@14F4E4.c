int get_temperature_0_3()
{
  if ( platform_inited )
    return *(_DWORD *)(dword_197C8C + 32);
  else
    return sub_14F438();
}
