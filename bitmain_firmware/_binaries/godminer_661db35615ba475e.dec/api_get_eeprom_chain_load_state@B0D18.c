int __fastcall api_get_eeprom_chain_load_state(int a1)
{
  if ( dword_195D14 )
    return *(unsigned __int8 *)(dword_195D14 + dword_195CAC[a1 + 4] + 64);
  else
    return sub_B0C60(a1);
}
