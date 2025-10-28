int __fastcall sub_dev_init_hal(unsigned int a1)
{
  if ( a1 >= total_chain[0] )
    puts("warning: get pcie fd error");
  return *(_DWORD *)&g_chain_info[8 * a1];
}
