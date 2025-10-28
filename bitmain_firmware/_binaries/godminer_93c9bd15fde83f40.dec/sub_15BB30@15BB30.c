_BYTE *__fastcall sub_15BB30(_DWORD *a1)
{
  _DWORD *v1; // lr
  int v2; // r5
  int v4; // r1
  int v5; // r2
  int v6; // r3
  _BYTE *result; // r0
  int v8; // r5
  int v9; // r6
  int v10; // r1
  _BYTE *v11; // lr
  int v12; // r3
  bool v13; // zf
  int v14; // r2
  int v15; // r5
  int v16; // t1
  bool v17; // zf
  int v18; // r2
  int v19; // r1
  int v20; // r2
  int v21; // r3

  v1 = a1 + 6;
  v2 = a1[10];
  v4 = a1[7];
  v5 = a1[8];
  v6 = a1[9];
  a1[2] = a1[6];
  a1[3] = v4;
  a1[4] = v5;
  a1[5] = v6;
  if ( v2 )
  {
    result = (_BYTE *)a1[10];
    v19 = a1[11];
    v20 = a1[12];
    v21 = a1[13];
    *v1 = result;
    v1[1] = v19;
    v1[2] = v20;
    v1[3] = v21;
    a1[10] = 0;
  }
  else
  {
    result = (_BYTE *)a1[1];
    if ( *((_BYTE *)a1 + 36) || *result )
    {
      v8 = a1[18];
      v9 = a1[16];
      v10 = a1[17] + 1;
      v11 = (_BYTE *)(v8 + 1);
      a1[17] = v10;
      a1[18] = v8 + 1;
      v12 = (unsigned __int8)*result;
      v13 = v12 == 32;
      if ( v12 != 32 )
        v13 = v12 == 44;
      v14 = v13;
      if ( v12 == 58 )
        v14 |= 1u;
      if ( (unsigned int)(v12 - 9) <= 1 )
        v14 |= 1u;
      if ( v14 )
      {
        v15 = v8 + 2 - (_DWORD)result;
        do
        {
          ++v10;
          if ( v12 == 10 )
          {
            ++v9;
            v10 = 1;
          }
          v11 = &result[v15];
          if ( v12 == 10 )
            a1[16] = v9;
          a1[17] = v10;
          a1[18] = v11;
          v16 = (unsigned __int8)*++result;
          v12 = v16;
          v17 = v16 == 44;
          if ( v16 != 44 )
            v17 = v12 == 32;
          v18 = v17;
          if ( v12 == 58 )
            v18 |= 1u;
          if ( (unsigned int)(v12 - 9) <= 1 )
            v18 |= 1u;
        }
        while ( v18 );
      }
      *((_BYTE *)a1 + 36) = v12;
      a1[6] = v9;
      a1[7] = v10;
      a1[8] = v11;
      if ( *result )
        ++result;
      a1[1] = result;
    }
  }
  return result;
}
