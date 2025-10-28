int __fastcall sph_blake256_close(unsigned int *a1, unsigned int *a2)
{
  unsigned int v3; // r6
  unsigned int v5; // r0
  unsigned int v6; // r3
  unsigned int v7; // r9
  unsigned int v8; // r2
  unsigned int v9; // r7
  size_t v10; // r10
  int v11; // r3
  char v13[56]; // [sp+0h] [bp-44h] BYREF
  unsigned int v14; // [sp+38h] [bp-Ch]
  unsigned int v15; // [sp+3Ch] [bp-8h]

  v3 = a1[16];
  v5 = a1[29];
  v6 = a1[30];
  v13[v3] = 0x80;
  v7 = bswap32(v6);
  v8 = 8 * v3 + v5;
  if ( v3 )
  {
    a1[29] = v8 - 512;
    if ( !v5 )
      a1[30] = v6 - 1;
    v11 = v3 + 1;
    v9 = bswap32(v8);
    v10 = 64 - v3;
    if ( 8 * v3 > 0x1BE )
    {
      memset(&v13[v3 + 1], 0, 63 - v3);
      sph_blake256_0(a1, &v13[v3], 64 - v3);
      a1[30] = -1;
      a1[29] = -512;
      memset(v13, 0, sizeof(v13));
      v14 = v7;
      v15 = v9;
      v13[55] = 1;
      sph_blake256_0(a1, v13, 0x40u);
      goto LABEL_4;
    }
  }
  else
  {
    v9 = bswap32(v8);
    a1[29] = -512;
    v10 = 64;
    v11 = 1;
    a1[30] = -1;
  }
  memset(&v13[v11], 0, 55 - v3);
  v14 = v7;
  v15 = v9;
  v13[55] |= 1u;
  sph_blake256_0(a1, &v13[v3], v10);
LABEL_4:
  *a2 = HIBYTE(a1[17])
      | (unsigned __int16)((unsigned __int8)BYTE2(a1[17]) << 8)
      | ((unsigned __int8)BYTE1(a1[17]) << 16) & 0xFFFFFF
      | ((unsigned __int8)a1[17] << 24);
  a2[1] = HIBYTE(a1[18])
        | (unsigned __int16)((unsigned __int8)BYTE2(a1[18]) << 8)
        | ((unsigned __int8)BYTE1(a1[18]) << 16) & 0xFFFFFF
        | ((unsigned __int8)a1[18] << 24);
  a2[2] = HIBYTE(a1[19])
        | (unsigned __int16)((unsigned __int8)BYTE2(a1[19]) << 8)
        | ((unsigned __int8)BYTE1(a1[19]) << 16) & 0xFFFFFF
        | ((unsigned __int8)a1[19] << 24);
  a2[3] = HIBYTE(a1[20])
        | (unsigned __int16)((unsigned __int8)BYTE2(a1[20]) << 8)
        | ((unsigned __int8)BYTE1(a1[20]) << 16) & 0xFFFFFF
        | ((unsigned __int8)a1[20] << 24);
  a2[4] = HIBYTE(a1[21])
        | (unsigned __int16)((unsigned __int8)BYTE2(a1[21]) << 8)
        | ((unsigned __int8)BYTE1(a1[21]) << 16) & 0xFFFFFF
        | ((unsigned __int8)a1[21] << 24);
  a2[5] = HIBYTE(a1[22])
        | (unsigned __int16)((unsigned __int8)BYTE2(a1[22]) << 8)
        | ((unsigned __int8)BYTE1(a1[22]) << 16) & 0xFFFFFF
        | ((unsigned __int8)a1[22] << 24);
  a2[6] = HIBYTE(a1[23])
        | (unsigned __int16)((unsigned __int8)BYTE2(a1[23]) << 8)
        | ((unsigned __int8)BYTE1(a1[23]) << 16) & 0xFFFFFF
        | ((unsigned __int8)a1[23] << 24);
  a2[7] = HIBYTE(a1[24])
        | (unsigned __int16)((unsigned __int8)BYTE2(a1[24]) << 8)
        | ((unsigned __int8)BYTE1(a1[24]) << 16) & 0xFFFFFF
        | ((unsigned __int8)a1[24] << 24);
  a1[17] = 1779033703;
  a1[18] = -1150833019;
  a1[19] = 1013904242;
  a1[20] = -1521486534;
  a1[21] = 1359893119;
  a1[22] = -1694144372;
  a1[23] = 528734635;
  a1[24] = 1541459225;
  a1[30] = 0;
  a1[29] = 0;
  a1[25] = 0;
  a1[26] = 0;
  a1[27] = 0;
  a1[28] = 0;
  a1[16] = 0;
  return 0;
}
