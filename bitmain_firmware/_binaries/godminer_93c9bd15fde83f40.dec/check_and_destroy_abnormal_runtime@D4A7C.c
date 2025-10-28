int check_and_destroy_abnormal_runtime()
{
  int v0; // r6
  int v1; // r5
  void **v2; // r4
  _DWORD *v3; // r3
  _DWORD *v4; // t1
  int v5; // r2
  int v7; // r3
  _DWORD s[256]; // [sp+10h] [bp-1404h] BYREF
  char v9[4100]; // [sp+410h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  pthread_mutex_lock(&stru_1A9B48);
  if ( dword_1A9B60 > 0 )
  {
    v1 = 0;
    v0 = 0;
    v2 = (void **)&dword_1A9B60;
    do
    {
      while ( 1 )
      {
        v4 = v2[1];
        ++v2;
        v3 = v4;
        if ( v4[59] != v4[48] )
          break;
        v5 = dword_1A9B60;
        ++v1;
        s[v0++] = v3;
        if ( v1 >= v5 )
          goto LABEL_6;
      }
      pthread_mutex_lock(&stru_1A8A24);
      ++v1;
      logfmt_raw(v9, 0x1000u, 0, "chain %d runtime check asic number error, destroy it!", *((_DWORD *)*v2 + 34));
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_interface.c",
        148,
        "check_and_destroy_abnormal_runtime",
        34,
        131,
        80,
        v9);
      (*((void (**)(void))*v2 + 2))();
      (*((void (**)(void))*v2 + 4))();
      free(*v2);
      v7 = dword_1A9B60;
      *v2 = 0;
    }
    while ( v7 > v1 );
    if ( v0 )
LABEL_6:
      memcpy(dword_1A9B64, s, 4 * v0);
  }
  else
  {
    v0 = 0;
  }
  dword_1A9B60 = v0;
  return pthread_mutex_unlock(&stru_1A9B48);
}
