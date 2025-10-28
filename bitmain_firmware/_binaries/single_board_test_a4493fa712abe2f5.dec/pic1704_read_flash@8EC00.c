int __fastcall pic1704_read_flash(char a1, void *a2, char a3, size_t a4)
{
  unsigned __int16 v5; // r7
  unsigned __int8 *v8; // r4
  int v9; // r12
  unsigned int v10; // lr
  unsigned int v11; // r2
  char *v12; // r3
  __int16 v13; // r8
  __int16 v14; // r10
  __int16 v15; // r1
  unsigned int v16; // r0
  __int16 v17; // r1
  unsigned __int16 v18; // r1
  unsigned __int8 *v19; // r3
  int v20; // r5
  size_t v22; // r2
  _BYTE v23[4]; // [sp+4h] [bp-14h] BYREF
  _DWORD v24[2]; // [sp+8h] [bp-10h] BYREF
  int v25; // [sp+10h] [bp-8h]
  _BYTE *v26; // [sp+14h] [bp-4h]

  v5 = 0;
  v24[0] = 0;
  v24[1] = 0;
  v26 = v23;
  LOWORD(v25) = 564;
  BYTE2(v25) = a4 + 5;
  HIBYTE(v25) = a1;
  v8 = (unsigned __int8 *)malloc(a4 + 5);
  v23[1] = a4;
  v23[0] = a3;
  v9 = sub_8E830(v25, (int)v23, v24, v8);
  if ( !v9 )
    goto LABEL_10;
  v10 = a4 + 3;
  if ( a4 == -3 )
  {
    v19 = v8;
    LOBYTE(v5) = 0;
  }
  else
  {
    if ( a4 - 30 > 0xFFFFFFDE )
    {
      v11 = 0;
      v16 = 0;
    }
    else
    {
      v11 = 0;
      v12 = (char *)(v8 + 34);
      do
      {
        v13 = (unsigned __int8)*(v12 - 33);
        v11 += 32;
        v14 = (unsigned __int8)*(v12 - 34);
        v15 = (unsigned __int8)*(v12 - 32);
        v16 = v11;
        __pld(v12);
        v12 += 32;
        v5 += (unsigned __int8)*(v12 - 35)
            + (unsigned __int8)*(v12 - 36)
            + (unsigned __int8)*(v12 - 38)
            + (unsigned __int8)*(v12 - 39)
            + (unsigned __int8)*(v12 - 40)
            + (unsigned __int8)*(v12 - 41)
            + (unsigned __int8)*(v12 - 42)
            + (unsigned __int8)*(v12 - 43)
            + (unsigned __int8)*(v12 - 44)
            + (unsigned __int8)*(v12 - 45)
            + (unsigned __int8)*(v12 - 46)
            + (unsigned __int8)*(v12 - 47)
            + (unsigned __int8)*(v12 - 48)
            + (unsigned __int8)*(v12 - 49)
            + (unsigned __int8)*(v12 - 50)
            + (unsigned __int8)*(v12 - 51)
            + (unsigned __int8)*(v12 - 52)
            + (unsigned __int8)*(v12 - 53)
            + (unsigned __int8)*(v12 - 54)
            + (unsigned __int8)*(v12 - 55)
            + (unsigned __int8)*(v12 - 56)
            + (unsigned __int8)*(v12 - 57)
            + (unsigned __int8)*(v12 - 58)
            + (unsigned __int8)*(v12 - 59)
            + (unsigned __int8)*(v12 - 60)
            + (unsigned __int8)*(v12 - 61)
            + (unsigned __int8)*(v12 - 62)
            + (unsigned __int8)*(v12 - 63)
            + v15
            + v14
            + v13
            + (unsigned __int8)*(v12 - 37);
      }
      while ( ((a4 - 30) & 0xFFFFFFE0) + 32 != v11 );
    }
    do
    {
      v17 = v8[v16];
      v16 = ++v11;
      v18 = v17 + v5;
      v5 = v18;
    }
    while ( v11 < v10 );
    v19 = &v8[v10];
    v10 = HIBYTE(v18);
  }
  if ( *v19 == v10 && v8[a4 + 4] == (unsigned __int8)v5 )
  {
    v22 = a4;
    v20 = v9;
    memcpy(a2, v8 + 3, v22);
  }
  else
  {
LABEL_10:
    v20 = 0;
  }
  free(v8);
  return v20;
}
