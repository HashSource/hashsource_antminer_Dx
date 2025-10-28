int __fastcall setup_all_chip_ltc(int a1)
{
  float v1; // s16
  int v3; // r7
  int v4; // r6
  unsigned int v5; // r8
  unsigned int v6; // r3
  int result; // r0
  _BYTE *v8; // r8
  int v9; // r0
  char v10; // r6
  int v11; // r1
  _BYTE *v12; // r3
  char v13; // r12
  char v14; // r6
  char v15; // r12
  char v16; // r6
  char v17; // r12
  char v18; // r6
  char v19; // r12
  char v20; // r6
  char v21; // r12
  char v22; // r6
  char v23; // r12
  char v24; // r6
  char v25; // r12
  char v26; // r6
  char v27; // r12
  char v28; // r6
  char v29; // r12
  char v30; // r6
  char v31; // r12
  char v32; // r6
  char v33; // r12
  char v34; // r6
  char v35; // r12
  char v36; // r6
  char v37; // r12
  char v38; // r6
  char v39; // r12
  char v40; // r6
  char v41; // r12
  char v42; // r6
  _BYTE *v43; // r8
  char v44; // r3
  void (__fastcall *v45)(int, _BYTE *, int); // r3
  int v46; // r6
  int v47; // r3
  int v48; // r3
  int v49; // r8
  int v50; // r6
  int v51; // r7
  float v52; // s14
  int v53; // r6
  unsigned int v54; // r5
  unsigned int v55; // r3
  int v56; // [sp+8h] [bp-1024h]
  int v57; // [sp+18h] [bp-1014h] BYREF
  int v58; // [sp+1Ch] [bp-1010h]
  int v59; // [sp+20h] [bp-100Ch]
  int v60; // [sp+24h] [bp-1008h]
  char v61[4100]; // [sp+28h] [bp-1004h] BYREF

  v3 = *(_DWORD *)(a1 + 180);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v61, 0x1000u, 0, "%s", "setup_all_chip_ltc");
  pthread_mutex_unlock(&stru_3B526C);
  v4 = 3;
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_ltc/backend_ltc.c",
    71,
    "setup_all_chip_ltc",
    18,
    317,
    60,
    v61);
  v5 = *(_DWORD *)(a1 + 180);
  while ( 1 )
  {
    sub_9CE34((_DWORD *)a1, v5);
    usleep(0x2710u);
    v6 = *(_DWORD *)(a1 + 220);
    if ( v5 <= v6 )
      break;
    if ( !--v4 )
      return 3;
  }
  if ( v5 != v6 )
    return 3;
  v8 = *(_BYTE **)(a1 + 280);
  v9 = sub_F7148(256, (unsigned __int8)v3);
  if ( (_BYTE)v3 )
  {
    if ( (unsigned __int8)v3 <= 0x20u )
    {
      v11 = 0;
    }
    else
    {
      v10 = 0;
      v11 = 0;
      v12 = v8;
      do
      {
        v13 = v9 + v10;
        *v12 = v10;
        v11 += 32;
        __pld(v12 + 34);
        v14 = v9 + v9 + v10;
        v12[1] = v13;
        v12 += 32;
        v15 = v14 + v9;
        *(v12 - 30) = v14;
        v16 = v9 + v14 + v9;
        *(v12 - 29) = v15;
        v17 = v9 + v16;
        *(v12 - 28) = v16;
        v18 = v9 + v9 + v16;
        *(v12 - 27) = v17;
        v19 = v9 + v18;
        *(v12 - 26) = v18;
        v20 = v9 + v9 + v18;
        *(v12 - 25) = v19;
        v21 = v9 + v20;
        *(v12 - 24) = v20;
        v22 = v9 + v9 + v20;
        *(v12 - 23) = v21;
        v23 = v9 + v22;
        *(v12 - 22) = v22;
        v24 = v9 + v9 + v22;
        *(v12 - 21) = v23;
        v25 = v9 + v24;
        *(v12 - 20) = v24;
        v26 = v9 + v9 + v24;
        *(v12 - 19) = v25;
        v27 = v9 + v26;
        *(v12 - 18) = v26;
        v28 = v9 + v9 + v26;
        *(v12 - 17) = v27;
        v29 = v9 + v28;
        *(v12 - 16) = v28;
        v30 = v9 + v9 + v28;
        *(v12 - 15) = v29;
        v31 = v9 + v30;
        *(v12 - 14) = v30;
        v32 = v9 + v9 + v30;
        *(v12 - 13) = v31;
        v33 = v9 + v32;
        *(v12 - 12) = v32;
        v34 = v9 + v9 + v32;
        *(v12 - 11) = v33;
        v35 = v9 + v34;
        *(v12 - 10) = v34;
        v36 = v9 + v9 + v34;
        *(v12 - 9) = v35;
        v37 = v9 + v36;
        *(v12 - 8) = v36;
        v38 = v9 + v9 + v36;
        *(v12 - 7) = v37;
        v39 = v9 + v38;
        *(v12 - 6) = v38;
        v40 = v9 + v9 + v38;
        *(v12 - 5) = v39;
        v41 = v9 + v40;
        *(v12 - 4) = v40;
        v42 = v9 + v9 + v40;
        *(v12 - 3) = v41;
        *(v12 - 2) = v42;
        *(v12 - 1) = v9 + v42;
        v10 = v9 + v9 + v42;
      }
      while ( v11 != (((unsigned __int8)v3 - 33) & 0xFFFFFFE0) + 32 );
    }
    v43 = &v8[v11 - 1];
    v44 = v11 * v9;
    do
    {
      ++v11;
      *++v43 = v44;
      v44 += v9;
    }
    while ( (unsigned __int8)v3 > v11 );
    v8 = *(_BYTE **)(a1 + 280);
  }
  v45 = *(void (__fastcall **)(int, _BYTE *, int))(a1 + 132);
  *(_DWORD *)(a1 + 224) = v9;
  v46 = 0;
  v45(a1, v8, v3);
  v58 = 0;
  v60 = 0;
  v57 = 0;
  v59 = 2883585;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v61, 0x1000u, 0, "set analog value %08x", 0);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/chip_setting.c",
    60,
    "ChipSetting_analog_mux_LTC",
    26,
    480,
    60,
    v61);
  (*(void (__fastcall **)(int, int *))(a1 + 140))(a1, &v57);
  chip_setting_ticket_mask_ltc((_DWORD *)a1, 0xFFFFFFFF);
  if ( *(int *)(a1 + 184) > 0 )
  {
    do
    {
      while ( 1 )
      {
        pthread_mutex_lock(&stru_3B526C);
        logfmt_raw(v61, 0x1000u, 0, "%s", "chip_setting_working_mode_ltc");
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/backend_ltc/chip_setting_ltc.c",
          76,
          "chip_setting_working_mode_ltc",
          29,
          297,
          20,
          v61);
        v47 = *(_DWORD *)(a1 + 184);
        v58 = 0;
        v59 = 1;
        HIWORD(v60) = 0;
        BYTE1(v60) = v47;
        LOBYTE(v60) = v46;
        v57 = 34047;
        if ( (*(int (__fastcall **)(int, int *))(a1 + 144))(a1, &v57) )
          break;
        ++v46;
        usleep(0x3E8u);
        usleep(0x2710u);
        if ( *(_DWORD *)(a1 + 184) <= v46 )
          goto LABEL_16;
      }
      pthread_mutex_lock(&stru_3B526C);
      v56 = v46++;
      logfmt_raw(v61, 0x1000u, 0, "%s failed, reg:%02x, core_id:%d", "chip_setting_working_mode_ltc", HIWORD(v59), v56);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/backend_ltc/chip_setting_ltc.c",
        76,
        "chip_setting_working_mode_ltc",
        29,
        320,
        100,
        v61);
      usleep(0x2710u);
    }
    while ( v46 < *(_DWORD *)(a1 + 184) );
  }
LABEL_16:
  v48 = (int)(float)(*(float *)(a1 + 732) - 900.0);
  v49 = v48 % 25;
  if ( v48 / 25 > 0 )
  {
    v50 = 25;
    v51 = 25 * (v48 / 25 + 1);
    do
    {
      v52 = (float)v50;
      v50 += 25;
      v1 = v52 + 900.0;
      chip_setting_freq_ltc(a1);
      usleep((__useconds_t)&loc_3D090);
    }
    while ( v51 != v50 );
  }
  if ( v49 )
  {
    chip_setting_freq_ltc(a1);
    usleep(0x3D090u);
    v1 = *(float *)(a1 + 732);
  }
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v61, 0x1000u, 0, "Set chip freq=%f", v1);
  v53 = 3;
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_ltc/backend_ltc.c",
    71,
    "set_working_freq_by_steps",
    25,
    311,
    60,
    v61);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v61, 0x1000u, 0, "get addr after open cores and set frequency.");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_ltc/backend_ltc.c",
    71,
    "setup_all_chip_ltc",
    18,
    373,
    60,
    v61);
  v54 = *(_DWORD *)(a1 + 180);
  while ( 1 )
  {
    sub_9CE34((_DWORD *)a1, v54);
    usleep(0x2710u);
    v55 = *(_DWORD *)(a1 + 220);
    if ( v54 <= v55 )
      break;
    if ( !--v53 )
      return 3;
  }
  if ( v54 != v55 )
    return 3;
  result = *(unsigned __int8 *)(a1 + 252);
  if ( *(_BYTE *)(a1 + 252) )
    return 0;
  *(_DWORD *)(a1 + 256) = (int)*(float *)(a1 + 732);
  return result;
}
