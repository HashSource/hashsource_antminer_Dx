int __fastcall fan_pwm_set(unsigned int a1)
{
  int v2; // r0
  int result; // r0
  int v4; // [sp+4h] [bp-8h] BYREF

  if ( byte_12A4BC )
  {
    v2 = dword_12A4C0;
  }
  else
  {
    v2 = pwm_init(0, 100);
    dword_12A4C0 = v2;
    byte_12A4BC = 1;
  }
  result = pwm_get(v2, &v4);
  if ( a1 >= 0x64 )
    a1 = 100;
  if ( v4 != a1 )
  {
    if ( fan_pwm_fixed )
      return pwm_set(dword_12A4C0, *(unsigned int *)fan_pwm);
    else
      return pwm_set(dword_12A4C0, a1);
  }
  return result;
}
