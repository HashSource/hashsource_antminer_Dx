int start_dag_gen_engine()
{
  void *(*v0)(void *); // r2
  int v2; // r3
  int v3; // r3
  int v4; // r1
  char v5[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( query_device_num() <= 0 )
  {
    V_LOCK();
    LOWORD(v2) = 24488;
    HIWORD(v2) = (unsigned int)"9" >> 16;
    logfmt_raw(v5, 0x1000u, 0, v2);
    V_UNLOCK();
    LOWORD(v3) = 29056;
    LOWORD(v4) = -3688;
    HIWORD(v3) = (unsigned int)&unk_137288 >> 16;
    HIWORD(v4) = (unsigned int)"enkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/dhash_content/hns/hns_2130/hns_2130_content.c" >> 16;
    zlog(g_zc, v4, 163, v3, 20, 326, 100, v5);
    return 1;
  }
  else
  {
    LOWORD(v0) = 3056;
    HIWORD(v0) = (unsigned int)&loc_50CB8 >> 16;
    pthread_create((pthread_t *)&dword_1726C8, 0, v0, 0);
    return 0;
  }
}
