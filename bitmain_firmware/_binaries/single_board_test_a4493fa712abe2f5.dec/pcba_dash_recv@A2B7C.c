int __fastcall pcba_dash_recv(int a1)
{
  unsigned int v2; // r6
  unsigned int *v3; // r4
  __int64 v4; // r0
  int v6; // r3
  _QWORD v7[10]; // [sp+0h] [bp-54h] BYREF

  memset(v7, 0, sizeof(v7));
  (*(void (__fastcall **)(int, _QWORD *))(a1 + 28))(a1, v7);
  v2 = *(_DWORD *)(a1 + 224);
  v3 = (unsigned int *)(*(_DWORD *)(*(_DWORD *)(g_config_info[0] + 8) + 8) + 104 * g_patten_offset);
  LODWORD(v4) = *((unsigned __int8 *)v3 + 84) / v2;
  HIDWORD(v4) = (bswap32(v3[21]) - (((_DWORD)v4 * v2) << 24)) % 0xA;
  if ( v7[1] != v4 || memcmp(&v7[6], v3 + 21, v3[23]) )
    return 0;
  v6 = v3[25] + 1;
  need_pattern = 1;
  v3[25] = v6;
  return 1;
}
