void *__fastcall sph_cubehash256_close(_DWORD *a1, int *a2)
{
  void *result; // r0

  sub_45930(a1, 0, 0, a2, 8);
  result = memcpy(a1 + 9, &unk_171A00, 0x80u);
  a1[8] = 0;
  return result;
}
