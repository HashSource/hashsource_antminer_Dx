int print_summary()
{
  double v0; // d0
  double v1; // d8
  bool v2; // zf
  double v3; // r0
  double v4; // d4
  double v5; // d9
  int v6; // r4
  int result; // r0
  int *v8; // r7
  int v9; // r0
  int v10; // r3
  int v11; // r6
  int v12; // r8
  int v13; // r5
  __int64 *v14; // r4
  __int64 *v15; // r5
  int v16; // r9
  __int64 v17; // t1
  __int64 v18; // r4
  int v19; // r1
  double v20; // d8
  double v21; // r0
  int v22; // r2
  int v23; // r4
  _QWORD *v24; // r8
  __int64 v25; // r4
  int v26; // r1
  double v27; // d8
  double v28; // r0
  int v29; // [sp+4h] [bp-2060h]
  int v30; // [sp+18h] [bp-204Ch]
  int *v31; // [sp+1Ch] [bp-2048h]
  int v32; // [sp+20h] [bp-2044h]
  int v33; // [sp+20h] [bp-2044h]
  int *v34; // [sp+30h] [bp-2034h]
  float v35[10]; // [sp+38h] [bp-202Ch] BYREF
  char v36[4064]; // [sp+60h] [bp-2004h] BYREF
  char v37[4100]; // [sp+1060h] [bp-1004h] BYREF

  read_system_status_from_monitor((int)v35);
  v1 = v35[5];
  v2 = opt_algo == 3;
  if ( opt_algo != 3 )
    v2 = opt_algo == 0;
  if ( !v2 )
    v1 = v1 * 0.000000001;
  get_miner_elapsed_time();
  LODWORD(v3) = sub_16E7EC(total_accepted);
  v4 = v3 / v0;
  v5 = (total_diff_accepted + total_diff_rejected + total_diff_stale) / v0 * 60.0;
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v37, 0x1000u, 0, "Summary of runtime statistics:");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1634,
    80,
    v37);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v37, 0x1000u, 0, "Runtime: %d hrs : %d mins : %d secs", (int)v0 / 3600, (int)v0 % 3600 / 60, (int)v0 % 60);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1635,
    80,
    v37);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v37, 0x1000u, 0, "Average hashrate: %.1f Ghash/s", v1);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1636,
    80,
    v37);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v37, 0x1000u, 0, "Total got job from pools: %lld", total_getworks, dword_1AFE84);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1637,
    80,
    v37);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v37, 0x1000u, 0, "Total generated local work  %d", local_work);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1638,
    80,
    v37);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v37, 0x1000u, 0, "Solved blocks: %d", dword_1AB18C);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1639,
    80,
    v37);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v37, 0x1000u, 0, "Share submissions: %lld", total_accepted + total_rejected);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1640,
    80,
    v37);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v37, 0x1000u, 0, "Accepted shares: %lld", total_accepted);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1641,
    80,
    v37);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v37, 0x1000u, 0, "Rejected shares: %lld", total_rejected);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1642,
    80,
    v37);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v37, 0x1000u, 0, "Accepted difficulty shares: %1.f", total_diff_accepted);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1643,
    80,
    v37);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v37, 0x1000u, 0, "Rejected difficulty shares: %1.f", total_diff_rejected);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1644,
    80,
    v37);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v37, 0x1000u, 0, "Total Hardware errors %llu", v35[8], v35[9]);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1645,
    80,
    v37);
  if ( total_accepted || total_rejected )
  {
    pthread_mutex_lock(&stru_1A8A24);
    v18 = total_rejected;
    LODWORD(v20) = sub_16E7EC(100 * total_rejected);
    HIDWORD(v20) = v19;
    LODWORD(v21) = sub_16E7EC(v18 + total_accepted);
    logfmt_raw(v37, 0x1000u, 0, "Reject ratio: %.1f%%", v20 / v21);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "print_summary",
      13,
      1648,
      80,
      v37);
  }
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v37, 0x1000u, 0, "Utility (accepted shares / min): %.2f/min", v4 * 60.0);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1650,
    80,
    v37);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v37, 0x1000u, 0, "Work Utility (diff1 shares solved / min): %.2f/min", v5);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1651,
    80,
    v37);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v37, 0x1000u, 0, "Stale submissions discarded due to new blocks: %lld", total_stale, dword_1AFE44);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1652,
    80,
    v37);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v37, 0x1000u, 0, "Unable to get work from server occasions: %d", total_go);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1653,
    80,
    v37);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v37, 0x1000u, 0, "Submitting work remotely delay occasions: %d", total_ro);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1654,
    80,
    v37);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v37, 0x1000u, 0, "New blocks detected on network: %d", new_blocks);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1655,
    80,
    v37);
  if ( total_pools > 0 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v37, 0x1000u, 0, "Summary of pool statistics:");
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "print_summary",
      13,
      1659,
      80,
      v37);
    if ( total_pools > 0 )
    {
      v22 = 0;
      v33 = 0;
      do
      {
        v23 = *(_DWORD *)(pools + 4 * v22);
        pthread_mutex_lock(&stru_1A8A24);
        v24 = (_QWORD *)(v23 + 1296);
        logfmt_raw(v37, 0x1000u, 0, "Pool: %s", *(_DWORD *)(v23 + 8));
        pthread_mutex_unlock(&stru_1A8A24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1664,
          80,
          v37);
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw(v37, 0x1000u, 0, "User: %s", *(_DWORD *)(v23 + 12));
        pthread_mutex_unlock(&stru_1A8A24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1665,
          80,
          v37);
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw(v37, 0x1000u, 0, "Share submissions: %lld", *(_QWORD *)(v23 + 1296) + *(_QWORD *)(v23 + 1304));
        pthread_mutex_unlock(&stru_1A8A24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1666,
          80,
          v37);
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw(v37, 0x1000u, 0, "Accepted shares: %lld", *(_DWORD *)(v23 + 1296), *(_DWORD *)(v23 + 1300));
        pthread_mutex_unlock(&stru_1A8A24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1667,
          80,
          v37);
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw(v37, 0x1000u, 0, "Rejected shares: %lld", *(_DWORD *)(v23 + 1304), *(_DWORD *)(v23 + 1308));
        pthread_mutex_unlock(&stru_1A8A24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1668,
          80,
          v37);
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw(
          v37,
          0x1000u,
          0,
          "Accepted difficulty shares: %1.f",
          *(_DWORD *)(v23 + 1328),
          *(_DWORD *)(v23 + 1332));
        pthread_mutex_unlock(&stru_1A8A24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1669,
          80,
          v37);
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw(
          v37,
          0x1000u,
          0,
          "Rejected difficulty shares: %1.f",
          *(_DWORD *)(v23 + 1336),
          *(_DWORD *)(v23 + 1340));
        pthread_mutex_unlock(&stru_1A8A24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1670,
          80,
          v37);
        if ( *(_QWORD *)(v23 + 1296) || *(_QWORD *)(v23 + 1304) )
        {
          pthread_mutex_lock(&stru_1A8A24);
          v25 = *(_QWORD *)(v23 + 1304);
          LODWORD(v27) = sub_16E7EC(100 * v25);
          HIDWORD(v27) = v26;
          LODWORD(v28) = sub_16E7EC(v25 + *v24);
          logfmt_raw(v37, 0x1000u, 0, "Reject ratio: %.1f%%", v27 / v28);
          pthread_mutex_unlock(&stru_1A8A24);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/api_new.c",
            130,
            "print_summary",
            13,
            1673,
            80,
            v37);
        }
        v22 = v33 + 1;
        v33 = v22;
      }
      while ( total_pools > v22 );
    }
  }
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v37, 0x1000u, 0, "Summary of per device statistics:");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1678,
    80,
    v37);
  pthread_mutex_lock(&stru_1A9B48);
  v6 = dword_1A9B60;
  result = pthread_mutex_unlock(&stru_1A9B48);
  if ( v6 > 0 )
  {
    v31 = dword_1A9B64;
    v34 = &dword_1A9B64[v6];
    do
    {
      v8 = v31;
      v9 = snprintf(
             v36,
             0x1000u,
             "chain %d device %d wc %llu nc %llu detail: ",
             *(_DWORD *)(*v31 + 136),
             *(_DWORD *)(*v31 + 132),
             v29,
             *(_DWORD *)(*v31 + 248),
             *(_DWORD *)(*v31 + 252),
             *(_DWORD *)(*v31 + 256),
             *(_DWORD *)(*v31 + 260));
      v10 = *v31;
      v11 = v9;
      ++v31;
      v32 = *(_DWORD *)(*v8 + 192);
      if ( v32 > 0 )
      {
        v12 = 0;
        v30 = 0;
        while ( 1 )
        {
          v13 = *(_DWORD *)(v10 + 264);
          v14 = (__int64 *)(v13 + v12);
          v12 += 48;
          v15 = (__int64 *)(v13 + v12);
          ++v30;
          v16 = v11 + snprintf(&v36[v11], 4096 - v11, "%d:");
          do
          {
            v17 = *v14++;
            v16 += snprintf(&v36[v16], 4096 - v16, " %llu", v17);
          }
          while ( v15 != v14 );
          v11 = snprintf(&v36[v16], 4096 - v16, " /") + v16;
          if ( v30 == v32 )
            break;
          v10 = *(v31 - 1);
        }
      }
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v37, 0x1000u, 0, "%s", v36);
      pthread_mutex_unlock(&stru_1A8A24);
      result = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmi"
                 "ner-origin_master/api_new.c",
                 130,
                 "print_summary",
                 13,
                 1695,
                 80,
                 v37);
    }
    while ( v34 != v31 );
  }
  return result;
}
