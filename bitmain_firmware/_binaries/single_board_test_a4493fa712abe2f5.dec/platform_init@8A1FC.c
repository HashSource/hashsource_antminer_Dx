int platform_init()
{
  if ( platform_inited )
    return 0;
  else
    return sub_85E3C();
}
