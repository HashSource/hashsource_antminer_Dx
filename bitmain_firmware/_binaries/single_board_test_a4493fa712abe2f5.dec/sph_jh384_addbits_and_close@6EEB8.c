void *__fastcall sph_jh384_addbits_and_close(int a1, char a2, unsigned int a3, int a4)
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
  int v18; // r8
  int v19; // r6
  int v20; // r2
  int v21; // r1
  unsigned int v22; // r3
  unsigned int v23; // r6
  int v24; // r0
  unsigned int v25; // r1
  unsigned int v26; // r7
  int v27; // r5
  int v28; // r3
  int v29; // r0
  int v30; // r1
  int *v31; // r6
  int v32; // r3
  int v33; // r0
  int v34; // r1
  int v35; // r2
  int v36; // r3
  void *result; // r0
  int v38; // [sp+4h] [bp-90h]
  unsigned __int8 v39; // [sp+4h] [bp-90h]
  int v40; // [sp+8h] [bp-8Ch]
  char v42[16]; // [sp+10h] [bp-84h] BYREF
  _DWORD v43[12]; // [sp+20h] [bp-74h] BYREF
  char v44; // [sp+50h] [bp-44h] BYREF

  v6 = *(_DWORD *)(a1 + 64);
  v42[0] = (128 >> a3) | a2 & -(128 >> a3);
  if ( a3 | v6 )
  {
    v7 = 111 - v6;
    v8 = 128 - v6;
    v38 = 112 - v6;
    v40 = 120 - v6;
  }
  else
  {
    v38 = 48;
    v40 = 56;
    v8 = 64;
    v7 = 47;
  }
  memset(&v42[1], 0, v7);
  v9 = *(_DWORD *)(a1 + 204);
  v10 = (*(_QWORD *)(a1 + 200) << 9) + a3;
  v11 = v10 + (unsigned int)(8 * v6);
  v12 = &v42[v38];
  *(_DWORD *)&v42[v38] = 0;
  v12[6] = v9 < 0;
  v12[7] = (unsigned int)v9 >> 23;
  v12[4] = 0;
  v12[5] = 0;
  *(_DWORD *)&v42[v40] = HIBYTE(v11)
                       | (unsigned __int16)(BYTE6(v11) << 8)
                       | (BYTE5(v11) << 16) & 0xFFFFFF
                       | (BYTE4(v11) << 24);
  *(_DWORD *)&v42[v40 + 4] = ((unsigned int)(v10 + 8 * v6) >> 24)
                           | (unsigned __int16)((unsigned __int8)((unsigned int)(v10 + 8 * v6) >> 16) << 8)
                           | (BYTE1(v11) << 16) & 0xFFFFFF
                           | ((unsigned __int8)v11 << 24);
  sph_jh512_0(a1, v42, v8);
  v13 = *(_DWORD *)(a1 + 156);
  v14 = *(_DWORD *)(a1 + 160);
  v15 = *(_DWORD *)(a1 + 164);
  v16 = *(_DWORD *)(a1 + 168);
  v17 = *(_DWORD *)(a1 + 172);
  v43[0] = (unsigned __int8)*(_DWORD *)(a1 + 152)
         | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 152)) << 8)
         | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 152)) << 16) & 0xFFFFFF
         | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 152)) << 24);
  v43[1] = (unsigned __int8)v13
         | (unsigned __int16)(BYTE1(v13) << 8)
         | (BYTE2(v13) << 16) & 0xFFFFFF
         | (HIBYTE(v13) << 24);
  v18 = *(_DWORD *)(a1 + 196);
  v43[2] = (unsigned __int8)v14
         | (unsigned __int16)(BYTE1(v14) << 8)
         | (BYTE2(v14) << 16) & 0xFFFFFF
         | (HIBYTE(v14) << 24);
  v19 = (unsigned __int16)v15 | (BYTE2(v15) << 16) & 0xFFFFFF | (HIBYTE(v15) << 24);
  v20 = *(_DWORD *)(a1 + 176);
  v43[3] = v19;
  v21 = (unsigned __int16)((unsigned __int8)v16 | (BYTE1(v16) << 8))
      | (BYTE2(v16) << 16) & 0xFFFFFF
      | (HIBYTE(v16) << 24);
  v22 = *(_DWORD *)(a1 + 184);
  v43[4] = v21;
  v23 = v22 >> 8;
  v24 = *(_DWORD *)(a1 + 180);
  LOWORD(v22) = (unsigned __int8)*(_DWORD *)(a1 + 176) | (BYTE1(v20) << 8);
  LODWORD(v11) = *(_DWORD *)(a1 + 188) >> 8;
  v25 = *(_DWORD *)(a1 + 192);
  v43[5] = (unsigned __int8)v17
         | (unsigned __int16)(BYTE1(v17) << 8)
         | (BYTE2(v17) << 16) & 0xFFFFFF
         | (HIBYTE(v17) << 24);
  v39 = v11;
  v26 = v25 >> 8;
  v27 = a4;
  LOWORD(v25) = (unsigned __int8)*(_DWORD *)(a1 + 180) | (BYTE1(v24) << 8);
  LODWORD(v11) = *(_DWORD *)(a1 + 180);
  v43[6] = (unsigned __int16)v22
         | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 176)) << 16) & 0xFFFFFF
         | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 176)) << 24);
  v28 = *(_DWORD *)(a1 + 184);
  v43[7] = (unsigned __int16)v25 | (BYTE2(v11) << 16) & 0xFFFFFF | (BYTE3(v11) << 24);
  LODWORD(v11) = *(_DWORD *)(a1 + 188);
  v29 = *(_DWORD *)(a1 + 192);
  v43[8] = (unsigned __int8)v28
         | (unsigned __int16)((unsigned __int8)v23 << 8)
         | (BYTE2(v28) << 16) & 0xFFFFFF
         | (HIBYTE(v28) << 24);
  v30 = (unsigned __int8)v11 | (unsigned __int16)(v39 << 8) | (BYTE2(v11) << 16);
  v31 = v43;
  LODWORD(v11) = HIBYTE(*(_DWORD *)(a1 + 188));
  v32 = (unsigned __int16)((unsigned __int8)*(_DWORD *)(a1 + 192) | ((unsigned __int8)v26 << 8))
      | (BYTE2(v29) << 16) & 0xFFFFFF
      | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 192)) << 24);
  v43[11] = (unsigned __int8)v18
          | (unsigned __int16)(BYTE1(v18) << 8)
          | (BYTE2(v18) << 16) & 0xFFFFFF
          | (HIBYTE(v18) << 24);
  v43[9] = v30 & 0xFFFFFF | ((unsigned __int8)v11 << 24);
  v43[10] = v32;
  do
  {
    v27 += 16;
    v33 = *v31;
    v34 = v31[1];
    v35 = v31[2];
    v36 = v31[3];
    v31 += 4;
    *(_DWORD *)(v27 - 16) = v33;
    *(_DWORD *)(v27 - 12) = v34;
    *(_DWORD *)(v27 - 8) = v35;
    *(_DWORD *)(v27 - 4) = v36;
  }
  while ( v31 != (int *)&v44 );
  *(_DWORD *)(a1 + 64) = 0;
  result = memcpy((void *)(a1 + 72), &unk_FD730, 0x80u);
  *(_QWORD *)(a1 + 200) = 0;
  return result;
}
