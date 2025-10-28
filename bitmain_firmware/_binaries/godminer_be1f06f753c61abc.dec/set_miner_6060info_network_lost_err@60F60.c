int __fastcall set_miner_6060info_network_lost_err(int a1)
{
  int v3[32]; // [sp+10h] [bp-1080h] BYREF
  struct timeval tv; // [sp+90h] [bp-1000h] BYREF

  pthread_mutex_lock(&miner_6060info_lock);
  byte_196DA8 = a1;
  tv.tv_sec = 0;
  tv.tv_usec = 0;
  if ( a1 )
  {
    gettimeofday(&tv, 0);
    LOBYTE(a1) = byte_196DA8;
    dword_196DAC = tv.tv_sec;
    if ( !byte_196FB0 )
    {
      if ( byte_196DA8 )
      {
        v3[0] = 3422798;
        V_LOCK();
        logfmt_raw((char *)&tv, 0x1000u, 0, "Sweep error string = %s", v3);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/miner_util/miner_monitor/miner_6060info.c",
          168,
          "set_miner_6060info_network_lost_err",
          35,
          116,
          100,
          &tv);
        LOBYTE(a1) = byte_196DA8;
      }
    }
  }
  byte_196FB0 = a1;
  return pthread_mutex_unlock(&miner_6060info_lock);
}
