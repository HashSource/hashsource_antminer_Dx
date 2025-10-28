int get_temperature_4_7()
{
  if ( platform_inited )
    return *(_DWORD *)(dword_3B52A4 + 36);
  else
    return sub_85A3C();
}
