int __fastcall nonce_pop_handler_grin29(int a1, _DWORD *a2, int a3)
{
  __int64 v5; // r6
  int v6; // r3
  int v7; // r1
  int v9; // r3
  void *v10; // r0
  char v11[4100]; // [sp+10h] [bp-1004h] BYREF

  v5 = *(_QWORD *)(a3 + 17);
  if ( v5 == strtoll((const char *)a2[96], 0, 10) )
  {
    v9 = *(_DWORD *)(a3 + 29);
    a2[92] = *(_DWORD *)(a3 + 25);
    a2[93] = v9;
    v10 = calloc(0x2Au, 4u);
    a2[99] = v10;
    if ( !v10 )
    {
      puts("calloc work->sols failed!");
      v10 = (void *)a2[99];
    }
    memcpy(v10, (const void *)(a3 + 35), 0xA8u);
    return 0;
  }
  else
  {
    pthread_mutex_lock(&stru_1A8A24);
    LOWORD(v6) = 17116;
    HIWORD(v6) = (unsigned int)"ns/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/frontend/frontend_base.c" >> 16;
    logfmt_raw(v11, 0x1000u, 0, v6);
    pthread_mutex_unlock(&stru_1A8A24);
    LOWORD(v7) = 17324;
    HIWORD(v7) = (unsigned int)"nonce" >> 16;
    zlog(g_zc, v7, 163, "nonce_pop_handler_grin29", 24, 723, 20, v11);
    return 1;
  }
}
