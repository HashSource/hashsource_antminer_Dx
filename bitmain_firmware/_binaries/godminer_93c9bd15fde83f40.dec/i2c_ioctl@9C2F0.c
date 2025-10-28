int __fastcall i2c_ioctl(int a1, int a2, int a3)
{
  int v6; // r9
  _DWORD *v7; // r0
  _DWORD *v8; // r4
  int *v9; // r0
  int *v10; // r8
  int v11; // r2
  void (__fastcall *v12)(_DWORD *, _DWORD *, int); // r3
  _DWORD v14[2]; // [sp+10h] [bp-180Ch] BYREF
  _DWORD s[510]; // [sp+18h] [bp-1804h] BYREF
  char v16[4100]; // [sp+818h] [bp-1004h] BYREF

  if ( pthread_mutex_lock(&stru_1A8A70) )
  {
    strcpy((char *)s, "failed to i2c lock\n");
    V_LOCK();
    logfmt_raw(v16, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_i2c.c",
      164,
      "i2c_ioctl",
      9,
      333,
      100,
      v16);
    return -4;
  }
  else
  {
    v6 = dword_1A8A88;
    v7 = malloc(0x18u);
    v7[3] = v6;
    v8 = v7;
    v7[4] = 0;
    v7[5] = 0;
    *v7 = 1108436;
    v7[2] = 1108992;
    v7[1] = 1108860;
    if ( sub_10E9D4((int)v7) )
    {
      while ( ***(_DWORD ***)(v8[5] + 16) != a1 )
      {
        if ( !((int (__fastcall *)(_DWORD *))*v8)(v8) )
          goto LABEL_8;
      }
      v9 = (int *)((int (*)(void))v8[2])();
      v10 = v9;
      if ( a2 == 1795 )
      {
        v11 = *v9;
        v12 = (void (__fastcall *)(_DWORD *, _DWORD *, int))v8[1];
        v14[1] = a3;
        v14[0] = v11;
        v12(v8, v14, 8);
        snprintf((char *)s, 0x800u, "update the slave address to %d\n", a3);
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw(v16, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_1A8A24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_i2c.c",
          164,
          "i2c_ioctl",
          9,
          347,
          20,
          v16);
        free(v10);
      }
    }
LABEL_8:
    free(v8);
    pthread_mutex_unlock(&stru_1A8A70);
    return 0;
  }
}
