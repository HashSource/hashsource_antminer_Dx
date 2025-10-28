int __fastcall blake2b_init(int a1, int a2, int a3, unsigned int a4)
{
  bool v5; // cc
  const char *v6; // r8
  int v10; // lr
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r1
  size_t v16; // r2
  int v17; // r9
  int v18; // r1
  int v19; // r5
  int v21; // r3
  int v22; // r2
  bool v23; // cc
  __int64 v24; // kr08_8
  int v25; // r3
  char v26; // t1
  int v27; // [sp+0h] [bp-4h]
  int savedregs; // [sp+4h] [bp+0h]

  v27 = a4;
  v5 = a4 > 0x40;
  if ( a4 <= 0x40 )
    v5 = (unsigned int)(a2 - 1) > 0x3F;
  if ( v5 )
    return -1;
  v6 = (const char *)&unk_163618;
  v10 = a1 + 128;
  do
  {
    v10 += 16;
    v11 = *(_DWORD *)v6;
    v12 = *((_DWORD *)v6 + 1);
    v13 = *((_DWORD *)v6 + 2);
    v14 = *((_DWORD *)v6 + 3);
    v6 += 16;
    *(_DWORD *)(v10 - 16) = v11;
    *(_DWORD *)(v10 - 12) = v12;
    *(_DWORD *)(v10 - 8) = v13;
    *(_DWORD *)(v10 - 4) = v14;
  }
  while ( v6 != "dev_config_hal" );
  v15 = *(_DWORD *)(a1 + 128);
  *(_DWORD *)(a1 + 212) = a2;
  v16 = 128 - a4;
  if ( a4 + 1 > 0x80 )
    v16 = 1;
  *(_DWORD *)(a1 + 128) = a2 ^ (a4 << 8) ^ 0x1010000 ^ v15;
  *(_DWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  memset((void *)(a1 + a4), 0, v16);
  if ( !a4 )
    return 0;
  v17 = a3 - 1;
  v18 = 0;
  v19 = v17 + a4;
  while ( 1 )
  {
    v25 = v18 + 1;
    *(_DWORD *)(a1 + 208) = v18 + 1;
    v26 = *(_BYTE *)++v17;
    *(_BYTE *)(a1 + v18) = v26;
    if ( v19 == v17 )
      break;
    if ( v18 == 127 )
    {
      v21 = *(_DWORD *)(a1 + 192);
      v22 = *(_DWORD *)(a1 + 196);
      v23 = (__PAIR64__(v22, v21) + 128) >> 32 != 0;
      *(_QWORD *)(a1 + 192) = __PAIR64__(v22, v21) + 128;
      if ( !((__PAIR64__(v22, v21) + 128) >> 32) )
        v23 = (unsigned int)(v21 + 128) > 0x7F;
      if ( !v23 )
      {
        v24 = *(_QWORD *)(a1 + 200) + 1LL;
        v22 = HIDWORD(v24);
        v21 = v24;
        *(_QWORD *)(a1 + 200) = v24;
      }
      sub_69FD0((_DWORD *)a1, 0, v22, v21, v27, savedregs);
      v25 = 0;
      *(_DWORD *)(a1 + 208) = 0;
    }
    v18 = v25;
  }
  *(_DWORD *)(a1 + 208) = 128;
  return 0;
}
