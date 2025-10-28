int __fastcall print_eeprom_data_in_hex(unsigned __int8 *a1, unsigned int a2)
{
  unsigned int v3; // r4

  if ( a2 )
  {
    LOBYTE(v3) = 0;
    printf("%02X", *a1);
    while ( 1 )
    {
      v3 = (unsigned __int8)(v3 + 1);
      if ( v3 >= a2 )
        break;
      while ( 1 )
      {
        printf("%02X", a1[v3]);
        if ( !v3 )
          break;
        if ( (v3 & 7) == 7 )
          putchar(32);
        if ( (v3 & 0xF) != 0xF )
          break;
        v3 = (unsigned __int8)(v3 + 1);
        putchar(10);
        if ( v3 >= a2 )
          return j_puts("\n");
      }
    }
  }
  return j_puts("\n");
}
