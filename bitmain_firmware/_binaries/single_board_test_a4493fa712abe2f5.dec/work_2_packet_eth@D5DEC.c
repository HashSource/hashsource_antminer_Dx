int __fastcall work_2_packet_eth(int a1, int *a2, int a3, _DWORD *a4)
{
  int v4; // r6
  _BYTE *v5; // lr
  int v6; // r7
  int v7; // r9
  int v8; // r8
  int v9; // r11
  _DWORD *v10; // r12
  int *v11; // r0
  int v12; // r9
  int v13; // r12
  int v14; // r7
  int v15; // r12
  int v16; // r7
  int v17; // r9
  int *v18; // r4
  int v19; // r9
  int v20; // r12
  int v21; // r7
  int v22; // r5
  int v23; // r5
  int v24; // r10
  int v25; // r5
  int v26; // r12
  int v27; // r4
  _DWORD *v28; // r4
  int v29; // r10
  int v30; // r5
  int v31; // r12
  unsigned __int8 *v32; // r5
  unsigned int v33; // r8
  int v34; // r0
  unsigned int v35; // r4
  int v36; // r8
  int v37; // r1
  int v38; // t1
  unsigned __int16 v39; // r1

  v4 = *(_DWORD *)(a1 + 600);
  *(_BYTE *)a3 = 85;
  *(_BYTE *)(a3 + 2) = 32;
  v5 = (_BYTE *)(v4 + 35072);
  *(_BYTE *)(a3 + 1) = -86;
  if ( *(_DWORD *)(a1 + 288) == 1 )
    *(_BYTE *)(a3 + 2) = 48;
  v6 = (unsigned __int8)*v5;
  v7 = *a2;
  v8 = a2[1];
  v9 = a2[2];
  v10 = (_DWORD *)(v4 + 8 * v6);
  v10[513] = a2[3];
  v10[512] = v9;
  *v10 = v7;
  v10[1] = v8;
  *(_BYTE *)(a3 + 3) = v6;
  *(_BYTE *)(v4 + v6 + 34816) = *((_BYTE *)a2 + 88);
  v11 = a2 + 4;
  v12 = a2[5];
  v13 = a2[6];
  v14 = a2[7];
  *(_DWORD *)(a3 + 4) = a2[4];
  *(_DWORD *)(a3 + 8) = v12;
  *(_DWORD *)(a3 + 12) = v13;
  *(_DWORD *)(a3 + 16) = v14;
  v15 = a2[10];
  v16 = a2[11];
  v17 = a2[9];
  *(_DWORD *)(a3 + 20) = a2[8];
  *(_DWORD *)(a3 + 24) = v17;
  *(_DWORD *)(a3 + 28) = v15;
  *(_DWORD *)(a3 + 32) = v16;
  v18 = (int *)(v4 + 40 * (unsigned __int8)*v5 + 0x2000);
  do
  {
    v19 = *v11;
    v11 += 4;
    v20 = *(v11 - 3);
    v18 += 4;
    v21 = *(v11 - 2);
    v22 = *(v11 - 1);
    *(v18 - 4) = v19;
    *(v18 - 3) = v20;
    *(v18 - 2) = v21;
    *(v18 - 1) = v22;
  }
  while ( v11 != a2 + 12 );
  v23 = v11[1];
  *v18 = *v11;
  v18[1] = v23;
  v24 = v11[1];
  v25 = v11[2];
  v26 = v11[3];
  v27 = 32 * ((unsigned __int8)*v5 + 576);
  *(_DWORD *)(v4 + v27) = *v11;
  v28 = (_DWORD *)(v27 + v4);
  v28[1] = v24;
  v28[2] = v25;
  v28[3] = v26;
  v29 = v11[5];
  v30 = v11[6];
  v31 = v11[7];
  v28[4] = v11[4];
  v28[5] = v29;
  v28[6] = v30;
  v32 = (unsigned __int8 *)(a3 + 2);
  v28[7] = v31;
  v33 = HIBYTE(a2[21])
      | (unsigned __int16)((unsigned __int8)BYTE2(a2[21]) << 8)
      | ((unsigned __int8)BYTE1(a2[21]) << 16) & 0xFFFFFF
      | ((unsigned __int8)a2[21] << 24);
  *(_DWORD *)(a3 + 40) = HIBYTE(a2[20])
                       | (unsigned __int16)((unsigned __int8)BYTE2(a2[20]) << 8)
                       | ((unsigned __int8)BYTE1(a2[20]) << 16) & 0xFFFFFF
                       | ((unsigned __int8)a2[20] << 24);
  *(_DWORD *)(a3 + 36) = v33;
  v34 = (unsigned __int8)*v5;
  v35 = 0xFFFF;
  v36 = a2[21];
  v37 = v34 + 512;
  *(_DWORD *)(v4 + 8 * v37) = 0;
  *(_DWORD *)(v4 + 8 * v37 + 4) = v36;
  *v5 = v34 + 1;
  do
  {
    v38 = *v32++;
    v39 = crc_itu_t_table[v38 ^ (v35 >> 8)] ^ ((_WORD)v35 << 8);
    v35 = v39;
  }
  while ( (unsigned __int8 *)(a3 + 44) != v32 );
  *(_BYTE *)(a3 + 45) = v39;
  *(_BYTE *)(a3 + 44) = HIBYTE(v39);
  *a4 = 46;
  return 0;
}
