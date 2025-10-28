int get_temperature_0_3()
{
  if ( platform_inited )
    return *(_DWORD *)(dword_3B52A4 + 32);
  else
    return sub_85ABC();
}
