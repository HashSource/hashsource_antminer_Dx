unsigned int all_chain_reset_high()
{
  *(_DWORD *)(dword_1A8A8C + 52) = ~(~HIWORD(*(_DWORD *)(dword_1A8A8C + 52)) << 16);
  return sleep(2u);
}
