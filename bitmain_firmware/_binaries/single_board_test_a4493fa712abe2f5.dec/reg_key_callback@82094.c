int __fastcall reg_key_callback(int a1)
{
  int v2; // r6
  int v4; // r2
  char v5[2048]; // [sp+10h] [bp-1804h] BYREF
  char v6[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_3B5460) )
  {
    v2 = -1;
    strcpy(v5, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, v5);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_ui.c",
      80,
      "reg_key_callback",
      16,
      398,
      100,
      v6);
    return v2;
  }
  v2 = 0;
  if ( !off_12B738 )
  {
    v4 = 0;
LABEL_11:
    dword_12B728[v4 + 4] = a1;
    goto LABEL_8;
  }
  if ( !dword_12B73C )
  {
    v4 = 1;
    goto LABEL_11;
  }
  if ( !dword_12B740 )
  {
    v4 = 2;
    goto LABEL_11;
  }
  if ( !dword_12B744 )
  {
    v4 = 3;
    goto LABEL_11;
  }
  if ( !dword_12B748 )
  {
    v4 = 4;
    goto LABEL_11;
  }
  strcpy(v5, "no more listener available\n");
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v6, 0x1000u, 0, v5);
  v2 = -2;
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_ui.c",
    80,
    "reg_key_callback",
    16,
    414,
    100,
    v6);
LABEL_8:
  pthread_mutex_unlock(&stru_3B5460);
  return v2;
}
