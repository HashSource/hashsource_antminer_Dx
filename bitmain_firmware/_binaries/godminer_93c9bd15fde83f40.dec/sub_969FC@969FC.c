int __fastcall sub_969FC(int a1)
{
  int v2; // r0
  int v3; // r5
  __int16 v4; // r3
  char v6[18]; // [sp+10h] [bp-1820h] BYREF
  int v7; // [sp+22h] [bp-180Eh]
  __int16 v8; // [sp+26h] [bp-180Ah]
  char v9[2048]; // [sp+30h] [bp-1800h] BYREF
  char v10[4096]; // [sp+830h] [bp-1000h] BYREF

  v2 = socket(2, 1, 0);
  v3 = v2;
  if ( v2 < 0 )
  {
    strcpy(v9, "error sock");
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, v9);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_common.c",
      167,
      "get_eth_mac",
      11,
      128,
      100,
      v10);
    return -1;
  }
  else
  {
    strcpy(v6, "eth0");
    if ( ioctl(v2, 0x8927u, v6) < 0 )
    {
      strcpy(v9, "error ioctl");
      V_LOCK();
      logfmt_raw(v10, 0x1000u, 0, v9);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_common.c",
        167,
        "get_eth_mac",
        11,
        134,
        100,
        v10);
      close(v3);
      return -2;
    }
    else
    {
      v4 = v8;
      *(_DWORD *)a1 = v7;
      *(_WORD *)(a1 + 4) = v4;
      close(v3);
      return 0;
    }
  }
}
