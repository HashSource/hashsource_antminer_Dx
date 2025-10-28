int bitmain_power_off_0()
{
  if ( !is_gpio_exist(dword_163A28) )
  {
    gpio_export(dword_163A28);
    gpio_direction(dword_163A28, 1);
  }
  return gpio_write(dword_163A28, 1);
}
