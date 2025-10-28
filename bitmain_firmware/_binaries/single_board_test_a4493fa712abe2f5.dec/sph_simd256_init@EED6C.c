int __fastcall sph_simd256_init(_DWORD *a1)
{
  int *v1; // r5
  _DWORD *v3; // r6
  int result; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3

  v1 = (int *)&unk_116A78;
  v3 = a1 + 17;
  do
  {
    v3 += 4;
    result = *v1;
    v5 = v1[1];
    v6 = v1[2];
    v7 = v1[3];
    v1 += 4;
    *(v3 - 4) = result;
    *(v3 - 3) = v5;
    *(v3 - 2) = v6;
    *(v3 - 1) = v7;
  }
  while ( v1 != (int *)&unk_116AB8 );
  a1[33] = 0;
  a1[34] = 0;
  a1[16] = 0;
  return result;
}
