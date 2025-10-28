unsigned int __fastcall PT2_display_result_on_LCD(int a1)
{
  unsigned int v1; // r5
  unsigned int result; // r0
  _BYTE *v4; // r4
  int v5; // r3
  int v6; // r4
  int v7; // r3
  int v8; // r2
  _BYTE *v9; // r3
  int v10; // r5
  _BYTE *v11; // r3
  int v12; // r2
  int v13; // r3
  int v14; // r3
  int v15; // r2
  unsigned int v16; // r12
  unsigned int v17; // r3
  int v18; // r4
  unsigned int v19; // r5
  _BYTE *v20; // r2
  _DWORD *v21; // r2
  int v22; // r2
  int v23; // r12
  unsigned int v24; // r0
  int v25; // r1
  int v26; // r4
  int v27; // lr
  _BYTE *v28; // r2
  _DWORD *v29; // r2
  _BYTE *v30; // r3
  int v31; // r2
  int v32; // r3
  _BYTE *v33; // r3
  int v34; // r2
  int v35; // r3
  int v36; // [sp+8h] [bp-20h]
  int v37; // [sp+Ch] [bp-1Ch]
  int v38; // [sp+10h] [bp-18h]
  int v39; // [sp+14h] [bp-14h]
  char s[4]; // [sp+18h] [bp-10h] BYREF
  int v41; // [sp+1Ch] [bp-Ch]
  int v42; // [sp+20h] [bp-8h]
  int v43; // [sp+24h] [bp-4h]
  _DWORD vars0[8]; // [sp+28h] [bp+0h] BYREF

  v1 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  result = lcd_clear_result();
  v4 = &gHistory_Result[265800 * a1];
  v5 = (unsigned __int8)v4[265796];
  if ( !v4[265796] )
  {
    sub_D58AC("Pattern: OK");
    v6 = (unsigned __int8)v4[2];
    if ( v6 )
      result = sub_D5894("EEPROM:  OK");
    else
      result = sub_D5894("EEPROM:  NG");
    v7 = MES2Local_Config_Information;
    v8 = *(unsigned __int8 *)(MES2Local_Config_Information + 89);
    if ( *(_BYTE *)(MES2Local_Config_Information + 88) )
    {
      if ( *(_BYTE *)(MES2Local_Config_Information + 89) )
        goto LABEL_41;
      if ( gHistory_Result[265800 * a1 + 3] )
      {
        result = sub_D587C("PIC Sensor: OK");
      }
      else
      {
        v6 = (unsigned __int8)gHistory_Result[265800 * a1 + 3];
        result = sub_D587C("PIC Sensor: NG");
      }
      v7 = MES2Local_Config_Information;
      if ( *(_BYTE *)(MES2Local_Config_Information + 88) )
        goto LABEL_41;
      v8 = *(unsigned __int8 *)(MES2Local_Config_Information + 89);
    }
    if ( v8 )
    {
      v9 = &gHistory_Result[265800 * a1];
      v10 = (unsigned __int8)v9[4];
      if ( !v9[4] )
      {
        result = sub_D587C("ASIC Sensor:  NG");
        if ( *(_WORD *)(MES2Local_Config_Information + 88) != 257 )
          return result;
        v6 = v10;
        goto LABEL_19;
      }
      result = sub_D587C("ASIC Sensor:  OK");
      v7 = MES2Local_Config_Information;
    }
LABEL_41:
    if ( *(_WORD *)(v7 + 88) != 257 )
    {
LABEL_42:
      if ( !v6 )
        return result;
      v22 = *(_DWORD *)&gHistory_Result[((_DWORD)&loc_40E46 + 2) * a1 + 16];
      *(_DWORD *)s = 0;
      v41 = 0;
      goto LABEL_44;
    }
LABEL_19:
    v11 = &gHistory_Result[265800 * a1];
    v12 = (unsigned __int8)v11[3];
    v13 = (unsigned __int8)v11[4];
    if ( !v12 )
    {
      if ( v13 )
        return sub_D587C("P_S: NG  A_S: OK");
      else
        return sub_D587C("P_S: NG  A_S: NG");
    }
    if ( !v13 )
      return sub_D587C("P_S: OK  A_S: NG");
    result = sub_D587C("P_S: OK  A_S: OK");
    goto LABEL_42;
  }
  if ( v5 == 1 )
  {
    sub_D58AC("Pattern: OK");
    v23 = MES2Local_Config_Information;
    v24 = *(_DWORD *)(MES2Local_Config_Information + 64);
    if ( v24 )
    {
      v25 = 0;
      v26 = 0;
      v27 = 0;
      do
      {
        v28 = &gHistory_Result[265800 * a1 + v25];
        v25 = (unsigned __int8)(v25 + 1);
        if ( !v28[265520] )
        {
          v26 = (unsigned __int8)(v26 + 1);
          v29 = &vars0[v1];
          if ( v1 <= 3 )
          {
            v1 = (unsigned __int8)(v1 + 1);
            *(v29 - 8) = v27;
          }
        }
        v27 = (unsigned __int8)v25;
      }
      while ( (unsigned __int8)v25 < v24 );
      if ( v26 )
      {
        *(_DWORD *)s = 0;
        v41 = 0;
        v42 = 0;
        v43 = 0;
        switch ( v26 )
        {
          case 1:
            sprintf(s, "B_A: %d", v36);
            break;
          case 2:
            sprintf(s, "B_A: %d %d", v36, v37);
            break;
          case 3:
            sprintf(s, "B_A: %d %d %d", v36, v37, v38);
            break;
          default:
            sprintf(s, "B_A: %d %d %d %d", v36, v37, v38, v39);
            break;
        }
        sub_D587C(s);
        v23 = MES2Local_Config_Information;
      }
    }
    v30 = &gHistory_Result[((_DWORD)&loc_40E46 + 2) * a1];
    v31 = (unsigned __int8)v30[2];
    if ( *(_BYTE *)(v23 + 88) )
    {
      v32 = (unsigned __int8)v30[3];
      if ( !v31 )
      {
        if ( v32 )
          return sub_D5894("EE: NG   P_S: OK");
        else
          return sub_D5894("EE: NG   P_S: NG");
      }
      if ( !v32 )
        return sub_D5894("EE: OK   P_S: NG");
      sub_D5894("EE: OK   P_S: OK");
    }
    else
    {
      if ( !v30[2] )
        return sub_D5894("EEPROM:  NG");
      sub_D5894("EEPROM:  OK");
    }
    *(_DWORD *)s = 0;
    v41 = 0;
    v22 = *(_DWORD *)&gHistory_Result[((_DWORD)&loc_40E46 + 2) * a1 + 16] + 100;
LABEL_44:
    v42 = 0;
    v43 = 0;
    sprintf(s, "Level:  %d", v22);
    return sub_D58C4(s);
  }
  if ( v5 != 240 )
  {
    if ( v5 == 255 )
    {
      puts("Don't get result");
      return sub_D58AC("Don't get result");
    }
    return result;
  }
  if ( v4[2] )
    result = sub_D58C4("EEPROM:  OK");
  else
    result = sub_D58C4("EEPROM:  NG");
  v14 = MES2Local_Config_Information;
  v15 = *(unsigned __int8 *)(MES2Local_Config_Information + 89);
  if ( !*(_BYTE *)(MES2Local_Config_Information + 88) )
    goto LABEL_60;
  if ( !*(_BYTE *)(MES2Local_Config_Information + 89) )
  {
    result = gHistory_Result[265800 * a1 + 3] ? sub_D58AC("PIC Sensor: OK") : sub_D58AC("PIC Sensor: NG");
    v14 = MES2Local_Config_Information;
    if ( !*(_BYTE *)(MES2Local_Config_Information + 88) )
    {
      v15 = *(unsigned __int8 *)(MES2Local_Config_Information + 89);
LABEL_60:
      if ( v15 )
      {
        if ( gHistory_Result[265800 * a1 + 4] )
          result = sub_D58AC("ASIC Sensor:  OK");
        else
          result = sub_D58AC("ASIC Sensor:  NG");
        v14 = MES2Local_Config_Information;
      }
    }
  }
  if ( *(_WORD *)(v14 + 88) == 257 )
  {
    v33 = &gHistory_Result[265800 * a1];
    v34 = (unsigned __int8)v33[3];
    v35 = (unsigned __int8)v33[4];
    if ( v34 )
    {
      if ( v35 )
      {
        result = sub_D58AC("P_S: OK  A_S: OK");
        v16 = *(_DWORD *)(MES2Local_Config_Information + 64);
        if ( !v16 )
          return result;
      }
      else
      {
        result = sub_D58AC("P_S: OK  A_S: NG");
        v16 = *(_DWORD *)(MES2Local_Config_Information + 64);
        if ( !v16 )
          return result;
      }
    }
    else if ( v35 )
    {
      result = sub_D58AC("P_S: NG  A_S: OK");
      v16 = *(_DWORD *)(MES2Local_Config_Information + 64);
      if ( !v16 )
        return result;
    }
    else
    {
      result = sub_D58AC("P_S: NG  A_S: NG");
      v16 = *(_DWORD *)(MES2Local_Config_Information + 64);
      if ( !v16 )
        return result;
    }
  }
  else
  {
    v16 = *(_DWORD *)(v14 + 64);
    if ( !v16 )
      return result;
  }
  result = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  do
  {
    v20 = &gHistory_Result[((_DWORD)&loc_40E46 + 2) * a1 + v17];
    v17 = (unsigned __int8)(v17 + 1);
    if ( !v20[265520] )
    {
      v18 = (unsigned __int8)(v18 + 1);
      v21 = &vars0[result];
      if ( result <= 3 )
      {
        result = (unsigned __int8)(result + 1);
        *(v21 - 8) = v19;
      }
    }
    v19 = v17;
  }
  while ( v17 < v16 );
  if ( v18 )
  {
    *(_DWORD *)s = 0;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    sprintf(s, "B_A:  %d  pcs", v18);
    sub_D5894(s);
    *(_DWORD *)s = 0;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    switch ( v18 )
    {
      case 1:
        sprintf(s, "%d", v36);
        break;
      case 2:
        sprintf(s, "%d  %d", v36, v37);
        break;
      case 3:
        sprintf(s, "%d  %d  %d", v36, v37, v38);
        break;
      default:
        sprintf(s, "%d %d %d %d", v36, v37, v38, v39);
        break;
    }
    return sub_D587C(s);
  }
  return result;
}
