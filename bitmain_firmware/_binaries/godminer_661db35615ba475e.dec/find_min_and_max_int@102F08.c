int *__fastcall find_min_and_max_int(int *result, int a2, int *a3, int *a4)
{
  int v4; // r9
  int v5; // r10
  int *v6; // r8
  unsigned int v7; // r7
  int v8; // r11
  int v9; // r3
  int v10; // r6
  int v11; // r5
  int v12; // r4
  int v13; // lr
  int v14; // r2
  int v15; // r12
  int v16; // r0
  int v17; // r1
  int *v18; // r3
  int v19; // r3
  int v20; // t1
  int *v23; // [sp+8h] [bp-Ch]
  int v24; // [sp+Ch] [bp-8h]

  v23 = result;
  if ( a2 > 0 )
  {
    v4 = *result;
    if ( a2 == 1 )
    {
      v5 = *result;
    }
    else
    {
      if ( a2 <= 9 )
      {
        v5 = *result;
        v8 = 1;
        v18 = result;
      }
      else
      {
        v6 = result + 26;
        v5 = *result;
        v7 = ((a2 - 10) & 0xFFFFFFF8) + 9;
        v8 = 1;
        v24 = a2;
        do
        {
          v9 = *(v6 - 25);
          v8 += 8;
          v10 = *(v6 - 24);
          v11 = *(v6 - 23);
          v12 = *(v6 - 22);
          v13 = *(v6 - 21);
          if ( v9 < v10 )
            v14 = *(v6 - 25);
          else
            v14 = *(v6 - 24);
          v15 = *(v6 - 20);
          if ( v14 >= v11 )
            v14 = *(v6 - 23);
          v16 = *(v6 - 19);
          v17 = *(v6 - 18);
          if ( v14 >= v12 )
            v14 = *(v6 - 22);
          __pld(v6);
          v6 += 8;
          if ( v14 >= v13 )
            v14 = v13;
          if ( v14 >= v15 )
            v14 = v15;
          if ( v14 >= v16 )
            v14 = v16;
          if ( v14 >= v17 )
            v14 = v17;
          if ( v4 >= v14 )
            v4 = v14;
          if ( v9 < v10 )
            v9 = v10;
          if ( v9 >= v11 )
            v11 = v9;
          if ( v11 >= v12 )
            v12 = v11;
          if ( v12 >= v13 )
            v13 = v12;
          if ( v13 >= v15 )
            v15 = v13;
          if ( v15 >= v16 )
            v16 = v15;
          if ( v16 >= v17 )
            v17 = v16;
          if ( v5 < v17 )
            v5 = v17;
        }
        while ( v8 != v7 );
        a2 = v24;
        v18 = v23;
      }
      result = &v18[v8];
      do
      {
        v20 = *result++;
        v19 = v20;
        ++v8;
        if ( v4 >= v20 )
          v4 = v19;
        if ( v5 < v19 )
          v5 = v19;
      }
      while ( a2 > v8 );
    }
    *a3 = v4;
    *a4 = v5;
  }
  return result;
}
