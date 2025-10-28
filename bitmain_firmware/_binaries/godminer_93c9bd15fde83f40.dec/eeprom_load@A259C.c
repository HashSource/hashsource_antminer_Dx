int eeprom_load()
{
  int v0; // r1
  unsigned __int8 v1; // r4
  int v2; // r5
  int v3; // r3

  v0 = dword_1AA6AC;
  if ( !dword_1AA6AC )
  {
    if ( sub_9957C() )
      return -1;
    v0 = dword_1AA6AC;
    if ( dword_1A88C8[0] <= 0 )
      goto LABEL_11;
    goto LABEL_4;
  }
  if ( *(_BYTE *)(dword_1AA6AC + 80) )
    return 0;
  if ( dword_1A88C8[0] > 0 )
  {
LABEL_4:
    v1 = 0;
    v2 = 0;
    v3 = 0;
    while ( 1 )
    {
      ++v1;
      v2 |= eeprom_load_one_chain(dword_1AA668[v3], v0);
      v3 = v1;
      if ( v1 >= dword_1A88C8[0] )
        break;
      v0 = dword_1AA6AC;
    }
    if ( v2 )
      return v2;
    v0 = dword_1AA6AC;
  }
LABEL_11:
  *(_BYTE *)(v0 + 80) = 1;
  return 0;
}
