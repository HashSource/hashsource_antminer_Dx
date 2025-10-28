void *__fastcall sph_jh224_close(int a1, int *a2)
{
  int v2; // r10
  size_t v4; // r2
  int v5; // r6
  int v6; // r5
  size_t v7; // r7
  int v8; // r8
  int v9; // r3
  __int64 v10; // r0
  char *v11; // r5
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
  char v25[36]; // [sp+8h] [bp-84h] BYREF
  int v26; // [sp+2Ch] [bp-60h]
  int v27; // [sp+3Ch] [bp-50h]
  int v28; // [sp+40h] [bp-4Ch]
  int v29; // [sp+44h] [bp-48h]

  v2 = *(_DWORD *)(a1 + 64);
  if ( v2 )
    v4 = 111 - v2;
  else
    v4 = 47;
  if ( v2 )
  {
    v5 = 120 - v2;
    v6 = 112 - v2;
    v7 = 128 - v2;
  }
  else
  {
    v5 = 56;
    v7 = 64;
    v6 = 48;
  }
  v25[0] = 0x80;
  memset(&v25[1], 0, v4);
  v8 = *(_DWORD *)(a1 + 204);
  v9 = 8 * v2;
  v10 = *(_QWORD *)(a1 + 200) << 9;
  *(_DWORD *)&v25[v6] = 0;
  v11 = &v25[v6];
  v11[6] = v8 < 0;
  v11[4] = 0;
  v11[5] = 0;
  v11[7] = (unsigned int)v8 >> 23;
  *(_DWORD *)&v25[v5] = ((v10 + (unsigned __int64)(unsigned int)v9) >> 56)
                      | (unsigned __int16)((unsigned __int8)((v10 + (unsigned __int64)(unsigned int)v9) >> 48) << 8)
                      | ((unsigned __int8)((unsigned __int16)((v10 + (unsigned __int64)(unsigned int)v9) >> 32) >> 8) << 16)
                      & 0xFFFFFF
                      | ((unsigned __int8)((v10 + (unsigned __int64)(unsigned int)v9) >> 32) << 24);
  *(_DWORD *)&v25[v5 + 4] = ((unsigned int)(v10 + 8 * v2) >> 24)
                          | (unsigned __int16)((unsigned __int8)((unsigned int)(v10 + 8 * v2) >> 16) << 8)
                          | ((unsigned __int8)((unsigned __int16)(v10 + 8 * v2) >> 8) << 16) & 0xFFFFFF
                          | ((unsigned __int8)(v10 + 8 * v2) << 24);
  sph_jh512_0(a1, v25, v7);
  v12 = *(_DWORD *)(a1 + 176);
  v13 = *(_DWORD *)(a1 + 180);
  v14 = *(_DWORD *)(a1 + 184);
  v15 = *(_DWORD *)(a1 + 188);
  v16 = *(_DWORD *)(a1 + 192);
  v17 = *(_DWORD *)(a1 + 196);
  v26 = (unsigned __int8)*(_DWORD *)(a1 + 172)
      | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 172)) << 8)
      | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 172)) << 16) & 0xFFFFFF
      | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 172)) << 24);
  v28 = (unsigned __int16)((unsigned __int8)v16 | (BYTE1(v16) << 8))
      | (BYTE2(v16) << 16) & 0xFFFFFF
      | (HIBYTE(v16) << 24);
  v29 = (unsigned __int16)((unsigned __int8)v17 | (BYTE1(v17) << 8))
      | (BYTE2(v17) << 16) & 0xFFFFFF
      | (HIBYTE(v17) << 24);
  v27 = (unsigned __int8)v15 | (unsigned __int16)(BYTE1(v15) << 8) | (BYTE2(v15) << 16) & 0xFFFFFF | (HIBYTE(v15) << 24);
  v18 = (unsigned __int8)v12 | (unsigned __int16)(BYTE1(v12) << 8) | (BYTE2(v12) << 16) & 0xFFFFFF | (HIBYTE(v12) << 24);
  v19 = (unsigned __int8)v14 | (unsigned __int16)(BYTE1(v14) << 8) | (BYTE2(v14) << 16) & 0xFFFFFF | (HIBYTE(v14) << 24);
  *a2 = v26;
  a2[1] = v18;
  a2[2] = (unsigned __int8)v13
        | (unsigned __int16)(BYTE1(v13) << 8)
        | (BYTE2(v13) << 16) & 0xFFFFFF
        | (HIBYTE(v13) << 24);
  v20 = v27;
  v21 = v28;
  v22 = v29;
  a2[3] = v19;
  a2[4] = v20;
  a2[5] = v21;
  a2[6] = v22;
  *(_DWORD *)(a1 + 64) = 0;
  result = memcpy((void *)(a1 + 72), &unk_1678FC, 0x80u);
  *(_QWORD *)(a1 + 200) = 0;
  return result;
}
