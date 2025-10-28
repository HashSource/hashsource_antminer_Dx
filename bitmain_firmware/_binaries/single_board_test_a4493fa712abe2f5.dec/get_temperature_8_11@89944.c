int get_temperature_8_11()
{
  if ( platform_inited )
    return *(_DWORD *)(dword_3B52A4 + 40);
  else
    return sub_859BC();
}
