void *__fastcall sph_jh224_close(_DWORD *a1, int *a2)
{
  int v2; // r6
  size_t v5; // r2
  int v6; // r5
  size_t v7; // r8
  int v8; // lr
  char v9; // r3
  unsigned int v10; // r9
  char *v11; // r5
  __int64 v12; // r0
  __int64 v13; // r6
  int v14; // r3
  int v15; // r8
  int v16; // r0
  int v17; // r1
  int v18; // r5
  int v19; // r3
  unsigned int v20; // r3
  unsigned int v21; // r9
  unsigned int v22; // r2
  int v23; // r3
  int v24; // r1
  int v25; // r3
  int v26; // r0
  int v27; // r1
  int v28; // r2
  void *result; // r0
  int v30; // [sp+4h] [bp-88h]
  char v31[36]; // [sp+8h] [bp-84h] BYREF
  int v32; // [sp+2Ch] [bp-60h]
  int v33; // [sp+30h] [bp-5Ch]
  int v34; // [sp+34h] [bp-58h]
  int v35; // [sp+38h] [bp-54h]
  int v36; // [sp+3Ch] [bp-50h]
  int v37; // [sp+40h] [bp-4Ch]
  int v38; // [sp+44h] [bp-48h]

  v2 = a1[16];
  v31[0] = 0x80;
  if ( v2 )
  {
    v5 = 111 - v2;
    v6 = 112 - v2;
    v7 = 128 - v2;
    v30 = 120 - v2;
  }
  else
  {
    v7 = 64;
    v30 = 56;
    v6 = 48;
    v5 = 47;
  }
  memset(&v31[1], 0, v5);
  v8 = a1[51];
  v9 = 8 * v2;
  v10 = a1[50];
  *(_DWORD *)&v31[v6] = 0;
  v11 = &v31[v6];
  LODWORD(v12) = v10 << 9;
  HIDWORD(v12) = (v8 << 9) | (v10 >> 23);
  v11[6] = v8 < 0;
  v11[4] = 0;
  LOBYTE(v10) = ((v10 << 9) + 8 * v2) >> 24;
  v13 = v12 + (unsigned int)(8 * v2);
  v11[5] = 0;
  v11[7] = (unsigned int)v8 >> 23;
  *(_DWORD *)&v31[v30] = HIBYTE(v13)
                       | (unsigned __int16)(BYTE6(v13) << 8)
                       | (BYTE5(v13) << 16) & 0xFFFFFF
                       | (BYTE4(v13) << 24);
  *(_DWORD *)&v31[v30 + 4] = (unsigned __int16)((unsigned __int8)v10 | (BYTE2(v13) << 8))
                           | (BYTE1(v13) << 16) & 0xFFFFFF
                           | ((unsigned __int8)(v12 + v9) << 24);
  sph_jh512_0((int)a1, v31, v7);
  v14 = a1[44];
  v15 = a1[45];
  v16 = a1[46];
  v17 = a1[47];
  v32 = (unsigned __int8)a1[43]
      | (unsigned __int16)((unsigned __int8)BYTE1(a1[43]) << 8)
      | ((unsigned __int8)BYTE2(a1[43]) << 16) & 0xFFFFFF
      | ((unsigned __int8)HIBYTE(a1[43]) << 24);
  v18 = (unsigned __int8)v14 | (unsigned __int16)(BYTE1(v14) << 8) | (BYTE2(v14) << 16) & 0xFFFFFF | (HIBYTE(v14) << 24);
  v19 = a1[48];
  v33 = v18;
  LOWORD(v13) = v19;
  v20 = a1[48];
  LOWORD(v18) = (unsigned __int8)a1[49] | ((unsigned __int8)BYTE1(a1[49]) << 8);
  v34 = (unsigned __int16)((unsigned __int8)v15 | (BYTE1(v15) << 8))
      | (BYTE2(v15) << 16) & 0xFFFFFF
      | (HIBYTE(v15) << 24);
  v35 = (unsigned __int8)v16 | (unsigned __int16)(BYTE1(v16) << 8) | (BYTE2(v16) << 16) & 0xFFFFFF | (HIBYTE(v16) << 24);
  v21 = HIWORD(v20);
  v22 = HIBYTE(v20);
  v23 = a1[49];
  v36 = (unsigned __int8)v17 | (unsigned __int16)(BYTE1(v17) << 8) | (BYTE2(v17) << 16) & 0xFFFFFF | (HIBYTE(v17) << 24);
  v37 = (unsigned __int16)v13 | ((unsigned __int8)v21 << 16) & 0xFFFFFF | ((unsigned __int8)v22 << 24);
  v38 = (unsigned __int16)v18 | (BYTE2(v23) << 16) & 0xFFFFFF | ((unsigned __int8)HIBYTE(a1[49]) << 24);
  v24 = v33;
  v25 = v35;
  *a2 = v32;
  a2[1] = v24;
  a2[2] = (unsigned __int16)((unsigned __int8)v15 | (BYTE1(v15) << 8))
        | (BYTE2(v15) << 16) & 0xFFFFFF
        | (HIBYTE(v15) << 24);
  v26 = v36;
  v27 = v37;
  v28 = v38;
  a2[3] = v25;
  a2[4] = v26;
  a2[5] = v27;
  a2[6] = v28;
  a1[16] = 0;
  result = memcpy(a1 + 18, &unk_FD830, 0x80u);
  *((_QWORD *)a1 + 25) = 0;
  return result;
}
