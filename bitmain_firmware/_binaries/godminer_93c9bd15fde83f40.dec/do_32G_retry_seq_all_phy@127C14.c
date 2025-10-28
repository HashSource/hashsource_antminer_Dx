int __fastcall do_32G_retry_seq_all_phy(int a1, int a2, unsigned __int8 a3)
{
  char v6[4100]; // [sp+10h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v6, 0x1000u, 0, 1560772, 1612360);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "do_32G_retry_seq_all_phy",
    24,
    8605,
    60,
    v6);
  sub_DAF1C(a1, a3, 144, -131073);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0x20000);
  sub_DAF1C(a1, a3, 145, -2147450850);
  sub_DAF1C(a1, a3, 144, -536870913);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0x20000000);
  sub_DAF1C(a1, a3, 145, -2147450852);
  sub_DAF1C(a1, a3, 144, -131073);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0);
  sub_DAF1C(a1, a3, 145, -2147450850);
  sub_DAF1C(a1, a3, 144, -536870913);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0);
  sub_DAF1C(a1, a3, 145, -2147450852);
  sub_DAF1C(a1, a3, 144, -134217729);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0x8000000);
  sub_DAF1C(a1, a3, 145, -2147450851);
  sub_DAF1C(a1, a3, 144, -134217729);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0);
  sub_DAF1C(a1, a3, 145, -2147450851);
  sub_DAF1C(a1, a3, 144, -8388609);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0x800000);
  sub_DAF1C(a1, a3, 145, -2147450807);
  sub_DAF1C(a1, a3, 144, -33554433);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0);
  sub_DAF1C(a1, a3, 145, -2147450803);
  sub_DAF1C(a1, a3, 144, -33554433);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0x2000000);
  sub_DAF1C(a1, a3, 145, -2147450803);
  sub_DAF1C(a1, a3, 144, -33554433);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0);
  sub_DAF1C(a1, a3, 145, -2147450803);
  sub_DAF1C(a1, a3, 144, -268435457);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0x10000000);
  sub_DAF1C(a1, a3, 145, -2147450807);
  sub_DAF1C(a1, a3, 144, -67108865);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0);
  sub_DAF1C(a1, a3, 145, -2147450803);
  sub_DAF1C(a1, a3, 144, -67108865);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0x4000000);
  sub_DAF1C(a1, a3, 145, -2147450803);
  sub_DAF1C(a1, a3, 144, -67108865);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0);
  sub_DAF1C(a1, a3, 145, -2147450803);
  sub_DAF1C(a1, a3, 144, -257);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 256);
  sub_DAF1C(a1, a3, 145, -2147450804);
  sub_DAF1C(a1, a3, 144, -3);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 2);
  sub_DAF1C(a1, a3, 145, -2147450800);
  sub_DAF1C(a1, a3, 144, 0);
  sub_DAF1C(a1, a3, 145, -2147450879);
  return 0;
}
