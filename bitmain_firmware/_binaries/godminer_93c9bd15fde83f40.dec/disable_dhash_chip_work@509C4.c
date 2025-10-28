int disable_dhash_chip_work()
{
  int v0; // r3

  v0 = dword_1A8A8C;
  *(_DWORD *)(dword_1A8A8C + 192) &= ~0x400000u;
  return set_dhash_acc_control(*(_DWORD *)(v0 + 256) & 0xFFFFFFBF);
}
