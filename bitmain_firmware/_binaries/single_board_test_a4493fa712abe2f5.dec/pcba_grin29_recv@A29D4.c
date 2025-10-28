int __fastcall pcba_grin29_recv(int a1)
{
  int v2; // r4
  _DWORD *v3; // r5
  _BYTE *v4; // r2
  _BYTE *v5; // r3
  int v6; // r0
  unsigned int v7; // r1
  unsigned int *v8; // r1
  _BYTE *v9; // r2
  unsigned int v10; // t1
  int v11; // r8
  int v12; // r1
  _DWORD v14[2]; // [sp+4h] [bp-3A4h] BYREF
  _BYTE s2[168]; // [sp+Ch] [bp-39Ch] BYREF
  _BYTE s[756]; // [sp+B4h] [bp-2F4h] BYREF

  memset(s, 0, 0x2F3u);
  v2 = (*(int (__fastcall **)(int, _BYTE *))(a1 + 32))(a1, s);
  if ( !v2 )
    return v2;
  v3 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)(g_config_info[0] + 8) + 8) + 104 * g_patten_offset);
  memset(s2, 0, sizeof(s2));
  v4 = &s[75];
  v5 = &s2[40];
  v6 = 0;
  do
  {
    v7 = *((_DWORD *)v4 - 10);
    v6 += 8;
    __pld(v4);
    __pld(v5);
    v4 += 32;
    v5 += 32;
    *((_DWORD *)v5 - 18) = bswap32(v7);
    *((_DWORD *)v5 - 17) = bswap32(*((_DWORD *)v4 - 17));
    *((_DWORD *)v5 - 16) = bswap32(*((_DWORD *)v4 - 16));
    *((_DWORD *)v5 - 15) = bswap32(*((_DWORD *)v4 - 15));
    *((_DWORD *)v5 - 14) = bswap32(*((_DWORD *)v4 - 14));
    *((_DWORD *)v5 - 13) = bswap32(*((_DWORD *)v4 - 13));
    *((_DWORD *)v5 - 12) = bswap32(*((_DWORD *)v4 - 12));
    *((_DWORD *)v5 - 11) = bswap32(*((_DWORD *)v4 - 11));
  }
  while ( v6 != 40 );
  v8 = (unsigned int *)&s[195];
  v9 = &s2[156];
  do
  {
    v10 = *v8++;
    *((_DWORD *)v9 + 1) = bswap32(v10);
    v9 += 4;
  }
  while ( v9 != &s2[164] );
  v11 = memcmp(v3 + 22, s2, 0xA8u);
  v14[0] = s[28] | (unsigned __int16)(s[27] << 8) | (s[26] << 16) & 0xFFFFFF | (s[25] << 24);
  v14[1] = v14[0];
  if ( !(v11 | memcmp(v3 + 21, v14, 4u)) )
  {
    v12 = v3[25] + 1;
    v3[25] = v12;
    printf("receive a nonce match total %d\n", v12);
    return v2;
  }
  puts("receive a nonce not match");
  return 0;
}
