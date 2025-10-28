int __fastcall fan_pwm_set(unsigned int a1)
{
  int v2; // r0
  int result; // r0
  unsigned int v4; // r1
  int v5; // r3
  int v6; // [sp+4h] [bp-8h] BYREF

  if ( byte_1A4990 )
  {
    v2 = dword_1A4994;
  }
  else
  {
    v2 = pwm_init(0, 100);
    dword_1A4994 = v2;
    byte_1A4990 = 1;
  }
  if ( a1 >= 0x64 )
    a1 = 100;
  result = pwm_get(v2, &v6);
  if ( v6 != a1 )
  {
    LOWORD(v5) = (unsigned __int8)fan_pwm_fixed;
    if ( fan_pwm_fixed )
      LOWORD(v5) = 9632;
    else
      v4 = a1;
    if ( fan_pwm_fixed )
    {
      HIWORD(v5) = 26;
      v4 = *(_DWORD *)(v5 + 44);
    }
    return pwm_set(dword_1A4994, v4);
  }
  return result;
}
