int __fastcall read_feedback_voltage(int a1)
{
  __int64 v1; // d0
  __int64 v3; // d8
  int v5; // [sp+4h] [bp-1010h]
  unsigned int v6[1025]; // [sp+10h] [bp-1004h] BYREF

  v6[0] = 0;
  if ( (unsigned __int8)pic1704_get_single_voltage((unsigned __int8)a1, v6) )
  {
    LODWORD(v1) = 1.0;
    sub_8581C(v6[0]);
    v3 = v1;
  }
  else
  {
    v3 = 0;
  }
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)v6, 0x1000u, 0, "read_feedback_voltage chain = %d, voltage = %f\n", a1, v5, v3);
  pthread_mutex_unlock(&stru_197BB8);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/miner_util/power_api.c",
           143,
           "read_feedback_voltage",
           21,
           48,
           20,
           v6);
}
