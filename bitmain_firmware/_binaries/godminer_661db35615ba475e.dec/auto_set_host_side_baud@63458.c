int auto_set_host_side_baud()
{
  int *v0; // r6
  int v1; // r9
  int v2; // t1
  int v3; // r8
  void *v4; // r7
  int v6; // [sp+4h] [bp-1040h]
  _DWORD v7[8]; // [sp+1Ch] [bp-1028h] BYREF
  int v8; // [sp+3Ch] [bp-1008h] BYREF
  _DWORD v9[1025]; // [sp+40h] [bp-1004h] BYREF

  v0 = v7;
  v7[1] = 38400;
  v7[2] = 115200;
  v7[3] = 460800;
  v7[4] = 921600;
  v7[5] = byte_17D784;
  v7[6] = 3125000;
  v7[7] = 6250000;
  v8 = 12500000;
  pthread_mutex_lock(&stru_190E30);
  pthread_mutex_unlock(&stru_190E30);
  while ( 1 )
  {
    v2 = v0[1];
    ++v0;
    v1 = v2;
    off_18F4D0(v2);
    v3 = dword_190E4C[0];
    v9[2] = 1;
    v9[0] = 0;
    v9[1] = 0;
    v9[3] = 0;
    v4 = calloc(0x100u, 0xCu);
    v7[0] = 0;
    (*(void (__fastcall **)(int, _DWORD *, int, void *, _DWORD *, int, int, _DWORD))(v3 + 160))(
      v3,
      v9,
      256,
      v4,
      v7,
      v6,
      2000,
      0);
    free(v4);
    if ( v7[0] )
      break;
    if ( v0 == &v8 )
    {
      V_LOCK();
      logfmt_raw((char *)v9, 0x1000u, 0, "chip baud detected fail");
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
        v9);
      return -1;
    }
  }
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)v9, 0x1000u, 0, "chip baud detected as %d", v1);
  pthread_mutex_unlock(&stru_197BB8);
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
