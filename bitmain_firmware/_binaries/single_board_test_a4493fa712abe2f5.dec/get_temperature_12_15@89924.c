int get_temperature_12_15()
{
  if ( platform_inited )
    return *(_DWORD *)(dword_3B52A4 + 44);
  else
    return sub_8593C();
}
