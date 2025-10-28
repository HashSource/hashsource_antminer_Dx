int __fastcall s2hex(char *a1, unsigned __int8 *a2, int a3)
{
  bool v3; // cc
  int v4; // r4
  int v7; // r8
  int v8; // r3
  const char *v9; // r2
  unsigned __int8 *v10; // r9
  unsigned __int8 *v11; // r5
  char *v12; // r7
  int v13; // r1
  int v14; // r6
  char v15; // r4
  int v16; // r0
  char v17; // r6
  int v18; // r1
  int v20; // r1
  char *v21; // r11
  int v22; // r2
  char v23; // r4
  int v24; // [sp+0h] [bp-Ch]
  const char *v25; // [sp+0h] [bp-Ch]
  const char *v26; // [sp+0h] [bp-Ch]
  int v27; // [sp+0h] [bp-Ch]
  int v28; // [sp+4h] [bp-8h]
  int v29; // [sp+4h] [bp-8h]

  v3 = (int)a1 <= 0;
  if ( a1 )
    v3 = a3 <= 0;
  v4 = v3;
  if ( !a2 )
    v4 = 1;
  if ( v4 )
  {
    printf("s2hex para error dst(%p), src(%p), inlen(%d)\n", a1, a2, a3);
    return -1;
  }
  else
  {
    v7 = a3 >> 1;
    v8 = a3 & 1;
    if ( a3 >> 1 )
    {
      v9 = "input value error: %c\n";
      v10 = &a2[2 * v7];
      v11 = a2;
      v12 = a1 - 1;
      do
      {
        while ( 1 )
        {
          v13 = *v11;
          v14 = v11[1];
          if ( (unsigned int)(v13 - 48) > 9 )
          {
            v16 = v13 & 0xDF;
            switch ( v16 )
            {
              case 'A':
                v15 = -96;
                break;
              case 'B':
                v15 = -80;
                break;
              case 'C':
                v15 = -64;
                break;
              case 'D':
                v15 = -48;
                break;
              case 'E':
                v15 = -32;
                break;
              case 'F':
                v15 = -16;
                break;
              default:
                v28 = v8;
                v25 = v9;
                v15 = -16;
                printf(v9);
                v9 = v25;
                v8 = v28;
                break;
            }
          }
          else
          {
            v15 = 16 * (v13 & 0xF);
          }
          if ( (unsigned int)(v14 - 48) > 9 )
            break;
          v17 = v14 & 0xF;
LABEL_41:
          v11 += 2;
          *++v12 = v17 ^ v15;
          if ( v11 == v10 )
            goto LABEL_42;
        }
        v18 = v14 & 0xDF;
        switch ( v18 )
        {
          case 'A':
            v17 = 10;
            goto LABEL_41;
          case 'B':
            v17 = 11;
            goto LABEL_41;
          case 'C':
            v17 = 12;
            goto LABEL_41;
          case 'D':
            v17 = 13;
            goto LABEL_41;
          case 'E':
            v17 = 14;
            goto LABEL_41;
          case 'F':
            v17 = 15;
            goto LABEL_41;
        }
        v11 += 2;
        v29 = v8;
        v26 = v9;
        printf(v9, v14);
        v9 = v26;
        v8 = v29;
        *++v12 = ~v15;
      }
      while ( v11 != v10 );
    }
LABEL_42:
    if ( v8 )
    {
      v20 = a2[2 * v7];
      v21 = &a1[v7];
      if ( (unsigned int)(v20 - 48) <= 9 )
      {
        v23 = ~(16 * (v20 & 0xF));
      }
      else
      {
        v22 = v20 & 0xDF;
        switch ( v22 )
        {
          case 'A':
            v23 = 95;
            break;
          case 'B':
            v23 = 79;
            break;
          case 'C':
            v23 = 63;
            break;
          case 'D':
            v23 = 47;
            break;
          case 'E':
            v23 = 31;
            break;
          case 'F':
            v23 = 15;
            break;
          default:
            v24 = v8;
            v23 = 15;
            printf("input value error: %c\n", v20);
            v8 = v24;
            break;
        }
      }
      v27 = v8;
      printf("input value error: %c\n", 0);
      *v21 = v23;
      v8 = v27;
    }
    return v7 + v8;
  }
}
