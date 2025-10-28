int __fastcall work_2_packet_grin32(int a1, int *a2, int a3, _DWORD *a4)
{
  int v5; // r7
  int v7; // r3
  int *v9; // r10
  int *v10; // r1
  int v11; // lr
  int v12; // r12
  int v13; // r0
  _DWORD *v14; // r3
  unsigned int v15; // r2
  int v16; // r0
  int v17; // r12
  int v18; // r2
  int v19; // r12
  unsigned __int8 *v20; // r3
  unsigned int v21; // r0
  int v22; // t1
  unsigned __int16 v23; // r2

  v5 = *(_DWORD *)(a1 + 600);
  *(_BYTE *)a3 = 85;
  *(_BYTE *)(a3 + 2) = 33;
  *(_BYTE *)(a3 + 1) = -86;
  v7 = *(_DWORD *)(a1 + 288);
  *(_BYTE *)(a3 + 4) = 0;
  v9 = a2 + 4;
  v10 = a2 + 4;
  if ( v7 == 1 )
    *(_BYTE *)(a3 + 2) = 49;
  v11 = a2[3];
  v12 = *a2;
  v13 = a2[1];
  v14 = (_DWORD *)(v5 + 8 * *(unsigned __int8 *)(v5 + 57088));
  v14[256] = a2[2];
  v14[257] = v11;
  *v14 = v12;
  v14[1] = v13;
  memcpy((void *)(a3 + 5), v10, 0xEEu);
  v15 = HIBYTE(*(unsigned int *)((char *)a2 + 258))
      | (unsigned __int16)((unsigned __int8)BYTE2(*(unsigned int *)((char *)a2 + 258)) << 8)
      | ((unsigned __int8)BYTE1(*(int *)((char *)a2 + 258)) << 16) & 0xFFFFFF
      | ((unsigned __int8)*(int *)((char *)a2 + 258) << 24);
  *(_DWORD *)(a3 + 247) = HIBYTE(*(unsigned int *)((char *)a2 + 254))
                        | (unsigned __int16)((unsigned __int8)BYTE2(*(unsigned int *)((char *)a2 + 254)) << 8)
                        | ((unsigned __int8)BYTE1(*(int *)((char *)a2 + 254)) << 16) & 0xFFFFFF
                        | ((unsigned __int8)*(int *)((char *)a2 + 254) << 24);
  *(_DWORD *)(a3 + 243) = v15;
  v16 = *(unsigned __int8 *)(v5 + 57088);
  v17 = *(int *)((char *)a2 + 258);
  *(_DWORD *)(v5 + 8 * (v16 + 256)) = 0;
  *(_DWORD *)(v5 + 8 * (v16 + 256) + 4) = v17;
  memcpy((void *)(v5 + 246 * v16 + 4096), v9, 0xF6u);
  v18 = *(unsigned __int8 *)(v5 + 57088);
  v19 = *(int *)((char *)a2 + 266);
  *(_DWORD *)(v5 + 8 * (v18 + 384)) = *(int *)((char *)a2 + 262);
  *(_DWORD *)(v5 + 8 * (v18 + 384) + 4) = v19;
  *(_BYTE *)(a3 + 3) = v18;
  if ( (((_BYTE)v18 + 1) & 0x80) == 0 )
    *(_BYTE *)(v5 + 57088) = v18 + 1;
  v20 = (unsigned __int8 *)(a3 + 2);
  v21 = 0xFFFF;
  if ( (((_BYTE)v18 + 1) & 0x80) != 0 )
    *(_BYTE *)(v5 + 57088) = 0;
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
