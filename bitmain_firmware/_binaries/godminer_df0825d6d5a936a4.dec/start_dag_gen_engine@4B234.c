int start_dag_gen_engine()
{
  void *(*v0)(void *); // r2
  char v2[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( query_device_num() <= 0 )
  {
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, 1217828);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/dhash_content/eth/eth_dhash_common.c",
      163,
      "start_dag_gen_engine",
      20,
      264,
      100,
      v2);
    return 1;
  }
  else
  {
    LOWORD(v0) = -20648;
    HIWORD(v0) = (unsigned int)&loc_48AD0 >> 16;
    pthread_create((pthread_t *)&dword_163450, 0, v0, 0);
    return 0;
  }
}
