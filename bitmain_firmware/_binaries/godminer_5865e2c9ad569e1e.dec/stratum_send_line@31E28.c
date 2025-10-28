int __fastcall stratum_send_line(pthread_mutex_t *a1, char *a2)
{
  char *v4; // r1
  int v5; // r4
  int v6; // r3
  int v7; // r1
  pthread_mutex_t *v8; // r4
  int v9; // r5
  _DWORD v11[7]; // [sp+28h] [bp-1024h] BYREF
  int v12; // [sp+44h] [bp-1008h]
  char v13[4100]; // [sp+48h] [bp-1004h] BYREF

  if ( opt_protocol )
  {
    V_LOCK();
    LOWORD(v4) = 5072;
    HIWORD(v4) = (unsigned int)"unknow config parameter!" >> 16;
    V_INT((int)v11, v4, a1->__lock);
    LOWORD(v5) = 8844;
    HIWORD(v5) = (unsigned int)"tailed error %d" >> 16;
    logfmt_raw(v13, 0x1000u, 0, v12, v11[0], v11[1], v11[2], v11[3], v11[4], v11[5], v11[6], v12, v5, a2);
    V_UNLOCK();
    LOWORD(v6) = 8716;
    LOWORD(v7) = 8852;
    HIWORD(v6) = (unsigned int)"tratum_handler.c" >> 16;
    HIWORD(v7) = (unsigned int)"rror %d" >> 16;
    zlog(g_zc, v7, 144, v6, 17, 31, 60, v13);
  }
  v8 = a1 + 2;
  pthread_mutex_lock(a1 + 2);
  v9 = send_line(a1[1].__kind, a2);
  pthread_mutex_unlock(v8);
  return v9;
}
