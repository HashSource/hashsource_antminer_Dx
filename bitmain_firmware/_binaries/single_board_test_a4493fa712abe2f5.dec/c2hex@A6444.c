int __fastcall c2hex(int a1)
{
  int v2; // r3

  if ( (unsigned int)(a1 - 48) <= 9 )
    return a1 & 0xF;
  v2 = a1 & 0xDF;
  switch ( v2 )
  {
    case 'A':
      return 10;
    case 'B':
      return 11;
    case 'C':
      return 12;
    case 'D':
      return 13;
    case 'E':
      return 14;
    case 'F':
      return 15;
  }
  printf("input value error: %c\n", a1);
  return 255;
}
