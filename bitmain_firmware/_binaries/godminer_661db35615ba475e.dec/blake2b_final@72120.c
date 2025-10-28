int __fastcall blake2b_final(int a1, int a2, int a3, int a4)
{
  unsigned __int64 v5; // r2
  __int64 v6; // r10
  unsigned int v8; // r0
  unsigned __int64 v9; // r8
  __int64 v10; // kr08_8
  int result; // r0
  int v12; // r5
  unsigned int v13; // r1
  unsigned int v14; // r0
  char v15; // r2
  unsigned int v16; // r3
  int savedregs; // [sp+4h] [bp+0h]

  v5 = *(_QWORD *)(a1 + 192);
  HIDWORD(v6) = 0;
  v8 = *(_DWORD *)(a1 + 208);
  v9 = v5 + v8;
  LODWORD(v6) = __CFADD__(__CFADD__((_DWORD)v5, v8), HIDWORD(v5));
  HIDWORD(v5) = v6;
  *(_QWORD *)(a1 + 192) = v9;
  if ( v6 )
  {
    v10 = *(_QWORD *)(a1 + 200) + 1LL;
    v5 = __PAIR64__(v10, HIDWORD(v10));
    *(_QWORD *)(a1 + 200) = v10;
  }
  if ( v8 <= 0x7F )
  {
    memset((void *)(a1 + v8), 0, 128 - v8);
    HIDWORD(v5) = 128;
    *(_DWORD *)(a1 + 208) = 128;
  }
  result = sub_69FD0((_DWORD *)a1, 1, v5, SHIDWORD(v5), a4, savedregs);
  if ( *(_DWORD *)(a1 + 212) )
  {
    v12 = a2 - 1;
    v13 = 0;
    do
    {
      v14 = v13 >> 3;
      v15 = 8 * (v13++ & 7);
      v16 = v14 + 16;
      result = *(_DWORD *)(a1 + 8 * (v14 + 16) + 4);
      *(_BYTE *)++v12 = __PAIR64__(result, *(_DWORD *)(a1 + 8 * v16)) >> v15;
    }
    while ( *(_DWORD *)(a1 + 212) > v13 );
  }
  return result;
}
