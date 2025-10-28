int __fastcall unreg_key_callback(void *a1)
{
  int v2; // r6
  char v4[2048]; // [sp+10h] [bp-1804h] BYREF
  char v5[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_3B5460) )
  {
    strcpy(v4, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_ui.c",
      80,
      "unreg_key_callback",
      18,
      434,
      100,
      v5);
    return -1;
  }
  v2 = 0;
  if ( a1 == off_12B738 )
    goto LABEL_12;
  if ( a1 == (void *)dword_12B73C )
  {
    v2 = 1;
    goto LABEL_12;
  }
  if ( a1 == (void *)dword_12B740 )
  {
    v2 = 2;
    goto LABEL_12;
  }
  if ( a1 == (void *)dword_12B744 )
  {
    v2 = 3;
    goto LABEL_12;
  }
  if ( a1 == (void *)dword_12B748 )
  {
    v2 = 4;
LABEL_12:
    dword_12B728[v2 + 4] = 0;
    goto LABEL_9;
  }
  strcpy(v4, "listener not registered before\n");
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v5, 0x1000u, 0, v4);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_ui.c",
    80,
    "unreg_key_callback",
    18,
    448,
    80,
    v5);
LABEL_9:
  pthread_mutex_unlock(&stru_3B5460);
  return 0;
}
