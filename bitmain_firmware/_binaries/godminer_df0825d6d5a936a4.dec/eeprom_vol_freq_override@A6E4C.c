int __fastcall eeprom_vol_freq_override(int a1, int a2)
{
  int v4; // r1
  int v5; // r3
  int v6; // r6
  unsigned __int8 v7; // r4

  v4 = dword_177378[0];
  if ( dword_177378[0] )
  {
    if ( dword_17737C <= 0 )
      goto LABEL_9;
    goto LABEL_3;
  }
  if ( sub_A48A8() )
    return -1;
  v4 = dword_177378[0];
  if ( dword_17737C > 0 )
  {
LABEL_3:
    v5 = 0;
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      ++v7;
      v6 |= eeprom_rewrite_one_chain(dword_177378[v5 + 2], v4, a1, a2);
      v5 = v7;
      if ( v7 >= dword_17737C )
        break;
      v4 = dword_177378[0];
    }
    if ( v6 )
      return v6;
    v4 = dword_177378[0];
  }
LABEL_9:
  *(_BYTE *)(v4 + 80) = 1;
  return 0;
}
