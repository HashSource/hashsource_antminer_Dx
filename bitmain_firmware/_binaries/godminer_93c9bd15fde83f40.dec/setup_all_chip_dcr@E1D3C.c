int __fastcall setup_all_chip_dcr(int a1)
{
  int v2; // r6
  int v3; // r0
  int v4; // r10
  _BYTE *v5; // r7
  char v6; // r2
  char v7; // r0
  int v8; // r1
  _BYTE *v9; // r3
  char v10; // r12
  char v11; // r0
  char v12; // r12
  char v13; // r0
  char v14; // r12
  char v15; // r0
  char v16; // r12
  char v17; // r0
  char v18; // r12
  char v19; // r0
  char v20; // r12
  char v21; // r0
  char v22; // r12
  char v23; // r0
  char v24; // r12
  char v25; // r0
  char v26; // r12
  char v27; // r0
  char v28; // r12
  char v29; // r0
  char v30; // r12
  char v31; // r0
  char v32; // r12
  char v33; // r0
  char v34; // r12
  char v35; // r0
  char v36; // r12
  char v37; // r12
  _BYTE *v38; // r0
  char v39; // r3
  int v40; // r6
  __int64 v41; // r10
  int v42; // r6
  unsigned int v43; // r3
  int result; // r0
  int v45; // r5
  char *v46; // r7
  void (__fastcall *v47)(int, int *); // r3
  char v48; // r11
  char v49; // r0
  void *ptr; // [sp+50h] [bp-109Ch]
  unsigned int v51; // [sp+58h] [bp-1094h]
  int v52; // [sp+5Ch] [bp-1090h]
  int v53; // [sp+78h] [bp-1074h] BYREF
  int v54; // [sp+7Ch] [bp-1070h]
  int v55; // [sp+80h] [bp-106Ch]
  int v56; // [sp+84h] [bp-1068h]
  char *v57; // [sp+88h] [bp-1064h]
  int v58; // [sp+8Ch] [bp-1060h]
  int v59; // [sp+90h] [bp-105Ch]
  int v60; // [sp+94h] [bp-1058h]
  const char *v61; // [sp+98h] [bp-1054h]
  int v62; // [sp+9Ch] [bp-1050h]
  int v63; // [sp+A0h] [bp-104Ch]
  int v64; // [sp+A4h] [bp-1048h]
  __int64 v65; // [sp+A8h] [bp-1044h]
  int v66; // [sp+B0h] [bp-103Ch]
  int v67; // [sp+B4h] [bp-1038h]
  __int64 v68; // [sp+B8h] [bp-1034h]
  int v69; // [sp+C0h] [bp-102Ch]
  int v70; // [sp+C4h] [bp-1028h]
  __int64 v71; // [sp+C8h] [bp-1024h]
  int v72; // [sp+D0h] [bp-101Ch]
  int v73; // [sp+D4h] [bp-1018h]
  __int64 v74; // [sp+D8h] [bp-1014h]
  int v75; // [sp+E0h] [bp-100Ch]
  int v76; // [sp+E4h] [bp-1008h]
  int v77; // [sp+E8h] [bp-1004h] BYREF
  int v78; // [sp+ECh] [bp-1000h]
  int v79; // [sp+F0h] [bp-FFCh]
  int v80; // [sp+F4h] [bp-FF8h]

  v2 = *(_DWORD *)(a1 + 192);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v77, 0x1000u, 0, "%s", "setup_all_chip_dcr");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_dcr/backend_dcr.c",
    154,
    "setup_all_chip_dcr",
    18,
    248,
    60,
    &v77);
  v3 = sub_16E220(256, (unsigned __int8)v2);
  v4 = v3;
  v5 = *(_BYTE **)(a1 + 296);
  if ( (_BYTE)v2 )
  {
    v6 = v3;
    if ( (unsigned __int8)v2 <= 0x20u )
    {
      v8 = 0;
    }
    else
    {
      v7 = 0;
      v8 = 0;
      v9 = *(_BYTE **)(a1 + 296);
      do
      {
        *v9 = v7;
        v8 += 32;
        __pld(v9 + 34);
        v9[1] = v6 + v7;
        v9 += 32;
        v10 = v6 + v6 + v6 + v7;
        *(v9 - 30) = v6 + v6 + v7;
        v11 = v6 + v10;
        *(v9 - 29) = v10;
        v12 = v6 + v6 + v10;
        *(v9 - 28) = v11;
        v13 = v6 + v12;
        *(v9 - 27) = v12;
        v14 = v6 + v6 + v12;
        *(v9 - 26) = v13;
        v15 = v6 + v14;
        *(v9 - 25) = v14;
        v16 = v6 + v6 + v14;
        *(v9 - 24) = v15;
        v17 = v6 + v16;
        *(v9 - 23) = v16;
        v18 = v6 + v6 + v16;
        *(v9 - 22) = v17;
        v19 = v6 + v18;
        *(v9 - 21) = v18;
        v20 = v6 + v6 + v18;
        *(v9 - 20) = v19;
        v21 = v6 + v20;
        *(v9 - 19) = v20;
        v22 = v6 + v6 + v20;
        *(v9 - 18) = v21;
        v23 = v6 + v22;
        *(v9 - 17) = v22;
        v24 = v6 + v6 + v22;
        *(v9 - 16) = v23;
        v25 = v6 + v24;
        *(v9 - 15) = v24;
        v26 = v6 + v6 + v24;
        *(v9 - 14) = v25;
        v27 = v6 + v26;
        *(v9 - 13) = v26;
        v28 = v6 + v6 + v26;
        *(v9 - 12) = v27;
        v29 = v6 + v28;
        *(v9 - 11) = v28;
        v30 = v6 + v6 + v28;
        *(v9 - 10) = v29;
        v31 = v6 + v30;
        *(v9 - 9) = v30;
        v32 = v6 + v6 + v30;
        *(v9 - 8) = v31;
        v33 = v6 + v32;
        *(v9 - 7) = v32;
        v34 = v6 + v6 + v32;
        *(v9 - 6) = v33;
        v35 = v6 + v34;
        *(v9 - 5) = v34;
        v36 = v6 + v6 + v34;
        *(v9 - 4) = v35;
        *(v9 - 3) = v36;
        *(v9 - 2) = v6 + v36;
        v37 = v6 + v6 + v36;
        *(v9 - 1) = v37;
        v7 = v6 + v37;
      }
      while ( v8 != (((unsigned __int8)v2 - 33) & 0xFFFFFFE0) + 32 );
    }
    v38 = &v5[v8 - 1];
    v39 = v8 * v6;
    do
    {
      ++v8;
      *++v38 = v39;
      v39 += v6;
    }
    while ( (unsigned __int8)v2 > v8 );
  }
  *v5 = rand();
  *(_DWORD *)(a1 + 240) = v4;
  (*(void (__fastcall **)(int, _DWORD, int))(a1 + 144))(a1, *(_DWORD *)(a1 + 296), v2);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v77, 0x1000u, 0, "get addr after open cores and set frequency.");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_dcr/backend_dcr.c",
    154,
    "setup_all_chip_dcr",
    18,
    263,
    60,
    &v77);
  v51 = *(_DWORD *)(a1 + 192);
  v52 = 3;
  while ( 1 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw((char *)&v77, 0x1000u, 0, "get_addr %s chip_no %d", "ChipSetting_get_addr_DCR", v51);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/chip_setting.c",
      143,
      "ChipSetting_get_addr_DCR",
      24,
      26,
      20,
      &v77);
    v55 = 1;
    v53 = 0;
    v54 = 0;
    v56 = 0;
    ptr = calloc(12 * v51, 1u);
    (*(void (__fastcall **)(int, int *, unsigned int))(a1 + 172))(a1, &v53, v51);
    pthread_mutex_lock(&stru_1A8A24);
    v40 = *(_DWORD *)(a1 + 136);
    v71 = (unsigned int)"chain" | 0x500000000LL;
    v72 = 3;
    v75 = 0;
    v74 = v40;
    ++dword_1A8A20[0];
    logfmt_raw(
      (char *)&v77,
      0x1000u,
      0,
      v76,
      "chain",
      5,
      3,
      v73,
      (__int64)v40,
      0,
      v76,
      "%s detect %d chips",
      "ChipSetting_get_addr_DCR",
      0);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/chip_setting.c",
      143,
      "ChipSetting_get_addr_DCR",
      24,
      36,
      60,
      &v77);
    if ( *(int *)(a1 + 192) > 0 )
    {
      pthread_mutex_lock(&stru_1A8A24);
      HIDWORD(v41) = 5;
      v58 = 5;
      v59 = 0;
      v60 = 0;
      v62 = 0;
      v64 = 0;
      v57 = "error";
      v61 = "asic num error";
      v42 = *(_DWORD *)(a1 + 136);
      v63 = 14;
      LODWORD(v41) = "chain";
      v69 = 0;
      v65 = v41;
      v68 = v42;
      dword_1A8A20[0] += 2;
      v66 = 3;
      logfmt_raw(
        (char *)&v77,
        0x1000u,
        0,
        v70,
        v41,
        3,
        v67,
        (__int64)v42,
        0,
        v70,
        "error",
        5,
        0,
        0,
        "asic num error",
        0,
        14,
        0,
        "detected asic num less than design");
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/chip_setting.c",
        143,
        "ChipSetting_get_addr_DCR",
        24,
        54,
        100,
        &v77);
    }
    free(ptr);
    *(_DWORD *)(a1 + 236) = 0;
    usleep(0x2710u);
    v43 = *(_DWORD *)(a1 + 236);
    if ( v51 <= v43 )
      break;
    if ( !--v52 )
      return 3;
  }
  if ( v51 != v43 )
    return 3;
  v79 = 6291457;
  v78 = 0;
  v80 = 0;
  v45 = 0;
  v77 = 48;
  (*(void (__fastcall **)(int, int *))(a1 + 152))(a1, &v77);
  v79 = 524289;
  v80 = 255;
  v78 = 0;
  v77 = 0;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v77);
  usleep((__useconds_t)&stru_18694.st_info);
  chip_setting_ticket_value_dcr(a1, 255);
  v54 = 0;
  v56 = 0;
  v55 = 1835009;
  v53 = 5381904;
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v77, 0x1000u, 0, "set_misc value %08x", v53);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_dcr/chip_setting_dcr.c",
    159,
    "chip_setting_misc_dcr",
    21,
    93,
    60,
    &v77);
  (*(void (__fastcall **)(int, int *))(a1 + 152))(a1, &v53);
  v46 = (char *)calloc(1u, 0x118u);
  do
  {
    v47 = *(void (__fastcall **)(int, int *))(a1 + 156);
    v77 = 23130;
    v79 = 131073;
    v78 = 0;
    v80 = (unsigned __int8)v45++;
    v47(a1, &v77);
    usleep((__useconds_t)&stru_18694.st_info);
    usleep(0x4E20u);
    v48 = *(_BYTE *)(a1 + 132);
    v49 = rand();
    memset(v46 + 40, (unsigned __int8)(v48 + v49), 0xB4u);
    push_work_base(a1, (int)v46);
    usleep((__useconds_t)&loc_3D090);
  }
  while ( v45 != 192 );
  free(v46);
  result = *(unsigned __int8 *)(a1 + 268);
  if ( *(_BYTE *)(a1 + 268) )
    return 0;
  *(_DWORD *)(a1 + 272) = (int)*(float *)(a1 + 760);
  return result;
}
