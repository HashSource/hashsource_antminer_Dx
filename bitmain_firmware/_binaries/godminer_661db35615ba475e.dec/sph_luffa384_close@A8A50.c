void *__fastcall sph_luffa384_close(unsigned int *a1, unsigned int *a2)
{
  void *result; // r0

  sub_9BE58(a1, 0, 0, a2);
  result = memcpy(a1 + 9, &unk_16769C, 0x80u);
  a1[8] = 0;
  return result;
}
