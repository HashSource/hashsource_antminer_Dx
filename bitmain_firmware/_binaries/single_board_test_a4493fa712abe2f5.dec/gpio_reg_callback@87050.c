int __fastcall gpio_reg_callback(int a1, int a2)
{
  int v2; // r10
  __int64 *v3; // r4
  int v4; // r8
  int v5; // r6
  size_t v6; // r11
  void *v7; // r0
  void *v8; // r5
  int v9; // r6
  __int64 v10; // kr00_8
  int v12; // r2
  int v13; // r1
  int v14; // r0
  int v16; // [sp+14h] [bp-1808h] BYREF
  char s[2048]; // [sp+18h] [bp-1804h] BYREF
  _DWORD v18[1025]; // [sp+818h] [bp-1004h] BYREF

  v16 = a1;
  if ( !a2 )
  {
    strcpy(s, "bad param\n");
    V_LOCK();
    logfmt_raw((char *)v18, 0x1000u, 0, s);
    V_UNLOCK();
    v12 = 147;
    LOWORD(v13) = 6384;
    v14 = g_zc;
    goto LABEL_17;
  }
  if ( pthread_mutex_lock(&stru_12B708) )
  {
    strcpy(s, "fail to lock gpio ctrl mutex\n");
    V_LOCK();
    logfmt_raw((char *)v18, 0x1000u, 0, s);
    V_UNLOCK();
    v12 = 152;
    LOWORD(v13) = (unsigned __int16)"/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_gpio.c";
    v14 = g_zc;
LABEL_17:
    HIWORD(v13) = (unsigned int)"/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_gpio.c" >> 16;
    zlog(v14, v13, 82, "gpio_reg_callback", 17, v12, 100, v18);
    return -1;
  }
  if ( dword_12B720 )
  {
    v2 = *(_DWORD *)dword_12B720;
    v4 = *(_DWORD *)dword_12B720 + 4;
    v3 = **(__int64 ***)dword_12B720;
    while ( v3 != (__int64 *)v4 )
    {
      v5 = *((_DWORD *)v3 + 4);
      v6 = *(_DWORD *)(v5 + 4);
      v7 = malloc(v6);
      v8 = v7;
      if ( v7 )
        memcpy(v7, *(const void **)v5, v6);
      v9 = (*(int (__fastcall **)(int *, void *))(v2 + 36))(&v16, v8);
      free(v8);
      if ( !v9 )
      {
        snprintf(s, 0x800u, "port %d already exist in callback map \n", v16);
        pthread_mutex_lock(&stru_3B526C);
        logfmt_raw((char *)v18, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_gpio.c",
          82,
          "gpio_reg_callback",
          17,
          165,
          20,
          v18);
        goto LABEL_13;
      }
      v10 = *v3;
      v3 = (__int64 *)*((_DWORD *)v3 + 1);
      if ( v9 < 0 )
        v3 = (__int64 *)v10;
    }
  }
  snprintf(s, 0x800u, "add %d to callback map\n", v16);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)v18, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_gpio.c",
    82,
    "gpio_reg_callback",
    17,
    158,
    20,
    v18);
  v18[0] = a2;
  v18[1] = -1;
  if ( dword_12B720 )
    insert_c_rb(*(_DWORD *)dword_12B720, &v16, 4u, v18, 8u);
LABEL_13:
  pthread_mutex_unlock(&stru_12B708);
  return 0;
}
