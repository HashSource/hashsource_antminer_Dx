void *__fastcall sph_jh224_addbits_and_close(int a1, int a2, unsigned int a3, int *a4)
{
  int v6; // r9
  int v7; // r3
  size_t v8; // r2
  int v9; // r6
  int v10; // r5
  int v11; // r8
  int v12; // r10
  size_t v13; // r2
  __int64 v14; // r8
  char *v15; // lr
  int v16; // r3
  int v17; // r10
  int v18; // r0
  int v19; // r1
  __int64 v20; // r8
  int v21; // r1
  int v22; // r3
  int v23; // r0
  int v24; // r1
  int v25; // r2
  void *result; // r0
  char v28[36]; // [sp+10h] [bp-84h] BYREF
  int v29; // [sp+34h] [bp-60h]
  int v30; // [sp+44h] [bp-50h]
  int v31; // [sp+48h] [bp-4Ch]
  int v32; // [sp+4Ch] [bp-48h]

  v6 = *(_DWORD *)(a1 + 64);
  v7 = (unsigned __int8)(128 >> a3) | a2 & -(unsigned __int8)(128 >> a3);
  if ( a3 | v6 )
    v8 = 111 - v6;
  else
    v8 = 47;
  if ( a3 | v6 )
  {
    v9 = 112 - v6;
    v10 = 120 - v6;
    v11 = 128 - v6;
  }
  else
  {
    v10 = 56;
    v9 = 48;
    v11 = 64;
  }
  v28[0] = v7;
  memset(&v28[1], 0, v8);
  v12 = *(_DWORD *)(a1 + 204);
  v13 = v11;
  v14 = (*(_QWORD *)(a1 + 200) << 9) + a3 + (unsigned int)(8 * v6);
  v15 = &v28[v9];
  *(_DWORD *)&v28[v9] = 0;
  v15[6] = v12 < 0;
  v15[4] = 0;
  v15[5] = 0;
  v15[7] = (unsigned int)v12 >> 23;
  *(_DWORD *)&v28[v10] = HIBYTE(v14)
                       | (unsigned __int16)(BYTE6(v14) << 8)
                       | (BYTE5(v14) << 16) & 0xFFFFFF
                       | (BYTE4(v14) << 24);
  *(_DWORD *)&v28[v10 + 4] = BYTE3(v14)
                           | (unsigned __int16)(BYTE2(v14) << 8)
                           | (BYTE1(v14) << 16) & 0xFFFFFF
                           | ((unsigned __int8)v14 << 24);
  sph_jh512_0(a1, v28, v13);
  v16 = *(_DWORD *)(a1 + 176);
  v17 = *(_DWORD *)(a1 + 180);
  v18 = *(_DWORD *)(a1 + 184);
  v19 = *(_DWORD *)(a1 + 188);
  v20 = *(_QWORD *)(a1 + 192);
  v29 = (unsigned __int8)*(_DWORD *)(a1 + 172)
      | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 172)) << 8)
      | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 172)) << 16) & 0xFFFFFF
      | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 172)) << 24);
  v31 = (unsigned __int16)((unsigned __int8)v20 | (BYTE1(v20) << 8))
      | (BYTE2(v20) << 16) & 0xFFFFFF
      | (BYTE3(v20) << 24);
  v32 = (unsigned __int16)(BYTE4(v20) | (BYTE5(v20) << 8)) | (BYTE6(v20) << 16) & 0xFFFFFF | (HIBYTE(v20) << 24);
  v30 = (unsigned __int8)v19 | (unsigned __int16)(BYTE1(v19) << 8) | (BYTE2(v19) << 16) & 0xFFFFFF | (HIBYTE(v19) << 24);
  v21 = (unsigned __int8)v16 | (unsigned __int16)(BYTE1(v16) << 8) | (BYTE2(v16) << 16) & 0xFFFFFF | (HIBYTE(v16) << 24);
  v22 = (unsigned __int8)v18 | (unsigned __int16)(BYTE1(v18) << 8) | (BYTE2(v18) << 16) & 0xFFFFFF | (HIBYTE(v18) << 24);
  *a4 = v29;
  a4[1] = v21;
  a4[2] = (unsigned __int8)v17
        | (unsigned __int16)(BYTE1(v17) << 8)
        | (BYTE2(v17) << 16) & 0xFFFFFF
        | (HIBYTE(v17) << 24);
  v23 = v30;
  v24 = v31;
  v25 = v32;
  a4[3] = v22;
  a4[4] = v23;
  a4[5] = v24;
  a4[6] = v25;
  *(_DWORD *)(a1 + 64) = 0;
  result = memcpy((void *)(a1 + 72), &unk_1678FC, 0x80u);
  *(_QWORD *)(a1 + 200) = 0;
  return result;
}
