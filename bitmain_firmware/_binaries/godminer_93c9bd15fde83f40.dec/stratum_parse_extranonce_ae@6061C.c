int __fastcall stratum_parse_extranonce_ae(int a1, pthread_mutex_t *a2, _DWORD *a3, unsigned int a4)
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
  size_t v16; // r10
  void *v17; // r0
  void *nusers; // r0
  void *v19; // r5
  unsigned int v20; // r3
  char *v21; // r2
  char v22; // r1
  int v23; // r2
  char v24[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( !a3
    || *a3 != 1
    || (v5 = a3[3], a4 >= v5)
    || (v6 = a3[4], (v7 = *(_DWORD **)(v6 + 4 * a4)) == 0)
    || *v7 != 2
    || (v8 = (char *)v7[2]) == 0 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v24, 0x1000u, 0, 1527088);
    pthread_mutex_unlock(&stru_1A8A24);
    v10 = 100;
    v11 = 73;
    goto LABEL_11;
  }
  if ( v5 <= a4 + 1 || (v9 = *(_DWORD **)(v6 + 4 * a4 + 4)) == 0 || *v9 != 3 || (v13 = v9[2]) == 0 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v24, 0x1000u, 0, 1527116);
    pthread_mutex_unlock(&stru_1A8A24);
    v10 = 100;
    v11 = 78;
LABEL_11:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_ae/frontend_ae.c",
      155,
      "stratum_parse_extranonce_ae",
      27,
      v11,
      v10,
      v24);
    return 0;
  }
  kind = v9[2];
  if ( (unsigned int)(v13 - 2) > 6 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v24, 0x1000u, 0, 1528196);
    pthread_mutex_unlock(&stru_1A8A24);
    v10 = 40;
    v11 = 82;
    goto LABEL_11;
  }
  if ( v13 + (strlen(v8) >> 1) != 8 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v24, 0x1000u, 0, "n1size + n2size != %d, in parse_extranonce", 8);
    pthread_mutex_unlock(&stru_1A8A24);
    v10 = 100;
    v11 = 86;
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
  if ( !v17 )
  {
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, "Failed to alloc xnonce1");
    V_UNLOCK();
    v23 = 95;
LABEL_30:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_ae/frontend_ae.c",
      155,
      "stratum_parse_extranonce_ae",
      27,
      v23,
      100,
      v24);
    pthread_mutex_unlock(a2 + 40);
    return 0;
  }
  hex2bin((int)v17, (unsigned __int8 *)v8, v16);
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
  if ( !v19 )
  {
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, "Failed to alloc xnonce2");
    V_UNLOCK();
    v23 = 105;
    goto LABEL_30;
  }
  if ( a2[3].__lock )
  {
    v20 = 0;
    v21 = &a2[19].__size[23];
    do
    {
      v22 = *(_BYTE *)(a2[3].__count + v20++);
      *++v21 = v22;
    }
    while ( a2[3].__lock > v20 );
  }
  pthread_mutex_unlock(a2 + 40);
  V_LOCK();
  logfmt_raw(v24, 0x1000u, 0, 1527308, v8, v13);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_ae/frontend_ae.c",
    155,
    "stratum_parse_extranonce_ae",
    27,
    116,
    20,
    v24);
  return 1;
}
