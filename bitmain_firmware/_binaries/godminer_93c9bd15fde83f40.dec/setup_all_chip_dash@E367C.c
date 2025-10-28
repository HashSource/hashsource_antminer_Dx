int __fastcall setup_all_chip_dash(int a1)
{
  int v2; // r7
  int v3; // s15
  float v4; // s14
  float v5; // s15
  float v6; // s16
  void (__fastcall *v7)(int, _DWORD *); // r3
  void (__fastcall *v8)(int, _DWORD *); // r3
  void *v9; // r0
  char v10; // r10
  int v11; // r8
  char v12; // r0
  int result; // r0
  int v14; // r9
  int v15; // [sp+4h] [bp-1028h]
  unsigned __int8 v16; // [sp+16h] [bp-1016h] BYREF
  unsigned __int8 v17; // [sp+17h] [bp-1015h] BYREF
  _DWORD v18[2]; // [sp+18h] [bp-1014h] BYREF
  int v19; // [sp+20h] [bp-100Ch]
  int v20; // [sp+24h] [bp-1008h]
  _DWORD v21[1025]; // [sp+28h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)v21, 0x1000u, 0, "setup_all_chip_dash\n");
  v2 = 25;
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_dash/backend_dash.c",
    156,
    "setup_all_chip_dash",
    19,
    319,
    60,
    v21);
  v17 = 0;
  v16 = 0;
  do
  {
    sub_D0A04(a1);
    usleep(0x61A8u);
    v3 = v2;
    v2 += 25;
    v4 = (float)v3;
    v5 = *(float *)(a1 + 760);
  }
  while ( (float)(v4 + 50.0) <= v5 );
  v6 = v4 + 25.0;
  if ( v5 > (float)(v4 + 25.0) )
  {
    sub_D0A04(a1);
    usleep(0x61A8u);
    v6 = *(float *)(a1 + 760);
  }
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)v21, 0x1000u, 0, "Set chip final freq=%f", v6);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_dash/backend_dash.c",
    156,
    "set_working_freq_by_steps",
    25,
    313,
    60,
    v21);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)v21, 0x1000u, 0, "software_reset %s %02x", "ChipSetting_software_reset_DASH", 68);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_software_reset_DASH",
    31,
    108,
    20,
    v21);
  v21[1] = 0;
  v7 = *(void (__fastcall **)(int, _DWORD *))(a1 + 152);
  v21[2] = 4456449;
  v21[3] = 0;
  v21[0] = 1;
  v7(a1, v21);
  usleep(0x4E20u);
  sub_C2720(*(_DWORD *)(a1 + 136), 195, &v17);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)v21, 0x1000u, 0, "read marker %x", v17);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_dash/backend_dash.c",
    156,
    "setup_all_chip_dash",
    19,
    354,
    60,
    v21);
  if ( v17 == 165 )
  {
    *(_BYTE *)(a1 + 310) = 1;
    sub_C2720(*(_DWORD *)(a1 + 136), 196, &v16);
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw((char *)v21, 0x1000u, 0, "read eeprom high hashrate: %02x", v16);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_dash/backend_dash.c",
      156,
      "setup_all_chip_dash",
      19,
      358,
      20,
      v21);
    v14 = v16;
    sub_C2720(*(_DWORD *)(a1 + 136), 197, &v16);
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw((char *)v21, 0x1000u, 0, "read eeprom low hashrate: %02x", v16);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_dash/backend_dash.c",
      156,
      "setup_all_chip_dash",
      19,
      361,
      20,
      v21);
    *(double *)(a1 + 312) = (double)(v16 | (v14 << 8)) * 1000000000.0;
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(
      (char *)v21,
      0x1000u,
      0,
      "chain%d  avg hashrate is %f",
      *(_DWORD *)(a1 + 136),
      v15,
      *(_DWORD *)(a1 + 312),
      *(_DWORD *)(a1 + 316));
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_dash/backend_dash.c",
      156,
      "setup_all_chip_dash",
      19,
      364,
      20,
      v21);
  }
  v18[1] = 0;
  v18[0] = 0;
  v19 = 0;
  v20 = 0;
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)v21, 0x1000u, 0, "ticket_mask %s core reg %02x tm %d", "set_ticket_mask_dash", 20, 255);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_dash/backend_dash.c",
    156,
    "set_ticket_mask_dash",
    20,
    282,
    20,
    v21);
  v18[0] = 255;
  LOWORD(v20) = 2815;
  v8 = *(void (__fastcall **)(int, _DWORD *))(a1 + 156);
  v19 = 1310721;
  v8(a1, v18);
  *(_DWORD *)(a1 + 244) = 255;
  v9 = calloc(1u, 0xB0u);
  v10 = *(_BYTE *)(a1 + 132);
  v11 = (int)v9;
  v12 = rand();
  memset((void *)(v11 + 40), (unsigned __int8)(v10 + v12), 0x50u);
  push_work_base(a1, v11);
  free((void *)v11);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)v21, 0x1000u, 0, "get addr after open cores.");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_dash/backend_dash.c",
    156,
    "setup_all_chip_dash",
    19,
    375,
    60,
    v21);
  sub_C0FC8(a1);
  result = 0;
  if ( !*(_BYTE *)(a1 + 268) )
    *(_DWORD *)(a1 + 272) = (int)*(float *)(a1 + 760);
  return result;
}
