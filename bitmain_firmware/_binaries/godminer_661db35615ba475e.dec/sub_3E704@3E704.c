int __fastcall sub_3E704(int result, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
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
  unsigned __int64 v18; // kr20_8
  int v19; // r12
  unsigned int v20; // lr
  unsigned int v21; // r2
  unsigned int v22; // r7
  int v23; // r2
  int v24; // lr
  unsigned __int64 v25; // kr28_8
  unsigned int v26; // r8
  unsigned int v27; // r7
  int v28; // r2
  int v29; // lr
  unsigned int v30; // r8
  int v31; // r4
  int v32; // r6

  v8 = 8 * a4;
  v9 = result + 8 * a4;
  v10 = 8 * a3;
  v11 = (a5 ^ a7) + *(_QWORD *)result + *(_QWORD *)(result + 8 * a2);
  *(_QWORD *)result = v11;
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
  v18 = (a8 ^ a6) + *(_QWORD *)result + __PAIR64__(v17, v16);
  v19 = result + v10;
  *(_QWORD *)result = v18;
  v20 = HIDWORD(v18) ^ *(_DWORD *)(v9 + 4);
  v21 = v18 ^ *(_DWORD *)v9;
  v22 = v21 >> 5;
  v23 = (v20 >> 5) | (v21 << 27);
  v24 = v22 | (v20 << 27);
  *(_DWORD *)(result + v8) = v24;
  *(_DWORD *)(v9 + 4) = v23;
  v25 = __PAIR64__(v23, v24) + *(_QWORD *)(result + v10);
  *(_QWORD *)(result + v10) = v25;
  v26 = (__int64)(*(_QWORD *)v12 ^ v25) >> 18;
  v27 = ((HIDWORD(v25) ^ v12[1]) >> 18) | ((*v12 ^ (unsigned int)v25) << 14);
  *v12 = v26;
  v12[1] = v27;
  v28 = (~(*(_DWORD *)result | *(_DWORD *)(result + 8 * a3) | v26)
       | *(_DWORD *)result & *(_DWORD *)(result + 8 * a3) & ~v26
       | (*(_DWORD *)result ^ *(_DWORD *)(result + 8 * a3)) & v26)
      ^ *(_DWORD *)v9;
  v29 = (~(*(_DWORD *)(result + 4) | *(_DWORD *)(v19 + 4) | v27)
       | *(_DWORD *)(result + 4) & *(_DWORD *)(v19 + 4) & ~v27
       | (*(_DWORD *)(result + 4) ^ *(_DWORD *)(v19 + 4)) & v27)
      ^ *(_DWORD *)(v9 + 4);
  *(_DWORD *)v9 = v28;
  *(_DWORD *)(v9 + 4) = v29;
  v30 = v12[1];
  v31 = *(_DWORD *)(result + 4);
  v32 = *(_DWORD *)(v19 + 4);
  *(_DWORD *)v9 = v28
                ^ (*(_DWORD *)(result + 8 * a3)
                 & ~((*(_DWORD *)result | *v12) ^ *v12 & ~*(_DWORD *)result)
                 ^ *v12
                 & ~*(_DWORD *)result
                 | *(_DWORD *)result & ~(*(_DWORD *)(result + 8 * a3) ^ *v12));
  *(_DWORD *)(v9 + 4) = v29 ^ (v30 & ~v31 ^ v32 & ~((v31 | v30) ^ v30 & ~v31) | v31 & ~(v32 ^ v30));
  return result;
}
