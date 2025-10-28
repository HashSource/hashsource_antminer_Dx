int __fastcall main(int argc, const char **argv, const char **envp)
{
  int v5; // r4
  int v7; // r0
  int hardware_version; // r8
  int v9; // r7
  __pid_t v10; // r0
  int v11; // r8
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r1
  int i; // r7
  int v17; // r0
  int v18; // r2
  int eeprom_chain_load_state; // r0
  int v20; // r9
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  const char *v26; // r1
  int v27; // r12
  int v28; // r3
  int v29; // r0
  int v30; // r0
  int v31; // r7
  int v32; // r12
  int v33; // r8
  int k; // r7
  int v35; // r0
  int v36; // r1
  int v37; // r4
  int m; // r6
  void *(**v39)(void *); // r3
  pthread_t *v40; // r0
  int n; // r6
  pthread_t v42; // r0
  int v43; // lr
  int v44; // r12
  int *v45; // r7
  int ii; // r6
  int v47; // r1
  bool v48; // cc
  int v49; // r8
  int v50; // r6
  int v51; // r8
  int v52; // r1
  int v53; // r9
  int *v54; // r6
  int v55; // r3
  int v56; // t1
  int v57; // r1
  int v58; // r8
  int v59; // r9
  int v60; // r6
  int *v61; // r7
  int j; // r4
  int v63; // lr
  int v64; // r6
  const char *v65; // r0
  const char *v66; // r4
  bool v67; // r0
  int v68; // r6
  int *v69; // r8
  int v70; // r0
  int *all_created_runtime; // [sp+2Ch] [bp-10A0h]
  int *v72; // [sp+30h] [bp-109Ch]
  int *v73; // [sp+38h] [bp-1094h]
  int v74; // [sp+38h] [bp-1094h]
  int device_num; // [sp+50h] [bp-107Ch] BYREF
  int v76; // [sp+54h] [bp-1078h] BYREF
  size_t nmemb[4]; // [sp+58h] [bp-1074h] BYREF
  _DWORD v78[7]; // [sp+68h] [bp-1064h] BYREF
  int v79; // [sp+84h] [bp-1048h]
  _DWORD v80[7]; // [sp+88h] [bp-1044h] BYREF
  int v81; // [sp+A4h] [bp-1028h]
  _DWORD v82[7]; // [sp+A8h] [bp-1024h] BYREF
  int v83; // [sp+C4h] [bp-1008h]
  char v84[4100]; // [sp+C8h] [bp-1004h] BYREF

  device_num = 0;
  if ( (int)sub_21728("godminer") > 1 )
  {
    v5 = 1;
    printf("godminer is forbidden to start again as it is already started, will exit immediately.");
    return v5;
  }
  if ( (int)sub_21728("godminer-update") > 0 )
  {
    v5 = 1;
    printf("godminer-update is running now, exit.");
    return v5;
  }
  if ( log_init() )
    puts("log init error!");
  while ( 1 )
  {
    v7 = sub_1026B4(argc, (int)argv, "a:c:hp:Po:u:v:F", (const char **)&off_15E3A4, 0, 1);
    if ( v7 < 0 )
      break;
    parse_arg(v7, (char *)optarg);
  }
  if ( argc > optind )
  {
    V_LOCK();
    logfmt_raw(v84, 0x1000u, 0, "%s: unsupported non-option argument -- '%s'", *argv, argv[optind]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "parse_cmdline",
      13,
      602,
      100,
      v84);
    exit(1);
  }
  if ( !total_pools )
  {
    V_LOCK();
    logfmt_raw(v84, 0x1000u, 0, "Need to specify at least one pool server.");
    V_UNLOCK();
    v5 = 1;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "main",
      4,
      1031,
      80,
      v84);
    V_LOCK();
    logfmt_raw(v84, 0x1000u, 0, "Pool setup failed!");
    V_UNLOCK();
    v26 = "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/god-miner.c";
    v27 = 100;
    v28 = 1032;
    v29 = g_zc;
LABEL_35:
    zlog(v29, v26, 132, "main", 4, v28, v27, v84);
    return v5;
  }
  V_LOCK();
  logfmt_raw(v84, 0x1000u, 0, "release version");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1037,
    40,
    v84);
  V_LOCK();
  logfmt_raw(v84, 0x1000u, 0, "asic mode");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1047,
    40,
    v84);
  check_pool_worker();
  if ( system_info_init(opt_algo) )
  {
    V_LOCK();
    v5 = 1;
    logfmt_raw(v84, 0x1000u, 0, "system info init failed!");
    V_UNLOCK();
    v27 = 100;
    v28 = 1058;
LABEL_38:
    LOWORD(v26) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/"
                                    "release/build/godminer-origin_master/god-miner.c";
    goto LABEL_39;
  }
  v5 = off_18F4C8(opt_algo);
  if ( v5 )
  {
    V_LOCK();
    v5 = 1;
    logfmt_raw(v84, 0x1000u, 0, "dev init failed!");
    V_UNLOCK();
    v27 = 100;
    v28 = 1064;
    goto LABEL_38;
  }
  check_fan_valiad();
  device_num = query_device_num();
  if ( device_num <= 0 )
  {
    V_LOCK();
    logfmt_raw(v84, 0x1000u, 0, "query_device_num error code %d and then exit", device_num);
    V_UNLOCK();
    v27 = 80;
    v28 = 1074;
    goto LABEL_38;
  }
  if ( opt_version_path )
    read_version_file();
  else
    make_fake_version();
  hardware_version = get_hardware_version();
  V_LOCK();
  v9 = 0;
  logfmt_raw(
    v84,
    0x1000u,
    0,
    "godminer Version = 0x%04X %s",
    (unsigned __int16)hardware_version,
    "1.0.0_release_dirty_dev_7e402070b87f12d06d59802efbad5504c9ef80dc_Oct 20 2021 11:03:10");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "init_miner_version",
    18,
    682,
    40,
    v84);
  sprintf(g_miner_version, "%d.%d-%s", (unsigned __int8)hardware_version, BYTE2(hardware_version), "1.0.0");
  V_LOCK();
  v10 = getpid();
  logfmt_raw(v84, 0x1000u, 0, "miner thread with %d backend runtime created pid %d", device_num, v10);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1085,
    60,
    v84);
  while ( device_num > v9 )
  {
    if ( !runtime_ctrl(opt_algo) )
    {
      v5 = 1;
      V_LOCK();
      logfmt_raw(v84, 0x1000u, 0, "runtime ctrl error!");
      V_UNLOCK();
      v43 = 80;
      v44 = 1089;
      goto LABEL_65;
    }
    ++v9;
  }
  v11 = 0;
  all_created_runtime = get_all_created_runtime(&device_num);
  while ( device_num > v11 )
  {
    v12 = ((int (__fastcall *)(int))off_18F4E8[0])(v11);
    printf("eeprom add device :%d\n", v12);
    v13 = v11++;
    v14 = ((int (__fastcall *)(int))off_18F4E8[0])(v13);
    add_eeprom_device(v14, v15);
  }
  if ( eeprom_load() )
  {
    V_LOCK();
    logfmt_raw(v84, 0x1000u, 0, "Eeprom load error! Use default params.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "main",
      4,
      1110,
      100,
      v84);
  }
  else
  {
    opt_custom_freq = eeprom_get_min_freq();
    opt_custom_voltage = eeprom_get_max_voltage();
    V_LOCK();
    logfmt_raw(v84, 0x1000u, 0, "MAX voltage: %d", opt_custom_voltage);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "main",
      4,
      1107,
      60,
      v84);
    V_LOCK();
    logfmt_raw(v84, 0x1000u, 0, "MIN freq: %d", opt_custom_freq);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "main",
      4,
      1108,
      60,
      v84);
  }
  for ( i = 0; device_num > i; ++i )
  {
    v82[0] = 0;
    LOWORD(nmemb[0]) = 0;
    BYTE2(nmemb[0]) = 0;
    eeprom_chain_load_state = api_get_eeprom_chain_load_state(i);
    v20 = eeprom_chain_load_state;
    if ( eeprom_chain_load_state == -1 )
    {
      V_LOCK();
      v30 = ((int (__fastcall *)(int))off_18F4E8[0])(i);
      logfmt_raw(v84, 0x1000u, 0, "g_eeprom_data is not ready, chain = %d", v30);
      V_UNLOCK();
      v18 = 1120;
      goto LABEL_28;
    }
    if ( !eeprom_chain_load_state )
    {
      V_LOCK();
      v17 = ((int (__fastcall *)(int))off_18F4E8[0])(i);
      logfmt_raw(v84, 0x1000u, v20, "Chain%d load EEPROM error.", v17);
      V_UNLOCK();
      v18 = 1122;
LABEL_28:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        v18,
        100,
        v84);
      continue;
    }
    v21 = ((int (__fastcall *)(int))off_18F4E8[0])(i);
    eeprom_get_voltage(v21, v78);
    v22 = ((int (__fastcall *)(int))off_18F4E8[0])(i);
    eeprom_get_freq(v22, v80);
    api_get_eeprom_pcb_version(i, (char *)v82);
    api_get_eeprom_bom_version(i, (char *)nmemb);
    api_get_eeprom_miner_type(i, (void *)(all_created_runtime[i] + 200));
    V_LOCK();
    v23 = ((int (__fastcall *)(int))off_18F4E8[0])(i);
    logfmt_raw(v84, 0x1000u, 0, "Chain [%d] PCB version 0x%s", v23, v82);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "main",
      4,
      1129,
      60,
      v84);
    V_LOCK();
    v24 = ((int (__fastcall *)(int))off_18F4E8[0])(i);
    logfmt_raw(v84, 0x1000u, 0, "Chain [%d] BOM version 0x%s", v24, nmemb);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "main",
      4,
      1130,
      60,
      v84);
    V_LOCK();
    v25 = ((int (__fastcall *)(int))off_18F4E8[0])(i);
    logfmt_raw(v84, 0x1000u, 0, "Chain [%d] vol: %d, freq:%d", v25, v78[0], v80[0]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "main",
      4,
      1131,
      60,
      v84);
  }
  v31 = 0;
  nmemb[0] = 0;
  v72 = get_all_created_runtime(nmemb);
  if ( is_eeprom_loaded() )
  {
    while ( v31 < (int)nmemb[0] )
    {
      v32 = v72[v31++];
      (*(void (__fastcall **)(int, int, int))(v32 + 96))(v32, 1, opt_custom_freq);
    }
    v5 = 0;
  }
  v33 = opt_custom_freq;
  if ( !opt_custom_freq && opt_algo == 2 )
  {
    v53 = 0;
    v54 = (int *)calloc(nmemb[0], 4u);
    v73 = v54;
    while ( v53 < (int)nmemb[0] )
    {
      (*(void (**)(void))(v72[v53] + 104))();
      V_LOCK();
      v55 = v72[v53++];
      V_INT((int)v82, "chain", *(int *)(v55 + 124));
      logfmt_raw(v84, 0x1000u, 0, v83, v82[0], v82[1], v82[2], v82[3], v82[4], v82[5], v82[6], v83, "level %d", *v54);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "backend_runtime_custom_parameter_update",
        39,
        968,
        60,
        v84);
      v56 = *v54++;
      if ( (unsigned int)(v56 - 1) >= 2 )
        v33 = 1;
    }
    v57 = v33;
    v58 = 0;
    v59 = 1;
    v60 = v57;
    v61 = v73;
    v74 = v5;
    while ( 1 )
    {
      for ( j = 0; j < (int)nmemb[0]; ++j )
      {
        if ( v60 && v59 == v61[j] )
        {
          V_LOCK();
          --v60;
          V_INT((int)v80, "chain", *(int *)(v72[j] + 124));
          logfmt_raw(
            v84,
            0x1000u,
            0,
            v81,
            v80[0],
            v80[1],
            v80[2],
            v80[3],
            v80[4],
            v80[5],
            v80[6],
            v81,
            "adjust freq to %d",
            (int)*(float *)(v72[j] + 732) + 25);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/god-miner.c",
            132,
            "backend_runtime_custom_parameter_update",
            39,
            977,
            60,
            v84);
          (*(void (__fastcall **)(int, int, int, _DWORD, _DWORD))(v72[j] + 96))(
            v72[j],
            1,
            (int)*(float *)(v72[j] + 732) + 25,
            0,
            0);
        }
      }
      if ( v59 == 2 )
        break;
      v59 = 2;
    }
    while ( v58 < (int)nmemb[0] )
    {
      V_LOCK();
      V_INT((int)v78, "chain", *(int *)(v72[v58] + 124));
      v63 = v72[v58++];
      logfmt_raw(
        v84,
        0x1000u,
        0,
        v79,
        v78[0],
        v78[1],
        v78[2],
        v78[3],
        v78[4],
        v78[5],
        v78[6],
        v79,
        "freq %d",
        (int)*(float *)(v63 + 732));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "backend_runtime_custom_parameter_update",
        39,
        985,
        60,
        v84);
    }
    v5 = v74;
  }
  for ( k = 0; device_num > k; ++k )
  {
    v35 = k;
    off_18F4DC(v35);
  }
  V_LOCK();
  logfmt_raw(v84, 0x1000u, 0, "all runtimes have been poweroff.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1143,
    60,
    v84);
  power_off();
  sleep(8u);
  if ( power_init() )
  {
    V_LOCK();
    v5 = 1;
    logfmt_raw(v84, 0x1000u, 0, "power init error!");
    V_UNLOCK();
    v27 = 100;
    v28 = 1147;
    LOWORD(v26) = -5248;
    goto LABEL_39;
  }
  while ( device_num > v5 )
  {
    (*(void (**)(void))all_created_runtime[v5])();
    v36 = all_created_runtime[v5++];
    redirect_nonce_output(*all_created_runtime, v36);
  }
  set_baud(3125000);
  v37 = auto_set_host_side_baud();
  if ( v37 )
    return 1;
  for ( m = 0; device_num > m; ++m )
  {
    sub_21600();
    v39 = (void *(**)(void *))all_created_runtime[m];
    v40 = &nmemb[m];
    pthread_create(v40, 0, v39[1], v39);
  }
  for ( n = 0; device_num > n; ++n )
  {
    v42 = nmemb[n];
    pthread_join(v42, 0);
  }
  check_and_destroy_abnormal_runtime();
  v45 = get_all_created_runtime(&device_num);
  if ( device_num <= 0 )
  {
    V_LOCK();
    v5 = 1;
    logfmt_raw(v84, 0x1000u, 0, "there is no qualified device remain after check abnormal runtime!");
    V_UNLOCK();
    v43 = 100;
    v44 = 1193;
    goto LABEL_65;
  }
  for ( ii = 0; ii < device_num; ++ii )
  {
    v47 = v45[ii];
    redirect_nonce_output(*v45, v47);
  }
  if ( is_check_asic_voltage_enable() )
    set_working_voltage();
  set_frontend_runtime_type(opt_algo);
  while ( total_pools > v37 )
  {
    v48 = opt_algo != 0;
    if ( opt_algo )
      v48 = (unsigned int)(opt_algo - 4) > 1;
    if ( !v48 )
    {
      v49 = *(_DWORD *)(pools + 4 * v37);
      V_LOCK();
      logfmt_raw(v84, 0x1000u, 0, "Using JSON-RPC 2.0");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        1216,
        40,
        v84);
      *(_BYTE *)(v49 + 1024) = 1;
    }
    ++v37;
  }
  signal(2, (__sighandler_t)sub_264D8);
  signal(3, (__sighandler_t)sub_264D8);
  signal(15, (__sighandler_t)sub_264D8);
  signal(11, (__sighandler_t)sub_264D8);
  signal(10, (__sighandler_t)sub_264D8);
  signal(13, (__sighandler_t)1);
  V_LOCK();
  logfmt_raw(v84, 0x1000u, 0, "signal");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1233,
    60,
    v84);
  if ( create_pool_stratum_threads() )
  {
    V_LOCK();
    v5 = 1;
    logfmt_raw(v84, 0x1000u, 0, "stratum thread create failed");
    V_UNLOCK();
    v27 = 100;
    v28 = 1236;
    LOWORD(v26) = -5248;
LABEL_39:
    HIWORD(v26) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/rele"
                                "ase/build/godminer-origin_master/god-miner.c" >> 16;
    v29 = g_zc;
    goto LABEL_35;
  }
  v50 = 1;
  sleep(1u);
  while ( 1 )
  {
    v51 = (unsigned __int8)pools_active;
    if ( pools_active )
      break;
    if ( v50 == 60 )
    {
      V_LOCK();
      logfmt_raw(v84, 0x1000u, v51, "No servers were found that could be used to get work from.");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        1248,
        100,
        v84);
      V_LOCK();
      logfmt_raw(v84, 0x1000u, v51, "Please check the details from the list below of the servers you have input.");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        1249,
        100,
        v84);
      V_LOCK();
      logfmt_raw(
        v84,
        0x1000u,
        v51,
        "Most likely you have input the wrong URL, forgotten to add a port, have not set up workers, or the network was disconnected.");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        1250,
        100,
        v84);
      while ( total_pools > v51 )
      {
        v64 = *(_DWORD *)(pools + 4 * v51);
        V_LOCK();
        logfmt_raw(
          v84,
          0x1000u,
          0,
          "Pool: %d  URL: %s\tUser: %s  Password: %s",
          *(_DWORD *)v64,
          *(_DWORD *)(v64 + 8),
          *(_DWORD *)(v64 + 12),
          *(_DWORD *)(v64 + 16));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/god-miner.c",
          132,
          "main",
          4,
          1256,
          80,
          v84);
        v65 = *(const char **)(v64 + 16);
        if ( v65 )
        {
          v66 = *(const char **)(v64 + 12);
          if ( v66 )
          {
            if ( strstr(v65, "stats") )
              v67 = 1;
            else
              v67 = strcmp(v66, "benchmark") == 0;
            *(_BYTE *)(v64 + 1016) = v67;
          }
        }
        ++v51;
      }
      v5 = 0;
      V_LOCK();
      v68 = 0;
      logfmt_raw(v84, 0x1000u, 0, "No servers could be used!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        1262,
        100,
        v84);
      v76 = 0;
      v69 = get_all_created_runtime(&v76);
      while ( v68 < v76 )
      {
        (*(void (**)(void))(v69[v68] + 8))();
        v70 = v69[v68++];
        (*(void (**)(void))(v70 + 16))();
      }
      fan_pwm_set(0x14u);
      green_led_off();
      red_led_off();
      if ( opt_api_remote && (dword_19CF68 = 1, sub_21858((int)&dword_19CF68, (void *(*)(void *))sub_2A044)) )
      {
        V_LOCK();
        logfmt_raw(v84, 0x1000u, 0, "api thread create failed");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/god-miner.c",
          132,
          "process_no_servers_could_be_used",
          32,
          925,
          100,
          v84);
      }
      else
      {
        while ( !pools_active )
          sleep(1u);
      }
      V_LOCK();
      logfmt_raw(v84, 0x1000u, 0, "Pool is activing, exiting and restart.");
      V_UNLOCK();
      v43 = 60;
      v44 = 1264;
      goto LABEL_65;
    }
    ++v50;
    sleep(1u);
    sub_15D65C(v50, 0xAu);
    if ( !v52 )
      sub_21600();
  }
  thr_info = 0;
  if ( sub_21858((int)&thr_info, (void *(*)(void *))work_generator_thread) )
  {
    V_LOCK();
    v5 = 1;
    logfmt_raw(v84, 0x1000u, 0, "work generator thread %d create failed");
    V_UNLOCK();
    v43 = 100;
    v44 = 1272;
  }
  else
  {
    dword_19CF68 = 1;
    if ( sub_21858((int)&dword_19CF68, (void *(*)(void *))nonce_submit_thread) )
    {
      V_LOCK();
      v5 = 1;
      logfmt_raw(v84, 0x1000u, 0, "simulation submit thread create failed");
      V_UNLOCK();
      v43 = 100;
      v44 = 1280;
    }
    else
    {
      set_miner_start_time();
      miner_monitor_init();
      godminer_register_status_monitor();
      miner_monitor_start();
      dword_19CF98 = 2;
      v5 = sub_21858((int)&dword_19CF98, (void *(*)(void *))watchpool_thread);
      if ( v5 )
      {
        V_LOCK();
        v5 = 1;
        logfmt_raw(v84, 0x1000u, 0, "watchpool thread create failed");
        V_UNLOCK();
        v43 = 100;
        v44 = 1294;
      }
      else
      {
        sleep(5u);
        if ( !opt_api_remote || (dword_19CFC8 = 3, !sub_21858((int)&dword_19CFC8, (void *(*)(void *))sub_2A044)) )
        {
          http_test_case = http_test_bm;
          start_http_thread();
          pthread_join(dword_19CF3C, 0);
          V_LOCK();
          logfmt_raw(v84, 0x1000u, 0, "workio threads dead, exiting.");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/god-miner.c",
            132,
            "main",
            4,
            1317,
            80,
            v84);
          print_summary();
          return v5;
        }
        V_LOCK();
        v5 = 1;
        logfmt_raw(v84, 0x1000u, 0, "api thread create failed");
        V_UNLOCK();
        v43 = 100;
        v44 = 1305;
      }
    }
  }
LABEL_65:
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    v44,
    v43,
    v84);
  return v5;
}
