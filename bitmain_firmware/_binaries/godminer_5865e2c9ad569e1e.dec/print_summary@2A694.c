char *print_summary()
{
  double v0; // d0
  double v1; // d11
  double v2; // r0
  double v3; // d9
  double v4; // d8
  int v5; // r3
  int v6; // r1
  int v7; // r3
  int v8; // r1
  int v9; // r3
  int v10; // r1
  int v11; // r3
  int v12; // r1
  int v13; // r3
  int v14; // r1
  int v15; // r3
  int v16; // r1
  int v17; // r3
  int v18; // r1
  int v19; // r3
  int v20; // r1
  int v21; // r3
  int v22; // r1
  int v23; // r1
  int v24; // r3
  int v25; // r1
  int v26; // r3
  int v27; // r1
  int v28; // r3
  int v29; // r1
  int v30; // r3
  int v31; // r1
  int v32; // r3
  int v33; // r1
  int v34; // r3
  int v35; // r1
  int v36; // r3
  int v37; // r1
  int v38; // r3
  int v39; // r1
  int v40; // r3
  int v41; // r1
  char *result; // r0
  const char *v43; // r11
  char *v44; // r3
  char *v45; // r2
  _DWORD *v46; // r12
  int v47; // r0
  int v48; // r3
  int v49; // r6
  char *v50; // r2
  int v51; // r8
  int v52; // r5
  __int64 *v53; // r4
  __int64 *v54; // r5
  int v55; // r3
  int v56; // r9
  __int64 v57; // t1
  __int64 v58; // r4
  int v59; // r1
  double v60; // d10
  double v61; // r0
  int v62; // r3
  int v63; // r1
  int v64; // r3
  int v65; // r1
  int v66; // r3
  int v67; // r1
  int v68; // r2
  int v69; // r9
  int v70; // r8
  unsigned int *v71; // r4
  int v72; // r3
  int v73; // r3
  int v74; // r3
  int v75; // r3
  int v76; // r3
  int v77; // r3
  unsigned int v78; // r5
  unsigned int v79; // r6
  int v80; // r1
  double v81; // d8
  double v82; // r0
  int v83; // r3
  int v84; // [sp+4h] [bp-2078h]
  int v85; // [sp+18h] [bp-2064h]
  char *v86; // [sp+1Ch] [bp-2060h]
  int v87; // [sp+1Ch] [bp-2060h]
  int v88; // [sp+20h] [bp-205Ch]
  char *v89; // [sp+24h] [bp-2058h]
  char *v90; // [sp+28h] [bp-2054h]
  int v91; // [sp+2Ch] [bp-2050h]
  int v92; // [sp+2Ch] [bp-2050h]
  char *format; // [sp+34h] [bp-2048h]
  int v94; // [sp+3Ch] [bp-2040h] BYREF
  float v95[14]; // [sp+40h] [bp-203Ch] BYREF
  char v96[4040]; // [sp+78h] [bp-2004h] BYREF
  char v97[4100]; // [sp+1078h] [bp-1004h] BYREF

  read_system_status_from_monitor((int)v95);
  v1 = v95[6] / 1000.0 / 1000.0 / 1000.0;
  get_miner_elapsed_time();
  LODWORD(v2) = sub_12F00C(total_accepted);
  v3 = v2 / v0 * 60.0;
  v4 = (total_diff_accepted + total_diff_rejected + total_diff_stale) / v0 * 60.0;
  V_LOCK();
  LOWORD(v5) = 660;
  HIWORD(v5) = (unsigned int)" difficulty shares: %1.f" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v5);
  V_UNLOCK();
  LOWORD(v6) = -1960;
  HIWORD(v6) = (unsigned int)"p %d chipaddr %x reg %x to %08x" >> 16;
  zlog(g_zc, v6, 136, "print_summary", 13, 2148, 80, v97);
  V_LOCK();
  LOWORD(v7) = 692;
  HIWORD(v7) = (unsigned int)"cted difficulty shares: %1.f" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v7, (int)v0 / 3600, (int)v0 % 3600 / 60, (int)v0 % 60);
  V_UNLOCK();
  LOWORD(v8) = -1960;
  HIWORD(v8) = (unsigned int)"p %d chipaddr %x reg %x to %08x" >> 16;
  zlog(g_zc, v8, 136, "print_summary", 13, 2149, 80, v97);
  V_LOCK();
  LOWORD(v9) = 728;
  HIWORD(v9) = (unsigned int)"l Hardware errors %llu" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v9, v1);
  V_UNLOCK();
  LOWORD(v10) = -1960;
  HIWORD(v10) = (unsigned int)"p %d chipaddr %x reg %x to %08x" >> 16;
  zlog(g_zc, v10, 136, "print_summary", 13, 2150, 80, v97);
  V_LOCK();
  LOWORD(v11) = 760;
  HIWORD(v11) = (unsigned int)"atio: %.1f%%" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v11, total_getworks, dword_18B2FC);
  V_UNLOCK();
  LOWORD(v12) = -1960;
  HIWORD(v12) = (unsigned int)"p %d chipaddr %x reg %x to %08x" >> 16;
  zlog(g_zc, v12, 136, "print_summary", 13, 2151, 80, v97);
  V_LOCK();
  LOWORD(v13) = 792;
  HIWORD(v13) = (unsigned int)"d shares / min): %.2f/min" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v13, local_work);
  V_UNLOCK();
  LOWORD(v14) = -1960;
  HIWORD(v14) = (unsigned int)"p %d chipaddr %x reg %x to %08x" >> 16;
  zlog(g_zc, v14, 136, "print_summary", 13, 2152, 80, v97);
  V_LOCK();
  LOWORD(v15) = 824;
  HIWORD(v15) = (unsigned int)" Utility (diff1 shares solved / min): %.2f/min" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v15, dword_1740A8);
  V_UNLOCK();
  LOWORD(v16) = -1960;
  HIWORD(v16) = (unsigned int)"p %d chipaddr %x reg %x to %08x" >> 16;
  zlog(g_zc, v16, 136, "print_summary", 13, 2153, 80, v97);
  V_LOCK();
  LOWORD(v17) = 844;
  HIWORD(v17) = (unsigned int)"es solved / min): %.2f/min" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v17, total_accepted + *(_QWORD *)&total_rejected);
  V_UNLOCK();
  LOWORD(v18) = -1960;
  HIWORD(v18) = (unsigned int)"p %d chipaddr %x reg %x to %08x" >> 16;
  zlog(g_zc, v18, 136, "print_summary", 13, 2154, 80, v97);
  V_LOCK();
  LOWORD(v19) = 868;
  HIWORD(v19) = (unsigned int)"in" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v19, total_accepted);
  V_UNLOCK();
  LOWORD(v20) = -1960;
  HIWORD(v20) = (unsigned int)"p %d chipaddr %x reg %x to %08x" >> 16;
  zlog(g_zc, v20, 136, "print_summary", 13, 2155, 80, v97);
  V_LOCK();
  LOWORD(v21) = 892;
  HIWORD(v21) = (unsigned int)"scarded due to new blocks: %lld" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v21, total_rejected, dword_18B314);
  V_UNLOCK();
  LOWORD(v22) = -1960;
  HIWORD(v22) = (unsigned int)"p %d chipaddr %x reg %x to %08x" >> 16;
  zlog(g_zc, v22, 136, "print_summary", 13, 2156, 80, v97);
  V_LOCK();
  logfmt_raw(v97, 0x1000u, 0, "Accepted difficulty shares: %1.f", total_diff_accepted);
  V_UNLOCK();
  LOWORD(v23) = -1960;
  HIWORD(v23) = (unsigned int)"p %d chipaddr %x reg %x to %08x" >> 16;
  zlog(g_zc, v23, 136, "print_summary", 13, 2157, 80, v97);
  V_LOCK();
  LOWORD(v24) = 952;
  HIWORD(v24) = (unsigned int)"er occasions: %d" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v24, total_diff_rejected);
  V_UNLOCK();
  LOWORD(v25) = -1960;
  HIWORD(v25) = (unsigned int)"p %d chipaddr %x reg %x to %08x" >> 16;
  zlog(g_zc, v25, 136, "print_summary", 13, 2158, 80, v97);
  V_LOCK();
  LOWORD(v26) = 988;
  HIWORD(v26) = (unsigned int)"remotely delay occasions: %d" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v26, v95[12], v95[13]);
  V_UNLOCK();
  LOWORD(v27) = -1960;
  HIWORD(v27) = (unsigned int)"p %d chipaddr %x reg %x to %08x" >> 16;
  zlog(g_zc, v27, 136, "print_summary", 13, 2159, 80, v97);
  if ( total_accepted || *(_QWORD *)&total_rejected )
  {
    V_LOCK();
    v58 = *(_QWORD *)&total_rejected;
    LODWORD(v60) = sub_12F00C(100LL * *(_QWORD *)&total_rejected);
    HIDWORD(v60) = v59;
    LODWORD(v61) = sub_12F00C(v58 + total_accepted);
    LOWORD(v62) = 1016;
    HIWORD(v62) = (unsigned int)"" >> 16;
    logfmt_raw(v97, 0x1000u, 0, v62, v60 / v61);
    V_UNLOCK();
    LOWORD(v63) = -1960;
    HIWORD(v63) = (unsigned int)"p %d chipaddr %x reg %x to %08x" >> 16;
    zlog(g_zc, v63, 136, "print_summary", 13, 2162, 80, v97);
  }
  V_LOCK();
  LOWORD(v28) = 1040;
  HIWORD(v28) = (unsigned int)"on network: %d" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v28, v3);
  V_UNLOCK();
  LOWORD(v29) = -1960;
  HIWORD(v29) = (unsigned int)"p %d chipaddr %x reg %x to %08x" >> 16;
  zlog(g_zc, v29, 136, "print_summary", 13, 2164, 80, v97);
  V_LOCK();
  LOWORD(v30) = 1084;
  HIWORD(v30) = (unsigned int)"Pool: %s" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v30, v4);
  V_UNLOCK();
  LOWORD(v31) = -1960;
  HIWORD(v31) = (unsigned int)"p %d chipaddr %x reg %x to %08x" >> 16;
  zlog(g_zc, v31, 136, "print_summary", 13, 2165, 80, v97);
  V_LOCK();
  LOWORD(v32) = 1136;
  HIWORD(v32) = (unsigned int)"tics:" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v32, total_stale, dword_18B2C4);
  V_UNLOCK();
  LOWORD(v33) = -1960;
  HIWORD(v33) = (unsigned int)"p %d chipaddr %x reg %x to %08x" >> 16;
  zlog(g_zc, v33, 136, "print_summary", 13, 2166, 80, v97);
  V_LOCK();
  LOWORD(v34) = 1188;
  HIWORD(v34) = (unsigned int)"Start api function" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v34, total_go);
  V_UNLOCK();
  LOWORD(v35) = -1960;
  HIWORD(v35) = (unsigned int)"p %d chipaddr %x reg %x to %08x" >> 16;
  zlog(g_zc, v35, 136, "print_summary", 13, 2167, 80, v97);
  V_LOCK();
  LOWORD(v36) = 1236;
  HIWORD(v36) = (unsigned int)"() failed" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v36, total_ro);
  V_UNLOCK();
  LOWORD(v37) = -1960;
  HIWORD(v37) = (unsigned int)"p %d chipaddr %x reg %x to %08x" >> 16;
  zlog(g_zc, v37, 136, "print_summary", 13, 2168, 80, v97);
  V_LOCK();
  LOWORD(v38) = 1284;
  HIWORD(v38) = (unsigned int)"bind to port %d failed, trying again in 30sec" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v38, new_blocks);
  V_UNLOCK();
  LOWORD(v39) = -1960;
  HIWORD(v39) = (unsigned int)"p %d chipaddr %x reg %x to %08x" >> 16;
  zlog(g_zc, v39, 136, "print_summary", 13, 2169, 80, v97);
  if ( total_pools > 0 )
  {
    V_LOCK();
    LOWORD(v66) = 1320;
    HIWORD(v66) = (unsigned int)" in 30sec" >> 16;
    logfmt_raw(v97, 0x1000u, 0, v66);
    V_UNLOCK();
    LOWORD(v67) = -1960;
    HIWORD(v67) = (unsigned int)"p %d chipaddr %x reg %x to %08x" >> 16;
    zlog(g_zc, v67, 136, "print_summary", 13, 2173, 80, v97);
    if ( total_pools > 0 )
    {
      LOWORD(v68) = 1348;
      LOWORD(v69) = -1960;
      HIWORD(v68) = (unsigned int)" %d, failed (%s)" >> 16;
      HIWORD(v69) = (unsigned int)"p %d chipaddr %x reg %x to %08x" >> 16;
      v92 = v68;
      v87 = 0;
      do
      {
        v70 = *(_DWORD *)(pools + 4 * v87);
        V_LOCK();
        v71 = (unsigned int *)(v70 + 1936);
        logfmt_raw(v97, 0x1000u, 0, v92, *(_DWORD *)(v70 + 12));
        V_UNLOCK();
        zlog(g_zc, v69, 136, "print_summary", 13, 2178, 80, v97);
        V_LOCK();
        LOWORD(v72) = 1360;
        HIWORD(v72) = (unsigned int)"(%s)" >> 16;
        logfmt_raw(v97, 0x1000u, 0, v72, *(_DWORD *)(v70 + 16));
        V_UNLOCK();
        zlog(g_zc, v69, 136, "print_summary", 13, 2179, 80, v97);
        V_LOCK();
        LOWORD(v73) = 844;
        HIWORD(v73) = (unsigned int)"es solved / min): %.2f/min" >> 16;
        logfmt_raw(v97, 0x1000u, 0, v73, *(_QWORD *)(v70 + 1928) + *(_QWORD *)(v70 + 1936));
        V_UNLOCK();
        zlog(g_zc, v69, 136, "print_summary", 13, 2180, 80, v97);
        V_LOCK();
        LOWORD(v74) = 868;
        HIWORD(v74) = (unsigned int)"in" >> 16;
        logfmt_raw(v97, 0x1000u, 0, v74, *(_DWORD *)(v70 + 1928), *(_DWORD *)(v70 + 1932));
        V_UNLOCK();
        zlog(g_zc, v69, 136, "print_summary", 13, 2181, 80, v97);
        V_LOCK();
        LOWORD(v75) = 892;
        HIWORD(v75) = (unsigned int)"scarded due to new blocks: %lld" >> 16;
        logfmt_raw(v97, 0x1000u, 0, v75, *(_DWORD *)(v70 + 1936), *(_DWORD *)(v70 + 1940));
        V_UNLOCK();
        zlog(g_zc, v69, 136, "print_summary", 13, 2182, 80, v97);
        V_LOCK();
        v70 += 1968;
        LOWORD(v76) = 916;
        HIWORD(v76) = (unsigned int)"s: %lld" >> 16;
        logfmt_raw(v97, 0x1000u, 0, v76, *(_DWORD *)(v70 - 8), *(_DWORD *)(v70 - 4));
        V_UNLOCK();
        zlog(g_zc, v69, 136, "print_summary", 13, 2183, 80, v97);
        V_LOCK();
        LOWORD(v77) = 952;
        HIWORD(v77) = (unsigned int)"er occasions: %d" >> 16;
        logfmt_raw(v97, 0x1000u, 0, v77, *(_DWORD *)v70, *(_DWORD *)(v70 + 4));
        V_UNLOCK();
        zlog(g_zc, v69, 136, "print_summary", 13, 2184, 80, v97);
        if ( *((_QWORD *)v71 - 1) || *(_QWORD *)v71 )
        {
          V_LOCK();
          v78 = *v71;
          v79 = v71[1];
          LODWORD(v81) = sub_12F00C(100LL * *(_QWORD *)v71);
          HIDWORD(v81) = v80;
          LODWORD(v82) = sub_12F00C(__PAIR64__(v79, v78) + *((_QWORD *)v71 - 1));
          LOWORD(v83) = 1016;
          HIWORD(v83) = (unsigned int)"" >> 16;
          logfmt_raw(v97, 0x1000u, 0, v83, v81 / v82);
          V_UNLOCK();
          zlog(g_zc, v69, 136, "print_summary", 13, 2187, 80, v97);
        }
        ++v87;
      }
      while ( total_pools > v87 );
    }
  }
  V_LOCK();
  LOWORD(v40) = 1372;
  HIWORD(v40) = (unsigned int)"exec listen() failed (%s)" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v40);
  V_UNLOCK();
  LOWORD(v41) = -1960;
  HIWORD(v41) = (unsigned int)"p %d chipaddr %x reg %x to %08x" >> 16;
  zlog(g_zc, v41, 136, "print_summary", 13, 2192, 80, v97);
  v94 = 0;
  result = (char *)get_all_created_runtime(&v94);
  if ( v94 > 0 )
  {
    LOWORD(v43) = 30236;
    LOWORD(v44) = 1408;
    LOWORD(v45) = -1208;
    HIWORD(v44) = (unsigned int)" socket failed" >> 16;
    HIWORD(v45) = (unsigned int)"Failures" >> 16;
    v86 = result - 4;
    v91 = 0;
    format = v44;
    v90 = v45;
    do
    {
      v46 = (_DWORD *)*((_DWORD *)v86 + 1);
      v86 += 4;
      v47 = snprintf(v96, 0x1000u, format, v46[58], v46[57], v84, v46[104], v46[105], v46[106], v46[107]);
      v48 = *(_DWORD *)v86;
      v49 = v47;
      v88 = *(_DWORD *)(*(_DWORD *)v86 + 312);
      if ( v88 > 0 )
      {
        LOWORD(v50) = -1204;
        v51 = 0;
        HIWORD(v50) = (unsigned int)"ures" >> 16;
        v85 = 0;
        v89 = v50;
        while ( 1 )
        {
          v52 = *(_DWORD *)(v48 + 432);
          v53 = (__int64 *)(v52 + v51);
          v51 += 48;
          v54 = (__int64 *)(v52 + v51);
          ++v85;
          v56 = snprintf(&v96[v49], 4096 - v49, v90) + v49;
          do
          {
            v57 = *v53++;
            HIWORD(v43) = (unsigned int)off_147724 >> 16;
            v56 += snprintf(&v96[v56], 4096 - v56, v43, v55, v57);
          }
          while ( v54 != v53 );
          v49 = v56 + 2;
          snprintf(&v96[v56], 4096 - v56, v89);
          if ( v85 == v88 )
            break;
          v48 = *(_DWORD *)v86;
        }
      }
      V_LOCK();
      LOWORD(v64) = -25124;
      HIWORD(v64) = (unsigned int)"core_little_core_num failed" >> 16;
      logfmt_raw(v97, 0x1000u, 0, v64, v96);
      V_UNLOCK();
      LOWORD(v65) = -1960;
      HIWORD(v65) = (unsigned int)"p %d chipaddr %x reg %x to %08x" >> 16;
      ++v91;
      result = (char *)zlog(g_zc, v65, 136, "print_summary", 13, 2212, 80, v97);
    }
    while ( v94 > v91 );
  }
  return result;
}
