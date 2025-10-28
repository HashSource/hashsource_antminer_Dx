int fan_pwm_set_max()
{
  int v0; // r0
  int result; // r0
  int v2; // [sp+4h] [bp-4h] BYREF

  if ( byte_12A4BC )
  {
    v0 = dword_12A4C0;
  }
  else
  {
    v0 = pwm_init(0, 100);
    dword_12A4C0 = v0;
    byte_12A4BC = 1;
  }
  result = pwm_get(v0, &v2);
  if ( v2 != 100 )
    return pwm_set(dword_12A4C0, 0x64u);
  return result;
}
