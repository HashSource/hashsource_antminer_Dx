int __fastcall sub_E3080(int a1)
{
  char v3[4096]; // [sp+10h] [bp-1000h] BYREF

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v3, 0x1000u, 0, "Update parameter failed, freq:%f", *(float *)(a1 + 760));
  pthread_mutex_unlock(&stru_1A8A24);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/backend/backend_dash/backend_dash.c",
           156,
           "parameter_update_dash",
           21,
           815,
           60,
           v3);
}
