int *__fastcall sub_BB510(int *result, int *a2, unsigned int a3)
{
  int *v3; // r5
  __int64 v4; // kr00_8
  int v5; // r6
  __int64 v6; // kr08_8
  __int64 v7; // kr10_8
  size_t v8; // r6
  char *v10; // r0
  int v11; // r9
  int v12; // r7
  int v13; // r1
  int v14; // r6
  int v15; // r3
  char *v16; // r7
  char *v17; // r0

  v3 = result;
  v4 = *(_QWORD *)(a2 + 1);
  v5 = *a2;
  v6 = *(_QWORD *)(a2 + 3);
  if ( a3 >= HIDWORD(v4) )
    a3 = a2[2];
  v7 = *(_QWORD *)(a2 + 5);
  if ( a3 > (unsigned int)v4 )
  {
    v8 = v5 + a3;
    v10 = (char *)malloc(v8);
    v11 = (int)v10;
    if ( (unsigned int)v7 >= HIDWORD(v7) )
    {
      v16 = &v10[HIDWORD(v6) - v7];
      memcpy(v10, (const void *)v7, HIDWORD(v6) - v7);
      v17 = v16;
      v12 = (int)&v16[HIDWORD(v7) - v6];
      memcpy(v17, (const void *)v6, HIDWORD(v7) - v6);
    }
    else
    {
      v12 = (int)&v10[HIDWORD(v7) - v7];
      memcpy(v10, (const void *)v7, HIDWORD(v7) - v7);
    }
    a2[6] = v12;
    free((void *)v6);
    v13 = a2[6];
    v14 = v8 + v11;
    v15 = *a2;
    a2[4] = v14;
    v3[1] = v14;
    a2[3] = v11;
    a2[5] = v11;
    *v3 = v11;
    v3[2] = v11;
    v3[3] = v13;
    v3[4] = v15;
    return v3;
  }
  else
  {
    *(_QWORD *)result = v6;
    *((_QWORD *)result + 1) = v7;
    result[4] = v5;
  }
  return result;
}
