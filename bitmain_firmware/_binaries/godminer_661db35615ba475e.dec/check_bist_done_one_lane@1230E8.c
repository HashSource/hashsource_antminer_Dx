int __fastcall check_bist_done_one_lane(int a1, int a2, int a3, int a4)
{
  int v7; // r0
  _QWORD *v8; // r4
  _QWORD *v9; // r9
  int v10; // r0
  int v11; // r12
  int v12; // r2
  int v13; // r3
  int v15; // [sp+14h] [bp-1048h]
  _BYTE v16[20]; // [sp+18h] [bp-1044h] BYREF
  _QWORD v17[5]; // [sp+2Ch] [bp-1030h] BYREF
  char v18[4100]; // [sp+58h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v18, 0x1000u, 0, "%s...", "check_bist_done_one_lane");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_bist_done_one_lane",
    24,
    9025,
    60,
    v18);
  v7 = sub_13415C(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x11, (int)v16);
  if ( v7 > 0 )
  {
    v8 = v17;
    v9 = &v17[v7];
    do
    {
      v13 = *((_DWORD *)v8 - 4);
      __pld(v8);
      if ( (v13 & 0x20000) != 0 || (v13 & 0x400) == 0 )
      {
        pthread_mutex_lock(&stru_197BB8);
        logfmt_raw(
          v18,
          0x1000u,
          0,
          "channel %1x, chip_id %02x core_id %02x bist error",
          a4,
          *((unsigned __int8 *)v8 - 20),
          *((unsigned __int8 *)v8 - 19));
        pthread_mutex_unlock(&stru_197BB8);
        v10 = g_zc;
        v11 = 100;
        v12 = 9034;
      }
      else
      {
        v15 = v13 & 0x20000;
        pthread_mutex_lock(&stru_197BB8);
        logfmt_raw(
          v18,
          0x1000u,
          v15,
          "channel %1x, chip_id %02x core_id %02x bist done",
          a4,
          *((unsigned __int8 *)v8 - 20),
          *((unsigned __int8 *)v8 - 19));
        pthread_mutex_unlock(&stru_197BB8);
        v10 = g_zc;
        v11 = 60;
        v12 = 9031;
      }
      ++v8;
      zlog(
        v10,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_eth/backend_eth.c",
        154,
        "check_bist_done_one_lane",
        24,
        v12,
        v11,
        v18);
    }
    while ( v8 != v9 );
  }
  return 0;
}
