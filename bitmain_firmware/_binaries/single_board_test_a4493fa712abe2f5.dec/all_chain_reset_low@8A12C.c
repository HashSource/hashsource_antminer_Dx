unsigned int all_chain_reset_low()
{
  *(_DWORD *)(dword_3B52A4 + 52) = HIWORD(*(_DWORD *)(dword_3B52A4 + 52)) << 16;
  return j_sleep(2u);
}
