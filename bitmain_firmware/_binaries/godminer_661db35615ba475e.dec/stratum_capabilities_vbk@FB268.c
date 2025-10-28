bool __fastcall stratum_capabilities_vbk(int a1, int a2)
{
  int v2; // r0
  void *v3; // r6
  _DWORD *v4; // r0
  _DWORD *v5; // r4
  _BOOL4 v6; // r5
  unsigned int *v7; // r3
  unsigned int v8; // r2
  unsigned int v9; // r2
  _DWORD *v11; // r0
  int v12; // r0
  int v13; // r6
  size_t v14; // r0
  size_t v15; // r0
  int v16; // r11
  int v17; // r10
  int v18; // r9
  int v19; // r0
  int v20; // [sp+4h] [bp-1118h]
  int v21; // [sp+10h] [bp-110Ch]
  int v22; // [sp+14h] [bp-1108h]
  _DWORD v23[23]; // [sp+1Ch] [bp-1100h] BYREF
  _BYTE v24[160]; // [sp+78h] [bp-10A4h] BYREF
  char v25[4100]; // [sp+118h] [bp-1004h] BYREF

  v2 = (*(int (__fastcall **)(int))(a1 + 12))(a2);
  v3 = (void *)v2;
  if ( !v2 )
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v25, 0x1000u, 0, "%s stratum_recv_line failed!", "stratum_capabilities_vbk");
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_vbk/frontend_vbk.c",
      157,
      "stratum_capabilities_vbk",
      24,
      86,
      100,
      v25);
    return 0;
  }
  v4 = json_loads(v2, 0, (int)v23);
  v5 = v4;
  if ( !v4 )
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v25, 0x1000u, 0, "JSON decode failed(%d): %s", v23[0], v24);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_vbk/frontend_vbk.c",
      157,
      "stratum_capabilities_vbk",
      24,
      92,
      100,
      v25);
    free(v3);
    return 0;
  }
  if ( !get_command_type(v4) )
  {
    free(v3);
    v11 = (_DWORD *)json_object_get(v5, "capabilities");
    v12 = json_object_get(v11, "data");
    if ( !v12
      || *(_DWORD *)v12 != 2
      || (v13 = *(_DWORD *)(v12 + 8)) == 0
      || (v14 = strlen(*(const char **)(v12 + 8)), v14 <= 5) )
    {
      V_LOCK();
      logfmt_raw(v25, 0x1000u, 0, "The server did not send a valid capabilities command!");
      V_UNLOCK();
      v19 = g_zc;
      v20 = 106;
LABEL_26:
      v6 = 0;
      zlog(
        v19,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_vbk/frontend_vbk.c",
        157,
        "stratum_capabilities_vbk",
        24,
        v20,
        100,
        v25);
      goto LABEL_5;
    }
    v15 = v13 + v14;
    v16 = *(unsigned __int8 *)(v15 - 2);
    v17 = *(unsigned __int8 *)(v15 - 3);
    v18 = *(unsigned __int8 *)(v15 - 4);
    v6 = *(unsigned __int8 *)(v15 - 1) == 49;
    v22 = *(unsigned __int8 *)(v15 - 5);
    v21 = *(unsigned __int8 *)(v15 - 6);
    if ( *(_BYTE *)(v15 - 1) != 49 )
    {
      V_LOCK();
      logfmt_raw(
        v25,
        0x1000u,
        v6,
        "The specified server does not support MINING_AUTH according to its bitflag (%s)",
        v13);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_vbk/frontend_vbk.c",
        157,
        "stratum_capabilities_vbk",
        24,
        125,
        100,
        v25);
    }
    if ( v16 != 49 )
    {
      V_LOCK();
      logfmt_raw(
        v25,
        0x1000u,
        0,
        "The specified server does not support MINING_SUBSCRIBE according to its bitflag (%s)",
        v13);
      v6 = 0;
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_vbk/frontend_vbk.c",
        157,
        "stratum_capabilities_vbk",
        24,
        130,
        100,
        v25);
    }
    if ( v17 == 49 )
    {
      if ( v18 == 49 )
      {
        if ( v22 == 49 )
        {
          if ( v21 == 49 )
          {
            if ( v6 )
            {
              V_LOCK();
              logfmt_raw(v25, 0x1000u, 0, "The specified server supports all necessary commands (bitflag: %s)", v13);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/frontend/frontend_vbk/frontend_vbk.c",
                157,
                "stratum_capabilities_vbk",
                24,
                155,
                20,
                v25);
              goto LABEL_5;
            }
            goto LABEL_22;
          }
LABEL_31:
          V_LOCK();
          logfmt_raw(
            v25,
            0x1000u,
            0,
            "The specified server does not support MINING_MEMPOOL_UPDATE_ACK according to its bitflag (%s)",
            v13);
          V_UNLOCK();
          v19 = g_zc;
          v20 = 150;
          goto LABEL_26;
        }
LABEL_30:
        V_LOCK();
        logfmt_raw(
          v25,
          0x1000u,
          0,
          "The specified server does not support MINING_RESET_ACK according to its bitflag (%s)",
          v13);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/frontend/frontend_vbk/frontend_vbk.c",
          157,
          "stratum_capabilities_vbk",
          24,
          145,
          100,
          v25);
        if ( v21 == 49 )
          goto LABEL_22;
        goto LABEL_31;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(
        v25,
        0x1000u,
        0,
        "The specified server does not support MINING_SUBMIT according to its bitflag (%s)",
        v13);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_vbk/frontend_vbk.c",
        157,
        "stratum_capabilities_vbk",
        24,
        135,
        100,
        v25);
      if ( v18 == 49 )
      {
        if ( v22 == 49 )
          goto LABEL_21;
        goto LABEL_30;
      }
    }
    V_LOCK();
    logfmt_raw(
      v25,
      0x1000u,
      0,
      "The specified server does not support MINING_UNSUBSCRIBE according to its bitflag (%s)",
      v13);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_vbk/frontend_vbk.c",
      157,
      "stratum_capabilities_vbk",
      24,
      140,
      100,
      v25);
    if ( v22 == 49 )
    {
LABEL_21:
      if ( v21 == 49 )
      {
LABEL_22:
        v6 = 0;
        goto LABEL_5;
      }
      goto LABEL_31;
    }
    goto LABEL_30;
  }
  v6 = 0;
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(
    v25,
    0x1000u,
    0,
    "Server did not send its capabilities at the beginning of the setup process! Instead, it sent the command: %s",
    v3);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_vbk/frontend_vbk.c",
    157,
    "stratum_capabilities_vbk",
    24,
    98,
    100,
    v25);
  free(v3);
LABEL_5:
  if ( v5[1] == -1 )
    return v6;
  v7 = v5 + 1;
  __dmb(0xBu);
  do
  {
    v8 = __ldrex(v7);
    v9 = v8 - 1;
  }
  while ( __strex(v9, v7) );
  if ( v9 )
    return v6;
  json_delete(v5);
  return v6;
}
