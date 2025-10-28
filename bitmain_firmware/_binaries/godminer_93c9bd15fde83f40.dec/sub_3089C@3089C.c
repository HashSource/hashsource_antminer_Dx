int sub_3089C()
{
  int v0; // r8
  char v2[4100]; // [sp+10h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v2, 0x1000u, 0, "<<<<<<<<<<<<<<<<<<<<exec %s start>>>>>>>>>>>>>>>>", "reload_config");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "reload_config",
    13,
    818,
    20,
    v2);
  v0 = strcmp((const char *)&dword_1A3F70, "127.0.0.1");
  if ( v0 )
    return -2147483643;
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v2, 0x1000u, 0, "START %s", "load_default_config_without_restart");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "load_default_config_without_restart",
    35,
    801,
    20,
    v2);
  if ( default_config
    && !access((const char *)default_config, 4)
    && (judge_load_config((const char *)default_config) & 1) != 0 )
  {
    reload_pool();
  }
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v2, 0x1000u, 0, "<<<<<<<<<<<<<<<<<<<<exec %s end>>>>>>>>>>>>>>>>>>", "reload_config");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "reload_config",
    13,
    825,
    20,
    v2);
  return v0;
}
