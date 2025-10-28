int __fastcall set_miner_6060info_low_hashrate_err(int result, char a2)
{
  int v3; // r3
  int v4; // r1
  char v5[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( result > 15 )
  {
    V_LOCK();
    LOWORD(v3) = -29548;
    HIWORD(v3) = (unsigned int)"in avg hashrate %s hw %llu" >> 16;
    logfmt_raw(v5, 0x1000u, 0, v3);
    V_UNLOCK();
    LOWORD(v4) = -29480;
    HIWORD(v4) = (unsigned int)"miner_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/miner_monitor/miner_monitor.c" >> 16;
    zlog(g_zc, v4, 168, "set_miner_6060info_low_hashrate_err", 35, 42, 40, v5);
    result = 0;
  }
  byte_1752F0[result + 18] = a2;
  return result;
}
