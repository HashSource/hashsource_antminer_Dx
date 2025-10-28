int __fastcall sph_blake384_close(int a1, int *a2)
{
  int v4; // r6
  unsigned int v5; // lr
  unsigned int v6; // r12
  unsigned int v7; // r11
  unsigned int v8; // r9
  __int64 v9; // kr00_8
  unsigned int v10; // r10
  unsigned int v11; // r7
  int v12; // r11
  int v13; // r2
  size_t v14; // r2
  char *v15; // r1
  int v16; // r1
  int v17; // r0
  int v18; // r2
  int v19; // r1
  int v20; // r0
  int v21; // lr
  int v22; // r3
  int *v23; // r6
  int v24; // r0
  int v25; // r1
  int v26; // r2
  int v27; // r3
  __int64 v29; // kr08_8
  __int64 v30; // [sp+0h] [bp-94h]
  unsigned int v31; // [sp+0h] [bp-94h]
  char v32[112]; // [sp+10h] [bp-84h] BYREF
  unsigned int v33; // [sp+80h] [bp-14h]
  unsigned int v34; // [sp+84h] [bp-10h]
  unsigned int v35; // [sp+88h] [bp-Ch]
  unsigned int v36; // [sp+8Ch] [bp-8h]

  v4 = *(_DWORD *)(a1 + 128);
  v30 = *(_QWORD *)(a1 + 232);
  v5 = *(_DWORD *)(a1 + 240);
  v6 = 8 * v4;
  v7 = *(_DWORD *)(a1 + 244);
  v32[v4] = 0x80;
  v8 = bswap32(v5);
  v9 = (unsigned int)(8 * v4) + v30;
  v10 = bswap32(v7);
  if ( v4 )
  {
    if ( v30 )
    {
      *(_QWORD *)(a1 + 232) = v30 - (1024 - v6);
    }
    else
    {
      v29 = v6 - 1024LL;
      *(_DWORD *)(a1 + 236) = HIDWORD(v29);
      *(_DWORD *)(a1 + 244) = (__PAIR64__(v7, v5) - 1) >> 32;
      *(_DWORD *)(a1 + 232) = v29;
      *(_DWORD *)(a1 + 240) = v5 - 1;
    }
    v13 = v4 + 1;
    v11 = bswap32(HIDWORD(v9));
    v31 = bswap32(v9);
    v12 = 128 - v4;
    if ( v6 > 0x37E )
    {
      memset(&v32[v4 + 1], 0, 127 - v4);
      sph_blake512_0(a1, &v32[v4], 128 - v4);
      *(_QWORD *)(a1 + 232) = -1024;
      *(_QWORD *)(a1 + 240) = -1;
      memset(v32, 0, sizeof(v32));
      v15 = v32;
      v14 = 128;
      goto LABEL_4;
    }
  }
  else
  {
    v11 = bswap32(HIDWORD(v9));
    *(_QWORD *)(a1 + 232) = -1024;
    *(_QWORD *)(a1 + 240) = -1;
    v12 = 128;
    v13 = 1;
    v31 = bswap32(v9);
  }
  memset(&v32[v13], 0, 111 - v4);
  v14 = v12;
  v15 = &v32[v4];
LABEL_4:
  v35 = v11;
  v33 = v10;
  v36 = v31;
  v34 = v8;
  sph_blake512_0(a1, v15, v14);
  v16 = (unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 140))
      | (unsigned __int16)((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 140)) << 8)
      | ((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 140)) << 16) & 0xFFFFFF
      | ((unsigned __int8)*(_DWORD *)(a1 + 140) << 24);
  a2[1] = (unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 136))
        | (unsigned __int16)((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 136)) << 8)
        | ((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 136)) << 16) & 0xFFFFFF
        | ((unsigned __int8)*(_DWORD *)(a1 + 136) << 24);
  *a2 = v16;
  v17 = (unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 148))
      | (unsigned __int16)((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 148)) << 8)
      | ((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 148)) << 16) & 0xFFFFFF
      | ((unsigned __int8)*(_DWORD *)(a1 + 148) << 24);
  a2[3] = (unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 144))
        | (unsigned __int16)((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 144)) << 8)
        | ((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 144)) << 16) & 0xFFFFFF
        | ((unsigned __int8)*(_DWORD *)(a1 + 144) << 24);
  a2[2] = v17;
  v18 = (unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 156))
      | (unsigned __int16)((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 156)) << 8)
      | ((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 156)) << 16) & 0xFFFFFF
      | ((unsigned __int8)*(_DWORD *)(a1 + 156) << 24);
  a2[5] = (unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 152))
        | (unsigned __int16)((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 152)) << 8)
        | ((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 152)) << 16) & 0xFFFFFF
        | ((unsigned __int8)*(_DWORD *)(a1 + 152) << 24);
  a2[4] = v18;
  v19 = (unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 164))
      | (unsigned __int16)((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 164)) << 8)
      | ((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 164)) << 16) & 0xFFFFFF
      | ((unsigned __int8)*(_DWORD *)(a1 + 164) << 24);
  a2[7] = (unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 160))
        | (unsigned __int16)((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 160)) << 8)
        | ((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 160)) << 16) & 0xFFFFFF
        | ((unsigned __int8)*(_DWORD *)(a1 + 160) << 24);
  a2[6] = v19;
  v20 = (unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 172))
      | (unsigned __int16)((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 172)) << 8)
      | ((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 172)) << 16) & 0xFFFFFF
      | ((unsigned __int8)*(_DWORD *)(a1 + 172) << 24);
  a2[9] = (unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 168))
        | (unsigned __int16)((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 168)) << 8)
        | ((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 168)) << 16) & 0xFFFFFF
        | ((unsigned __int8)*(_DWORD *)(a1 + 168) << 24);
  a2[8] = v20;
  v21 = a1 + 136;
  v22 = *(_DWORD *)(a1 + 180);
  v23 = (int *)&unk_1905C8;
  a2[11] = (unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 176))
         | (unsigned __int16)((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 176)) << 8)
         | ((unsigned __int8)BYTE1(*(_QWORD *)(a1 + 176)) << 16) & 0xFFFFFF
         | ((unsigned __int8)*(_DWORD *)(a1 + 176) << 24);
  a2[10] = _byteswap_ushort(HIWORD(v22)) | (BYTE1(v22) << 16) & 0xFFFFFF | ((unsigned __int8)v22 << 24);
  do
  {
    v21 += 16;
    v24 = *v23;
    v25 = v23[1];
    v26 = v23[2];
    v27 = v23[3];
    v23 += 4;
    *(_DWORD *)(v21 - 16) = v24;
    *(_DWORD *)(v21 - 12) = v25;
    *(_DWORD *)(v21 - 8) = v26;
    *(_DWORD *)(v21 - 4) = v27;
  }
  while ( v23 != (int *)&unk_190608 );
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
