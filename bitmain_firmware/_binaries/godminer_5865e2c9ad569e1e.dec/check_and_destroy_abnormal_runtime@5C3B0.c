int check_and_destroy_abnormal_runtime()
{
  int v0; // r7
  int v1; // r5
  int v2; // r3
  void **v3; // r4
  _DWORD *v4; // r3
  _DWORD *v5; // t1
  int v6; // r1
  int v7; // r1
  int *v8; // r3
  _DWORD *v9; // r2
  int v10; // t1
  int v12; // [sp+14h] [bp-1408h]
  _DWORD s[256]; // [sp+18h] [bp-1404h] BYREF
  char v14[4100]; // [sp+418h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  pthread_mutex_lock(&stru_181FF0);
  if ( dword_182008 > 0 )
  {
    v1 = 0;
    LOWORD(v2) = -27288;
    v0 = 0;
    v3 = (void **)&dword_182008;
    HIWORD(v2) = (unsigned int)"" >> 16;
    v12 = v2;
    do
    {
      v5 = v3[1];
      ++v3;
      v4 = v5;
      if ( v5[100] == v5[78] )
      {
        s[v0++] = v4;
      }
      else
      {
        V_LOCK();
        logfmt_raw(v14, 0x1000u, 0, v12, *((_DWORD *)*v3 + 58));
        V_UNLOCK();
        LOWORD(v6) = -27444;
        HIWORD(v6) = (unsigned int)"se_chain_pic" >> 16;
        zlog(g_zc, v6, 154, "check_and_destroy_abnormal_runtime", 34, 113, 80, v14);
        V_LOCK();
        logfmt_raw(v14, 0x1000u, 0, "Sweep error string = J%d:2.", *((_DWORD *)*v3 + 58));
        V_UNLOCK();
        LOWORD(v7) = -27444;
        HIWORD(v7) = (unsigned int)"se_chain_pic" >> 16;
        zlog(g_zc, v7, 154, "check_and_destroy_abnormal_runtime", 34, 114, 100, v14);
        (*((void (**)(void))*v3 + 5))();
        (*((void (**)(void))*v3 + 7))();
        free(*v3);
        *v3 = 0;
      }
      ++v1;
    }
    while ( dword_182008 > v1 );
    if ( v0 )
    {
      v8 = s;
      v9 = &unk_18200C;
      do
      {
        v10 = *v8++;
        *v9++ = v10;
      }
      while ( v8 != &s[v0] );
    }
  }
  else
  {
    v0 = 0;
  }
  dword_182008 = v0;
  return pthread_mutex_unlock(&stru_181FF0);
}
