int fan_init()
{
  if ( platform_inited )
    return 0;
  else
    return sub_14EC8C();
}
