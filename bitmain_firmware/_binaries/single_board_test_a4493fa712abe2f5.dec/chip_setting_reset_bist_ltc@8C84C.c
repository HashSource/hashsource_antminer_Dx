int __fastcall chip_setting_reset_bist_ltc(int a1, int a2, int a3, int a4, int a5)
{
  int v8; // r10
  int v9; // r2
  int v10; // r9
  int v11; // r4
  int v12; // r6
  int v13; // r2
  int v14; // r0
  char v16; // r1
  int v17; // r0
  int v18; // r1
  char v19; // r2
  int v20; // r0
  char v21; // r2
  int v22; // r1
  int v25; // [sp+20h] [bp-1014h] BYREF
  int v26; // [sp+24h] [bp-1010h]
  int v27; // [sp+28h] [bp-100Ch]
  int v28; // [sp+2Ch] [bp-1008h]
  char var1004[4112]; // [sp+30h] [bp-1004h] BYREF

  v8 = a5;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(var1004, 0x1000u, 0, "%s", "chip_setting_reset_bist_ltc");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_ltc/chip_setting_ltc.c",
    76,
    "chip_setting_reset_bist_ltc",
    27,
    237,
    40,
    var1004);
  if ( !a4 )
  {
    v25 = 0;
    v10 = a5;
    v26 = 0;
    v28 = 0;
    v27 = (unsigned __int8)a2;
    LOBYTE(v9) = *(_BYTE *)(a1 + 184);
    if ( a2 )
    {
      BYTE1(v28) = *(_BYTE *)(a1 + 184);
      v10 = a5;
      goto LABEL_6;
    }
    goto LABEL_12;
  }
  v9 = *(_DWORD *)(a1 + 184);
  v25 = 0;
  v8 = v9 - 1;
  v26 = 0;
  v28 = 0;
  v27 = (unsigned __int8)a2;
  if ( !a2 )
  {
    v10 = 0;
LABEL_12:
    v16 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + a3);
    BYTE1(v28) = v9;
    BYTE1(v27) = v16;
    if ( v8 >= v10 )
      goto LABEL_6;
    usleep(0x2710u);
    v17 = *(_DWORD *)(a1 + 280);
    v25 = 0;
    v18 = *(_DWORD *)(a1 + 184);
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v19 = *(_BYTE *)(v17 + a3);
    BYTE1(v28) = v18;
    BYTE1(v27) = v19;
    goto LABEL_14;
  }
  BYTE1(v27) = 0;
  BYTE1(v28) = v9;
  if ( v8 >= 0 )
  {
    v10 = 0;
LABEL_6:
    v11 = v10;
    while ( 1 )
    {
      v25 = 1024;
      HIWORD(v27) = 0;
      LOBYTE(v28) = v11;
      HIWORD(v28) = 0;
      v12 = (*(int (__fastcall **)(int, int *))(a1 + 144))(a1, &v25);
      if ( v12 )
        break;
      ++v11;
      usleep(0x3E8u);
      if ( v11 > v8 )
      {
        usleep(0x2710u);
        v25 = 0;
        v26 = 0;
        v28 = 0;
        v27 = (unsigned __int8)a2;
        if ( a2 )
        {
          BYTE1(v28) = *(_DWORD *)(a1 + 184);
          goto LABEL_21;
        }
        v21 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + a3);
        BYTE1(v28) = *(_DWORD *)(a1 + 184);
        BYTE1(v27) = v21;
        if ( v10 > v8 )
          goto LABEL_14;
LABEL_21:
        while ( 1 )
        {
          v25 = 37888;
          HIWORD(v27) = 0;
          LOBYTE(v28) = v10;
          HIWORD(v28) = 0;
          v20 = (*(int (__fastcall **)(int, int *))(a1 + 144))(a1, &v25);
          if ( v20 )
            break;
          ++v10;
          usleep(0x3E8u);
          if ( v10 > v8 )
            goto LABEL_14;
        }
        v12 = v20;
        pthread_mutex_lock(&stru_3B526C);
        logfmt_raw(
          var1004,
          0x1000u,
          0,
          "%s failed, reg:%02x, core_id:%d",
          "chip_setting_reset_bist_ltc",
          HIWORD(v27),
          v10);
        pthread_mutex_unlock(&stru_3B526C);
        v13 = 282;
        v14 = g_zc;
LABEL_10:
        zlog(
          v14,
          "/home/xingfei.wang/work/1764/godminer/backend/backend_ltc/chip_setting_ltc.c",
          76,
          "chip_setting_reset_bist_ltc",
          27,
          v13,
          100,
          var1004);
        return v12;
      }
    }
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(var1004, 0x1000u, 0, "%s failed, reg:%02x, core_id:%d", "chip_setting_reset_bist_ltc", HIWORD(v27), v11);
    pthread_mutex_unlock(&stru_3B526C);
    v13 = 260;
    v14 = g_zc;
    goto LABEL_10;
  }
  usleep(0x2710u);
  v22 = *(_DWORD *)(a1 + 184);
  v27 = 1;
  v28 = 0;
  v25 = 0;
  BYTE1(v28) = v22;
  v26 = 0;
LABEL_14:
  usleep(0x2710u);
  return 0;
}
