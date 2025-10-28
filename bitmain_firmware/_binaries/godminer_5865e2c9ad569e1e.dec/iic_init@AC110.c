int __fastcall iic_init(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r2
  int v5; // r0
  int *v7; // r2
  int v8; // r0
  int v9; // r1
  int v10; // r2
  _DWORD s[512]; // [sp+10h] [bp-1800h] BYREF
  char v12[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_18A42C) )
  {
    v2 = -4;
    strcpy((char *)s, "failed to iic lock");
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/device/hal/platform/7007/7007_iic.c",
      170,
      "iic_init",
      8,
      20,
      100,
      v12);
    return v2;
  }
  if ( a1 )
  {
    v2 = i2c_init();
    if ( v2 < 0 )
    {
      v2 = -1;
      strcpy((char *)s, "failed to i2c_init");
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/device/hal/platform/7007/7007_iic.c",
        170,
        "iic_init",
        8,
        32,
        100,
        v12);
    }
    else
    {
      snprintf(
        (char *)s,
        0x800u,
        "i2c chain = %d, master = 0x%x, slave high= 0x%x, slave low = 0x%x",
        *(_DWORD *)a1,
        *(unsigned __int16 *)(a1 + 4),
        *(unsigned __int8 *)(a1 + 6),
        *(unsigned __int8 *)(a1 + 7));
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/backend/device/hal/platform/7007/7007_iic.c",
        170,
        "iic_init",
        8,
        36,
        20,
        v12);
      if ( i2c_select(v2, *(unsigned __int16 *)(a1 + 4)) )
      {
        strcpy((char *)s, "failed to i2c_select");
        V_LOCK();
        logfmt_raw(v12, 0x1000u, 0, s);
        V_UNLOCK();
        v3 = g_zc;
        v4 = 38;
        goto LABEL_6;
      }
      if ( i2c_ioctl(v2, 1795, (2 * *(unsigned __int8 *)(a1 + 7)) | (16 * *(unsigned __int8 *)(a1 + 6))) )
      {
        strcpy((char *)s, "failed to i2c_ioctl");
        V_LOCK();
        logfmt_raw(v12, 0x1000u, 0, s);
        V_UNLOCK();
        v3 = g_zc;
        v4 = 43;
LABEL_6:
        zlog(
          v3,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/backend/device/hal/platform/7007/7007_iic.c",
          170,
          "iic_init",
          8,
          v4,
          100,
          v12);
        if ( v2 )
        {
          v5 = v2;
          v2 = -1;
          i2c_uninit(v5);
        }
        else
        {
          v2 = -1;
        }
      }
    }
  }
  else
  {
    LOWORD(v7) = 8528;
    HIWORD(v7) = (unsigned int)&unk_139CB8 >> 16;
    v8 = *v7;
    v9 = v7[1];
    v10 = v7[2];
    v2 = -3;
    s[0] = v8;
    s[1] = v9;
    LOWORD(s[2]) = v10;
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/backend/device/hal/platform/7007/7007_iic.c",
      170,
      "iic_init",
      8,
      26,
      100,
      v12);
  }
  pthread_mutex_unlock(&stru_18A42C);
  return v2;
}
