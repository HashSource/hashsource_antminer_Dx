int __fastcall pcba_set_fan_pwm(int result)
{
  int v1; // r3
  int v2; // r2

  if ( (unsigned int)(result - 3) > 0x61 )
  {
    result = puts("warning: fan speed range only support [3, 100], otherwise set default value 50");
    v1 = 3276850;
  }
  else
  {
    v1 = (100 - result) | (result << 16);
  }
  v2 = dword_3B52A4;
  *(_DWORD *)(dword_3B52A4 + 132) = v1;
  *(_DWORD *)(v2 + 160) = v1;
  return result;
}
