int fan_pwm_get()
{
  int v0; // r0
  int v2; // [sp+4h] [bp-4h] BYREF

  if ( byte_191C79 )
  {
    v0 = dword_191C7C;
  }
  else
  {
    v0 = pwm_init(0, 1);
    byte_191C79 = 1;
    dword_191C7C = v0;
  }
  pwm_get(v0, &v2);
  return v2;
}
