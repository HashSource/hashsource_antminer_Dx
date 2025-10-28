void *__fastcall sph_jh512_close(_DWORD *a1, int a2)
{
  int v2; // r6
  size_t v4; // r2
  int v5; // r5
  int v6; // r7
  size_t v7; // r8
  int v8; // lr
  unsigned int v9; // r9
  char *v10; // r5
  int v11; // r10
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r9
  int v17; // r8
  int v18; // r10
  int v19; // r5
  int v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r2
  int v25; // r3
  unsigned int v26; // r0
  unsigned int v27; // r7
  unsigned int v28; // r0
  int v29; // r3
  unsigned int v30; // r1
  unsigned int v31; // r6
  unsigned int v32; // r0
  int v33; // r1
  int v34; // r3
  unsigned int v35; // r2
  unsigned __int8 v36; // r12
  unsigned int v37; // r7
  int v38; // r2
  int v39; // r3
  unsigned __int8 v40; // r12
  unsigned int v41; // r2
  unsigned __int8 v42; // lr
  unsigned int v43; // r6
  int v44; // r2
  int v45; // r3
  int *v46; // r6
  int v47; // r0
  int v48; // r1
  int v49; // r2
  int v50; // r3
  void *result; // r0
  _DWORD s[16]; // [sp+10h] [bp-84h] BYREF
  char v54; // [sp+50h] [bp-44h] BYREF

  v2 = a1[16];
  LOBYTE(s[0]) = 0x80;
  if ( v2 )
  {
    v4 = 111 - v2;
    v5 = 112 - v2;
    v6 = 120 - v2;
    v7 = 128 - v2;
  }
  else
  {
    v7 = 64;
    v6 = 56;
    v5 = 48;
    v4 = 47;
  }
  memset((char *)s + 1, 0, v4);
  v8 = a1[51];
  v9 = a1[50];
  *(_DWORD *)((char *)s + v5) = 0;
  v10 = (char *)s + v5;
  v10[6] = v8 < 0;
  v11 = (__PAIR64__((v8 << 9) | (v9 >> 23), v9 << 9) + (unsigned int)(8 * v2)) >> 32;
  v10[7] = (unsigned int)v8 >> 23;
  v10[4] = 0;
  v10[5] = 0;
  *(_DWORD *)((char *)s + v6) = HIBYTE(v11)
                              | (unsigned __int16)(BYTE2(v11) << 8)
                              | (BYTE1(v11) << 16) & 0xFFFFFF
                              | ((unsigned __int8)v11 << 24);
  *(_DWORD *)((char *)&s[1] + v6) = (((v9 << 9) + 8 * v2) >> 24)
                                  | (unsigned __int16)((unsigned __int8)(((v9 << 9) + 8 * v2) >> 16) << 8)
                                  | ((unsigned __int8)((unsigned __int16)(((_WORD)v9 << 9) + 8 * v2) >> 8) << 16)
                                  & 0xFFFFFF
                                  | ((unsigned __int8)(8 * v2) << 24);
  sph_jh512_0((int)a1, (char *)s, v7);
  v12 = a1[35];
  v13 = a1[36];
  v14 = a1[37];
  v15 = a1[38];
  v16 = a1[39];
  v17 = a1[47];
  v18 = a2;
  s[0] = (unsigned __int8)a1[34]
       | (unsigned __int16)((unsigned __int8)BYTE1(a1[34]) << 8)
       | ((unsigned __int8)BYTE2(a1[34]) << 16) & 0xFFFFFF
       | ((unsigned __int8)HIBYTE(a1[34]) << 24);
  v19 = a1[49];
  s[1] = (unsigned __int8)v12
       | (unsigned __int16)(BYTE1(v12) << 8)
       | (BYTE2(v12) << 16) & 0xFFFFFF
       | (HIBYTE(v12) << 24);
  v20 = a1[40];
  s[2] = (unsigned __int8)v13
       | (unsigned __int16)(BYTE1(v13) << 8)
       | (BYTE2(v13) << 16) & 0xFFFFFF
       | (HIBYTE(v13) << 24);
  s[3] = (unsigned __int8)v14
       | (unsigned __int16)(BYTE1(v14) << 8)
       | (BYTE2(v14) << 16) & 0xFFFFFF
       | (HIBYTE(v14) << 24);
  v21 = a1[41];
  s[4] = (unsigned __int8)v15
       | (unsigned __int16)(BYTE1(v15) << 8)
       | (BYTE2(v15) << 16) & 0xFFFFFF
       | (HIBYTE(v15) << 24);
  v22 = a1[40];
  s[5] = (unsigned __int16)((unsigned __int8)v16 | (BYTE1(v16) << 8))
       | (BYTE2(v16) << 16) & 0xFFFFFF
       | (HIBYTE(v16) << 24);
  v23 = (unsigned __int8)v20 | (unsigned __int16)(BYTE1(v22) << 8) | (BYTE2(v20) << 16);
  v24 = a1[42];
  v25 = v23 & 0xFFFFFF | (HIBYTE(v20) << 24);
  v26 = a1[43];
  s[6] = v25;
  v27 = v26 >> 8;
  v28 = a1[44];
  v29 = (unsigned __int16)((unsigned __int8)a1[41] | (BYTE1(v21) << 8))
      | ((unsigned __int8)BYTE2(a1[41]) << 16) & 0xFFFFFF
      | ((unsigned __int8)HIBYTE(a1[41]) << 24);
  v30 = a1[45];
  s[7] = v29;
  v31 = v28 >> 8;
  v32 = v30 >> 8;
  v33 = a1[46];
  v34 = (unsigned __int16)((unsigned __int8)a1[42] | (BYTE1(v24) << 8))
      | ((unsigned __int8)BYTE2(a1[42]) << 16) & 0xFFFFFF
      | ((unsigned __int8)HIBYTE(a1[42]) << 24);
  v35 = a1[43];
  s[8] = v34;
  v36 = BYTE2(v35);
  LOWORD(v34) = (unsigned __int8)v35 | ((unsigned __int8)v27 << 8);
  v37 = HIBYTE(v35);
  v38 = a1[48];
  v39 = (unsigned __int16)v34 | (v36 << 16) & 0xFFFFFF | ((unsigned __int8)v37 << 24);
  LOBYTE(v37) = v38;
  s[9] = v39;
  v40 = BYTE1(v38);
  v41 = a1[45];
  LOBYTE(v39) = v41;
  s[10] = (unsigned __int16)((unsigned __int8)a1[44] | ((unsigned __int8)v31 << 8))
        | ((unsigned __int8)BYTE2(a1[44]) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(a1[44]) << 24);
  v42 = BYTE2(v41);
  v43 = HIBYTE(v41);
  v44 = a1[46];
  s[11] = (unsigned __int16)((unsigned __int8)v39 | ((unsigned __int8)v32 << 8))
        | (v42 << 16) & 0xFFFFFF
        | ((unsigned __int8)v43 << 24);
  v45 = (unsigned __int16)((unsigned __int8)v37 | (v40 << 8))
      | ((unsigned __int8)BYTE2(a1[48]) << 16) & 0xFFFFFF
      | ((unsigned __int8)HIBYTE(a1[48]) << 24);
  v46 = s;
  s[12] = (unsigned __int16)((unsigned __int8)v44 | (BYTE1(v33) << 8))
        | (BYTE2(v44) << 16) & 0xFFFFFF
        | (HIBYTE(v44) << 24);
  s[13] = (unsigned __int16)((unsigned __int8)v17 | (BYTE1(v17) << 8))
        | (BYTE2(v17) << 16) & 0xFFFFFF
        | (HIBYTE(v17) << 24);
  s[14] = v45;
  s[15] = (unsigned __int16)((unsigned __int8)v19 | (BYTE1(v19) << 8))
        | (BYTE2(v19) << 16) & 0xFFFFFF
        | (HIBYTE(v19) << 24);
  do
  {
    v18 += 16;
    v47 = *v46;
    v48 = v46[1];
    v49 = v46[2];
    v50 = v46[3];
    v46 += 4;
    *(_DWORD *)(v18 - 16) = v47;
    *(_DWORD *)(v18 - 12) = v48;
    *(_DWORD *)(v18 - 8) = v49;
    *(_DWORD *)(v18 - 4) = v50;
  }
  while ( v46 != (int *)&v54 );
  a1[16] = 0;
  result = memcpy(a1 + 18, &unk_FD6B0, 0x80u);
  *((_QWORD *)a1 + 25) = 0;
  return result;
}
