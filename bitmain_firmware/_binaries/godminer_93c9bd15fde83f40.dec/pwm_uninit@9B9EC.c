int __fastcall pwm_uninit(int a1)
{
  int result; // r0
  int *v2; // r3

  if ( a1 > 2 )
    return sub_9B944();
  result = a1 - 1;
  v2 = &dword_1A88C8[2 * result];
  v2[7] = 0;
  *((_BYTE *)v2 + 32) = 0;
  return result;
}
