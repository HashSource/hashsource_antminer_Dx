int __fastcall data_enc(unsigned int *a1, unsigned int a2, int a3, int a4)
{
  unsigned int v5; // r5
  char v7[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( a3 == 1 )
  {
    v5 = a2 & 7;
    if ( (a2 & 7) != 0 )
    {
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v7, 0x1000u, 0, " xxtea input data length %% 8 must be 0, but now is %d", v5);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(g_zc, "/home/xingfei.wang/work/1764/godminer/common/general/xxtea.c", 60, "data_enc", 8, 93, 100, v7);
      return 0;
    }
    else
    {
      xxtea_encode(a1, a2 >> 2, (int)&xxtea_key + 16 * a4);
      return 1;
    }
  }
  else
  {
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v7, 0x1000u, 0, "algorithm_type is %d, but not support it", a3);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(g_zc, "/home/xingfei.wang/work/1764/godminer/common/general/xxtea.c", 60, "data_enc", 8, 100, 100, v7);
    return 0;
  }
}
