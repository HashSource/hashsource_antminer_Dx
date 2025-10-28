int __fastcall sub_A00A8(int a1, int a2)
{
  int v3; // r6
  int *v4; // r7
  int v5; // r5
  int v6; // r11
  _DWORD *v7; // r5
  int v8; // r10
  int v9; // r9
  size_t v10; // r8
  void *v11; // r0
  void *v12; // r6
  size_t v13; // r2
  int v14; // r8
  _DWORD *v15; // r3
  int v16; // r0
  int v18; // [sp+14h] [bp-1808h] BYREF
  char s[2040]; // [sp+18h] [bp-1804h] BYREF
  _DWORD v20[1025]; // [sp+818h] [bp-1004h] BYREF

  if ( a1 == 1 )
  {
    v3 = 941;
  }
  else
  {
    if ( a1 != 2 )
    {
      strcpy(s, "unsuported gpio port\n");
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw((char *)v20, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_ui.c",
        163,
        "gpio_ctrl_ui",
        12,
        273,
        100,
        v20);
      return -1;
    }
    v3 = 942;
  }
  snprintf(s, 0x800u, "ui type = %d, port = %d, status = %d\n", a1, v3, a2);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)v20, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/7007/7007_ui.c",
    163,
    "gpio_ctrl_ui",
    12,
    277,
    20,
    v20);
  if ( pthread_mutex_lock(&stru_1A8B2C) )
  {
    strcpy(s, "failed to api lock\n");
    V_LOCK();
    logfmt_raw((char *)v20, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_ui.c",
      163,
      "gpio_ctrl_ui",
      12,
      280,
      100,
      v20);
    return -1;
  }
  v4 = (int *)dword_1A8B28;
  if ( a2 == 1 )
  {
    sub_9FF6C(v3, (int *)dword_1A8B28);
    v5 = gpio_write(v3, 0);
    pthread_mutex_unlock(&stru_1A8B2C);
  }
  else if ( a2 == 2 )
  {
    v18 = v3;
    if ( dword_1A8B28 )
    {
      v6 = *(_DWORD *)dword_1A8B28;
      v8 = *(_DWORD *)dword_1A8B28 + 4;
      v7 = **(_DWORD ***)dword_1A8B28;
      while ( 1 )
      {
        if ( (_DWORD *)v8 == v7 )
        {
          v5 = -1;
          snprintf(s, 0x800u, "add %d to flicker map with interval %d\n", v18, 200);
          V_LOCK();
          logfmt_raw((char *)v20, 0x1000u, 0, s);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/platform/7007/7007_ui.c",
            163,
            "add_port_to_gpio_map",
            20,
            221,
            20,
            v20);
          v16 = *v4;
          v20[0] = 200;
          v20[1] = 0;
          v20[2] = 1;
          insert_c_rb(v16, &v18, 4u, v20, 0xCu);
          goto LABEL_17;
        }
        v9 = v7[4];
        v10 = *(_DWORD *)(v9 + 4);
        v11 = malloc(v10);
        v12 = v11;
        v13 = v10;
        if ( v11 )
          memcpy(v11, *(const void **)v9, v10);
        v14 = (*(int (__fastcall **)(int *, void *, size_t))(v6 + 36))(&v18, v12, v13);
        free(v12);
        if ( !v14 )
          break;
        v15 = (_DWORD *)*v7;
        v7 = (_DWORD *)v7[1];
        if ( v14 < 0 )
          v7 = v15;
      }
      v5 = -1;
      snprintf(s, 0x800u, "port %d already exist in map\n", v18);
      V_LOCK();
      logfmt_raw((char *)v20, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_ui.c",
        163,
        "add_port_to_gpio_map",
        20,
        227,
        20,
        v20);
    }
    else
    {
      v5 = -1;
    }
LABEL_17:
    pthread_mutex_unlock(&stru_1A8B2C);
  }
  else
  {
    sub_9FF6C(v3, (int *)dword_1A8B28);
    v5 = gpio_write(v3, 1);
    pthread_mutex_unlock(&stru_1A8B2C);
  }
  return v5;
}
