int __fastcall get_work_mode_rvn(int a1)
{
  int v2; // r3
  char *v3; // r11
  int v4; // r0
  int v5; // r10
  char *v6; // r6
  char *v7; // r4
  int v8; // lr
  int v9; // r12
  int v10; // r1
  char v12[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v2) = -1040;
  HIWORD(v2) = (unsigned int)&unk_133340 >> 16;
  logfmt_raw(v12, 0x1000u, 0, v2, "get_work_mode_rvn");
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
    v12);
  v3 = (char *)malloc(0x300u);
  v4 = sub_87E4C(a1, 255, 28, v3);
  if ( v4 > 0 )
  {
    LOWORD(v5) = -1024;
    v6 = &v3[12 * v4];
    v7 = v3;
    do
    {
      V_LOCK();
      v8 = *(_DWORD *)v7;
      HIWORD(v5) = (unsigned int)&unk_133350 >> 16;
      v9 = (unsigned __int8)v7[4];
      v10 = *((unsigned __int16 *)v7 + 3);
      v7 += 12;
      logfmt_raw(v12, 0x1000u, 0, v5, v9, (unsigned __int8)*(v7 - 4), v10, v8);
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
        v12);
    }
    while ( v7 != v6 );
  }
  free(v3);
  return 0;
}
