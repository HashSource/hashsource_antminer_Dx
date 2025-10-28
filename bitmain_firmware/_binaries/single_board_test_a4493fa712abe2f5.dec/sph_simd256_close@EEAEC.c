int __fastcall sph_simd256_close(int a1, int *a2)
{
  int v3; // r6
  unsigned int v5; // r3
  unsigned int v6; // r2
  int v7; // r3
  int *v8; // r6
  int v9; // r7
  int result; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3

  v3 = *(_DWORD *)(a1 + 64);
  if ( v3 )
  {
    memset((void *)(a1 + v3), 0, 64 - v3);
    *(_BYTE *)(a1 + *(_DWORD *)(a1 + 64)) = 0;
    sub_B71D8((unsigned __int8 *)a1);
    v3 = *(_DWORD *)(a1 + 64);
  }
  memset((void *)(a1 + 4), 0, 0x3Cu);
  v5 = *(_DWORD *)(a1 + 132) << 9;
  v6 = v5 + 8 * v3;
  v7 = (v5 >> 23) + (*(_DWORD *)(a1 + 136) << 9);
  *(_DWORD *)(a1 + 4) = (unsigned __int8)v7
                      | (unsigned __int16)(BYTE1(v7) << 8)
                      | (BYTE2(v7) << 16) & 0xFFFFFF
                      | (HIBYTE(v7) << 24);
  *(_DWORD *)a1 = (unsigned __int16)((unsigned __int8)v6 | (BYTE1(v6) << 8))
                | (BYTE2(v6) << 16) & 0xFFFFFF
                | (HIBYTE(v6) << 24);
  sub_B32C8((unsigned __int8 *)a1);
  *a2 = (unsigned __int8)*(_DWORD *)(a1 + 68)
      | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 68)) << 8)
      | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 68)) << 16) & 0xFFFFFF
      | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 68)) << 24);
  a2[1] = (unsigned __int8)*(_DWORD *)(a1 + 72)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 72)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 72)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 72)) << 24);
  a2[2] = (unsigned __int8)*(_DWORD *)(a1 + 76)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 76)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 76)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 76)) << 24);
  a2[3] = (unsigned __int8)*(_DWORD *)(a1 + 80)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 80)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 80)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 80)) << 24);
  a2[4] = (unsigned __int8)*(_DWORD *)(a1 + 84)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 84)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 84)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 84)) << 24);
  v8 = (int *)&unk_116A78;
  a2[5] = (unsigned __int8)*(_DWORD *)(a1 + 88)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 88)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 88)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 88)) << 24);
  v9 = a1 + 68;
  a2[6] = (unsigned __int8)*(_DWORD *)(a1 + 92)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 92)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 92)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 92)) << 24);
  a2[7] = (unsigned __int8)*(_DWORD *)(a1 + 96)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 96)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 96)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 96)) << 24);
  do
  {
    v9 += 16;
    result = *v8;
    v11 = v8[1];
    v12 = v8[2];
    v13 = v8[3];
    v8 += 4;
    *(_DWORD *)(v9 - 16) = result;
    *(_DWORD *)(v9 - 12) = v11;
    *(_DWORD *)(v9 - 8) = v12;
    *(_DWORD *)(v9 - 4) = v13;
  }
  while ( v8 != (int *)&unk_116AB8 );
  *(_DWORD *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  return result;
}
