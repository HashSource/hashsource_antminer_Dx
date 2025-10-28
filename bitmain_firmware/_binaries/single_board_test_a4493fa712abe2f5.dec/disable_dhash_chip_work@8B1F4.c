int disable_dhash_chip_work()
{
  int v0; // r3

  v0 = dword_3B52A4;
  *(_DWORD *)(dword_3B52A4 + 192) &= ~0x400000u;
  return set_dhash_acc_control(*(_DWORD *)(v0 + 256) & 0xFFFFFFBF);
}
