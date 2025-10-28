void *__fastcall sph_luffa512_addbits_and_close(unsigned int *a1, char a2, char a3, unsigned int *a4)
{
  void *result; // r0

  sub_A9A64(a1, a2, a3, a4);
  result = memcpy(a1 + 9, &unk_16769C, 0xA0u);
  a1[8] = 0;
  return result;
}
