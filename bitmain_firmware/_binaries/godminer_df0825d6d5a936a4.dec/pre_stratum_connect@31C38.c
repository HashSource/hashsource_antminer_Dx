void __fastcall pre_stratum_connect(int a1)
{
  int v2; // r5
  int *v3; // r4
  char *v4; // r0
  int v5; // r10
  __int64 v6; // r6
  int *v7; // r0
  bool v8; // zf
  int *v9; // r1
  int v10; // r0
  void *v11; // r7
  const char *v12; // r6
  int v13; // r10
  _DWORD *current_pool; // r0
  void (__fastcall *v15)(int *); // r1
  int v16; // r2
  int v17; // r8
  _DWORD *v18; // [sp+34h] [bp-1098h]
  int v19; // [sp+38h] [bp-1094h]
  int v20; // [sp+3Ch] [bp-1090h]
  __time_t v21; // [sp+40h] [bp-108Ch]
  _DWORD v22[7]; // [sp+48h] [bp-1084h] BYREF
  int v23; // [sp+64h] [bp-1068h]
  _DWORD v24[7]; // [sp+68h] [bp-1064h] BYREF
  int v25; // [sp+84h] [bp-1048h]
  _DWORD v26[7]; // [sp+88h] [bp-1044h] BYREF
  int v27; // [sp+A4h] [bp-1028h]
  const char *v28[7]; // [sp+A8h] [bp-1024h] BYREF
  int v29; // [sp+C4h] [bp-1008h]
  char v30[4100]; // [sp+C8h] [bp-1004h] BYREF

  v2 = frontend_runtime_instance();
  v21 = *(_DWORD *)(*(_DWORD *)(v2 + 72) + 20);
  v3 = (int *)tq_pop(*(_DWORD *)(a1 + 44), 0);
  if ( !v3 )
    goto LABEL_22;
  if ( ++dword_165A04 <= 3 )
  {
    V_LOCK();
    logfmt_raw(v30, 0x1000u, 0, 1203312, *v3, v3[2]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/stratum_handler.c",
      144,
      "pre_stratum_connect",
      19,
      347,
      40,
      v30);
  }
  v4 = _strdup((const char *)v3[2]);
  v3[7] = (int)v4;
  if ( !v4 )
  {
LABEL_22:
    V_LOCK();
    V_INT((int)v28, "poolno", *v3);
    logfmt_raw(v30, 0x1000u, 0, v29, v28[0], v28[1], v28[2], v28[3], v28[4], v28[5], v28[6], v29, 1203624);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/stratum_handler.c",
      144,
      "pre_stratum_connect",
      19,
      472,
      60,
      v30);
    return;
  }
  v5 = 1539604;
  pool_tset((int)v3, (_BYTE *)v3 + 1896, 0);
  pool_tclear((int)v3, (_BYTE *)v3 + 1908, 0);
  v20 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = 0;
      v18 = (_DWORD *)v5;
      while ( 1 )
      {
        v7 = v3;
        if ( v3[8] != -1 )
          break;
        while ( 1 )
        {
          v8 = (*(int (__fastcall **)(int *))v2)(v7) == 0;
          v9 = v3;
          if ( !v8 )
          {
            if ( (*(int (__fastcall **)(int, int *))(v2 + 16))(v2, v3) )
              break;
          }
          (*(void (__fastcall **)(int *, int *))(v2 + 4))(v3, v9);
          pool_tclear((int)v3, (_BYTE *)v3 + 1908, 0);
          pool_died(v3);
          if ( v6 >= 3 )
          {
            if ( dword_165A04 <= 3 )
            {
              V_LOCK();
              logfmt_raw(v30, 0x1000u, 0, 1203356, *v3);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_godminer-new/stratum_handler.c",
                144,
                "pre_stratum_connect",
                19,
                378,
                100,
                v30);
              V_LOCK();
              logfmt_raw(v30, 0x1000u, 0, 1203460, *v3);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_godminer-new/stratum_handler.c",
                144,
                "pre_stratum_connect",
                19,
                379,
                100,
                v30);
            }
            return;
          }
          ++v6;
          if ( dword_165A04 <= 3 )
          {
            V_LOCK();
            V_INT((int)v22, "poolno", *v3);
            logfmt_raw(
              v30,
              0x1000u,
              0,
              v23,
              v22[0],
              v22[1],
              v22[2],
              v22[3],
              v22[4],
              v22[5],
              v22[6],
              v23,
              1203144,
              5,
              v6);
            V_UNLOCK();
            zlog(
              *v18,
              "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_godminer-new/stratum_handler.c",
              144,
              "pre_stratum_connect",
              19,
              371,
              100,
              v30);
          }
          sleep(5u);
          v7 = v3;
          if ( v3[8] != -1 )
            goto LABEL_14;
        }
        V_LOCK();
        v13 = *v3;
        v19 = v3[7];
        current_pool = (_DWORD *)get_current_pool();
        logfmt_raw(v30, 0x1000u, 0, 1203184, v13, v19, *current_pool);
        V_UNLOCK();
        zlog(
          *v18,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/stratum_handler.c",
          144,
          "pre_stratum_connect",
          19,
          385,
          20,
          v30);
        if ( v20 )
        {
          v20 = 0;
          switch_pools();
        }
      }
LABEL_14:
      v5 = (int)v18;
      if ( v3 != (int *)get_current_pool() )
        wait_pool_to_be_current_timeout((int)v3);
      if ( !stratum_socket_full((int)v3, v21) )
      {
        V_LOCK();
        V_INT((int)v24, "poolno", *v3);
        logfmt_raw(v30, 0x1000u, 0, v25, v24[0], v24[1], v24[2], v24[3], v24[4], v24[5], v24[6], v25, 1203232);
        V_UNLOCK();
        zlog(
          *v18,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/stratum_handler.c",
          144,
          "pre_stratum_connect",
          19,
          410,
          100,
          v30);
        goto LABEL_29;
      }
      v10 = (*(int (__fastcall **)(int *))(v2 + 8))(v3);
      v11 = (void *)v10;
      if ( v10 )
        break;
LABEL_29:
      v15 = *(void (__fastcall **)(int *))(v2 + 4);
      v16 = total_go;
      ++v3[485];
      total_go = v16 + 1;
      v15(v3);
      pool_tclear((int)v3, (_BYTE *)v3 + 1908, 0);
      pool_died(v3);
      V_LOCK();
      V_INT((int)v26, "poolno", *v3);
      logfmt_raw(v30, 0x1000u, 0, v27, v26[0], v26[1], v26[2], v26[3], v26[4], v26[5], v26[6], v27, 1203260);
      V_UNLOCK();
      zlog(
        *v18,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/stratum_handler.c",
        144,
        "pre_stratum_connect",
        19,
        422,
        20,
        v30);
      sleep(5u);
    }
    v28[0] = "null";
    if ( !(*(int (__fastcall **)(int, int *, int, const char **))(v2 + 24))(v2, v3, v10, v28) )
      break;
    v12 = v28[0];
    if ( !strcmp(v28[0], "notify") )
    {
      pool_alive((int)v3);
      pools_active = 1;
      update_miner_working_status();
      (*(void (__fastcall **)(int *))(v2 + 4))(v3);
      free(v11);
      return;
    }
    if ( strcmp(v12, "set diff or target") )
    {
      free(v11);
      return;
    }
  }
  v17 = (*(int (__fastcall **)(int, void *, int *))(v2 + 28))(v2, v11, v3);
  free(v11);
  if ( !v17 )
  {
    (*(void (__fastcall **)(int *))(v2 + 4))(v3);
    V_LOCK();
    logfmt_raw(v30, 0x1000u, 0, 1203516, *v3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/stratum_handler.c",
      144,
      "pre_stratum_connect",
      19,
      462,
      100,
      v30);
    V_LOCK();
    logfmt_raw(v30, 0x1000u, 0, 1203596, *v3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/stratum_handler.c",
      144,
      "pre_stratum_connect",
      19,
      463,
      100,
      v30);
  }
}
