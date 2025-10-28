int get_temperature_12_15()
{
  if ( platform_inited )
    return *(_DWORD *)(dword_1A8A8C + 44);
  else
    return sub_9EDF0();
}
