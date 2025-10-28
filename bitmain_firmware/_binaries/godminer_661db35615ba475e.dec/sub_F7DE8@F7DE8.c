int sub_F7DE8()
{
  char v1[4100]; // [sp+10h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v1, 0x1000u, 0, "nonce retired");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_eth/frontend_eth.c",
    157,
    "nonce_pop_handler_eth",
    21,
    356,
    80,
    v1);
  return 1;
}
