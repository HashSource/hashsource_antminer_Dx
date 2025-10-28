void *__fastcall sph_simd512_close(int *a1, unsigned int *a2)
{
  int v3; // r6
  unsigned int v5; // r3
  unsigned int v6; // r2
  int v7; // r3
  void *result; // r0

  v3 = a1[32];
  if ( v3 )
  {
    memset((char *)a1 + v3, 0, 128 - v3);
    *((_BYTE *)a1 + a1[32]) = 0;
    sub_B71D8((int)a1);
    v3 = a1[32];
  }
  memset(a1 + 1, 0, 0x7Cu);
  v5 = a1[65] << 10;
  v6 = v5 + 8 * v3;
  v7 = (v5 >> 22) + (a1[66] << 10);
  a1[1] = (unsigned __int8)v7 | (unsigned __int16)(BYTE1(v7) << 8) | (BYTE2(v7) << 16) & 0xFFFFFF | (HIBYTE(v7) << 24);
  *a1 = (unsigned __int16)((unsigned __int8)v6 | (BYTE1(v6) << 8)) | (BYTE2(v6) << 16) & 0xFFFFFF | (HIBYTE(v6) << 24);
  sub_161B70((int)a1, 1);
  *a2 = (unsigned __int8)a1[33]
      | (unsigned __int16)((unsigned __int8)BYTE1(a1[33]) << 8)
      | ((unsigned __int8)BYTE2(a1[33]) << 16) & 0xFFFFFF
      | (HIBYTE(a1[33]) << 24);
  a2[1] = (unsigned __int8)a1[34]
        | (unsigned __int16)((unsigned __int8)BYTE1(a1[34]) << 8)
        | ((unsigned __int8)BYTE2(a1[34]) << 16) & 0xFFFFFF
        | (HIBYTE(a1[34]) << 24);
  a2[2] = (unsigned __int8)a1[35]
        | (unsigned __int16)((unsigned __int8)BYTE1(a1[35]) << 8)
        | ((unsigned __int8)BYTE2(a1[35]) << 16) & 0xFFFFFF
        | (HIBYTE(a1[35]) << 24);
  a2[3] = (unsigned __int8)a1[36]
        | (unsigned __int16)((unsigned __int8)BYTE1(a1[36]) << 8)
        | ((unsigned __int8)BYTE2(a1[36]) << 16) & 0xFFFFFF
        | (HIBYTE(a1[36]) << 24);
  a2[4] = (unsigned __int8)a1[37]
        | (unsigned __int16)((unsigned __int8)BYTE1(a1[37]) << 8)
        | ((unsigned __int8)BYTE2(a1[37]) << 16) & 0xFFFFFF
        | (HIBYTE(a1[37]) << 24);
  a2[5] = (unsigned __int8)a1[38]
        | (unsigned __int16)((unsigned __int8)BYTE1(a1[38]) << 8)
        | ((unsigned __int8)BYTE2(a1[38]) << 16) & 0xFFFFFF
        | (HIBYTE(a1[38]) << 24);
  a2[6] = (unsigned __int8)a1[39]
        | (unsigned __int16)((unsigned __int8)BYTE1(a1[39]) << 8)
        | ((unsigned __int8)BYTE2(a1[39]) << 16) & 0xFFFFFF
        | (HIBYTE(a1[39]) << 24);
  a2[7] = (unsigned __int8)a1[40]
        | (unsigned __int16)((unsigned __int8)BYTE1(a1[40]) << 8)
        | ((unsigned __int8)BYTE2(a1[40]) << 16) & 0xFFFFFF
        | (HIBYTE(a1[40]) << 24);
  a2[8] = (unsigned __int8)a1[41]
        | (unsigned __int16)((unsigned __int8)BYTE1(a1[41]) << 8)
        | ((unsigned __int8)BYTE2(a1[41]) << 16) & 0xFFFFFF
        | (HIBYTE(a1[41]) << 24);
  a2[9] = (unsigned __int8)a1[42]
        | (unsigned __int16)((unsigned __int8)BYTE1(a1[42]) << 8)
        | ((unsigned __int8)BYTE2(a1[42]) << 16) & 0xFFFFFF
        | (HIBYTE(a1[42]) << 24);
  a2[10] = (unsigned __int8)a1[43]
         | (unsigned __int16)((unsigned __int8)BYTE1(a1[43]) << 8)
         | ((unsigned __int8)BYTE2(a1[43]) << 16) & 0xFFFFFF
         | (HIBYTE(a1[43]) << 24);
  a2[11] = (unsigned __int8)a1[44]
         | (unsigned __int16)((unsigned __int8)BYTE1(a1[44]) << 8)
         | ((unsigned __int8)BYTE2(a1[44]) << 16) & 0xFFFFFF
         | (HIBYTE(a1[44]) << 24);
  a2[12] = (unsigned __int8)a1[45]
         | (unsigned __int16)((unsigned __int8)BYTE1(a1[45]) << 8)
         | ((unsigned __int8)BYTE2(a1[45]) << 16) & 0xFFFFFF
         | (HIBYTE(a1[45]) << 24);
  a2[13] = (unsigned __int8)a1[46]
         | (unsigned __int16)((unsigned __int8)BYTE1(a1[46]) << 8)
         | ((unsigned __int8)BYTE2(a1[46]) << 16) & 0xFFFFFF
         | (HIBYTE(a1[46]) << 24);
  a2[14] = (unsigned __int8)a1[47]
         | (unsigned __int16)((unsigned __int8)BYTE1(a1[47]) << 8)
         | ((unsigned __int8)BYTE2(a1[47]) << 16) & 0xFFFFFF
         | (HIBYTE(a1[47]) << 24);
  a2[15] = (unsigned __int8)a1[48]
         | (unsigned __int16)((unsigned __int8)BYTE1(a1[48]) << 8)
         | ((unsigned __int8)BYTE2(a1[48]) << 16) & 0xFFFFFF
         | (HIBYTE(a1[48]) << 24);
  result = memcpy(a1 + 33, &unk_190D04, 0x80u);
  a1[66] = 0;
  a1[65] = 0;
  a1[32] = 0;
  return result;
}
