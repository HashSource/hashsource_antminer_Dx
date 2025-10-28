int machine_info_init()
{
  int v0; // r3
  int v1; // r1
  int v2; // r0
  int v3; // r3
  int v4; // r1
  char v6[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  LOWORD(v0) = 26372;
  HIWORD(v0) = (unsigned int)"a is not ready, chain = %d" >> 16;
  logfmt_raw(v6, 0x1000u, 0, v0);
  V_UNLOCK();
  LOWORD(v1) = 25580;
  HIWORD(v1) = (unsigned int)"or_addr %02x, J0:6" >> 16;
  zlog(g_zc, v1, 165, "machine_info_init", 17, 920, 60, v6);
  v2 = platform_topol_init();
  if ( v2 )
    exit(v2);
  V_LOCK();
  LOWORD(v3) = 26392;
  HIWORD(v3) = (unsigned int)"n = %d" >> 16;
  logfmt_raw(v6, 0x1000u, 0, v3);
  V_UNLOCK();
  LOWORD(v4) = 25580;
  HIWORD(v4) = (unsigned int)"or_addr %02x, J0:6" >> 16;
  zlog(g_zc, v4, 165, "machine_info_init", 17, 924, 60, v6);
  return 0;
}
