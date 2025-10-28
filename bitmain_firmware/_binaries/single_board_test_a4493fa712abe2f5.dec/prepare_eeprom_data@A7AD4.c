int __fastcall prepare_eeprom_data(int a1)
{
  size_t v2; // r0
  size_t v3; // r0
  size_t v4; // r0
  char v5; // r3
  size_t v6; // r6
  unsigned int v7; // r4
  char *v8; // r6
  int v9; // r0
  char *v10; // r11
  int v11; // r12
  char v12; // r2
  int v13; // t1
  char *v14; // r3
  unsigned int v15; // r0
  bool v16; // cc
  unsigned int v17; // r2
  double *v18; // r3
  double v19; // d7
  int v20; // r2
  int v21; // r1
  int v22; // r6
  size_t v23; // r2
  int v24; // r4
  int chip_ft_program_version; // r7
  const char *v26; // r4
  size_t v27; // r0
  __int16 *v29; // r6
  int v30; // r4
  int v31; // t1
  _WORD v32[22]; // [sp+0h] [bp-2Ch] BYREF

  zhiju_eeprom_data = 20497;
  byte_3B580E = 3;
  v2 = strlen(dword_3B57DD);
  if ( v2 <= 0x11 )
  {
    memcpy(&dword_3B580F, dword_3B57DD, v2);
  }
  else
  {
    dword_3B580F = *(_DWORD *)dword_3B57DD;
    dword_3B5813 = dword_3B57E1;
    dword_3B5817 = dword_3B57E5;
    dword_3B581B = dword_3B57E9;
    byte_3B581F = byte_3B57ED;
  }
  v3 = strlen(word_3B5910);
  if ( v3 <= 2 )
    memcpy(&word_3B5820, word_3B5910, v3);
  else
    word_3B5820 = *(_WORD *)word_3B5910;
  v4 = strlen(dword_3B5920);
  if ( v4 <= 0xD )
  {
    memcpy(&dword_3B5822, dword_3B5920, v4);
  }
  else
  {
    dword_3B5822 = *(_DWORD *)dword_3B5920;
    dword_3B5826 = dword_3B5924;
    dword_3B582A = dword_3B5928;
    byte_3B582E = byte_3B592C;
  }
  switch ( byte_3B5933 )
  {
    case '1':
      v5 = 1;
      break;
    case '2':
      v5 = 2;
      break;
    case '3':
      v5 = 3;
      break;
    case '4':
      v5 = 4;
      break;
    case '5':
      v5 = 5;
      break;
    default:
      printf("Can't get chip bin number. chip_bin: %s\n", byte_3B5930);
      v5 = -1;
      break;
  }
  byte_3B582F = v5;
  v6 = strlen(src);
  v7 = (v6 - 5) & 0xFFFFFFFB;
  if ( v7 )
  {
LABEL_34:
    v26 = (const char *)MES2Local_Config_Information;
    chip_ft_program_version = 0;
    lcd_show_result(0, (int)"                ", 0x10u);
    lcd_show_result(1, (int)"                ", 0x10u);
    lcd_show_result(2, (int)"                ", 0x10u);
    v26 += 32;
    lcd_show_result(3, (int)"                ", 0x10u);
    v27 = strlen(v26);
    lcd_show_result(0, (int)v26, v27);
    lcd_show_result(1, (int)"FT version", 0xAu);
    lcd_show_result(2, (int)"error", 5u);
    printf("FT version: %s. error\n", src);
    return chip_ft_program_version;
  }
  memset(v32, 0, 0x28u);
  v8 = &src[v6];
  v9 = 0;
  v10 = &algn_3B5934[11];
  v11 = 0;
  do
  {
    while ( 1 )
    {
      v13 = (unsigned __int8)*++v10;
      v12 = v13;
      v14 = (char *)&v32[5 * v7 + 20] + v11;
      if ( (unsigned int)(v13 - 48) > 9 )
        break;
      ++v11;
      v9 = 1;
      *(v14 - 40) = v12;
LABEL_21:
      if ( v8 == v10 )
        goto LABEL_27;
    }
    if ( !v9 )
      goto LABEL_21;
    if ( v7 > 3 )
    {
      printf("There are too many number sector in ft version: %s, error.\n", src);
      goto LABEL_34;
    }
    v15 = strtol((const char *)&v32[5 * v7], 0, 10);
    v16 = v15 > 0xFF;
    v17 = v15;
    v9 = 0;
    v11 = 0;
    if ( v16 )
    {
      printf("FT version: %dst number: %d, error\n", v7, v17);
      goto LABEL_34;
    }
    byte_3B5830[v7++] = v17;
  }
  while ( v8 != v10 );
LABEL_27:
  *(_DWORD *)byte_3B5830 = *(_DWORD *)src;
  *(_DWORD *)&byte_3B5834 = dword_3B5944;
  byte_3B5838 = byte_3B5948;
  byte_3B583E = 0;
  byte_3B5839 = 0;
  get_hardware_infor(qr_code);
  v18 = (double *)&gHistory_Result[((_DWORD)&loc_40E46 + 2) * a1];
  dword_3B5850 = 0;
  v19 = v18[1];
  v20 = *((_DWORD *)v18 + 5);
  byte_3B5845 = byte_3B5966;
  v21 = *((_DWORD *)v18 + 7);
  HIBYTE(word_3B5846) = v20;
  dword_3B5854 = 0;
  LOBYTE(word_3B5846) = BYTE1(v20);
  byte_3B5844 = byte_3B5965;
  LOBYTE(word_3B5848) = BYTE1(v21);
  HIBYTE(word_3B5848) = v21;
  LOBYTE(word_3B584A) = (unsigned __int16)(unsigned int)(v19 * 100.0) >> 8;
  HIBYTE(word_3B584A) = (unsigned int)(v19 * 100.0);
  if ( *(_DWORD *)(*(_DWORD *)(g_config_info[0] + 8) + 4) == 7 )
  {
    chip_ft_program_version = get_chip_ft_program_version(qr_code, (unsigned __int8 *)v32);
    if ( !chip_ft_program_version )
      return chip_ft_program_version;
    if ( LOBYTE(v32[1]) == 1 )
    {
      LOWORD(dword_3B5850) = 14148;
      v22 = MES2Local_Config_Information;
    }
    else
    {
      if ( (unsigned int)LOBYTE(v32[1]) - 2 > 1 )
      {
        chip_ft_program_version = 0;
        printf("Wrong ft version. ft_version[2]: %d\n", LOBYTE(v32[1]));
        return chip_ft_program_version;
      }
      v22 = MES2Local_Config_Information;
      qmemcpy(&dword_3B5850, "D7e", 3);
    }
  }
  else
  {
    v22 = MES2Local_Config_Information;
    v23 = strlen((const char *)(MES2Local_Config_Information + 16));
    if ( v23 >= 8 )
      v23 = 8;
    memcpy(&dword_3B5850, (const void *)(MES2Local_Config_Information + 16), v23);
  }
  byte_3B584E = strtol((const char *)(v22 + 442), 0, 10);
  byte_3B584F = gHistory_Result[((_DWORD)&loc_40E46 + 2) * a1 + 265796];
  memset(dword_12A1F2, 255, 0x5Eu);
  eeprom_data_buf = zhiju_eeprom_data + 512;
  v24 = (unsigned __int8)(HIBYTE(zhiju_eeprom_data) + 2) - 1;
  memcpy(dword_12A1F2, &byte_3B580E, HIBYTE(zhiju_eeprom_data));
  byte_3B585D = CRC5_long((unsigned __int8 *)&eeprom_data_buf, 8 * v24);
  *((_BYTE *)&unk_12983C + v24 + 2484) = byte_3B585D;
  print_eeprom_data();
  chip_ft_program_version = data_enc(dword_12A1F2, 0x50u, 1, 1);
  if ( chip_ft_program_version )
  {
    v29 = &eeprom_data_buf;
    v30 = 0;
    puts("\nEEPROM data after encrypted:");
    while ( 1 )
    {
      v31 = *(unsigned __int8 *)v29;
      v29 = (__int16 *)((char *)v29 + 1);
      printf("%02X", v31);
      if ( v30 )
      {
        if ( (v30 & 7) == 7 )
          putchar(32);
        if ( (v30 & 0xF) == 0xF )
          putchar(10);
        if ( (char *)v29 - (char *)&eeprom_data_buf == 82 )
          break;
      }
      ++v30;
    }
    puts("\n");
  }
  else
  {
    puts("EEPROM data encrypt fail");
  }
  return chip_ft_program_version;
}
