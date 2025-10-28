_DWORD *__fastcall new_iterator_c_map(int a1)
{
  _DWORD *result; // r0

  result = malloc(0x18u);
  result[3] = a1;
  *result = sub_57DDC;
  result[1] = sub_57FD4;
  result[2] = sub_5802C;
  result[4] = 0;
  result[5] = 0;
  return result;
}
