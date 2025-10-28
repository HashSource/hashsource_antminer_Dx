int __fastcall sph_shavite256_close(int a1, int *a2)
{
  unsigned int v2; // r8
  int v5; // r7
  int v6; // r5
  void *v7; // r0

  v2 = *(_DWORD *)(a1 + 64);
  v5 = *(_DWORD *)(a1 + 104);
  v6 = *(_DWORD *)(a1 + 100) + 8 * v2;
  *(_DWORD *)(a1 + 100) = v6;
  if ( v2 )
  {
    v7 = (void *)(a1 + v2 + 1);
    *(_BYTE *)(a1 + v2) = 0x80;
    if ( v2 <= 0x35 )
    {
      memset(v7, 0, 53 - v2);
    }
    else
    {
      memset(v7, 0, 63 - v2);
      sub_A3F40((_DWORD *)a1, (unsigned int *)a1);
      memset((void *)a1, 0, 0x36u);
      *(_DWORD *)(a1 + 104) = 0;
      *(_DWORD *)(a1 + 100) = 0;
    }
  }
  else
  {
    *(_BYTE *)a1 = 0x80;
    memset((void *)(a1 + 1), 0, 0x35u);
    *(_DWORD *)(a1 + 104) = 0;
    *(_DWORD *)(a1 + 100) = 0;
  }
  *(_BYTE *)(a1 + 58) = v5;
  *(_DWORD *)(a1 + 54) = v6;
  *(_BYTE *)(a1 + 59) = BYTE1(v5);
  *(_BYTE *)(a1 + 60) = BYTE2(v5);
  *(_BYTE *)(a1 + 61) = HIBYTE(v5);
  *(_BYTE *)(a1 + 63) = 1;
  *(_BYTE *)(a1 + 62) = 0;
  sub_A3F40((_DWORD *)a1, (unsigned int *)a1);
  *a2 = (unsigned __int8)*(_DWORD *)(a1 + 68)
      | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 68)) << 8)
      | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 68)) << 16) & 0xFFFFFF
      | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 68)) << 24);
  a2[1] = (unsigned __int8)*(_DWORD *)(a1 + 72)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 72)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 72)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 72)) << 24);
  a2[2] = (unsigned __int8)*(_DWORD *)(a1 + 76)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 76)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 76)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 76)) << 24);
  a2[3] = (unsigned __int8)*(_DWORD *)(a1 + 80)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 80)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 80)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 80)) << 24);
  a2[4] = (unsigned __int8)*(_DWORD *)(a1 + 84)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 84)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 84)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 84)) << 24);
  a2[5] = (unsigned __int8)*(_DWORD *)(a1 + 88)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 88)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 88)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 88)) << 24);
  a2[6] = (unsigned __int8)*(_DWORD *)(a1 + 92)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 92)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 92)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 92)) << 24);
  a2[7] = (unsigned __int8)*(_DWORD *)(a1 + 96)
        | (unsigned __int16)((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 96)) << 8)
        | ((unsigned __int8)BYTE2(*(_DWORD *)(a1 + 96)) << 16) & 0xFFFFFF
        | ((unsigned __int8)HIBYTE(*(_DWORD *)(a1 + 96)) << 24);
  *(_DWORD *)(a1 + 68) = 1237007943;
  *(_DWORD *)(a1 + 72) = 645170701;
  *(_DWORD *)(a1 + 76) = -1464626516;
  *(_DWORD *)(a1 + 80) = 35308774;
  *(_DWORD *)(a1 + 84) = 1083343823;
  *(_DWORD *)(a1 + 88) = 1645108614;
  *(_DWORD *)(a1 + 92) = 1838325195;
  *(_DWORD *)(a1 + 96) = -1765004661;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 104) = 0;
  return 1083343823;
}
