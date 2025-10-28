int __fastcall sph_shavite512_addbits_and_close(int a1, char a2, int a3, int *a4)
{
  unsigned int v6; // r12
  int v7; // r9
  int v8; // r7
  int v9; // r8
  int v10; // r5
  void *v11; // r0
  int v12; // r7
  int *v13; // r12
  int result; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3

  v6 = *(_DWORD *)(a1 + 128);
  v7 = *(_DWORD *)(a1 + 200);
  v8 = *(_DWORD *)(a1 + 208);
  v9 = *(_DWORD *)(a1 + 204);
  v10 = *(_DWORD *)(a1 + 196) + a3 + 8 * v6;
  *(_DWORD *)(a1 + 196) = v10;
  if ( a3 | v6 )
  {
    v11 = (void *)(a1 + v6 + 1);
    *(_BYTE *)(a1 + v6) = -(128 >> a3) & a2 | (128 >> a3);
    if ( v6 <= 0x6D )
    {
      memset(v11, 0, 109 - v6);
    }
    else
    {
      memset(v11, 0, 127 - v6);
      sub_62E70((_DWORD *)a1, (unsigned int *)a1);
      memset((void *)a1, 0, 0x6Eu);
      *(_DWORD *)(a1 + 204) = 0;
      *(_DWORD *)(a1 + 208) = 0;
      *(_DWORD *)(a1 + 196) = 0;
      *(_DWORD *)(a1 + 200) = 0;
    }
  }
  else
  {
    *(_BYTE *)a1 = 0x80;
    memset((void *)(a1 + 1), 0, 0x6Du);
    *(_DWORD *)(a1 + 204) = 0;
    *(_DWORD *)(a1 + 208) = 0;
    *(_DWORD *)(a1 + 196) = 0;
    *(_DWORD *)(a1 + 200) = 0;
  }
  *(_BYTE *)(a1 + 112) = BYTE2(v10);
  *(_BYTE *)(a1 + 114) = v7;
  *(_BYTE *)(a1 + 118) = v9;
  *(_BYTE *)(a1 + 122) = v8;
  *(_BYTE *)(a1 + 111) = BYTE1(v10);
  *(_BYTE *)(a1 + 115) = BYTE1(v7);
  *(_BYTE *)(a1 + 116) = BYTE2(v7);
  *(_BYTE *)(a1 + 110) = v10;
  *(_BYTE *)(a1 + 120) = BYTE2(v9);
  *(_BYTE *)(a1 + 113) = HIBYTE(v10);
  *(_BYTE *)(a1 + 119) = BYTE1(v9);
  *(_BYTE *)(a1 + 123) = BYTE1(v8);
  *(_BYTE *)(a1 + 124) = BYTE2(v8);
  *(_WORD *)(a1 + 125) = HIBYTE(v8);
  *(_BYTE *)(a1 + 127) = 2;
  *(_BYTE *)(a1 + 117) = HIBYTE(v7);
  *(_BYTE *)(a1 + 121) = HIBYTE(v9);
  sub_62E70((_DWORD *)a1, (unsigned int *)a1);
  *a4 = (unsigned __int8)*(_DWORD *)(a1 + 132)
      | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 132)) << 8)
      | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 132)) << 16) & 0xFFFFFF
      | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 132)) << 24);
  a4[1] = (unsigned __int8)*(_DWORD *)(a1 + 136)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 136)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 136)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 136)) << 24);
  a4[2] = (unsigned __int8)*(_DWORD *)(a1 + 140)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 140)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 140)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 140)) << 24);
  a4[3] = (unsigned __int8)*(_DWORD *)(a1 + 144)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 144)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 144)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 144)) << 24);
  a4[4] = (unsigned __int8)*(_DWORD *)(a1 + 148)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 148)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 148)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 148)) << 24);
  a4[5] = (unsigned __int8)*(_DWORD *)(a1 + 152)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 152)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 152)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 152)) << 24);
  a4[6] = (unsigned __int8)*(_DWORD *)(a1 + 156)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 156)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 156)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 156)) << 24);
  a4[7] = (unsigned __int8)*(_DWORD *)(a1 + 160)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 160)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 160)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 160)) << 24);
  a4[8] = (unsigned __int8)*(_DWORD *)(a1 + 164)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 164)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 164)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 164)) << 24);
  a4[9] = (unsigned __int8)*(_DWORD *)(a1 + 168)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 168)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 168)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 168)) << 24);
  a4[10] = (unsigned __int8)*(_DWORD *)(a1 + 172)
         | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 172)) << 8)
         | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 172)) << 16) & 0xFFFFFF
         | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 172)) << 24);
  v12 = a1 + 132;
  a4[11] = (unsigned __int8)*(_DWORD *)(a1 + 176)
         | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 176)) << 8)
         | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 176)) << 16) & 0xFFFFFF
         | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 176)) << 24);
  a4[12] = (unsigned __int8)*(_DWORD *)(a1 + 180)
         | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 180)) << 8)
         | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 180)) << 16) & 0xFFFFFF
         | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 180)) << 24);
  v13 = (int *)&unk_116EF8;
  a4[13] = (unsigned __int8)*(_DWORD *)(a1 + 184)
         | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 184)) << 8)
         | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 184)) << 16) & 0xFFFFFF
         | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 184)) << 24);
  a4[14] = (unsigned __int8)*(_DWORD *)(a1 + 188)
         | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 188)) << 8)
         | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 188)) << 16) & 0xFFFFFF
         | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 188)) << 24);
  a4[15] = (unsigned __int8)*(_DWORD *)(a1 + 192)
         | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 192)) << 8)
         | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 192)) << 16) & 0xFFFFFF
         | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 192)) << 24);
  do
  {
    v12 += 16;
    result = *v13;
    v15 = v13[1];
    v16 = v13[2];
    v17 = v13[3];
    v13 += 4;
    *(_DWORD *)(v12 - 16) = result;
    *(_DWORD *)(v12 - 12) = v15;
    *(_DWORD *)(v12 - 8) = v16;
    *(_DWORD *)(v12 - 4) = v17;
  }
  while ( v13 != (int *)&unk_116F38 );
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 196) = 0;
  *(_DWORD *)(a1 + 200) = 0;
  *(_DWORD *)(a1 + 204) = 0;
  *(_DWORD *)(a1 + 208) = 0;
  return result;
}
