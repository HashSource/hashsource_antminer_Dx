int __fastcall work_2_packet_grin32(int a1, int *a2, int a3, _DWORD *a4)
{
  int v5; // r7
  _BYTE *v7; // r9
  int v8; // r3
  int *v10; // r10
  int *v11; // r1
  int v12; // lr
  int v13; // r12
  int v14; // r0
  _DWORD *v15; // r3
  unsigned int v16; // r2
  int v17; // r0
  int v18; // r12
  int v19; // r2
  int v20; // r12
  int v21; // r6
  unsigned __int8 *v22; // r3
  unsigned int v23; // r0
  int v24; // t1
  unsigned __int16 v25; // r2

  v5 = *(_DWORD *)(a1 + 600);
  *(_BYTE *)a3 = 85;
  *(_BYTE *)(a3 + 1) = -86;
  *(_BYTE *)(a3 + 2) = 33;
  v7 = (_BYTE *)(v5 + 57088);
  v8 = *(_DWORD *)(a1 + 288);
  *(_BYTE *)(a3 + 4) = 0;
  v10 = a2 + 4;
  v11 = a2 + 4;
  if ( v8 == 1 )
    *(_BYTE *)(a3 + 2) = 49;
  v12 = a2[3];
  v13 = *a2;
  v14 = a2[1];
  v15 = (_DWORD *)(v5 + 8 * (unsigned __int8)*v7);
  v15[256] = a2[2];
  v15[257] = v12;
  *v15 = v13;
  v15[1] = v14;
  memcpy((void *)(a3 + 5), v11, 0xEEu);
  v16 = HIBYTE(*(unsigned int *)((char *)a2 + 258))
      | (unsigned __int16)((unsigned __int8)BYTE2(*(unsigned int *)((char *)a2 + 258)) << 8)
      | ((unsigned __int8)BYTE1(*(int *)((char *)a2 + 258)) << 16) & 0xFFFFFF
      | ((unsigned __int8)*(int *)((char *)a2 + 258) << 24);
  *(_DWORD *)(a3 + 247) = HIBYTE(*(unsigned int *)((char *)a2 + 254))
                        | (unsigned __int16)((unsigned __int8)BYTE2(*(unsigned int *)((char *)a2 + 254)) << 8)
                        | ((unsigned __int8)BYTE1(*(int *)((char *)a2 + 254)) << 16) & 0xFFFFFF
                        | ((unsigned __int8)*(int *)((char *)a2 + 254) << 24);
  *(_DWORD *)(a3 + 243) = v16;
  v17 = (unsigned __int8)*v7;
  v18 = *(int *)((char *)a2 + 258);
  *(_DWORD *)(v5 + 8 * (v17 + 256)) = 0;
  *(_DWORD *)(v5 + 8 * (v17 + 256) + 4) = v18;
  memcpy((void *)(v5 + 246 * v17 + 4096), v10, 0xF6u);
  v19 = (unsigned __int8)*v7;
  v20 = *(int *)((char *)a2 + 262);
  v21 = *(int *)((char *)a2 + 266);
  *(_DWORD *)(v5 + 8 * (v19 + 384)) = v20;
  *(_DWORD *)(v5 + 8 * (v19 + 384) + 4) = v21;
  *(_BYTE *)(a3 + 3) = v19;
  if ( (((_BYTE)v19 + 1) & 0x80) == 0 )
    *v7 = v19 + 1;
  v22 = (unsigned __int8 *)(a3 + 2);
  v23 = 0xFFFF;
  if ( (((_BYTE)v19 + 1) & 0x80) != 0 )
    *v7 = 0;
  do
  {
    v24 = *v22++;
    v25 = crc_itu_t_table[v24 ^ (v23 >> 8)] ^ ((_WORD)v23 << 8);
    v23 = v25;
  }
  while ( (unsigned __int8 *)(a3 + 251) != v22 );
  *(_BYTE *)(a3 + 252) = v25;
  *(_BYTE *)(a3 + 251) = HIBYTE(v25);
  *a4 = 253;
  return 0;
}
