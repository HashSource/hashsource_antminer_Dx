void *__fastcall sph_luffa224_addbits_and_close(int a1, char a2, char a3, unsigned int *a4)
{
  void *result; // r0

  sub_626B4(a1, a2, a3, a4, 7);
  result = memcpy((void *)(a1 + 36), &unk_FD5D0, 0x60u);
  *(_DWORD *)(a1 + 32) = 0;
  return result;
}
