int pcba_chain_check()
{
  int v0; // r3
  int result; // r0

  fpga_init();
  v0 = *(_DWORD *)(dword_3B52A4 + 8);
  result = v0 & 1;
  if ( (v0 & 1) != 0 )
  {
    result = 1;
    pcba_chain_info[0] = 0;
  }
  if ( (v0 & 2) != 0 )
    pcba_chain_info[result++] = 1;
  if ( (v0 & 4) != 0 )
    pcba_chain_info[result++] = 2;
  if ( (v0 & 8) != 0 )
    pcba_chain_info[result++] = 3;
  return result;
}
