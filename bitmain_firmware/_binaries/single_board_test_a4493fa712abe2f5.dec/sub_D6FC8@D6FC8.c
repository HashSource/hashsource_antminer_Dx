int __fastcall sub_D6FC8(int a1, int a2, int a3, _BYTE *a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  unsigned __int8 *v8; // r2
  unsigned int v9; // r6
  int v10; // t1
  int v11; // r7
  int v12; // lr
  int v13; // r6
  _DWORD *v14; // r3
  _DWORD *v15; // r2
  int *v16; // r6
  int v17; // r10
  int v18; // r9
  int v19; // r8
  int v20; // r10
  int v21; // r9
  int v22; // r8
  int v23; // r10
  int v24; // r9
  int v25; // r3
  int v26; // r3
  int v27; // r10
  int v28; // r9
  int v29; // r2
  int v30; // r7
  int v31; // r2
  int v32; // r3
  int v33; // r10
  int v34; // r2
  int v35; // r3
  int v36; // r10
  int v37; // r8
  int v38; // r10
  int v39; // r5
  int v40; // lr
  int v41; // r2
  int v42; // r6
  int v43; // r3
  int v45; // r1
  char v47[4100]; // [sp+18h] [bp-1004h] BYREF

  v8 = (unsigned __int8 *)(a2 + 2);
  v9 = 0xFFFF;
  do
  {
    v10 = *v8++;
    v9 = (unsigned __int16)(crc_itu_t_table[v10 ^ (v9 >> 8)] ^ ((_WORD)v9 << 8));
  }
  while ( v8 != (unsigned __int8 *)(a2 + 41) );
  v11 = *(unsigned __int8 *)(a2 + 42) | (*(unsigned __int8 *)(a2 + 41) << 8);
  if ( v11 == v9 )
  {
    v12 = *(unsigned __int8 *)(a2 + 3);
    v13 = *(_DWORD *)(a1 + 600);
    v14 = (_DWORD *)(v13 + 40 * v12);
    v15 = (_DWORD *)(v13 + 32 * (v12 + 576));
    v16 = (int *)(v13 + 8 * v12);
    v14 += 2048;
    v17 = v14[1];
    v18 = v14[2];
    v19 = v14[3];
    *(_DWORD *)(a3 + 34) = *v14;
    *(_DWORD *)(a3 + 38) = v17;
    *(_DWORD *)(a3 + 42) = v18;
    *(_DWORD *)(a3 + 46) = v19;
    v20 = v14[5];
    v21 = v14[6];
    v22 = v14[7];
    *(_DWORD *)(a3 + 50) = v14[4];
    *(_DWORD *)(a3 + 54) = v20;
    *(_DWORD *)(a3 + 58) = v21;
    *(_DWORD *)(a3 + 62) = v22;
    v23 = v15[1];
    v24 = v15[2];
    v25 = v15[3];
    *(_DWORD *)(a3 + 66) = *v15;
    *(_DWORD *)(a3 + 70) = v23;
    *(_DWORD *)(a3 + 74) = v24;
    *(_DWORD *)(a3 + 78) = v25;
    v26 = v15[7];
    v27 = v15[5];
    v28 = v15[6];
    *(_DWORD *)(a3 + 82) = v15[4];
    *(_DWORD *)(a3 + 86) = v27;
    *(_DWORD *)(a3 + 90) = v28;
    *(_DWORD *)(a3 + 94) = v26;
    v29 = v16[1024];
    v30 = (*(unsigned __int8 *)(a2 + 6) << 16)
        + (*(unsigned __int8 *)(a2 + 7) << 8)
        + *(unsigned __int8 *)(a2 + 8)
        + (*(unsigned __int8 *)(a2 + 5) << 24);
    v16[1025] = v16[1025];
    v16[1024] = v29 | v30;
    v31 = *(_DWORD *)(a2 + 13);
    v32 = *(_DWORD *)(a2 + 17);
    v33 = *(_DWORD *)(a2 + 21);
    *(_DWORD *)(a3 + 98) = *(_DWORD *)(a2 + 9);
    *(_DWORD *)(a3 + 102) = v31;
    *(_DWORD *)(a3 + 106) = v32;
    *(_DWORD *)(a3 + 110) = v33;
    v34 = *(_DWORD *)(a2 + 29);
    v35 = *(_DWORD *)(a2 + 33);
    v36 = *(_DWORD *)(a2 + 37);
    *(_DWORD *)(a3 + 114) = *(_DWORD *)(a2 + 25);
    *(_DWORD *)(a3 + 118) = v34;
    *(_DWORD *)(a3 + 122) = v35;
    *(_DWORD *)(a3 + 126) = v36;
    v37 = v16[1024];
    v38 = v16[1025];
    *(_DWORD *)(a3 + 26) = v37;
    *(_DWORD *)(a3 + 30) = v38;
    v16[1025] = v38;
    v16[1024] = 0;
    *(_BYTE *)(a3 + 16) = v12;
    *(_BYTE *)(a3 + 17) = *(_BYTE *)(a2 + 4);
    v39 = v16[512];
    v40 = v16[513];
    v41 = *v16;
    v42 = v16[1];
    *(_DWORD *)(a3 + 18) = v39;
    *(_DWORD *)(a3 + 22) = v40;
    *(_DWORD *)a3 = v41;
    *(_DWORD *)(a3 + 4) = v42;
    *a7 = v41;
    v43 = sub_F7A2C(v37 & 7, *(unsigned int *)(a1 + 224));
    *(_DWORD *)(a3 + 8) = v43;
    *(_DWORD *)(a3 + 12) = (unsigned __int16)v37 >> 12;
    *a6 = v43;
    v45 = *(_DWORD *)(a3 + 26);
    a5[1] = *(_DWORD *)(a3 + 30);
    *a5 = v45;
    *a4 = 1;
    return 0;
  }
  else
  {
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v47, 0x1000u, 0, "get nonce crc error calc value %04x resp value %04x", v9, v11);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
      71,
      "packet_2_nonce_eth",
      18,
      12352,
      100,
      v47);
    return 2;
  }
}
