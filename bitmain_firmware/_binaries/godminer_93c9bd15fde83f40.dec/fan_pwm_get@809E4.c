int fan_pwm_get()
{
  int v0; // r0
  int v2; // [sp+4h] [bp-4h] BYREF

  if ( byte_1A4990 )
  {
    v0 = dword_1A4994;
  }
  else
  {
    v0 = pwm_init(0, 1);
    dword_1A4994 = v0;
    byte_1A4990 = 1;
  }
  pwm_get(v0, &v2);
  return v2;
}
