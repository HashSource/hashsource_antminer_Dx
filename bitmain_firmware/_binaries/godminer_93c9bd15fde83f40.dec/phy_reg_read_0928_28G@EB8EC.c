int __fastcall phy_reg_read_0928_28G(int a1, int a2, _BYTE *a3, int a4)
{
  int v8; // r6
  __int16 v9; // r2
  int v10; // r7
  __int16 v11; // r2
  int v12; // r10
  unsigned __int16 v13; // r6
  int v14; // r6
  char v16[4096]; // [sp+10h] [bp+0h] BYREF

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v16, 0x1000u, 0, 1560680, "phy_reg_read_0928_28G", a2, a3);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "phy_reg_read_0928_28G",
    21,
    2387,
    60,
    v16);
  sub_C1EE0(a1, a3, 0xF013u);
  sub_C1EE0(a1, a3, 0xF014u);
  sub_C1EE0(a1, a3, 0xF015u);
  sub_C1EE0(a1, a3, 0xF016u);
  sub_C1EE0(a1, a3, 0xF017u);
  sub_C1EE0(a1, a3, 0xF016u);
  sub_C1EE0(a1, a3, 0xF017u);
  sub_C1EE0(a1, a3, 0xF017u);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -67108865);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147422207);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147422150);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -67108865);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147422207);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0x4000000);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147422150);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -67108865);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147422207);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147422150);
  if ( a4 )
  {
    v8 = 0;
    do
    {
      v9 = (_WORD)v8++ << 12;
      sub_C1EE0(a1, a3, v9 & 0xF000 | 0x6A);
    }
    while ( (unsigned __int8)(a4 - 1) + 1 != v8 );
    sub_DAF1C(a1, (unsigned __int8)a3, 144, -129);
    v10 = 0;
    sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
    sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_DAF1C(a1, (unsigned __int8)a3, 144, -129);
    sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_DAF1C(a1, (unsigned __int8)a3, 144, 128);
    sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_DAF1C(a1, (unsigned __int8)a3, 144, -129);
    sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
    sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147422113);
    do
    {
      v11 = (_WORD)v10++ << 12;
      sub_C1EE0(a1, a3, v11 & 0xF000 | 0x98);
    }
    while ( v8 != v10 );
  }
  else
  {
    sub_DAF1C(a1, (unsigned __int8)a3, 144, -129);
    sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
    sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_DAF1C(a1, (unsigned __int8)a3, 144, -129);
    sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_DAF1C(a1, (unsigned __int8)a3, 144, 128);
    sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147422113);
    sub_DAF1C(a1, (unsigned __int8)a3, 144, -129);
    sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147422207);
    sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
    sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147422113);
  }
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -17);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450842);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -17);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 16);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450842);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -17);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450842);
  sub_C1EE0(a1, a3, 0x8024u);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -2097153);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450845);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -2097153);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0x200000);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450845);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, -2097153);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450845);
  sub_C1EE0(a1, a3, 0x8026u);
  if ( a4 )
  {
    v12 = 0;
    do
    {
      v13 = (_WORD)v12++ << 12;
      sub_C1EE0(a1, a3, v13 & 0xF000 | 0x46);
      sub_C1EE0(a1, a3, v13 | 0x4A);
      sub_C1EE0(a1, a3, v13 | 0x4A);
      sub_C1EE0(a1, a3, v13 | 0x4B);
      sub_C1EE0(a1, a3, v13 | 0x4B);
      sub_C1EE0(a1, a3, v13 & 0xF000 | 0x56);
      sub_C1EE0(a1, a3, v13 | 0x4B);
      sub_C1EE0(a1, a3, v13 & 0xF000 | 0x1A);
    }
    while ( (unsigned __int8)(a4 - 1) + 1 != v12 );
    sub_DAF1C(a1, (unsigned __int8)a3, 144, -67108865);
    LOBYTE(v14) = 0;
    sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
    sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
    sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450815);
    sub_DAF1C(a1, (unsigned __int8)a3, 144, -67108865);
    sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
    sub_DAF1C(a1, (unsigned __int8)a3, 144, 0x4000000);
    sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450815);
    sub_DAF1C(a1, (unsigned __int8)a3, 144, -67108865);
    sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
    sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
    sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450815);
    do
    {
      v14 = (unsigned __int8)(v14 + 1);
      sub_C1EE0(a1, a3, 0x805Fu);
    }
    while ( a4 != v14 );
  }
  else
  {
    sub_DAF1C(a1, (unsigned __int8)a3, 144, -67108865);
    sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
    sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
    sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450815);
    sub_DAF1C(a1, (unsigned __int8)a3, 144, -67108865);
    sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
    sub_DAF1C(a1, (unsigned __int8)a3, 144, 0x4000000);
    sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450815);
    sub_DAF1C(a1, (unsigned __int8)a3, 144, -67108865);
    sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
    sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
    sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450815);
  }
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147422207);
  sub_DAF1C(a1, (unsigned __int8)a3, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a3, 145, -2147450879);
  return 0;
}
