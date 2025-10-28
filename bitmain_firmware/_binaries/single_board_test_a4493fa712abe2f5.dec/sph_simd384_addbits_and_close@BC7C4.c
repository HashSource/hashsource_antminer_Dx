void *__fastcall sph_simd384_addbits_and_close(unsigned int *a1, char a2, int a3, unsigned int *a4)
{
  unsigned int v5; // r0
  int v8; // r7
  unsigned int v10; // r0
  unsigned int v11; // r2
  void *result; // r0

  v5 = a1[32];
  v8 = a3 | v5;
  if ( a3 | v5 )
  {
    memset((char *)a1 + v5, 0, 128 - v5);
    *((_BYTE *)a1 + a1[32]) = (-1 << (8 - a3)) & a2;
    sub_EF110((int)a1, 0);
    v8 = a1[32];
  }
  memset(a1 + 1, 0, 0x7Cu);
  v10 = a1[65] << 10;
  v11 = (v10 >> 22) + (a1[66] << 10);
  *a1 = (unsigned __int8)(a3 + v10 + 8 * v8)
      | (unsigned __int16)((unsigned __int8)((unsigned __int16)(a3 + v10 + 8 * v8) >> 8) << 8)
      | ((unsigned __int8)((a3 + v10 + 8 * v8) >> 16) << 16) & 0xFFFFFF
      | ((a3 + v10 + 8 * v8) >> 24 << 24);
  a1[1] = (unsigned __int16)((unsigned __int8)v11 | (BYTE1(v11) << 8))
        | (BYTE2(v11) << 16) & 0xFFFFFF
        | (HIBYTE(v11) << 24);
  sub_EF110((int)a1, 1);
  *a4 = (unsigned __int8)a1[33]
      | (unsigned __int16)((unsigned __int8)BYTE1(a1[33]) << 8)
      | ((unsigned __int8)BYTE2(a1[33]) << 16) & 0xFFFFFF
      | (HIBYTE(a1[33]) << 24);
  a4[1] = (unsigned __int8)a1[34]
        | (unsigned __int16)((unsigned __int8)BYTE1(a1[34]) << 8)
        | ((unsigned __int8)BYTE2(a1[34]) << 16) & 0xFFFFFF
        | (HIBYTE(a1[34]) << 24);
  a4[2] = (unsigned __int8)a1[35]
        | (unsigned __int16)((unsigned __int8)BYTE1(a1[35]) << 8)
        | ((unsigned __int8)BYTE2(a1[35]) << 16) & 0xFFFFFF
        | (HIBYTE(a1[35]) << 24);
  a4[3] = (unsigned __int8)a1[36]
        | (unsigned __int16)((unsigned __int8)BYTE1(a1[36]) << 8)
        | ((unsigned __int8)BYTE2(a1[36]) << 16) & 0xFFFFFF
        | (HIBYTE(a1[36]) << 24);
  a4[4] = (unsigned __int8)a1[37]
        | (unsigned __int16)((unsigned __int8)BYTE1(a1[37]) << 8)
        | ((unsigned __int8)BYTE2(a1[37]) << 16) & 0xFFFFFF
        | (HIBYTE(a1[37]) << 24);
  a4[5] = (unsigned __int8)a1[38]
        | (unsigned __int16)((unsigned __int8)BYTE1(a1[38]) << 8)
        | ((unsigned __int8)BYTE2(a1[38]) << 16) & 0xFFFFFF
        | (HIBYTE(a1[38]) << 24);
  a4[6] = (unsigned __int8)a1[39]
        | (unsigned __int16)((unsigned __int8)BYTE1(a1[39]) << 8)
        | ((unsigned __int8)BYTE2(a1[39]) << 16) & 0xFFFFFF
        | (HIBYTE(a1[39]) << 24);
  a4[7] = (unsigned __int8)a1[40]
        | (unsigned __int16)((unsigned __int8)BYTE1(a1[40]) << 8)
        | ((unsigned __int8)BYTE2(a1[40]) << 16) & 0xFFFFFF
        | (HIBYTE(a1[40]) << 24);
  a4[8] = (unsigned __int8)a1[41]
        | (unsigned __int16)((unsigned __int8)BYTE1(a1[41]) << 8)
        | ((unsigned __int8)BYTE2(a1[41]) << 16) & 0xFFFFFF
        | (HIBYTE(a1[41]) << 24);
  a4[9] = (unsigned __int8)a1[42]
        | (unsigned __int16)((unsigned __int8)BYTE1(a1[42]) << 8)
        | ((unsigned __int8)BYTE2(a1[42]) << 16) & 0xFFFFFF
        | (HIBYTE(a1[42]) << 24);
  a4[10] = (unsigned __int8)a1[43]
         | (unsigned __int16)((unsigned __int8)BYTE1(a1[43]) << 8)
         | ((unsigned __int8)BYTE2(a1[43]) << 16) & 0xFFFFFF
         | (HIBYTE(a1[43]) << 24);
  a4[11] = (unsigned __int8)a1[44]
         | (unsigned __int16)((unsigned __int8)BYTE1(a1[44]) << 8)
         | ((unsigned __int8)BYTE2(a1[44]) << 16) & 0xFFFFFF
         | (HIBYTE(a1[44]) << 24);
  result = memcpy(a1 + 33, &unk_108368, 0x80u);
  a1[65] = 0;
  a1[66] = 0;
  a1[32] = 0;
  return result;
}
