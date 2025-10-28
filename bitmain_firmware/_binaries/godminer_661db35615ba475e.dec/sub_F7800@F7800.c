int sub_F7800()
{
  char v1[4100]; // [sp+10h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v1, 0x1000u, 0, "vbk answer's job has been retired\n");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_vbk/frontend_vbk.c",
    157,
    "nonce_pop_handler_vbk",
    21,
    569,
    80,
    v1);
  return 1;
}
