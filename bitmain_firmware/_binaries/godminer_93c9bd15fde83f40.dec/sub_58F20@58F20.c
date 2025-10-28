int __fastcall sub_58F20(int a1, _DWORD *a2, int a3)
{
  unsigned int v3; // r0
  _DWORD *v4; // r3
  int v6; // r2
  int v7; // t1
  int v8; // r1
  int v9; // r2

  v3 = *(_DWORD *)(a3 + 48);
  a2[93] = 0;
  v4 = (_DWORD *)a2[98];
  a2[92] = bswap32(v3);
  v7 = *(_DWORD *)(a3 + 52);
  v6 = a3 + 52;
  v8 = *(_DWORD *)(v6 + 4);
  v9 = *(_DWORD *)(v6 + 8);
  *v4 = v7;
  v4[1] = v8;
  v4[2] = v9;
  return 0;
}
