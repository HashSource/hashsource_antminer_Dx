int display_main_page()
{
  int v0; // r4
  int v1; // r6
  int v2; // r6
  int v3; // r6
  const char *v4; // r0
  int v5; // r3
  int v6; // r2
  int v7; // r3
  int v8; // r2
  int v9; // r2
  int v11; // r2
  size_t v12; // r0
  int v13; // r3
  int v14; // r2
  int v15; // r3
  int v16; // r2
  int v17; // [sp+0h] [bp-14h] BYREF
  int v18; // [sp+4h] [bp-10h]
  int v19; // [sp+8h] [bp-Ch]
  int v20; // [sp+Ch] [bp-8h]

  lcd_clear_result();
  v0 = MES2Local_Config_Information;
  if ( *(_BYTE *)MES2Local_Config_Information != 80 || *(_BYTE *)(MES2Local_Config_Information + 1) != 84 )
  {
    if ( strcmp((const char *)MES2Local_Config_Information, "PT1+") )
    {
LABEL_14:
      lcd_clear_result();
      sub_D58C4((const char *)(MES2Local_Config_Information + 32));
      sub_D58AC("Test Process");
      return sub_D5894("error");
    }
LABEL_12:
    sub_D58C4((const char *)(v0 + 32));
    sub_D58AC("Find ASIC");
    v18 = 0;
    v11 = *(_DWORD *)(MES2Local_Config_Information + 200);
    v17 = 0;
    v19 = 0;
    v20 = 0;
    sprintf((char *)&v17, "%d pattern test", v11);
    sub_D5894((const char *)&v17);
    return printf("do PT1+ test");
  }
  v1 = *(unsigned __int8 *)(MES2Local_Config_Information + 2);
  if ( v1 == 49 && !*(_BYTE *)(MES2Local_Config_Information + 3) )
  {
    v12 = strlen((const char *)(MES2Local_Config_Information + 32));
    lcd_show_result(0, MES2Local_Config_Information + 32, v12);
    sub_D5894("Only find ASIC");
    return printf("Only find ASIC");
  }
  if ( !strcmp((const char *)MES2Local_Config_Information, "PT1+") )
    goto LABEL_12;
  if ( v1 != 50 )
    goto LABEL_14;
  v2 = *(unsigned __int8 *)(v0 + 3);
  if ( *(_BYTE *)(v0 + 3) )
    goto LABEL_14;
  if ( *(_DWORD *)(v0 + 64) == 1 )
  {
    sub_D58C4((const char *)(v0 + 48));
    v17 = v2;
    v13 = *(_DWORD *)(MES2Local_Config_Information + 200);
    v14 = *(_DWORD *)(MES2Local_Config_Information + 64);
    v18 = v2;
    v19 = v2;
    v20 = v2;
    sprintf((char *)&v17, "IC:%2d  P:%d", v14, v13);
    sub_D58AC((const char *)&v17);
    v18 = v2;
    v15 = *(_DWORD *)(MES2Local_Config_Information + 224);
    v16 = *(_DWORD *)(MES2Local_Config_Information + 236);
    v19 = v2;
    v20 = v2;
    v17 = v2;
    sprintf((char *)&v17, "FREQ:%d L:%d", v16, v15);
    sub_D5894((const char *)&v17);
    sub_D587C("Vol: set power");
    return printf("Single ASIC pattern test");
  }
  else
  {
    v3 = *(unsigned __int8 *)(v0 + 188);
    v4 = (const char *)(v0 + 32);
    if ( *(_BYTE *)(v0 + 188) )
    {
      sub_D58C4(v4);
      sub_D58AC("Factory Mode:PT2");
      sub_D5894("Please Scan code");
      sub_D587C("first");
      return puts("Factory Mode:PT2, Please Scan code first");
    }
    else if ( *(_BYTE *)(v0 + 189) )
    {
      sub_D58C4(v4);
      v17 = v3;
      v5 = *(_DWORD *)(MES2Local_Config_Information + 200);
      v6 = *(_DWORD *)(MES2Local_Config_Information + 64);
      v18 = v3;
      v19 = v3;
      v20 = v3;
      sprintf((char *)&v17, "IC:%2d  P:%d", v6, v5);
      sub_D58AC((const char *)&v17);
      v18 = v3;
      v7 = *(_DWORD *)(MES2Local_Config_Information + 224);
      v8 = *(_DWORD *)(MES2Local_Config_Information + 236);
      v19 = v3;
      v20 = v3;
      v17 = v3;
      sprintf((char *)&v17, "FREQ:%d L:%d", v8, v7);
      sub_D5894((const char *)&v17);
      v18 = v3;
      v9 = *(_DWORD *)(MES2Local_Config_Information + 232);
      v19 = v3;
      v20 = v3;
      v17 = v3;
      sprintf((char *)&v17, "Voltage: %d", v9);
      sub_D587C((const char *)&v17);
      return printf("Manual Mode:PT2, does not use scan code gun");
    }
    else
    {
      sub_D58C4(v4);
      sub_D58AC("Manual Mode:PT2");
      sub_D5894("Please Scan code");
      sub_D587C("first");
      return puts("Manual Test Mode:PT2, Please Scan code first");
    }
  }
}
