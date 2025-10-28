int __fastcall dhash_start_eth(int a1)
{
  int result; // r0
  _DWORD v3[7]; // [sp+28h] [bp-20h] BYREF
  int v4; // [sp+44h] [bp-4h]
  char v5[4100]; // [sp+48h] [bp+0h] BYREF

  V_LOCK();
  V_INT((int)v3, "chain", *(int *)(a1 + 216));
  logfmt_raw(v5, 0x1000u, 0, v4, v3[0], v3[1], v3[2], v3[3], v3[4], v3[5], v3[6], v4, "%s start", "dhash_start_eth");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    170,
    "dhash_start_eth",
    15,
    1028,
    40,
    v5);
  result = 0;
  if ( !*(_BYTE *)(a1 + 420) )
    *(_DWORD *)(a1 + 424) = (int)*(float *)(a1 + 916);
  return result;
}
