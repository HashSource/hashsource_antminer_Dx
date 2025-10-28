void *__fastcall sph_jh256_addbits_and_close(int a1, char a2, unsigned int a3, int *a4)
{
  int v6; // r10
  size_t v7; // r2
  size_t v8; // r5
  int v9; // r9
  __int64 v10; // r0
  __int64 v11; // r6
  char *v12; // r12
  int v13; // r2
  int v14; // r5
  int v15; // r3
  int v16; // r0
  int v17; // r1
  int v18; // r10
  int v19; // r2
  int v20; // r1
  int v21; // r1
  int v22; // r2
  int v23; // r3
  void *result; // r0
  int v25; // [sp+4h] [bp-90h]
  int v26; // [sp+8h] [bp-8Ch]
  char v28[32]; // [sp+10h] [bp-84h] BYREF
  int v29; // [sp+30h] [bp-64h]
  int v30; // [sp+34h] [bp-60h]
  int v31; // [sp+38h] [bp-5Ch]
  int v32; // [sp+3Ch] [bp-58h]
  int v33; // [sp+40h] [bp-54h]
  int v34; // [sp+44h] [bp-50h]
  int v35; // [sp+48h] [bp-4Ch]
  int v36; // [sp+4Ch] [bp-48h]

  v6 = *(_DWORD *)(a1 + 64);
  v28[0] = (128 >> a3) | a2 & -(128 >> a3);
  if ( a3 | v6 )
  {
    v7 = 111 - v6;
    v8 = 128 - v6;
    v25 = 112 - v6;
    v26 = 120 - v6;
  }
  else
  {
    v25 = 48;
    v26 = 56;
    v8 = 64;
    v7 = 47;
  }
  memset(&v28[1], 0, v7);
  v9 = *(_DWORD *)(a1 + 204);
  v10 = (*(_QWORD *)(a1 + 200) << 9) + a3;
  v11 = v10 + (unsigned int)(8 * v6);
  v12 = &v28[v25];
  *(_DWORD *)&v28[v25] = 0;
  v12[6] = v9 < 0;
  v12[4] = 0;
  v12[5] = 0;
  v12[7] = (unsigned int)v9 >> 23;
  *(_DWORD *)&v28[v26] = HIBYTE(v11)
                       | (unsigned __int16)(BYTE6(v11) << 8)
                       | (BYTE5(v11) << 16) & 0xFFFFFF
                       | (BYTE4(v11) << 24);
  *(_DWORD *)&v28[v26 + 4] = ((unsigned int)(v10 + 8 * v6) >> 24)
                           | (unsigned __int16)((unsigned __int8)((unsigned int)(v10 + 8 * v6) >> 16) << 8)
                           | ((unsigned __int8)((unsigned __int16)(v10 + 8 * v6) >> 8) << 16) & 0xFFFFFF
                           | ((unsigned __int8)v11 << 24);
  sph_jh512_0(a1, v28, v8);
  v13 = *(_DWORD *)(a1 + 172);
  v14 = *(_DWORD *)(a1 + 180);
  v15 = *(_DWORD *)(a1 + 176);
  v16 = *(_DWORD *)(a1 + 184);
  v17 = *(_DWORD *)(a1 + 188);
  v29 = (unsigned __int8)*(_DWORD *)(a1 + 168)
      | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 168)) << 8)
      | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 168)) << 16) & 0xFFFFFF
      | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 168)) << 24);
  v30 = (unsigned __int8)v13 | (unsigned __int16)(BYTE1(v13) << 8) | (BYTE2(v13) << 16) & 0xFFFFFF | (HIBYTE(v13) << 24);
  v18 = *(_DWORD *)(a1 + 196);
  v19 = *(_DWORD *)(a1 + 192);
  v31 = (unsigned __int8)v15 | (unsigned __int16)(BYTE1(v15) << 8) | (BYTE2(v15) << 16) & 0xFFFFFF | (HIBYTE(v15) << 24);
  v32 = (unsigned __int8)v14 | (unsigned __int16)(BYTE1(v14) << 8) | (BYTE2(v14) << 16) & 0xFFFFFF | (HIBYTE(v14) << 24);
  v33 = (unsigned __int8)v16 | (unsigned __int16)(BYTE1(v16) << 8) | (BYTE2(v16) << 16) & 0xFFFFFF | (HIBYTE(v16) << 24);
  v36 = (unsigned __int16)((unsigned __int8)v18 | (BYTE1(v18) << 8))
      | (BYTE2(v18) << 16) & 0xFFFFFF
      | (HIBYTE(v18) << 24);
  v34 = (unsigned __int8)v17 | (unsigned __int16)(BYTE1(v17) << 8) | (BYTE2(v17) << 16) & 0xFFFFFF | (HIBYTE(v17) << 24);
  v35 = (unsigned __int16)v19 | (BYTE2(v19) << 16) & 0xFFFFFF | (HIBYTE(v19) << 24);
  v20 = v30;
  *a4 = v29;
  a4[1] = v20;
  a4[2] = (unsigned __int8)v15
        | (unsigned __int16)(BYTE1(v15) << 8)
        | (BYTE2(v15) << 16) & 0xFFFFFF
        | (HIBYTE(v15) << 24);
  a4[3] = (unsigned __int8)v14
        | (unsigned __int16)(BYTE1(v14) << 8)
        | (BYTE2(v14) << 16) & 0xFFFFFF
        | (HIBYTE(v14) << 24);
  v21 = v34;
  v22 = v35;
  v23 = v36;
  a4[4] = v33;
  a4[5] = v21;
  a4[6] = v22;
  a4[7] = v23;
  *(_DWORD *)(a1 + 64) = 0;
  result = memcpy((void *)(a1 + 72), &unk_FD7B0, 0x80u);
  *(_QWORD *)(a1 + 200) = 0;
  return result;
}
