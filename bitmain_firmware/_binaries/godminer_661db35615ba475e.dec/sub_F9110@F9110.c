int __fastcall sub_F9110(int a1, pthread_mutex_t *a2, _DWORD *a3, unsigned int a4)
{
  int v6; // r2
  char *v7; // r5
  int v9; // r12
  int v10; // r2
  _DWORD *v12; // r0
  int v13; // r6
  size_t kind; // r10
  void *count; // r0
  size_t v16; // r8
  void *v17; // r0
  void *nusers; // r0
  void *v19; // r4
  int v20; // r2
  char v21[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( !a3
    || *a3 != 1
    || a4 >= a3[3]
    || (v6 = *(_DWORD *)(a3[4] + 4 * a4)) == 0
    || *(_DWORD *)v6 != 2
    || (v7 = *(char **)(v6 + 8)) == 0
    || (strlen(*(const char **)(v6 + 8)) & 1) != 0 )
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v21, 0x1000u, 0, "Failed to get extranonce1");
    pthread_mutex_unlock(&stru_197BB8);
    v9 = 100;
    v10 = 144;
LABEL_9:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_ltc/frontend_ltc.c",
      157,
      "stratum_parse_extranonce_ltc",
      28,
      v10,
      v9,
      v21);
    return 0;
  }
  v12 = json_array_get(a3, a4 + 1);
  v13 = (int)v12;
  if ( !v12 )
  {
LABEL_14:
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v21, 0x1000u, 0, "Get invalid n2size in parse_extranonce, xn2_size=%d", v13);
    pthread_mutex_unlock(&stru_197BB8);
    v9 = 60;
    v10 = 149;
    goto LABEL_9;
  }
  if ( *v12 != 3 )
  {
    v13 = 0;
    goto LABEL_14;
  }
  v13 = v12[2];
  kind = v13;
  if ( (unsigned int)(v13 - 2) > 0xE )
    goto LABEL_14;
  pthread_mutex_lock(a2 + 40);
  count = (void *)a2[3].__count;
  if ( count )
  {
    free(count);
    a2[3].__count = 0;
  }
  v16 = strlen(v7) >> 1;
  a2[3].__lock = v16;
  v17 = calloc(1u, v16);
  a2[3].__count = (unsigned int)v17;
  if ( v17 )
  {
    hex2bin((int)v17, (unsigned __int8 *)v7, v16);
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
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v21, 0x1000u, 0, "Stratum set nonce1 %s, nonce2 size=%d", v7, v13);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_ltc/frontend_ltc.c",
        157,
        "stratum_parse_extranonce_ltc",
        28,
        175,
        20,
        v21);
      return 1;
    }
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, "Failed to alloc xnonce2");
    V_UNLOCK();
    v20 = 168;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, "Failed to alloc xnonce1");
    V_UNLOCK();
    v20 = 158;
  }
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_ltc/frontend_ltc.c",
    157,
    "stratum_parse_extranonce_ltc",
    28,
    v20,
    100,
    v21);
  pthread_mutex_unlock(a2 + 40);
  return 0;
}
