unsigned int all_chain_reset_high()
{
  *(_DWORD *)(dword_197C8C + 52) = ~(~HIWORD(*(_DWORD *)(dword_197C8C + 52)) << 16);
  return sleep(2u);
}
