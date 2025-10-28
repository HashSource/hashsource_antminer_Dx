int __fastcall fan_pwm_set(unsigned int a1)
{
  int v2; // r0
  int result; // r0
  unsigned int v4; // r1
  unsigned int *v5; // r3
  int v6; // [sp+4h] [bp-4h] BYREF

  if ( byte_191C79 )
  {
    v2 = dword_191C7C;
  }
  else
  {
    v2 = pwm_init(0, 100);
    dword_191C7C = v2;
    byte_191C79 = 1;
  }
  if ( a1 >= 0x64 )
    a1 = 100;
  result = pwm_get(v2, &v6);
  if ( v6 != a1 )
  {
    LOWORD(v5) = (unsigned __int8)fan_pwm_fixed;
    if ( fan_pwm_fixed )
      LOWORD(v5) = -2888;
    else
      v4 = a1;
    if ( fan_pwm_fixed )
    {
      HIWORD(v5) = 24;
      v4 = *v5;
    }
    return pwm_set(dword_191C7C, v4);
  }
  return result;
}
