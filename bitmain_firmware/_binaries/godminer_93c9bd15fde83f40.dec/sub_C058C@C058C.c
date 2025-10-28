int __fastcall sub_C058C(int a1)
{
  _DWORD v3[1024]; // [sp+10h] [bp-1000h] BYREF

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)v3, 0x1000u, 0, "%s core_num %d reg %02x %d", "ChipSetting_open_cores_AE", 1, 132, 20000);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_open_cores_AE",
    25,
    315,
    40,
    v3);
  v3[0] = 1;
  v3[2] = 8650753;
  v3[3] = 256;
  v3[1] = 0;
  return (*(int (__fastcall **)(int, _DWORD *, int, _DWORD))(a1 + 164))(a1, v3, 20000, 0);
}
