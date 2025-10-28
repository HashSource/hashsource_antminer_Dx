int __fastcall sub_5FE24(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  unsigned int v5; // r0
  int v6; // r1
  _DWORD *v7; // r2
  char *v8; // r6
  _DWORD *v9; // r3
  int v10; // r12
  int v11; // r2
  int v13; // r7
  size_t v14; // r8
  size_t v15; // r0
  void *v16; // r0
  size_t v17; // r9
  void *v18; // r0
  void *v19; // r0
  void *v20; // r4
  int v21; // r2
  char v22[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( !a3
    || *a3 != 1
    || (v5 = a3[3], a4 >= v5)
    || (v6 = a3[4], (v7 = *(_DWORD **)(v6 + 4 * a4)) == 0)
    || *v7 != 2
    || (v8 = (char *)v7[2]) == 0 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v22, 0x1000u, 0, "Failed to get extranonce1");
    pthread_mutex_unlock(&stru_1A8A24);
    v10 = 100;
    v11 = 76;
    goto LABEL_11;
  }
  if ( v5 <= a4 + 1 || (v9 = *(_DWORD **)(v6 + 4 * a4 + 4)) == 0 || *v9 != 3 || (v13 = v9[2]) == 0 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v22, 0x1000u, 0, "Failed to get extranonce2_size");
    pthread_mutex_unlock(&stru_1A8A24);
    v10 = 100;
    v11 = 81;
LABEL_11:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_ckb/frontend_ckb.c",
      157,
      "stratum_parse_extranonce_ckb",
      28,
      v11,
      v10,
      v22);
    return 0;
  }
  v14 = v9[2];
  if ( (unsigned int)(v13 - 4) > 0xB )
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v22, 0x1000u, 0, "Failed to get valid n2size in parse_extranonce, xn2_size=%d", v13);
    pthread_mutex_unlock(&stru_1A8A24);
    v10 = 60;
    v11 = 85;
    goto LABEL_11;
  }
  if ( v13 + (strlen(v8) >> 1) != 16 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    v15 = strlen(v8);
    logfmt_raw(v22, 0x1000u, 0, "n1size %d, n2size %d, n1size + n2size != %d, in parse_extranonce", v15 >> 1, v13, 16);
    pthread_mutex_unlock(&stru_1A8A24);
    v10 = 100;
    v11 = 89;
    goto LABEL_11;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 960));
  v16 = *(void **)(a2 + 76);
  if ( v16 )
  {
    free(v16);
    *(_DWORD *)(a2 + 76) = 0;
  }
  v17 = strlen(v8) >> 1;
  *(_DWORD *)(a2 + 72) = v17;
  v18 = calloc(1u, v17);
  *(_DWORD *)(a2 + 76) = v18;
  if ( v18 )
  {
    hex2bin((int)v18, (unsigned __int8 *)v8, v17);
    memcpy((void *)(a2 + 480), *(const void **)(a2 + 76), *(_DWORD *)(a2 + 72));
    v19 = *(void **)(a2 + 832);
    *(_DWORD *)(a2 + 828) = v13;
    *(_DWORD *)(a2 + 80) = v13;
    if ( v19 )
    {
      free(v19);
      v14 = *(_DWORD *)(a2 + 828);
    }
    v20 = calloc(1u, v14);
    *(_DWORD *)(a2 + 832) = v20;
    if ( v20 )
    {
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 960));
      V_LOCK();
      logfmt_raw(v22, 0x1000u, 0, "Stratum set nonce1 %s, nonce2 size=%d", v8, v13);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_ckb/frontend_ckb.c",
        157,
        "stratum_parse_extranonce_ckb",
        28,
        116,
        20,
        v22);
      return 1;
    }
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, "Failed to alloc xnonce2");
    V_UNLOCK();
    v21 = 109;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, "Failed to alloc xnonce1");
    V_UNLOCK();
    v21 = 98;
  }
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_ckb/frontend_ckb.c",
    157,
    "stratum_parse_extranonce_ckb",
    28,
    v21,
    100,
    v22);
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 960));
  return 0;
}
