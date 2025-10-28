int sub_7AC8C()
{
  int v0; // r11
  int *v1; // r9
  int result; // r0
  int *v3; // r11
  int v4; // t1
  int *v5; // r2
  int v6; // lr
  int v7; // r7
  int v8; // r4
  int v9; // r6
  _DWORD *v10; // r1
  int v11; // r12
  int v12; // r3
  int v13; // r2
  int v14; // r8
  int *v15; // lr
  int v16; // r3
  int v17; // t1
  _DWORD *v18; // r12
  int v19; // lr
  int v20; // r3
  int v21; // r2
  int v22; // r7
  int v23; // r1
  int v24; // r2
  int *v25; // r4
  int v26; // r3
  int v27; // t1

  pthread_mutex_lock(&stru_1A9B48);
  v0 = dword_1A9B60;
  pthread_mutex_unlock(&stru_1A9B48);
  if ( v0 <= 0 )
    return 0x7FFFFFFF;
  v1 = dword_1A9B64;
  result = 0x7FFFFFFF;
  v3 = &dword_1A9B64[v0];
  do
  {
    v4 = *v1++;
    v5 = &dword_1A4178[52 * *(_DWORD *)(v4 + 132)];
    v6 = *v5;
    v7 = v5[6];
    v8 = v5[2];
    v9 = v5[7];
    if ( v7 > 0 )
    {
      if ( v7 <= 8 )
      {
        v11 = 0;
      }
      else
      {
        v10 = (_DWORD *)(v6 + 116);
        v11 = 0;
        do
        {
          v12 = *(v10 - 29);
          v11 += 8;
          v13 = *(v10 - 28);
          v14 = *(v10 - 27);
          __pld(v10);
          v10 += 8;
          if ( v12 >= v13 )
            v12 = v13;
          if ( v12 >= v14 )
            v12 = v14;
          if ( v12 >= *(v10 - 34) )
            v12 = *(v10 - 34);
          if ( v12 >= *(v10 - 33) )
            v12 = *(v10 - 33);
          if ( v12 >= *(v10 - 32) )
            v12 = *(v10 - 32);
          if ( v12 >= *(v10 - 31) )
            v12 = *(v10 - 31);
          if ( v12 >= *(v10 - 30) )
            v12 = *(v10 - 30);
          if ( result >= v12 )
            result = v12;
        }
        while ( v11 != ((v7 - 9) & 0xFFFFFFF8) + 8 );
      }
      v15 = (int *)(v6 + 4 * v11);
      do
      {
        v17 = *v15++;
        v16 = v17;
        ++v11;
        if ( result >= v17 )
          result = v16;
      }
      while ( v7 > v11 );
    }
    if ( v9 > 0 )
    {
      if ( v9 <= 8 )
      {
        v19 = 0;
      }
      else
      {
        v18 = (_DWORD *)(v8 + 116);
        v19 = 0;
        do
        {
          v20 = *(v18 - 29);
          v19 += 8;
          v21 = *(v18 - 28);
          v22 = *(v18 - 27);
          v23 = *(v18 - 26);
          __pld(v18);
          if ( v20 >= v21 )
            v20 = *(v18 - 28);
          v24 = *(v18 - 25);
          v18 += 8;
          if ( v20 >= v22 )
            v20 = v22;
          if ( v20 >= v23 )
            v20 = v23;
          if ( v20 >= v24 )
            v20 = v24;
          if ( v20 >= *(v18 - 32) )
            v20 = *(v18 - 32);
          if ( v20 >= *(v18 - 31) )
            v20 = *(v18 - 31);
          if ( v20 >= *(v18 - 30) )
            v20 = *(v18 - 30);
          if ( result >= v20 )
            result = v20;
        }
        while ( v19 != ((v9 - 9) & 0xFFFFFFF8) + 8 );
      }
      v25 = (int *)(v8 + 4 * v19);
      do
      {
        v27 = *v25++;
        v26 = v27;
        ++v19;
        if ( result >= v27 )
          result = v26;
      }
      while ( v9 > v19 );
    }
  }
  while ( v1 != v3 );
  return result;
}
