int __fastcall work_2_packet_grin29(int a1, int *a2, int a3, _DWORD *a4)
{
  int v5; // r7
  _BYTE *v7; // r9
  int *v9; // r10
  int v10; // r8
  int v11; // lr
  int v12; // r12
  _DWORD *v13; // r3
  unsigned int v14; // r2
  int v15; // r0
  int v16; // r12
  int v17; // r2
  int v18; // r12
  int v19; // r6
  unsigned __int8 *v20; // r3
  unsigned int v21; // r0
  int v22; // t1
  unsigned __int16 v23; // r2

  v5 = *(_DWORD *)(a1 + 600);
  *(_BYTE *)a3 = 85;
  *(_BYTE *)(a3 + 2) = 32;
  v7 = (_BYTE *)(v5 + 128000);
  *(_BYTE *)(a3 + 1) = -86;
  v9 = a2 + 4;
  if ( *(_DWORD *)(a1 + 288) == 1 )
    *(_BYTE *)(a3 + 2) = 48;
  v10 = a2[3];
  v11 = *a2;
  v12 = a2[1];
  v13 = (_DWORD *)(v5 + 8 * (unsigned __int8)*v7);
  v13[256] = a2[2];
  v13[257] = v10;
  *v13 = v11;
  v13[1] = v12;
  memcpy((void *)(a3 + 5), a2 + 4, 0xEEu);
  v14 = HIBYTE(*(unsigned int *)((char *)a2 + 258))
      | (unsigned __int16)((unsigned __int8)BYTE2(*(unsigned int *)((char *)a2 + 258)) << 8)
      | ((unsigned __int8)BYTE1(*(int *)((char *)a2 + 258)) << 16) & 0xFFFFFF
      | ((unsigned __int8)*(int *)((char *)a2 + 258) << 24);
  *(_DWORD *)(a3 + 247) = HIBYTE(*(unsigned int *)((char *)a2 + 254))
                        | (unsigned __int16)((unsigned __int8)BYTE2(*(unsigned int *)((char *)a2 + 254)) << 8)
                        | ((unsigned __int8)BYTE1(*(int *)((char *)a2 + 254)) << 16) & 0xFFFFFF
                        | ((unsigned __int8)*(int *)((char *)a2 + 254) << 24);
  *(_DWORD *)(a3 + 243) = v14;
  v15 = (unsigned __int8)*v7;
  v16 = *(int *)((char *)a2 + 258);
  *(_DWORD *)(v5 + 8 * (v15 + 256)) = 0;
  *(_DWORD *)(v5 + 8 * (v15 + 256) + 4) = v16;
  memcpy((void *)(v5 + 246 * v15 + 4352), v9, 0xF6u);
  v17 = (unsigned __int8)*v7;
  v18 = *(int *)((char *)a2 + 262);
  v19 = *(int *)((char *)a2 + 266);
  *(_DWORD *)(v5 + 8 * (v17 + 384)) = v18;
  *(_DWORD *)(v5 + 8 * (v17 + 384) + 4) = v19;
  *(_BYTE *)(a3 + 4) = v17;
  if ( (((_BYTE)v17 + 1) & 0x80) == 0 )
    *v7 = v17 + 1;
  v20 = (unsigned __int8 *)(a3 + 2);
  v21 = 0xFFFF;
  if ( (((_BYTE)v17 + 1) & 0x80) != 0 )
    *v7 = 0;
  *(_BYTE *)(a3 + 3) = -10;
  do
  {
    v22 = *v20++;
    v23 = crc_itu_t_table[v22 ^ (v21 >> 8)] ^ ((_WORD)v21 << 8);
    v21 = v23;
  }
  while ( (unsigned __int8 *)(a3 + 251) != v20 );
  *(_BYTE *)(a3 + 252) = v23;
  *(_BYTE *)(a3 + 251) = HIBYTE(v23);
  *a4 = 253;
  return 0;
}
