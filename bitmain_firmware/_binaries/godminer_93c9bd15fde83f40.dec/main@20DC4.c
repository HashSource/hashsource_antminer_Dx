int __fastcall main(int argc, const char **argv, const char **envp)
{
  int v5; // r4
  int v7; // r0
  int hardware_version; // r5
  int v9; // r3
  int v10; // r2
  int v11; // r5
  __pid_t v12; // r0
  int v13; // r6
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r5
  int v18; // r0
  int v19; // r2
  int eeprom_chain_load_state; // r0
  int v21; // r6
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int eeprom_chip_bin; // r10
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r12
  int v34; // r3
  int v35; // r0
  int v36; // r5
  int v37; // r12
  int k; // r5
  int v39; // r0
  int v40; // r1
  int v41; // r4
  int m; // r5
  void *(**v43)(void *); // r3
  pthread_t *v44; // r0
  int n; // r5
  pthread_t v46; // r0
  int v47; // lr
  int v48; // r12
  int *v49; // r6
  int ii; // r5
  int v51; // r1
  int v52; // r0
  bool v53; // cc
  int v54; // r7
  int v55; // r5
  int v56; // r7
  int v57; // r1
  int v58; // r6
  int v59; // r5
  int *v60; // r7
  int v61; // r11
  int v62; // r4
  int v63; // t1
  int v64; // r3
  int i; // r6
  int j; // r4
  int v67; // r7
  int v68; // r3
  int v69; // r4
  float v70; // s15
  int v71; // r3
  float v72; // s15
  int v73; // r3
  int v74; // r5
  const char *v75; // r0
  const char *v76; // r4
  bool v77; // r0
  int v78; // r5
  int *v79; // r7
  int v80; // r0
  int v81; // [sp+4h] [bp-10D8h]
  int eeprom_chip_ft; // [sp+30h] [bp-10ACh]
  int *v83; // [sp+30h] [bp-10ACh]
  int *all_created_runtime; // [sp+34h] [bp-10A8h]
  int v85; // [sp+40h] [bp-109Ch]
  int *v86; // [sp+48h] [bp-1094h]
  int v87; // [sp+50h] [bp-108Ch]
  int device_num; // [sp+60h] [bp-107Ch] BYREF
  int v89; // [sp+64h] [bp-1078h] BYREF
  size_t nmemb[4]; // [sp+68h] [bp-1074h] BYREF
  _DWORD v91[7]; // [sp+78h] [bp-1064h] BYREF
  int v92; // [sp+94h] [bp-1048h]
  _DWORD v93[4]; // [sp+98h] [bp-1044h] BYREF
  __int64 v94; // [sp+A8h] [bp-1034h]
  int v95; // [sp+B0h] [bp-102Ch]
  int v96; // [sp+B4h] [bp-1028h]
  float v97[4]; // [sp+B8h] [bp-1024h] BYREF
  __int64 v98; // [sp+C8h] [bp-1014h]
  int v99; // [sp+D0h] [bp-100Ch]
  int v100; // [sp+D4h] [bp-1008h]
  char v101[4100]; // [sp+D8h] [bp-1004h] BYREF

  device_num = 0;
  if ( (int)sub_22918("godminer") > 1 )
  {
    v5 = 1;
    printf("godminer is forbidden to start again as it is already started, will exit immediately.");
    return v5;
  }
  if ( (int)sub_22918("godminer-update") > 0 )
  {
    v5 = 1;
    printf("godminer-update is running now, exit.");
    return v5;
  }
  if ( log_init() )
    puts("log init error!");
  while ( 1 )
  {
    v7 = sub_12E3F8(argc, (int)argv, "a:c:hp:Po:u:v:F", (const char **)&off_16F1FC, 0, 1);
    if ( v7 < 0 )
      break;
    parse_arg(v7, (char *)optarg);
  }
  if ( argc > optind )
  {
    V_LOCK();
    logfmt_raw(v101, 0x1000u, 0, "%s: unsupported non-option argument -- '%s'", *argv, argv[optind]);
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
      v101);
    exit(1);
  }
  if ( !total_pools )
  {
    V_LOCK();
    logfmt_raw(v101, 0x1000u, 0, "Need to specify at least one pool server.");
    V_UNLOCK();
    v5 = 1;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "main",
      4,
      1032,
      80,
      v101);
    V_LOCK();
    logfmt_raw(v101, 0x1000u, 0, "Pool setup failed!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "main",
      4,
      1033,
      100,
      v101);
    return v5;
  }
  V_LOCK();
  logfmt_raw(v101, 0x1000u, 0, "release version");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1038,
    40,
    v101);
  V_LOCK();
  logfmt_raw(v101, 0x1000u, 0, "asic mode");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1048,
    40,
    v101);
  check_pool_worker();
  if ( system_info_init(opt_algo) )
  {
    V_LOCK();
    v5 = 1;
    logfmt_raw(v101, 0x1000u, 0, "system info init failed!");
    V_UNLOCK();
    v33 = 100;
    v34 = 1059;
    goto LABEL_35;
  }
  v5 = off_1A2B74(opt_algo);
  if ( v5 )
  {
    V_LOCK();
    v5 = 1;
    logfmt_raw(v101, 0x1000u, 0, "dev init failed!");
    V_UNLOCK();
    v33 = 100;
    v34 = 1065;
    goto LABEL_35;
  }
  check_fan_valiad();
  device_num = query_device_num();
  if ( device_num <= 0 )
  {
    V_LOCK();
    logfmt_raw(v101, 0x1000u, 0, "query_device_num error code %d and then exit", device_num);
    V_UNLOCK();
    v33 = 80;
    v34 = 1075;
LABEL_35:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "main",
      4,
      v34,
      v33,
      v101);
    return v5;
  }
  if ( opt_version_path )
    read_version_file();
  else
    make_fake_version();
  hardware_version = get_hardware_version();
  V_LOCK();
  logfmt_raw(
    v101,
    0x1000u,
    0,
    "godminer Version = 0x%04X %s",
    (unsigned __int16)hardware_version,
    "1.0.0_release_dirty_dev_b34081e9a19b2bab0b26132187ca0a29c72525d5_Dec  8 2021 10:35:45");
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
    v101);
  v9 = BYTE2(hardware_version);
  v10 = (unsigned __int8)hardware_version;
  v11 = 0;
  sprintf(g_miner_version, "%d.%d-%s", v10, v9, "1.0.0");
  V_LOCK();
  v12 = getpid();
  logfmt_raw(v101, 0x1000u, 0, "miner thread with %d backend runtime created pid %d", device_num, v12);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1086,
    60,
    v101);
  V_LOCK();
  logfmt_raw(v101, 0x1000u, 0, "opt_algo %d, %s", opt_algo, off_176C30[opt_algo]);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1087,
    60,
    v101);
  while ( device_num > v11 )
  {
    if ( !runtime_ctrl(opt_algo) )
    {
      v5 = 1;
      V_LOCK();
      logfmt_raw(v101, 0x1000u, 0, "runtime ctrl error!");
      V_UNLOCK();
      v47 = 80;
      v48 = 1091;
      goto LABEL_63;
    }
    ++v11;
  }
  v13 = 0;
  all_created_runtime = get_all_created_runtime(&device_num);
  while ( device_num > v13 )
  {
    v14 = ((int (__fastcall *)(int))off_1A2B94[0])(v13);
    printf("eeprom add device :%d\n", v14);
    v15 = v13++;
    v16 = ((int (__fastcall *)(int))off_1A2B94[0])(v15);
    add_eeprom_device(v16);
  }
  v17 = 0;
  v85 = eeprom_load();
  while ( device_num > v17 )
  {
    v97[0] = 0.0;
    v93[0] = 0;
    LOWORD(v89) = 0;
    BYTE2(v89) = 0;
    eeprom_chain_load_state = api_get_eeprom_chain_load_state(v17);
    v21 = eeprom_chain_load_state;
    if ( eeprom_chain_load_state == -1 )
    {
      V_LOCK();
      v35 = ((int (__fastcall *)(int))off_1A2B94[0])(v17);
      logfmt_raw(v101, 0x1000u, 0, "g_eeprom_data is not ready, chain = %d", v35);
      V_UNLOCK();
      v19 = 1114;
      goto LABEL_26;
    }
    if ( !eeprom_chain_load_state )
    {
      V_LOCK();
      v18 = ((int (__fastcall *)(int))off_1A2B94[0])(v17);
      logfmt_raw(v101, 0x1000u, v21, "Chain%d load EEPROM error.", v18);
      V_UNLOCK();
      v19 = 1116;
LABEL_26:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        v19,
        100,
        v101);
      goto LABEL_27;
    }
    v22 = ((int (__fastcall *)(int))off_1A2B94[0])(v17);
    eeprom_get_voltage(v22, nmemb);
    v23 = ((int (__fastcall *)(int))off_1A2B94[0])(v17);
    eeprom_get_freq(v23, v91);
    v24 = ((int (__fastcall *)(int))off_1A2B94[0])(v17);
    api_get_eeprom_nonce_response_rate(v24, v97);
    api_get_eeprom_pcb_version(v17, (char *)v93);
    api_get_eeprom_bom_version(v17, (char *)&v89);
    v25 = ((int (__fastcall *)(int))off_1A2B94[0])(v17);
    eeprom_chip_bin = api_get_eeprom_chip_bin(v25);
    v27 = ((int (__fastcall *)(int))off_1A2B94[0])(v17);
    eeprom_chip_ft = api_get_eeprom_chip_ft(v27);
    api_get_eeprom_miner_type(v17, (void *)(all_created_runtime[v17] + 212));
    V_LOCK();
    v28 = ((int (__fastcall *)(int))off_1A2B94[0])(v17);
    logfmt_raw(v101, 0x1000u, 0, "Chain [%d] PCB version 0x%s", v28, v93);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "main",
      4,
      1127,
      60,
      v101);
    V_LOCK();
    v29 = ((int (__fastcall *)(int))off_1A2B94[0])(v17);
    logfmt_raw(v101, 0x1000u, 0, "Chain [%d] BOM version 0x%s", v29, &v89);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "main",
      4,
      1128,
      60,
      v101);
    V_LOCK();
    v30 = ((int (__fastcall *)(int))off_1A2B94[0])(v17);
    logfmt_raw(v101, 0x1000u, 0, "Chain [%d] CHIP FT %s BIN%d", v30, eeprom_chip_ft, eeprom_chip_bin);
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
      v101);
    V_LOCK();
    v31 = ((int (__fastcall *)(int))off_1A2B94[0])(v17);
    logfmt_raw(v101, 0x1000u, 0, "Chain [%d] vol: %d, freq:%d", v31, nmemb[0], v91[0]);
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
      v101);
    V_LOCK();
    v32 = ((int (__fastcall *)(int))off_1A2B94[0])(v17);
    logfmt_raw(v101, 0x1000u, 0, "Chain [%d] nonce response rate: %0.2f", v32, v81, v97[0]);
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
      v101);
LABEL_27:
    ++v17;
  }
  if ( v85 )
  {
    V_LOCK();
    logfmt_raw(v101, 0x1000u, 0, "Eeprom load error! Use default params.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "main",
      4,
      1142,
      100,
      v101);
  }
  else
  {
    opt_custom_freq = eeprom_get_min_freq();
    opt_custom_voltage = eeprom_get_max_voltage();
    V_LOCK();
    logfmt_raw(v101, 0x1000u, 0, "MAX voltage: %d", opt_custom_voltage);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "main",
      4,
      1139,
      60,
      v101);
    V_LOCK();
    logfmt_raw(v101, 0x1000u, 0, "MIN freq: %d", opt_custom_freq);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "main",
      4,
      1140,
      60,
      v101);
  }
  v36 = 0;
  nmemb[0] = 0;
  v83 = get_all_created_runtime(nmemb);
  if ( is_eeprom_loaded() )
  {
    while ( v36 < (int)nmemb[0] )
    {
      v37 = v83[v36++];
      (*(void (__fastcall **)(int, int, int))(v37 + 108))(v37, 1, opt_custom_freq);
    }
    v5 = 0;
  }
  if ( !opt_custom_freq && opt_algo == 2 )
  {
    v58 = 0;
    v59 = 0;
    v60 = (int *)calloc(nmemb[0], 4u);
    v86 = v60;
    v87 = v5;
    while ( v58 < (int)nmemb[0] )
    {
      (*(void (**)(void))(v83[v58] + 116))();
      V_LOCK();
      v61 = *v60;
      v62 = *(_DWORD *)(v83[v58++] + 136);
      LODWORD(v97[2]) = 3;
      LODWORD(v97[1]) = 5;
      LODWORD(v97[0]) = "chain";
      v98 = v62;
      v99 = 0;
      ++dword_1A8A20[0];
      logfmt_raw(v101, 0x1000u, 0, v100, "chain", 5, 3, v97[3], (__int64)v62, 0, v100, "level %d", v61);
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
        v101);
      v63 = *v60++;
      v64 = v59;
      if ( (unsigned int)(v63 - 1) >= 2 )
        v64 = 1;
      v59 = v64;
    }
    for ( i = 1; ; i = 2 )
    {
      for ( j = 0; j < (int)nmemb[0]; ++j )
      {
        if ( v59 && v86[j] == i )
        {
          V_LOCK();
          v71 = v83[j];
          --v59;
          v72 = *(float *)(v71 + 760);
          v73 = *(_DWORD *)(v71 + 136);
          v93[0] = "chain";
          v93[1] = 5;
          v93[2] = 3;
          v94 = v73;
          v95 = 0;
          ++dword_1A8A20[0];
          logfmt_raw(
            v101,
            0x1000u,
            0,
            v96,
            "chain",
            5,
            3,
            v93[3],
            (__int64)v73,
            0,
            v96,
            "adjust freq to %d",
            (int)v72 + 25);
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
            v101);
          (*(void (__fastcall **)(int, int, int, _DWORD, _DWORD))(v83[j] + 108))(
            v83[j],
            1,
            (int)*(float *)(v83[j] + 760) + 25,
            0,
            0);
        }
      }
      if ( i == 2 )
        break;
    }
    v67 = 0;
    while ( v67 < (int)nmemb[0] )
    {
      V_LOCK();
      v68 = v83[v67];
      v69 = *(_DWORD *)(v68 + 136);
      ++v67;
      v70 = *(float *)(v68 + 760);
      v91[1] = 5;
      v91[0] = "chain";
      v91[2] = 3;
      v91[4] = v69;
      v91[5] = v69 >> 31;
      v91[6] = 0;
      ++dword_1A8A20[0];
      logfmt_raw(v101, 0x1000u, 0, v92, "chain", 5, 3, v91[3], (__int64)v69, 0, v92, "freq %d", (int)v70);
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
        v101);
    }
    v5 = v87;
  }
  for ( k = 0; device_num > k; ++k )
  {
    v39 = k;
    off_1A2B88(v39);
  }
  V_LOCK();
  logfmt_raw(v101, 0x1000u, 0, "all runtimes have been poweroff.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1153,
    60,
    v101);
  power_off();
  sleep(8u);
  if ( power_init() )
  {
    V_LOCK();
    v5 = 1;
    logfmt_raw(v101, 0x1000u, 0, "power init error!");
    V_UNLOCK();
    v33 = 100;
    v34 = 1157;
    goto LABEL_35;
  }
  while ( device_num > v5 )
  {
    (*(void (**)(void))all_created_runtime[v5])();
    v40 = all_created_runtime[v5++];
    redirect_nonce_output(*all_created_runtime, v40);
  }
  set_baud((char *)0x2FAF08);
  sub_227F0();
  v41 = auto_set_host_side_baud();
  if ( v41 )
    return 1;
  for ( m = 0; device_num > m; ++m )
  {
    sub_227F0();
    v43 = (void *(**)(void *))all_created_runtime[m];
    v44 = &nmemb[m];
    pthread_create(v44, 0, v43[1], v43);
  }
  for ( n = 0; device_num > n; ++n )
  {
    v46 = nmemb[n];
    pthread_join(v46, 0);
  }
  check_and_destroy_abnormal_runtime();
  v49 = get_all_created_runtime(&device_num);
  if ( device_num <= 0 )
  {
    V_LOCK();
    v5 = 1;
    logfmt_raw(v101, 0x1000u, 0, "there is no qualified device remain after check abnormal runtime!");
    V_UNLOCK();
    v47 = 100;
    v48 = 1204;
    goto LABEL_63;
  }
  for ( ii = 0; ii < device_num; ++ii )
  {
    v51 = v49[ii];
    redirect_nonce_output(*v49, v51);
  }
  if ( is_check_asic_voltage_enable() )
  {
    sub_227F0();
    set_working_voltage(1);
  }
  v52 = opt_algo;
  if ( opt_algo == 8 )
    v52 = 2;
  set_frontend_runtime_type(v52);
  while ( total_pools > v41 )
  {
    v53 = opt_algo != 0;
    if ( opt_algo )
      v53 = (unsigned int)(opt_algo - 4) > 1;
    if ( !v53 )
    {
      v54 = *(_DWORD *)(pools + 4 * v41);
      V_LOCK();
      logfmt_raw(v101, 0x1000u, 0, "Using JSON-RPC 2.0");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        1232,
        40,
        v101);
      *(_BYTE *)(v54 + 1024) = 1;
    }
    ++v41;
  }
  signal(2, (__sighandler_t)sub_276DC);
  signal(3, (__sighandler_t)sub_276DC);
  signal(15, (__sighandler_t)sub_276DC);
  signal(11, (__sighandler_t)sub_276DC);
  signal(10, (__sighandler_t)sub_276DC);
  signal(13, (__sighandler_t)1);
  V_LOCK();
  logfmt_raw(v101, 0x1000u, 0, "signal");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1249,
    60,
    v101);
  if ( create_pool_stratum_threads() )
  {
    V_LOCK();
    v5 = 1;
    logfmt_raw(v101, 0x1000u, 0, "stratum thread create failed");
    V_UNLOCK();
    v33 = 100;
    v34 = 1252;
    goto LABEL_35;
  }
  v55 = 1;
  sleep(1u);
  while ( 1 )
  {
    v56 = (unsigned __int8)pools_active;
    if ( pools_active )
      break;
    if ( v55 == 60 )
    {
      V_LOCK();
      logfmt_raw(v101, 0x1000u, v56, "No servers were found that could be used to get work from.");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        1264,
        100,
        v101);
      V_LOCK();
      logfmt_raw(v101, 0x1000u, v56, "Please check the details from the list below of the servers you have input.");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        1265,
        100,
        v101);
      V_LOCK();
      logfmt_raw(
        v101,
        0x1000u,
        v56,
        "Most likely you have input the wrong URL, forgotten to add a port, have not set up workers, or the network was disconnected.");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        1266,
        100,
        v101);
      while ( total_pools > v56 )
      {
        v74 = *(_DWORD *)(pools + 4 * v56);
        V_LOCK();
        logfmt_raw(
          v101,
          0x1000u,
          0,
          "Pool: %d  URL: %s\tUser: %s  Password: %s",
          *(_DWORD *)v74,
          *(_DWORD *)(v74 + 8),
          *(_DWORD *)(v74 + 12),
          *(_DWORD *)(v74 + 16));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/god-miner.c",
          132,
          "main",
          4,
          1272,
          80,
          v101);
        v75 = *(const char **)(v74 + 16);
        if ( v75 )
        {
          v76 = *(const char **)(v74 + 12);
          if ( v76 )
          {
            if ( strstr(v75, "stats") )
              v77 = 1;
            else
              v77 = strcmp(v76, "benchmark") == 0;
            *(_BYTE *)(v74 + 1016) = v77;
          }
        }
        ++v56;
      }
      v5 = 0;
      V_LOCK();
      v78 = 0;
      logfmt_raw(v101, 0x1000u, 0, "No servers could be used!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        1278,
        100,
        v101);
      v89 = 0;
      v79 = get_all_created_runtime(&v89);
      while ( v78 < v89 )
      {
        (*(void (**)(void))(v79[v78] + 8))();
        v80 = v79[v78++];
        (*(void (**)(void))(v80 + 16))();
      }
      fan_pwm_set(0x14u);
      green_led_off();
      red_led_off();
      if ( opt_api_remote && (dword_1B04D0 = 1, sub_22A48((int)&dword_1B04D0, (void *(*)(void *))sub_29D7C)) )
      {
        V_LOCK();
        logfmt_raw(v101, 0x1000u, 0, "api thread create failed");
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
          v101);
      }
      else
      {
        while ( !pools_active )
          sleep(1u);
      }
      V_LOCK();
      logfmt_raw(v101, 0x1000u, 0, "Pool is activing, exiting and restart.");
      V_UNLOCK();
      v47 = 60;
      v48 = 1280;
      goto LABEL_63;
    }
    ++v55;
    sleep(1u);
    sub_16E4B4(v55, 0xAu);
    if ( !v57 )
      sub_227F0();
  }
  thr_info = 0;
  if ( sub_22A48((int)&thr_info, (void *(*)(void *))work_generator_thread) )
  {
    V_LOCK();
    v5 = 1;
    logfmt_raw(v101, 0x1000u, 0, "work generator thread %d create failed");
    V_UNLOCK();
    v47 = 100;
    v48 = 1288;
  }
  else
  {
    dword_1B04D0 = 1;
    if ( sub_22A48((int)&dword_1B04D0, (void *(*)(void *))nonce_submit_thread) )
    {
      V_LOCK();
      v5 = 1;
      logfmt_raw(v101, 0x1000u, 0, "simulation submit thread create failed");
      V_UNLOCK();
      v47 = 100;
      v48 = 1296;
    }
    else
    {
      set_miner_start_time();
      miner_monitor_init();
      godminer_register_status_monitor();
      miner_monitor_start();
      dword_1B0500 = 2;
      v5 = sub_22A48((int)&dword_1B0500, (void *(*)(void *))watchpool_thread);
      if ( v5 )
      {
        V_LOCK();
        v5 = 1;
        logfmt_raw(v101, 0x1000u, 0, "watchpool thread create failed");
        V_UNLOCK();
        v47 = 100;
        v48 = 1310;
      }
      else
      {
        sleep(5u);
        if ( !opt_api_remote || (dword_1B0530 = 3, !sub_22A48((int)&dword_1B0530, (void *(*)(void *))sub_29D7C)) )
        {
          http_test_case = http_test_bm;
          start_http_thread();
          pthread_join(dword_1B04A4, 0);
          V_LOCK();
          logfmt_raw(v101, 0x1000u, 0, "workio threads dead, exiting.");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/god-miner.c",
            132,
            "main",
            4,
            1333,
            80,
            v101);
          print_summary();
          return v5;
        }
        V_LOCK();
        v5 = 1;
        logfmt_raw(v101, 0x1000u, 0, "api thread create failed");
        V_UNLOCK();
        v47 = 100;
        v48 = 1321;
      }
    }
  }
LABEL_63:
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    v48,
    v47,
    v101);
  return v5;
}
