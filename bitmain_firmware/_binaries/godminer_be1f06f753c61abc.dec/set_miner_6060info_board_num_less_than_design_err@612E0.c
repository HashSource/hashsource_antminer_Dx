int __fastcall set_miner_6060info_board_num_less_than_design_err(int a1)
{
  int v3[32]; // [sp+10h] [bp-1080h] BYREF
  struct timeval tv; // [sp+90h] [bp-1000h] BYREF

  pthread_mutex_lock(&miner_6060info_lock);
  byte_196DB8 = a1;
  tv.tv_sec = 0;
  tv.tv_usec = 0;
  if ( a1 )
  {
    gettimeofday(&tv, 0);
    LOBYTE(a1) = byte_196DB8;
    dword_196DBC = tv.tv_sec;
    if ( !byte_196FC0 )
    {
      if ( byte_196DB8 )
      {
        v3[0] = 3684938;
        V_LOCK();
        logfmt_raw((char *)&tv, 0x1000u, 0, "Sweep error string = %s", v3);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/miner_util/miner_monitor/miner_6060info.c",
          168,
          "set_miner_6060info_board_num_less_than_design_err",
          49,
          141,
          100,
          &tv);
        LOBYTE(a1) = byte_196DB8;
      }
    }
  }
  byte_196FC0 = a1;
  return pthread_mutex_unlock(&miner_6060info_lock);
}
