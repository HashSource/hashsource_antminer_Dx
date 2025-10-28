void *__fastcall sph_jh256_addbits_and_close(int a1, int a2, unsigned int a3, int *a4)
{
  int v4; // r5
  int v5; // r8
  int v8; // r10
  int v10; // r3
  size_t v11; // r2
  int v12; // r3
  size_t v13; // r2
  int v14; // r1
  bool v15; // r8
  __int64 v16; // r0
  __int64 v17; // r6
  char *v18; // lr
  int v19; // r2
  int v20; // r3
  int v21; // r0
  int v22; // r10
  int v23; // r1
  int v24; // r12
  int v25; // r8
  unsigned __int16 v26; // lr
  int v27; // r12
  int v28; // r3
  int v29; // r2
  int v30; // r1
  int v31; // r1
  int v32; // r2
  int v33; // r3
  void *result; // r0
  int v35; // [sp+0h] [bp-94h]
  int v36; // [sp+8h] [bp-8Ch]
  unsigned int v37; // [sp+Ch] [bp-88h]
  char v38[32]; // [sp+10h] [bp-84h] BYREF
  int v39; // [sp+30h] [bp-64h]
  int v40; // [sp+34h] [bp-60h]
  int v41; // [sp+38h] [bp-5Ch]
  int v42; // [sp+40h] [bp-54h]
  int v43; // [sp+44h] [bp-50h]
  int v44; // [sp+48h] [bp-4Ch]
  int v45; // [sp+4Ch] [bp-48h]

  v8 = *(_DWORD *)(a1 + 64);
  v10 = (unsigned __int8)(128 >> a3);
  v11 = -v10;
  v12 = v10 | a2 & -v10;
  if ( a3 | v8 )
    v11 = 111 - v8;
  v38[0] = v12;
  if ( a3 | v8 )
    v12 = 112 - v8;
  else
    v11 = 47;
  if ( a3 | v8 )
    v4 = 120 - v8;
  else
    v12 = 48;
  if ( a3 | v8 )
    v5 = 128 - v8;
  else
    v4 = 56;
  if ( !(a3 | v8) )
    v5 = 64;
  v36 = v12;
  memset(&v38[1], 0, v11);
  v13 = v5;
  v14 = *(_DWORD *)(a1 + 204);
  v15 = v14 < 0;
  v37 = (unsigned int)v14 >> 23;
  v16 = (*(_QWORD *)(a1 + 200) << 9) + a3;
  v17 = v16 + (unsigned int)(8 * v8);
  v18 = &v38[v36];
  *(_DWORD *)&v38[v36] = 0;
  v18[6] = v15;
  v18[4] = 0;
  v18[5] = 0;
  v18[7] = v37;
  *(_DWORD *)&v38[v4] = HIBYTE(v17)
                      | (unsigned __int16)(BYTE6(v17) << 8)
                      | (BYTE5(v17) << 16) & 0xFFFFFF
                      | (BYTE4(v17) << 24);
  *(_DWORD *)&v38[v4 + 4] = ((unsigned int)(v16 + 8 * v8) >> 24)
                          | (unsigned __int16)(BYTE2(v17) << 8)
                          | (BYTE1(v17) << 16) & 0xFFFFFF
                          | ((unsigned __int8)v17 << 24);
  sph_jh512_0(a1, v38, v13);
  v19 = *(_DWORD *)(a1 + 172);
  v20 = *(_DWORD *)(a1 + 176);
  v21 = *(_DWORD *)(a1 + 184);
  v22 = *(_DWORD *)(a1 + 180);
  v23 = *(_DWORD *)(a1 + 188);
  v39 = (unsigned __int8)*(_DWORD *)(a1 + 168)
      | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 168)) << 8)
      | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 168)) << 16) & 0xFFFFFF
      | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 168)) << 24);
  v40 = (unsigned __int8)v19 | (unsigned __int16)(BYTE1(v19) << 8) | (BYTE2(v19) << 16) & 0xFFFFFF | (HIBYTE(v19) << 24);
  v24 = *(_DWORD *)(a1 + 192);
  v25 = (unsigned __int16)v20 | (BYTE2(v20) << 16) & 0xFFFFFF | (HIBYTE(v20) << 24);
  v41 = v25;
  v26 = v24;
  v27 = (unsigned __int8)*(_DWORD *)(a1 + 196)
      | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 196)) << 8)
      | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 196)) << 16);
  v35 = HIWORD(*(_DWORD *)(a1 + 192));
  v28 = *(_DWORD *)(a1 + 196);
  v29 = *(_DWORD *)(a1 + 192);
  v42 = (unsigned __int16)((unsigned __int8)v21 | (BYTE1(v21) << 8))
      | (BYTE2(v21) << 16) & 0xFFFFFF
      | (HIBYTE(v21) << 24);
  v43 = (unsigned __int16)((unsigned __int8)v23 | (BYTE1(v23) << 8))
      | (BYTE2(v23) << 16) & 0xFFFFFF
      | (HIBYTE(v23) << 24);
  v44 = v26 | ((unsigned __int8)v35 << 16) & 0xFFFFFF | (HIBYTE(v29) << 24);
  v45 = v27 & 0xFFFFFF | (HIBYTE(v28) << 24);
  v30 = v40;
  *a4 = v39;
  a4[1] = v30;
  a4[2] = v25;
  a4[3] = (unsigned __int8)v22
        | (unsigned __int16)(BYTE1(v22) << 8)
        | (BYTE2(v22) << 16) & 0xFFFFFF
        | (HIBYTE(v22) << 24);
  v31 = v43;
  v32 = v44;
  v33 = v45;
  a4[4] = v42;
  a4[5] = v31;
  a4[6] = v32;
  a4[7] = v33;
  *(_DWORD *)(a1 + 64) = 0;
  result = memcpy((void *)(a1 + 72), &unk_17A998, 0x80u);
  *(_QWORD *)(a1 + 200) = 0;
  return result;
}
