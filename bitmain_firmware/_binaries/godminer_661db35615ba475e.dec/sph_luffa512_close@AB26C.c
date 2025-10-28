void *__fastcall sph_luffa512_close(unsigned int *a1, unsigned int *a2)
{
  void *result; // r0

  sub_A9A64(a1, 0, 0, a2);
  result = memcpy(a1 + 9, &unk_16769C, 0xA0u);
  a1[8] = 0;
  return result;
}
