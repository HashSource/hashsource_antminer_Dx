int __fastcall setup_all_chip_dash(int a1)
{
  int v2; // r7
  int v3; // s15
  float v4; // s14
  float v5; // s15
  float v6; // s16
  void (__fastcall *v7)(int, _DWORD *); // r3
  char *v8; // r9
  char v9; // r0
  int result; // r0
  int v11; // r9
  int v12; // [sp+4h] [bp-1030h]
  char v13; // [sp+14h] [bp-1020h]
  unsigned __int8 v14; // [sp+1Eh] [bp-1016h] BYREF
  unsigned __int8 v15; // [sp+1Fh] [bp-1015h] BYREF
  _DWORD v16[2]; // [sp+20h] [bp-1014h] BYREF
  int v17; // [sp+28h] [bp-100Ch]
  int v18; // [sp+2Ch] [bp-1008h]
  _DWORD v19[1025]; // [sp+30h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)v19, 0x1000u, 0, "setup_all_chip_dash\n");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_dash/backend_dash.c",
    156,
    "setup_all_chip_dash",
    19,
    319,
    60,
    v19);
  v15 = 0;
  v14 = 0;
  if ( (unsigned __int16)set_voltage_by_steps(dword_195C9C, (unsigned __int8)byte_195C88) )
  {
    V_LOCK();
    logfmt_raw((char *)v19, 0x1000u, 0, "%s error!", "set_check_asic_voltage");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/power_api.c",
      143,
      "set_check_asic_voltage",
      22,
      295,
      60,
      v19);
  }
  v2 = 25;
  do
  {
    sub_97300(a1);
    usleep(0x61A8u);
    v3 = v2;
    v2 += 25;
    v4 = (float)v3;
    v5 = *(float *)(a1 + 732);
  }
  while ( (float)(v4 + 50.0) <= v5 );
  v6 = v4 + 25.0;
  if ( v5 > (float)(v4 + 25.0) )
  {
    sub_97300(a1);
    usleep(0x61A8u);
    v6 = *(float *)(a1 + 732);
  }
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)v19, 0x1000u, 0, "Set chip final freq=%f", v6);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_dash/backend_dash.c",
    156,
    "set_working_freq_by_steps",
    25,
    313,
    60,
    v19);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)v19, 0x1000u, 0, "software_reset %s %02x", "ChipSetting_software_reset_DASH", 68);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_software_reset_DASH",
    31,
    108,
    20,
    v19);
  v19[1] = 0;
  v7 = *(void (__fastcall **)(int, _DWORD *))(a1 + 140);
  v19[2] = 4456449;
  v19[3] = 0;
  v19[0] = 1;
  v7(a1, v19);
  usleep(0x4E20u);
  sub_13479C(*(_DWORD *)(a1 + 124), 195, &v15);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)v19, 0x1000u, 0, "read marker %x", v15);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_dash/backend_dash.c",
    156,
    "setup_all_chip_dash",
    19,
    357,
    60,
    v19);
  if ( v15 == 165 )
  {
    *(_BYTE *)(a1 + 294) = 1;
    sub_13479C(*(_DWORD *)(a1 + 124), 196, &v14);
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw((char *)v19, 0x1000u, 0, "read eeprom high hashrate: %02x", v14);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_dash/backend_dash.c",
      156,
      "setup_all_chip_dash",
      19,
      361,
      20,
      v19);
    v11 = v14;
    sub_13479C(*(_DWORD *)(a1 + 124), 197, &v14);
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw((char *)v19, 0x1000u, 0, "read eeprom low hashrate: %02x", v14);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_dash/backend_dash.c",
      156,
      "setup_all_chip_dash",
      19,
      364,
      20,
      v19);
    *(double *)(a1 + 296) = (double)(v14 | (v11 << 8)) * 1000000000.0;
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(
      (char *)v19,
      0x1000u,
      0,
      "chain%d  avg hashrate is %f",
      *(_DWORD *)(a1 + 124),
      v12,
      *(_DWORD *)(a1 + 296),
      *(_DWORD *)(a1 + 300));
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_dash/backend_dash.c",
      156,
      "setup_all_chip_dash",
      19,
      367,
      20,
      v19);
  }
  v16[1] = 0;
  v16[0] = 0;
  v17 = 0;
  v18 = 0;
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)v19, 0x1000u, 0, "ticket_mask %s core reg %02x tm %d", "set_ticket_mask_dash", 20, 255);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_dash/backend_dash.c",
    156,
    "set_ticket_mask_dash",
    20,
    282,
    20,
    v19);
  v17 = 1310721;
  v16[0] = 255;
  LOWORD(v18) = 2815;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 144))(a1, v16);
  *(_DWORD *)(a1 + 228) = 255;
  v8 = (char *)calloc(1u, 0xB0u);
  v13 = *(_BYTE *)(a1 + 120);
  v9 = rand();
  memset(v8 + 40, (unsigned __int8)(v13 + v9), 0x50u);
  push_work_base(a1, (int)v8);
  free(v8);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)v19, 0x1000u, 0, "get addr after open cores.");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_dash/backend_dash.c",
    156,
    "setup_all_chip_dash",
    19,
    378,
    60,
    v19);
  sub_133214(a1);
  if ( (unsigned __int16)set_voltage_by_steps(dword_195C94, (unsigned __int8)byte_195C88) )
  {
    V_LOCK();
    logfmt_raw((char *)v19, 0x1000u, 0, "%s error!", "set_working_voltage");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/power_api.c",
      143,
      "set_working_voltage",
      19,
      277,
      60,
      v19);
  }
  result = 0;
  if ( !*(_BYTE *)(a1 + 252) )
    *(_DWORD *)(a1 + 256) = (int)*(float *)(a1 + 732);
  return result;
}
