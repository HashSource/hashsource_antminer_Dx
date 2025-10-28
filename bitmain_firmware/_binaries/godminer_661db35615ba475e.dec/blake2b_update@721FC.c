unsigned int __fastcall blake2b_update(unsigned int result, int a2, int a3)
{
  int v3; // r5
  int v4; // r4
  int v5; // r3
  int v6; // r8
  char v7; // t1
  bool v8; // zf
  int v9; // r2
  int v10; // r3
  int v11; // r2
  bool v12; // cc
  __int64 v13; // kr08_8
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
      v8 = v5 == 128;
      v9 = v5++;
      if ( v8 )
      {
        v10 = *(_DWORD *)(v4 + 192);
        v11 = *(_DWORD *)(v4 + 196);
        v12 = (__PAIR64__(v11, v10) + 128) >> 32 != 0;
        *(_QWORD *)(v4 + 192) = __PAIR64__(v11, v10) + 128;
        if ( !((__PAIR64__(v11, v10) + 128) >> 32) )
          v12 = (unsigned int)(v10 + 128) > 0x7F;
        if ( !v12 )
        {
          v13 = *(_QWORD *)(v4 + 200) + 1LL;
          v11 = HIDWORD(v13);
          v10 = v13;
          *(_QWORD *)(v4 + 200) = v13;
        }
        result = sub_69FD0((_DWORD *)v4, 0, v11, v10, savedregs, savedregs_4);
        v5 = 1;
        v9 = 0;
      }
      *(_DWORD *)(v4 + 208) = v5;
      v7 = *(_BYTE *)++v3;
      *(_BYTE *)(v4 + v9) = v7;
    }
    while ( v6 != v3 );
  }
  return result;
}
