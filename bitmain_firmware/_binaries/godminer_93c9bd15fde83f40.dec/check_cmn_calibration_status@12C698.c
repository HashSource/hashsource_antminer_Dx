int __fastcall check_cmn_calibration_status(int a1, int a2, int a3)
{
  int *v4; // r3
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r3
  int v10; // r8
  _WORD *v11; // r5
  int v12; // r4
  int v13; // t1
  int v14; // r3
  char *v15; // r2
  char v17; // [sp+10h] [bp-60h]
  _DWORD v19[4]; // [sp+1Ch] [bp-54h] BYREF
  __int16 v20; // [sp+2Ch] [bp-44h] BYREF
  _BYTE v21[4]; // [sp+30h] [bp-40h] BYREF
  int v22; // [sp+34h] [bp-3Ch]
  char v23[4100]; // [sp+70h] [bp+0h] BYREF

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v23, 0x1000u, 0, 1560772, "check_cmn_calibration_status");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_cmn_calibration_status",
    28,
    8570,
    60,
    v23);
  LOWORD(v4) = -15620;
  HIWORD(v4) = (unsigned int)" = %d.\n" >> 16;
  v5 = *v4;
  v6 = v4[1];
  v7 = v4[2];
  v8 = v4[3];
  v19[0] = 0;
  v19[1] = v5;
  v19[2] = v6;
  v19[3] = v7;
  v20 = v8;
  v9 = 0;
  do
  {
    v10 = 16 * v9;
    v17 = v9;
    v11 = (_WORD *)((char *)v19 + 3);
    do
    {
      while ( 1 )
      {
        v13 = *((unsigned __int8 *)v11 + 1);
        v11 = (_WORD *)((char *)v11 + 1);
        v12 = v13;
        v14 = a3 + v13;
        if ( v13 != 3 )
        {
          if ( *(_BYTE *)(v14 + v10) )
          {
            pthread_mutex_lock(&stru_1A8A24);
            logfmt_raw(v23, 0x1000u, 0, "%s...", "check_cmn_calibration_status_1_phy");
            pthread_mutex_unlock(&stru_1A8A24);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_cmn_calibration_status_1_phy",
              34,
              8556,
              60,
              v23);
            if ( serdes_apb_read_back_1_chip(a1, v17, v12, 0x801Du, (int)v21) )
              break;
          }
        }
        if ( v11 == (__int16 *)((char *)&v20 + 1) )
          goto LABEL_10;
      }
      pthread_mutex_lock(&stru_1A8A24);
      v15 = "not ready";
      if ( (v22 & 0x8000) != 0 )
        v15 = "channel %1x, chip_id %02x core_id %02x bist done" + 44;
      logfmt_raw(v23, 0x1000u, 0, 1614436, v21[0], v21[1], v22, v15);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_eth/backend_eth.c",
        154,
        "check_cmn_calibration_status_1_phy",
        34,
        8562,
        60,
        v23);
    }
    while ( v11 != (__int16 *)((char *)&v20 + 1) );
LABEL_10:
    v9 = ++v19[0];
  }
  while ( v19[0] != 8 );
  return 0;
}
