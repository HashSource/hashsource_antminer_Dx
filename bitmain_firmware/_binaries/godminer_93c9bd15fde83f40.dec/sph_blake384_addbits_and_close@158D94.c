int __fastcall sph_blake384_addbits_and_close(int a1, char a2, int a3, int *a4)
{
  int v5; // r12
  char v7; // r0
  unsigned int v8; // lr
  unsigned int v9; // r6
  unsigned int v10; // r2
  __int64 v11; // kr00_8
  bool v12; // zf
  unsigned int v14; // r8
  unsigned int v15; // r9
  unsigned int v16; // r6
  unsigned int v17; // r7
  _BYTE *v18; // r0
  char *v19; // r10
  size_t v20; // r11
  size_t v21; // r2
  char *v22; // r1
  int v23; // r1
  int v24; // r0
  int v25; // r2
  int v26; // r1
  int v27; // r0
  int v28; // lr
  int v29; // r3
  int *v30; // r6
  int v31; // r0
  int v32; // r1
  int v33; // r2
  int v34; // r3
  __int64 v36; // kr08_8
  __int64 v37; // [sp+0h] [bp-8Ch]
  _BYTE s[112]; // [sp+8h] [bp-84h] BYREF
  unsigned int v39; // [sp+78h] [bp-14h]
  unsigned int v40; // [sp+7Ch] [bp-10h]
  unsigned int v41; // [sp+80h] [bp-Ch]
  unsigned int v42; // [sp+84h] [bp-8h]

  v5 = *(_DWORD *)(a1 + 128);
  v7 = 128 >> a3;
  v8 = a3 + 8 * v5;
  v9 = *(_DWORD *)(a1 + 240);
  v37 = *(_QWORD *)(a1 + 232);
  v10 = *(_DWORD *)(a1 + 244);
  v11 = v8 + v37;
  v12 = (a3 | v5) == 0;
  s[v5] = v7 | a2 & -v7;
  v14 = bswap32(v9);
  v15 = bswap32(v10);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 232) = -1024;
    *(_QWORD *)(a1 + 240) = -1;
  }
  else if ( v37 )
  {
    *(_QWORD *)(a1 + 232) = v37 - (1024 - v8);
  }
  else
  {
    v36 = v8 - 1024LL;
    *(_DWORD *)(a1 + 236) = HIDWORD(v36);
    *(_DWORD *)(a1 + 244) = (__PAIR64__(v10, v9) - 1) >> 32;
    *(_DWORD *)(a1 + 232) = v36;
    *(_DWORD *)(a1 + 240) = v9 - 1;
  }
  v16 = bswap32(v11);
  v17 = bswap32(HIDWORD(v11));
  v18 = &s[v5 + 1];
  v19 = &s[v5];
  v20 = 128 - v5;
  if ( v8 > 0x37E )
  {
    memset(v18, 0, 127 - v5);
    sph_blake512_0(a1, v19, v20);
    *(_QWORD *)(a1 + 232) = -1024;
    *(_QWORD *)(a1 + 240) = -1;
    memset(s, 0, sizeof(s));
    v22 = s;
    v21 = 128;
  }
  else
  {
    memset(v18, 0, 111 - v5);
    v21 = v20;
    v22 = v19;
  }
  v41 = v17;
  v42 = v16;
  v39 = v15;
  v40 = v14;
  sph_blake512_0(a1, v22, v21);
  v23 = (unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 140))
      | (unsigned __int16)((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 140)) << 8)
      | ((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 140)) << 16) & 0xFFFFFF
      | ((unsigned __int8)*(_DWORD *)(a1 + 140) << 24);
  a4[1] = (unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 136))
        | (unsigned __int16)((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 136)) << 8)
        | ((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 136)) << 16) & 0xFFFFFF
        | ((unsigned __int8)*(_DWORD *)(a1 + 136) << 24);
  *a4 = v23;
  v24 = (unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 148))
      | (unsigned __int16)((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 148)) << 8)
      | ((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 148)) << 16) & 0xFFFFFF
      | ((unsigned __int8)*(_DWORD *)(a1 + 148) << 24);
  a4[3] = (unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 144))
        | (unsigned __int16)((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 144)) << 8)
        | ((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 144)) << 16) & 0xFFFFFF
        | ((unsigned __int8)*(_DWORD *)(a1 + 144) << 24);
  a4[2] = v24;
  v25 = (unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 156))
      | (unsigned __int16)((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 156)) << 8)
      | ((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 156)) << 16) & 0xFFFFFF
      | ((unsigned __int8)*(_DWORD *)(a1 + 156) << 24);
  a4[5] = (unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 152))
        | (unsigned __int16)((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 152)) << 8)
        | ((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 152)) << 16) & 0xFFFFFF
        | ((unsigned __int8)*(_DWORD *)(a1 + 152) << 24);
  a4[4] = v25;
  v26 = (unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 164))
      | (unsigned __int16)((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 164)) << 8)
      | ((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 164)) << 16) & 0xFFFFFF
      | ((unsigned __int8)*(_DWORD *)(a1 + 164) << 24);
  a4[7] = (unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 160))
        | (unsigned __int16)((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 160)) << 8)
        | ((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 160)) << 16) & 0xFFFFFF
        | ((unsigned __int8)*(_DWORD *)(a1 + 160) << 24);
  a4[6] = v26;
  v27 = (unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 172))
      | (unsigned __int16)((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 172)) << 8)
      | ((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 172)) << 16) & 0xFFFFFF
      | ((unsigned __int8)*(_DWORD *)(a1 + 172) << 24);
  a4[9] = (unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 168))
        | (unsigned __int16)((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 168)) << 8)
        | ((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 168)) << 16) & 0xFFFFFF
        | ((unsigned __int8)*(_DWORD *)(a1 + 168) << 24);
  a4[8] = v27;
  v28 = a1 + 136;
  v29 = *(_DWORD *)(a1 + 180);
  v30 = (int *)&unk_1905C8;
  a4[11] = (unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 176))
         | (unsigned __int16)((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 176)) << 8)
         | ((unsigned __int8)BYTE1(*(_QWORD *)(a1 + 176)) << 16) & 0xFFFFFF
         | ((unsigned __int8)*(_DWORD *)(a1 + 176) << 24);
  a4[10] = _byteswap_ushort(HIWORD(v29)) | (BYTE1(v29) << 16) & 0xFFFFFF | ((unsigned __int8)v29 << 24);
  do
  {
    v28 += 16;
    v31 = *v30;
    v32 = v30[1];
    v33 = v30[2];
    v34 = v30[3];
    v30 += 4;
    *(_DWORD *)(v28 - 16) = v31;
    *(_DWORD *)(v28 - 12) = v32;
    *(_DWORD *)(v28 - 8) = v33;
    *(_DWORD *)(v28 - 4) = v34;
  }
  while ( v30 != (int *)&unk_190608 );
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 200) = 0;
  *(_DWORD *)(a1 + 204) = 0;
  *(_DWORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 212) = 0;
  *(_DWORD *)(a1 + 216) = 0;
  *(_DWORD *)(a1 + 220) = 0;
  *(_DWORD *)(a1 + 224) = 0;
  *(_DWORD *)(a1 + 228) = 0;
  return 0;
}
