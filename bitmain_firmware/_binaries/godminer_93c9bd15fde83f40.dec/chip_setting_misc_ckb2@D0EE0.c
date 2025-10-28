int __fastcall chip_setting_misc_ckb2(int a1)
{
  _DWORD v3[4]; // [sp+10h] [bp-1014h] BYREF
  char v4[4100]; // [sp+20h] [bp-1004h] BYREF

  v3[0] = 7479056;
  v3[2] = 1835009;
  v3[3] = 0;
  v3[1] = 0;
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v4, 0x1000u, 0, "set_misc value %08x", 7479056);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ckb2/chip_setting_ckb2.c",
    161,
    "chip_setting_misc_ckb2",
    22,
    93,
    60,
    v4);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 152))(a1, v3);
}
