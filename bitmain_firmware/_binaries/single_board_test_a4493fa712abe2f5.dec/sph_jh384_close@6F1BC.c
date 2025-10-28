void *__fastcall sph_jh384_close(int a1, int a2)
{
  int v2; // r6
  size_t v4; // r2
  int v5; // r5
  int v6; // r7
  size_t v7; // r8
  __int64 v8; // kr00_8
  char *v9; // r5
  int v10; // r12
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r9
  int v16; // r8
  int v17; // r11
  int v18; // r6
  int v19; // r2
  int v20; // r1
  unsigned int v21; // r3
  unsigned int v22; // r6
  int v23; // r0
  int v24; // r5
  unsigned int v25; // r1
  unsigned int v26; // r7
  int v27; // r5
  int v28; // r3
  int v29; // r5
  int v30; // r0
  int v31; // r1
  int *v32; // r6
  int v33; // r5
  int v34; // r3
  int v35; // r0
  int v36; // r1
  int v37; // r2
  int v38; // r3
  void *result; // r0
  unsigned __int8 v40; // [sp+0h] [bp-8Ch]
  char v42[16]; // [sp+8h] [bp-84h] BYREF
  _DWORD v43[12]; // [sp+18h] [bp-74h] BYREF
  char v44; // [sp+48h] [bp-44h] BYREF

  v2 = *(_DWORD *)(a1 + 64);
  v42[0] = 0x80;
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
  memset(&v42[1], 0, v4);
  v8 = *(_QWORD *)(a1 + 200);
  *(_DWORD *)&v42[v5] = 0;
  v9 = &v42[v5];
  v9[4] = 0;
  v9[6] = v8 < 0;
  v10 = ((v8 << 9) + (unsigned __int64)(unsigned int)(8 * v2)) >> 32;
  v9[7] = HIDWORD(v8) >> 23;
  v9[5] = 0;
  *(_DWORD *)&v42[v6] = HIBYTE(v10)
                      | (unsigned __int16)(BYTE2(v10) << 8)
                      | (BYTE1(v10) << 16) & 0xFFFFFF
                      | ((unsigned __int8)v10 << 24);
  *(_DWORD *)&v42[v6 + 4] = ((unsigned int)(((_DWORD)v8 << 9) + 8 * v2) >> 24)
                          | (unsigned __int16)((unsigned __int8)((unsigned int)(((_DWORD)v8 << 9) + 8 * v2) >> 16) << 8)
                          | ((unsigned __int8)((unsigned __int16)(((_WORD)v8 << 9) + 8 * v2) >> 8) << 16) & 0xFFFFFF
                          | ((unsigned __int8)(8 * v2) << 24);
  sph_jh512_0(a1, v42, v7);
  v11 = *(_DWORD *)(a1 + 156);
  v12 = *(_DWORD *)(a1 + 160);
  v13 = *(_DWORD *)(a1 + 164);
  v14 = *(_DWORD *)(a1 + 168);
  v15 = *(_DWORD *)(a1 + 172);
  v43[0] = (unsigned __int8)*(_DWORD *)(a1 + 152)
         | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 152)) << 8)
         | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 152)) << 16) & 0xFFFFFF
         | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 152)) << 24);
  v16 = *(_DWORD *)(a1 + 196);
  v43[1] = (unsigned __int8)v11
         | (unsigned __int16)(BYTE1(v11) << 8)
         | (BYTE2(v11) << 16) & 0xFFFFFF
         | (HIBYTE(v11) << 24);
  v17 = a2;
  v43[2] = (unsigned __int8)v12
         | (unsigned __int16)(BYTE1(v12) << 8)
         | (BYTE2(v12) << 16) & 0xFFFFFF
         | (HIBYTE(v12) << 24);
  v18 = (unsigned __int16)((unsigned __int8)v13 | (BYTE1(v13) << 8))
      | (BYTE2(v13) << 16) & 0xFFFFFF
      | (HIBYTE(v13) << 24);
  v19 = *(_DWORD *)(a1 + 176);
  v43[3] = v18;
  v20 = (unsigned __int16)((unsigned __int8)v14 | (BYTE1(v14) << 8))
      | (BYTE2(v14) << 16) & 0xFFFFFF
      | (HIBYTE(v14) << 24);
  v21 = *(_DWORD *)(a1 + 184);
  v43[4] = v20;
  v22 = v21 >> 8;
  v23 = *(_DWORD *)(a1 + 180);
  LOWORD(v21) = (unsigned __int8)*(_DWORD *)(a1 + 176) | (BYTE1(v19) << 8);
  v24 = *(_DWORD *)(a1 + 188) >> 8;
  v25 = *(_DWORD *)(a1 + 192);
  v43[5] = (unsigned __int8)v15
         | (unsigned __int16)(BYTE1(v15) << 8)
         | (BYTE2(v15) << 16) & 0xFFFFFF
         | (HIBYTE(v15) << 24);
  v40 = v24;
  v26 = v25 >> 8;
  LOWORD(v25) = (unsigned __int8)*(_DWORD *)(a1 + 180) | (BYTE1(v23) << 8);
  v27 = *(_DWORD *)(a1 + 180);
  v43[6] = (unsigned __int16)v21
         | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 176)) << 16) & 0xFFFFFF
         | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 176)) << 24);
  v28 = *(_DWORD *)(a1 + 184);
  v43[7] = (unsigned __int16)v25 | (BYTE2(v27) << 16) & 0xFFFFFF | (HIBYTE(v27) << 24);
  v29 = *(_DWORD *)(a1 + 188);
  v30 = *(_DWORD *)(a1 + 192);
  v43[8] = (unsigned __int8)v28
         | (unsigned __int16)((unsigned __int8)v22 << 8)
         | (BYTE2(v28) << 16) & 0xFFFFFF
         | (HIBYTE(v28) << 24);
  v31 = (unsigned __int8)v29 | (unsigned __int16)(v40 << 8) | (BYTE2(v29) << 16);
  v32 = v43;
  v33 = HIBYTE(*(_DWORD *)(a1 + 188));
  v34 = (unsigned __int16)((unsigned __int8)*(_DWORD *)(a1 + 192) | ((unsigned __int8)v26 << 8))
      | (BYTE2(v30) << 16) & 0xFFFFFF
      | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 192)) << 24);
  v43[11] = (unsigned __int8)v16
          | (unsigned __int16)(BYTE1(v16) << 8)
          | (BYTE2(v16) << 16) & 0xFFFFFF
          | (HIBYTE(v16) << 24);
  v43[9] = v31 & 0xFFFFFF | ((unsigned __int8)v33 << 24);
  v43[10] = v34;
  do
  {
    v17 += 16;
    v35 = *v32;
    v36 = v32[1];
    v37 = v32[2];
    v38 = v32[3];
    v32 += 4;
    *(_DWORD *)(v17 - 16) = v35;
    *(_DWORD *)(v17 - 12) = v36;
    *(_DWORD *)(v17 - 8) = v37;
    *(_DWORD *)(v17 - 4) = v38;
  }
  while ( v32 != (int *)&v44 );
  *(_DWORD *)(a1 + 64) = 0;
  result = memcpy((void *)(a1 + 72), &unk_FD730, 0x80u);
  *(_QWORD *)(a1 + 200) = 0;
  return result;
}
