int __fastcall nonce_pop_handler_ae(int a1, int a2, int a3)
{
  int v5; // r4
  int v7; // r2
  int v8; // r3

  v5 = memcmp((const void *)(a3 + 16), (const void *)(a1 + 448), 0x20u);
  if ( v5 )
    return 1;
  *(_DWORD *)(a2 + 396) = malloc(0xA8u);
  **(_DWORD **)(a2 + 392) = (unsigned __int8)HIBYTE(*(_DWORD *)(a3 + 81))
                          | (unsigned __int16)((unsigned __int8)BYTE2(*(_DWORD *)(a3 + 81)) << 8)
                          | ((unsigned __int8)BYTE1(*(_DWORD *)(a3 + 81)) << 16) & 0xFFFFFF
                          | ((unsigned __int8)*(_DWORD *)(a3 + 81) << 24);
  v7 = *(_DWORD *)(a2 + 396) - 4;
  do
  {
    v8 = v5 + 20;
    ++v5;
    *(_DWORD *)(v7 + 4) = *(_DWORD *)(a3 + 4 * v8 + 7);
    v7 += 4;
  }
  while ( v5 != 42 );
  return 0;
}
