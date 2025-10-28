int __fastcall sph_groestl384_init(_QWORD *a1)
{
  _QWORD *v2; // r0

  v2 = a1 + 17;
  *((_DWORD *)v2 - 2) = 0;
  memset(v2, 0, 0x78u);
  a1[32] = 0x8001000000000000LL;
  a1[33] = 0;
  return 0;
}
