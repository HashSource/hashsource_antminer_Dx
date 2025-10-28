void __fastcall i2c_uninit(int a1)
{
  int v1; // r5
  int v2; // r10
  __int64 *v3; // r4
  int v4; // r9
  int v5; // r7
  size_t v6; // r11
  void *v7; // r0
  void *v8; // r6
  int v9; // r7
  __int64 v10; // kr00_8
  int v11; // r6
  _DWORD *v12; // r0
  int (__fastcall **v13)(_DWORD); // r4
  void *v14; // r4
  int v15; // [sp+14h] [bp-1808h] BYREF
  char s[2048]; // [sp+18h] [bp-1804h] BYREF
  char v17[4100]; // [sp+818h] [bp-1004h] BYREF

  v15 = a1;
  if ( pthread_mutex_lock(&stru_3B5288) )
  {
    strcpy(s, "failed to i2c lock\n");
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v17, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
      81,
      "i2c_uninit",
      10,
      59,
      100,
      v17);
  }
  else
  {
    v1 = 0;
    if ( dword_3B52A0 )
    {
      v2 = *(_DWORD *)dword_3B52A0;
      v4 = *(_DWORD *)dword_3B52A0 + 4;
      v3 = **(__int64 ***)dword_3B52A0;
      while ( (__int64 *)v4 != v3 )
      {
        v5 = *((_DWORD *)v3 + 4);
        v6 = *(_DWORD *)(v5 + 4);
        v7 = malloc(v6);
        v8 = v7;
        if ( v7 )
          memcpy(v7, *(const void **)v5, v6);
        v9 = (*(int (__fastcall **)(int *, void *))(v2 + 36))(&v15, v8);
        free(v8);
        if ( !v9 )
        {
          snprintf(s, 0x800u, "remove %d from callback list\n", v15);
          pthread_mutex_lock(&stru_3B526C);
          logfmt_raw(v17, 0x1000u, 0, s);
          pthread_mutex_unlock(&stru_3B526C);
          zlog(
            g_zc,
            "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
            81,
            "i2c_uninit",
            10,
            63,
            20,
            v17);
          remove_c_map((int *)dword_3B52A0, (int)&v15);
          goto LABEL_11;
        }
        v10 = *v3;
        v3 = (__int64 *)*((_DWORD *)v3 + 1);
        if ( v9 < 0 )
          v3 = (__int64 *)v10;
      }
    }
    snprintf(s, 0x800u, "ctx(%d) is not inited\n", v15);
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v17, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
      81,
      "i2c_uninit",
      10,
      66,
      80,
      v17);
LABEL_11:
    v11 = dword_3B52A0;
    v12 = malloc(0x18u);
    *v12 = sub_57DDC;
    v12[2] = sub_5802C;
    v12[3] = v11;
    v12[1] = sub_57FD4;
    v13 = (int (__fastcall **)(_DWORD))v12;
    v12[4] = 0;
    v12[5] = 0;
    if ( sub_57DDC((int)v12) )
    {
      do
        ++v1;
      while ( (*v13)(v13) );
      free(v13);
      pthread_mutex_unlock(&stru_3B5288);
      snprintf(s, 0x800u, "still have %d nodes\n", v1);
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v17, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
        81,
        "i2c_uninit",
        10,
        82,
        20,
        v17);
    }
    else
    {
      free(v13);
      pthread_mutex_unlock(&stru_3B5288);
      strcpy(s, "all i2c uninited\n");
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v17, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
        81,
        "i2c_uninit",
        10,
        77,
        20,
        v17);
      v14 = (void *)dword_3B52A0;
      dword_12B884 = 0;
      if ( dword_3B52A0 )
      {
        delete_c_rb(*(_DWORD **)dword_3B52A0);
        free(v14);
      }
      dword_3B52A0 = 0;
    }
  }
}
