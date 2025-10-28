int __fastcall http_test_bm(int a1, char *a2, size_t a3)
{
  const char *v4; // r7
  int theory_hashrate; // r0
  int v7; // r3
  int v9; // r0
  int v10; // [sp+10h] [bp-100Ch] BYREF
  int v11; // [sp+14h] [bp-1008h] BYREF
  char v12[4100]; // [sp+18h] [bp-1004h] BYREF

  v4 = (const char *)(a1 + 4);
  v11 = -1;
  v10 = -1;
  if ( strstr((const char *)(a1 + 4), "/rate") )
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v12, 0x1000u, 0, "cmd : get rate");
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/http_test.c",
      132,
      "http_test_bm",
      12,
      156,
      20,
      v12);
    if ( opt_algo == 7 )
      theory_hashrate = get_theory_hashrate();
    else
      theory_hashrate = 98 * get_theory_hashrate() / 100;
    v7 = freq_scan_status[0];
    if ( opt_algo == 2 )
      theory_hashrate = 1130;
    if ( freq_scan_status[0] != 1 )
    {
LABEL_7:
      if ( v7 != 2 )
      {
LABEL_8:
        snprintf(a2, a3, "searching");
        return 0;
      }
      goto LABEL_20;
    }
    goto LABEL_22;
  }
  if ( strstr(v4, "/test") )
  {
    _isoc99_sscanf(v4, "/test.%d.%d", &v11, &v10);
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v12, 0x1000u, 0, "cmd : get test = %d", v11);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/http_test.c",
      132,
      "http_test_bm",
      12,
      172,
      20,
      v12);
    if ( v11 == 523 )
      get_miner_info(a2);
    else
      sprintf(a2, "OK get test=%d", v11);
    return 0;
  }
  else
  {
    if ( strstr(v4, "/ideal_rate") )
    {
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, "cmd : get ideal rate");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/http_test.c",
        132,
        "http_test_bm",
        12,
        186,
        20,
        v12);
      theory_hashrate = get_theory_hashrate();
      if ( freq_scan_status[0] != 1 )
      {
        if ( freq_scan_status[0] != 2 )
          goto LABEL_8;
LABEL_20:
        snprintf(a2, a3, "%s:%s", "searchfailed", (const char *)search_failed_info);
        return 0;
      }
LABEL_22:
      snprintf(a2, a3, "%d", theory_hashrate);
      return 0;
    }
    if ( strstr(v4, "/max_rate") )
    {
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, "cmd : get max rate");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/http_test.c",
        132,
        "http_test_bm",
        12,
        192,
        20,
        v12);
      v9 = get_theory_hashrate();
      v7 = freq_scan_status[0];
      if ( freq_scan_status[0] == 1 )
      {
        snprintf(a2, a3, "%d", 102 * v9 / 100);
        return 0;
      }
      goto LABEL_7;
    }
    if ( strstr(v4, "/miner_status") )
    {
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, "cmd : get miner status");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/http_test.c",
        132,
        "http_test_bm",
        12,
        198,
        20,
        v12);
      return 0;
    }
    else if ( strstr(v4, "/productName") )
    {
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, "cmd : get miner type");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/http_test.c",
        132,
        "http_test_bm",
        12,
        203,
        20,
        v12);
      snprintf(a2, 0x100u, "%s", g_miner_type);
      return 0;
    }
    else
    {
      return -1;
    }
  }
}
