int __fastcall gpio_reg_callback(int a1, int a2)
{
  int v2; // r10
  _DWORD *v3; // r4
  int v4; // r9
  int v5; // r11
  size_t v6; // r6
  void *v7; // r0
  void *v8; // r5
  size_t v9; // r2
  int v10; // r6
  _DWORD *v11; // r3
  int v13; // r2
  int v15; // [sp+1Ch] [bp-804h] BYREF
  char v16[2048]; // [sp+20h] [bp-800h] BYREF
  _DWORD v17[1025]; // [sp+820h] [bp+0h] BYREF

  v15 = a1;
  if ( !a2 )
  {
    strcpy(v16, "bad param\n");
    V_LOCK();
    logfmt_raw((char *)v17, 0x1000u, 0, v16);
    V_UNLOCK();
    v13 = 147;
    goto LABEL_17;
  }
  if ( pthread_mutex_lock(&stru_195C50) )
  {
    strcpy(v16, "fail to lock gpio ctrl mutex\n");
    V_LOCK();
    logfmt_raw((char *)v17, 0x1000u, 0, v16);
    V_UNLOCK();
    v13 = 152;
LABEL_17:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_gpio.c",
      165,
      "gpio_reg_callback",
      17,
      v13,
      100,
      v17);
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
      v10 = (*(int (__fastcall **)(int *, void *, size_t))(v2 + 36))(&v15, v8, v9);
      free(v8);
      if ( !v10 )
      {
        snprintf(v16, 0x800u, "port %d already exist in callback map \n", v15);
        pthread_mutex_lock(&stru_197BB8);
        logfmt_raw((char *)v17, 0x1000u, 0, v16);
        pthread_mutex_unlock(&stru_197BB8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_gpio.c",
          165,
          "gpio_reg_callback",
          17,
          165,
          20,
          v17);
        goto LABEL_14;
      }
      v11 = (_DWORD *)*v3;
      v3 = (_DWORD *)v3[1];
      if ( v10 < 0 )
        v3 = v11;
    }
  }
  snprintf(v16, 0x800u, "add %d to callback map\n", v15);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)v17, 0x1000u, 0, v16);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/7007/7007_gpio.c",
    165,
    "gpio_reg_callback",
    17,
    158,
    20,
    v17);
  v17[1] = -1;
  v17[0] = a2;
  if ( dword_195C68 )
    insert_c_rb(*(_DWORD *)dword_195C68, &v15, 4u, v17, 8u);
LABEL_14:
  pthread_mutex_unlock(&stru_195C50);
  return 0;
}
