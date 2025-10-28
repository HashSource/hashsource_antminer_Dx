int __fastcall sub_134374(int a1)
{
  void (__fastcall *v2)(int, _DWORD *); // r3
  unsigned __int8 *v3; // r6
  int v4; // r8
  int v5; // r0
  char *v6; // r4
  int v7; // r5
  int v8; // r0
  int v9; // r12
  int v10; // r2
  _WORD *v12; // [sp+18h] [bp-102Ch]
  char *ptr; // [sp+20h] [bp-1024h]
  int v15; // [sp+28h] [bp-101Ch]
  _DWORD v16[4]; // [sp+2Ch] [bp-1018h] BYREF
  __int16 v17; // [sp+3Ch] [bp-1008h] BYREF
  _DWORD v18[2]; // [sp+40h] [bp-1004h] BYREF
  int v19; // [sp+48h] [bp-FFCh]
  int v20; // [sp+4Ch] [bp-FF8h]

  pthread_mutex_lock(&stru_197BB8);
  v15 = 0;
  logfmt_raw((char *)v18, 0x1000u, 0, "clear debug_cmnlockstatus_cnt");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_ref_clock_ready_ext",
    25,
    8792,
    60,
    v18);
  v19 = 7340032;
  v20 = 0;
  v18[1] = 0;
  v2 = *(void (__fastcall **)(int, _DWORD *))(a1 + 144);
  LOBYTE(v19) = 1;
  LOBYTE(v20) = -1;
  v18[0] = 0;
  v16[0] = "%s round:%d";
  v2(a1, v18);
  usleep((__useconds_t)"ead_unregister_cancel");
  v16[1] = 100991489;
  v16[2] = 235735561;
  v16[3] = 134677248;
  v17 = 3851;
  do
  {
    v12 = (_WORD *)((char *)v16 + 3);
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw((char *)v18, 0x1000u, 0, v16[0], "check_ref_clock_ready_ext", v15);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "check_ref_clock_ready_ext",
      25,
      8801,
      60,
      v18);
    ptr = (char *)malloc(0x600u);
    v3 = (unsigned __int8 *)malloc(0x600u);
    do
    {
      v4 = *((unsigned __int8 *)v12 + 1);
      v12 = (_WORD *)((char *)v12 + 1);
      v5 = sub_93DE0(a1, v4, 112, ptr);
      if ( v5 > 0 )
      {
        v6 = ptr + 16;
        v7 = (int)&ptr[12 * v5 + 16];
        do
        {
          while ( (*((_DWORD *)v6 - 4) & 0x9000000) != 0x9000000 )
          {
            __pld(v6);
            pthread_mutex_lock(&stru_197BB8);
            logfmt_raw(
              (char *)v18,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x, cmn lock failed",
              (unsigned __int8)*(v6 - 12),
              (unsigned __int8)*(v6 - 8),
              112,
              *((_DWORD *)v6 - 4));
            pthread_mutex_unlock(&stru_197BB8);
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
              v18);
            if ( v6 == (char *)v7 )
              goto LABEL_11;
          }
          pthread_mutex_lock(&stru_197BB8);
          logfmt_raw(
            (char *)v18,
            0x1000u,
            0,
            "chip %02x core %02x addr %04x, %08x, cmn locked",
            (unsigned __int8)*(v6 - 12),
            (unsigned __int8)*(v6 - 8),
            112,
            *((_DWORD *)v6 - 4));
          pthread_mutex_unlock(&stru_197BB8);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_ref_clock_ready_ext",
            25,
            8816,
            60,
            v18);
          if ( !sub_9577C(a1, *(v6 - 12), v4, 113, v3) || *(_DWORD *)v3 == -1 )
          {
            pthread_mutex_lock(&stru_197BB8);
            logfmt_raw(
              (char *)v18,
              0x1000u,
              0,
              "chip %02x core %02x addr %04x, %08x, tx/rx locked",
              v3[4],
              v3[8],
              113,
              *(_DWORD *)v3);
            pthread_mutex_unlock(&stru_197BB8);
            v8 = g_zc;
            v9 = 20;
            v10 = 8828;
            goto LABEL_6;
          }
          pthread_mutex_lock(&stru_197BB8);
          v6 += 12;
          logfmt_raw(
            (char *)v18,
            0x1000u,
            0,
            "chip %02x core %02x addr %04x, %08x, tx/rx lock failed",
            v3[4],
            v3[8],
            113,
            *(_DWORD *)v3);
          pthread_mutex_unlock(&stru_197BB8);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_ref_clock_ready_ext",
            25,
            8823,
            100,
            v18);
        }
        while ( v6 != (char *)v7 );
      }
LABEL_11:
      ;
    }
    while ( (__int16 *)((char *)&v17 + 1) != v12 );
    ++v15;
    free(ptr);
    free(v3);
  }
  while ( v15 != 3 );
  return 0;
}
