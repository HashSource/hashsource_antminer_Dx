int __fastcall sub_89B9C(int result, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  int v8; // r5
  int v9; // r10
  int v10; // r4
  __int64 v11; // kr10_8
  unsigned int *v12; // r11
  unsigned int v13; // r2
  unsigned int v14; // r12
  unsigned __int64 v15; // kr18_8
  unsigned int v16; // r8
  unsigned int v17; // r12
  __int64 v18; // kr20_8
  unsigned __int64 v19; // kr28_8
  int v20; // r12
  unsigned int v21; // lr
  unsigned int v22; // r2
  unsigned int v23; // r7
  int v24; // r2
  int v25; // lr
  unsigned __int64 v26; // kr30_8
  unsigned int v27; // r8
  unsigned int v28; // r7
  int v29; // r2
  int v30; // lr
  unsigned int v31; // r9
  unsigned int v32; // r8
  int v33; // r4
  int v34; // r6

  v8 = 8 * a4;
  v9 = result + 8 * a4;
  v10 = 8 * a3;
  v11 = (a5 ^ a7) + *(_QWORD *)(result + 8) + *(_QWORD *)(result + 8 * a2);
  *(_QWORD *)(result + 8) = v11;
  v12 = (unsigned int *)(result + 8 * a2);
  v13 = (v11 ^ *(_QWORD *)v9) >> 28;
  v14 = (16 * (v11 ^ *(_DWORD *)v9)) | ((unsigned int)(HIDWORD(v11) ^ *(_DWORD *)(v9 + 4)) >> 28);
  *(_DWORD *)(result + v8) = v14;
  *(_DWORD *)(v9 + 4) = v13;
  v15 = __PAIR64__(v13, v14) + *(_QWORD *)(result + v10);
  *(_QWORD *)(result + v10) = v15;
  v16 = (((unsigned int)v15 ^ *v12) << 21) | ((HIDWORD(v15) ^ v12[1]) >> 11);
  v17 = (__int64)(v15 ^ *(_QWORD *)v12) >> 11;
  *v12 = v16;
  v12[1] = v17;
  v18 = (a8 ^ a6) + *(_QWORD *)(result + 8);
  *(_DWORD *)(result + 8) = v18 + v16;
  v19 = v18 + __PAIR64__(v17, v16);
  v20 = result + v10;
  *(_DWORD *)(result + 12) = HIDWORD(v19);
  v21 = HIDWORD(v19) ^ *(_DWORD *)(v9 + 4);
  v22 = v19 ^ *(_DWORD *)v9;
  v23 = v22 >> 5;
  v24 = (v21 >> 5) | (v22 << 27);
  v25 = v23 | (v21 << 27);
  *(_DWORD *)(result + v8) = v25;
  *(_DWORD *)(v9 + 4) = v24;
  v26 = __PAIR64__(v24, v25) + *(_QWORD *)(result + v10);
  *(_QWORD *)(result + v10) = v26;
  v27 = (__int64)(*(_QWORD *)v12 ^ v26) >> 18;
  v28 = ((HIDWORD(v26) ^ v12[1]) >> 18) | ((*v12 ^ (unsigned int)v26) << 14);
  *v12 = v27;
  v12[1] = v28;
  v29 = (~(*(_DWORD *)(result + 8) | *(_DWORD *)(result + 8 * a3) | v27)
       | *(_DWORD *)(result + 8) & *(_DWORD *)(result + 8 * a3) & ~v27
       | (*(_DWORD *)(result + 8) ^ *(_DWORD *)(result + 8 * a3)) & v27)
      ^ *(_DWORD *)v9;
  v30 = (~(*(_DWORD *)(result + 12) | *(_DWORD *)(v20 + 4) | v28)
       | *(_DWORD *)(result + 12) & *(_DWORD *)(v20 + 4) & ~v28
       | (*(_DWORD *)(result + 12) ^ *(_DWORD *)(v20 + 4)) & v28)
      ^ *(_DWORD *)(v9 + 4);
  *(_DWORD *)v9 = v29;
  *(_DWORD *)(v9 + 4) = v30;
  v31 = *v12;
  v32 = v12[1];
  v33 = *(_DWORD *)(result + 12);
  v34 = *(_DWORD *)(v20 + 4);
  *(_DWORD *)v9 = v29
                ^ (*(_DWORD *)(result + 8 * a3)
                 & ~((*(_DWORD *)(result + 8) | v31) ^ v31 & ~*(_DWORD *)(result + 8))
                 ^ v31
                 & ~*(_DWORD *)(result + 8)
                 | *(_DWORD *)(result + 8) & ~(*(_DWORD *)(result + 8 * a3) ^ v31));
  *(_DWORD *)(v9 + 4) = v30 ^ (v32 & ~v33 ^ v34 & ~((v33 | v32) ^ v32 & ~v33) | v33 & ~(v34 ^ v32));
  return result;
}
