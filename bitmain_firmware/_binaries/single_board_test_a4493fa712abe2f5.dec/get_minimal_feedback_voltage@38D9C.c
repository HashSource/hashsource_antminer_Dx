int get_minimal_feedback_voltage()
{
  double v0; // d0
  int v1; // r4
  double v2; // d8
  int *v3; // r5
  int *v4; // r11
  int v5; // t1
  int v6; // r6
  _BOOL4 v7; // r3
  int v9; // [sp+4h] [bp-1010h]
  unsigned int v10[1025]; // [sp+10h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_12BCB8);
  v1 = dword_12BCD0;
  pthread_mutex_unlock(&stru_12BCB8);
  v2 = 0.0;
  if ( v1 > 0 )
  {
    v3 = dword_12BCD4;
    v4 = &dword_12BCD4[v1];
    do
    {
      while ( 1 )
      {
        v5 = *v3++;
        v6 = *(_DWORD *)(v5 + 124);
        v10[0] = 0;
        if ( (unsigned __int8)pic1704_get_single_voltage((unsigned __int8)v6, v10) )
          break;
        pthread_mutex_lock(&stru_3B526C);
        logfmt_raw((char *)v10, 0x1000u, 0, "read_feedback_voltage chain = %d, voltage = %f\n", v6, v9, 0, 0);
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/miner_util/power_api.c",
          60,
          "read_feedback_voltage",
          21,
          48,
          20,
          v10);
LABEL_4:
        if ( v4 == v3 )
          goto LABEL_12;
      }
      LODWORD(v0) = 1.0;
      sub_8B294(v10[0]);
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(
        (char *)v10,
        0x1000u,
        0,
        "read_feedback_voltage chain = %d, voltage = %f\n",
        v6,
        v9,
        __PAIR64__(HIDWORD(v0), 1.0));
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/miner_util/power_api.c",
        60,
        "read_feedback_voltage",
        21,
        48,
        20,
        v10);
      if ( v0 <= 0.1 )
        goto LABEL_4;
      v7 = v2 > v0;
      if ( v2 < 0.1 )
        v7 = 1;
      if ( v7 )
        v2 = v0;
    }
    while ( v4 != v3 );
  }
LABEL_12:
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)v10, 0x1000u, 0, "the minimal voltage = %.2f", v2);
  pthread_mutex_unlock(&stru_3B526C);
  return zlog(
           g_zc,
           "/home/xingfei.wang/work/1764/godminer/miner_util/power_api.c",
           60,
           "get_minimal_feedback_voltage",
           28,
           64,
           20,
           v10);
}
