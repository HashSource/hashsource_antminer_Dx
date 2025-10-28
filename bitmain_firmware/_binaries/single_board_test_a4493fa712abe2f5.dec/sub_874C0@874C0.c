int __fastcall sub_874C0(int a1, int a2)
{
  int v3; // r6
  int *v4; // r8
  int v5; // r6
  int v6; // r11
  __int64 *v7; // r5
  int v8; // r10
  int v9; // r7
  size_t v10; // r9
  void *v11; // r0
  void *v12; // r6
  int v13; // r7
  __int64 v14; // kr00_8
  int v15; // r0
  int v17; // [sp+14h] [bp-1808h] BYREF
  char s[2048]; // [sp+18h] [bp-1804h] BYREF
  _DWORD v19[1025]; // [sp+818h] [bp-1004h] BYREF

  if ( a1 == 1 )
  {
    v3 = 941;
  }
  else
  {
    if ( a1 != 2 )
    {
      strcpy(s, "unsuported gpio port\n");
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw((char *)v19, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_ui.c",
        80,
        "gpio_ctrl_ui",
        12,
        273,
        100,
        v19);
      return -1;
    }
    v3 = 942;
  }
  snprintf(s, 0x800u, "ui type = %d, port = %d, status = %d\n", a1, v3, a2);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)v19, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_ui.c",
    80,
    "gpio_ctrl_ui",
    12,
    277,
    20,
    v19);
  if ( pthread_mutex_lock(&stru_3B5460) )
  {
    strcpy(s, "failed to api lock\n");
    V_LOCK();
    logfmt_raw((char *)v19, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_ui.c",
      80,
      "gpio_ctrl_ui",
      12,
      280,
      100,
      v19);
    return -1;
  }
  v4 = (int *)dword_3B545C;
  if ( a2 == 1 )
  {
    sub_873DC(v3, (__int64 ***)dword_3B545C);
    v5 = gpio_write(v3, 0);
    pthread_mutex_unlock(&stru_3B5460);
  }
  else if ( a2 == 2 )
  {
    v17 = v3;
    v5 = -1;
    if ( dword_3B545C )
    {
      v6 = *(_DWORD *)dword_3B545C;
      v8 = *(_DWORD *)dword_3B545C + 4;
      v7 = **(__int64 ***)dword_3B545C;
      while ( 1 )
      {
        if ( (__int64 *)v8 == v7 )
        {
          snprintf(s, 0x800u, "add %d to flicker map with interval %d\n", v17, 200);
          V_LOCK();
          logfmt_raw((char *)v19, 0x1000u, 0, s);
          V_UNLOCK();
          v5 = -1;
          zlog(
            g_zc,
            "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_ui.c",
            80,
            "add_port_to_gpio_map",
            20,
            221,
            20,
            v19);
          v15 = *v4;
          v19[0] = 200;
          v19[1] = 0;
          v19[2] = 1;
          insert_c_rb(v15, &v17, 4u, v19, 0xCu);
          goto LABEL_16;
        }
        v9 = *((_DWORD *)v7 + 4);
        v10 = *(_DWORD *)(v9 + 4);
        v11 = malloc(v10);
        v12 = v11;
        if ( v11 )
          memcpy(v11, *(const void **)v9, v10);
        v13 = (*(int (__fastcall **)(int *, void *))(v6 + 36))(&v17, v12);
        free(v12);
        if ( !v13 )
          break;
        v14 = *v7;
        v7 = (__int64 *)*((_DWORD *)v7 + 1);
        if ( v13 < 0 )
          v7 = (__int64 *)v14;
      }
      v5 = -1;
      snprintf(s, 0x800u, "port %d already exist in map\n", v17);
      V_LOCK();
      logfmt_raw((char *)v19, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_ui.c",
        80,
        "add_port_to_gpio_map",
        20,
        227,
        20,
        v19);
    }
LABEL_16:
    pthread_mutex_unlock(&stru_3B5460);
  }
  else
  {
    sub_873DC(v3, (__int64 ***)dword_3B545C);
    v5 = gpio_write(v3, 1);
    pthread_mutex_unlock(&stru_3B5460);
  }
  return v5;
}
