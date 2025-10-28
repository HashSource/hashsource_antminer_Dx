void disable_mid_auto_gen_rx()
{
  *(_DWORD *)(dword_1A8A8C + 248) = 0x10000;
}
