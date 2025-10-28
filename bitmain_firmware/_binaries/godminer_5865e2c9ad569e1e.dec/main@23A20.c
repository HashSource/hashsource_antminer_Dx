int __fastcall main(int argc, const char **argv, const char **envp)
{
  int v5; // r3
  const char *v6; // r2
  const char *v7; // r1
  FILE *v8; // r7
  size_t v9; // r8
  int v10; // r11
  char *v11; // r9
  size_t i; // r7
  const unsigned __int16 **v13; // r0
  int v14; // t1
  int v15; // r2
  const char *v16; // r0
  const char *v17; // r0
  int v18; // r5
  int v20; // r3
  int v21; // r3
  int v22; // r1
  int v23; // r0
  unsigned int v24; // r7
  int v25; // r3
  int v26; // r1
  _DWORD *v27; // r0
  _DWORD *v28; // r9
  int hardware_version; // r8
  int v30; // r3
  int v31; // r1
  int v32; // r2
  const char *v33; // r1
  _DWORD *all_created_runtime; // r10
  int v35; // r3
  int v36; // r1
  int v37; // r8
  int v38; // r0
  int v39; // r3
  int v40; // r1
  int v41; // r3
  int v42; // r1
  int v43; // r12
  int v44; // r3
  int v45; // r1
  int v46; // r3
  int v47; // r3
  int v48; // r1
  int v49; // r1
  const char *v50; // r0
  int v51; // r1
  const char *v52; // r0
  int v53; // r3
  int v54; // r3
  int v55; // r1
  int v56; // r3
  int v57; // r3
  int v58; // r1
  void *v59; // [sp+14h] [bp-1068h]
  char dest[32]; // [sp+18h] [bp-1064h] BYREF
  char command[64]; // [sp+38h] [bp-1044h] BYREF
  char s[4100]; // [sp+78h] [bp-1004h] BYREF

  memset(s, 0, 0x100u);
  memset(command, 0, sizeof(command));
  LOWORD(v5) = 5556;
  LOWORD(v6) = 5568;
  HIWORD(v5) = (unsigned int)" %d, %s" >> 16;
  HIWORD(v6) = (unsigned int)" to specify at least one pool server." >> 16;
  snprintf(command, 0x40u, v6, v5);
  LOWORD(v7) = -8740;
  HIWORD(v7) = (unsigned int)"%s Overriding refa_clk_en, refb_clk_en, mplla_force_en, mpllb_force_en, ref_repeat_clk_en_r" >> 16;
  v8 = popen(command, v7);
  if ( v8 )
  {
    while ( fgets(s, 256, v8) )
      ;
    v9 = 0;
    pclose(v8);
    v10 = 0;
    v11 = s;
    for ( i = 1; strlen(s) >= i; ++i )
    {
      memset(dest, 0, sizeof(dest));
      v13 = _ctype_b_loc();
      v14 = (unsigned __int8)*v11++;
      if ( ((*v13)[v14] & 0x2000) != 0 )
      {
        strncpy(dest, &s[v9], i - v9 - 1);
        v9 = i;
        if ( strtol(dest, 0, 10) > 0 )
          ++v10;
      }
    }
    if ( v10 )
    {
      LOWORD(v15) = 5556;
      LOWORD(v16) = 5580;
      HIWORD(v15) = (unsigned int)" %d, %s" >> 16;
      HIWORD(v16) = (unsigned int)"at least one pool server." >> 16;
      printf(v16, v10, v15);
      if ( v10 != 1 )
      {
        LOWORD(v17) = 5636;
        v18 = 1;
        HIWORD(v17) = (unsigned int)&aInvalidPointer[8] >> 16;
        printf(v17);
        return v18;
      }
    }
  }
  if ( log_init() )
    puts("log init error!");
  V_LOCK();
  LOWORD(v20) = 5740;
  HIWORD(v20) = (unsigned int)"15ada4ba400_Sep 25 2023 16:53:10" >> 16;
  logfmt_raw(s, 0x1000u, 0, v20);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/god-miner.c",
    138,
    "main",
    4,
    1579,
    40,
    s);
  V_LOCK();
  LOWORD(v21) = 5756;
  HIWORD(v21) = (unsigned int)"25 2023 16:53:10" >> 16;
  logfmt_raw(s, 0x1000u, 0, v21);
  V_UNLOCK();
  LOWORD(v22) = 4264;
  HIWORD(v22) = (unsigned int)"or: jobid %p cancel %d" >> 16;
  zlog(g_zc, v22, 138, "main", 4, 1584, 40, s);
  while ( 1 )
  {
    v23 = EVPX_EncryptInit_ex(argc, (int)argv, "a:c:hp:Po:u:v:F", (const char **)&off_130A3C, 0);
    if ( v23 < 0 )
      break;
    parse_arg(v23, (char *)optarg);
  }
  if ( argc > optind )
  {
    V_LOCK();
    LOWORD(v57) = 5768;
    HIWORD(v57) = (unsigned int)"3:10" >> 16;
    logfmt_raw(s, 0x1000u, 0, v57, *argv, argv[optind]);
    V_UNLOCK();
    LOWORD(v58) = 4264;
    HIWORD(v58) = (unsigned int)"or: jobid %p cancel %d" >> 16;
    zlog(g_zc, v58, 138, "parse_cmdline", 13, 555, 100, s);
    exit(1);
  }
  v24 = 4;
  V_LOCK();
  LOWORD(v25) = 5812;
  HIWORD(v25) = (unsigned int)"gine_rvn begin!" >> 16;
  logfmt_raw(s, 0x1000u, 0, v25, opt_algo, off_1309E0[opt_algo]);
  V_UNLOCK();
  LOWORD(v26) = 4264;
  HIWORD(v26) = (unsigned int)"or: jobid %p cancel %d" >> 16;
  zlog(g_zc, v26, 138, "main", 4, 1588, 60, s);
  if ( !total_pools )
  {
    V_LOCK();
    LOWORD(v44) = 5828;
    HIWORD(v44) = (unsigned int)"always catch signal!" >> 16;
    v18 = 1;
    logfmt_raw(s, 0x1000u, 0, v44);
    V_UNLOCK();
    LOWORD(v45) = 4264;
    HIWORD(v45) = (unsigned int)"or: jobid %p cancel %d" >> 16;
    zlog(g_zc, v45, 138, "main", 4, 1604, 80, s);
    V_LOCK();
    LOWORD(v46) = 5872;
    HIWORD(v46) = (unsigned int)"d %d create failed" >> 16;
    logfmt_raw(s, 0x1000u, 0, v46);
    V_UNLOCK();
    v47 = 1605;
    goto LABEL_42;
  }
  droa_macro_check();
  if ( opt_version_path )
    read_version_file();
  else
    make_fake_version();
  if ( opt_api_remote )
  {
    pools_active = 1;
    start_api_thread();
  }
  v27 = dhash_content_init(opt_algo);
  v59 = v27;
  if ( !v27 )
  {
    LOWORD(v49) = 28452;
    LOWORD(v50) = 5892;
    HIWORD(v49) = (unsigned int)"r_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/dhash_content/eth/eth_2280/eth_2280_content.c" >> 16;
    HIWORD(v50) = (unsigned int)"simulation submit thread create failed" >> 16;
    printf(v50, v49);
    return 3;
  }
  set_frontend_runtime_type((int)v27, opt_algo);
  check_pool_worker();
  v18 = hardware_init(opt_algo);
  if ( !v18 )
  {
    v28 = machine_runtime_init(opt_machine_type, opt_algo);
    if ( !v28 )
    {
      LOWORD(v51) = 22536;
      LOWORD(v52) = 5892;
      HIWORD(v51) = (unsigned int)"dminer-origin_godminer-new/machine_runtime/dash_1766/machine_runtime_dash_1766.c" >> 16;
      HIWORD(v52) = (unsigned int)"simulation submit thread create failed" >> 16;
      printf(v52, v51);
      return 3;
    }
    hardware_version = get_hardware_version();
    V_LOCK();
    LOWORD(v30) = 5916;
    HIWORD(v30) = (unsigned int)" create failed" >> 16;
    logfmt_raw(
      s,
      0x1000u,
      0,
      v30,
      (unsigned __int16)hardware_version,
      "2.0.0_release_clean_master_abdd7697984ddd67627b79989c4bd15ada4ba400_Sep 25 2023 16:53:10");
    V_UNLOCK();
    LOWORD(v31) = 4264;
    HIWORD(v31) = (unsigned int)"or: jobid %p cancel %d" >> 16;
    zlog(g_zc, v31, 138, "init_miner_version", 18, 632, 40, s);
    LOWORD(v32) = 6052;
    LOWORD(v33) = 6040;
    HIWORD(v32) = (unsigned int)"voltage" >> 16;
    HIWORD(v33) = (unsigned int)"" >> 16;
    sprintf(g_miner_version, v33, (unsigned __int8)hardware_version, BYTE2(hardware_version), v32);
    *(_DWORD *)s = 0;
    all_created_runtime = get_all_created_runtime(s);
    if ( is_eeprom_loaded() )
    {
      while ( v18 < *(int *)s )
      {
        v43 = all_created_runtime[v18++];
        (*(void (__fastcall **)(int, int, int))(v43 + 160))(v43, 1, opt_custom_freq);
      }
    }
    check_sn((char *)v28[29]);
    http_test_case_init();
    start_http_thread();
    if ( check_pool_connect() == 35 )
      return 1;
    v18 = ((int (__fastcall *)(_DWORD *))v28[12])(v28);
    if ( v18 )
      return v18;
    if ( opt_algo == 10 )
    {
      V_LOCK();
      LOWORD(v54) = 6060;
      HIWORD(v54) = (unsigned int)"bitmain-fan-ctrl" >> 16;
      logfmt_raw(s, 0x1000u, 0, v54);
      V_UNLOCK();
      LOWORD(v55) = 4264;
      HIWORD(v55) = (unsigned int)"or: jobid %p cancel %d" >> 16;
      zlog(g_zc, v55, 138, "main", 4, 1682, 40, s);
      start_dag_gen_engine_kas();
    }
    signal(2, (__sighandler_t)sub_2D4F4);
    v24 = 4u;
    signal(3, (__sighandler_t)sub_2D4F4);
    signal(15, (__sighandler_t)sub_2D4F4);
    signal(11, (__sighandler_t)sub_2D4F4);
    signal(10, (__sighandler_t)sub_2D4F4);
    signal(13, (__sighandler_t)1);
    V_LOCK();
    LOWORD(v35) = 6092;
    HIWORD(v35) = (unsigned int)"pwm" >> 16;
    logfmt_raw(s, 0x1000u, 0, v35);
    V_UNLOCK();
    LOWORD(v36) = 4264;
    HIWORD(v36) = (unsigned int)"or: jobid %p cancel %d" >> 16;
    zlog(g_zc, v36, 138, "main", 4u, 1709, 40, s);
    if ( create_pool_connect() == 35 )
      return 1;
    thr_info = 0;
    pthread_attr_init(&stru_18B938);
    v37 = pthread_create(dword_18B934, &stru_18B938, (void *(*)(void *))work_generator_thread, &thr_info);
    pthread_attr_destroy(&stru_18B938);
    if ( v37 )
    {
      V_LOCK();
      LOWORD(v53) = 6116;
      HIWORD(v53) = (unsigned int)"bitmain-freq-level" >> 16;
      v18 = 1;
      logfmt_raw(s, 0x1000u, 0, v53);
      V_UNLOCK();
      v47 = 1719;
    }
    else
    {
      dword_18B960 = 1;
      pthread_attr_init((pthread_attr_t *)&dword_18B964[1]);
      v18 = pthread_create(
              dword_18B964,
              (const pthread_attr_t *)&dword_18B964[1],
              (void *(*)(void *))nonce_submit_thread,
              &dword_18B960);
      v38 = pthread_attr_destroy((pthread_attr_t *)&dword_18B964[1]);
      if ( !v18 )
      {
        miner_monitor_init(v38);
        V_LOCK();
        LOWORD(v39) = 6196;
        HIWORD(v39) = (unsigned int)"_1766" >> 16;
        logfmt_raw(s, 0x1000u, 0, v39);
        V_UNLOCK();
        LOWORD(v40) = 4264;
        HIWORD(v40) = (unsigned int)"or: jobid %p cancel %d" >> 16;
        zlog(g_zc, v40, 138, "main", 4u, 1740, 40, s);
        add_chip_status_observer((int)godminer_chip_status_monitor);
        add_fanspeed_observer((int)godminer_fan_monitor);
        miner_monitor_start();
        sleep(5u);
        set_miner_start_time();
        set_elapsed_time_validity(1);
        start_watchpool_thread();
        sleep(5u);
        ((void (__fastcall *)(_DWORD *))v28[3])(v28);
        pthread_join(dword_18B934[0], 0);
        V_LOCK();
        LOWORD(v41) = 6212;
        HIWORD(v41) = (unsigned int)"" >> 16;
        logfmt_raw(s, 0x1000u, 0, v41);
        V_UNLOCK();
        LOWORD(v42) = 4264;
        HIWORD(v42) = (unsigned int)"or: jobid %p cancel %d" >> 16;
        zlog(g_zc, v42, 138, "main", 4u, 1787, 80, s);
        print_summary();
        dhash_content_exit(v59);
        ((void (*)(void))v28[5])();
        machine_runtime_exit(0);
        return v18;
      }
      V_LOCK();
      LOWORD(v56) = 6156;
      HIWORD(v56) = (unsigned int)"kda_2110" >> 16;
      v18 = 1;
      logfmt_raw(s, 0x1000u, 0, v56);
      V_UNLOCK();
      v47 = 1727;
    }
LABEL_42:
    LOWORD(v48) = 4264;
    HIWORD(v48) = (unsigned int)"or: jobid %p cancel %d" >> 16;
    zlog(g_zc, v48, 138, "main", v24, v47, 100, s);
  }
  return v18;
}
