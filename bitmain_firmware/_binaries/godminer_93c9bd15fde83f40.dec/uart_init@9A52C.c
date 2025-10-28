int uart_init()
{
  if ( platform_inited )
    return 0;
  else
    return sub_9A480();
}
