int __fastcall set_core_reset(int a1)
{
  void (__fastcall *v2)(int, unsigned int *); // r3
  unsigned int v4; // [sp+10h] [bp-1000h] BYREF
  int v5; // [sp+14h] [bp-FFCh]
  int v6; // [sp+18h] [bp-FF8h]
  int v7; // [sp+1Ch] [bp-FF4h]

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v4, 0x1000u, 0, "%s...", "set_core_reset");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "set_core_reset",
    14,
    287,
    60,
    &v4);
  v6 = 0;
  v4 = 9;
  v7 = 0;
  v2 = *(void (__fastcall **)(int, unsigned int *))(a1 + 140);
  v5 = 0;
  LOBYTE(v6) = 1;
  HIWORD(v6) = 32;
  v2(a1, &v4);
  usleep((__useconds_t)"ead_unregister_cancel");
  v6 = 2097153;
  v7 = 0;
  v5 = 0;
  v4 = 15;
  (*(void (__fastcall **)(int, unsigned int *))(a1 + 140))(a1, &v4);
  usleep((__useconds_t)"ead_unregister_cancel");
  v6 = 15728641;
  v7 = 255;
  v5 = 0;
  v4 = 0x80000000;
  (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v4);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep(0x2710u);
  return 0;
}
