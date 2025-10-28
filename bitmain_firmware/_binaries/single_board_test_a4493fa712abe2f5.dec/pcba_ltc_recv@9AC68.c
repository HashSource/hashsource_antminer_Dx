int __fastcall pcba_ltc_recv(int a1)
{
  size_t *v2; // r4
  unsigned int v3; // r0
  int v5; // r3
  _DWORD v6[29]; // [sp+0h] [bp-74h] BYREF

  memset(v6, 0, 0x70u);
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 28))(a1, v6);
  v2 = (size_t *)(*(_DWORD *)(*(_DWORD *)(g_config_info[0] + 8) + 8) + 104 * g_patten_offset);
  v3 = *((unsigned __int8 *)v2 + 84);
  if ( v6[3] != v3 >> 1
    || v6[2] != ((unsigned __int8)((_BYTE)v3 << 7) | (*((unsigned __int8 *)v2 + 85) >> 1)) / *(_DWORD *)(a1 + 224)
    || memcmp(&v6[20], v2 + 21, v2[23]) )
  {
    return 0;
  }
  v5 = v2[25] + 1;
  need_pattern = 1;
  v2[25] = v5;
  return 1;
}
