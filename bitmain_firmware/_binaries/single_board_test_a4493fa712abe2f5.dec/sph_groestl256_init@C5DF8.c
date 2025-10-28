__int64 __fastcall sph_groestl256_init(_QWORD *a1)
{
  _QWORD *v2; // r0

  v2 = a1 + 9;
  *((_DWORD *)v2 - 2) = 0;
  memset(v2, 0, 0x38u);
  a1[16] = 0x1000000000000LL;
  a1[17] = 0;
  return 0x1000000000000LL;
}
