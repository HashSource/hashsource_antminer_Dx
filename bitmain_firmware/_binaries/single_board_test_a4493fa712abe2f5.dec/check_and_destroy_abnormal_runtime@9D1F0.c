int check_and_destroy_abnormal_runtime()
{
  void **v0; // r4
  int v1; // r5
  _DWORD *v2; // r3
  _DWORD *v3; // t1
  bool v4; // cc
  int v5; // r1
  int v6; // r3
  int v8; // r3
  int v9; // [sp+14h] [bp-1408h]
  _DWORD s[256]; // [sp+18h] [bp-1404h] BYREF
  char v11[4100]; // [sp+418h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  pthread_mutex_lock(&stru_12BCB8);
  if ( dword_12BCD0 > 0 )
  {
    v0 = (void **)&dword_12BCD0;
    v1 = 0;
    v9 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v3 = v0[1];
        ++v0;
        v2 = v3;
        if ( v3[55] != v3[45] )
          break;
        v4 = ++v1 < dword_12BCD0;
        s[v9] = v2;
        v5 = ++v9;
        if ( !v4 )
        {
          v6 = v5;
          goto LABEL_6;
        }
      }
      pthread_mutex_lock(&stru_3B526C);
      ++v1;
      logfmt_raw(v11, 0x1000u, 0, "chain %d runtime check asic number error, destroy it!", *((_DWORD *)*v0 + 31));
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/backend_interface.c",
        65,
        "check_and_destroy_abnormal_runtime",
        34,
        125,
        80,
        v11);
      (*((void (**)(void))*v0 + 2))();
      (*((void (**)(void))*v0 + 4))();
      free(*v0);
      v8 = dword_12BCD0;
      *v0 = 0;
      if ( v8 <= v1 )
      {
        v6 = v9;
        if ( !v9 )
          goto LABEL_7;
LABEL_6:
        memcpy(dword_12BCD4, s, 4 * v6);
        v6 = v9;
        goto LABEL_7;
      }
    }
  }
  v6 = 0;
LABEL_7:
  dword_12BCD0 = v6;
  return pthread_mutex_unlock(&stru_12BCB8);
}
