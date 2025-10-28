int write_EEPROM_PT1_marker()
{
  _BYTE *v0; // r3
  int v1; // r6
  unsigned __int8 v3; // [sp+6h] [bp-2h] BYREF
  unsigned __int8 v4; // [sp+7h] [bp-1h] BYREF

  v4 = 90;
  v3 = 0;
  v0 = &gHistory_Result[((_DWORD)&loc_40E46 + 2) * dword_3B57B0];
  v1 = (unsigned __int8)v0[2];
  if ( !v0[2] )
  {
    printf("gEEPROM_OK is %s, so no need write eeprom PT1 marker\n", "false");
    return v1;
  }
  if ( !eeprom_write(gChain, 255, &v4, 1) )
  {
    if ( eeprom_read(gChain, 0xFFu, (int)&v3, 1) )
    {
      v1 = 0;
      puts("Read marker from EEPROM fail");
      gHistory_Result[((_DWORD)&loc_40E46 + 2) * dword_3B57B0 + 2] = 0;
    }
    else
    {
      if ( v3 != 90 )
      {
        printf("check EEPROM marker fail. read bak is: 0x%02x\n", v3);
        gHistory_Result[((_DWORD)&loc_40E46 + 2) * dword_3B57B0 + 2] = 0;
        return 0;
      }
      puts("check marker saved in EEPROM success");
    }
    return v1;
  }
  puts("Write marker into EEPROM fail");
  gHistory_Result[((_DWORD)&loc_40E46 + 2) * dword_3B57B0 + 2] = 0;
  return 0;
}
