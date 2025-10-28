int __fastcall pcba_vbk_recv(int a1)
{
  int v2; // r5
  int v3; // r4
  const char *v4; // r0
  _DWORD s[15]; // [sp+10h] [bp-3Ch] BYREF

  memset(s, 0, 0x38u);
  v2 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 32))(a1, s);
  if ( !v2 )
    return v2;
  v3 = *(_DWORD *)(*(_DWORD *)(g_config_info[0] + 8) + 8)
     + 104
     * (s[4]
      + ((s[6] & 7) + *(_DWORD *)(*(_DWORD *)(g_config_info[0] + 8) + 12) * s[2])
      * *(_DWORD *)(*(_DWORD *)(g_config_info[0] + 8) + 16));
  LOWORD(v4) = (unsigned __int16)"can't match: chip%d, coreid%d, nonce_value:%8x, resp.nonce_value=%08x\n";
  if ( s[6] != bswap32(*(_DWORD *)(v3 + 84)) )
  {
    HIWORD(v4) = (unsigned int)"can't match: chip%d, coreid%d, nonce_value:%8x, resp.nonce_value=%08x\n" >> 16;
    v2 = 0;
    printf(v4);
    return v2;
  }
  HIWORD(v4) = (unsigned int)"can't match: chip%d, coreid%d, nonce_value:%8x, resp.nonce_value=%08x\n" >> 16;
  printf(v4);
  ++*(_DWORD *)(v3 + 100);
  return v2;
}
