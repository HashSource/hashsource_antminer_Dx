int __fastcall sub_5EEA8(int a1, pthread_mutex_t *a2, _DWORD *a3, unsigned int a4)
{
  unsigned int v5; // r0
  int v6; // r1
  _DWORD *v7; // r2
  char *v8; // r6
  _DWORD *v9; // r3
  int v10; // r12
  int v11; // r2
  int v13; // r7
  size_t kind; // r9
  void *count; // r0
  size_t v16; // r8
  void *v17; // r0
  void *nusers; // r0
  void *v19; // r4
  char v20[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( !a3
    || *a3 != 1
    || (v5 = a3[3], a4 >= v5)
    || (v6 = a3[4], (v7 = *(_DWORD **)(v6 + 4 * a4)) == 0)
    || *v7 != 2
    || (v8 = (char *)v7[2]) == 0 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v20, 0x1000u, 0, "Failed to get extranonce1");
    pthread_mutex_unlock(&stru_1A8A24);
    v10 = 100;
    v11 = 250;
    goto LABEL_11;
  }
  if ( v5 <= a4 + 1 || (v9 = *(_DWORD **)(v6 + 4 * a4 + 4)) == 0 || *v9 != 3 || (v13 = v9[2]) == 0 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v20, 0x1000u, 0, "Failed to get extranonce2_size");
    pthread_mutex_unlock(&stru_1A8A24);
    v10 = 100;
    v11 = 255;
LABEL_11:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_dcr/frontend_dcr.c",
      157,
      "stratum_parse_extranonce_dcr",
      28,
      v11,
      v10,
      v20);
    return 0;
  }
  kind = v9[2];
  if ( (unsigned int)(v13 - 2) > 0xE )
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v20, 0x1000u, 0, "Failed to get valid n2size in parse_extranonce, xn2_size=%d", v13);
    pthread_mutex_unlock(&stru_1A8A24);
    v10 = 60;
    v11 = 259;
    goto LABEL_11;
  }
  pthread_mutex_lock(a2 + 40);
  count = (void *)a2[3].__count;
  if ( count )
  {
    free(count);
    a2[3].__count = 0;
  }
  v16 = strlen(v8) >> 1;
  a2[3].__lock = v16;
  v17 = calloc(1u, v16);
  a2[3].__count = (unsigned int)v17;
  if ( v17 )
  {
    hex2bin((int)v17, (unsigned __int8 *)v8, v16);
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v20, 0x1000u, 0, "save xnonce1 into work->xnonce2 to submit");
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_dcr/frontend_dcr.c",
      157,
      "stratum_parse_extranonce_dcr",
      28,
      275,
      20,
      v20);
    nusers = (void *)a2[34].__nusers;
    a2[34].__kind = v13;
    a2[3].__owner = v13;
    if ( nusers )
    {
      free(nusers);
      kind = a2[34].__kind;
    }
    v19 = calloc(1u, kind);
    a2[34].__nusers = (unsigned int)v19;
    if ( v19 )
    {
      pthread_mutex_unlock(a2 + 40);
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v20, 0x1000u, 0, "Stratum set nonce1 %s, nonce2 size=%d", v8, v13);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_dcr/frontend_dcr.c",
        157,
        "stratum_parse_extranonce_dcr",
        28,
        287,
        20,
        v20);
      return 1;
    }
    V_LOCK();
    logfmt_raw(v20, 0x1000u, 0, "Failed to alloc work->xnonce2");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_dcr/frontend_dcr.c",
      157,
      "stratum_parse_extranonce_dcr",
      28,
      280,
      100,
      v20);
  }
  else
  {
    V_LOCK();
    logfmt_raw(v20, 0x1000u, 0, "Failed to alloc xnonce1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_dcr/frontend_dcr.c",
      157,
      "stratum_parse_extranonce_dcr",
      28,
      268,
      100,
      v20);
  }
  pthread_mutex_unlock(a2 + 40);
  return 0;
}
