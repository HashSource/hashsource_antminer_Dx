int __fastcall set_data_preemptive_rvn(int a1, int a2)
{
  char v5[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, 1364408, 1381948);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    170,
    "set_data_preemptive_rvn",
    23,
    863,
    20,
    v5);
  sub_92F0C(a1, 204, a2);
  usleep(0x2710u);
  return 0;
}
