int __fastcall setup_all_chip_ckb2(int a1)
{
  float v1; // s15
  int v3; // r7
  int v4; // r8
  unsigned int v5; // r9
  unsigned int v6; // r3
  int result; // r0
  _BYTE *v8; // r9
  int v9; // r0
  char v10; // r1
  int v11; // r12
  _BYTE *v12; // r3
  char v13; // lr
  char v14; // r1
  char v15; // lr
  char v16; // r1
  char v17; // lr
  char v18; // r1
  char v19; // lr
  char v20; // r1
  char v21; // lr
  char v22; // r1
  char v23; // lr
  char v24; // r1
  char v25; // lr
  char v26; // r1
  char v27; // lr
  char v28; // r1
  char v29; // lr
  char v30; // r1
  char v31; // lr
  char v32; // r1
  char v33; // lr
  char v34; // r1
  char v35; // lr
  char v36; // r1
  char v37; // lr
  char v38; // r1
  char v39; // lr
  char v40; // lr
  _BYTE *v41; // r9
  char v42; // r3
  int v43; // r8
  void *v44; // r0
  char v45; // r11
  int v46; // r9
  char v47; // r0
  unsigned int v48; // r5
  unsigned int v49; // r3
  bool v50; // zf
  int v51; // [sp+10h] [bp-1014h] BYREF
  int v52; // [sp+14h] [bp-1010h]
  int v53; // [sp+18h] [bp-100Ch]
  int v54; // [sp+1Ch] [bp-1008h]
  char v55[4100]; // [sp+20h] [bp-1004h] BYREF

  v3 = *(_DWORD *)(a1 + 192);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v55, 0x1000u, 0, "%s", "setup_all_chip_ckb2");
  pthread_mutex_unlock(&stru_1A8A24);
  v4 = 3;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ckb2/backend_ckb2.c",
    156,
    "setup_all_chip_ckb2",
    19,
    238,
    60,
    v55);
  v5 = *(_DWORD *)(a1 + 192);
  while ( 1 )
  {
    sub_D1658(a1, v5);
    usleep(0x2710u);
    v6 = *(_DWORD *)(a1 + 236);
    if ( v6 >= v5 )
      break;
    if ( !--v4 )
      return 3;
  }
  if ( v6 != v5 )
    return 3;
  v8 = *(_BYTE **)(a1 + 296);
  v9 = sub_16E220(256, (unsigned __int8)v3);
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
        *(v12 - 30) = v9 + v10 + v9;
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
    while ( v11 < (unsigned __int8)v3 );
    v8 = *(_BYTE **)(a1 + 296);
  }
  *(_DWORD *)(a1 + 240) = v9;
  (*(void (__fastcall **)(int, _BYTE *, int))(a1 + 144))(a1, v8, v3);
  v53 = 4194305;
  v52 = 0;
  v54 = 0;
  v51 = 0;
  v43 = 3;
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v55, 0x1000u, 0, "set analog value %08x", 0);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_analog_mux_CKB2",
    27,
    480,
    60,
    v55);
  (*(void (__fastcall **)(int, int *))(a1 + 152))(a1, &v51);
  chip_setting_ticket_value_ckb2(a1, 255);
  v51 = 7479056;
  v52 = 0;
  v54 = 0;
  v53 = 1835009;
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v55, 0x1000u, 0, "set_misc value %08x", v51);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ckb2/chip_setting_ckb2.c",
    161,
    "chip_setting_misc_ckb2",
    22,
    93,
    60,
    v55);
  (*(void (__fastcall **)(int, int *))(a1 + 152))(a1, &v51);
  v44 = calloc(1u, 0x80u);
  v45 = *(_BYTE *)(a1 + 132);
  v46 = (int)v44;
  v47 = rand();
  memset((void *)(v46 + 40), (unsigned __int8)(v45 + v47), 0x30u);
  push_work_base(a1, v46);
  free((void *)v46);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v55, 0x1000u, 0, "get addr after open cores and set frequency.");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ckb2/backend_ckb2.c",
    156,
    "setup_all_chip_ckb2",
    19,
    266,
    60,
    v55);
  v48 = *(_DWORD *)(a1 + 192);
  while ( 1 )
  {
    sub_D1658(a1, v48);
    usleep(0x2710u);
    v49 = *(_DWORD *)(a1 + 236);
    if ( v49 >= v48 )
      break;
    if ( !--v43 )
      return 3;
  }
  if ( v49 != v48 )
    return 3;
  result = *(unsigned __int8 *)(a1 + 268);
  v50 = result == 0;
  if ( *(_BYTE *)(a1 + 268) )
    result = 0;
  else
    v1 = *(float *)(a1 + 760);
  if ( v50 )
    *(_DWORD *)(a1 + 272) = (int)v1;
  return result;
}
