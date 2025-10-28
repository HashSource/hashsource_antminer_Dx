int __fastcall sph_blake384_init(int a1)
{
  int *v2; // r4
  int v3; // lr
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3

  v2 = (int *)&unk_1905C8;
  v3 = a1 + 136;
  do
  {
    v3 += 16;
    v4 = *v2;
    v5 = v2[1];
    v6 = v2[2];
    v7 = v2[3];
    v2 += 4;
    *(_DWORD *)(v3 - 16) = v4;
    *(_DWORD *)(v3 - 12) = v5;
    *(_DWORD *)(v3 - 8) = v6;
    *(_DWORD *)(v3 - 4) = v7;
  }
  while ( v2 != (int *)&unk_190608 );
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 200) = 0;
  *(_DWORD *)(a1 + 204) = 0;
  *(_DWORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 212) = 0;
  *(_DWORD *)(a1 + 216) = 0;
  *(_DWORD *)(a1 + 220) = 0;
  *(_DWORD *)(a1 + 224) = 0;
  *(_DWORD *)(a1 + 228) = 0;
  return 0;
}
