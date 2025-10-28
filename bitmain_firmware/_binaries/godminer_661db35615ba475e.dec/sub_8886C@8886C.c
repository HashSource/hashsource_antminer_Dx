int __fastcall sub_8886C(int a1, _BYTE *a2, int a3, _BYTE *a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  _BYTE *v10; // r2
  unsigned int v11; // r6
  int v12; // t1
  int v13; // r8
  unsigned __int8 v14; // r8
  int v15; // r3
  unsigned int *v16; // r5
  unsigned int v17; // t1
  int v18; // r11
  int v19; // r2
  unsigned int v20; // lr
  void *v21; // r6
  int v22; // r2
  unsigned __int8 *v23; // lr
  unsigned int v24; // r1
  int v25; // r11
  int v26; // r12
  int v27; // r0
  int v28; // r3
  unsigned int v29; // r3
  unsigned int v30; // lr
  unsigned __int64 v31; // r0
  unsigned int v32; // r12
  unsigned __int64 v33; // r2
  unsigned int v34; // r5
  int v35; // r2
  int v37; // r3
  int v38; // [sp+14h] [bp-1008h]
  char v39[4100]; // [sp+18h] [bp-1004h] BYREF

  v10 = a2 + 2;
  v11 = 0xFFFF;
  do
  {
    v12 = (unsigned __int8)*v10++;
    v11 = (unsigned __int16)(crc_itu_t_table[v12 ^ (v11 >> 8)] ^ ((_WORD)v11 << 8));
  }
  while ( v10 != a2 + 177 );
  v13 = (unsigned __int8)a2[178] | ((unsigned __int8)a2[177] << 8);
  if ( v13 == v11 )
  {
    v14 = a2[3];
    v15 = *(_DWORD *)(a1 + 600);
    v16 = (unsigned int *)(v15 + 8 * v14);
    v38 = v15;
    v17 = v16[512];
    v18 = 168 * v14;
    v19 = ((unsigned __int8)a2[6] << 16)
        + ((unsigned __int8)a2[7] << 8)
        + (unsigned __int8)a2[8]
        + ((unsigned __int8)a2[5] << 24);
    v20 = v16[513];
    v21 = (void *)(v15 + v18 + 35584);
    v16[513] = v20;
    v16[512] = v19 | v17;
    *(_DWORD *)(a3 + 29) = v20;
    *(_DWORD *)(a3 + 25) = v19 | v17;
    memcpy(v21, a2 + 9, 0xA8u);
    v22 = 0;
    v23 = (unsigned __int8 *)(v38 + v18 + 35585);
    do
    {
      v24 = v22 & 0xFFFFFFFC;
      v25 = v23[1];
      v22 += 4;
      v26 = v23[2];
      v27 = *(v23 - 1);
      v28 = *v23 << 16;
      v23 += 4;
      *(_DWORD *)(a3 + v24 + 35) = v28 + (v25 << 8) + v26 + (v27 << 24);
    }
    while ( v22 != 168 );
    v29 = v16[513];
    v16[512] = 0;
    v16[513] = v29;
    memset(v21, 0, 0xA8u);
    *(_BYTE *)(a3 + 16) = v14;
    v30 = v16[256];
    v31 = *v16;
    v32 = v16[1];
    v33 = v16[257];
    *(_DWORD *)a3 = *v16;
    *(_DWORD *)(a3 + 17) = v30;
    *(_DWORD *)(a3 + 21) = v33;
    *(_DWORD *)(a3 + 4) = v32;
    *a7 = v31;
    v34 = *(_DWORD *)(a3 + 25);
    LODWORD(v33) = *(_DWORD *)(a1 + 224);
    LODWORD(v31) = HIBYTE(v34);
    v35 = sub_15DCAC(v31, v33);
    *(_DWORD *)(a3 + 12) = v34 & 1;
    *(_DWORD *)(a3 + 8) = v35;
    *a6 = v35;
    v37 = *(_DWORD *)(a3 + 29);
    *a5 = *(_DWORD *)(a3 + 25);
    a5[1] = v37;
    *a4 = 0;
    return 0;
  }
  else
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v39, 0x1000u, 0, "get nonce crc error calc value %04x resp value %04x", v11, v13);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_grin32/backend_grin32.c",
      160,
      "packet_2_nonce_grin32",
      21,
      167,
      20,
      v39);
    return 2;
  }
}
