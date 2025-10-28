int __fastcall get_min_value(int a1, unsigned int a2)
{
  int v2; // r5
  int v3; // r2
  unsigned int v4; // r4
  int v5; // r3
  int v6; // r6
  int v7; // r3

  v2 = 127;
  if ( a2 )
  {
    if ( a2 <= 0x20 )
    {
      v4 = 0;
      v2 = 127;
    }
    else
    {
      v3 = 0;
      v2 = 127;
      v4 = (unsigned __int8)(((a2 - 33) & 0xE0) + 32);
      do
      {
        v5 = *(char *)(a1 + (unsigned __int8)(v3 + 1));
        if ( v5 >= *(char *)(a1 + (unsigned __int8)(v3 + 2)) )
          v5 = *(char *)(a1 + (unsigned __int8)(v3 + 2));
        if ( v5 >= *(char *)(a1 + v3) )
          v5 = *(char *)(a1 + v3);
        if ( v5 >= *(char *)(a1 + (unsigned __int8)(v3 + 3)) )
          v5 = *(char *)(a1 + (unsigned __int8)(v3 + 3));
        if ( v5 >= *(char *)(a1 + (unsigned __int8)(v3 + 4)) )
          v5 = *(char *)(a1 + (unsigned __int8)(v3 + 4));
        if ( v5 >= *(char *)(a1 + (unsigned __int8)(v3 + 5)) )
          v5 = *(char *)(a1 + (unsigned __int8)(v3 + 5));
        if ( v5 >= *(char *)(a1 + (unsigned __int8)(v3 + 6)) )
          v5 = *(char *)(a1 + (unsigned __int8)(v3 + 6));
        if ( v5 >= *(char *)(a1 + (unsigned __int8)(v3 + 7)) )
          v5 = *(char *)(a1 + (unsigned __int8)(v3 + 7));
        if ( v5 >= *(char *)(a1 + (unsigned __int8)(v3 + 8)) )
          v5 = *(char *)(a1 + (unsigned __int8)(v3 + 8));
        if ( v5 >= *(char *)(a1 + (unsigned __int8)(v3 + 9)) )
          v5 = *(char *)(a1 + (unsigned __int8)(v3 + 9));
        if ( v5 >= *(char *)(a1 + (unsigned __int8)(v3 + 10)) )
          v5 = *(char *)(a1 + (unsigned __int8)(v3 + 10));
        if ( v5 >= *(char *)(a1 + (unsigned __int8)(v3 + 11)) )
          v5 = *(char *)(a1 + (unsigned __int8)(v3 + 11));
        if ( v5 >= *(char *)(a1 + (unsigned __int8)(v3 + 12)) )
          v5 = *(char *)(a1 + (unsigned __int8)(v3 + 12));
        if ( v5 >= *(char *)(a1 + (unsigned __int8)(v3 + 13)) )
          v5 = *(char *)(a1 + (unsigned __int8)(v3 + 13));
        if ( v5 >= *(char *)(a1 + (unsigned __int8)(v3 + 14)) )
          v5 = *(char *)(a1 + (unsigned __int8)(v3 + 14));
        if ( v5 >= *(char *)(a1 + (unsigned __int8)(v3 + 15)) )
          v5 = *(char *)(a1 + (unsigned __int8)(v3 + 15));
        if ( v5 >= *(char *)(a1 + (unsigned __int8)(v3 + 16)) )
          v5 = *(char *)(a1 + (unsigned __int8)(v3 + 16));
        if ( v5 >= *(char *)(a1 + (unsigned __int8)(v3 + 17)) )
          v5 = *(char *)(a1 + (unsigned __int8)(v3 + 17));
        if ( v5 >= *(char *)(a1 + (unsigned __int8)(v3 + 18)) )
          v5 = *(char *)(a1 + (unsigned __int8)(v3 + 18));
        if ( v5 >= *(char *)(a1 + (unsigned __int8)(v3 + 19)) )
          v5 = *(char *)(a1 + (unsigned __int8)(v3 + 19));
        if ( v5 >= *(char *)(a1 + (unsigned __int8)(v3 + 20)) )
          v5 = *(char *)(a1 + (unsigned __int8)(v3 + 20));
        if ( v5 >= *(char *)(a1 + (unsigned __int8)(v3 + 21)) )
          v5 = *(char *)(a1 + (unsigned __int8)(v3 + 21));
        if ( v5 >= *(char *)(a1 + (unsigned __int8)(v3 + 22)) )
          v5 = *(char *)(a1 + (unsigned __int8)(v3 + 22));
        if ( v5 >= *(char *)(a1 + (unsigned __int8)(v3 + 23)) )
          v5 = *(char *)(a1 + (unsigned __int8)(v3 + 23));
        if ( v5 >= *(char *)(a1 + (unsigned __int8)(v3 + 24)) )
          v5 = *(char *)(a1 + (unsigned __int8)(v3 + 24));
        if ( v5 >= *(char *)(a1 + (unsigned __int8)(v3 + 25)) )
          v5 = *(char *)(a1 + (unsigned __int8)(v3 + 25));
        if ( v5 >= *(char *)(a1 + (unsigned __int8)(v3 + 26)) )
          v5 = *(char *)(a1 + (unsigned __int8)(v3 + 26));
        if ( v5 >= *(char *)(a1 + (unsigned __int8)(v3 + 27)) )
          v5 = *(char *)(a1 + (unsigned __int8)(v3 + 27));
        if ( v5 >= *(char *)(a1 + (unsigned __int8)(v3 + 28)) )
          v5 = *(char *)(a1 + (unsigned __int8)(v3 + 28));
        if ( v5 >= *(char *)(a1 + (unsigned __int8)(v3 + 29)) )
          v5 = *(char *)(a1 + (unsigned __int8)(v3 + 29));
        __pld((void *)(a1 + v3 + 34));
        v6 = *(char *)(a1 + (unsigned __int8)(v3 + 31));
        if ( v5 >= *(char *)(a1 + (unsigned __int8)(v3 + 30)) )
          v5 = *(char *)(a1 + (unsigned __int8)(v3 + 30));
        v3 = (unsigned __int8)(v3 + 32);
        if ( v5 >= v6 )
          v5 = v6;
        if ( v2 >= v5 )
          v2 = v5;
      }
      while ( (unsigned __int8)v4 != v3 );
    }
    do
    {
      v7 = *(char *)(a1 + v4);
      v4 = (unsigned __int8)(v4 + 1);
      if ( v2 >= v7 )
        v2 = v7;
    }
    while ( a2 > v4 );
  }
  return v2;
}
