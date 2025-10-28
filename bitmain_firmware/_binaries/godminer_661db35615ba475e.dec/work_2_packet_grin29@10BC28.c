int __fastcall work_2_packet_grin29(int a1, int *a2, int a3, _DWORD *a4)
{
  int v5; // r7
  int *v8; // r10
  int v9; // r8
  int v10; // lr
  int v11; // r12
  _DWORD *v12; // r3
  unsigned int v13; // r2
  int v14; // r0
  int v15; // r12
  int v16; // r2
  int v17; // r12
  unsigned __int8 *v18; // r3
  unsigned int v19; // r0
  int v20; // t1
  unsigned __int16 v21; // r2

  v5 = *(_DWORD *)(a1 + 600);
  *(_BYTE *)a3 = 85;
  *(_BYTE *)(a3 + 2) = 32;
  *(_BYTE *)(a3 + 1) = -86;
  v8 = a2 + 4;
  if ( *(_DWORD *)(a1 + 288) == 1 )
    *(_BYTE *)(a3 + 2) = 48;
  v9 = a2[3];
  v10 = *a2;
  v11 = a2[1];
  v12 = (_DWORD *)(v5 + 8 * *(unsigned __int8 *)(v5 + 128000));
  v12[256] = a2[2];
  v12[257] = v9;
  *v12 = v10;
  v12[1] = v11;
  memcpy((void *)(a3 + 5), a2 + 4, 0xEEu);
  v13 = HIBYTE(*(unsigned int *)((char *)a2 + 258))
      | (unsigned __int16)((unsigned __int8)BYTE2(*(unsigned int *)((char *)a2 + 258)) << 8)
      | ((unsigned __int8)BYTE1(*(int *)((char *)a2 + 258)) << 16) & 0xFFFFFF
      | ((unsigned __int8)*(int *)((char *)a2 + 258) << 24);
  *(_DWORD *)(a3 + 247) = HIBYTE(*(unsigned int *)((char *)a2 + 254))
                        | (unsigned __int16)((unsigned __int8)BYTE2(*(unsigned int *)((char *)a2 + 254)) << 8)
                        | ((unsigned __int8)BYTE1(*(int *)((char *)a2 + 254)) << 16) & 0xFFFFFF
                        | ((unsigned __int8)*(int *)((char *)a2 + 254) << 24);
  *(_DWORD *)(a3 + 243) = v13;
  v14 = *(unsigned __int8 *)(v5 + 128000);
  v15 = *(int *)((char *)a2 + 258);
  *(_DWORD *)(v5 + 8 * (v14 + 256)) = 0;
  *(_DWORD *)(v5 + 8 * (v14 + 256) + 4) = v15;
  memcpy((void *)(v5 + 246 * v14 + 4352), v8, 0xF6u);
  v16 = *(unsigned __int8 *)(v5 + 128000);
  v17 = *(int *)((char *)a2 + 266);
  *(_DWORD *)(v5 + 8 * (v16 + 384)) = *(int *)((char *)a2 + 262);
  *(_DWORD *)(v5 + 8 * (v16 + 384) + 4) = v17;
  *(_BYTE *)(a3 + 4) = v16;
  if ( (((_BYTE)v16 + 1) & 0x80) == 0 )
    *(_BYTE *)(v5 + 128000) = v16 + 1;
  v18 = (unsigned __int8 *)(a3 + 2);
  v19 = 0xFFFF;
  if ( (((_BYTE)v16 + 1) & 0x80) != 0 )
    *(_BYTE *)(v5 + 128000) = 0;
  *(_BYTE *)(a3 + 3) = -10;
  do
  {
    v20 = *v18++;
    v21 = crc_itu_t_table[v20 ^ (v19 >> 8)] ^ ((_WORD)v19 << 8);
    v19 = v21;
  }
  while ( (unsigned __int8 *)(a3 + 251) != v18 );
  *(_BYTE *)(a3 + 252) = v21;
  *(_BYTE *)(a3 + 251) = HIBYTE(v21);
  *a4 = 253;
  return 0;
}
