unsigned __int64 __fastcall scrypt_regenhash(unsigned int *a1, int a2)
{
  int v4; // r1
  _DWORD *v5; // r2
  unsigned int v6; // t1
  unsigned int v7; // lr
  unsigned int v8; // r12
  unsigned int v9; // r0
  unsigned int v10; // r1
  unsigned int v11; // r2
  unsigned int v12; // r5
  unsigned __int64 result; // r0
  unsigned __int64 v14; // r2
  _DWORD v15[18]; // [sp+0h] [bp-20254h] BYREF
  _DWORD v16[2]; // [sp+48h] [bp-2020Ch] BYREF
  _DWORD v17[128]; // [sp+50h] [bp-20204h] BYREF

  v17[0] = 0;
  memset(&v17[1], 0, (size_t)&word_201FC);
  v4 = a2 - 4;
  v5 = &v15[-1];
  do
  {
    v6 = *(_DWORD *)(v4 + 4);
    v4 += 4;
    v5[1] = bswap32(v6);
    ++v5;
  }
  while ( v16 != v5 );
  v16[1] = bswap32(*(_DWORD *)(a2 + 76));
  sub_F9EB4(v15, (int)v17, a1);
  v7 = a1[2];
  v8 = a1[3];
  v9 = a1[4];
  v10 = a1[5];
  v11 = a1[6];
  v12 = bswap32(a1[1]);
  *a1 = bswap32(*a1);
  result = _byteswap_uint64(__PAIR64__(v9, v10));
  v14 = _byteswap_uint64(__PAIR64__(v11, a1[7]));
  a1[1] = v12;
  a1[2] = bswap32(v7);
  a1[3] = bswap32(v8);
  *((_QWORD *)a1 + 2) = result;
  *((_QWORD *)a1 + 3) = v14;
  return result;
}
