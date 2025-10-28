int __fastcall get_timeout_count_rvn(int a1)
{
  int v2; // r4
  char v4[4100]; // [sp+10h] [bp+0h] BYREF

  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "%s...", "get_timeout_count_rvn");
  V_UNLOCK();
  v2 = 69;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    170,
    "get_timeout_count_rvn",
    21,
    254,
    20,
    v4);
  do
  {
    sub_A4B38(a1, 255, v2++, 0);
    usleep(0x2710u);
  }
  while ( v2 != 75 );
  return 0;
}
