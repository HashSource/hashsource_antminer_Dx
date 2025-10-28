int __fastcall get_timeout_count_rvn(int a1)
{
  int v2; // r3
  int v3; // r4
  char v5[4100]; // [sp+10h] [bp+0h] BYREF

  V_LOCK();
  LOWORD(v2) = -1040;
  HIWORD(v2) = (unsigned int)&unk_133340 >> 16;
  logfmt_raw(v5, 0x1000u, 0, v2, "get_timeout_count_rvn");
  V_UNLOCK();
  v3 = 69;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    170,
    "get_timeout_count_rvn",
    21,
    248,
    20,
    v5);
  do
  {
    sub_87E4C(a1, 255, v3++, 0);
    usleep(0x2710u);
  }
  while ( v3 != 75 );
  return 0;
}
