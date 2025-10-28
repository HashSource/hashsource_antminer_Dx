void __fastcall i2c_uninit(int a1)
{
  int v1; // r5
  int v2; // r11
  _DWORD *v3; // r4
  int v4; // r10
  size_t v5; // r8
  void *v6; // r0
  void *v7; // r7
  size_t v8; // r2
  int v9; // r8
  _DWORD *v10; // r3
  int v11; // r8
  _DWORD *v12; // r0
  int (__fastcall **v13)(_DWORD); // r4
  void *v14; // r4
  int v15; // [sp+14h] [bp-1810h]
  int v16; // [sp+1Ch] [bp-1808h] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  char v18[4100]; // [sp+820h] [bp-1004h] BYREF

  v16 = a1;
  v1 = pthread_mutex_lock(&stru_197C70);
  if ( v1 )
  {
    strcpy(s, "failed to i2c lock\n");
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v18, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_i2c.c",
      164,
      "i2c_uninit",
      10,
      59,
      100,
      v18);
  }
  else
  {
    if ( dword_197C88 )
    {
      v2 = *(_DWORD *)dword_197C88;
      v3 = **(_DWORD ***)dword_197C88;
      v15 = *(_DWORD *)dword_197C88 + 4;
      while ( (_DWORD *)v15 != v3 )
      {
        v4 = v3[4];
        v5 = *(_DWORD *)(v4 + 4);
        v6 = malloc(v5);
        v7 = v6;
        v8 = v5;
        if ( v6 )
          memcpy(v6, *(const void **)v4, v5);
        v9 = (*(int (__fastcall **)(int *, void *, size_t))(v2 + 36))(&v16, v7, v8);
        free(v7);
        if ( !v9 )
        {
          snprintf(s, 0x800u, "remove %d from callback list\n", v16);
          pthread_mutex_lock(&stru_197BB8);
          logfmt_raw(v18, 0x1000u, 0, s);
          pthread_mutex_unlock(&stru_197BB8);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/platform/7007/7007_i2c.c",
            164,
            "i2c_uninit",
            10,
            63,
            20,
            v18);
          remove_c_map((int *)dword_197C88, (int)&v16);
          goto LABEL_11;
        }
        v10 = (_DWORD *)*v3;
        v3 = (_DWORD *)v3[1];
        if ( v9 < 0 )
          v3 = v10;
      }
    }
    snprintf(s, 0x800u, "ctx(%d) is not inited\n", v16);
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v18, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_i2c.c",
      164,
      "i2c_uninit",
      10,
      66,
      80,
      v18);
LABEL_11:
    v11 = dword_197C88;
    v12 = malloc(0x18u);
    *v12 = sub_6B360;
    v12[2] = sub_6B750;
    v12[3] = v11;
    v12[1] = sub_6B6CC;
    v13 = (int (__fastcall **)(_DWORD))v12;
    v12[4] = 0;
    v12[5] = 0;
    if ( sub_6B360((int)v12) )
    {
      do
        ++v1;
      while ( (*v13)(v13) );
      free(v13);
      pthread_mutex_unlock(&stru_197C70);
      snprintf(s, 0x800u, "still have %d nodes\n", v1);
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v18, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_i2c.c",
        164,
        "i2c_uninit",
        10,
        82,
        20,
        v18);
    }
    else
    {
      free(v13);
      pthread_mutex_unlock(&stru_197C70);
      strcpy(s, "all i2c uninited\n");
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v18, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_i2c.c",
        164,
        "i2c_uninit",
        10,
        77,
        20,
        v18);
      v14 = (void *)dword_197C88;
      dword_197E04 = 0;
      if ( dword_197C88 )
      {
        delete_c_rb(*(_DWORD **)dword_197C88);
        free(v14);
      }
      dword_197C88 = 0;
    }
  }
}
