unsigned int power_on()
{
  bitmain_power_on();
  byte_165F30 = 1;
  return sleep(1u);
}
