int eeprom_load()
{
  int v0; // r1
  int v1; // r4
  int v2; // r6
  int v3; // r3

  v0 = dword_195D14;
  if ( !dword_195D14 )
  {
    if ( sub_B2994() )
      return -1;
    v0 = dword_195D14;
    if ( dword_195CB8 <= 0 )
      goto LABEL_11;
    goto LABEL_4;
  }
  if ( *(_BYTE *)(dword_195D14 + 80) )
    return 0;
  if ( dword_195CB8 > 0 )
  {
LABEL_4:
    LOBYTE(v1) = 0;
    v2 = 0;
    v3 = 0;
    while ( 1 )
    {
      v1 = (unsigned __int8)(v1 + 1);
      v2 |= eeprom_load_one_chain(dword_195CAC[v3 + 4], v0);
      v3 = v1;
      if ( v1 >= dword_195CB8 )
        break;
      v0 = dword_195D14;
    }
    if ( v2 )
      return v2;
    v0 = dword_195D14;
  }
LABEL_11:
  *(_BYTE *)(v0 + 80) = 1;
  return 0;
}
