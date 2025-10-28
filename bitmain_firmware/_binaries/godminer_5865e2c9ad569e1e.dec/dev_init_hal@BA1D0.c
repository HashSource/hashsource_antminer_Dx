int __fastcall dev_init_hal(int a1)
{
  int v1; // r4
  unsigned int hash_on_plug; // r8
  int v3; // r3
  int v5; // r3
  int v6; // r0
  int v7; // r3
  unsigned __int8 v9; // [sp+27h] [bp-1005h] BYREF
  char v10[4100]; // [sp+28h] [bp-1004h] BYREF

  v1 = platform_init();
  if ( v1 )
  {
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, 1405688);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/device/platform_device_hal.c",
      163,
      "dev_init_hal",
      12,
      57,
      100,
      v10);
    return -1;
  }
  else
  {
    total_chain = 0;
    hash_on_plug = get_hash_on_plug();
    v3 = total_chain;
    do
    {
      while ( ((hash_on_plug >> v1) & 1) == 0 )
      {
        if ( ++v1 == 16 )
          goto LABEL_7;
      }
      g_chain_info[2 * v3] = v1;
      LOBYTE(g_chain_info[2 * v3 + 1]) = 1;
      V_LOCK();
      logfmt_raw(v10, 0x1000u, 0, 1405876, total_chain, g_chain_info[2 * total_chain]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/device/platform_device_hal.c",
        163,
        "dev_init_hal",
        12,
        67,
        60,
        v10);
      if ( platform_is_pic_mcu_en() )
      {
        if ( open_pic((unsigned __int8)v1) < 0 )
        {
          V_LOCK();
          logfmt_raw(
            v10,
            0x1000u,
            0,
            "chain_offset %d, chain %d, open pic error!",
            total_chain,
            g_chain_info[2 * total_chain]);
          V_UNLOCK();
          v6 = g_zc;
          v7 = 71;
LABEL_14:
          zlog(
            v6,
            "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_godminer-new/backend/device/platform_device_hal.c",
            163,
            "dev_init_hal",
            12,
            v7,
            100,
            v10);
          return -1;
        }
        pic1704_reset(v1);
        usleep(0x493E0u);
        pic1704_jump_to_app(v1);
        usleep(0x493E0u);
        if ( !pic1704_get_sw_version(g_chain_info[2 * total_chain], &v9) )
        {
          V_LOCK();
          logfmt_raw(v10, 0x1000u, 0, 1405948, total_chain, g_chain_info[2 * total_chain]);
          V_UNLOCK();
          v6 = g_zc;
          v7 = 82;
          goto LABEL_14;
        }
        V_LOCK();
        logfmt_raw(v10, 0x1000u, 0, 1406000, total_chain, g_chain_info[2 * total_chain], v9);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/backend/device/platform_device_hal.c",
          163,
          "dev_init_hal",
          12,
          88,
          60,
          v10);
      }
      ++v1;
      v3 = ++total_chain;
    }
    while ( v1 != 16 );
LABEL_7:
    if ( a1 != v3 )
    {
      V_LOCK();
      LOWORD(v5) = 4784;
      HIWORD(v5) = (unsigned int)&unk_138E4C >> 16;
      logfmt_raw(v10, 0x1000u, 0, v5, 1406056);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/device/platform_device_hal.c",
        163,
        "dev_init_hal",
        12,
        96,
        100,
        v10);
      V_LOCK();
      logfmt_raw(v10, 0x1000u, 0, "phyiscal chain num = %d, total chain num = %d", a1, total_chain);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/device/platform_device_hal.c",
        163,
        "dev_init_hal",
        12,
        97,
        100,
        v10);
    }
    fpga_reset();
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, 1406112);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/device/platform_device_hal.c",
      163,
      "dev_init_hal",
      12,
      101,
      60,
      v10);
    enable_bypass_mode();
    dev_config_hal("json_delete");
    return 0;
  }
}
