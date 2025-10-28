int __fastcall gpio_unreg_callback(int a1, int a2)
{
  int v2; // r10
  _DWORD *v3; // r4
  int v4; // r7
  int v5; // r11
  size_t v6; // r6
  void *v7; // r0
  void *v8; // r5
  size_t v9; // r2
  int v10; // r6
  _DWORD *v11; // r3
  int v13; // r2
  int v14; // [sp+1Ch] [bp-1808h] BYREF
  char v15[2048]; // [sp+20h] [bp-1804h] BYREF
  char v16[4100]; // [sp+820h] [bp-1004h] BYREF

  v14 = a1;
  if ( !a2 )
  {
    strcpy(v15, "bad param\n");
    V_LOCK();
    logfmt_raw(v16, 0x1000u, 0, v15);
    V_UNLOCK();
    v13 = 183;
    goto LABEL_16;
  }
  if ( pthread_mutex_lock(&stru_195C50) )
  {
    strcpy(v15, "fail to lock gpio ctrl mutex\n");
    V_LOCK();
    logfmt_raw(v16, 0x1000u, 0, v15);
    V_UNLOCK();
    v13 = 189;
LABEL_16:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_gpio.c",
      165,
      "gpio_unreg_callback",
      19,
      v13,
      100,
      v16);
    return -1;
  }
  if ( dword_195C68 )
  {
    v2 = *(_DWORD *)dword_195C68;
    v4 = *(_DWORD *)dword_195C68 + 4;
    v3 = **(_DWORD ***)dword_195C68;
    while ( v3 != (_DWORD *)v4 )
    {
      v5 = v3[4];
      v6 = *(_DWORD *)(v5 + 4);
      v7 = malloc(v6);
      v8 = v7;
      v9 = v6;
      if ( v7 )
        memcpy(v7, *(const void **)v5, v6);
      v10 = (*(int (__fastcall **)(int *, void *, size_t))(v2 + 36))(&v14, v8, v9);
      free(v8);
      if ( !v10 )
      {
        snprintf(v15, 0x800u, "remove %d from callback list\n", v14);
        pthread_mutex_lock(&stru_197BB8);
        logfmt_raw(v16, 0x1000u, 0, v15);
        pthread_mutex_unlock(&stru_197BB8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_gpio.c",
          165,
          "gpio_unreg_callback",
          19,
          195,
          20,
          v16);
        remove_c_map((int *)dword_195C68, (int)&v14);
        goto LABEL_13;
      }
      v11 = (_DWORD *)*v3;
      v3 = (_DWORD *)v3[1];
      if ( v10 < 0 )
        v3 = v11;
    }
  }
  strcpy(v15, "callback function not registered before\n");
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v16, 0x1000u, 0, v15);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/7007/7007_gpio.c",
    165,
    "gpio_unreg_callback",
    19,
    200,
    80,
    v16);
LABEL_13:
  pthread_mutex_unlock(&stru_195C50);
  return 0;
}
