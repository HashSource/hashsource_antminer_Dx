void *__fastcall sph_cubehash512_addbits_and_close(_DWORD *a1, char a2, char a3, int *a4)
{
  void *result; // r0

  sub_45930(a1, a2, a3, a4, 16);
  result = memcpy(a1 + 9, &unk_171900, 0x80u);
  a1[8] = 0;
  return result;
}
