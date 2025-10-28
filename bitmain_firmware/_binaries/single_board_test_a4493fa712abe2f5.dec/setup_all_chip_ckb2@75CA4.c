int __fastcall setup_all_chip_ckb2(int a1)
{
  int v2; // r8
  int v3; // r4
  unsigned int v4; // r9
  unsigned int v5; // r3
  int result; // r0
  _BYTE *v7; // r9
  int v8; // r0
  char v9; // r1
  int v10; // r4
  _BYTE *v11; // r3
  char v12; // r12
  char v13; // r1
  char v14; // r12
  char v15; // r1
  char v16; // r12
  char v17; // r1
  char v18; // r12
  char v19; // r1
  char v20; // r12
  char v21; // r1
  char v22; // r12
  char v23; // r1
  char v24; // r12
  char v25; // r1
  char v26; // r12
  char v27; // r1
  char v28; // r12
  char v29; // r1
  char v30; // r12
  char v31; // r1
  char v32; // r12
  char v33; // r1
  char v34; // r12
  char v35; // r1
  char v36; // r12
  char v37; // r1
  char v38; // r12
  char v39; // r1
  char v40; // r12
  char v41; // r1
  _BYTE *v42; // r9
  char v43; // r3
  int v44; // r9
  void *v45; // r0
  char v46; // r11
  int v47; // r4
  char v48; // r0
  unsigned int v49; // r4
  unsigned int v50; // r3
  int v51; // [sp+10h] [bp-1014h] BYREF
  int v52; // [sp+14h] [bp-1010h]
  __int16 v53; // [sp+18h] [bp-100Ch]
  __int16 v54; // [sp+1Ah] [bp-100Ah]
  int v55; // [sp+1Ch] [bp-1008h]
  char v56[4100]; // [sp+20h] [bp-1004h] BYREF

  v2 = *(_DWORD *)(a1 + 180);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v56, 0x1000u, 0, "%s", "setup_all_chip_ckb2");
  pthread_mutex_unlock(&stru_3B526C);
  v3 = 3;
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_ckb2/backend_ckb2.c",
    73,
    "setup_all_chip_ckb2",
    19,
    238,
    60,
    v56);
  v4 = *(_DWORD *)(a1 + 180);
  while ( 1 )
  {
    sub_758E8((_DWORD *)a1, v4);
    usleep(0x2710u);
    v5 = *(_DWORD *)(a1 + 220);
    if ( v5 >= v4 )
      break;
    if ( !--v3 )
      return 3;
  }
  if ( v5 != v4 )
    return 3;
  v7 = *(_BYTE **)(a1 + 280);
  v8 = sub_F7148(256, (unsigned __int8)v2);
  if ( (_BYTE)v2 )
  {
    if ( (unsigned __int8)v2 <= 0x20u )
    {
      v10 = 0;
    }
    else
    {
      v9 = 0;
      v10 = 0;
      v11 = v7;
      do
      {
        v12 = v8 + v9;
        *v11 = v9;
        v10 += 32;
        __pld(v11 + 34);
        v13 = v8 + v9 + v8;
        v11[1] = v12;
        v11 += 32;
        v14 = v8 + v13;
        *(v11 - 30) = v13;
        v15 = v8 + v8 + v13;
        *(v11 - 29) = v14;
        v16 = v8 + v15;
        *(v11 - 28) = v15;
        v17 = v8 + v8 + v15;
        *(v11 - 27) = v16;
        v18 = v8 + v17;
        *(v11 - 26) = v17;
        v19 = v8 + v8 + v17;
        *(v11 - 25) = v18;
        v20 = v8 + v19;
        *(v11 - 24) = v19;
        v21 = v8 + v8 + v19;
        *(v11 - 23) = v20;
        v22 = v8 + v21;
        *(v11 - 22) = v21;
        v23 = v8 + v8 + v21;
        *(v11 - 21) = v22;
        v24 = v8 + v23;
        *(v11 - 20) = v23;
        v25 = v8 + v8 + v23;
        *(v11 - 19) = v24;
        v26 = v8 + v25;
        *(v11 - 18) = v25;
        v27 = v8 + v8 + v25;
        *(v11 - 17) = v26;
        v28 = v8 + v27;
        *(v11 - 16) = v27;
        v29 = v8 + v8 + v27;
        *(v11 - 15) = v28;
        v30 = v8 + v29;
        *(v11 - 14) = v29;
        v31 = v8 + v8 + v29;
        *(v11 - 13) = v30;
        v32 = v8 + v31;
        *(v11 - 12) = v31;
        v33 = v8 + v8 + v31;
        *(v11 - 11) = v32;
        v34 = v8 + v33;
        *(v11 - 10) = v33;
        v35 = v8 + v8 + v33;
        *(v11 - 9) = v34;
        v36 = v8 + v35;
        *(v11 - 8) = v35;
        v37 = v8 + v8 + v35;
        *(v11 - 7) = v36;
        v38 = v8 + v37;
        *(v11 - 6) = v37;
        v39 = v8 + v8 + v37;
        *(v11 - 5) = v38;
        v40 = v8 + v39;
        *(v11 - 4) = v39;
        v41 = v8 + v8 + v39;
        *(v11 - 3) = v40;
        *(v11 - 2) = v41;
        *(v11 - 1) = v8 + v41;
        v9 = v8 + v8 + v41;
      }
      while ( v10 != (((unsigned __int8)v2 - 33) & 0xFFFFFFE0) + 32 );
    }
    v42 = &v7[v10 - 1];
    v43 = v10 * v8;
    do
    {
      ++v10;
      *++v42 = v43;
      v43 += v8;
    }
    while ( v10 < (unsigned __int8)v2 );
    v7 = *(_BYTE **)(a1 + 280);
  }
  *(_DWORD *)(a1 + 224) = v8;
  (*(void (__fastcall **)(int, _BYTE *, int))(a1 + 132))(a1, v7, v2);
  v52 = 0;
  v44 = 3;
  v55 = 0;
  v51 = 0;
  v54 = 64;
  v53 = 1;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v56, 0x1000u, 0, "set analog value %08x", 0);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/chip_setting.c",
    60,
    "ChipSetting_analog_mux_CKB2",
    27,
    480,
    60,
    v56);
  (*(void (__fastcall **)(int, int *))(a1 + 140))(a1, &v51);
  chip_setting_ticket_value_ckb2(a1, 255);
  v52 = 0;
  v53 = 1;
  v55 = 0;
  v54 = 28;
  v51 = 7479056;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v56, 0x1000u, 0, "set_misc value %08x", v51);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_ckb2/chip_setting_ckb2.c",
    78,
    "chip_setting_misc_ckb2",
    22,
    93,
    60,
    v56);
  (*(void (__fastcall **)(int, int *))(a1 + 140))(a1, &v51);
  v45 = calloc(1u, 0x80u);
  v46 = *(_BYTE *)(a1 + 120);
  v47 = (int)v45;
  v48 = rand();
  memset((void *)(v47 + 40), (unsigned __int8)(v46 + v48), 0x30u);
  push_work_base(a1, v47);
  free((void *)v47);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v56, 0x1000u, 0, "get addr after open cores and set frequency.");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_ckb2/backend_ckb2.c",
    73,
    "setup_all_chip_ckb2",
    19,
    266,
    60,
    v56);
  v49 = *(_DWORD *)(a1 + 180);
  while ( 1 )
  {
    sub_758E8((_DWORD *)a1, v49);
    usleep(0x2710u);
    v50 = *(_DWORD *)(a1 + 220);
    if ( v50 >= v49 )
      break;
    if ( !--v44 )
      return 3;
  }
  if ( v50 != v49 )
    return 3;
  result = *(unsigned __int8 *)(a1 + 252);
  if ( *(_BYTE *)(a1 + 252) )
    return 0;
  *(_DWORD *)(a1 + 256) = (int)*(float *)(a1 + 732);
  return result;
}
