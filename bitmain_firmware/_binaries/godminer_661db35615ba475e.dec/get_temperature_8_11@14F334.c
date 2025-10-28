int get_temperature_8_11()
{
  if ( platform_inited )
    return *(_DWORD *)(dword_197C8C + 40);
  else
    return sub_14F288();
}
