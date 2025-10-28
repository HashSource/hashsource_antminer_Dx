int __fastcall get_count_sync_rvn(int a1, int a2)
{
  int v4; // r3
  char *v5; // r11
  int v6; // r0
  int v7; // r10
  char *v8; // r6
  char *v9; // r4
  int v10; // lr
  int v11; // r12
  int v12; // r1
  char v14[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v4) = -1040;
  HIWORD(v4) = (unsigned int)&unk_133340 >> 16;
  logfmt_raw(v14, 0x1000u, 0, v4, "get_count_sync_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    170,
    "get_count_sync_rvn",
    18,
    267,
    0x14u,
    v14);
  v5 = (char *)malloc(0x300u);
  v6 = sub_87E4C(a1, a2, 202, v5);
  if ( v6 > 0 )
  {
    LOWORD(v7) = -1024;
    v8 = &v5[12 * v6];
    v9 = v5;
    do
    {
      V_LOCK();
      v10 = *(_DWORD *)v9;
      HIWORD(v7) = (unsigned int)&unk_133350 >> 16;
      v11 = (unsigned __int8)v9[4];
      v12 = *((unsigned __int16 *)v9 + 3);
      v9 += 12;
      logfmt_raw(v14, 0x1000u, 0, v7, v11, (unsigned __int8)*(v9 - 4), v12, v10);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
        170,
        "get_count_sync_rvn",
        18,
        273,
        20,
        v14);
    }
    while ( v9 != v8 );
  }
  free(v5);
  return 0;
}
