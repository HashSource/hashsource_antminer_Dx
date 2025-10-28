int get_temperature_12_15()
{
  if ( platform_inited )
    return *(_DWORD *)(dword_197C8C + 44);
  else
    return sub_14F1B0();
}
