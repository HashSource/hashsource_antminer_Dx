int auto_set_host_side_baud()
{
  char *v0; // r6
  char *v1; // r9
  char *v2; // t1
  int v3; // r8
  void *v4; // r7
  int v6; // [sp+4h] [bp-1030h]
  int v7; // [sp+14h] [bp-1020h] BYREF
  _DWORD v8[6]; // [sp+18h] [bp-101Ch] BYREF
  _DWORD v9[1025]; // [sp+30h] [bp-1004h] BYREF

  v0 = (char *)v8;
  v8[0] = "r";
  v8[1] = 460800;
  v8[2] = 1562500;
  v8[3] = 3125000;
  v8[4] = 6250000;
  v8[5] = 12500000;
  pthread_mutex_lock(&stru_1A9B48);
  pthread_mutex_unlock(&stru_1A9B48);
  while ( 1 )
  {
    v2 = *(char **)v0;
    v0 += 4;
    v1 = v2;
    off_1A2B7C(v2);
    v3 = dword_1A9B64[0];
    v9[2] = 1;
    v9[0] = 0;
    v9[1] = 0;
    v9[3] = 0;
    v4 = calloc(0x100u, 0xCu);
    v7 = 0;
    (*(void (__fastcall **)(int, _DWORD *, int, void *, int *, int, int, _DWORD))(v3 + 172))(
      v3,
      v9,
      256,
      v4,
      &v7,
      v6,
      2000,
      0);
    free(v4);
    if ( v7 )
      break;
    if ( v0 == (char *)v9 )
    {
      V_LOCK();
      logfmt_raw(v0, 0x1000u, 0, "chip baud detected fail");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/set_baud.c",
        142,
        "auto_set_host_side_baud",
        23,
        29,
        100,
        v0);
      return -1;
    }
  }
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)v9, 0x1000u, 0, "chip baud detected as %d", v1);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/miner_util/set_baud.c",
    142,
    "auto_set_host_side_baud",
    23,
    24,
    40,
    v9);
  return 0;
}
