int __fastcall check_bist_tx_running_one_lane(int a1, int a2, int a3, int a4)
{
  int v7; // r0
  _QWORD *v8; // r4
  _QWORD *v9; // r9
  int v10; // r0
  int v11; // r12
  int v12; // r2
  int v13; // r2
  _BYTE v15[20]; // [sp+18h] [bp-1044h] BYREF
  _QWORD v16[5]; // [sp+2Ch] [bp-1030h] BYREF
  char v17[4100]; // [sp+58h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v17, 0x1000u, 0, 1560772, "check_bist_tx_running_one_lane");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_bist_tx_running_one_lane",
    30,
    8928,
    60,
    v17);
  v7 = sub_C20C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x4A, (int)v15);
  if ( v7 > 0 )
  {
    v8 = v16;
    v9 = &v16[v7];
    do
    {
      v13 = *((_DWORD *)v8 - 4);
      __pld(v8);
      if ( (v13 & 0x200) != 0 )
      {
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw(v17, 0x1000u, 0, 1542580, a4, *((unsigned __int8 *)v8 - 20), *((unsigned __int8 *)v8 - 19));
        pthread_mutex_unlock(&stru_1A8A24);
        v10 = g_zc;
        v11 = 60;
        v12 = 8934;
      }
      else
      {
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw(
          v17,
          0x1000u,
          0,
          1542640,
          a4,
          *((unsigned __int8 *)v8 - 20),
          *((unsigned __int8 *)v8 - 19),
          *((_DWORD *)v8 - 4));
        pthread_mutex_unlock(&stru_1A8A24);
        v10 = g_zc;
        v11 = 100;
        v12 = 8937;
      }
      ++v8;
      zlog(
        v10,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_eth/backend_eth.c",
        154,
        "check_bist_tx_running_one_lane",
        30,
        v12,
        v11,
        v17);
    }
    while ( v8 != v9 );
  }
  return 0;
}
