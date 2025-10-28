int __fastcall sub_C0448(const char *a1, int *a2)
{
  int result; // r0
  int v5; // r5
  char *endptr; // [sp+14h] [bp-1008h] BYREF
  char v7[4100]; // [sp+18h] [bp-1004h] BYREF

  result = strtol(a1, &endptr, 0);
  v5 = result;
  if ( *endptr || !*a1 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v7, 0x1000u, 0, "'%s' is not a number", a1);
    pthread_mutex_unlock(&stru_1A8A24);
    result = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmine"
               "r-origin_master/util.c",
               127,
               "opt_set_longval",
               15,
               435,
               100,
               v7);
    if ( (unsigned int)(v5 + 0x7FFFFFFF) <= 0xFFFFFFFD )
      goto LABEL_4;
  }
  else if ( (unsigned int)(result + 0x7FFFFFFF) <= 0xFFFFFFFD )
  {
LABEL_4:
    *a2 = v5;
    return result;
  }
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v7, 0x1000u, 0, "'%s' is out of range", a1);
  pthread_mutex_unlock(&stru_1A8A24);
  result = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/util.c",
             127,
             "opt_set_longval",
             15,
             437,
             100,
             v7);
  *a2 = v5;
  return result;
}
