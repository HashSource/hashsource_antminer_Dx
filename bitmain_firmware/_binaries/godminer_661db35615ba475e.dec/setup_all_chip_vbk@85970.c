int __fastcall setup_all_chip_vbk(int a1)
{
  void (__fastcall *v2)(int, _DWORD, int); // r3
  void (__fastcall *v3)(int, _DWORD *); // r3
  int result; // r0
  int v5; // [sp+Ch] [bp-1018h]
  _DWORD v6[3]; // [sp+10h] [bp-1014h] BYREF
  _DWORD v7[1025]; // [sp+20h] [bp-1004h] BYREF

  puts("setup_all_chip_vbk");
  **(_DWORD **)(a1 + 280) = -1065336832;
  v2 = *(void (__fastcall **)(int, _DWORD, int))(a1 + 132);
  *(_DWORD *)(a1 + 224) = 64;
  v2(a1, *(_DWORD *)(a1 + 280), 4);
  sub_4AF3C(a1);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(
    (char *)v7,
    0x1000u,
    0,
    "ticket_mask %s reg %02x tm %d",
    "ChipSetting_ticket_mask_VBK",
    20,
    32,
    v5,
    0,
    0,
    0,
    0);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_ticket_mask_VBK",
    27,
    137,
    20,
    v7);
  v3 = *(void (__fastcall **)(int, _DWORD *))(a1 + 140);
  v6[2] = 1310721;
  v6[0] = 32;
  v3(a1, v6);
  *(_DWORD *)(a1 + 228) = 32;
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)v7, 0x1000u, 0, "%s core_num %d reg %02x %d", "ChipSetting_open_cores_VBK", 5, 132, 20000);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_open_cores_VBK",
    26,
    315,
    40,
    v7);
  v7[1] = 0;
  v7[2] = 8650753;
  v7[3] = 1280;
  v7[0] = 1;
  (*(void (__fastcall **)(int, _DWORD *, int, _DWORD))(a1 + 152))(a1, v7, 20000, 0);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)v7, 0x1000u, 0, "get addr after open cores.");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_vbk/backend_vbk.c",
    154,
    "setup_all_chip_vbk",
    18,
    215,
    60,
    v7);
  sub_4AF3C(a1);
  result = 0;
  if ( !*(_BYTE *)(a1 + 252) )
    *(_DWORD *)(a1 + 256) = (int)*(float *)(a1 + 732);
  return result;
}
