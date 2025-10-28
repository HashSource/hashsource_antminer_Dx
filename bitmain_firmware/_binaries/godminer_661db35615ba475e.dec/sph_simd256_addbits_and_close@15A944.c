int __fastcall sph_simd256_addbits_and_close(int a1, char a2, int a3, int *a4)
{
  int v5; // r0
  int v8; // r7
  unsigned int v10; // r1
  int v11; // r2
  int v12; // lr
  int *v13; // r5
  int result; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3

  v5 = *(_DWORD *)(a1 + 64);
  v8 = a3 | v5;
  if ( a3 | v5 )
  {
    memset((void *)(a1 + v5), 0, 64 - v5);
    *(_BYTE *)(a1 + *(_DWORD *)(a1 + 64)) = a2 & (-1 << (8 - a3));
    sub_43DE0((unsigned __int8 *)a1);
    v8 = *(_DWORD *)(a1 + 64);
  }
  memset((void *)(a1 + 4), 0, 0x3Cu);
  v10 = *(_DWORD *)(a1 + 132) << 9;
  v11 = (v10 >> 23) + (*(_DWORD *)(a1 + 136) << 9);
  *(_DWORD *)a1 = (unsigned __int8)(a3 + v10 + 8 * v8)
                | (unsigned __int16)((unsigned __int8)((unsigned __int16)(a3 + v10 + 8 * v8) >> 8) << 8)
                | ((unsigned __int8)((a3 + v10 + 8 * v8) >> 16) << 16) & 0xFFFFFF
                | ((a3 + v10 + 8 * v8) >> 24 << 24);
  *(_DWORD *)(a1 + 4) = (unsigned __int16)((unsigned __int8)v11 | (BYTE1(v11) << 8))
                      | (BYTE2(v11) << 16) & 0xFFFFFF
                      | (HIBYTE(v11) << 24);
  sub_3EC48((unsigned __int8 *)a1);
  *a4 = (unsigned __int8)*(_DWORD *)(a1 + 68)
      | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 68)) << 8)
      | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 68)) << 16) & 0xFFFFFF
      | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 68)) << 24);
  a4[1] = (unsigned __int8)*(_DWORD *)(a1 + 72)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 72)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 72)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 72)) << 24);
  a4[2] = (unsigned __int8)*(_DWORD *)(a1 + 76)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 76)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 76)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 76)) << 24);
  a4[3] = (unsigned __int8)*(_DWORD *)(a1 + 80)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 80)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 80)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 80)) << 24);
  v12 = a1 + 68;
  v13 = (int *)&unk_17E7A4;
  a4[4] = (unsigned __int8)*(_DWORD *)(a1 + 84)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 84)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 84)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 84)) << 24);
  a4[5] = (unsigned __int8)*(_DWORD *)(a1 + 88)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 88)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 88)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 88)) << 24);
  a4[6] = (unsigned __int8)*(_DWORD *)(a1 + 92)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 92)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 92)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 92)) << 24);
  a4[7] = (unsigned __int8)*(_DWORD *)(a1 + 96)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 96)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 96)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 96)) << 24);
  do
  {
    v12 += 16;
    result = *v13;
    v15 = v13[1];
    v16 = v13[2];
    v17 = v13[3];
    v13 += 4;
    *(_DWORD *)(v12 - 16) = result;
    *(_DWORD *)(v12 - 12) = v15;
    *(_DWORD *)(v12 - 8) = v16;
    *(_DWORD *)(v12 - 4) = v17;
  }
  while ( v13 != (int *)&unk_17E7E4 );
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  return result;
}
