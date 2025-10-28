unsigned int power_on()
{
  if ( !is_gpio_exist(907) )
  {
    gpio_export(907);
    gpio_direction(907, 1);
  }
  gpio_write(907, 0);
  return j_sleep(1u);
}
