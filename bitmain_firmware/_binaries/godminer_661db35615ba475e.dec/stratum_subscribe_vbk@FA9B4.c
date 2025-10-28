int __fastcall stratum_subscribe_vbk(int a1, int a2)
{
  size_t v4; // r5
  size_t v5; // r0
  char *v6; // r0
  char *v7; // r5
  int v8; // r7
  int v9; // r0
  void *v10; // r8
  _DWORD *v11; // r6
  _DWORD *v12; // r0
  int v13; // r8
  int v14; // r12
  int v15; // r2
  int v16; // r0
  int v17; // r1
  unsigned int *v18; // r3
  unsigned int v19; // r2
  unsigned int v20; // r2
  int v22; // r12
  int v23; // r1
  int v24; // r0
  _DWORD v25[23]; // [sp+14h] [bp-1100h] BYREF
  _BYTE v26[160]; // [sp+70h] [bp-10A4h] BYREF
  char v27[4100]; // [sp+110h] [bp-1004h] BYREF

  v4 = strlen(*(const char **)(a2 + 12));
  v5 = strlen(*(const char **)(a2 + 16));
  v6 = (char *)malloc(v4 + v5 + 300);
  v7 = v6;
  if ( !v6 )
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v27, 0x1000u, 0, "%s malloc error!", "stratum_subscribe_vbk");
    v8 = 0;
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_vbk/frontend_vbk.c",
      157,
      "stratum_subscribe_vbk",
      21,
      236,
      100,
      v27);
    goto LABEL_17;
  }
  sprintf(
    v6,
    "{\"command\":\"MINING_SUBSCRIBE\",\"request_id\":{\"data\":%d,\"type\":\"REQUEST_ID\"},\"update_frequency_ms\":{\"da"
    "ta\":%d,\"type\":\"FREQUENCY_MS\"}}",
    2,
    100);
  v8 = (*(int (__fastcall **)(int, char *))(a1 + 16))(a2, v7);
  if ( !v8 )
  {
    V_LOCK();
    logfmt_raw(v27, 0x1000u, 0, "%s stratum_send_line error!", "stratum_subscribe_vbk");
    V_UNLOCK();
    v22 = 242;
    v24 = g_zc;
    LOWORD(v23) = 18264;
    goto LABEL_19;
  }
  v9 = (*(int (__fastcall **)(int))(a1 + 12))(a2);
  v10 = (void *)v9;
  if ( !v9 )
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v27, 0x1000u, 0, "%s stratum_recv_line failed!", "stratum_subscribe_vbk");
    v8 = 0;
    pthread_mutex_unlock(&stru_197BB8);
    v22 = 248;
    LOWORD(v23) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/"
                                    "release/build/godminer-origin_master/frontend/frontend_vbk/frontend_vbk.c";
    v24 = g_zc;
LABEL_19:
    HIWORD(v23) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/rele"
                                "ase/build/godminer-origin_master/frontend/frontend_vbk/frontend_vbk.c" >> 16;
    zlog(v24, v23, 157, "stratum_subscribe_vbk", 21, v22, 100, v27);
    free(v7);
    goto LABEL_17;
  }
  v11 = json_loads(v9, 0, (int)v25);
  free(v10);
  if ( !v11 )
  {
    v8 = 0;
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v27, 0x1000u, 0, "JSON decode failed(%d): %s", v25[0], v26);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_vbk/frontend_vbk.c",
      157,
      "stratum_subscribe_vbk",
      21,
      255,
      100,
      v27);
    free(v7);
    goto LABEL_17;
  }
  if ( get_command_type(v11) == 4 )
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v27, 0x1000u, 0, "Successfully subscribed to server!");
    pthread_mutex_unlock(&stru_197BB8);
    v14 = 20;
    v15 = 261;
    v16 = g_zc;
    LOWORD(v17) = 18264;
  }
  else
  {
    v12 = (_DWORD *)json_object_get(v11, "reason");
    if ( !v12 || *v12 != 2 || (v13 = v12[2]) == 0 )
    {
      V_LOCK();
      logfmt_raw(v27, 0x1000u, 0, "The server did not send a valid mining subscription response command!");
      V_UNLOCK();
      v8 = 0;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_vbk/frontend_vbk.c",
        157,
        "stratum_subscribe_vbk",
        21,
        271,
        100,
        v27);
      goto LABEL_11;
    }
    v8 = 0;
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v27, 0x1000u, 0, "Unable to subscribe to the server: %s", v13);
    pthread_mutex_unlock(&stru_197BB8);
    v14 = 100;
    v15 = 268;
    v16 = g_zc;
    LOWORD(v17) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/"
                                    "release/build/godminer-origin_master/frontend/frontend_vbk/frontend_vbk.c";
  }
  HIWORD(v17) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/releas"
                              "e/build/godminer-origin_master/frontend/frontend_vbk/frontend_vbk.c" >> 16;
  zlog(v16, v17, 157, "stratum_subscribe_vbk", 21, v15, v14, v27);
LABEL_11:
  free(v7);
  if ( v11[1] != -1 )
  {
    v18 = v11 + 1;
    __dmb(0xBu);
    do
    {
      v19 = __ldrex(v18);
      v20 = v19 - 1;
    }
    while ( __strex(v20, v18) );
    if ( !v20 )
      json_delete(v11);
  }
LABEL_17:
  *(_DWORD *)(a2 + 1288) = 2500000;
  return v8;
}
