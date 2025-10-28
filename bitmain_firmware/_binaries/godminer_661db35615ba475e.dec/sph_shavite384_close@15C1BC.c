int __fastcall sph_shavite384_close(int a1, int *a2)
{
  unsigned int v2; // r10
  int v5; // r9
  int v6; // r8
  int v7; // r7
  int v8; // r6
  void *v9; // r0
  int v10; // lr
  int *v11; // r6
  int result; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r3

  v2 = *(_DWORD *)(a1 + 128);
  v5 = *(_DWORD *)(a1 + 200);
  v6 = *(_DWORD *)(a1 + 204);
  v7 = *(_DWORD *)(a1 + 208);
  v8 = *(_DWORD *)(a1 + 196) + 8 * v2;
  *(_DWORD *)(a1 + 196) = v8;
  if ( v2 )
  {
    v9 = (void *)(a1 + v2 + 1);
    *(_BYTE *)(a1 + v2) = 0x80;
    if ( v2 <= 0x6D )
    {
      memset(v9, 0, 109 - v2);
    }
    else
    {
      memset(v9, 0, 127 - v2);
      sub_9D7B0((_DWORD *)a1, (unsigned int *)a1);
      memset((void *)a1, 0, 0x6Eu);
      *(_DWORD *)(a1 + 208) = 0;
      *(_DWORD *)(a1 + 204) = 0;
      *(_DWORD *)(a1 + 200) = 0;
      *(_DWORD *)(a1 + 196) = 0;
    }
  }
  else
  {
    *(_BYTE *)a1 = 0x80;
    memset((void *)(a1 + 1), 0, 0x6Du);
    *(_DWORD *)(a1 + 208) = 0;
    *(_DWORD *)(a1 + 204) = 0;
    *(_DWORD *)(a1 + 200) = 0;
    *(_DWORD *)(a1 + 196) = 0;
  }
  *(_BYTE *)(a1 + 111) = BYTE1(v8);
  *(_BYTE *)(a1 + 112) = BYTE2(v8);
  *(_BYTE *)(a1 + 114) = v5;
  *(_BYTE *)(a1 + 118) = v6;
  *(_BYTE *)(a1 + 122) = v7;
  *(_BYTE *)(a1 + 113) = HIBYTE(v8);
  *(_BYTE *)(a1 + 115) = BYTE1(v5);
  *(_BYTE *)(a1 + 119) = BYTE1(v6);
  *(_BYTE *)(a1 + 120) = BYTE2(v6);
  *(_BYTE *)(a1 + 110) = v8;
  *(_BYTE *)(a1 + 116) = BYTE2(v5);
  *(_BYTE *)(a1 + 123) = BYTE1(v7);
  *(_BYTE *)(a1 + 124) = BYTE2(v7);
  *(_BYTE *)(a1 + 125) = HIBYTE(v7);
  *(_BYTE *)(a1 + 126) = 0x80;
  *(_BYTE *)(a1 + 127) = 1;
  *(_BYTE *)(a1 + 117) = HIBYTE(v5);
  *(_BYTE *)(a1 + 121) = HIBYTE(v6);
  sub_9D7B0((_DWORD *)a1, (unsigned int *)a1);
  *a2 = (unsigned __int8)*(_DWORD *)(a1 + 132)
      | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 132)) << 8)
      | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 132)) << 16) & 0xFFFFFF
      | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 132)) << 24);
  a2[1] = (unsigned __int8)*(_DWORD *)(a1 + 136)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 136)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 136)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 136)) << 24);
  a2[2] = (unsigned __int8)*(_DWORD *)(a1 + 140)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 140)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 140)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 140)) << 24);
  a2[3] = (unsigned __int8)*(_DWORD *)(a1 + 144)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 144)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 144)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 144)) << 24);
  a2[4] = (unsigned __int8)*(_DWORD *)(a1 + 148)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 148)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 148)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 148)) << 24);
  a2[5] = (unsigned __int8)*(_DWORD *)(a1 + 152)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 152)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 152)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 152)) << 24);
  a2[6] = (unsigned __int8)*(_DWORD *)(a1 + 156)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 156)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 156)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 156)) << 24);
  a2[7] = (unsigned __int8)*(_DWORD *)(a1 + 160)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 160)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 160)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 160)) << 24);
  v10 = a1 + 132;
  v11 = (int *)&unk_17E864;
  a2[8] = (unsigned __int8)*(_DWORD *)(a1 + 164)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 164)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 164)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 164)) << 24);
  a2[9] = (unsigned __int8)*(_DWORD *)(a1 + 168)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 168)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 168)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 168)) << 24);
  a2[10] = (unsigned __int8)*(_DWORD *)(a1 + 172)
         | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 172)) << 8)
         | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 172)) << 16) & 0xFFFFFF
         | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 172)) << 24);
  a2[11] = (unsigned __int8)*(_DWORD *)(a1 + 176)
         | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 176)) << 8)
         | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 176)) << 16) & 0xFFFFFF
         | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 176)) << 24);
  do
  {
    v10 += 16;
    result = *v11;
    v13 = v11[1];
    v14 = v11[2];
    v15 = v11[3];
    v11 += 4;
    *(_DWORD *)(v10 - 16) = result;
    *(_DWORD *)(v10 - 12) = v13;
    *(_DWORD *)(v10 - 8) = v14;
    *(_DWORD *)(v10 - 4) = v15;
  }
  while ( v11 != (int *)&unk_17E8A4 );
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 196) = 0;
  *(_DWORD *)(a1 + 200) = 0;
  *(_DWORD *)(a1 + 204) = 0;
  *(_DWORD *)(a1 + 208) = 0;
  return result;
}
