void *__fastcall sph_luffa256_close(int a1, unsigned int *a2)
{
  void *result; // r0

  sub_626B4(a1, 0, 0, a2, 8);
  result = memcpy((void *)(a1 + 36), &unk_FD5D0, 0x60u);
  *(_DWORD *)(a1 + 32) = 0;
  return result;
}
