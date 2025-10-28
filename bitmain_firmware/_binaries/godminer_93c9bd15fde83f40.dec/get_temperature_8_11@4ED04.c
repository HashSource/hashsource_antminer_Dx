int get_temperature_8_11()
{
  if ( platform_inited )
    return *(_DWORD *)(dword_1A8A8C + 40);
  else
    return sub_9EE9C();
}
