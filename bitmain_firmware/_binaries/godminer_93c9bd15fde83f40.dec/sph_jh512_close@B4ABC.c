void *__fastcall sph_jh512_close(int a1, int a2)
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
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r9
  int v16; // r8
  unsigned __int16 v17; // r6
  unsigned __int8 v18; // r12
  unsigned __int8 v19; // r0
  int v20; // r6
  int v21; // r0
  int v22; // r12
  int v23; // r10
  int v24; // r1
  int v25; // r2
  int v26; // r2
  int v27; // r3
  int v28; // r0
  int v29; // r0
  int v30; // r3
  int v31; // r1
  int v32; // r1
  int v33; // r3
  int v34; // r6
  int v35; // r9
  int v36; // r3
  int v37; // r0
  unsigned __int8 v38; // lr
  int v39; // r7
  int v40; // r9
  unsigned int v41; // r0
  int v42; // r3
  int *v43; // lr
  int v44; // r0
  int v45; // r1
  int v46; // r2
  int v47; // r3
  void *result; // r0
  _DWORD s[16]; // [sp+8h] [bp-84h] BYREF
  char v51; // [sp+48h] [bp-44h] BYREF

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
  LOBYTE(s[0]) = 0x80;
  memset((char *)s + 1, 0, v4);
  v8 = *(_DWORD *)(a1 + 204);
  v9 = 8 * v2;
  v10 = *(_QWORD *)(a1 + 200) << 9;
  *(_DWORD *)((char *)s + v6) = 0;
  v11 = (char *)s + v6;
  v11[6] = v8 < 0;
  v11[7] = (unsigned int)v8 >> 23;
  v11[4] = 0;
  v11[5] = 0;
  *(_DWORD *)((char *)s + v5) = ((v10 + (unsigned __int64)(unsigned int)v9) >> 56)
                              | (unsigned __int16)((unsigned __int8)((v10 + (unsigned __int64)(unsigned int)v9) >> 48) << 8)
                              | ((unsigned __int8)((unsigned __int16)((v10 + (unsigned __int64)(unsigned int)v9) >> 32) >> 8) << 16)
                              & 0xFFFFFF
                              | ((unsigned __int8)((v10 + (unsigned __int64)(unsigned int)v9) >> 32) << 24);
  *(_DWORD *)((char *)&s[1] + v5) = ((unsigned int)(v10 + 8 * v2) >> 24)
                                  | (unsigned __int16)((unsigned __int8)((unsigned int)(v10 + 8 * v2) >> 16) << 8)
                                  | ((unsigned __int8)((unsigned __int16)(v10 + 8 * v2) >> 8) << 16) & 0xFFFFFF
                                  | ((unsigned __int8)(v10 + 8 * v2) << 24);
  sph_jh512_0(a1, (char *)s, v7);
  v12 = *(_DWORD *)(a1 + 144);
  v13 = *(_DWORD *)(a1 + 148);
  v14 = *(_DWORD *)(a1 + 152);
  v15 = *(_DWORD *)(a1 + 156);
  v16 = *(_DWORD *)(a1 + 188);
  v17 = (unsigned __int8)*(_DWORD *)(a1 + 140) | ((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 140)) << 8);
  v18 = BYTE2(*(_DWORD *)(a1 + 140));
  v19 = HIBYTE(*(_DWORD *)(a1 + 140));
  s[0] = (unsigned __int8)*(_DWORD *)(a1 + 136)
       | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 136)) << 8)
       | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 136)) << 16) & 0xFFFFFF
       | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 136)) << 24);
  s[1] = v17 | (v18 << 16) & 0xFFFFFF | (v19 << 24);
  v20 = *(_DWORD *)(a1 + 172);
  v21 = *(_DWORD *)(a1 + 160);
  s[2] = (unsigned __int8)v12
       | (unsigned __int16)(BYTE1(v12) << 8)
       | (BYTE2(v12) << 16) & 0xFFFFFF
       | (HIBYTE(v12) << 24);
  v22 = *(_DWORD *)(a1 + 196);
  v23 = a2;
  s[3] = (unsigned __int8)v13
       | (unsigned __int16)(BYTE1(v13) << 8)
       | (BYTE2(v13) << 16) & 0xFFFFFF
       | (HIBYTE(v13) << 24);
  v24 = *(_DWORD *)(a1 + 164);
  s[4] = (unsigned __int16)((unsigned __int8)v14 | (BYTE1(v14) << 8))
       | (BYTE2(v14) << 16) & 0xFFFFFF
       | (HIBYTE(v14) << 24);
  v25 = *(_DWORD *)(a1 + 160);
  s[5] = (unsigned __int16)((unsigned __int8)v15 | (BYTE1(v15) << 8))
       | (BYTE2(v15) << 16) & 0xFFFFFF
       | (HIBYTE(v15) << 24);
  LOWORD(v14) = (unsigned __int8)v21 | (BYTE1(v25) << 8);
  v26 = *(_DWORD *)(a1 + 168);
  v27 = (unsigned __int16)v14 | (BYTE2(v21) << 16) & 0xFFFFFF | (HIBYTE(v21) << 24);
  v28 = *(_DWORD *)(a1 + 172);
  s[6] = v27;
  LOBYTE(v11) = BYTE1(v28);
  v29 = *(_DWORD *)(a1 + 176);
  v30 = (unsigned __int8)*(_DWORD *)(a1 + 164)
      | (unsigned __int16)(BYTE1(v24) << 8)
      | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 164)) << 16) & 0xFFFFFF
      | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 164)) << 24);
  v31 = *(_DWORD *)(a1 + 180);
  s[7] = v30;
  LOBYTE(v29) = BYTE1(v31);
  v32 = *(_DWORD *)(a1 + 184);
  s[8] = (unsigned __int8)*(_DWORD *)(a1 + 168)
       | (unsigned __int16)(BYTE1(v26) << 8)
       | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 168)) << 16) & 0xFFFFFF
       | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 168)) << 24);
  HIBYTE(v11) = HIBYTE(v20);
  v33 = (unsigned __int8)v20 | (unsigned __int16)((unsigned __int8)v11 << 8) | (BYTE2(v20) << 16);
  v34 = *(_DWORD *)(a1 + 192);
  s[9] = v33 & 0xFFFFFF | (HIBYTE(v11) << 24);
  v35 = *(_DWORD *)(a1 + 180);
  s[10] = (unsigned __int8)*(_DWORD *)(a1 + 176)
        | (unsigned __int16)(BYTE1(v29) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 176)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 176)) << 24);
  v36 = (unsigned __int16)((unsigned __int8)v35 | ((unsigned __int8)v29 << 8))
      | (BYTE2(v35) << 16) & 0xFFFFFF
      | (HIBYTE(v35) << 24);
  v37 = (unsigned __int8)*(_DWORD *)(a1 + 184) | (BYTE1(v32) << 8);
  v38 = BYTE2(*(_DWORD *)(a1 + 184));
  v39 = HIBYTE(*(_DWORD *)(a1 + 184));
  v40 = *(_DWORD *)(a1 + 192);
  s[11] = v36;
  v41 = v37 & 0xFF00FFFF | (v38 << 16);
  v42 = (unsigned __int16)((unsigned __int8)v40 | (BYTE1(v34) << 8))
      | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 192)) << 16) & 0xFFFFFF
      | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 192)) << 24);
  v43 = s;
  s[12] = v41 & 0xFFFFFF | ((unsigned __int8)v39 << 24);
  s[13] = (unsigned __int16)((unsigned __int8)v16 | (BYTE1(v16) << 8))
        | (BYTE2(v16) << 16) & 0xFFFFFF
        | (HIBYTE(v16) << 24);
  s[14] = v42;
  s[15] = (unsigned __int8)v22
        | (unsigned __int16)(BYTE1(v22) << 8)
        | (BYTE2(v22) << 16) & 0xFFFFFF
        | (HIBYTE(v22) << 24);
  do
  {
    v23 += 16;
    v44 = *v43;
    v45 = v43[1];
    v46 = v43[2];
    v47 = v43[3];
    v43 += 4;
    *(_DWORD *)(v23 - 16) = v44;
    *(_DWORD *)(v23 - 12) = v45;
    *(_DWORD *)(v23 - 8) = v46;
    *(_DWORD *)(v23 - 4) = v47;
  }
  while ( v43 != (int *)&v51 );
  *(_DWORD *)(a1 + 64) = 0;
  result = memcpy((void *)(a1 + 72), &unk_17A898, 0x80u);
  *(_QWORD *)(a1 + 200) = 0;
  return result;
}
