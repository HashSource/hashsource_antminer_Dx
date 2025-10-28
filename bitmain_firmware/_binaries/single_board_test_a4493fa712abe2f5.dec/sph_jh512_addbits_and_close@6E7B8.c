void *__fastcall sph_jh512_addbits_and_close(int a1, char a2, unsigned int a3, int a4)
{
  int v6; // r10
  size_t v7; // r2
  size_t v8; // r7
  int v9; // r8
  __int64 v10; // r0
  __int64 v11; // r4
  char *v12; // r6
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r10
  unsigned int v18; // r8
  int v19; // r0
  unsigned __int8 v20; // r12
  int v21; // r1
  int v22; // r2
  int v23; // r3
  unsigned int v24; // r10
  int v25; // r3
  int v26; // r2
  int v27; // r3
  unsigned int v28; // r0
  unsigned int v29; // r7
  unsigned int v30; // r0
  int v31; // r3
  unsigned int v32; // r1
  unsigned int v33; // r6
  unsigned int v34; // r0
  int v35; // r2
  int v36; // r1
  int v37; // r7
  unsigned __int8 v38; // r12
  int v39; // r6
  unsigned __int8 v40; // lr
  int v41; // r3
  int v42; // r0
  int v43; // r6
  int v44; // lr
  unsigned int v45; // r12
  int v46; // r8
  unsigned int v47; // r0
  int v48; // r6
  int v49; // r5
  int v50; // r3
  int *v51; // r6
  int v52; // r0
  int v53; // r1
  int v54; // r2
  int v55; // r3
  void *result; // r0
  int v57; // [sp+4h] [bp-90h]
  int v58; // [sp+8h] [bp-8Ch]
  _DWORD s[16]; // [sp+10h] [bp-84h] BYREF
  char v61; // [sp+50h] [bp-44h] BYREF

  v6 = *(_DWORD *)(a1 + 64);
  LOBYTE(s[0]) = (128 >> a3) | a2 & -(128 >> a3);
  if ( a3 | v6 )
  {
    v7 = 111 - v6;
    v8 = 128 - v6;
    v57 = 112 - v6;
    v58 = 120 - v6;
  }
  else
  {
    v57 = 48;
    v58 = 56;
    v8 = 64;
    v7 = 47;
  }
  memset((char *)s + 1, 0, v7);
  v9 = *(_DWORD *)(a1 + 204);
  v10 = (*(_QWORD *)(a1 + 200) << 9) + a3;
  v11 = v10 + (unsigned int)(8 * v6);
  v12 = (char *)s + v57;
  *(_DWORD *)((char *)s + v57) = 0;
  v12[6] = v9 < 0;
  v12[7] = (unsigned int)v9 >> 23;
  v12[4] = 0;
  v12[5] = 0;
  *(_DWORD *)((char *)s + v58) = HIBYTE(v11)
                               | (unsigned __int16)(BYTE6(v11) << 8)
                               | (BYTE5(v11) << 16) & 0xFFFFFF
                               | (BYTE4(v11) << 24);
  *(_DWORD *)((char *)&s[1] + v58) = ((unsigned int)(v10 + 8 * v6) >> 24)
                                   | (unsigned __int16)((unsigned __int8)((unsigned int)(v10 + 8 * v6) >> 16) << 8)
                                   | (BYTE1(v11) << 16) & 0xFFFFFF
                                   | ((unsigned __int8)v11 << 24);
  sph_jh512_0(a1, (char *)s, v8);
  v13 = *(_DWORD *)(a1 + 140);
  v14 = *(_DWORD *)(a1 + 144);
  v15 = *(_DWORD *)(a1 + 148);
  v16 = *(_DWORD *)(a1 + 152);
  v17 = *(_DWORD *)(a1 + 156);
  v18 = *(_DWORD *)(a1 + 188);
  s[0] = (unsigned __int8)*(_DWORD *)(a1 + 136)
       | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 136)) << 8)
       | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 136)) << 16) & 0xFFFFFF
       | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 136)) << 24);
  s[1] = (unsigned __int16)v13 | (BYTE2(v13) << 16) & 0xFFFFFF | (HIBYTE(v13) << 24);
  v19 = *(_DWORD *)(a1 + 160);
  s[2] = (unsigned __int8)v14
       | (unsigned __int16)(BYTE1(v14) << 8)
       | (BYTE2(v14) << 16) & 0xFFFFFF
       | (HIBYTE(v14) << 24);
  HIDWORD(v11) = *(_DWORD *)(a1 + 172);
  LODWORD(v11) = *(_DWORD *)(a1 + 196);
  s[3] = (unsigned __int8)v15
       | (unsigned __int16)(BYTE1(v15) << 8)
       | (BYTE2(v15) << 16) & 0xFFFFFF
       | (HIBYTE(v15) << 24);
  v20 = BYTE6(v11);
  v21 = *(_DWORD *)(a1 + 164);
  s[4] = (unsigned __int8)v16
       | (unsigned __int16)(BYTE1(v16) << 8)
       | (BYTE2(v16) << 16) & 0xFFFFFF
       | (HIBYTE(v16) << 24);
  v22 = *(_DWORD *)(a1 + 160);
  v23 = (unsigned __int16)((unsigned __int8)v17 | (BYTE1(v17) << 8))
      | (BYTE2(v17) << 16) & 0xFFFFFF
      | (HIBYTE(v17) << 24);
  v24 = HIWORD(v18);
  s[5] = v23;
  v25 = (unsigned __int8)v19 | (unsigned __int16)(BYTE1(v22) << 8) | (BYTE2(v19) << 16);
  v26 = *(_DWORD *)(a1 + 168);
  v27 = v25 & 0xFFFFFF | (HIBYTE(v19) << 24);
  v28 = *(_DWORD *)(a1 + 172);
  s[6] = v27;
  v29 = v28 >> 8;
  v30 = *(_DWORD *)(a1 + 176);
  v31 = (unsigned __int16)((unsigned __int8)*(_DWORD *)(a1 + 164) | (BYTE1(v21) << 8))
      | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 164)) << 16) & 0xFFFFFF
      | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 164)) << 24);
  v32 = *(_DWORD *)(a1 + 180);
  s[7] = v31;
  v33 = v30 >> 8;
  v34 = v32 >> 8;
  LOWORD(v31) = (unsigned __int8)*(_DWORD *)(a1 + 168) | (BYTE1(v26) << 8);
  v35 = *(_DWORD *)(a1 + 168);
  v36 = *(_DWORD *)(a1 + 184);
  LOBYTE(v35) = BYTE1(v18);
  s[8] = (unsigned __int16)v31 | (BYTE2(v35) << 16) & 0xFFFFFF | (HIBYTE(v35) << 24);
  LOWORD(v31) = BYTE4(v11) | ((unsigned __int8)v29 << 8);
  v37 = HIBYTE(HIDWORD(v11));
  HIDWORD(v11) = *(_DWORD *)(a1 + 192);
  s[9] = (unsigned __int16)v31 | (v20 << 16) & 0xFFFFFF | ((unsigned __int8)v37 << 24);
  v38 = BYTE5(v11);
  HIDWORD(v11) = *(_DWORD *)(a1 + 180);
  LOBYTE(v31) = BYTE4(v11);
  s[10] = (unsigned __int16)((unsigned __int8)*(_DWORD *)(a1 + 176) | ((unsigned __int8)v33 << 8))
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 176)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 176)) << 24);
  v39 = HIBYTE(HIDWORD(v11));
  v40 = BYTE6(v11);
  HIDWORD(v11) = *(_DWORD *)(a1 + 184);
  v41 = (unsigned __int16)((unsigned __int8)v31 | ((unsigned __int8)v34 << 8))
      | (v40 << 16) & 0xFFFFFF
      | ((unsigned __int8)v39 << 24);
  v42 = BYTE4(v11);
  v43 = HIWORD(HIDWORD(v11));
  v44 = HIBYTE(HIDWORD(v11));
  HIDWORD(v11) = *(_DWORD *)(a1 + 192);
  s[11] = v41;
  LOBYTE(v36) = v18;
  LOWORD(v41) = BYTE4(v11) | (v38 << 8);
  v45 = HIBYTE(v18);
  v46 = HIWORD(HIDWORD(v11));
  v47 = v42 & 0xFF0000FF | (unsigned __int16)(BYTE1(v36) << 8) | ((unsigned __int8)v43 << 16);
  v48 = HIBYTE(HIDWORD(v11));
  v49 = a4;
  v50 = (unsigned __int16)v41 | ((unsigned __int8)v46 << 16) & 0xFFFFFF | ((unsigned __int8)v48 << 24);
  v51 = s;
  s[12] = v47 & 0xFFFFFF | ((unsigned __int8)v44 << 24);
  s[13] = (unsigned __int16)((unsigned __int8)v36 | ((unsigned __int8)v35 << 8))
        | ((unsigned __int8)v24 << 16) & 0xFFFFFF
        | ((unsigned __int8)v45 << 24);
  s[14] = v50;
  s[15] = (unsigned __int16)((unsigned __int8)v11 | (BYTE1(v11) << 8))
        | (BYTE2(v11) << 16) & 0xFFFFFF
        | (BYTE3(v11) << 24);
  do
  {
    v49 += 16;
    v52 = *v51;
    v53 = v51[1];
    v54 = v51[2];
    v55 = v51[3];
    v51 += 4;
    *(_DWORD *)(v49 - 16) = v52;
    *(_DWORD *)(v49 - 12) = v53;
    *(_DWORD *)(v49 - 8) = v54;
    *(_DWORD *)(v49 - 4) = v55;
  }
  while ( v51 != (int *)&v61 );
  *(_DWORD *)(a1 + 64) = 0;
  result = memcpy((void *)(a1 + 72), &unk_FD6B0, 0x80u);
  *(_QWORD *)(a1 + 200) = 0;
  return result;
}
