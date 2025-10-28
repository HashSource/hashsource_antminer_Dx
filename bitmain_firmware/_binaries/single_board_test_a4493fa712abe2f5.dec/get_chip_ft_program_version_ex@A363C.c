int __fastcall get_chip_ft_program_version_ex(int a1, int a2)
{
  const char *v3; // r8
  const char *v5; // r5
  size_t v6; // r0
  int v7; // r12
  const char *v8; // r9
  int v9; // r6
  unsigned int v10; // r4
  char v11; // r2
  int v12; // t1
  char *v13; // r3
  unsigned int v14; // r0
  _WORD v16[22]; // [sp+0h] [bp-2Ch] BYREF

  v3 = (const char *)(a1 + 80);
  memset(v16, 0, 0x28u);
  v5 = (const char *)(a1 + 79);
  v6 = strlen(v3);
  v7 = 0;
  v8 = &v3[v6];
  v9 = 0;
  v10 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = *(unsigned __int8 *)++v5;
      v11 = v12;
      v13 = (char *)&v16[5 * v10 + 20] + v9;
      if ( (unsigned int)(v12 - 48) > 9 )
        break;
      ++v9;
      v7 = 1;
      *(v13 - 40) = v11;
LABEL_3:
      if ( v5 == v8 )
        return 1;
    }
    if ( !v7 )
      goto LABEL_3;
    if ( v10 > 3 )
    {
      printf("There are too many number sector in ft version: %s, error.\n", v3);
      return 0;
    }
    v14 = strtol((const char *)&v16[5 * v10], 0, 10);
    v7 = 0;
    v9 = 0;
    if ( v14 > 0xFF )
      break;
    *(_BYTE *)(a2 + v10++) = v14;
    if ( v5 == v8 )
      return 1;
  }
  printf("FT version: %dst number: %d, error\n", v10, v14);
  return 0;
}
