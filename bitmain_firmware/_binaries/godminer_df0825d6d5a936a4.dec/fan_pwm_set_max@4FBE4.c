int fan_pwm_set_max()
{
  int result; // r0

  if ( !byte_165F0C )
  {
    dword_165F10 = pwm_init(0, 100);
    byte_165F0C = 1;
  }
  result = fan_pwm_get();
  if ( result != 100 )
    return pwm_set(dword_165F10, 0x64u);
  return result;
}
