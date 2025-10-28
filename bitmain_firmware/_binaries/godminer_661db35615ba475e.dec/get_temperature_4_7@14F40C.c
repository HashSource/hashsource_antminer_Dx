int get_temperature_4_7()
{
  if ( platform_inited )
    return *(_DWORD *)(dword_197C8C + 36);
  else
    return sub_14F360();
}
