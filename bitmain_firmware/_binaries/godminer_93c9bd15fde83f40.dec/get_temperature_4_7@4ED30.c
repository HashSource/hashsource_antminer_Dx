int get_temperature_4_7()
{
  if ( platform_inited )
    return *(_DWORD *)(dword_1A8A8C + 36);
  else
    return sub_9EF48();
}
