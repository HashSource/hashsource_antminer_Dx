int __fastcall api_get_eeprom_chain_load_state(int a1)
{
  if ( dword_1AA6AC )
    return *(unsigned __int8 *)(dword_1AA6AC + total_chain[a1 + 128] + 64);
  else
    return sub_1139E8(a1);
}
