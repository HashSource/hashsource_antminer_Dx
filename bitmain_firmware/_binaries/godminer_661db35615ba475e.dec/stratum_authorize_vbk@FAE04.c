int __fastcall stratum_authorize_vbk(int a1, int a2)
{
  const char *v2; // r7
  const char *v5; // r6
  size_t v6; // r5
  size_t v7; // r0
  char *v8; // r0
  char *v9; // r5
  int v10; // r6
  int v11; // r0
  void *v12; // r7
  _DWORD *v13; // r4
  _DWORD *v14; // r0
  int v15; // r7
  int v16; // r12
  int v17; // r2
  int v18; // r0
  int v19; // r1
  unsigned int *v20; // r3
  unsigned int v21; // r2
  unsigned int v22; // r2
  int v24; // r12
  int v25; // r1
  int v26; // r0
  _DWORD v27[23]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v28[160]; // [sp+70h] [bp-10A0h] BYREF
  char v29[4096]; // [sp+110h] [bp-1000h] BYREF

  v2 = *(const char **)(a2 + 12);
  v5 = *(const char **)(a2 + 16);
  v6 = strlen(v2);
  v7 = strlen(v5);
  v8 = (char *)malloc(v6 + v7 + 300);
  v9 = v8;
  if ( !v8 )
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v29, 0x1000u, 0, "%s malloc error!", "stratum_authorize_vbk");
    v10 = 0;
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_vbk/frontend_vbk.c",
      157,
      "stratum_authorize_vbk",
      21,
      176,
      100,
      v29);
    return v10;
  }
  sprintf(
    v8,
    "{\"command\":\"MINING_AUTH\",\"password\":{\"data\":\"%s\",\"type\":\"PASSWORD\"},\"request_id\":{\"data\":%d,\"type"
    "\":\"REQUEST_ID\"},\"username\":{\"data\":\"%s\",\"type\":\"USERNAME\"}}",
    v5,
    1,
    v2);
  v10 = (*(int (__fastcall **)(int, char *))(a1 + 16))(a2, v9);
  if ( !v10 )
  {
    V_LOCK();
    logfmt_raw(v29, 0x1000u, 0, "%s stratum_send_line error!", "stratum_authorize_vbk");
    V_UNLOCK();
    v24 = 182;
    v26 = g_zc;
    LOWORD(v25) = 18264;
    goto LABEL_19;
  }
  v11 = (*(int (__fastcall **)(int))(a1 + 12))(a2);
  v12 = (void *)v11;
  if ( !v11 )
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v29, 0x1000u, 0, "%s stratum_recv_line failed!", "stratum_authorize_vbk");
    pthread_mutex_unlock(&stru_197BB8);
    v24 = 188;
    LOWORD(v25) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/"
                                    "release/build/godminer-origin_master/frontend/frontend_vbk/frontend_vbk.c";
    v26 = g_zc;
LABEL_19:
    HIWORD(v25) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/rele"
                                "ase/build/godminer-origin_master/frontend/frontend_vbk/frontend_vbk.c" >> 16;
    zlog(v26, v25, 157, "stratum_authorize_vbk", 21, v24, 100, v29);
    free(v9);
    return 0;
  }
  v13 = json_loads(v11, 0, (int)v27);
  free(v12);
  if ( v13 )
  {
    if ( get_command_type(v13) == 2 )
    {
      V_LOCK();
      logfmt_raw(v29, 0x1000u, 0, "Successfully authenticated to server!");
      V_UNLOCK();
      v16 = 20;
      v17 = 201;
      v18 = g_zc;
      LOWORD(v19) = 18264;
    }
    else
    {
      v14 = (_DWORD *)json_object_get(v13, "reason");
      if ( !v14 || *v14 != 2 || (v15 = v14[2]) == 0 )
      {
        V_LOCK();
        logfmt_raw(v29, 0x1000u, 0, "The server did not send a valid mining authentication response command!");
        V_UNLOCK();
        v10 = 0;
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/frontend/frontend_vbk/frontend_vbk.c",
          157,
          "stratum_authorize_vbk",
          21,
          211,
          100,
          v29);
        goto LABEL_11;
      }
      v10 = 0;
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v29, 0x1000u, 0, "Unable to authenticate to the server: %s", v15);
      pthread_mutex_unlock(&stru_197BB8);
      v16 = 100;
      v17 = 208;
      v18 = g_zc;
      LOWORD(v19) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tm"
                                      "p/release/build/godminer-origin_master/frontend/frontend_vbk/frontend_vbk.c";
    }
    HIWORD(v19) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/rele"
                                "ase/build/godminer-origin_master/frontend/frontend_vbk/frontend_vbk.c" >> 16;
    zlog(v18, v19, 157, "stratum_authorize_vbk", 21, v17, v16, v29);
LABEL_11:
    free(v9);
    if ( v13[1] != -1 )
    {
      v20 = v13 + 1;
      __dmb(0xBu);
      do
      {
        v21 = __ldrex(v20);
        v22 = v21 - 1;
      }
      while ( __strex(v22, v20) );
      if ( !v22 )
      {
        json_delete(v13);
        return v10;
      }
    }
    return v10;
  }
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v29, 0x1000u, 0, "JSON decode failed(%d): %s", v27[0], v28);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_vbk/frontend_vbk.c",
    157,
    "stratum_authorize_vbk",
    21,
    195,
    100,
    v29);
  free(v9);
  return 0;
}
