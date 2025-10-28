void *__fastcall sph_jh224_addbits_and_close(int a1, char a2, int a3, int *a4)
{
  __int64 v5; // r8
  size_t v6; // r2
  size_t v7; // r5
  int v8; // lr
  __int64 v9; // r0
  __int64 v10; // r6
  char *v11; // r12
  int v12; // r3
  int v13; // r10
  int v14; // r0
  int v15; // r1
  int v16; // r8
  int v17; // r9
  int v18; // r1
  int v19; // r3
  int v20; // r0
  int v21; // r1
  int v22; // r2
  void *result; // r0
  int v24; // [sp+4h] [bp-90h]
  int v25; // [sp+8h] [bp-8Ch]
  char v27[36]; // [sp+10h] [bp-84h] BYREF
  int v28; // [sp+34h] [bp-60h]
  int v29; // [sp+38h] [bp-5Ch]
  int v30; // [sp+3Ch] [bp-58h]
  int v31; // [sp+40h] [bp-54h]
  int v32; // [sp+44h] [bp-50h]
  int v33; // [sp+48h] [bp-4Ch]
  int v34; // [sp+4Ch] [bp-48h]

  LODWORD(v5) = a3;
  HIDWORD(v5) = *(_DWORD *)(a1 + 64);
  v27[0] = (128 >> a3) | a2 & -(128 >> a3);
  if ( v5 )
  {
    v6 = 111 - HIDWORD(v5);
    v7 = 128 - HIDWORD(v5);
    v24 = 112 - HIDWORD(v5);
    v25 = 120 - HIDWORD(v5);
  }
  else
  {
    v24 = 48;
    v25 = 56;
    v7 = 64;
    v6 = 47;
  }
  memset(&v27[1], 0, v6);
  v8 = *(_DWORD *)(a1 + 204);
  v9 = (*(_QWORD *)(a1 + 200) << 9) + (unsigned int)v5;
  v10 = v9 + (unsigned int)(8 * HIDWORD(v5));
  v11 = &v27[v24];
  *(_DWORD *)&v27[v24] = 0;
  v11[6] = v8 < 0;
  v11[4] = 0;
  v11[5] = 0;
  v11[7] = (unsigned int)v8 >> 23;
  *(_DWORD *)&v27[v25] = HIBYTE(v10)
                       | (unsigned __int16)(BYTE6(v10) << 8)
                       | (BYTE5(v10) << 16) & 0xFFFFFF
                       | (BYTE4(v10) << 24);
  *(_DWORD *)&v27[v25 + 4] = ((unsigned int)(v9 + 8 * HIDWORD(v5)) >> 24)
                           | (unsigned __int16)((unsigned __int8)((unsigned int)(v9 + 8 * HIDWORD(v5)) >> 16) << 8)
                           | ((unsigned __int8)((unsigned __int16)(v9 + 8 * WORD2(v5)) >> 8) << 16) & 0xFFFFFF
                           | ((unsigned __int8)(v9 + 8 * BYTE4(v5)) << 24);
  sph_jh512_0(a1, v27, v7);
  v12 = *(_DWORD *)(a1 + 176);
  v13 = *(_DWORD *)(a1 + 180);
  v14 = *(_DWORD *)(a1 + 184);
  v15 = *(_DWORD *)(a1 + 188);
  v16 = *(_DWORD *)(a1 + 192);
  v17 = *(_DWORD *)(a1 + 196);
  v28 = (unsigned __int8)*(_DWORD *)(a1 + 172)
      | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 172)) << 8)
      | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 172)) << 16) & 0xFFFFFF
      | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 172)) << 24);
  v29 = (unsigned __int8)v12 | (unsigned __int16)(BYTE1(v12) << 8) | (BYTE2(v12) << 16) & 0xFFFFFF | (HIBYTE(v12) << 24);
  v34 = (unsigned __int16)((unsigned __int8)v17 | (BYTE1(v17) << 8))
      | (BYTE2(v17) << 16) & 0xFFFFFF
      | (HIBYTE(v17) << 24);
  v32 = (unsigned __int8)v15 | (unsigned __int16)(BYTE1(v15) << 8) | (BYTE2(v15) << 16) & 0xFFFFFF | (HIBYTE(v15) << 24);
  v33 = (unsigned __int16)((unsigned __int8)v16 | (BYTE1(v16) << 8))
      | (BYTE2(v16) << 16) & 0xFFFFFF
      | (HIBYTE(v16) << 24);
  v30 = (unsigned __int16)((unsigned __int8)v13 | (BYTE1(v13) << 8))
      | (BYTE2(v13) << 16) & 0xFFFFFF
      | (HIBYTE(v13) << 24);
  v31 = (unsigned __int16)((unsigned __int8)v14 | (BYTE1(v14) << 8))
      | (BYTE2(v14) << 16) & 0xFFFFFF
      | (HIBYTE(v14) << 24);
  v18 = v29;
  v19 = v31;
  *a4 = v28;
  a4[1] = v18;
  a4[2] = (unsigned __int16)((unsigned __int8)v13 | (BYTE1(v13) << 8))
        | (BYTE2(v13) << 16) & 0xFFFFFF
        | (HIBYTE(v13) << 24);
  v20 = v32;
  v21 = v33;
  v22 = v34;
  a4[3] = v19;
  a4[4] = v20;
  a4[5] = v21;
  a4[6] = v22;
  *(_DWORD *)(a1 + 64) = 0;
  result = memcpy((void *)(a1 + 72), &unk_FD830, 0x80u);
  *(_QWORD *)(a1 + 200) = 0;
  return result;
}
