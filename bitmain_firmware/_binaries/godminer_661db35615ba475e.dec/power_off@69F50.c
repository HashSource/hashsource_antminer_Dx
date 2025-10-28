unsigned int power_off()
{
  if ( !is_gpio_exist(907) )
  {
    gpio_export(907);
    gpio_direction(907, 1);
  }
  gpio_write(907, 1);
  return sleep(1u);
}
