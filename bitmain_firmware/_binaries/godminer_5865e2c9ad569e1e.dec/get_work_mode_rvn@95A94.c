int __fastcall get_work_mode_rvn(int a1)
{
  char *v2; // r11
  int v3; // r0
  char *v4; // r6
  char *v5; // r4
  int v6; // lr
  int v7; // r12
  int v8; // r1
  char v10[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, 1364408, "get_work_mode_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    170,
    "get_work_mode_rvn",
    17,
    281,
    0x14u,
    v10);
  v2 = (char *)malloc(0x300u);
  v3 = sub_934FC(a1, 255, 28, v2);
  if ( v3 > 0 )
  {
    v4 = &v2[12 * v3];
    v5 = v2;
    do
    {
      V_LOCK();
      v6 = *(_DWORD *)v5;
      v7 = (unsigned __int8)v5[4];
      v8 = *((unsigned __int16 *)v5 + 3);
      v5 += 12;
      logfmt_raw(v10, 0x1000u, 0, 1364424, v7, (unsigned __int8)*(v5 - 4), v8, v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
        170,
        "get_work_mode_rvn",
        17,
        287,
        20,
        v10);
    }
    while ( v5 != v4 );
  }
  free(v2);
  return 0;
}
