int __fastcall i2c_select(int a1, int a2)
{
  int v4; // r8
  _DWORD *v5; // r0
  _DWORD *v6; // r4
  _DWORD *v7; // r7
  int v8; // r2
  void (__fastcall *v9)(_DWORD *, _DWORD *, int); // r3
  _DWORD v11[2]; // [sp+10h] [bp-1808h] BYREF
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  char v13[4096]; // [sp+818h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_197C70) )
  {
    strcpy(s, "failed to i2c lock\n");
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_i2c.c",
      164,
      "i2c_select",
      10,
      366,
      100,
      v13);
    return -4;
  }
  else
  {
    v4 = dword_197C88;
    v5 = malloc(0x18u);
    v5[3] = v4;
    v6 = v5;
    v5[4] = 0;
    v5[5] = 0;
    *v5 = sub_6B360;
    v5[2] = sub_6B750;
    v5[1] = sub_6B6CC;
    if ( sub_6B360((int)v5) )
    {
      while ( ***(_DWORD ***)(v6[5] + 16) != a1 )
      {
        if ( !((int (__fastcall *)(_DWORD *))*v6)(v6) )
          goto LABEL_7;
      }
      v7 = (_DWORD *)((int (*)(void))v6[2])();
      v8 = v7[1];
      v9 = (void (__fastcall *)(_DWORD *, _DWORD *, int))v6[1];
      v11[0] = a2;
      v11[1] = v8;
      v9(v6, v11, 8);
      snprintf(s, 0x800u, "update the master address to %d\n", a2);
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v13, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_i2c.c",
        164,
        "i2c_select",
        10,
        377,
        20,
        v13);
      free(v7);
    }
LABEL_7:
    free(v6);
    pthread_mutex_unlock(&stru_197C70);
    return 0;
  }
}
