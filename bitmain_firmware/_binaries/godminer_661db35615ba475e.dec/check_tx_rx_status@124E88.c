int __fastcall check_tx_rx_status(int a1, int a2, int a3)
{
  __int16 *v3; // r10
  int v4; // r1
  int v5; // r0
  char *v6; // r4
  int v7; // r7
  int v8; // r0
  int v9; // r12
  int v10; // r2
  char *ptr; // [sp+14h] [bp-1020h]
  _DWORD v15[3]; // [sp+20h] [bp-1014h] BYREF
  __int16 v16; // [sp+2Ch] [bp-1008h]
  __int16 v17; // [sp+2Eh] [bp-1006h] BYREF
  char v18[4100]; // [sp+30h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v18, 0x1000u, 0, "%s...", "check_tx_rx_status");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_tx_rx_status",
    18,
    8527,
    60,
    v18);
  ptr = (char *)malloc(0x600u);
  v3 = (__int16 *)v15;
  v15[0] = 100991489;
  v15[1] = 235735561;
  v15[2] = 134677248;
  v16 = 3851;
  do
  {
    if ( a3 == 255 )
      v4 = *(unsigned __int8 *)v3;
    else
      v4 = a3;
    v5 = sub_93DE0(a1, v4, 113, ptr);
    if ( v5 > 0 )
    {
      v6 = ptr + 28;
      v7 = (int)&ptr[12 * v5 + 28];
      do
      {
        if ( *((_DWORD *)v6 - 7) == -1 )
        {
          __pld(v6);
          pthread_mutex_lock(&stru_197BB8);
          logfmt_raw(
            v18,
            0x1000u,
            0,
            "chip %02x core %02x addr %04x, %08x, tx/rx locked",
            (unsigned __int8)*(v6 - 24),
            (unsigned __int8)*(v6 - 20),
            113,
            *((_DWORD *)v6 - 7));
          pthread_mutex_unlock(&stru_197BB8);
          v8 = g_zc;
          v9 = 20;
          v10 = 8544;
        }
        else
        {
          pthread_mutex_lock(&stru_197BB8);
          logfmt_raw(
            v18,
            0x1000u,
            0,
            "chip %02x core %02x addr %04x, %08x, tx/rx lock failed",
            (unsigned __int8)*(v6 - 24),
            (unsigned __int8)*(v6 - 20),
            113,
            *((_DWORD *)v6 - 7));
          pthread_mutex_unlock(&stru_197BB8);
          v8 = g_zc;
          v9 = 100;
          v10 = 8542;
        }
        v6 += 12;
        zlog(
          v8,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_eth/backend_eth.c",
          154,
          "check_tx_rx_status",
          18,
          v10,
          v9,
          v18);
      }
      while ( v6 != (char *)v7 );
    }
    v3 = (__int16 *)((char *)v3 + 1);
  }
  while ( v3 != &v17 );
  free(ptr);
  return 0;
}
