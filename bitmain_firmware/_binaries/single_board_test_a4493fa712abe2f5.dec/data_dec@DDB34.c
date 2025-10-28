int __fastcall data_dec(unsigned int *a1, unsigned int a2, int a3, int a4)
{
  unsigned int v5; // r5
  int v6; // r2
  int v7; // r1
  int v8; // r0
  char v10[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( a3 != 1 )
  {
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v10, 0x1000u, 0, "algorithm_type is %d, but not support it", a3);
    pthread_mutex_unlock(&stru_3B526C);
    v6 = 119;
    LOWORD(v7) = 26732;
    v8 = g_zc;
    goto LABEL_4;
  }
  v5 = a2 & 7;
  if ( (a2 & 7) != 0 )
  {
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v10, 0x1000u, 0, " xxtea input data length %% 8 must be 0, but now is %d", v5);
    pthread_mutex_unlock(&stru_3B526C);
    v6 = 112;
    LOWORD(v7) = (unsigned __int16)"/home/xingfei.wang/work/1764/godminer/common/general/xxtea.c";
    v8 = g_zc;
LABEL_4:
    HIWORD(v7) = (unsigned int)"/home/xingfei.wang/work/1764/godminer/common/general/xxtea.c" >> 16;
    zlog(v8, v7, 60, "data_dec", 8, v6, 100, v10);
    return 0;
  }
  xxtea_decode(a1, a2 >> 2, (int)&xxtea_key + 16 * a4);
  return 1;
}
