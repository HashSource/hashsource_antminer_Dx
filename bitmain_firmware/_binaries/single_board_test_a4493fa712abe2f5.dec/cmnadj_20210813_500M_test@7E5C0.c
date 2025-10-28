int __fastcall cmnadj_20210813_500M_test(int a1, int a2, int a3, int a4, int a5)
{
  int v9; // r3
  int v10; // r3
  char var1004[4112]; // [sp+10h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(var1004, 0x1000u, 0, "%s%d core_id %02x ...", "cmnadj_20210813_500M_test", a5, a3);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "cmnadj_20210813_500M_test",
    25,
    8298,
    60,
    var1004);
  if ( a4 == 8 )
    a4 = 15;
  if ( a5 == 1 )
  {
    sub_70324(a1, a3, 144, -97);
    sub_70324(a1, a3, 145, -2147450879);
    v9 = 64;
LABEL_8:
    sub_70324(a1, a3, 144, v9);
    LOWORD(v10) = -32756;
    goto LABEL_9;
  }
  if ( a5 == 2 )
  {
    sub_70324(a1, a3, 144, -97);
    sub_70324(a1, a3, 145, -2147450879);
    v9 = 96;
    goto LABEL_8;
  }
  if ( a5 != 3 )
    return 0;
  sub_70324(a1, a3, 144, -97);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 96);
  sub_70324(a1, a3, 145, -2147450868);
  sub_70324(a1, a3, 144, -805306369);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 0x10000000);
  LOWORD(v10) = -32692;
LABEL_9:
  HIWORD(v10) = 0x8000;
  sub_70324(a1, a3, 145, v10);
  sub_D19C4(a1, a3, (a4 << 12) & 0xF000 | 1, 0);
  sub_70324(a1, a3, 144, 0);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 0);
  sub_70324(a1, a3, 145, -2147442687);
  return 0;
}
