int __fastcall blake2b_update(int result, int a2, int a3)
{
  int v3; // r5
  int v4; // r4
  int v5; // r3
  int v6; // r8
  char v7; // t1
  bool v8; // zf
  int v9; // r2
  unsigned int v10; // r3
  unsigned int v11; // r2
  __int64 v12; // kr00_8
  char v13; // t1
  int savedregs; // [sp+0h] [bp+0h]
  int savedregs_4; // [sp+4h] [bp+4h]

  if ( a3 )
  {
    v3 = a2 - 1;
    v4 = result;
    v5 = *(_DWORD *)(result + 208);
    v6 = a2 - 1 + a3;
    do
    {
      while ( 1 )
      {
        v8 = v5 == 128;
        v9 = v5++;
        if ( v8 )
          break;
        *(_DWORD *)(v4 + 208) = v5;
        v7 = *(_BYTE *)++v3;
        *(_BYTE *)(v4 + v9) = v7;
        if ( v6 == v3 )
          return result;
      }
      v10 = *(_DWORD *)(v4 + 192);
      v11 = *(_DWORD *)(v4 + 196);
      *(_QWORD *)(v4 + 192) = __PAIR64__(v11, v10) + 128;
      v12 = __PAIR64__(v11, v10);
      if ( __PAIR64__(v11, v10) >= 0xFFFFFFFFFFFFFF80LL )
      {
        v12 = *(_QWORD *)(v4 + 200) + 1LL;
        *(_QWORD *)(v4 + 200) = v12;
      }
      result = sub_57088((_DWORD *)v4, 0, SHIDWORD(v12), v12, savedregs, savedregs_4);
      v5 = 1;
      *(_DWORD *)(v4 + 208) = 1;
      v13 = *(_BYTE *)++v3;
      *(_BYTE *)v4 = v13;
    }
    while ( v6 != v3 );
  }
  return result;
}
