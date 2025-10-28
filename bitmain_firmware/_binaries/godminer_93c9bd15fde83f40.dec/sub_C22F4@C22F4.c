int __fastcall sub_C22F4(int a1)
{
  void (__fastcall *v2)(int, _DWORD *); // r3
  unsigned __int8 *v3; // r7
  int v4; // r1
  int v5; // r0
  char *v6; // r4
  int v7; // r5
  int v8; // r0
  int v9; // r12
  int v10; // r2
  _WORD *v12; // [sp+14h] [bp-1030h]
  int v14; // [sp+1Ch] [bp-1028h]
  char *ptr; // [sp+20h] [bp-1024h]
  int v16; // [sp+28h] [bp-101Ch]
  _DWORD v17[4]; // [sp+2Ch] [bp-1018h] BYREF
  __int16 v18; // [sp+3Ch] [bp-1008h] BYREF
  _DWORD v19[2]; // [sp+40h] [bp-1004h] BYREF
  int v20; // [sp+48h] [bp-FFCh]
  int v21; // [sp+4Ch] [bp-FF8h]

  pthread_mutex_lock(&stru_1A8A24);
  v16 = 0;
  logfmt_raw((char *)v19, 0x1000u, 0, "clear debug_cmnlockstatus_cnt");
  pthread_mutex_unlock(&stru_1A8A24);
  v17[0] = "%s round:%d";
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_ref_clock_ready_ext",
    25,
    8792,
    60,
    v19);
  v20 = 7340032;
  v21 = 0;
  v19[1] = 0;
  v2 = *(void (__fastcall **)(int, _DWORD *))(a1 + 156);
  LOBYTE(v20) = 1;
  LOBYTE(v21) = -1;
  v19[0] = 0;
  v2(a1, v19);
  usleep((__useconds_t)&stru_18694.st_info);
  v17[1] = 100991489;
  v17[2] = 235735561;
  v17[3] = 134677248;
  v18 = 3851;
  do
  {
    v12 = (_WORD *)((char *)v17 + 3);
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw((char *)v19, 0x1000u, 0, v17[0], "check_ref_clock_ready_ext", v16);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "check_ref_clock_ready_ext",
      25,
      8801,
      60,
      v19);
    ptr = (char *)malloc(0x600u);
    v3 = (unsigned __int8 *)malloc(0x600u);
    do
    {
      v4 = *((unsigned __int8 *)v12 + 1);
      v12 = (_WORD *)((char *)v12 + 1);
      v14 = v4;
      v5 = sub_DF23C(a1, v4, 112, ptr);
      if ( v5 > 0 )
      {
        v6 = ptr + 16;
        v7 = (int)&ptr[12 * v5 + 16];
        do
        {
          while ( (*((_DWORD *)v6 - 4) & 0x9000000) != 0x9000000 )
          {
            __pld(v6);
            pthread_mutex_lock(&stru_1A8A24);
            logfmt_raw(
              (char *)v19,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x, cmn lock failed",
              (unsigned __int8)*(v6 - 12),
              (unsigned __int8)*(v6 - 8),
              112,
              *((_DWORD *)v6 - 4));
            pthread_mutex_unlock(&stru_1A8A24);
            v8 = g_zc;
            v9 = 100;
            v10 = 8834;
LABEL_6:
            v6 += 12;
            zlog(
              v8,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_ref_clock_ready_ext",
              25,
              v10,
              v9,
              v19);
            if ( v6 == (char *)v7 )
              goto LABEL_11;
          }
          pthread_mutex_lock(&stru_1A8A24);
          logfmt_raw(
            (char *)v19,
            0x1000u,
            0,
            "chip %02x core %02x addr %04x, %08x, cmn locked",
            (unsigned __int8)*(v6 - 12),
            (unsigned __int8)*(v6 - 8),
            112,
            *((_DWORD *)v6 - 4));
          pthread_mutex_unlock(&stru_1A8A24);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_ref_clock_ready_ext",
            25,
            8816,
            20,
            v19);
          if ( !sub_E0BD8(a1, *(v6 - 12), v14, 113, v3) || *(_DWORD *)v3 == -1 )
          {
            pthread_mutex_lock(&stru_1A8A24);
            logfmt_raw(
              (char *)v19,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x, tx/rx locked",
              v3[4],
              v3[8],
              113,
              *(_DWORD *)v3);
            pthread_mutex_unlock(&stru_1A8A24);
            v8 = g_zc;
            v9 = 20;
            v10 = 8828;
            goto LABEL_6;
          }
          pthread_mutex_lock(&stru_1A8A24);
          v6 += 12;
          logfmt_raw(
            (char *)v19,
            0x1000u,
            0,
            "chip %02x core %02x addr %04x, %08x, tx/rx lock failed",
            v3[4],
            v3[8],
            113,
            *(_DWORD *)v3);
          pthread_mutex_unlock(&stru_1A8A24);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_ref_clock_ready_ext",
            25,
            8823,
            100,
            v19);
        }
        while ( v6 != (char *)v7 );
      }
LABEL_11:
      ;
    }
    while ( (__int16 *)((char *)&v18 + 1) != v12 );
    ++v16;
    free(ptr);
    free(v3);
  }
  while ( v16 != 3 );
  return 0;
}
