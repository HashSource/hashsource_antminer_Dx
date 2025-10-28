int __fastcall data_enc(unsigned int *a1, unsigned int a2, int a3, int a4)
{
  unsigned int v5; // r5
  char v7[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( a3 == 1 )
  {
    v5 = a2 & 7;
    if ( (a2 & 7) != 0 )
    {
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v7, 0x1000u, 0, 1607112, v5);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/common/general/xxtea.c",
        143,
        "data_enc",
        8,
        93,
        100,
        v7);
      return 0;
    }
    else
    {
      xxtea_encode(a1, a2 >> 2, 16 * a4 + 1714512);
      return 1;
    }
  }
  else
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v7, 0x1000u, 0, 1607168, a3);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/common/general/xxtea.c",
      143,
      "data_enc",
      8,
      100,
      100,
      v7);
    return 0;
  }
}
