int __fastcall sub_C7270(int a1, pthread_mutex_t *a2, _DWORD *a3, unsigned int a4)
{
  unsigned int v5; // r0
  int v6; // r1
  _DWORD *v7; // r2
  char *v8; // r6
  _DWORD *v9; // r3
  int v10; // r12
  int v11; // r2
  int v13; // r7
  void *count; // r0
  size_t v15; // r8
  void *v16; // r0
  void *nusers; // r0
  void *v18; // r4
  int v19; // r2
  char v20[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( !a3
    || *a3 != 1
    || (v5 = a3[3], a4 >= v5)
    || (v6 = a3[4], (v7 = *(_DWORD **)(v6 + 4 * a4)) == 0)
    || *v7 != 2
    || (v8 = (char *)v7[2]) == 0 )
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v20, 0x1000u, 0, "Failed to get extranonce1");
    pthread_mutex_unlock(&stru_197BB8);
    v10 = 100;
    v11 = 210;
    goto LABEL_11;
  }
  if ( v5 <= a4 + 1 || (v9 = *(_DWORD **)(v6 + 4 * a4 + 4)) == 0 || *v9 != 3 || (v13 = v9[2]) == 0 )
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v20, 0x1000u, 0, "Failed to get extranonce2_size");
    pthread_mutex_unlock(&stru_197BB8);
    v10 = 100;
    v11 = 215;
LABEL_11:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_dash/frontend_dash.c",
      159,
      "stratum_parse_extranonce_dash",
      29,
      v11,
      v10,
      v20);
    return 0;
  }
  if ( (unsigned int)(v13 - 2) > 0xE )
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v20, 0x1000u, 0, "Failed to get valid n2size in parse_extranonce, xn2_size=%d", v13);
    pthread_mutex_unlock(&stru_197BB8);
    v10 = 60;
    v11 = 219;
    goto LABEL_11;
  }
  pthread_mutex_lock(a2 + 40);
  count = (void *)a2[3].__count;
  if ( count )
  {
    free(count);
    a2[3].__count = 0;
  }
  v15 = strlen(v8) >> 1;
  a2[3].__lock = v15;
  v16 = calloc(1u, v15);
  a2[3].__count = (unsigned int)v16;
  if ( v16 )
  {
    hex2bin((int)v16, (unsigned __int8 *)v8, v15);
    nusers = (void *)a2[34].__nusers;
    a2[34].__kind = v13;
    a2[3].__owner = v13;
    if ( nusers )
      free(nusers);
    v18 = calloc(1u, 4u);
    a2[34].__nusers = (unsigned int)v18;
    if ( v18 )
    {
      pthread_mutex_unlock(a2 + 40);
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v20, 0x1000u, 0, "Stratum set nonce1 %s, nonce2 size=%d", v8, v13);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_dash/frontend_dash.c",
        159,
        "stratum_parse_extranonce_dash",
        29,
        248,
        20,
        v20);
      return 1;
    }
    V_LOCK();
    logfmt_raw(v20, 0x1000u, 0, "Failed to alloc xnonce2");
    V_UNLOCK();
    v19 = 240;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v20, 0x1000u, 0, "Failed to alloc xnonce1");
    V_UNLOCK();
    v19 = 228;
  }
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_dash/frontend_dash.c",
    159,
    "stratum_parse_extranonce_dash",
    29,
    v19,
    100,
    v20);
  pthread_mutex_unlock(a2 + 40);
  return 0;
}
