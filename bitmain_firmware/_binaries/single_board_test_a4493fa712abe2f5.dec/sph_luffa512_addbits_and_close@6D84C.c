void *__fastcall sph_luffa512_addbits_and_close(unsigned int *a1, char a2, char a3, unsigned int *a4)
{
  void *result; // r0

  sub_6C624(a1, a2, a3, a4);
  result = memcpy(a1 + 9, &unk_FD5D0, 0xA0u);
  a1[8] = 0;
  return result;
}
