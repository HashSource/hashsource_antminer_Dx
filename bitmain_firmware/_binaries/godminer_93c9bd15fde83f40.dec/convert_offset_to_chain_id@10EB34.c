int __fastcall convert_offset_to_chain_id(int a1)
{
  return *(_DWORD *)&g_chain_info[8 * a1];
}
