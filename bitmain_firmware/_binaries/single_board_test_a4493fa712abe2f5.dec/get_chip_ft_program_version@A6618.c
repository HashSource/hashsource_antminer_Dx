int __fastcall get_chip_ft_program_version(unsigned __int8 *a1, unsigned __int8 *a2)
{
  int v2; // r3
  unsigned __int8 v6; // r0
  int v7; // r1
  unsigned __int8 v8; // r3
  unsigned __int8 v9; // r0
  int v10; // r1
  unsigned __int8 v11; // r0
  int v12; // r1
  unsigned __int8 v13; // r0
  __int16 v14; // [sp+Ch] [bp-8h] BYREF
  char v15; // [sp+Eh] [bp-6h]

  v2 = a1[80];
  v14 = 0;
  v15 = 0;
  if ( v2 == 70 )
  {
    LOBYTE(v14) = a1[81];
    v6 = strtol((const char *)&v14, 0, 10);
    *a2 = v6;
    printf("F%d", v6);
    v7 = a1[82];
    if ( v7 == 86 )
    {
      v8 = a1[84];
      LOBYTE(v14) = a1[83];
      HIBYTE(v14) = v8;
      v9 = strtol((const char *)&v14, 0, 10);
      a2[1] = v9;
      printf("V%d", v9);
      v10 = a1[85];
      if ( v10 == 66 )
      {
        v14 = a1[86];
        v11 = strtol((const char *)&v14, 0, 10);
        a2[2] = v11;
        printf("B%d", v11);
        v12 = a1[87];
        if ( v12 == 67 )
        {
          LOBYTE(v14) = a1[88];
          v13 = strtol((const char *)&v14, 0, 10);
          a2[3] = v13;
          printf("C%d", v13);
          printf("FT version: F%dV%02dB%dC%d\n", *a2, a2[1], a2[2], a2[3]);
          return 1;
        }
        else
        {
          printf("4th FT version is not C, but is %c\n", v12);
          return 0;
        }
      }
      else
      {
        printf("3rd FT version is not B, but is %c\n", v10);
        return 0;
      }
    }
    else
    {
      printf("2nd FT version is not V, but is %c\n", v7);
      return 0;
    }
  }
  else
  {
    printf("1st FT version is not F, but is %c\n", v2);
    return 0;
  }
}
