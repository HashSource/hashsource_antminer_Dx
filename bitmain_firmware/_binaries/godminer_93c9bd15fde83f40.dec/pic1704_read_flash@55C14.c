int __fastcall pic1704_read_flash(char a1, void *a2, char a3, size_t a4)
{
  unsigned __int8 *v7; // r4
  int v8; // lr
  unsigned int v9; // r7
  unsigned int v10; // r2
  unsigned __int16 v11; // r12
  char *v12; // r3
  __int16 v13; // r0
  __int16 v14; // r1
  __int16 v15; // r8
  __int16 v16; // r10
  __int16 v17; // r8
  unsigned int v18; // r0
  __int16 v19; // r1
  unsigned __int16 v20; // r1
  unsigned __int8 *v21; // r3
  int v22; // r5
  size_t v24; // r2
  _BYTE v25[4]; // [sp+4h] [bp-14h] BYREF
  _DWORD v26[2]; // [sp+8h] [bp-10h] BYREF
  int v27; // [sp+10h] [bp-8h]
  _BYTE *v28; // [sp+14h] [bp-4h]

  v26[1] = 0;
  v26[0] = 0;
  v28 = v25;
  LOWORD(v27) = 564;
  BYTE2(v27) = a4 + 5;
  HIBYTE(v27) = a1;
  v7 = (unsigned __int8 *)malloc(a4 + 5);
  v25[0] = a3;
  v25[1] = a4;
  v8 = sub_5571C(v27, (int)v25, v26, v7);
  if ( !v8 )
    goto LABEL_10;
  v9 = a4 + 3;
  if ( a4 == -3 )
  {
    v21 = v7;
    LOBYTE(v11) = 0;
  }
  else
  {
    if ( a4 - 30 > 0xFFFFFFDE )
    {
      v10 = 0;
      v11 = 0;
      v18 = 0;
    }
    else
    {
      v10 = 0;
      v11 = 0;
      v12 = (char *)(v7 + 34);
      do
      {
        v10 += 32;
        v13 = (unsigned __int8)*(v12 - 29);
        v14 = (unsigned __int8)*(v12 - 31);
        v15 = (unsigned __int8)*(v12 - 32) + (unsigned __int8)*(v12 - 34) + (unsigned __int8)*(v12 - 33);
        v16 = (unsigned __int8)*(v12 - 30);
        __pld(v12);
        v12 += 32;
        v17 = (unsigned __int8)*(v12 - 36)
            + (unsigned __int8)*(v12 - 37)
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
            + v13
            + v16
            + v14
            + v15;
        v18 = v10;
        v11 += (unsigned __int8)*(v12 - 35) + v17;
      }
      while ( ((a4 - 30) & 0xFFFFFFE0) + 32 != v10 );
    }
    do
    {
      v19 = v7[v18];
      v18 = ++v10;
      v20 = v11 + v19;
      v11 = v20;
    }
    while ( v10 < v9 );
    v21 = &v7[v9];
    v9 = HIBYTE(v20);
  }
  if ( *v21 == v9 && v7[a4 + 4] == (unsigned __int8)v11 )
  {
    v24 = a4;
    v22 = v8;
    memcpy(a2, v7 + 3, v24);
  }
  else
  {
LABEL_10:
    v22 = 0;
  }
  free(v7);
  return v22;
}
