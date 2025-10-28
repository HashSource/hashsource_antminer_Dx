int __fastcall i2c_select(int a1, int a2)
{
  int v4; // r8
  _DWORD *v5; // r0
  _DWORD *v6; // r4
  _DWORD *v7; // r5
  void (__fastcall *v8)(_DWORD *, _DWORD *, int); // r3
  _DWORD v10[2]; // [sp+10h] [bp-1808h] BYREF
  char s[2048]; // [sp+18h] [bp-1800h] BYREF
  char v12[4096]; // [sp+818h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_3B5288) )
  {
    strcpy(s, "failed to i2c lock\n");
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
      81,
      "i2c_select",
      10,
      366,
      100,
      v12);
    return -4;
  }
  else
  {
    v4 = dword_3B52A0;
    v5 = malloc(0x18u);
    v5[3] = v4;
    v6 = v5;
    v5[4] = 0;
    v5[5] = 0;
    *v5 = sub_57DDC;
    v5[1] = sub_57FD4;
    v5[2] = sub_5802C;
    if ( sub_57DDC((int)v5) )
    {
      while ( ***(_DWORD ***)(v6[5] + 16) != a1 )
      {
        if ( !((int (__fastcall *)(_DWORD *))*v6)(v6) )
          goto LABEL_7;
      }
      v7 = (_DWORD *)((int (*)(void))v6[2])();
      v10[0] = a2;
      v8 = (void (__fastcall *)(_DWORD *, _DWORD *, int))v6[1];
      v10[1] = v7[1];
      v8(v6, v10, 8);
      snprintf(s, 0x800u, "update the master address to %d\n", a2);
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v12, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
        81,
        "i2c_select",
        10,
        377,
        20,
        v12);
      free(v7);
    }
LABEL_7:
    free(v6);
    pthread_mutex_unlock(&stru_3B5288);
    return 0;
  }
}
