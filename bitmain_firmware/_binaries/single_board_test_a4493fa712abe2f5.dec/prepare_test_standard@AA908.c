int __fastcall prepare_test_standard(_DWORD *a1)
{
  unsigned __int8 *v2; // r4
  unsigned __int8 v3; // r2
  unsigned __int8 v4; // r3
  unsigned __int8 v5; // r3
  unsigned __int8 v6; // r3
  int v7; // r1
  bool v8; // zf
  const char *v9; // r8
  const char *v10; // r2
  const char *v11; // r3
  int test_standard_position; // r4
  size_t v13; // r0
  size_t v15; // r0
  int v16; // [sp+18h] [bp-18h]
  int v17; // [sp+1Ch] [bp-14h]
  int v18; // [sp+24h] [bp-Ch] BYREF
  int v19; // [sp+28h] [bp-8h] BYREF
  int v20; // [sp+2Ch] [bp-4h] BYREF

  LOWORD(v2) = (unsigned __int16)qr_code;
  v19 = 0;
  v20 = 0;
  v18 = 0;
  if ( strlen(&byte_3B5960) > 2 )
  {
    HIWORD(v2) = (unsigned int)qr_code >> 16;
    v3 = v2[113];
    v4 = v2[114];
    LOBYTE(v20) = v2[112];
    BYTE1(v20) = v3;
    BYTE2(v20) = v4;
    if ( strlen(&byte_3B5960) > 4 )
      goto LABEL_3;
LABEL_21:
    puts("You want copy to many chars");
    if ( strlen(&byte_3B5960) > 6 )
      goto LABEL_4;
    goto LABEL_22;
  }
  HIWORD(v2) = (unsigned int)qr_code >> 16;
  puts("You want copy to many chars");
  if ( strlen(&byte_3B5960) <= 4 )
    goto LABEL_21;
LABEL_3:
  v5 = v2[116];
  LOBYTE(v19) = v2[115];
  *(_WORD *)((char *)&v19 + 1) = v5;
  if ( strlen(&byte_3B5960) > 6 )
  {
LABEL_4:
    v6 = v2[118];
    LOBYTE(v18) = v2[117];
    *(_WORD *)((char *)&v18 + 1) = v6;
    goto LABEL_5;
  }
LABEL_22:
  puts("You want copy to many chars");
LABEL_5:
  v7 = v2[67];
  v8 = v7 == 49;
  if ( v7 == 49 )
    v7 = 1;
  v9 = (const char *)(MES2Local_Config_Information + 16);
  v10 = (const char *)(MES2Local_Config_Information + 32);
  v11 = (const char *)(MES2Local_Config_Information + 48);
  if ( !v8 )
  {
    switch ( v7 )
    {
      case '2':
        v7 = 2;
        break;
      case '3':
        v7 = 3;
        break;
      case '4':
        v7 = 4;
        break;
      case '5':
        v7 = 5;
        break;
      default:
        v16 = MES2Local_Config_Information + 32;
        v17 = MES2Local_Config_Information + 48;
        printf("Can't get chip bin number. chip_bin: %s\n", byte_3B5930);
        v7 = 255;
        v10 = (const char *)v16;
        v11 = (const char *)v17;
        break;
    }
  }
  test_standard_position = find_test_standard_position(
                             a1,
                             v9,
                             v10,
                             v11,
                             (const char *)&v20,
                             (const char *)&v19,
                             (const char *)&v18,
                             src,
                             v7);
  if ( test_standard_position )
  {
    gFind_test_standard = 1;
    lcd_clear_result();
    v13 = strlen((const char *)(MES2Local_Config_Information + 32));
    lcd_show_result(0, MES2Local_Config_Information + 32, v13);
    lcd_show_result(1, (int)"Find test", 9u);
    lcd_show_result(2, (int)"standard", 8u);
    lcd_show_result(3, (int)"Press Start Key", 0xFu);
    puts("find test standard, Press Start Key to Begin Test");
    return test_standard_position;
  }
  else
  {
    gFind_test_standard = 0;
    lcd_clear_result();
    v15 = strlen((const char *)(MES2Local_Config_Information + 32));
    lcd_show_result(0, MES2Local_Config_Information + 32, v15);
    lcd_show_result(1, (int)"Can't find", 0xAu);
    lcd_show_result(2, (int)"test standard", 0xDu);
    lcd_show_result(3, (int)"please re-scan", 0xEu);
    puts("Can't find test standard");
    sleep(5u);
    return 0;
  }
}
