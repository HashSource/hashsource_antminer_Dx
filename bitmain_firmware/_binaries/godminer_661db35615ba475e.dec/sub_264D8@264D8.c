int __fastcall sub_264D8(int a1)
{
  int v1; // r2
  int result; // r0
  char v3[4100]; // [sp+10h] [bp-1004h] BYREF

  switch ( a1 )
  {
    case 2:
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v3, 0x1000u, 0, "SIGINT received, exiting");
      pthread_mutex_unlock(&stru_197BB8);
      v1 = 612;
      goto LABEL_3;
    case 3:
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v3, 0x1000u, 0, "SIGQUIT received, exiting");
      pthread_mutex_unlock(&stru_197BB8);
      v1 = 617;
      goto LABEL_3;
    case 10:
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v3, 0x1000u, 0, "SIGUSR1 received, reload log");
      pthread_mutex_unlock(&stru_197BB8);
      result = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmi"
                 "ner-origin_master/god-miner.c",
                 132,
                 "signal_handler",
                 14,
                 632,
                 80,
                 v3);
      if ( g_zc && g_temp_zc && g_fan_zc )
      {
        if ( g_hash_zc )
        {
          zlog_reload(opt_zlog_conf_file);
          return puts("zlog reload!");
        }
      }
      return result;
    case 11:
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v3, 0x1000u, 0, "SIGSEGV received, exiting");
      pthread_mutex_unlock(&stru_197BB8);
      v1 = 627;
      goto LABEL_3;
    case 15:
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v3, 0x1000u, 0, "SIGTERM received, exiting");
      pthread_mutex_unlock(&stru_197BB8);
      v1 = 622;
LABEL_3:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "signal_handler",
        14,
        v1,
        80,
        v3);
      print_summary();
      exit(0);
      return result;
    default:
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v3, 0x1000u, 0, "catch signal %d, it should not be here");
      pthread_mutex_unlock(&stru_197BB8);
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmine"
               "r-origin_master/god-miner.c",
               132,
               "signal_handler",
               14,
               636,
               80,
               v3);
  }
}
