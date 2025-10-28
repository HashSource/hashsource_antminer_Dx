int __fastcall api_get_eeprom_chain_load_state(int a1)
{
  if ( dword_12C0EC )
    return *(unsigned __int8 *)(dword_12C0EC + *(_DWORD *)&byte_12A418[4 * a1 + 8] + 64);
  else
    return sub_26814(a1);
}
