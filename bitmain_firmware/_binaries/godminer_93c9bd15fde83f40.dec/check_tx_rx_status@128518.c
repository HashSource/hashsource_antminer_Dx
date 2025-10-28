int __fastcall check_tx_rx_status(int a1, int a2, int a3)
{
  int v3; // r11
  char *v4; // r0
  int *v5; // r3
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r3
  __int16 *v10; // r10
  int v11; // r1
  int v12; // r0
  char *v13; // r4
  int v14; // r7
  int v15; // r3
  int v16; // r0
  int v17; // r12
  int v18; // r2
  char *ptr; // [sp+14h] [bp-1020h]
  _DWORD v23[3]; // [sp+20h] [bp-1014h] BYREF
  __int16 v24; // [sp+2Ch] [bp-1008h]
  __int16 v25; // [sp+2Eh] [bp-1006h] BYREF
  char v26[4100]; // [sp+30h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v26, 0x1000u, 0, 1560772, "check_tx_rx_status");
  pthread_mutex_unlock(&stru_1A8A24);
  LOWORD(v3) = -14180;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_tx_rx_status",
    18,
    8527,
    60,
    v26);
  v4 = (char *)malloc(0x600u);
  LOWORD(v5) = -15620;
  ptr = v4;
  HIWORD(v5) = (unsigned int)" = %d.\n" >> 16;
  v6 = *v5;
  v7 = v5[1];
  v8 = v5[2];
  v9 = v5[3];
  v10 = (__int16 *)v23;
  v23[0] = v6;
  v23[1] = v7;
  v23[2] = v8;
  v24 = v9;
  do
  {
    if ( a3 == 255 )
      v11 = *(unsigned __int8 *)v10;
    else
      v11 = a3;
    v12 = sub_DF23C(a1, v11, 113, ptr);
    if ( v12 > 0 )
    {
      v13 = ptr + 28;
      v14 = (int)&ptr[12 * v12 + 28];
      do
      {
        if ( *((_DWORD *)v13 - 7) == -1 )
        {
          __pld(v13);
          pthread_mutex_lock(&stru_1A8A24);
          HIWORD(v3) = (unsigned int)"_freq_ltc" >> 16;
          logfmt_raw(
            v26,
            0x1000u,
            0,
            v3,
            (unsigned __int8)*(v13 - 24),
            (unsigned __int8)*(v13 - 20),
            113,
            *((_DWORD *)v13 - 7));
          pthread_mutex_unlock(&stru_1A8A24);
          v16 = g_zc;
          v17 = 20;
          v18 = 8544;
        }
        else
        {
          pthread_mutex_lock(&stru_1A8A24);
          LOWORD(v15) = -14236;
          HIWORD(v15) = (unsigned int)"get_addr_GRIN32" >> 16;
          logfmt_raw(
            v26,
            0x1000u,
            0,
            v15,
            (unsigned __int8)*(v13 - 24),
            (unsigned __int8)*(v13 - 20),
            113,
            *((_DWORD *)v13 - 7));
          pthread_mutex_unlock(&stru_1A8A24);
          v16 = g_zc;
          v17 = 100;
          v18 = 8542;
        }
        v13 += 12;
        zlog(
          v16,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_eth/backend_eth.c",
          154,
          "check_tx_rx_status",
          18,
          v18,
          v17,
          v26);
      }
      while ( v13 != (char *)v14 );
    }
    v10 = (__int16 *)((char *)v10 + 1);
  }
  while ( v10 != &v25 );
  free(ptr);
  return 0;
}
