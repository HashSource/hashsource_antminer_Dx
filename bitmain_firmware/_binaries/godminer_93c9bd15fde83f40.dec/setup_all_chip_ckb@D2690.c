int __fastcall setup_all_chip_ckb(int a1)
{
  int v2; // r3
  int v3; // r2
  void (__fastcall *v4)(int, int, int); // r3
  int v5; // r1
  int v6; // r8
  int v7; // r6
  signed int v8; // r1
  float v9; // s20
  float v10; // s14
  int v11; // r3
  unsigned int v12; // s15
  unsigned int v13; // r2
  unsigned int v14; // r11
  int v15; // r0
  double v16; // d11
  void (__fastcall *v17)(int, int *); // r3
  char v18; // r0
  void (__fastcall *v19)(int, int *, int, _DWORD); // r12
  void (__fastcall *v20)(int, int *); // r3
  int result; // r0
  char *ptr; // [sp+14h] [bp-1028h]
  unsigned int v23; // [sp+18h] [bp-1024h]
  char v24; // [sp+18h] [bp-1024h]
  int v25; // [sp+28h] [bp-1014h] BYREF
  int v26; // [sp+2Ch] [bp-1010h]
  int v27; // [sp+30h] [bp-100Ch]
  int v28; // [sp+34h] [bp-1008h]
  int v29; // [sp+38h] [bp-1004h] BYREF
  int v30; // [sp+3Ch] [bp-1000h]
  int v31; // [sp+40h] [bp-FFCh]
  int v32; // [sp+44h] [bp-FF8h]

  puts("setup_all_chip_ckb");
  LOBYTE(v2) = 0;
  v3 = *(_DWORD *)(a1 + 296) - 1;
  do
  {
    *(_BYTE *)++v3 = v2;
    v2 = (unsigned __int8)(v2 + 9);
  }
  while ( v2 != 243 );
  v4 = *(void (__fastcall **)(int, int, int))(a1 + 144);
  v5 = *(_DWORD *)(a1 + 296);
  *(_DWORD *)(a1 + 240) = 9;
  v4(a1, v5, 27);
  sub_C0B20(a1);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v29, 0x1000u, 0, "%s", "ChipSetting_close_cores_CKB");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_close_cores_CKB",
    27,
    329,
    20,
    &v29);
  v31 = 5242881;
  v32 = 5120;
  v29 = 0;
  v30 = 0;
  (*(void (__fastcall **)(int, int *, int, _DWORD))(a1 + 164))(a1, &v29, 20000, 0);
  v6 = (int)(float)(*(float *)(a1 + 760) - 100.0) / 25;
  if ( v6 > 0 )
  {
    v7 = 25;
    do
    {
      v8 = 7;
      v27 = 786433;
      v26 = 0;
      v28 = 0;
      v9 = (double)v7 + 100.0;
      while ( 1 )
      {
        v10 = v9 * (float)v8;
        if ( (unsigned int)(float)((float)v8 * v10) - 800 <= 0x640 )
        {
          v13 = (unsigned int)(float)((float)v8 * v10);
          v11 = v8;
          goto LABEL_21;
        }
        if ( v8 == 1 )
          break;
        v11 = v8 - 1;
        v12 = (unsigned int)(float)((float)(v8 - 1) * v10);
        if ( v12 - 800 <= 0x640 )
          goto LABEL_20;
        v11 = (unsigned __int8)(v8 - 2);
        if ( (_BYTE)v8 != 2 )
        {
          v12 = (unsigned int)(float)((float)v11 * v10);
          if ( v12 - 800 <= 0x640 )
            goto LABEL_20;
          v11 = (unsigned __int8)(v8 - 3);
          if ( (_BYTE)v8 != 3 )
          {
            v12 = (unsigned int)(float)((float)v11 * v10);
            if ( v12 - 800 <= 0x640 )
              goto LABEL_20;
            v11 = (unsigned __int8)(v8 - 4);
            if ( (_BYTE)v8 != 4 )
            {
              v12 = (unsigned int)(float)((float)v11 * v10);
              if ( v12 - 800 <= 0x640 )
                goto LABEL_20;
              v11 = (unsigned __int8)(v8 - 5);
              if ( (_BYTE)v8 != 5 )
              {
                v12 = (unsigned int)(float)((float)v11 * v10);
                if ( v12 - 800 <= 0x640 )
                {
LABEL_20:
                  v13 = v12;
LABEL_21:
                  v23 = v11;
                  v14 = v11 | 0xC0000100 | (16 * v8) | ((v13 / 0x19) << 16);
                  v15 = sub_16E220(25 * (v13 / 0x19), v8);
                  v16 = (float)sub_16E220(v15, v23);
                  goto LABEL_22;
                }
                if ( (unsigned __int8)v8 != 6 && (unsigned int)v10 - 800 <= 0x640 )
                {
                  v13 = (unsigned int)v10;
                  v11 = 1;
                  goto LABEL_21;
                }
              }
            }
          }
        }
        --v8;
      }
      v14 = 0;
      v16 = 0.0;
LABEL_22:
      v25 = v14;
      v7 += 25;
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw((char *)&v29, 0x1000u, 0, "set freq: %.2f, expected freq: %.2f", v16, v9);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/chip_setting.c",
        143,
        "ChipSetting_freq_CKB",
        20,
        288,
        20,
        &v29);
      (*(void (__fastcall **)(int, int *))(a1 + 152))(a1, &v25);
      usleep(0x2710u);
      usleep(0x61A8u);
    }
    while ( 25 * (v6 + 1) != v7 );
  }
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v29, 0x1000u, 0, "ticket_mask %s reg %02x tm %d", "ChipSetting_ticket_mask_CKB", 20, 48);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_ticket_mask_CKB",
    27,
    137,
    20,
    &v29);
  v25 = 48;
  v17 = *(void (__fastcall **)(int, int *))(a1 + 152);
  v27 = 1310721;
  v17(a1, &v25);
  *(_DWORD *)(a1 + 244) = 48;
  ptr = (char *)calloc(1u, 0x80u);
  v24 = *(_BYTE *)(a1 + 132);
  v18 = rand();
  memset(ptr + 40, (unsigned __int8)(v24 + v18), 0x30u);
  push_work_base(a1, (int)ptr);
  free(ptr);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v29, 0x1000u, 0, "%s core_num %d reg %02x %d", "ChipSetting_open_cores_CKB", 20, 80, 20000);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_open_cores_CKB",
    26,
    315,
    40,
    &v29);
  v30 = 0;
  v19 = *(void (__fastcall **)(int, int *, int, _DWORD))(a1 + 164);
  v31 = 5242881;
  v32 = 5120;
  v29 = 1;
  v19(a1, &v29, 20000, 0);
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v29, 0x1000u, 0, "ticket_mask %s reg %02x tm %d", "ChipSetting_ticket_mask_CKB", 20, 32);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_ticket_mask_CKB",
    27,
    137,
    20,
    &v29);
  v20 = *(void (__fastcall **)(int, int *))(a1 + 152);
  v27 = 1310721;
  v25 = 32;
  v20(a1, &v25);
  *(_DWORD *)(a1 + 244) = 32;
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v29, 0x1000u, 0, "get addr after open cores.");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ckb/backend_ckb.c",
    154,
    "setup_all_chip_ckb",
    18,
    286,
    60,
    &v29);
  sub_C0B20(a1);
  result = 0;
  if ( !*(_BYTE *)(a1 + 268) )
    *(_DWORD *)(a1 + 272) = (int)*(float *)(a1 + 760);
  return result;
}
