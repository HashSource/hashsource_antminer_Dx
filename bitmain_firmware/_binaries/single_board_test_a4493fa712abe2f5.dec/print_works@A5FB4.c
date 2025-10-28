int __fastcall print_works(int a1)
{
  unsigned int v2; // r8
  _DWORD *v3; // r2
  unsigned int v4; // r7
  unsigned int v5; // r4
  unsigned int v6; // r1
  unsigned int v7; // r6
  _DWORD *v8; // r4
  char *v9; // r10
  unsigned int v10; // r2
  unsigned __int8 *v11; // r11
  unsigned int v12; // r10
  int v13; // t1
  char *v14; // r10
  unsigned int v15; // r2
  char *format; // [sp+0h] [bp-Ch]

  printf("\n%s begin\n\n", "print_works");
  if ( *(_DWORD *)(a1 + 40) )
  {
    v2 = 0;
    format = "asic[%02d][%02d][%02d].work=0x";
    do
    {
      v3 = *(_DWORD **)(a1 + 8);
      v4 = 0;
      v5 = v3[3];
      if ( v5 )
      {
        do
        {
          v6 = v3[4];
          v7 = 0;
          if ( v6 )
          {
            while ( 1 )
            {
              v8 = (_DWORD *)(v3[2] + 104 * (v7 + v6 * (v4 + v2 * v5)));
              printf(format, v2, v4, v7, format);
              if ( v8[22] )
              {
                v9 = (char *)v8 + 3;
                do
                {
                  printf("%02x", (unsigned __int8)v9[1]);
                  v10 = v9 - 2 - (char *)v8;
                  ++v9;
                }
                while ( v8[22] > v10 );
              }
              printf(" nonce=0x");
              if ( v8[23] )
              {
                v11 = (unsigned __int8 *)(v8 + 21);
                v12 = 0;
                do
                {
                  v13 = *v11++;
                  printf("%02x", v13);
                  ++v12;
                }
                while ( v8[23] > v12 );
              }
              printf(" sol=0x");
              if ( v8[24] )
              {
                v14 = (char *)v8 + 87;
                do
                {
                  printf("%02x", (unsigned __int8)v14[1]);
                  v15 = v14 - 86 - (char *)v8;
                  ++v14;
                }
                while ( v8[24] > v15 );
              }
              ++v7;
              putchar(10);
              v3 = *(_DWORD **)(a1 + 8);
              v6 = v3[4];
              if ( v6 <= v7 )
                break;
              v5 = v3[3];
            }
          }
          ++v4;
          putchar(10);
          v3 = *(_DWORD **)(a1 + 8);
          v5 = v3[3];
        }
        while ( v5 > v4 );
      }
      ++v2;
      putchar(10);
    }
    while ( *(_DWORD *)(a1 + 40) > v2 );
  }
  return j_printf("%s end\n\n", "print_works");
}
