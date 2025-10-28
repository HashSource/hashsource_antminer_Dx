int __fastcall pwm_uninit(int a1)
{
  int result; // r0
  int *v2; // r3

  if ( a1 > 2 )
    return sub_83340();
  result = a1 - 1;
  v2 = &dword_12B728[2 * result];
  v2[9] = 0;
  *((_BYTE *)v2 + 40) = 0;
  return result;
}
