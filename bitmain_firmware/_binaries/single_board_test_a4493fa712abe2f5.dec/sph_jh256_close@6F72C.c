void *__fastcall sph_jh256_close(_DWORD *a1, int *a2)
{
  int v2; // r6
  size_t v5; // r2
  int v6; // r5
  size_t v7; // r8
  int v8; // lr
  int v9; // r3
  unsigned int v10; // r9
  char *v11; // r5
  __int64 v12; // r0
  __int64 v13; // r6
  int v14; // r2
  unsigned int v15; // r5
  int v16; // r3
  int v17; // r0
  int v18; // r1
  int v19; // lr
  int v20; // r2
  int v21; // r5
  int v22; // r1
  int v23; // r1
  int v24; // r2
  int v25; // r3
  void *result; // r0
  unsigned int v27; // [sp+0h] [bp-8Ch]
  int v28; // [sp+4h] [bp-88h]
  char v29[32]; // [sp+8h] [bp-84h] BYREF
  int v30; // [sp+28h] [bp-64h]
  int v31; // [sp+2Ch] [bp-60h]
  int v32; // [sp+30h] [bp-5Ch]
  int v33; // [sp+34h] [bp-58h]
  int v34; // [sp+38h] [bp-54h]
  int v35; // [sp+3Ch] [bp-50h]
  int v36; // [sp+40h] [bp-4Ch]
  int v37; // [sp+44h] [bp-48h]

  v2 = a1[16];
  v29[0] = 0x80;
  if ( v2 )
  {
    v5 = 111 - v2;
    v6 = 112 - v2;
    v7 = 128 - v2;
    v28 = 120 - v2;
  }
  else
  {
    v7 = 64;
    v28 = 56;
    v6 = 48;
    v5 = 47;
  }
  memset(&v29[1], 0, v5);
  v8 = a1[51];
  v9 = 8 * v2;
  v10 = a1[50];
  *(_DWORD *)&v29[v6] = 0;
  v11 = &v29[v6];
  LODWORD(v12) = v10 << 9;
  HIDWORD(v12) = (v8 << 9) | (v10 >> 23);
  v11[6] = v8 < 0;
  v11[4] = 0;
  v13 = v12 + (unsigned int)(8 * v2);
  v11[5] = 0;
  v11[7] = (unsigned int)v8 >> 23;
  *(_DWORD *)&v29[v28] = HIBYTE(v13)
                       | (unsigned __int16)(BYTE6(v13) << 8)
                       | (BYTE5(v13) << 16) & 0xFFFFFF
                       | (BYTE4(v13) << 24);
  *(_DWORD *)&v29[v28 + 4] = (((v10 << 9) + v9) >> 24)
                           | (unsigned __int16)(BYTE2(v13) << 8)
                           | (BYTE1(v13) << 16) & 0xFFFFFF
                           | ((unsigned __int8)v13 << 24);
  sph_jh512_0((int)a1, v29, v7);
  v14 = a1[43];
  v15 = a1[45];
  v16 = a1[44];
  v17 = a1[46];
  v18 = a1[47];
  v30 = (unsigned __int8)a1[42]
      | (unsigned __int16)((unsigned __int8)BYTE1(a1[42]) << 8)
      | ((unsigned __int8)BYTE2(a1[42]) << 16) & 0xFFFFFF
      | ((unsigned __int8)HIBYTE(a1[42]) << 24);
  v31 = (unsigned __int8)v14 | (unsigned __int16)(BYTE1(v14) << 8) | (BYTE2(v14) << 16) & 0xFFFFFF | (HIBYTE(v14) << 24);
  LODWORD(v13) = a1[48];
  v32 = (unsigned __int16)((unsigned __int8)v16 | (BYTE1(v16) << 8))
      | (BYTE2(v16) << 16) & 0xFFFFFF
      | (HIBYTE(v16) << 24);
  v19 = (unsigned __int8)v15 | (unsigned __int16)(BYTE1(v15) << 8) | (BYTE2(v15) << 16);
  v27 = HIBYTE(v15);
  v20 = a1[48];
  v21 = (unsigned __int16)((unsigned __int8)a1[49] | ((unsigned __int8)BYTE1(a1[49]) << 8))
      | ((unsigned __int8)BYTE2(a1[49]) << 16) & 0xFFFFFF
      | ((unsigned __int8)HIBYTE(a1[49]) << 24);
  v33 = v19 & 0xFFFFFF | ((unsigned __int8)v27 << 24);
  v34 = (unsigned __int8)v17 | (unsigned __int16)(BYTE1(v17) << 8) | (BYTE2(v17) << 16) & 0xFFFFFF | (HIBYTE(v17) << 24);
  v37 = v21;
  v35 = (unsigned __int8)v18 | (unsigned __int16)(BYTE1(v18) << 8) | (BYTE2(v18) << 16) & 0xFFFFFF | (HIBYTE(v18) << 24);
  v36 = (unsigned __int16)((unsigned __int8)v13 | (BYTE1(v13) << 8))
      | (BYTE2(v20) << 16) & 0xFFFFFF
      | (HIBYTE(v20) << 24);
  v22 = v31;
  *a2 = v30;
  a2[1] = v22;
  a2[2] = (unsigned __int16)((unsigned __int8)v16 | (BYTE1(v16) << 8))
        | (BYTE2(v16) << 16) & 0xFFFFFF
        | (HIBYTE(v16) << 24);
  a2[3] = v19 & 0xFFFFFF | ((unsigned __int8)v27 << 24);
  v23 = v35;
  v24 = v36;
  v25 = v37;
  a2[4] = v34;
  a2[5] = v23;
  a2[6] = v24;
  a2[7] = v25;
  a1[16] = 0;
  result = memcpy(a1 + 18, &unk_FD7B0, 0x80u);
  *((_QWORD *)a1 + 25) = 0;
  return result;
}
