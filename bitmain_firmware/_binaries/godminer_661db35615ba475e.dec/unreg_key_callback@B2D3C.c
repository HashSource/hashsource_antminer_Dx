int __fastcall unreg_key_callback(void *a1)
{
  int v2; // r5
  char v4[2048]; // [sp+10h] [bp-1804h] BYREF
  char v5[4100]; // [sp+810h] [bp-1004h] BYREF

  v2 = pthread_mutex_lock(&stru_195C30);
  if ( v2 )
  {
    strcpy(v4, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_ui.c",
      163,
      "unreg_key_callback",
      18,
      434,
      100,
      v5);
    return -1;
  }
  if ( a1 == off_195D18 )
    goto LABEL_12;
  if ( a1 == (void *)dword_195D1C )
  {
    v2 = 1;
    goto LABEL_12;
  }
  if ( a1 == (void *)dword_195D20 )
  {
    v2 = 2;
    goto LABEL_12;
  }
  if ( a1 == (void *)dword_195D24 )
  {
    v2 = 3;
    goto LABEL_12;
  }
  if ( a1 == (void *)dword_195D28 )
  {
    v2 = 4;
LABEL_12:
    dword_195CAC[v2 + 27] = 0;
    goto LABEL_9;
  }
  strcpy(v4, "listener not registered before\n");
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v5, 0x1000u, 0, v4);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/7007/7007_ui.c",
    163,
    "unreg_key_callback",
    18,
    448,
    80,
    v5);
LABEL_9:
  pthread_mutex_unlock(&stru_195C30);
  return 0;
}
