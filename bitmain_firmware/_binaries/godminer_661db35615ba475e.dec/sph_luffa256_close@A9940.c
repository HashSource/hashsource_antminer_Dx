void *__fastcall sph_luffa256_close(unsigned int *a1, unsigned int *a2)
{
  void *result; // r0

  sub_9CDCC(a1, 0, 0, a2, 8);
  result = memcpy(a1 + 9, &unk_16769C, 0x60u);
  a1[8] = 0;
  return result;
}
