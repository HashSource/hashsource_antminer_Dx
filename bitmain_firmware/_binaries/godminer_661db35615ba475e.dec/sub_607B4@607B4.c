int __fastcall sub_607B4(int a1)
{
  _DWORD v3[1024]; // [sp+10h] [bp-1000h] BYREF

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)v3, 0x1000u, 0, "software_reset %s %02x", "ChipSetting_software_reset_AE", 68);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_software_reset_AE",
    29,
    108,
    20,
    v3);
  v3[2] = 4456449;
  v3[3] = 0;
  v3[1] = 0;
  v3[0] = 1;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 140))(a1, v3);
}
