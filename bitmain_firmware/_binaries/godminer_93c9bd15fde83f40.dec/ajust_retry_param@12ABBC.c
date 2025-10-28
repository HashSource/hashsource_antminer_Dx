int __fastcall ajust_retry_param(int a1, char a2, int a3)
{
  unsigned int v7; // r3
  char v8; // r2
  char v9[4]; // [sp+10h] [bp-1000h] BYREF
  unsigned int v10; // [sp+14h] [bp-FFCh]

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v9, 0x1000u, 0, 1560772, "ajust_retry_param");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "ajust_retry_param",
    17,
    8725,
    60,
    v9);
  if ( !serdes_apb_read_back_1_chip(a1, a2, a3, 0x8023u, (int)v9) )
    return 0;
  if ( v10 > 0xFA )
  {
    serdes_apb_write_1_chip(a1, a2, a3, 32769, 0xFFC00FFF);
    v7 = 0x2000;
    v8 = a3;
  }
  else
  {
    if ( v10 > 9 )
      return 0;
    serdes_apb_write_1_chip(a1, a2, a3, 32769, 0xFFC00FFF);
    v7 = 4186112;
    v8 = a3;
  }
  serdes_apb_write_1_chip(a1, a2, v8, 32801, v7);
  return 0;
}
