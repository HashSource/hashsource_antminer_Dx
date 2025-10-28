int __fastcall sub_1FFC4(char a1, int a2, int a3, int (__fastcall *a4)(char *, int, int), int a5)
{
  unsigned int v6; // r4
  int v7; // r5

  if ( (a1 & 0x1F) != 0 )
  {
    v6 = (a1 & 0x1F) * a2;
    if ( a4("\n", 1, a5) )
      return -1;
    if ( v6 )
    {
      while ( 1 )
      {
        v7 = v6;
        if ( v6 >= 0x20 )
          v7 = 32;
        if ( a4("                                ", v7, a5) )
          break;
        v6 -= v7;
        if ( !v6 )
          return 0;
      }
      return -1;
    }
    return 0;
  }
  if ( !a3 || (a1 & 0x20) != 0 )
    return 0;
  return a4(" ", 1, a5);
}
