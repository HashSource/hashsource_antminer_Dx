int __fastcall cmnadj_20210813_500M_test(int a1, int a2, int a3, int a4, int a5)
{
  int v9; // r3
  int v10; // r3
  char v11[4080]; // [sp+10h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v11, 0x1000u, 0, 1614312, "cmnadj_20210813_500M_test", a5, a3);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "cmnadj_20210813_500M_test",
    25,
    8298,
    60,
    v11);
  if ( a4 == 8 )
    LOWORD(a4) = 15;
  if ( a5 == 1 )
  {
    sub_DAF1C(a1, a3, 144, -97);
    sub_DAF1C(a1, a3, 145, -2147450879);
    v9 = 64;
LABEL_8:
    sub_DAF1C(a1, a3, 144, v9);
    LOWORD(v10) = -32756;
    goto LABEL_9;
  }
  if ( a5 == 2 )
  {
    sub_DAF1C(a1, a3, 144, -97);
    sub_DAF1C(a1, a3, 145, -2147450879);
    v9 = 96;
    goto LABEL_8;
  }
  if ( a5 != 3 )
    return 0;
  sub_DAF1C(a1, a3, 144, -97);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 96);
  sub_DAF1C(a1, a3, 145, -2147450868);
  sub_DAF1C(a1, a3, 144, -805306369);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0x10000000);
  LOWORD(v10) = -32692;
LABEL_9:
  HIWORD(v10) = 0x8000;
  sub_DAF1C(a1, a3, 145, v10);
  sub_BF774(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 1, 0);
  sub_DAF1C(a1, a3, 144, 0);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0);
  sub_DAF1C(a1, a3, 145, -2147442687);
  return 0;
}
