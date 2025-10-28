int __fastcall check_eeprom(size_t a1)
{
  int v1; // r10
  unsigned __int8 *v2; // r6
  bool v3; // cc
  int v5; // r0
  int v6; // r0
  unsigned __int8 *v7; // r2
  int v8; // r0
  size_t v9; // r1
  unsigned __int8 v10; // r3
  unsigned __int8 *v11; // r3
  int v12; // r10
  unsigned __int8 *v13; // r11
  int v14; // r2
  int v15; // r1
  int v16; // r3
  unsigned __int8 *v17; // r12
  unsigned __int8 *v18; // r0
  int v19; // t1
  int v20; // t1
  size_t v21; // r0
  unsigned __int8 *v23; // r11
  int v24; // r2
  int v25; // r12
  unsigned __int8 *v26; // r1
  int v27; // r3
  int v28; // t1
  int v29; // t1
  char v30; // [sp+8h] [bp-600h] BYREF
  char v31; // [sp+208h] [bp-400h] BYREF
  unsigned __int8 v32[512]; // [sp+408h] [bp-200h] BYREF
  unsigned __int8 *v33; // [sp+608h] [bp+0h]
  void *s; // [sp+60Ch] [bp+4h]
  int v35; // [sp+610h] [bp+8h] BYREF
  __int16 v36; // [sp+614h] [bp+Ch]
  char v37; // [sp+616h] [bp+Eh]
  char v38; // [sp+617h] [bp+Fh]

  v1 = gChain;
  v2 = v32;
  v3 = (unsigned int)gChain > 0xF;
  s = &v31;
  gHistory_Result[((_DWORD)&loc_40E46 + 2) * dword_3B57B0 + 2] = 0;
  v33 = (unsigned __int8 *)&v30;
  if ( v3 )
  {
    v5 = sub_26DDC(v1);
  }
  else
  {
    v5 = dword_12C11C[2 * v1];
    if ( !v5 || !dword_12C11C[2 * v1 + 1] )
    {
      v35 = v1;
      v38 = v1;
      v36 = 0;
      v37 = 10;
      v6 = iic_init((int)&v35);
      if ( v6 >= 0 )
      {
        dword_12C11C[2 * v1] = v6;
        dword_12C11C[2 * v1 + 1] = 1;
        goto LABEL_6;
      }
LABEL_26:
      lcd_clear_result();
      v21 = strlen((const char *)(MES2Local_Config_Information + 32));
      lcd_show_result(0, MES2Local_Config_Information + 32, v21);
      sub_D5894("EEPROM init fail");
      printf("EEPROM init fail!!!");
      return 0;
    }
  }
  if ( v5 < 0 )
    goto LABEL_26;
LABEL_6:
  if ( a1 )
  {
    if ( a1 <= 0x20 )
    {
      v9 = 0;
    }
    else
    {
      v7 = v32;
      v8 = 0;
      v9 = ((a1 - 33) & 0xFFFFFFE0) + 32;
      do
      {
        v10 = v8;
        __pld(&v32[v8 + 50]);
        v8 += 32;
        v7[1] = v10 + 1;
        v7[2] = v10 + 2;
        v7[3] = v10 + 3;
        v7[4] = v10 + 4;
        v7[5] = v10 + 5;
        v7[6] = v10 + 6;
        v7[7] = v10 + 7;
        v7[8] = v10 + 8;
        v7[9] = v10 + 9;
        v7[10] = v10 + 10;
        v7[11] = v10 + 11;
        v7[12] = v10 + 12;
        v7[13] = v10 + 13;
        v7[14] = v10 + 14;
        v7[15] = v10 + 15;
        v7[16] = v10 + 16;
        v7[17] = v10 + 17;
        v7[18] = v10 + 18;
        v7[19] = v10 + 19;
        v7[20] = v10 + 20;
        v7[21] = v10 + 21;
        v7[22] = v10 + 22;
        v7[23] = v10 + 23;
        v7[24] = v10 + 24;
        *v7 = v10;
        v7 += 32;
        *(v7 - 7) = v10 + 25;
        *(v7 - 6) = v10 + 26;
        *(v7 - 5) = v10 + 27;
        *(v7 - 4) = v10 + 28;
        *(v7 - 3) = v10 + 29;
        *(v7 - 2) = v10 + 30;
        *(v7 - 1) = v10 + 31;
      }
      while ( v8 != v9 );
    }
    v11 = &v32[v9 - 1];
    do
      *++v11 = v9++;
    while ( v9 < a1 );
    memset(s, 255, a1);
  }
  v12 = *(unsigned __int8 *)(MES2Local_Config_Information + 468);
  if ( !*(_BYTE *)(MES2Local_Config_Information + 468) )
  {
    puts("Check EEPROM without clear data");
    if ( !eeprom_read(gChain, v12, (int)v33, a1) )
    {
      if ( eeprom_write(gChain, v12, v32, a1) )
        goto LABEL_40;
      v23 = (unsigned __int8 *)s;
      if ( !eeprom_read(gChain, v12, (int)s, a1) )
      {
        if ( a1 )
        {
          v24 = v32[0];
          v25 = *v23;
          if ( v25 != v32[0] )
          {
            v27 = v12;
LABEL_44:
            printf("EEPROM check fail! write_buf[%d] = 0x%02x, read_buf[%d] = 0x%02x\n", v27, v24, v27, v25);
            return v12;
          }
          v26 = (unsigned __int8 *)s;
          v27 = v12;
          while ( a1 != ++v27 )
          {
            v28 = *++v2;
            v24 = v28;
            v29 = *++v26;
            v25 = v29;
            if ( v24 != v29 )
              goto LABEL_44;
          }
        }
        if ( eeprom_write(gChain, 0, v33, a1) )
        {
          puts("Backup write EEPROM fail");
        }
        else
        {
          v12 = 1;
          gHistory_Result[265800 * dword_3B57B0 + 2] = 1;
        }
        return v12;
      }
    }
    goto LABEL_27;
  }
  puts("Check EEPROM with clear data");
  if ( eeprom_write(gChain, 0, v32, a1) )
    goto LABEL_40;
  v13 = (unsigned __int8 *)s;
  if ( eeprom_read(gChain, 0, (int)s, a1) )
  {
LABEL_27:
    v12 = 0;
    puts("Read EEPROM fail");
    return v12;
  }
  if ( a1 )
  {
    v14 = v32[0];
    v15 = *v13;
    if ( v32[0] != v15 )
    {
      v16 = 0;
LABEL_42:
      printf("EEPROM check fail! write_buf[%d] = 0x%02x, read_buf[%d] = 0x%02x\n", v16, v14, v16, v15);
      return 0;
    }
    v16 = 0;
    v17 = (unsigned __int8 *)s;
    v18 = v32;
    while ( a1 != ++v16 )
    {
      v19 = *++v18;
      v14 = v19;
      v20 = *++v17;
      v15 = v20;
      if ( v14 != v20 )
        goto LABEL_42;
    }
    memset(v32, 255, a1);
  }
  if ( !eeprom_write(gChain, 0, v32, a1) )
  {
    gHistory_Result[265800 * dword_3B57B0 + 2] = 1;
    return v12;
  }
LABEL_40:
  puts("Write EEPROM fail");
  return 0;
}
