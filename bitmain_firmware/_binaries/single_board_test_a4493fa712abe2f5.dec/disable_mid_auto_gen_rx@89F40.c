void disable_mid_auto_gen_rx()
{
  *(_DWORD *)(dword_3B52A4 + 248) = 0x10000;
}
