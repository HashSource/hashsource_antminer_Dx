int __fastcall sub_72E44(int a1, int a2, int a3, _BYTE *a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  unsigned __int8 *v9; // r2
  unsigned int v10; // r5
  int v11; // t1
  int v12; // r6
  int v13; // r8
  int v14; // lr
  _DWORD *v15; // r3
  _DWORD *v16; // r2
  int *v17; // lr
  int v18; // r10
  int v19; // r9
  int v20; // r6
  int v21; // r10
  int v22; // r9
  int v23; // r6
  int v24; // r9
  int v25; // r6
  int v26; // r3
  int v27; // r3
  int v28; // r9
  int v29; // r6
  int v30; // r0
  int v31; // r6
  int v32; // r3
  int v33; // r9
  int v34; // r0
  int v35; // r3
  int v36; // r9
  int v37; // r0
  int v38; // r9
  int v39; // r2
  int v40; // r12
  int v41; // r5
  int v42; // r2
  int v43; // lr
  int v44; // r2
  int v46; // r3
  char v48[4100]; // [sp+18h] [bp-1004h] BYREF

  v9 = (unsigned __int8 *)(a2 + 2);
  v10 = 0xFFFF;
  do
  {
    v11 = *v9++;
    v10 = (unsigned __int16)(crc_itu_t_table[v11 ^ (v10 >> 8)] ^ ((_WORD)v10 << 8));
  }
  while ( v9 != (unsigned __int8 *)(a2 + 41) );
  v12 = *(unsigned __int8 *)(a2 + 42) | (*(unsigned __int8 *)(a2 + 41) << 8);
  if ( v12 == v10 )
  {
    v13 = *(unsigned __int8 *)(a2 + 3);
    v14 = *(_DWORD *)(a1 + 624);
    v15 = (_DWORD *)(v14 + 40 * v13);
    v16 = (_DWORD *)(v14 + 32 * (v13 + 576));
    v17 = (int *)(v14 + 8 * v13);
    v15 += 2048;
    v18 = v15[1];
    v19 = v15[2];
    v20 = v15[3];
    *(_DWORD *)(a3 + 34) = *v15;
    *(_DWORD *)(a3 + 38) = v18;
    *(_DWORD *)(a3 + 42) = v19;
    *(_DWORD *)(a3 + 46) = v20;
    v21 = v15[5];
    v22 = v15[6];
    v23 = v15[7];
    *(_DWORD *)(a3 + 50) = v15[4];
    *(_DWORD *)(a3 + 54) = v21;
    *(_DWORD *)(a3 + 58) = v22;
    *(_DWORD *)(a3 + 62) = v23;
    v24 = v16[1];
    v25 = v16[2];
    v26 = v16[3];
    *(_DWORD *)(a3 + 66) = *v16;
    *(_DWORD *)(a3 + 70) = v24;
    *(_DWORD *)(a3 + 74) = v25;
    *(_DWORD *)(a3 + 78) = v26;
    v27 = v16[7];
    v28 = v16[5];
    v29 = v16[6];
    *(_DWORD *)(a3 + 82) = v16[4];
    *(_DWORD *)(a3 + 86) = v28;
    *(_DWORD *)(a3 + 90) = v29;
    *(_DWORD *)(a3 + 94) = v27;
    v30 = v17[1024];
    v31 = (*(unsigned __int8 *)(a2 + 6) << 16)
        + (*(unsigned __int8 *)(a2 + 7) << 8)
        + *(unsigned __int8 *)(a2 + 8)
        + (*(unsigned __int8 *)(a2 + 5) << 24);
    v17[1025] = v17[1025];
    v17[1024] = v31 | v30;
    v32 = *(_DWORD *)(a2 + 13);
    v33 = *(_DWORD *)(a2 + 17);
    v34 = *(_DWORD *)(a2 + 21);
    *(_DWORD *)(a3 + 98) = *(_DWORD *)(a2 + 9);
    *(_DWORD *)(a3 + 102) = v32;
    *(_DWORD *)(a3 + 106) = v33;
    *(_DWORD *)(a3 + 110) = v34;
    v35 = *(_DWORD *)(a2 + 29);
    v36 = *(_DWORD *)(a2 + 33);
    v37 = *(_DWORD *)(a2 + 37);
    *(_DWORD *)(a3 + 114) = *(_DWORD *)(a2 + 25);
    *(_DWORD *)(a3 + 118) = v35;
    *(_DWORD *)(a3 + 126) = v37;
    *(_DWORD *)(a3 + 122) = v36;
    v38 = v17[1024];
    v39 = v17[1025];
    *(_DWORD *)(a3 + 26) = v38;
    *(_DWORD *)(a3 + 30) = v39;
    v17[1024] = 0;
    v17[1025] = v39;
    *(_BYTE *)(a3 + 16) = v13;
    *(_BYTE *)(a3 + 17) = *(_BYTE *)(a2 + 4);
    v40 = v17[1];
    v41 = v17[512];
    v42 = *v17;
    v43 = v17[513];
    *(_DWORD *)(a3 + 4) = v40;
    *(_DWORD *)a3 = v42;
    *(_DWORD *)(a3 + 18) = v41;
    *(_DWORD *)(a3 + 22) = v43;
    *a7 = v42;
    v44 = sub_16EB04(v38 & 7, *(unsigned int *)(a1 + 240));
    *(_DWORD *)(a3 + 12) = (unsigned __int16)v38 >> 12;
    *(_DWORD *)(a3 + 8) = v44;
    *a6 = v44;
    v46 = *(_DWORD *)(a3 + 30);
    *a5 = *(_DWORD *)(a3 + 26);
    a5[1] = v46;
    *a4 = 1;
    return 0;
  }
  else
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v48, 0x1000u, 0, "get nonce crc error calc value %04x resp value %04x", v10, v12);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "packet_2_nonce_eth",
      18,
      12353,
      100,
      v48);
    return 2;
  }
}
