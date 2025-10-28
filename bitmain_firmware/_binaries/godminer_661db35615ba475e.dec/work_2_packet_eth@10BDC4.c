int __fastcall work_2_packet_eth(int a1, int *a2, int a3, _DWORD *a4)
{
  int v4; // r6
  int v5; // r4
  int v6; // r9
  int v7; // r8
  int v8; // r11
  _DWORD *v9; // r5
  int *v10; // r0
  int v11; // r9
  int v12; // r5
  int v13; // r4
  int v14; // r5
  int v15; // r4
  int v16; // r9
  int *v17; // r12
  int v18; // r9
  int v19; // r5
  int v20; // r4
  int v21; // lr
  int v22; // lr
  int v23; // r11
  int v24; // r10
  int v25; // r5
  int *v26; // r12
  unsigned __int8 *v27; // lr
  int v28; // r11
  int v29; // r10
  int v30; // r5
  unsigned int v31; // r8
  int v32; // r0
  unsigned int v33; // r12
  int v34; // r8
  int v35; // r1
  int v36; // t1
  unsigned __int16 v37; // r1

  v4 = *(_DWORD *)(a1 + 600);
  *(_BYTE *)a3 = 85;
  *(_BYTE *)(a3 + 2) = 32;
  *(_BYTE *)(a3 + 1) = -86;
  if ( *(_DWORD *)(a1 + 288) == 1 )
    *(_BYTE *)(a3 + 2) = 48;
  v5 = *(unsigned __int8 *)(v4 + 35072);
  v6 = *a2;
  v7 = a2[1];
  v8 = a2[2];
  v9 = (_DWORD *)(v4 + 8 * v5);
  v9[513] = a2[3];
  v9[512] = v8;
  *v9 = v6;
  v9[1] = v7;
  *(_BYTE *)(a3 + 3) = v5;
  *(_BYTE *)(v4 + v5 + 34816) = *((_BYTE *)a2 + 88);
  v10 = a2 + 4;
  v11 = a2[5];
  v12 = a2[6];
  v13 = a2[7];
  *(_DWORD *)(a3 + 4) = a2[4];
  *(_DWORD *)(a3 + 8) = v11;
  *(_DWORD *)(a3 + 12) = v12;
  *(_DWORD *)(a3 + 16) = v13;
  v14 = a2[10];
  v15 = a2[11];
  v16 = a2[9];
  *(_DWORD *)(a3 + 20) = a2[8];
  *(_DWORD *)(a3 + 24) = v16;
  *(_DWORD *)(a3 + 28) = v14;
  *(_DWORD *)(a3 + 32) = v15;
  v17 = (int *)(v4 + 40 * *(unsigned __int8 *)(v4 + 35072) + 0x2000);
  do
  {
    v18 = *v10;
    v10 += 4;
    v19 = *(v10 - 3);
    v17 += 4;
    v20 = *(v10 - 2);
    v21 = *(v10 - 1);
    *(v17 - 4) = v18;
    *(v17 - 3) = v19;
    *(v17 - 2) = v20;
    *(v17 - 1) = v21;
  }
  while ( v10 != a2 + 12 );
  v22 = v10[1];
  *v17 = *v10;
  v17[1] = v22;
  v23 = v10[1];
  v24 = v10[2];
  v25 = v10[3];
  v26 = (int *)(v4 + 32 * (*(unsigned __int8 *)(v4 + 35072) + 576));
  *v26 = *v10;
  v27 = (unsigned __int8 *)(a3 + 2);
  v26[1] = v23;
  v26[2] = v24;
  v26[3] = v25;
  v28 = v10[5];
  v29 = v10[6];
  v30 = v10[7];
  v26[4] = v10[4];
  v26[5] = v28;
  v26[6] = v29;
  v26[7] = v30;
  v31 = HIBYTE(a2[21])
      | (unsigned __int16)((unsigned __int8)BYTE2(a2[21]) << 8)
      | ((unsigned __int8)BYTE1(a2[21]) << 16) & 0xFFFFFF
      | ((unsigned __int8)a2[21] << 24);
  *(_DWORD *)(a3 + 40) = HIBYTE(a2[20])
                       | (unsigned __int16)((unsigned __int8)BYTE2(a2[20]) << 8)
                       | ((unsigned __int8)BYTE1(a2[20]) << 16) & 0xFFFFFF
                       | ((unsigned __int8)a2[20] << 24);
  *(_DWORD *)(a3 + 36) = v31;
  v32 = *(unsigned __int8 *)(v4 + 35072);
  v33 = 0xFFFF;
  v34 = a2[21];
  v35 = v32 + 512;
  *(_DWORD *)(v4 + 8 * v35) = 0;
  *(_DWORD *)(v4 + 8 * v35 + 4) = v34;
  *(_BYTE *)(v4 + 35072) = v32 + 1;
  do
  {
    v36 = *v27++;
    v37 = crc_itu_t_table[v36 ^ (v33 >> 8)] ^ ((_WORD)v33 << 8);
    v33 = v37;
  }
  while ( (unsigned __int8 *)(a3 + 44) != v27 );
  *(_BYTE *)(a3 + 45) = v37;
  *(_BYTE *)(a3 + 44) = HIBYTE(v37);
  *a4 = 46;
  return 0;
}
