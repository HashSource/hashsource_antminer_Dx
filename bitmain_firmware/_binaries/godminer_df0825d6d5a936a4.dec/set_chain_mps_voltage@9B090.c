int __fastcall set_chain_mps_voltage(int a1, unsigned int a2)
{
  unsigned int v2; // r4
  int v4; // r9
  unsigned int v6; // r5
  unsigned __int16 v7; // [sp+16h] [bp-100Eh] BYREF
  _WORD src[4]; // [sp+18h] [bp-100Ch] BYREF
  char v9[4100]; // [sp+20h] [bp-1004h] BYREF

  v2 = 2500;
  if ( a2 < 0x92E )
    a2 = 2350;
  if ( a2 < 0x9C4 )
    v2 = a2;
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, 1334316, v2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/device/hal/drv_pic/mps2973.c",
    163,
    "set_chain_mps_voltage",
    21,
    205,
    40,
    v9);
  get_chain_mps_voltage(a1, &v7);
  v4 = v7;
  if ( v7 == v2 )
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, 1334344, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/device/hal/drv_pic/mps2973.c",
      163,
      "set_chain_mps_voltage",
      21,
      210,
      20,
      v9);
    return 0;
  }
  else if ( sub_9AE40(a1, 0)
         && (v6 = (v2 - 490) / 0xA, src[0] = (unsigned __int8)v6, sub_9ADE0(a1, 33, src, 2u))
         && sub_9AE40(a1, 2)
         && (src[0] = (32 * v6) | 0xC, sub_9ADE0(a1, 13, src, 2u)) )
  {
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, 1334380, a1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/device/hal/drv_pic/mps2973.c",
      163,
      "set_chain_mps_voltage",
      21,
      247,
      100,
      v9);
    return 1;
  }
}
