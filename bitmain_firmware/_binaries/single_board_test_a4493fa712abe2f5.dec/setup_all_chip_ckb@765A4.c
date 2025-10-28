int __fastcall setup_all_chip_ckb(int a1)
{
  int v2; // r3
  int v3; // r2
  void (__fastcall *v4)(int, int, int); // r3
  int v5; // r1
  void (__fastcall *v6)(int, int *, int, _DWORD); // r5
  int v7; // r9
  int v8; // r7
  signed int v9; // r1
  float v10; // s20
  float v11; // s14
  int v12; // r3
  unsigned int v13; // s15
  unsigned int v14; // r2
  unsigned int v15; // r9
  int v16; // r0
  double v17; // d11
  void (__fastcall *v18)(int, int *); // r3
  char v19; // r0
  void (__fastcall *v20)(int, int *, int, _DWORD); // r7
  void (__fastcall *v21)(int, int *); // r3
  char *v23; // [sp+14h] [bp-1028h]
  unsigned int v24; // [sp+18h] [bp-1024h]
  char v25; // [sp+18h] [bp-1024h]
  int v26; // [sp+1Ch] [bp-1020h]
  int v27; // [sp+28h] [bp-1014h] BYREF
  int v28; // [sp+2Ch] [bp-1010h]
  int v29; // [sp+30h] [bp-100Ch]
  int v30; // [sp+34h] [bp-1008h]
  int v31; // [sp+38h] [bp-1004h] BYREF
  int v32; // [sp+3Ch] [bp-1000h]
  int v33; // [sp+40h] [bp-FFCh]
  int v34; // [sp+44h] [bp-FF8h]

  puts("setup_all_chip_ckb");
  LOBYTE(v2) = 0;
  v3 = *(_DWORD *)(a1 + 280) - 1;
  do
  {
    *(_BYTE *)++v3 = v2;
    v2 = (unsigned __int8)(v2 + 9);
  }
  while ( v2 != 243 );
  v4 = *(void (__fastcall **)(int, int, int))(a1 + 132);
  v5 = *(_DWORD *)(a1 + 280);
  *(_DWORD *)(a1 + 224) = 9;
  v4(a1, v5, 27);
  sub_D3C28(a1);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v31, 0x1000u, 0, "%s", "ChipSetting_close_cores_CKB");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/chip_setting.c",
    60,
    "ChipSetting_close_cores_CKB",
    27,
    329,
    20,
    &v31);
  v33 = 0;
  v34 = 5120;
  v6 = *(void (__fastcall **)(int, int *, int, _DWORD))(a1 + 152);
  v31 = 0;
  v32 = 0;
  LOBYTE(v33) = 1;
  HIWORD(v33) = 80;
  v6(a1, &v31, 20000, 0);
  v7 = (int)(float)(*(float *)(a1 + 732) - 100.0) / 25;
  if ( v7 > 0 )
  {
    v8 = 25;
    v26 = 25 * (v7 + 1);
    do
    {
      v9 = 7;
      v28 = 0;
      v30 = 0;
      v29 = 786433;
      v10 = (double)v8 + 100.0;
      while ( 1 )
      {
        v11 = v10 * (float)v9;
        if ( (unsigned int)(float)((float)v9 * v11) - 800 <= 0x640 )
        {
          v14 = (unsigned int)(float)((float)v9 * v11);
          v12 = v9;
          goto LABEL_21;
        }
        if ( v9 == 1 )
          break;
        v12 = v9 - 1;
        v13 = (unsigned int)(float)((float)(v9 - 1) * v11);
        if ( v13 - 800 <= 0x640 )
          goto LABEL_20;
        v12 = (unsigned __int8)(v9 - 2);
        if ( (_BYTE)v9 != 2 )
        {
          v13 = (unsigned int)(float)((float)v12 * v11);
          if ( v13 - 800 <= 0x640 )
            goto LABEL_20;
          v12 = (unsigned __int8)(v9 - 3);
          if ( (_BYTE)v9 != 3 )
          {
            v13 = (unsigned int)(float)((float)v12 * v11);
            if ( v13 - 800 <= 0x640 )
              goto LABEL_20;
            v12 = (unsigned __int8)(v9 - 4);
            if ( (_BYTE)v9 != 4 )
            {
              v13 = (unsigned int)(float)((float)v12 * v11);
              if ( v13 - 800 <= 0x640 )
                goto LABEL_20;
              v12 = (unsigned __int8)(v9 - 5);
              if ( (_BYTE)v9 != 5 )
              {
                v13 = (unsigned int)(float)((float)v12 * v11);
                if ( v13 - 800 <= 0x640 )
                {
LABEL_20:
                  v14 = v13;
LABEL_21:
                  v24 = v12;
                  v15 = v12 | 0xC0000100 | (16 * v9) | ((v14 / 0x19) << 16);
                  v16 = sub_F7148(25 * (v14 / 0x19), v9);
                  v17 = (float)sub_F7148(v16, v24);
                  goto LABEL_22;
                }
                if ( (unsigned __int8)v9 != 6 && (unsigned int)v11 - 800 <= 0x640 )
                {
                  v14 = (unsigned int)v11;
                  v12 = 1;
                  goto LABEL_21;
                }
              }
            }
          }
        }
        --v9;
      }
      v15 = 0;
      v17 = 0.0;
LABEL_22:
      v27 = v15;
      v8 += 25;
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw((char *)&v31, 0x1000u, 0, "set freq: %.2f, expected freq: %.2f", v17, v10);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/chip_setting.c",
        60,
        "ChipSetting_freq_CKB",
        20,
        288,
        20,
        &v31);
      (*(void (__fastcall **)(int, int *))(a1 + 140))(a1, &v27);
      usleep(0x2710u);
      usleep(0x61A8u);
    }
    while ( v26 != v8 );
  }
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v31, 0x1000u, 0, "ticket_mask %s reg %02x tm %d", "ChipSetting_ticket_mask_CKB", 20, 48);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/chip_setting.c",
    60,
    "ChipSetting_ticket_mask_CKB",
    27,
    137,
    20,
    &v31);
  v18 = *(void (__fastcall **)(int, int *))(a1 + 140);
  v27 = 48;
  v29 = 1310721;
  v18(a1, &v27);
  *(_DWORD *)(a1 + 228) = 48;
  v23 = (char *)calloc(1u, 0x80u);
  v25 = *(_BYTE *)(a1 + 120);
  v19 = rand();
  memset(v23 + 40, (unsigned __int8)(v25 + v19), 0x30u);
  push_work_base(a1, (int)v23);
  free(v23);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v31, 0x1000u, 0, "%s core_num %d reg %02x %d", "ChipSetting_open_cores_CKB", 20, 80, 20000);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/chip_setting.c",
    60,
    "ChipSetting_open_cores_CKB",
    26,
    315,
    40,
    &v31);
  v31 = 1;
  v33 = 5242880;
  v34 = 0;
  v32 = 0;
  v20 = *(void (__fastcall **)(int, int *, int, _DWORD))(a1 + 152);
  LOBYTE(v33) = 1;
  BYTE1(v34) = 20;
  v20(a1, &v31, 20000, 0);
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v31, 0x1000u, 0, "ticket_mask %s reg %02x tm %d", "ChipSetting_ticket_mask_CKB", 20, 32);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/chip_setting.c",
    60,
    "ChipSetting_ticket_mask_CKB",
    27,
    137,
    20,
    &v31);
  v21 = *(void (__fastcall **)(int, int *))(a1 + 140);
  v29 = 1310721;
  v27 = 32;
  v21(a1, &v27);
  *(_DWORD *)(a1 + 228) = 32;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v31, 0x1000u, 0, "get addr after open cores.");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_ckb/backend_ckb.c",
    71,
    "setup_all_chip_ckb",
    18,
    286,
    60,
    &v31);
  sub_D3C28(a1);
  if ( !*(_BYTE *)(a1 + 252) )
    *(_DWORD *)(a1 + 256) = (int)*(float *)(a1 + 732);
  return 0;
}
