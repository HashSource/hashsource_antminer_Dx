int fan_pwm_set_max()
{
  int v0; // r0
  int result; // r0
  int v2; // [sp+4h] [bp-8h] BYREF

  if ( byte_191C79 )
  {
    v0 = dword_191C7C;
  }
  else
  {
    v0 = pwm_init(0, 100);
    dword_191C7C = v0;
    byte_191C79 = 1;
  }
  result = pwm_get(v0, &v2);
  if ( v2 != 100 )
    return pwm_set(dword_191C7C, 0x64u);
  return result;
}
