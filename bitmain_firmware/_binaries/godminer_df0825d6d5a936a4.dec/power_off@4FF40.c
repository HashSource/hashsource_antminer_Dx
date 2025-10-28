unsigned int power_off()
{
  int v0; // r3

  bitmain_power_off_0();
  LOWORD(v0) = 24344;
  HIWORD(v0) = (unsigned int)&unk_165214 >> 16;
  *(_BYTE *)(v0 + 0x18) = 0;
  return sleep(1u);
}
