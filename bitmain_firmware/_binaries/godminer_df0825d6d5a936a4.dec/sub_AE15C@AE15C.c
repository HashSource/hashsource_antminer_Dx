int __fastcall sub_AE15C(int a1)
{
  int v3; // r2
  int v4; // r0
  int v5; // r1
  char v6[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( open_pic(LOBYTE(g_chain_info[2 * a1])) < 0 )
  {
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "chain_offset %d, chain %, open pic error!", total_chain, g_chain_info[2 * total_chain]);
    V_UNLOCK();
    v3 = 143;
    v4 = g_zc;
    LOWORD(v5) = -28928;
    goto LABEL_7;
  }
  if ( !pic1704_reset(g_chain_info[2 * a1]) )
  {
    printf("chain_offset %d, chain %, reset pic error!", total_chain, g_chain_info[2 * total_chain]);
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "Sweep error string = J%d:5.", g_chain_info[2 * total_chain]);
    V_UNLOCK();
    v3 = 149;
    v4 = g_zc;
    LOWORD(v5) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/r"
                                   "elease/build/godminer-origin_godminer-new/backend/device/platform_device_hal.c";
LABEL_7:
    HIWORD(v5) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/relea"
                               "se/build/godminer-origin_godminer-new/backend/device/platform_device_hal.c" >> 16;
    zlog(v4, v5, 163, "dev_init_pic_for_one_chain", 26, v3, 100, v6);
    return -1;
  }
  usleep(0x493E0u);
  if ( pic1704_jump_to_app(g_chain_info[2 * a1]) )
  {
    usleep(0x493E0u);
    return 0;
  }
  else
  {
    printf("chain_offset %d, chain %, pic jump to app error!", total_chain, g_chain_info[2 * total_chain]);
    return -1;
  }
}
