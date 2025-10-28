int __fastcall copy_eeprom(unsigned int a1, unsigned int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int i; // r4
  int v9; // r1
  int result; // r0
  unsigned int v11; // [sp+0h] [bp-Ch] BYREF
  __int16 v12; // [sp+4h] [bp-8h]
  char v13; // [sp+6h] [bp-6h]
  char v14; // [sp+7h] [bp-5h]

  if ( a1 > 0xF )
  {
    v4 = sub_26DDC(a1);
    goto LABEL_15;
  }
  v4 = dword_12C11C[2 * a1];
  if ( v4 && dword_12C11C[2 * a1 + 1] )
  {
LABEL_15:
    if ( v4 >= 0 )
      goto LABEL_6;
    goto LABEL_16;
  }
  v11 = a1;
  v14 = a1;
  v12 = 0;
  v13 = 10;
  v5 = iic_init((int)&v11);
  if ( v5 >= 0 )
  {
    dword_12C11C[2 * a1] = v5;
    dword_12C11C[2 * a1 + 1] = 1;
    goto LABEL_6;
  }
LABEL_16:
  printf("EEPROM init fail!!!");
LABEL_6:
  if ( a2 > 0xF )
  {
    v6 = sub_26DDC(a2);
    goto LABEL_18;
  }
  v6 = dword_12C11C[2 * a2];
  if ( v6 && dword_12C11C[2 * a2 + 1] )
  {
LABEL_18:
    if ( v6 >= 0 )
      goto LABEL_11;
LABEL_19:
    printf("EEPROM init fail!!!");
    goto LABEL_11;
  }
  v11 = a2;
  v14 = a2;
  v12 = 0;
  v13 = 10;
  v7 = iic_init((int)&v11);
  if ( v7 < 0 )
    goto LABEL_19;
  dword_12C11C[2 * a2] = v7;
  dword_12C11C[2 * a2 + 1] = 1;
LABEL_11:
  for ( i = 0; i != 90; ++i )
  {
    eeprom_read(a1, i, (int)&v11, 1);
    v9 = (unsigned __int8)i;
    eeprom_write(a2, v9, (unsigned __int8 *)&v11, 1);
    result = printf("write eeprom  %02x\n", (unsigned __int8)v11);
  }
  return result;
}
