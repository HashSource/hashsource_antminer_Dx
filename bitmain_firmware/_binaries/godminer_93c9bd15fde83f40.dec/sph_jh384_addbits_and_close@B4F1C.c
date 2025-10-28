void *__fastcall sph_jh384_addbits_and_close(int a1, char a2, int a3, int a4)
{
  __int64 v5; // r6
  size_t v6; // r2
  size_t v7; // r10
  int v8; // r8
  __int64 v9; // r0
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r10
  int v15; // r6
  int v16; // r4
  int v17; // r2
  int v18; // r1
  int v19; // r3
  int v20; // r0
  unsigned __int8 v21; // r12
  int v22; // r1
  int v23; // r7
  unsigned __int8 v24; // r5
  int v25; // r8
  int v26; // lr
  int v27; // r3
  int v28; // r4
  int v29; // r1
  int v30; // r0
  int v31; // r7
  int v32; // r1
  int *v33; // r4
  int v34; // r0
  int v35; // r1
  int v36; // r2
  int v37; // r3
  void *result; // r0
  int v39; // [sp+4h] [bp-90h]
  int v40; // [sp+8h] [bp-8Ch]
  char v42[16]; // [sp+10h] [bp-84h] BYREF
  _DWORD v43[12]; // [sp+20h] [bp-74h] BYREF
  char v44; // [sp+50h] [bp-44h] BYREF

  LODWORD(v5) = a3;
  HIDWORD(v5) = *(_DWORD *)(a1 + 64);
  v42[0] = (128 >> a3) | a2 & -(128 >> a3);
  if ( v5 )
  {
    v6 = 111 - HIDWORD(v5);
    v7 = 128 - HIDWORD(v5);
    v39 = 112 - HIDWORD(v5);
    v40 = 120 - HIDWORD(v5);
  }
  else
  {
    v7 = 64;
    v39 = 48;
    v40 = 56;
    v6 = 47;
  }
  HIDWORD(v5) *= 8;
  memset(&v42[1], 0, v6);
  v8 = *(_DWORD *)(a1 + 204);
  v9 = (*(_QWORD *)(a1 + 200) << 9) + (unsigned int)v5;
  LODWORD(v5) = &v42[v39];
  *(_DWORD *)&v42[v39] = 0;
  *(_BYTE *)(v5 + 6) = v8 < 0;
  *(_BYTE *)(v5 + 4) = 0;
  *(_BYTE *)(v5 + 5) = 0;
  *(_BYTE *)(v5 + 7) = (unsigned int)v8 >> 23;
  *(_DWORD *)&v42[v40] = ((v9 + (unsigned __int64)HIDWORD(v5)) >> 56)
                       | (unsigned __int16)((unsigned __int8)((v9 + (unsigned __int64)HIDWORD(v5)) >> 48) << 8)
                       | ((unsigned __int8)((unsigned __int16)((v9 + (unsigned __int64)HIDWORD(v5)) >> 32) >> 8) << 16)
                       & 0xFFFFFF
                       | ((unsigned __int8)((v9 + (unsigned __int64)HIDWORD(v5)) >> 32) << 24);
  *(_DWORD *)&v42[v40 + 4] = ((unsigned int)(v9 + HIDWORD(v5)) >> 24)
                           | (unsigned __int16)((unsigned __int8)((unsigned int)(v9 + HIDWORD(v5)) >> 16) << 8)
                           | ((unsigned __int8)((unsigned __int16)(v9 + WORD2(v5)) >> 8) << 16) & 0xFFFFFF
                           | ((unsigned __int8)(v9 + BYTE4(v5)) << 24);
  sph_jh512_0(a1, v42, v7);
  v10 = *(_DWORD *)(a1 + 156);
  v11 = *(_DWORD *)(a1 + 160);
  v12 = *(_DWORD *)(a1 + 164);
  v13 = *(_DWORD *)(a1 + 168);
  v14 = *(_DWORD *)(a1 + 172);
  v43[0] = (unsigned __int8)*(_DWORD *)(a1 + 152)
         | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 152)) << 8)
         | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 152)) << 16) & 0xFFFFFF
         | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 152)) << 24);
  v43[1] = (unsigned __int8)v10
         | (unsigned __int16)(BYTE1(v10) << 8)
         | (BYTE2(v10) << 16) & 0xFFFFFF
         | (HIBYTE(v10) << 24);
  v15 = *(_DWORD *)(a1 + 180);
  v43[2] = (unsigned __int8)v11
         | (unsigned __int16)(BYTE1(v11) << 8)
         | (BYTE2(v11) << 16) & 0xFFFFFF
         | (HIBYTE(v11) << 24);
  v16 = (unsigned __int8)v12 | (unsigned __int16)(BYTE1(v12) << 8) | (BYTE2(v12) << 16) & 0xFFFFFF | (HIBYTE(v12) << 24);
  v17 = *(_DWORD *)(a1 + 176);
  v43[3] = v16;
  v18 = (unsigned __int16)((unsigned __int8)v13 | (BYTE1(v13) << 8))
      | (BYTE2(v13) << 16) & 0xFFFFFF
      | (HIBYTE(v13) << 24);
  v19 = *(_DWORD *)(a1 + 184);
  v43[4] = v18;
  LOBYTE(v16) = BYTE1(v19);
  v20 = *(_DWORD *)(a1 + 180);
  LOWORD(v19) = (unsigned __int8)*(_DWORD *)(a1 + 176) | (BYTE1(v17) << 8);
  v21 = BYTE1(*(_DWORD *)(a1 + 188));
  v22 = *(_DWORD *)(a1 + 192);
  v43[5] = (unsigned __int8)v14
         | (unsigned __int16)(BYTE1(v14) << 8)
         | (BYTE2(v14) << 16) & 0xFFFFFF
         | (HIBYTE(v14) << 24);
  v23 = *(_DWORD *)(a1 + 184);
  v24 = BYTE1(v22);
  v25 = *(_DWORD *)(a1 + 196);
  v26 = a4;
  LOBYTE(v20) = BYTE2(*(_DWORD *)(a1 + 180));
  v43[6] = (unsigned __int16)v19
         | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 176)) << 16) & 0xFFFFFF
         | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 176)) << 24);
  v27 = (unsigned __int8)v23
      | (unsigned __int16)((unsigned __int8)v16 << 8)
      | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 184)) << 16);
  v28 = *(_DWORD *)(a1 + 188);
  v29 = (unsigned __int8)v15
      | (unsigned __int16)(BYTE1(v20) << 8)
      | ((unsigned __int8)v20 << 16) & 0xFFFFFF
      | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 180)) << 24);
  v30 = *(_DWORD *)(a1 + 192);
  v43[7] = v29;
  v43[8] = v27 & 0xFFFFFF | (HIBYTE(v23) << 24);
  v31 = *(_DWORD *)(a1 + 192);
  v32 = (unsigned __int8)*(_DWORD *)(a1 + 188) | (unsigned __int16)(v21 << 8) | (BYTE2(v28) << 16);
  v33 = v43;
  v43[9] = v32 & 0xFFFFFF | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 188)) << 24);
  v43[10] = (unsigned __int16)((unsigned __int8)v31 | (v24 << 8)) | (BYTE2(v30) << 16) & 0xFFFFFF | (HIBYTE(v31) << 24);
  v43[11] = (unsigned __int8)v25
          | (unsigned __int16)(BYTE1(v25) << 8)
          | (BYTE2(v25) << 16) & 0xFFFFFF
          | (HIBYTE(v25) << 24);
  do
  {
    v26 += 16;
    v34 = *v33;
    v35 = v33[1];
    v36 = v33[2];
    v37 = v33[3];
    v33 += 4;
    *(_DWORD *)(v26 - 16) = v34;
    *(_DWORD *)(v26 - 12) = v35;
    *(_DWORD *)(v26 - 8) = v36;
    *(_DWORD *)(v26 - 4) = v37;
  }
  while ( v33 != (int *)&v44 );
  *(_DWORD *)(a1 + 64) = 0;
  result = memcpy((void *)(a1 + 72), &unk_17A918, 0x80u);
  *(_QWORD *)(a1 + 200) = 0;
  return result;
}
