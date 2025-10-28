_BYTE *__fastcall base64_decode(_BYTE *result, int a2, int a3)
{
  int v3; // r10
  _BYTE *v6; // r6
  int v7; // r7
  int v8; // r4
  int v9; // r2
  int v10; // r5
  const char *v11; // r3
  int i; // r4
  int v13; // t1
  int v14; // r2
  const char *v15; // r1
  int j; // r3
  int v17; // t1
  int v18; // r2
  int v19; // r3
  const char *v20; // r1
  int k; // r5
  int v22; // t1
  int v23; // r5
  int v24; // r2
  const char *v25; // r1
  int m; // r3
  int v27; // t1

  v3 = a3 - 1;
  if ( a3 - 1 > 0 )
  {
    v6 = result;
    v7 = 0;
    do
    {
      if ( a3 > v7 )
      {
        v9 = *(unsigned __int8 *)(a2 + v7);
        v10 = v7 + 1;
        if ( v9 == 65 )
        {
          v8 = 0;
        }
        else
        {
          v11 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=";
          for ( i = 1; i != 65; ++i )
          {
            v13 = *(unsigned __int8 *)++v11;
            if ( v13 == v9 )
            {
              v8 = (i << 18) & 0xFC0000;
              goto LABEL_11;
            }
          }
          v8 = 16515072;
          result = (_BYTE *)printf("%s (%02x) failed!\n\n", "base64_decode_value", v9);
        }
LABEL_11:
        if ( a3 <= v10 )
          goto LABEL_38;
        v14 = *(unsigned __int8 *)(a2 + v10);
        v10 = v7 + 2;
        if ( v14 != 65 )
        {
          v15 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=";
          for ( j = 1; j != 65; ++j )
          {
            v17 = *(unsigned __int8 *)++v15;
            result = (_BYTE *)v17;
            if ( v17 == v14 )
            {
              v8 |= (j << 12) & 0x3F000;
              goto LABEL_17;
            }
          }
          v8 |= 0x3F000u;
          result = (_BYTE *)printf("%s (%02x) failed!\n\n", "base64_decode_value", v14);
        }
LABEL_17:
        if ( a3 <= v10 )
        {
LABEL_38:
          v7 = v10;
        }
        else
        {
          v18 = *(unsigned __int8 *)(a2 + v10);
          v19 = v7 + 3;
          if ( v18 == 65 )
          {
            v23 = 0;
          }
          else
          {
            v20 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=";
            for ( k = 1; k != 65; ++k )
            {
              v22 = *(unsigned __int8 *)++v20;
              result = (_BYTE *)v22;
              if ( v22 == v18 )
              {
                v23 = ((_WORD)k << 6) & 0xFC0;
                goto LABEL_23;
              }
            }
            v23 = 4032;
            result = (_BYTE *)printf("%s (%02x) failed!\n\n", "base64_decode_value", v18);
            v19 = v7 + 3;
          }
LABEL_23:
          if ( a3 > v19 )
          {
            v24 = *(unsigned __int8 *)(a2 + v19);
            v7 += 4;
            if ( v24 != 65 )
            {
              v25 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=";
              for ( m = 1; m != 65; ++m )
              {
                v27 = *(unsigned __int8 *)++v25;
                result = (_BYTE *)v27;
                if ( v27 == v24 )
                {
                  v23 |= m & 0x3F;
                  goto LABEL_30;
                }
              }
              v23 |= 0x3Fu;
              result = (_BYTE *)printf("%s (%02x) failed!\n\n", "base64_decode_value", v24);
            }
LABEL_30:
            v8 += v23;
          }
          else
          {
            v8 += v23;
            v7 = v19;
          }
        }
      }
      else
      {
        v8 = 0;
      }
      v6[2] = v8;
      *v6 = BYTE2(v8);
      v6[1] = BYTE1(v8);
      v6 += 3;
    }
    while ( v7 < v3 );
  }
  return result;
}
