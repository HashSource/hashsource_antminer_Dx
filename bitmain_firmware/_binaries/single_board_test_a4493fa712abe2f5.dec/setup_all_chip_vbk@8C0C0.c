int __fastcall setup_all_chip_vbk(int a1)
{
  void (__fastcall *v2)(int, _DWORD, int); // r3
  void (__fastcall *v3)(int, int *); // r3
  int v5; // [sp+Ch] [bp-1018h]
  int v6; // [sp+10h] [bp-1014h] BYREF
  char v7; // [sp+18h] [bp-100Ch]
  char v8; // [sp+19h] [bp-100Bh]
  __int16 v9; // [sp+1Ah] [bp-100Ah]
  _DWORD v10[1025]; // [sp+20h] [bp-1004h] BYREF

  puts("setup_all_chip_vbk");
  **(_DWORD **)(a1 + 280) = -1065336832;
  v2 = *(void (__fastcall **)(int, _DWORD, int))(a1 + 132);
  *(_DWORD *)(a1 + 224) = 64;
  v2(a1, *(_DWORD *)(a1 + 280), 4);
  sub_D3128(a1);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(
    (char *)v10,
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
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/chip_setting.c",
    60,
    "ChipSetting_ticket_mask_VBK",
    27,
    137,
    20,
    v10);
  v3 = *(void (__fastcall **)(int, int *))(a1 + 140);
  v8 = 0;
  v9 = 20;
  v7 = 1;
  v6 = 32;
  v3(a1, &v6);
  *(_DWORD *)(a1 + 228) = 32;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)v10, 0x1000u, 0, "%s core_num %d reg %02x %d", "ChipSetting_open_cores_VBK", 5, 132, 20000);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/chip_setting.c",
    60,
    "ChipSetting_open_cores_VBK",
    26,
    315,
    40,
    v10);
  v10[0] = 1;
  v10[2] = 8650753;
  v10[3] = 1280;
  v10[1] = 0;
  (*(void (__fastcall **)(int, _DWORD *, int, _DWORD))(a1 + 152))(a1, v10, 20000, 0);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)v10, 0x1000u, 0, "get addr after open cores.");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_vbk/backend_vbk.c",
    71,
    "setup_all_chip_vbk",
    18,
    215,
    60,
    v10);
  sub_D3128(a1);
  if ( !*(_BYTE *)(a1 + 252) )
    *(_DWORD *)(a1 + 256) = (int)*(float *)(a1 + 732);
  return 0;
}
