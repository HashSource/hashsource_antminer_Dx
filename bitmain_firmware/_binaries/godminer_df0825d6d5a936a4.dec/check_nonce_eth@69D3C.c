int __fastcall check_nonce_eth(int a1, int a2)
{
  int v2; // r5
  unsigned int v4; // r10
  unsigned int v5; // r5
  int v7; // [sp+Ch] [bp-4h]
  int v8; // [sp+10h] [bp+0h]
  int v9; // [sp+14h] [bp+4h]
  int v10; // [sp+1Ch] [bp+Ch]
  int v11; // [sp+20h] [bp+10h]
  int v12; // [sp+24h] [bp+14h]
  int v13; // [sp+28h] [bp+18h]
  int v14; // [sp+2Ch] [bp+1Ch]
  int v15; // [sp+30h] [bp+20h]
  int v16; // [sp+34h] [bp+24h]
  int v17; // [sp+38h] [bp+28h]
  int v18; // [sp+3Ch] [bp+2Ch]
  int v19; // [sp+40h] [bp+30h]
  int v20; // [sp+44h] [bp+34h]
  int v21; // [sp+48h] [bp+38h]
  int v22; // [sp+4Ch] [bp+3Ch]
  int v23; // [sp+50h] [bp+40h]
  int v24; // [sp+54h] [bp+44h]
  _BYTE v25[32]; // [sp+58h] [bp+48h] BYREF
  _DWORD v26[1025]; // [sp+78h] [bp+68h] BYREF

  v2 = *(_DWORD *)(a1 + 776);
  v10 = *(_DWORD *)(a2 + 38);
  v11 = *(_DWORD *)(a2 + 42);
  v12 = *(_DWORD *)(a2 + 46);
  v13 = *(_DWORD *)(a2 + 50);
  v14 = *(_DWORD *)(a2 + 54);
  v15 = *(_DWORD *)(a2 + 58);
  v16 = *(_DWORD *)(a2 + 62);
  v17 = *(_DWORD *)(a2 + 98);
  v18 = *(_DWORD *)(a2 + 102);
  v19 = *(_DWORD *)(a2 + 106);
  v20 = *(_DWORD *)(a2 + 110);
  v21 = *(_DWORD *)(a2 + 114);
  v22 = *(_DWORD *)(a2 + 118);
  v23 = *(_DWORD *)(a2 + 122);
  v24 = *(_DWORD *)(a2 + 126);
  v8 = *(_DWORD *)(a2 + 26);
  v9 = *(_DWORD *)(a2 + 30);
  v26[0] = *(_DWORD *)(a2 + 34);
  v26[1] = v10;
  v26[2] = v11;
  v26[3] = v12;
  v26[4] = v13;
  v26[5] = v14;
  v26[6] = v15;
  v26[7] = v16;
  v26[8] = v8;
  v26[9] = v9;
  eth_sha3_512((int)v26, 0x40u, (int)v26, 0x28u);
  v26[16] = v17;
  v26[17] = v18;
  v26[18] = v19;
  v26[19] = v20;
  v26[20] = v21;
  v26[21] = v22;
  v26[22] = v23;
  v26[23] = v24;
  eth_sha3_256((int)v25, 0x20u, (int)v26, 0x60u);
  v4 = target_to_diff_eth((int)v25);
  v5 = *(unsigned __int8 *)(v2 + *(unsigned __int8 *)(a2 + 16) + 34816);
  V_LOCK();
  logfmt_raw((char *)v26, 0x1000u, 0, "%s, target diff: %02d, expect diff: %02d", "check_nonce_eth", v4, v5, v7, v8, v9);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    170,
    "check_nonce_eth",
    15,
    1151,
    20,
    v26);
  if ( v4 <= 0x1F )
  {
    V_LOCK();
    logfmt_raw(
      (char *)v26,
      0x1000u,
      0,
      "hw error calculate diff %d ans diff %d TICKET_MASK_ETH %d",
      v4,
      *(unsigned __int8 *)(a2 + 17),
      32);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
      170,
      "check_nonce_eth",
      15,
      1189,
      20,
      v26);
    return 2;
  }
  else if ( v4 < v5 )
  {
    V_LOCK();
    logfmt_raw((char *)v26, 0x1000u, 0, "hw diff (%d<%d) not reach pool", v4, v5);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
      170,
      "check_nonce_eth",
      15,
      1195,
      20,
      v26);
    return 1;
  }
  else
  {
    return 0;
  }
}
