int __fastcall disable_cores_rvn(int a1)
{
  char v3[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, 1364408, 1381668);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    170,
    "disable_cores_rvn",
    17,
    787,
    20,
    v3);
  sub_92F0C(a1, 160, 0);
  usleep((__useconds_t)&stru_18698.st_size);
  return 0;
}
