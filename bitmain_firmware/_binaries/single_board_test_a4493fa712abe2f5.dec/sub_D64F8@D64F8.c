int __fastcall sub_D64F8(int a1, _BYTE *a2, int a3, _BYTE *a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  _BYTE *v9; // r2
  unsigned int v10; // r5
  int v11; // t1
  int v12; // r7
  unsigned __int8 v13; // r9
  int v14; // r11
  unsigned int *v15; // r5
  unsigned int v16; // r12
  int v17; // r2
  void *v18; // r10
  int v19; // r2
  unsigned __int8 *v20; // lr
  unsigned int v21; // r1
  int v22; // r11
  int v23; // r12
  int v24; // r0
  int v25; // r3
  unsigned int v26; // r3
  unsigned int v27; // r12
  unsigned __int64 v28; // r2
  unsigned int v29; // r6
  unsigned __int64 v30; // r0
  unsigned int v31; // r5
  int v32; // r3
  int v34; // r2
  char v36[4100]; // [sp+18h] [bp-1004h] BYREF

  v9 = a2 + 2;
  v10 = 0xFFFF;
  do
  {
    v11 = (unsigned __int8)*v9++;
    v10 = (unsigned __int16)(crc_itu_t_table[v11 ^ (v10 >> 8)] ^ ((_WORD)v10 << 8));
  }
  while ( v9 != a2 + 177 );
  v12 = (unsigned __int8)a2[178] | ((unsigned __int8)a2[177] << 8);
  if ( v12 == v10 )
  {
    v13 = a2[3];
    v14 = *(_DWORD *)(a1 + 600);
    v15 = (unsigned int *)(v14 + 8 * v13);
    v16 = v15[513];
    v17 = (((unsigned __int8)a2[6] << 16)
         + ((unsigned __int8)a2[7] << 8)
         + (unsigned __int8)a2[8]
         + ((unsigned __int8)a2[5] << 24))
        | v15[512];
    v18 = (void *)(168 * v13 + 35584 + v14);
    v15[512] = v17;
    v15[513] = v16;
    *(_DWORD *)(a3 + 25) = v17;
    *(_DWORD *)(a3 + 29) = v16;
    memcpy(v18, a2 + 9, 0xA8u);
    v19 = 0;
    v20 = (unsigned __int8 *)(168 * v13 + 35585 + v14);
    do
    {
      v21 = v19 & 0xFFFFFFFC;
      v22 = v20[1];
      v19 += 4;
      v23 = v20[2];
      v24 = *(v20 - 1);
      v25 = *v20 << 16;
      v20 += 4;
      *(_DWORD *)(v21 + a3 + 35) = v25 + (v22 << 8) + v23 + (v24 << 24);
    }
    while ( v19 != 168 );
    v26 = v15[513];
    v15[512] = 0;
    v15[513] = v26;
    memset(v18, 0, 0xA8u);
    *(_BYTE *)(a3 + 16) = v13;
    v27 = v15[256];
    v28 = *v15;
    v29 = v15[257];
    *(_QWORD *)a3 = *(_QWORD *)v15;
    v30 = (unsigned int)a7;
    *(_DWORD *)(a3 + 17) = v27;
    *(_DWORD *)(a3 + 21) = v29;
    *a7 = v28;
    v31 = *(_DWORD *)(a3 + 25);
    LODWORD(v28) = *(_DWORD *)(a1 + 224);
    LODWORD(v30) = HIBYTE(v31);
    v32 = sub_F7A2C(v30, v28);
    *(_DWORD *)(a3 + 8) = v32;
    *(_DWORD *)(a3 + 12) = v31 & 1;
    *a6 = v32;
    v34 = *(_DWORD *)(a3 + 25);
    a5[1] = *(_DWORD *)(a3 + 29);
    *a5 = v34;
    *a4 = 0;
    return 0;
  }
  else
  {
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v36, 0x1000u, 0, "get nonce crc error calc value %04x resp value %04x", v10, v12);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_grin32/backend_grin32.c",
      77,
      "packet_2_nonce_grin32",
      21,
      167,
      20,
      v36);
    return 2;
  }
}
