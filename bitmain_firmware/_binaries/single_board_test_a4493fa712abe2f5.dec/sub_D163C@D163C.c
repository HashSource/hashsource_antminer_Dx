int __fastcall sub_D163C(int result, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  unsigned int *v8; // r7
  int *v10; // r6
  int v11; // r12
  __int64 v12; // r4
  __int64 v13; // kr08_8
  __int64 v14; // r4
  unsigned int v15; // r8
  unsigned int v16; // r9
  int v17; // r9
  unsigned __int64 v18; // kr10_8
  unsigned int v19; // r9
  unsigned __int64 v20; // kr18_8
  __int64 v21; // r4
  int v22; // r10
  int v23; // r2
  unsigned __int64 v24; // kr20_8
  unsigned int v25; // r2
  int v26; // r10
  int v27; // r1
  int v28; // r9
  int v29; // r11
  int v30; // r10
  int v31; // r8
  int v32; // r2
  unsigned int v33; // r9
  int v34; // r12
  int v35; // r8
  int v36; // r10
  int v37; // r12

  v8 = (unsigned int *)(result + 8 * a2);
  v10 = (int *)(result + 8 * a4);
  v11 = result + 8 * a3;
  HIDWORD(v12) = v8[1];
  v13 = (a5 ^ a7) + *(_QWORD *)result;
  LODWORD(v12) = v13;
  v14 = v12 + __PAIR64__(HIDWORD(v13), *v8);
  *(_QWORD *)result = v14;
  v15 = HIDWORD(v14) ^ v10[1];
  v16 = v14 ^ *v10;
  LODWORD(v14) = 16 * v16;
  v17 = (16 * v15) | (v16 >> 28);
  LODWORD(v14) = v14 | (v15 >> 28);
  *v10 = v14;
  v10[1] = v17;
  v18 = __PAIR64__(v17, v14) + *(_QWORD *)v11;
  *(_QWORD *)v11 = v18;
  LODWORD(v14) = (__int64)(v18 ^ *(_QWORD *)v8) >> 11;
  v19 = (((unsigned int)v18 ^ *v8) << 21) | ((HIDWORD(v18) ^ v8[1]) >> 11);
  *v8 = v19;
  v8[1] = v14;
  v20 = (a6 ^ a8) + *(_QWORD *)result + __PAIR64__(v14, v19);
  *(_QWORD *)result = v20;
  v21 = *(_QWORD *)v10 ^ v20;
  v22 = (HIDWORD(v21) >> 5) | ((_DWORD)v21 << 27);
  v23 = v21 >> 5;
  *v10 = v23;
  v10[1] = v22;
  v24 = __PAIR64__(v22, v23) + *(_QWORD *)v11;
  *(_QWORD *)v11 = v24;
  LODWORD(v21) = (__int64)(v24 ^ *(_QWORD *)v8) >> 18;
  v25 = ((HIDWORD(v24) ^ v8[1]) >> 18) | (((unsigned int)v24 ^ *v8) << 14);
  *v8 = v21;
  v8[1] = v25;
  v26 = *(_DWORD *)(result + 8 * a3);
  v27 = *(_DWORD *)(v11 + 4);
  v28 = *(_DWORD *)(result + 4);
  HIDWORD(v21) = *(_DWORD *)result & v26 & ~(_DWORD)v21 | ~(*(_DWORD *)result | v26 | v21);
  v29 = v28 | v27 | v25;
  v30 = (*(_DWORD *)result ^ v26) & v21;
  v31 = v28 & v27 & ~v25;
  LODWORD(v21) = (v28 ^ v27) & v25;
  HIDWORD(v21) = (HIDWORD(v21) | v30) ^ *v10;
  v32 = v10[1];
  *v10 = HIDWORD(v21);
  LODWORD(v21) = (v31 | ~v29 | v21) ^ v32;
  v10[1] = v21;
  v33 = v8[1];
  v34 = *(_DWORD *)(v11 + 4);
  v35 = *(_DWORD *)(result + 8 * a2);
  v36 = v34 & ~((*(_DWORD *)(result + 4) | v33) ^ v33 & ~*(_DWORD *)(result + 4)) ^ v33 & ~*(_DWORD *)(result + 4);
  v37 = *(_DWORD *)(result + 4) & ~(v34 ^ v33);
  *v10 = (*(_DWORD *)(result + 8 * a3)
        & ~((*(_DWORD *)result | v35) ^ v35 & ~*(_DWORD *)result)
        ^ v35
        & ~*(_DWORD *)result
        | *(_DWORD *)result & ~(*(_DWORD *)(result + 8 * a3) ^ v35))
       ^ HIDWORD(v21);
  v10[1] = (v36 | v37) ^ v21;
  return result;
}
