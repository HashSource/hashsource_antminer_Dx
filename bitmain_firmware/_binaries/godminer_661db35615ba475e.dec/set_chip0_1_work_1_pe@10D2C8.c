int __fastcall set_chip0_1_work_1_pe(int a1)
{
  void (__fastcall *v2)(int, int *); // r3
  void (__fastcall *v3)(int, int *); // r3
  int v5; // [sp+10h] [bp-1000h] BYREF
  int v6; // [sp+14h] [bp-FFCh]
  int v7; // [sp+18h] [bp-FF8h]
  int v8; // [sp+1Ch] [bp-FF4h]

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v5, 0x1000u, 0, "%s...", "set_chip0_1_work_1_pe");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "set_chip0_1_work_1_pe",
    21,
    12082,
    60,
    &v5);
  v7 = 0;
  v2 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v8 = 255;
  v6 = 0;
  HIWORD(v7) = 21;
  v5 = 0;
  v2(a1, &v5);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep(0x2710u);
  v7 = 1376256;
  v8 = 0;
  v6 = 0;
  v5 = 1;
  v3 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v8) = -1;
  v3(a1, &v5);
  usleep((__useconds_t)"ead_unregister_cancel");
  usleep(0x2710u);
  return 0;
}
