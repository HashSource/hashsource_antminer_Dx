int __fastcall pwm_uninit(int a1)
{
  int result; // r0
  int *v2; // r3

  if ( a1 > 2 )
    return sub_B4774();
  result = a1 - 1;
  v2 = &dword_195CAC[2 * result];
  v2[32] = 0;
  *((_BYTE *)v2 + 132) = 0;
  return result;
}
