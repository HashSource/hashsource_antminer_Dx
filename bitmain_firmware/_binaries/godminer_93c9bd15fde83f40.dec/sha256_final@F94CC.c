int __fastcall sha256_final(int a1, _BYTE *a2)
{
  int v2; // r3
  unsigned int *v3; // r6
  bool v6; // cf
  int v7; // r2
  int v8; // r7
  char *v9; // r0
  size_t v10; // r2
  int v11; // r3
  int v12; // r7
  int v13; // r8
  int v14; // r9
  int v15; // r10
  int v16; // r11
  int result; // r0
  int v18; // [sp+4h] [bp-8h]

  v2 = *(_DWORD *)(a1 + 4);
  v3 = (unsigned int *)(a1 + 8);
  v6 = (v2 & 0x3Fu) >= 0x38;
  if ( (v2 & 0x3Fu) >= 0x38 )
    v7 = 128;
  else
    v7 = 64;
  v8 = v2 + *(_DWORD *)a1;
  v9 = (char *)v3 + v2;
  v10 = v7 - v2;
  if ( (v2 & 0x3Fu) >= 0x38 )
    v11 = 124;
  else
    v11 = 60;
  v12 = 8 * v8;
  if ( v6 )
    v13 = 125;
  else
    v13 = 61;
  v18 = v11;
  if ( v6 )
    v14 = 126;
  else
    v14 = 62;
  if ( v6 )
    v15 = 127;
  else
    v15 = 63;
  if ( v6 )
    v16 = 2;
  else
    v16 = 1;
  memset(v9, 0, v10);
  *(_BYTE *)(a1 + *(_DWORD *)(a1 + 4) + 8) = 0x80;
  *((_BYTE *)v3 + v15) = v12;
  *((_BYTE *)v3 + v14) = BYTE1(v12);
  *((_BYTE *)v3 + v13) = BYTE2(v12);
  *((_BYTE *)v3 + v18) = HIBYTE(v12);
  result = sha256_transf(a1, v3, v16);
  a2[3] = *(_DWORD *)(a1 + 136);
  a2[2] = BYTE1(*(_DWORD *)(a1 + 136));
  a2[1] = *(_WORD *)(a1 + 138);
  *a2 = *(_BYTE *)(a1 + 139);
  a2[7] = *(_DWORD *)(a1 + 140);
  a2[6] = BYTE1(*(_DWORD *)(a1 + 140));
  a2[5] = *(_WORD *)(a1 + 142);
  a2[4] = *(_BYTE *)(a1 + 143);
  a2[11] = *(_DWORD *)(a1 + 144);
  a2[10] = BYTE1(*(_DWORD *)(a1 + 144));
  a2[9] = *(_WORD *)(a1 + 146);
  a2[8] = *(_BYTE *)(a1 + 147);
  a2[15] = *(_DWORD *)(a1 + 148);
  a2[14] = BYTE1(*(_DWORD *)(a1 + 148));
  a2[13] = *(_WORD *)(a1 + 150);
  a2[12] = *(_BYTE *)(a1 + 151);
  a2[19] = *(_DWORD *)(a1 + 152);
  a2[18] = BYTE1(*(_DWORD *)(a1 + 152));
  a2[17] = *(_WORD *)(a1 + 154);
  a2[16] = *(_BYTE *)(a1 + 155);
  a2[23] = *(_DWORD *)(a1 + 156);
  a2[22] = BYTE1(*(_DWORD *)(a1 + 156));
  a2[21] = *(_WORD *)(a1 + 158);
  a2[20] = *(_BYTE *)(a1 + 159);
  a2[27] = *(_DWORD *)(a1 + 160);
  a2[26] = BYTE1(*(_DWORD *)(a1 + 160));
  a2[25] = *(_WORD *)(a1 + 162);
  a2[24] = *(_BYTE *)(a1 + 163);
  a2[31] = *(_DWORD *)(a1 + 164);
  a2[30] = BYTE1(*(_DWORD *)(a1 + 164));
  a2[29] = *(_WORD *)(a1 + 166);
  a2[28] = *(_BYTE *)(a1 + 167);
  return result;
}
