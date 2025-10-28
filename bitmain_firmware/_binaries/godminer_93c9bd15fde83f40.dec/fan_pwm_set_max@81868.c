int fan_pwm_set_max()
{
  int v0; // r0
  int result; // r0
  int v2; // [sp+4h] [bp-4h] BYREF

  if ( byte_1A4990 )
  {
    v0 = dword_1A4994;
  }
  else
  {
    v0 = pwm_init(0, 100);
    dword_1A4994 = v0;
    byte_1A4990 = 1;
  }
  result = pwm_get(v0, &v2);
  if ( v2 != 100 )
    return pwm_set(dword_1A4994, 0x64u);
  return result;
}
