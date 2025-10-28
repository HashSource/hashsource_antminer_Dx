int __fastcall set_miner_6060info_uneffective_temp_err(int result, char a2)
{
  int v3; // r3
  int v4; // r3
  int v5; // r1
  char v6[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( result > 15 )
  {
    V_LOCK();
    LOWORD(v3) = -29548;
    HIWORD(v3) = (unsigned int)"in avg hashrate %s hw %llu" >> 16;
    logfmt_raw(v6, 0x1000u, 0, v3);
    V_UNLOCK();
    LOWORD(v4) = -29672;
    LOWORD(v5) = -29480;
    HIWORD(v4) = (unsigned int)"build/godminer-origin_godminer-new/miner_util/miner_monitor/miner_6060info.c" >> 16;
    HIWORD(v5) = (unsigned int)"miner_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/miner_monitor/miner_monitor.c" >> 16;
    zlog(g_zc, v5, 168, v4, 39, 36, 40, v6);
    result = 0;
  }
  byte_1752F0[result + 1] = a2;
  return result;
}
