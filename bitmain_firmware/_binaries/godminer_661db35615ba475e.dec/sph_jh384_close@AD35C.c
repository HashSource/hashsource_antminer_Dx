void *__fastcall sph_jh384_close(int a1, int a2)
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
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r10
  int v17; // r7
  int v18; // r5
  int v19; // r2
  int v20; // r1
  int v21; // r3
  int v22; // r0
  unsigned __int8 v23; // r12
  int v24; // r1
  int v25; // r8
  unsigned __int8 v26; // r6
  int v27; // r9
  int v28; // lr
  int v29; // r3
  int v30; // r5
  int v31; // r1
  int v32; // r0
  int v33; // r8
  int v34; // r1
  int *v35; // r5
  int v36; // r0
  int v37; // r1
  int v38; // r2
  int v39; // r3
  void *result; // r0
  char v42[16]; // [sp+8h] [bp-84h] BYREF
  _DWORD v43[12]; // [sp+18h] [bp-74h] BYREF
  char v44; // [sp+48h] [bp-44h] BYREF

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
  v42[0] = 0x80;
  memset(&v42[1], 0, v4);
  v8 = *(_DWORD *)(a1 + 204);
  v9 = 8 * v2;
  v10 = *(_QWORD *)(a1 + 200) << 9;
  *(_DWORD *)&v42[v6] = 0;
  v11 = &v42[v6];
  v11[6] = v8 < 0;
  v11[4] = 0;
  v11[5] = 0;
  v11[7] = (unsigned int)v8 >> 23;
  *(_DWORD *)&v42[v5] = ((v10 + (unsigned __int64)(unsigned int)v9) >> 56)
                      | (unsigned __int16)((unsigned __int8)((v10 + (unsigned __int64)(unsigned int)v9) >> 48) << 8)
                      | ((unsigned __int8)((unsigned __int16)((v10 + (unsigned __int64)(unsigned int)v9) >> 32) >> 8) << 16)
                      & 0xFFFFFF
                      | ((unsigned __int8)((v10 + (unsigned __int64)(unsigned int)v9) >> 32) << 24);
  *(_DWORD *)&v42[v5 + 4] = ((unsigned int)(v10 + 8 * v2) >> 24)
                          | (unsigned __int16)((unsigned __int8)((unsigned int)(v10 + 8 * v2) >> 16) << 8)
                          | ((unsigned __int8)((unsigned __int16)(v10 + 8 * v2) >> 8) << 16) & 0xFFFFFF
                          | ((unsigned __int8)(v10 + 8 * v2) << 24);
  sph_jh512_0(a1, v42, v7);
  v12 = *(_DWORD *)(a1 + 156);
  v13 = *(_DWORD *)(a1 + 160);
  v14 = *(_DWORD *)(a1 + 164);
  v15 = *(_DWORD *)(a1 + 168);
  v16 = *(_DWORD *)(a1 + 172);
  v43[0] = (unsigned __int8)*(_DWORD *)(a1 + 152)
         | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 152)) << 8)
         | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 152)) << 16) & 0xFFFFFF
         | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 152)) << 24);
  v43[1] = (unsigned __int8)v12
         | (unsigned __int16)(BYTE1(v12) << 8)
         | (BYTE2(v12) << 16) & 0xFFFFFF
         | (HIBYTE(v12) << 24);
  v17 = *(_DWORD *)(a1 + 180);
  v43[2] = (unsigned __int8)v13
         | (unsigned __int16)(BYTE1(v13) << 8)
         | (BYTE2(v13) << 16) & 0xFFFFFF
         | (HIBYTE(v13) << 24);
  v18 = (unsigned __int8)v14 | (unsigned __int16)(BYTE1(v14) << 8) | (BYTE2(v14) << 16) & 0xFFFFFF | (HIBYTE(v14) << 24);
  v19 = *(_DWORD *)(a1 + 176);
  v43[3] = v18;
  v20 = (unsigned __int16)((unsigned __int8)v15 | (BYTE1(v15) << 8))
      | (BYTE2(v15) << 16) & 0xFFFFFF
      | (HIBYTE(v15) << 24);
  v21 = *(_DWORD *)(a1 + 184);
  v43[4] = v20;
  LOBYTE(v18) = BYTE1(v21);
  v22 = *(_DWORD *)(a1 + 180);
  LOWORD(v21) = (unsigned __int8)*(_DWORD *)(a1 + 176) | (BYTE1(v19) << 8);
  v23 = BYTE1(*(_DWORD *)(a1 + 188));
  v24 = *(_DWORD *)(a1 + 192);
  v43[5] = (unsigned __int8)v16
         | (unsigned __int16)(BYTE1(v16) << 8)
         | (BYTE2(v16) << 16) & 0xFFFFFF
         | (HIBYTE(v16) << 24);
  v25 = *(_DWORD *)(a1 + 184);
  v26 = BYTE1(v24);
  v27 = *(_DWORD *)(a1 + 196);
  v28 = a2;
  LOBYTE(v22) = BYTE2(*(_DWORD *)(a1 + 180));
  v43[6] = (unsigned __int16)v21
         | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 176)) << 16) & 0xFFFFFF
         | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 176)) << 24);
  v29 = (unsigned __int8)v25
      | (unsigned __int16)((unsigned __int8)v18 << 8)
      | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 184)) << 16);
  v30 = *(_DWORD *)(a1 + 188);
  v31 = (unsigned __int8)v17
      | (unsigned __int16)(BYTE1(v22) << 8)
      | ((unsigned __int8)v22 << 16) & 0xFFFFFF
      | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 180)) << 24);
  v32 = *(_DWORD *)(a1 + 192);
  v43[7] = v31;
  v43[8] = v29 & 0xFFFFFF | (HIBYTE(v25) << 24);
  v33 = *(_DWORD *)(a1 + 192);
  v34 = (unsigned __int8)*(_DWORD *)(a1 + 188) | (unsigned __int16)(v23 << 8) | (BYTE2(v30) << 16);
  v35 = v43;
  v43[9] = v34 & 0xFFFFFF | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 188)) << 24);
  v43[10] = (unsigned __int16)((unsigned __int8)v33 | (v26 << 8)) | (BYTE2(v32) << 16) & 0xFFFFFF | (HIBYTE(v33) << 24);
  v43[11] = (unsigned __int8)v27
          | (unsigned __int16)(BYTE1(v27) << 8)
          | (BYTE2(v27) << 16) & 0xFFFFFF
          | (HIBYTE(v27) << 24);
  do
  {
    v28 += 16;
    v36 = *v35;
    v37 = v35[1];
    v38 = v35[2];
    v39 = v35[3];
    v35 += 4;
    *(_DWORD *)(v28 - 16) = v36;
    *(_DWORD *)(v28 - 12) = v37;
    *(_DWORD *)(v28 - 8) = v38;
    *(_DWORD *)(v28 - 4) = v39;
  }
  while ( v35 != (int *)&v44 );
  *(_DWORD *)(a1 + 64) = 0;
  result = memcpy((void *)(a1 + 72), &unk_1677FC, 0x80u);
  *(_QWORD *)(a1 + 200) = 0;
  return result;
}
