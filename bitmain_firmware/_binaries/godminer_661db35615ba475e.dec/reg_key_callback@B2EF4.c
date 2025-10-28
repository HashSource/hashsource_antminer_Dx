int __fastcall reg_key_callback(int a1)
{
  int v2; // r4
  int v3; // r2
  char v5[2048]; // [sp+10h] [bp-1804h] BYREF
  char v6[4100]; // [sp+810h] [bp-1004h] BYREF

  v2 = pthread_mutex_lock(&stru_195C30);
  if ( v2 )
  {
    v2 = -1;
    strcpy(v5, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, v5);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_ui.c",
      163,
      "reg_key_callback",
      16,
      398,
      100,
      v6);
    return v2;
  }
  if ( !off_195D18 )
  {
    v3 = 0;
    goto LABEL_12;
  }
  if ( !dword_195D1C )
  {
    v3 = 1;
    goto LABEL_12;
  }
  if ( !dword_195D20 )
  {
    v3 = 2;
    goto LABEL_12;
  }
  if ( !dword_195D24 )
  {
    v3 = 3;
    goto LABEL_12;
  }
  if ( !dword_195D28 )
  {
    v3 = 4;
LABEL_12:
    dword_195CAC[v3 + 27] = a1;
    goto LABEL_9;
  }
  strcpy(v5, "no more listener available\n");
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v6, 0x1000u, 0, v5);
  v2 = -2;
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/7007/7007_ui.c",
    163,
    "reg_key_callback",
    16,
    414,
    100,
    v6);
LABEL_9:
  pthread_mutex_unlock(&stru_195C30);
  return v2;
}
