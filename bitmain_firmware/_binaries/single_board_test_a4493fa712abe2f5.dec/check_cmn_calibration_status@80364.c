int __fastcall check_cmn_calibration_status(int a1, int a2, int a3)
{
  _WORD *v4; // r5
  int v5; // r8
  int v6; // r4
  int v7; // t1
  int v8; // r3
  char *v9; // r2
  _DWORD v12[4]; // [sp+1Ch] [bp-1058h] BYREF
  __int16 v13; // [sp+2Ch] [bp-1048h] BYREF
  _BYTE v14[4]; // [sp+30h] [bp-1044h] BYREF
  int v15; // [sp+34h] [bp-1040h]
  char v16[4100]; // [sp+70h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v16, 0x1000u, 0, "%s...", "check_cmn_calibration_status");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "check_cmn_calibration_status",
    28,
    8570,
    60,
    v16);
  v12[1] = 100991489;
  v12[2] = 235735561;
  v12[3] = 134677248;
  v12[0] = 0;
  v13 = 3851;
  do
  {
    v4 = (_WORD *)((char *)v12 + 3);
    v5 = 16 * v12[0];
    do
    {
      while ( 1 )
      {
        v7 = *((unsigned __int8 *)v4 + 1);
        v4 = (_WORD *)((char *)v4 + 1);
        v6 = v7;
        v8 = a3 + v7;
        if ( v7 != 3 )
        {
          if ( *(_BYTE *)(v8 + v5) )
          {
            pthread_mutex_lock(&stru_3B526C);
            logfmt_raw(v16, 0x1000u, 0, "%s...", "check_cmn_calibration_status_1_phy");
            pthread_mutex_unlock(&stru_3B526C);
            zlog(
              g_zc,
              "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
              71,
              "check_cmn_calibration_status_1_phy",
              34,
              8556,
              60,
              v16);
            if ( serdes_apb_read_back_1_chip(a1, v12[0], v6, 0x801Du, (int)v14) )
              break;
          }
        }
        if ( v4 == (__int16 *)((char *)&v13 + 1) )
          goto LABEL_10;
      }
      pthread_mutex_lock(&stru_3B526C);
      v9 = "not ready";
      if ( (v15 & 0x8000) != 0 )
        v9 = "done";
      logfmt_raw(v16, 0x1000u, 0, "chip_id %02x core_id %02x cmn clibration %08x", v14[0], v14[1], v15, v9);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
        71,
        "check_cmn_calibration_status_1_phy",
        34,
        8562,
        60,
        v16);
    }
    while ( v4 != (__int16 *)((char *)&v13 + 1) );
LABEL_10:
    ++v12[0];
  }
  while ( v12[0] != 8 );
  return 0;
}
