float *__fastcall find_min_and_max_float(float *result, int a2, float *a3, float *a4)
{
  float v4; // s13
  float v5; // s12
  float *v6; // r12
  int v7; // lr
  float v8; // s15
  float v9; // s5
  float v10; // s6
  float v11; // s7
  float v12; // s8
  float v13; // s14
  float v14; // s9
  float v15; // s10
  float v16; // s11
  float v17; // s15

  if ( a2 <= 0 )
  {
    *a3 = INFINITY;
    *a4 = -INFINITY;
  }
  else
  {
    if ( a2 <= 8 )
    {
      v4 = -INFINITY;
      v7 = 0;
      v5 = INFINITY;
    }
    else
    {
      v4 = -INFINITY;
      v5 = INFINITY;
      v6 = result + 25;
      v7 = 0;
      do
      {
        v8 = *(v6 - 25);
        v7 += 8;
        v9 = *(v6 - 24);
        v10 = *(v6 - 23);
        v11 = *(v6 - 22);
        v12 = *(v6 - 21);
        if ( v8 <= v9 )
          v13 = *(v6 - 25);
        else
          v13 = *(v6 - 24);
        if ( v13 > v10 )
          v13 = *(v6 - 23);
        v14 = *(v6 - 20);
        if ( v13 > v11 )
          v13 = *(v6 - 22);
        v15 = *(v6 - 19);
        if ( v13 > v12 )
          v13 = *(v6 - 21);
        v16 = *(v6 - 18);
        if ( v13 > v14 )
          v13 = *(v6 - 20);
        if ( v13 > v15 )
          v13 = *(v6 - 19);
        if ( v13 > v16 )
          v13 = *(v6 - 18);
        if ( v5 > v13 )
          v5 = v13;
        if ( v8 < v9 )
          v8 = *(v6 - 24);
        if ( v8 < v10 )
          v8 = *(v6 - 23);
        if ( v8 < v11 )
          v8 = *(v6 - 22);
        if ( v8 < v12 )
          v8 = *(v6 - 21);
        if ( v8 < v14 )
          v8 = *(v6 - 20);
        if ( v8 < v15 )
          v8 = *(v6 - 19);
        if ( v8 < v16 )
          v8 = *(v6 - 18);
        if ( v4 < v8 )
          v4 = v8;
        __pld(v6);
        v6 += 8;
      }
      while ( v7 != ((a2 - 9) & 0xFFFFFFF8) + 8 );
    }
    result += v7;
    do
    {
      v17 = *result++;
      ++v7;
      if ( v5 > v17 )
        v5 = v17;
      if ( v4 < v17 )
        v4 = v17;
    }
    while ( a2 > v7 );
    *a3 = v5;
    *a4 = v4;
  }
  return result;
}
