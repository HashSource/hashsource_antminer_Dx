__int64 __fastcall update_pool_diff1_of_all_runtimes(int *a1)
{
  int v2; // r6
  int v3; // r10
  _DWORD *v4; // r5
  int v5; // r8
  int v6; // r4
  unsigned int v7; // r3
  unsigned int v8; // r12
  unsigned int *v9; // r1
  unsigned int v10; // r11
  unsigned int v11; // kr0C_4
  int v12; // r1
  unsigned int *v13; // lr
  unsigned int v14; // r2
  unsigned __int64 v15; // kr28_8
  unsigned int v16; // lr
  unsigned int *v17; // r11
  unsigned int v18; // r0
  unsigned int v19; // kr10_4
  unsigned int v20; // r11
  unsigned int v21; // r2
  unsigned int v22; // r1
  unsigned __int64 v23; // kr30_8
  int v24; // r2
  int *v25; // r0
  int v26; // t1
  unsigned __int64 v27; // kr38_8
  _BYTE *v28; // r10
  __int64 v29; // kr40_8
  unsigned int v30; // r2
  int v31; // lr
  bool v32; // cf
  unsigned int v33; // r2
  int v34; // r3
  unsigned int v35; // lr
  int v36; // r12
  __int64 result; // r0

  pthread_mutex_lock(&stru_1A9B48);
  v2 = dword_1A9B60;
  pthread_mutex_unlock(&stru_1A9B48);
  if ( v2 <= 0 )
  {
    v7 = 0;
    v3 = *a1;
    v8 = 0;
  }
  else
  {
    v3 = *a1;
    if ( v2 <= 8 )
    {
      v5 = 0;
      v24 = v3 + 46;
      v7 = 0;
      v8 = 0;
    }
    else
    {
      v4 = &unk_1A9BC0;
      v5 = 0;
      v6 = 8 * (v3 + 46);
      v7 = 0;
      v8 = 0;
      do
      {
        v5 += 8;
        v9 = (unsigned int *)(*(v4 - 19) + v6);
        v10 = v9[1];
        v11 = *v9;
        v12 = *(v4 - 16);
        v13 = (unsigned int *)(*(v4 - 18) + v6);
        v14 = *v13;
        v15 = __PAIR64__(v8, v7)
            + *(_QWORD *)(*(v4 - 23) + v6)
            + *(_QWORD *)(*(v4 - 22) + v6)
            + *(_QWORD *)(*(v4 - 21) + v6)
            + *(_QWORD *)(*(v4 - 20) + v6)
            + __PAIR64__(v10, v11);
        v16 = v13[1];
        v17 = (unsigned int *)(*(v4 - 17) + v6);
        v18 = *v17;
        v19 = v14;
        v20 = v17[1];
        v21 = *(_DWORD *)(v12 + v6);
        v22 = *(_DWORD *)(v12 + v6 + 4);
        __pld(v4);
        v23 = v15 + __PAIR64__(v16, v19) + __PAIR64__(v20, v18) + __PAIR64__(v22, v21);
        v8 = HIDWORD(v23);
        v7 = v23;
        v4 += 8;
      }
      while ( v5 != ((v2 - 9) & 0xFFFFFFF8) + 8 );
      v24 = v3 + 46;
    }
    v25 = &dword_1A9B64[v5];
    do
    {
      v26 = *v25++;
      ++v5;
      v27 = __PAIR64__(v8, v7) + *(_QWORD *)(v26 + 8 * v24);
      v8 = HIDWORD(v27);
      v7 = v27;
    }
    while ( v2 > v5 );
  }
  HIDWORD(result) = &total_diff1;
  v28 = &byte_1AA708[8 * v3];
  v29 = total_diff1;
  v30 = *((_DWORD *)v28 + 2);
  v31 = *((_DWORD *)v28 + 3);
  *((_DWORD *)v28 + 2) = v7;
  v32 = v7 >= v30;
  v33 = v7 - v30;
  v34 = a1[340];
  v35 = v8 - (v31 + !v32);
  *((_DWORD *)v28 + 3) = v8;
  v36 = a1[341];
  LODWORD(result) = v29 + v33;
  total_diff1 = v29 + __PAIR64__(v35, v33);
  a1[340] = v34 + v33;
  a1[341] = v35 + __CFADD__(v34, v33) + v36;
  return result;
}
