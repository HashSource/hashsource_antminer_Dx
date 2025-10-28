int platform_init()
{
  if ( platform_inited )
    return 0;
  else
    return sub_14FA58();
}
