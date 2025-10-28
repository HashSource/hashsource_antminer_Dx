int __fastcall pcba_ckb_recv(int a1)
{
  int v2; // r4
  int v3; // r8
  int v4; // r7
  int v5; // r6
  int v7; // r9
  int v8; // r3
  _DWORD v9[19]; // [sp+0h] [bp-4Ch] BYREF

  memset(v9, 0, 0x48u);
  v2 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 32))(a1, v9);
  if ( v2 )
  {
    v3 = g_patten_offset;
    v4 = v9[3];
    v5 = *(_DWORD *)(*(_DWORD *)(g_config_info[0] + 8) + 8) + 104 * g_patten_offset;
    if ( v9[3] == (*(_BYTE *)(v5 + 88) & 0x1F)
      && (v7 = v9[2], v9[2] == (unsigned int)*(unsigned __int8 *)(v5 + 84) / *(_DWORD *)(a1 + 224)) )
    {
      if ( !memcmp((char *)&v9[14] + 3, (const void *)(v5 + 84), *(_DWORD *)(v5 + 92)) )
      {
        v8 = *(_DWORD *)(v5 + 100) + 1;
        need_pattern = 1;
        *(_DWORD *)(v5 + 100) = v8;
      }
      else
      {
        v2 = 0;
        printf("nonce match failed: chip%d, coreid%d, nonce offset %d\n", v7, v4, v3);
      }
    }
    else
    {
      return 0;
    }
  }
  return v2;
}
