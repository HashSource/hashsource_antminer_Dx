void *__fastcall sph_jh512_addbits_and_close(int a1, char a2, int a3, int a4)
{
  __int64 v5; // r6
  size_t v6; // r2
  size_t v7; // r10
  int v8; // r8
  __int64 v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r10
  int v14; // r7
  int v15; // r8
  int v16; // r12
  int v17; // r6
  unsigned __int8 v18; // r5
  int v19; // r0
  int v20; // r7
  int v21; // lr
  int v22; // r1
  int v23; // r2
  int v24; // r2
  int v25; // r3
  int v26; // r12
  unsigned __int8 v27; // r4
  int v28; // r12
  int v29; // r3
  int v30; // r6
  unsigned int v31; // r3
  int v32; // r2
  int v33; // r3
  unsigned __int8 v34; // r4
  unsigned int v35; // r3
  int v36; // r6
  int v37; // r8
  int v38; // r12
  int *v39; // r5
  int v40; // r0
  int v41; // r1
  int v42; // r2
  int v43; // r3
  void *result; // r0
  int v45; // [sp+4h] [bp-90h]
  int v46; // [sp+8h] [bp-8Ch]
  _DWORD s[16]; // [sp+10h] [bp-84h] BYREF
  char v49; // [sp+50h] [bp-44h] BYREF

  LODWORD(v5) = a3;
  HIDWORD(v5) = *(_DWORD *)(a1 + 64);
  LOBYTE(s[0]) = (128 >> a3) | a2 & -(128 >> a3);
  if ( v5 )
  {
    v6 = 111 - HIDWORD(v5);
    v7 = 128 - HIDWORD(v5);
    v45 = 112 - HIDWORD(v5);
    v46 = 120 - HIDWORD(v5);
  }
  else
  {
    v7 = 64;
    v45 = 48;
    v46 = 56;
    v6 = 47;
  }
  HIDWORD(v5) *= 8;
  memset((char *)s + 1, 0, v6);
  v8 = *(_DWORD *)(a1 + 204);
  v9 = (*(_QWORD *)(a1 + 200) << 9) + (unsigned int)v5;
  LODWORD(v5) = (char *)s + v45;
  *(_DWORD *)((char *)s + v45) = 0;
  *(_BYTE *)(v5 + 6) = v8 < 0;
  *(_BYTE *)(v5 + 4) = 0;
  *(_BYTE *)(v5 + 5) = 0;
  *(_BYTE *)(v5 + 7) = (unsigned int)v8 >> 23;
  *(_DWORD *)((char *)s + v46) = ((v9 + (unsigned __int64)HIDWORD(v5)) >> 56)
                               | (unsigned __int16)((unsigned __int8)((v9 + (unsigned __int64)HIDWORD(v5)) >> 48) << 8)
                               | ((unsigned __int8)((unsigned __int16)((v9 + (unsigned __int64)HIDWORD(v5)) >> 32) >> 8) << 16)
                               & 0xFFFFFF
                               | ((unsigned __int8)((v9 + (unsigned __int64)HIDWORD(v5)) >> 32) << 24);
  *(_DWORD *)((char *)&s[1] + v46) = ((unsigned int)(v9 + HIDWORD(v5)) >> 24)
                                   | (unsigned __int16)((unsigned __int8)((unsigned int)(v9 + HIDWORD(v5)) >> 16) << 8)
                                   | ((unsigned __int8)((unsigned __int16)(v9 + WORD2(v5)) >> 8) << 16) & 0xFFFFFF
                                   | ((unsigned __int8)(v9 + BYTE4(v5)) << 24);
  sph_jh512_0(a1, (char *)s, v7);
  v10 = *(_DWORD *)(a1 + 144);
  v11 = *(_DWORD *)(a1 + 148);
  v12 = *(_DWORD *)(a1 + 152);
  v13 = *(_DWORD *)(a1 + 156);
  v14 = (unsigned __int8)*(_DWORD *)(a1 + 136)
      | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 136)) << 8)
      | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 136)) << 16) & 0xFFFFFF
      | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 136)) << 24);
  v15 = *(_DWORD *)(a1 + 180);
  v16 = *(_DWORD *)(a1 + 160);
  s[1] = (unsigned __int8)*(_DWORD *)(a1 + 140)
       | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 140)) << 8)
       | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 140)) << 16) & 0xFFFFFF
       | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 140)) << 24);
  v17 = *(_DWORD *)(a1 + 168);
  s[2] = (unsigned __int8)v10
       | (unsigned __int16)(BYTE1(v10) << 8)
       | (BYTE2(v10) << 16) & 0xFFFFFF
       | (HIBYTE(v10) << 24);
  v18 = HIBYTE(v17);
  v19 = *(_DWORD *)(a1 + 196);
  s[0] = v14;
  s[3] = (unsigned __int8)v11
       | (unsigned __int16)(BYTE1(v11) << 8)
       | (BYTE2(v11) << 16) & 0xFFFFFF
       | (HIBYTE(v11) << 24);
  v20 = *(_DWORD *)(a1 + 188);
  v21 = a4;
  v22 = *(_DWORD *)(a1 + 164);
  s[4] = (unsigned __int16)((unsigned __int8)v12 | (BYTE1(v12) << 8))
       | (BYTE2(v12) << 16) & 0xFFFFFF
       | (HIBYTE(v12) << 24);
  v23 = *(_DWORD *)(a1 + 160);
  s[5] = (unsigned __int16)((unsigned __int8)v13 | (BYTE1(v13) << 8))
       | (BYTE2(v13) << 16) & 0xFFFFFF
       | (HIBYTE(v13) << 24);
  LOWORD(v12) = (unsigned __int8)v16 | (BYTE1(v23) << 8);
  v24 = *(_DWORD *)(a1 + 168);
  v25 = (unsigned __int16)v12 | (BYTE2(v16) << 16) & 0xFFFFFF | (HIBYTE(v16) << 24);
  v26 = *(_DWORD *)(a1 + 172);
  s[6] = v25;
  v27 = BYTE1(v26);
  v28 = *(_DWORD *)(a1 + 176);
  s[7] = (unsigned __int8)*(_DWORD *)(a1 + 164)
       | (unsigned __int16)(BYTE1(v22) << 8)
       | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 164)) << 16) & 0xFFFFFF
       | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 164)) << 24);
  v29 = (unsigned __int8)v17 | (BYTE1(v24) << 8);
  LOBYTE(v24) = BYTE2(v17);
  v30 = *(_DWORD *)(a1 + 172);
  v31 = v29 & 0xFF00FFFF | ((unsigned __int8)v24 << 16);
  v32 = *(_DWORD *)(a1 + 184);
  s[8] = v31 & 0xFFFFFF | (v18 << 24);
  v33 = (unsigned __int8)v30 | (v27 << 8);
  v34 = HIBYTE(v30);
  v35 = v33 & 0xFF00FFFF | (BYTE2(v30) << 16);
  v36 = *(_DWORD *)(a1 + 192);
  s[9] = v35 & 0xFFFFFF | (v34 << 24);
  LOWORD(v35) = v15;
  LOBYTE(v28) = HIBYTE(v15);
  s[10] = (unsigned __int16)((unsigned __int8)*(_DWORD *)(a1 + 176) | (BYTE1(v28) << 8))
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 176)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 176)) << 24);
  LOBYTE(v36) = BYTE2(v15);
  v37 = *(_DWORD *)(a1 + 184);
  s[11] = (unsigned __int16)v35 | ((unsigned __int8)v36 << 16) & 0xFFFFFF | ((unsigned __int8)v28 << 24);
  v38 = *(_DWORD *)(a1 + 192);
  v39 = s;
  s[13] = (unsigned __int16)v20 | (BYTE2(v20) << 16) & 0xFFFFFF | (HIBYTE(v20) << 24);
  s[12] = (unsigned __int8)v37
        | (unsigned __int16)(BYTE1(v32) << 8)
        | (BYTE2(v37) << 16) & 0xFFFFFF
        | (HIBYTE(v37) << 24);
  s[14] = (unsigned __int16)((unsigned __int8)v38 | (BYTE1(v36) << 8))
        | (BYTE2(v38) << 16) & 0xFFFFFF
        | (HIBYTE(v38) << 24);
  s[15] = (unsigned __int8)v19
        | (unsigned __int16)(BYTE1(v19) << 8)
        | (BYTE2(v19) << 16) & 0xFFFFFF
        | (HIBYTE(v19) << 24);
  do
  {
    v21 += 16;
    v40 = *v39;
    v41 = v39[1];
    v42 = v39[2];
    v43 = v39[3];
    v39 += 4;
    *(_DWORD *)(v21 - 16) = v40;
    *(_DWORD *)(v21 - 12) = v41;
    *(_DWORD *)(v21 - 8) = v42;
    *(_DWORD *)(v21 - 4) = v43;
  }
  while ( v39 != (int *)&v49 );
  *(_DWORD *)(a1 + 64) = 0;
  result = memcpy((void *)(a1 + 72), &unk_17A898, 0x80u);
  *(_QWORD *)(a1 + 200) = 0;
  return result;
}
