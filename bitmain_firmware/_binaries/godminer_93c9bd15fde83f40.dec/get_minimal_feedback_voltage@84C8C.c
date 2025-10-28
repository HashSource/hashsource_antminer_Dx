int get_minimal_feedback_voltage()
{
  double v0; // d0
  int v1; // r11
  double v2; // d8
  int *v3; // r5
  int *v4; // r11
  int v5; // t1
  int v6; // r6
  _BOOL4 v7; // r3
  int v9; // [sp+4h] [bp-1010h]
  unsigned int v10[1025]; // [sp+10h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_1A9B48);
  v1 = dword_1A9B60;
  pthread_mutex_unlock(&stru_1A9B48);
  v2 = 0.0;
  if ( v1 > 0 )
  {
    v3 = dword_1A9B64;
    v4 = &dword_1A9B64[v1];
    do
    {
      while ( 1 )
      {
        v5 = *v3++;
        v6 = *(_DWORD *)(v5 + 136);
        v10[0] = 0;
        if ( (unsigned __int8)pic1704_get_single_voltage((unsigned __int8)v6, v10) )
          break;
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw((char *)v10, 0x1000u, 0, "read_feedback_voltage chain = %d, voltage = %f\n", v6, v9, 0, 0);
        pthread_mutex_unlock(&stru_1A8A24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/miner_util/power_api.c",
          143,
          "read_feedback_voltage",
          21,
          47,
          20,
          v10);
LABEL_4:
        if ( v4 == v3 )
          goto LABEL_12;
      }
      LODWORD(v0) = 1.0;
      sub_50A88(v10[0]);
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(
        (char *)v10,
        0x1000u,
        0,
        "read_feedback_voltage chain = %d, voltage = %f\n",
        v6,
        v9,
        __PAIR64__(HIDWORD(v0), 1.0));
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/power_api.c",
        143,
        "read_feedback_voltage",
        21,
        47,
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
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)v10, 0x1000u, 0, "the minimal voltage = %.2f", v2);
  pthread_mutex_unlock(&stru_1A8A24);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/miner_util/power_api.c",
           143,
           "get_minimal_feedback_voltage",
           28,
           63,
           20,
           v10);
}
