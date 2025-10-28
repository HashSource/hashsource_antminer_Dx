char *print_summary()
{
  double v0; // d0
  double v1; // d11
  double v2; // r0
  double v3; // d9
  double v4; // d8
  char *result; // r0
  _DWORD *v6; // r12
  int v7; // r0
  int v8; // r3
  int v9; // r6
  int v10; // r8
  int v11; // r5
  __int64 *v12; // r4
  __int64 *v13; // r5
  int v14; // r9
  __int64 v15; // t1
  __int64 v16; // r4
  int v17; // r1
  double v18; // d10
  double v19; // r0
  int v20; // r4
  _QWORD *v21; // r8
  __int64 v22; // r4
  int v23; // r1
  double v24; // d8
  double v25; // r0
  int v26; // [sp+4h] [bp-2078h]
  int v27; // [sp+18h] [bp-2064h]
  char *v28; // [sp+1Ch] [bp-2060h]
  int v29; // [sp+20h] [bp-205Ch]
  int v30; // [sp+20h] [bp-205Ch]
  int i; // [sp+2Ch] [bp-2050h]
  int v32; // [sp+3Ch] [bp-2040h] BYREF
  float v33[14]; // [sp+40h] [bp-203Ch] BYREF
  char v34[4040]; // [sp+78h] [bp-2004h] BYREF
  char v35[4100]; // [sp+1078h] [bp-1004h] BYREF

  read_system_status_from_monitor((int)v33);
  v1 = v33[6] / 1000.0 / 1000.0 / 1000.0;
  get_miner_elapsed_time();
  LODWORD(v2) = sub_1226E4(total_accepted);
  v3 = v2 / v0 * 60.0;
  v4 = (total_diff_accepted + total_diff_rejected + total_diff_stale) / v0 * 60.0;
  V_LOCK();
  logfmt_raw(v35, 0x1000u, 0, "Summary of runtime statistics:");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/api_new.c",
    136,
    "print_summary",
    13,
    2122,
    80,
    v35);
  V_LOCK();
  logfmt_raw(v35, 0x1000u, 0, "Runtime: %d hrs : %d mins : %d secs", (int)v0 / 3600, (int)v0 % 3600 / 60, (int)v0 % 60);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/api_new.c",
    136,
    "print_summary",
    13,
    2123,
    80,
    v35);
  V_LOCK();
  logfmt_raw(v35, 0x1000u, 0, "Average hashrate: %.1f Ghash/s", v1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/api_new.c",
    136,
    "print_summary",
    13,
    2124,
    80,
    v35);
  V_LOCK();
  logfmt_raw(v35, 0x1000u, 0, "Total got job from pools: %lld", total_getworks, dword_177E7C);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/api_new.c",
    136,
    "print_summary",
    13,
    2125,
    80,
    v35);
  V_LOCK();
  logfmt_raw(v35, 0x1000u, 0, "Total generated local work  %d", local_work);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/api_new.c",
    136,
    "print_summary",
    13,
    2126,
    80,
    v35);
  V_LOCK();
  logfmt_raw(v35, 0x1000u, 0, "Solved blocks: %d", dword_164DE0);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/api_new.c",
    136,
    "print_summary",
    13,
    2127,
    80,
    v35);
  V_LOCK();
  logfmt_raw(v35, 0x1000u, 0, "Share submissions: %lld", total_accepted + *(_QWORD *)&total_rejected);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/api_new.c",
    136,
    "print_summary",
    13,
    2128,
    80,
    v35);
  V_LOCK();
  logfmt_raw(v35, 0x1000u, 0, "Accepted shares: %lld", total_accepted);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/api_new.c",
    136,
    "print_summary",
    13,
    2129,
    80,
    v35);
  V_LOCK();
  logfmt_raw(v35, 0x1000u, 0, "Rejected shares: %lld", total_rejected, dword_177E94);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/api_new.c",
    136,
    "print_summary",
    13,
    2130,
    80,
    v35);
  V_LOCK();
  logfmt_raw(v35, 0x1000u, 0, "Accepted difficulty shares: %1.f", total_diff_accepted);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/api_new.c",
    136,
    "print_summary",
    13,
    2131,
    80,
    v35);
  V_LOCK();
  logfmt_raw(v35, 0x1000u, 0, "Rejected difficulty shares: %1.f", total_diff_rejected);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/api_new.c",
    136,
    "print_summary",
    13,
    2132,
    80,
    v35);
  V_LOCK();
  logfmt_raw(v35, 0x1000u, 0, "Total Hardware errors %llu", v33[12], v33[13]);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/api_new.c",
    136,
    "print_summary",
    13,
    2133,
    80,
    v35);
  if ( total_accepted || *(_QWORD *)&total_rejected )
  {
    V_LOCK();
    v16 = *(_QWORD *)&total_rejected;
    LODWORD(v18) = sub_1226E4(100LL * *(_QWORD *)&total_rejected);
    HIDWORD(v18) = v17;
    LODWORD(v19) = sub_1226E4(v16 + total_accepted);
    logfmt_raw(v35, 0x1000u, 0, "Reject ratio: %.1f%%", v18 / v19);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/api_new.c",
      136,
      "print_summary",
      13,
      2136,
      80,
      v35);
  }
  V_LOCK();
  logfmt_raw(v35, 0x1000u, 0, "Utility (accepted shares / min): %.2f/min", v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/api_new.c",
    136,
    "print_summary",
    13,
    2138,
    80,
    v35);
  V_LOCK();
  logfmt_raw(v35, 0x1000u, 0, "Work Utility (diff1 shares solved / min): %.2f/min", v4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/api_new.c",
    136,
    "print_summary",
    13,
    2139,
    80,
    v35);
  V_LOCK();
  logfmt_raw(v35, 0x1000u, 0, "Stale submissions discarded due to new blocks: %lld", total_stale, dword_177E44);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/api_new.c",
    136,
    "print_summary",
    13,
    2140,
    80,
    v35);
  V_LOCK();
  logfmt_raw(v35, 0x1000u, 0, "Unable to get work from server occasions: %d", total_go);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/api_new.c",
    136,
    "print_summary",
    13,
    2141,
    80,
    v35);
  V_LOCK();
  logfmt_raw(v35, 0x1000u, 0, "Submitting work remotely delay occasions: %d", total_ro);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/api_new.c",
    136,
    "print_summary",
    13,
    2142,
    80,
    v35);
  V_LOCK();
  logfmt_raw(v35, 0x1000u, 0, "New blocks detected on network: %d", new_blocks);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/api_new.c",
    136,
    "print_summary",
    13,
    2143,
    80,
    v35);
  if ( total_pools > 0 )
  {
    V_LOCK();
    logfmt_raw(v35, 0x1000u, 0, "Summary of pool statistics:");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/api_new.c",
      136,
      "print_summary",
      13,
      2147,
      80,
      v35);
    if ( total_pools > 0 )
    {
      v30 = 0;
      do
      {
        v20 = *(_DWORD *)(pools + 4 * v30);
        V_LOCK();
        v21 = (_QWORD *)(v20 + 1920);
        logfmt_raw(v35, 0x1000u, 0, "Pool: %s", *(_DWORD *)(v20 + 8));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/api_new.c",
          136,
          "print_summary",
          13,
          2152,
          80,
          v35);
        V_LOCK();
        logfmt_raw(v35, 0x1000u, 0, "User: %s", *(_DWORD *)(v20 + 12));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/api_new.c",
          136,
          "print_summary",
          13,
          2153,
          80,
          v35);
        V_LOCK();
        logfmt_raw(v35, 0x1000u, 0, "Share submissions: %lld", *(_QWORD *)(v20 + 1920) + *(_QWORD *)(v20 + 1928));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/api_new.c",
          136,
          "print_summary",
          13,
          2154,
          80,
          v35);
        V_LOCK();
        logfmt_raw(v35, 0x1000u, 0, "Accepted shares: %lld", *(_DWORD *)(v20 + 1920), *(_DWORD *)(v20 + 1924));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/api_new.c",
          136,
          "print_summary",
          13,
          2155,
          80,
          v35);
        V_LOCK();
        logfmt_raw(v35, 0x1000u, 0, "Rejected shares: %lld", *(_DWORD *)(v20 + 1928), *(_DWORD *)(v20 + 1932));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/api_new.c",
          136,
          "print_summary",
          13,
          2156,
          80,
          v35);
        V_LOCK();
        logfmt_raw(
          v35,
          0x1000u,
          0,
          "Accepted difficulty shares: %1.f",
          *(_DWORD *)(v20 + 1952),
          *(_DWORD *)(v20 + 1956));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/api_new.c",
          136,
          "print_summary",
          13,
          2157,
          80,
          v35);
        V_LOCK();
        logfmt_raw(
          v35,
          0x1000u,
          0,
          "Rejected difficulty shares: %1.f",
          *(_DWORD *)(v20 + 1960),
          *(_DWORD *)(v20 + 1964));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/api_new.c",
          136,
          "print_summary",
          13,
          2158,
          80,
          v35);
        if ( *(_QWORD *)(v20 + 1920) || *(_QWORD *)(v20 + 1928) )
        {
          V_LOCK();
          v22 = *(_QWORD *)(v20 + 1928);
          LODWORD(v24) = sub_1226E4(100 * v22);
          HIDWORD(v24) = v23;
          LODWORD(v25) = sub_1226E4(v22 + *v21);
          logfmt_raw(v35, 0x1000u, 0, "Reject ratio: %.1f%%", v24 / v25);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_godminer-new/api_new.c",
            136,
            "print_summary",
            13,
            2161,
            80,
            v35);
        }
        ++v30;
      }
      while ( total_pools > v30 );
    }
  }
  V_LOCK();
  logfmt_raw(v35, 0x1000u, 0, "Summary of per device statistics:");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/api_new.c",
    136,
    "print_summary",
    13,
    2166,
    80,
    v35);
  v32 = 0;
  result = (char *)get_all_created_runtime(&v32);
  if ( v32 > 0 )
  {
    v28 = result - 4;
    for ( i = 0; i < v32; ++i )
    {
      v6 = (_DWORD *)*((_DWORD *)v28 + 1);
      v28 += 4;
      v7 = snprintf(
             v34,
             0x1000u,
             "chain %d device %d wc %llu nc %llu detail: ",
             v6[54],
             v6[53],
             v26,
             v6[100],
             v6[101],
             v6[102],
             v6[103]);
      v8 = *(_DWORD *)v28;
      v9 = v7;
      v29 = *(_DWORD *)(*(_DWORD *)v28 + 296);
      if ( v29 > 0 )
      {
        v10 = 0;
        v27 = 0;
        while ( 1 )
        {
          v11 = *(_DWORD *)(v8 + 416);
          v12 = (__int64 *)(v11 + v10);
          v10 += 48;
          v13 = (__int64 *)(v11 + v10);
          ++v27;
          v14 = snprintf(&v34[v9], 4096 - v9, "%d:") + v9;
          do
          {
            v15 = *v12++;
            v14 += snprintf(&v34[v14], 4096 - v14, " %llu", v15);
          }
          while ( v13 != v12 );
          v9 = v14 + 2;
          snprintf(&v34[v14], 4096 - v14, " /");
          if ( v27 == v29 )
            break;
          v8 = *(_DWORD *)v28;
        }
      }
      V_LOCK();
      logfmt_raw(v35, 0x1000u, 0, "%s", v34);
      V_UNLOCK();
      result = (char *)zlog(
                         g_zc,
                         "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/bui"
                         "ld/godminer-origin_godminer-new/api_new.c",
                         136,
                         "print_summary",
                         13,
                         2186,
                         80,
                         v35);
    }
  }
  return result;
}
