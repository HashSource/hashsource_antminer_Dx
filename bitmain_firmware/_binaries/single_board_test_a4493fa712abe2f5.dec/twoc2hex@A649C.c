int __fastcall twoc2hex(int a1, int a2)
{
  int v2; // r3
  int v4; // r4
  int v5; // r2
  int v6; // r0
  int v7; // r3

  v2 = a1;
  if ( (unsigned int)(a1 - 48) <= 9 )
    v2 = a1 & 0xF;
  if ( (unsigned int)(a1 - 48) > 9 )
  {
    v5 = v2 & 0xDF;
    switch ( v5 )
    {
      case 'A':
        v4 = 160;
        break;
      case 'B':
        v4 = 176;
        break;
      case 'C':
        v4 = 192;
        break;
      case 'D':
        v4 = 208;
        break;
      case 'E':
        v4 = 224;
        break;
      default:
        v4 = 240;
        if ( v5 != 70 )
          printf("input value error: %c\n", v2);
        break;
    }
  }
  else
  {
    v4 = 16 * v2;
  }
  if ( (unsigned int)(a2 - 48) > 9 )
  {
    v7 = a2 & 0xDF;
    switch ( v7 )
    {
      case 'A':
        v6 = 10;
        break;
      case 'B':
        v6 = 11;
        break;
      case 'C':
        v6 = 12;
        break;
      case 'D':
        v6 = 13;
        break;
      case 'E':
        v6 = 14;
        break;
      case 'F':
        v6 = 15;
        break;
      default:
        printf("input value error: %c\n", a2);
        v6 = 255;
        break;
    }
  }
  else
  {
    v6 = a2 & 0xF;
  }
  return v6 ^ v4;
}
