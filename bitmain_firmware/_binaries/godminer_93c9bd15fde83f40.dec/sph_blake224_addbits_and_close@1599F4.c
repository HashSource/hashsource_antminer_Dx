int __fastcall sph_blake224_addbits_and_close(unsigned int *a1, int a2, int a3, unsigned int *a4)
{
  unsigned int v4; // lr
  unsigned int v6; // r7
  unsigned int v7; // r12
  bool v9; // zf
  int v10; // r3
  unsigned int v11; // r2
  unsigned int v12; // r6
  unsigned int v13; // r1
  unsigned int v14; // r7
  char *v15; // r0
  char *v16; // r8
  size_t v17; // r9
  char v19[56]; // [sp+0h] [bp-44h] BYREF
  unsigned int v20; // [sp+38h] [bp-Ch]
  unsigned int v21; // [sp+3Ch] [bp-8h]

  v4 = a1[16];
  v6 = a1[29];
  v7 = a1[30];
  v9 = (a3 | v4) == 0;
  v10 = (unsigned __int8)(128 >> a3) | a2 & -(unsigned __int8)(128 >> a3);
  v11 = a3 + 8 * v4;
  v12 = bswap32(v7);
  v13 = v11 + v6;
  v19[v4] = v10;
  if ( v9 )
  {
    a1[30] = -1;
    a1[29] = -512;
  }
  else
  {
    a1[29] = v13 - 512;
    if ( !v6 )
      a1[30] = v7 - 1;
  }
  v14 = bswap32(v13);
  v15 = &v19[v4 + 1];
  v16 = &v19[v4];
  v17 = 64 - v4;
  if ( v11 > 0x1BE )
  {
    memset(v15, 0, 63 - v4);
    sph_blake256_0(a1, v16, v17);
    a1[30] = -1;
    a1[29] = -512;
    memset(v19, 0, sizeof(v19));
    v20 = v12;
    v21 = v14;
    sph_blake256_0(a1, v19, 0x40u);
  }
  else
  {
    memset(v15, 0, 55 - v4);
    v20 = v12;
    v21 = v14;
    sph_blake256_0(a1, v16, v17);
  }
  *a4 = HIBYTE(a1[17])
      | (unsigned __int16)((unsigned __int8)BYTE2(a1[17]) << 8)
      | ((unsigned __int8)BYTE1(a1[17]) << 16) & 0xFFFFFF
      | ((unsigned __int8)a1[17] << 24);
  a4[1] = HIBYTE(a1[18])
        | (unsigned __int16)((unsigned __int8)BYTE2(a1[18]) << 8)
        | ((unsigned __int8)BYTE1(a1[18]) << 16) & 0xFFFFFF
        | ((unsigned __int8)a1[18] << 24);
  a4[2] = HIBYTE(a1[19])
        | (unsigned __int16)((unsigned __int8)BYTE2(a1[19]) << 8)
        | ((unsigned __int8)BYTE1(a1[19]) << 16) & 0xFFFFFF
        | ((unsigned __int8)a1[19] << 24);
  a4[3] = HIBYTE(a1[20])
        | (unsigned __int16)((unsigned __int8)BYTE2(a1[20]) << 8)
        | ((unsigned __int8)BYTE1(a1[20]) << 16) & 0xFFFFFF
        | ((unsigned __int8)a1[20] << 24);
  a4[4] = HIBYTE(a1[21])
        | (unsigned __int16)((unsigned __int8)BYTE2(a1[21]) << 8)
        | ((unsigned __int8)BYTE1(a1[21]) << 16) & 0xFFFFFF
        | ((unsigned __int8)a1[21] << 24);
  a4[5] = HIBYTE(a1[22])
        | (unsigned __int16)((unsigned __int8)BYTE2(a1[22]) << 8)
        | ((unsigned __int8)BYTE1(a1[22]) << 16) & 0xFFFFFF
        | ((unsigned __int8)a1[22] << 24);
  a4[6] = HIBYTE(a1[23])
        | (unsigned __int16)((unsigned __int8)BYTE2(a1[23]) << 8)
        | ((unsigned __int8)BYTE1(a1[23]) << 16) & 0xFFFFFF
        | ((unsigned __int8)a1[23] << 24);
  a1[17] = -1056596264;
  a1[18] = 914150663;
  a1[19] = 812702999;
  a1[20] = -150054599;
  a1[21] = -4191439;
  a1[22] = 1750603025;
  a1[23] = 1694076839;
  a1[24] = -1090891868;
  a1[30] = 0;
  a1[29] = 0;
  a1[25] = 0;
  a1[26] = 0;
  a1[27] = 0;
  a1[28] = 0;
  a1[16] = 0;
  return 0;
}
