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
  int *v8; // r6
  int v9; // r0
  int v10; // r3
  int v11; // r4
  int v12; // r9
  int v13; // r5
  __int64 *v14; // r10
  __int64 *v15; // r5
  __int64 v16; // t1
  __int64 v17; // r4
  int v18; // r1
  double v19; // d8
  double v20; // r0
  int v21; // r2
  int v22; // r4
  _QWORD *v23; // r8
  __int64 v24; // r4
  int v25; // r1
  double v26; // d8
  double v27; // r0
  int v28; // [sp+4h] [bp-5Ch]
  int v29; // [sp+1Ch] [bp-44h]
  int *v30; // [sp+20h] [bp-40h]
  int v31; // [sp+24h] [bp-3Ch]
  int v32; // [sp+24h] [bp-3Ch]
  int *v33; // [sp+30h] [bp-30h]
  _BYTE v34[20]; // [sp+38h] [bp-28h] BYREF
  float v35; // [sp+4Ch] [bp-14h]
  int v36; // [sp+58h] [bp-8h]
  int v37; // [sp+5Ch] [bp-4h]
  char v38[4064]; // [sp+60h] [bp+0h] BYREF
  char v39[4100]; // [sp+1060h] [bp+1000h] BYREF

  read_system_status_from_monitor((int)v34);
  v1 = v35;
  v2 = opt_algo == 3;
  if ( opt_algo != 3 )
    v2 = opt_algo == 0;
  if ( !v2 )
    v1 = v1 * 0.000000001;
  get_miner_elapsed_time();
  LODWORD(v3) = sub_15D994(total_accepted);
  v4 = v3 / v0;
  v5 = (total_diff_accepted + total_diff_rejected + total_diff_stale) / v0 * 60.0;
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v39, 0x1000u, 0, "Summary of runtime statistics:");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1628,
    80,
    v39);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v39, 0x1000u, 0, "Runtime: %d hrs : %d mins : %d secs", (int)v0 / 3600, (int)v0 % 3600 / 60, (int)v0 % 60);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1629,
    80,
    v39);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v39, 0x1000u, 0, "Average hashrate: %.1f Ghash/s", v1);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1630,
    80,
    v39);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v39, 0x1000u, 0, "Total got job from pools: %lld", total_getworks, dword_19C91C);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1631,
    80,
    v39);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v39, 0x1000u, 0, "Total generated local work  %d", local_work);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1632,
    80,
    v39);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v39, 0x1000u, 0, "Solved blocks: %d", dword_196B94);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1633,
    80,
    v39);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v39, 0x1000u, 0, "Share submissions: %lld", total_accepted + total_rejected);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1634,
    80,
    v39);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v39, 0x1000u, 0, "Accepted shares: %lld", total_accepted);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1635,
    80,
    v39);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v39, 0x1000u, 0, "Rejected shares: %lld", total_rejected);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1636,
    80,
    v39);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v39, 0x1000u, 0, "Accepted difficulty shares: %1.f", total_diff_accepted);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1637,
    80,
    v39);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v39, 0x1000u, 0, "Rejected difficulty shares: %1.f", total_diff_rejected);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1638,
    80,
    v39);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v39, 0x1000u, 0, "Total Hardware errors %llu", v36, v37);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1639,
    80,
    v39);
  if ( total_accepted || total_rejected )
  {
    pthread_mutex_lock(&stru_197BB8);
    v17 = total_rejected;
    LODWORD(v19) = sub_15D994(100 * total_rejected);
    HIDWORD(v19) = v18;
    LODWORD(v20) = sub_15D994(v17 + total_accepted);
    logfmt_raw(v39, 0x1000u, 0, "Reject ratio: %.1f%%", v19 / v20);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "print_summary",
      13,
      1642,
      80,
      v39);
  }
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v39, 0x1000u, 0, "Utility (accepted shares / min): %.2f/min", v4 * 60.0);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1644,
    80,
    v39);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v39, 0x1000u, 0, "Work Utility (diff1 shares solved / min): %.2f/min", v5);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1645,
    80,
    v39);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v39, 0x1000u, 0, "Stale submissions discarded due to new blocks: %lld", total_stale, dword_19C8DC);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1646,
    80,
    v39);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v39, 0x1000u, 0, "Unable to get work from server occasions: %d", total_go);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1647,
    80,
    v39);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v39, 0x1000u, 0, "Submitting work remotely delay occasions: %d", total_ro);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1648,
    80,
    v39);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v39, 0x1000u, 0, "New blocks detected on network: %d", new_blocks);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1649,
    80,
    v39);
  if ( total_pools > 0 )
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v39, 0x1000u, 0, "Summary of pool statistics:");
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "print_summary",
      13,
      1653,
      80,
      v39);
    if ( total_pools > 0 )
    {
      v21 = 0;
      v32 = 0;
      do
      {
        v22 = *(_DWORD *)(pools + 4 * v21);
        pthread_mutex_lock(&stru_197BB8);
        v23 = (_QWORD *)(v22 + 1296);
        logfmt_raw(v39, 0x1000u, 0, "Pool: %s", *(_DWORD *)(v22 + 8));
        pthread_mutex_unlock(&stru_197BB8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1658,
          80,
          v39);
        pthread_mutex_lock(&stru_197BB8);
        logfmt_raw(v39, 0x1000u, 0, "User: %s", *(_DWORD *)(v22 + 12));
        pthread_mutex_unlock(&stru_197BB8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1659,
          80,
          v39);
        pthread_mutex_lock(&stru_197BB8);
        logfmt_raw(v39, 0x1000u, 0, "Share submissions: %lld", *(_QWORD *)(v22 + 1296) + *(_QWORD *)(v22 + 1304));
        pthread_mutex_unlock(&stru_197BB8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1660,
          80,
          v39);
        pthread_mutex_lock(&stru_197BB8);
        logfmt_raw(v39, 0x1000u, 0, "Accepted shares: %lld", *(_DWORD *)(v22 + 1296), *(_DWORD *)(v22 + 1300));
        pthread_mutex_unlock(&stru_197BB8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1661,
          80,
          v39);
        pthread_mutex_lock(&stru_197BB8);
        logfmt_raw(v39, 0x1000u, 0, "Rejected shares: %lld", *(_DWORD *)(v22 + 1304), *(_DWORD *)(v22 + 1308));
        pthread_mutex_unlock(&stru_197BB8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1662,
          80,
          v39);
        pthread_mutex_lock(&stru_197BB8);
        logfmt_raw(
          v39,
          0x1000u,
          0,
          "Accepted difficulty shares: %1.f",
          *(_DWORD *)(v22 + 1328),
          *(_DWORD *)(v22 + 1332));
        pthread_mutex_unlock(&stru_197BB8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1663,
          80,
          v39);
        pthread_mutex_lock(&stru_197BB8);
        logfmt_raw(
          v39,
          0x1000u,
          0,
          "Rejected difficulty shares: %1.f",
          *(_DWORD *)(v22 + 1336),
          *(_DWORD *)(v22 + 1340));
        pthread_mutex_unlock(&stru_197BB8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1664,
          80,
          v39);
        if ( *(_QWORD *)(v22 + 1296) || *(_QWORD *)(v22 + 1304) )
        {
          pthread_mutex_lock(&stru_197BB8);
          v24 = *(_QWORD *)(v22 + 1304);
          LODWORD(v26) = sub_15D994(100 * v24);
          HIDWORD(v26) = v25;
          LODWORD(v27) = sub_15D994(v24 + *v23);
          logfmt_raw(v39, 0x1000u, 0, "Reject ratio: %.1f%%", v26 / v27);
          pthread_mutex_unlock(&stru_197BB8);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/api_new.c",
            130,
            "print_summary",
            13,
            1667,
            80,
            v39);
        }
        v21 = v32 + 1;
        v32 = v21;
      }
      while ( total_pools > v21 );
    }
  }
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v39, 0x1000u, 0, "Summary of per device statistics:");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1672,
    80,
    v39);
  pthread_mutex_lock(&stru_190E30);
  v6 = dword_190E48;
  result = pthread_mutex_unlock(&stru_190E30);
  if ( v6 > 0 )
  {
    v30 = dword_190E4C;
    v33 = &dword_190E4C[v6];
    do
    {
      v8 = v30;
      v9 = snprintf(
             v38,
             0x1000u,
             "chain %d device %d wc %llu nc %llu detail: ",
             *(_DWORD *)(*v30 + 124),
             *(_DWORD *)(*v30 + 120),
             v28,
             *(_DWORD *)(*v30 + 232),
             *(_DWORD *)(*v30 + 236),
             *(_DWORD *)(*v30 + 240),
             *(_DWORD *)(*v30 + 244));
      v10 = *v30;
      v11 = v9;
      ++v30;
      v31 = *(_DWORD *)(*v8 + 180);
      if ( v31 > 0 )
      {
        v12 = 0;
        v29 = 0;
        while ( 1 )
        {
          v13 = *(_DWORD *)(v10 + 248);
          v14 = (__int64 *)(v13 + v12);
          v12 += 48;
          v15 = (__int64 *)(v13 + v12);
          do
          {
            v16 = *v14++;
            v11 += snprintf(&v38[v11], 4096 - v11, " %llu", v16);
          }
          while ( v15 != v14 );
          ++v29;
          v11 += snprintf(&v38[v11], 4096 - v11, " /");
          if ( v31 == v29 )
            break;
          v10 = *(v30 - 1);
        }
      }
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v39, 0x1000u, 0, "%s", v38);
      pthread_mutex_unlock(&stru_197BB8);
      result = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmi"
                 "ner-origin_master/api_new.c",
                 130,
                 "print_summary",
                 13,
                 1688,
                 80,
                 v39);
    }
    while ( v33 != v30 );
  }
  return result;
}
