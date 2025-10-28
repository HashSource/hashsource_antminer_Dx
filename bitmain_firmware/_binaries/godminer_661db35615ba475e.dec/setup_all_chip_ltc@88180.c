int __fastcall setup_all_chip_ltc(int a1)
{
  float v1; // s16
  int v3; // r6
  int v4; // r7
  unsigned int v5; // r8
  unsigned int v6; // r3
  int result; // r0
  _BYTE *v8; // r8
  int v9; // r0
  char v10; // r12
  int v11; // r1
  _BYTE *v12; // r3
  char v13; // lr
  char v14; // r12
  char v15; // lr
  char v16; // r12
  char v17; // lr
  char v18; // r12
  char v19; // lr
  char v20; // r12
  char v21; // lr
  char v22; // r12
  char v23; // lr
  char v24; // r12
  char v25; // lr
  char v26; // r12
  char v27; // lr
  char v28; // r12
  char v29; // lr
  char v30; // r12
  char v31; // lr
  char v32; // r12
  char v33; // lr
  char v34; // r12
  char v35; // lr
  char v36; // r12
  char v37; // lr
  char v38; // r12
  char v39; // lr
  char v40; // lr
  _BYTE *v41; // r8
  char v42; // r3
  int v43; // r2
  void (__fastcall *v44)(int, _BYTE *, int); // r3
  int v45; // r6
  int v46; // lr
  float v47; // s15
  int v48; // r8
  int v49; // r6
  int v50; // r7
  float v51; // s14
  int v52; // r6
  unsigned int v53; // r4
  unsigned int v54; // r3
  bool v55; // zf
  int v56; // [sp+8h] [bp-1024h]
  int v57; // [sp+18h] [bp-1014h] BYREF
  int v58; // [sp+1Ch] [bp-1010h]
  int v59; // [sp+20h] [bp-100Ch]
  int v60; // [sp+24h] [bp-1008h]
  char v61[4100]; // [sp+28h] [bp-1004h] BYREF

  v3 = *(_DWORD *)(a1 + 180);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v61, 0x1000u, 0, "%s", "setup_all_chip_ltc");
  pthread_mutex_unlock(&stru_197BB8);
  v4 = 3;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ltc/backend_ltc.c",
    154,
    "setup_all_chip_ltc",
    18,
    317,
    60,
    v61);
  v5 = *(_DWORD *)(a1 + 180);
  while ( 1 )
  {
    sub_87C90(a1, v5);
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
  v9 = sub_15D3C8(256, (unsigned __int8)v3);
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
        *v12 = v10;
        v11 += 32;
        __pld(v12 + 34);
        v12[1] = v9 + v10;
        v12 += 32;
        v13 = v9 + v9 + v10 + v9;
        *(v12 - 30) = v9 + v9 + v10;
        v14 = v9 + v13;
        *(v12 - 29) = v13;
        v15 = v9 + v9 + v13;
        *(v12 - 28) = v14;
        v16 = v9 + v15;
        *(v12 - 27) = v15;
        v17 = v9 + v9 + v15;
        *(v12 - 26) = v16;
        v18 = v9 + v17;
        *(v12 - 25) = v17;
        v19 = v9 + v9 + v17;
        *(v12 - 24) = v18;
        v20 = v9 + v19;
        *(v12 - 23) = v19;
        v21 = v9 + v9 + v19;
        *(v12 - 22) = v20;
        v22 = v9 + v21;
        *(v12 - 21) = v21;
        v23 = v9 + v9 + v21;
        *(v12 - 20) = v22;
        v24 = v9 + v23;
        *(v12 - 19) = v23;
        v25 = v9 + v9 + v23;
        *(v12 - 18) = v24;
        v26 = v9 + v25;
        *(v12 - 17) = v25;
        v27 = v9 + v9 + v25;
        *(v12 - 16) = v26;
        v28 = v9 + v27;
        *(v12 - 15) = v27;
        v29 = v9 + v9 + v27;
        *(v12 - 14) = v28;
        v30 = v9 + v29;
        *(v12 - 13) = v29;
        v31 = v9 + v9 + v29;
        *(v12 - 12) = v30;
        v32 = v9 + v31;
        *(v12 - 11) = v31;
        v33 = v9 + v9 + v31;
        *(v12 - 10) = v32;
        v34 = v9 + v33;
        *(v12 - 9) = v33;
        v35 = v9 + v9 + v33;
        *(v12 - 8) = v34;
        v36 = v9 + v35;
        *(v12 - 7) = v35;
        v37 = v9 + v9 + v35;
        *(v12 - 6) = v36;
        v38 = v9 + v37;
        *(v12 - 5) = v37;
        v39 = v9 + v9 + v37;
        *(v12 - 4) = v38;
        *(v12 - 3) = v39;
        *(v12 - 2) = v9 + v39;
        v40 = v9 + v9 + v39;
        *(v12 - 1) = v40;
        v10 = v9 + v40;
      }
      while ( v11 != (((unsigned __int8)v3 - 33) & 0xFFFFFFE0) + 32 );
    }
    v41 = &v8[v11 - 1];
    v42 = v11 * v9;
    do
    {
      ++v11;
      *++v41 = v42;
      v42 += v9;
    }
    while ( (unsigned __int8)v3 > v11 );
    v8 = *(_BYTE **)(a1 + 280);
  }
  v43 = v3;
  v44 = *(void (__fastcall **)(int, _BYTE *, int))(a1 + 132);
  *(_DWORD *)(a1 + 224) = v9;
  v45 = 0;
  v44(a1, v8, v43);
  v59 = 2883585;
  v58 = 0;
  v60 = 0;
  v57 = 0;
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v61, 0x1000u, 0, "set analog value %08x", 0);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
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
        pthread_mutex_lock(&stru_197BB8);
        logfmt_raw(v61, 0x1000u, 0, "%s", "chip_setting_working_mode_ltc");
        pthread_mutex_unlock(&stru_197BB8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_ltc/chip_setting_ltc.c",
          159,
          "chip_setting_working_mode_ltc",
          29,
          297,
          20,
          v61);
        v46 = *(_DWORD *)(a1 + 184);
        HIWORD(v60) = 0;
        v59 = 1;
        v58 = 0;
        LOBYTE(v60) = v45;
        BYTE1(v60) = v46;
        v57 = 34047;
        if ( (*(int (__fastcall **)(int, int *))(a1 + 144))(a1, &v57) )
          break;
        usleep(0x3E8u);
        ++v45;
        usleep(0x2710u);
        if ( *(_DWORD *)(a1 + 184) <= v45 )
          goto LABEL_17;
      }
      pthread_mutex_lock(&stru_197BB8);
      v56 = v45++;
      logfmt_raw(v61, 0x1000u, 0, "%s failed, reg:%02x, core_id:%d", "chip_setting_working_mode_ltc", HIWORD(v59), v56);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_ltc/chip_setting_ltc.c",
        159,
        "chip_setting_working_mode_ltc",
        29,
        320,
        100,
        v61);
      usleep(0x2710u);
    }
    while ( v45 < *(_DWORD *)(a1 + 184) );
  }
LABEL_17:
  LODWORD(v47) = (int)(float)(*(float *)(a1 + 732) - 900.0);
  v48 = SLODWORD(v47) % 25;
  if ( SLODWORD(v47) / 25 > 0 )
  {
    v49 = 25;
    v50 = 25 * (SLODWORD(v47) / 25 + 1);
    do
    {
      v47 = *(float *)&v49;
      v51 = (float)v49;
      v49 += 25;
      v1 = v51 + 900.0;
      chip_setting_freq_ltc(a1);
      usleep((__useconds_t)&loc_3D090);
    }
    while ( v50 != v49 );
  }
  if ( v48 )
  {
    chip_setting_freq_ltc(a1);
    usleep(0x3D090u);
    v1 = *(float *)(a1 + 732);
  }
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v61, 0x1000u, 0, "Set chip freq=%f", v1);
  v52 = 3;
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ltc/backend_ltc.c",
    154,
    "set_working_freq_by_steps",
    25,
    311,
    60,
    v61);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v61, 0x1000u, 0, "get addr after open cores and set frequency.");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ltc/backend_ltc.c",
    154,
    "setup_all_chip_ltc",
    18,
    373,
    60,
    v61);
  v53 = *(_DWORD *)(a1 + 180);
  while ( 1 )
  {
    sub_87C90(a1, v53);
    usleep(0x2710u);
    v54 = *(_DWORD *)(a1 + 220);
    if ( v53 <= v54 )
      break;
    if ( !--v52 )
      return 3;
  }
  if ( v53 != v54 )
    return 3;
  result = *(unsigned __int8 *)(a1 + 252);
  v55 = result == 0;
  if ( *(_BYTE *)(a1 + 252) )
    result = 0;
  else
    v47 = *(float *)(a1 + 732);
  if ( v55 )
    *(_DWORD *)(a1 + 256) = (int)v47;
  return result;
}
