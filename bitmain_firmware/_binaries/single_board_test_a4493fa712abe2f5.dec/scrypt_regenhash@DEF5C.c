unsigned int __fastcall scrypt_regenhash(int a1, int a2)
{
  int v4; // r1
  _DWORD **v5; // r2
  unsigned int v6; // t1
  unsigned int v7; // r3
  __int64 v8; // kr00_8
  unsigned int v9; // r0
  unsigned int v10; // r7
  unsigned int v11; // r1
  unsigned int v12; // r2
  unsigned int result; // r0
  unsigned int v14; // r3
  _DWORD *v15; // [sp+4h] [bp-20258h] BYREF
  _DWORD v16[18]; // [sp+8h] [bp-20254h] BYREF
  _DWORD v17[2]; // [sp+50h] [bp-2020Ch] BYREF
  _DWORD v18[128]; // [sp+58h] [bp-20204h] BYREF

  v18[0] = 0;
  memset(&v18[1], 0, (size_t)&loc_201FC);
  v4 = a2 - 4;
  v5 = &v15;
  do
  {
    v6 = *(_DWORD *)(v4 + 4);
    v4 += 4;
    v5[1] = (_DWORD *)bswap32(v6);
    ++v5;
  }
  while ( v17 != v5 );
  v7 = *(_DWORD *)(a2 + 76);
  v15 = v16;
  v17[1] = bswap32(v7);
  sub_DE6DC(v16, (int)v18, (int *)a1);
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(_DWORD *)(a1 + 16);
  v10 = bswap32(*(_DWORD *)(a1 + 4));
  v11 = *(_DWORD *)(a1 + 20);
  v12 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)a1 = bswap32(*(_DWORD *)a1);
  result = bswap32(v9);
  v14 = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(a1 + 4) = v10;
  *(_DWORD *)(a1 + 8) = bswap32(v8);
  *(_DWORD *)(a1 + 12) = bswap32(HIDWORD(v8));
  *(_DWORD *)(a1 + 16) = result;
  *(_DWORD *)(a1 + 20) = bswap32(v11);
  *(_DWORD *)(a1 + 24) = bswap32(v12);
  *(_DWORD *)(a1 + 28) = bswap32(v14);
  return result;
}
