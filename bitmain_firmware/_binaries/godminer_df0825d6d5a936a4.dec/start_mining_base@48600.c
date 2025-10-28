int __fastcall start_mining_base(int a1)
{
  int v1; // r4
  _DWORD *all_created_runtime; // r0
  _DWORD *v4; // r6
  _DWORD *v5; // r9
  int v6; // t1
  int v7; // r0
  int started; // r10
  _DWORD *v9; // r6
  int (**v10)(void); // t1
  int v11; // r0
  int v12; // r4
  int v13; // r0
  int *v14; // r8
  int v15; // r6
  unsigned int v16; // r0
  int *v17; // r4
  int v18; // t1
  int *v19; // r4
  int v20; // r8
  int v21; // t1
  int v23; // [sp+14h] [bp-1008h] BYREF
  char v24[4100]; // [sp+18h] [bp-1004h] BYREF

  v1 = 0;
  v23 = 0;
  all_created_runtime = get_all_created_runtime(&v23);
  v4 = all_created_runtime;
  if ( v23 > 0 )
  {
    if ( !*all_created_runtime )
    {
LABEL_31:
      printf("invalid pointer(%s)!\n", "be_runtimes[c]");
      return 3;
    }
    v5 = all_created_runtime;
    while ( 1 )
    {
      v7 = dev_ctrl(all_created_runtime);
      all_created_runtime = (_DWORD *)(*(int (__fastcall **)(int))(v7 + 28))(v1++);
      if ( v23 <= v1 )
        break;
      v6 = v5[1];
      ++v5;
      if ( !v6 )
        goto LABEL_31;
    }
  }
  V_LOCK();
  logfmt_raw(v24, 0x1000u, 0, "all backend runtimes have been poweroff.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/machine_runtime/machine_runtime_base.c",
    165,
    "start_mining_base",
    17,
    515,
    60,
    v24);
  if ( *(_DWORD *)(a1 + 64) <= 5u && opt_custom_power_mode == 1 )
  {
    byte_165CB8 = 1;
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, "sleep on!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/machine_runtime/machine_runtime_base.c",
      165,
      "start_mining_base",
      17,
      521,
      60,
      v24);
  }
  if ( power_init((unsigned __int8)byte_165CB8) )
  {
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, ">> power init error, check PSU please <<");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/machine_runtime/machine_runtime_base.c",
      165,
      "start_mining_base",
      17,
      524,
      100,
      v24);
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, "Sweep error string = %s.", "V:1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/machine_runtime/machine_runtime_base.c",
      165,
      "start_mining_base",
      17,
      525,
      100,
      v24);
    return 30;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, ">> power init success <<");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/machine_runtime/machine_runtime_base.c",
      165,
      "start_mining_base",
      17,
      528,
      40,
      v24);
    started = start_heartbeat_thread();
    if ( started )
      return start_heartbeat_thread();
    (*(void (__fastcall **)(int, _DWORD))(a1 + 32))(a1, *(_DWORD *)(a1 + 72));
    if ( v23 > 0 )
    {
      v9 = v4 - 1;
      do
      {
        v10 = (int (**)(void))v9[1];
        ++v9;
        v11 = (*v10)();
        if ( !v11 )
        {
          v12 = 3;
          do
          {
            v13 = dev_ctrl(v11);
            (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v13 + 24))(
              *(_DWORD *)(*v9 + 212),
              *(_DWORD *)(*v9 + 920),
              *(_DWORD *)(*v9 + 944));
            (*(void (**)(void))(*v9 + 204))();
            v11 = (*(int (**)(void))(*v9 + 192))();
            if ( !v11 )
              break;
            --v12;
          }
          while ( v12 );
        }
        ++started;
      }
      while ( v23 > started );
    }
    check_and_destroy_abnormal_runtime();
    v14 = (int *)get_all_created_runtime(&v23);
    if ( v23 <= 0 )
    {
      V_LOCK();
      v15 = 12;
      logfmt_raw(v24, 0x1000u, 0, "there is no qualified device remain after check abnormal runtime!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/machine_runtime/machine_runtime_base.c",
        165,
        "start_mining_base",
        17,
        555,
        100,
        v24);
    }
    else
    {
      v15 = (*(int (__fastcall **)(int, _DWORD))(a1 + 32))(a1, *(_DWORD *)(a1 + 76));
      if ( !v15 )
      {
        (*(void (__fastcall **)(int))(a1 + 56))(a1);
        V_LOCK();
        logfmt_raw(v24, 0x1000u, 0, "check bringup temperature %d C", *(_DWORD *)(a1 + 84));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/machine_runtime/machine_runtime_base.c",
          165,
          "start_mining_base",
          17,
          565,
          60,
          v24);
        v16 = (*(int (__fastcall **)(_DWORD))(a1 + 24))(*(_DWORD *)(a1 + 84));
        fan_pwm_set(v16);
        if ( v23 > 0 )
        {
          v17 = v14 - 1;
          do
          {
            v18 = v17[1];
            ++v17;
            ++v15;
            redirect_nonce_output(*v14, v18);
            (*(void (**)(void))(*v17 + 208))();
          }
          while ( v23 > v15 );
        }
        if ( *(_DWORD *)(a1 + 64) == 8 )
        {
          (*(void (__fastcall **)(int))(a1 + 56))(a1);
          V_LOCK();
          logfmt_raw(v24, 0x1000u, 0, "check bringup temperature %d C", *(_DWORD *)(a1 + 84));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_godminer-new/machine_runtime/machine_runtime_base.c",
            165,
            "start_mining_base",
            17,
            581,
            60,
            v24);
        }
        v15 = (*(int (__fastcall **)(int))(a1 + 36))(a1);
        if ( !v15 && v23 > 0 )
        {
          v19 = v14 - 1;
          v20 = 0;
          do
          {
            v21 = v19[1];
            ++v19;
            ++v20;
            (*(void (**)(void))(v21 + 4))();
            (*(void (**)(void))(*v19 + 120))();
            (*(void (**)(void))(*v19 + 16))();
          }
          while ( v23 > v20 );
        }
      }
    }
    return v15;
  }
}
