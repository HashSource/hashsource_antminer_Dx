int dump_eeprom_data()
{
  unsigned __int8 *v0; // r5
  int i; // r4
  int v2; // t1
  _BYTE v4[516]; // [sp+0h] [bp+0h] BYREF

  v0 = v4;
  eeprom_read(gChain, 0, (int)v4, 256);
  for ( i = 0; ; ++i )
  {
    v2 = *v0++;
    printf("%02x ", v2);
    if ( !i )
      continue;
    if ( !(i << 29) )
      break;
    if ( v0 - v4 == 256 )
      return putchar(10);
LABEL_3:
    ;
  }
  putchar(10);
  if ( v0 - v4 != 256 )
    goto LABEL_3;
  return putchar(10);
}
