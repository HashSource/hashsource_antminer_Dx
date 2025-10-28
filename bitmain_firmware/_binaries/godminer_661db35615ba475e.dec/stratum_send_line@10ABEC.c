int __fastcall stratum_send_line(int *a1, char *a2)
{
  pthread_mutex_t *v4; // r5
  int v5; // r4
  int v7; // [sp+34h] [bp-1018h]
  __int64 v8; // [sp+38h] [bp-1014h]
  int v9; // [sp+44h] [bp-1008h]
  char v10[4100]; // [sp+48h] [bp-1004h] BYREF

  if ( opt_protocol )
  {
    pthread_mutex_lock(&stru_197BB8);
    v8 = *a1;
    ++dword_197BD4;
    logfmt_raw(v10, 0x1000u, 0, v9, "poolno", 6, 3, v7, v8, 0, v9, "> %s", a2, "poolno", 6, 3, v7, v8, 0);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/stratum_handler.c",
      138,
      "stratum_send_line",
      17,
      25,
      60,
      v10);
  }
  v4 = (pthread_mutex_t *)(a1 + 11);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 11));
  v5 = send_line(a1[8], a2);
  pthread_mutex_unlock(v4);
  return v5;
}
