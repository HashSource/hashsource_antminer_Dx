void *__fastcall sph_cubehash512_close(_DWORD *a1, int *a2)
{
  void *result; // r0

  sub_45930(a1, 0, 0, a2, 16);
  result = memcpy(a1 + 9, &unk_171900, 0x80u);
  a1[8] = 0;
  return result;
}
