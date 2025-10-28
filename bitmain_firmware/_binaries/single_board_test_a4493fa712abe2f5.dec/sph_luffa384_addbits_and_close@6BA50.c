void *__fastcall sph_luffa384_addbits_and_close(unsigned int *a1, char a2, char a3, unsigned int *a4)
{
  void *result; // r0

  sub_61B04(a1, a2, a3, a4);
  result = memcpy(a1 + 9, &unk_FD5D0, 0x80u);
  a1[8] = 0;
  return result;
}
