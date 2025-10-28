int __fastcall check_cmn_calibration_status(int a1, int a2, int a3)
{
  int v4; // r3
  int v5; // r8
  _WORD *v6; // r5
  int v7; // r4
  int v8; // t1
  int v9; // r3
  char *v10; // r2
  char v12; // [sp+10h] [bp-60h]
  _DWORD v14[4]; // [sp+1Ch] [bp-54h] BYREF
  __int16 v15; // [sp+2Ch] [bp-44h] BYREF
  _BYTE v16[4]; // [sp+30h] [bp-40h] BYREF
  int v17; // [sp+34h] [bp-3Ch]
  char v18[4100]; // [sp+70h] [bp+0h] BYREF

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v18, 0x1000u, 0, "%s...", "check_cmn_calibration_status");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_cmn_calibration_status",
    28,
    8570,
    60,
    v18);
  v14[0] = 0;
  v14[1] = 100991489;
  v14[2] = 235735561;
  v14[3] = 134677248;
  v15 = 3851;
  v4 = 0;
  do
  {
    v5 = 16 * v4;
    v12 = v4;
    v6 = (_WORD *)((char *)v14 + 3);
    do
    {
      while ( 1 )
      {
        v8 = *((unsigned __int8 *)v6 + 1);
        v6 = (_WORD *)((char *)v6 + 1);
        v7 = v8;
        v9 = a3 + v8;
        if ( v8 != 3 )
        {
          if ( *(_BYTE *)(v9 + v5) )
          {
            pthread_mutex_lock(&stru_197BB8);
            logfmt_raw(v18, 0x1000u, 0, "%s...", "check_cmn_calibration_status_1_phy");
            pthread_mutex_unlock(&stru_197BB8);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_cmn_calibration_status_1_phy",
              34,
              8556,
              60,
              v18);
            if ( serdes_apb_read_back_1_chip(a1, v12, v7, 0x801Du, (int)v16) )
              break;
          }
        }
        if ( v6 == (__int16 *)((char *)&v15 + 1) )
          goto LABEL_10;
      }
      pthread_mutex_lock(&stru_197BB8);
      v10 = "not ready";
      if ( (v17 & 0x8000) != 0 )
        v10 = "done";
      logfmt_raw(v18, 0x1000u, 0, "chip_id %02x core_id %02x cmn clibration %08x", v16[0], v16[1], v17, v10);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_eth/backend_eth.c",
        154,
        "check_cmn_calibration_status_1_phy",
        34,
        8562,
        60,
        v18);
    }
    while ( v6 != (__int16 *)((char *)&v15 + 1) );
LABEL_10:
    v4 = ++v14[0];
  }
  while ( v14[0] != 8 );
  return 0;
}
