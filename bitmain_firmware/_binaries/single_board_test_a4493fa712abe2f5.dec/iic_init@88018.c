int __fastcall iic_init(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r3
  int v5; // r0
  int v7; // r2
  int v8; // r1
  int v9; // r0
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v11[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_3B5254) )
  {
    v2 = -4;
    strcpy(s, "failed to iic lock\n");
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c",
      81,
      "iic_init",
      8,
      20,
      100,
      v11);
    return v2;
  }
  if ( !a1 )
  {
    v2 = -3;
    strcpy(s, "bad param\n");
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v11, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_3B526C);
    v7 = 26;
    LOWORD(v8) = -30884;
    v9 = g_zc;
    goto LABEL_11;
  }
  v2 = i2c_init();
  if ( v2 < 0 )
  {
    v2 = -1;
    strcpy(s, "failed to i2c_init\n");
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v11, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_3B526C);
    v7 = 32;
    LOWORD(v8) = (unsigned __int16)"/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c";
    v9 = g_zc;
LABEL_11:
    HIWORD(v8) = (unsigned int)"/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c" >> 16;
    zlog(v9, v8, 81, "iic_init", 8, v7, 100, v11);
    goto LABEL_8;
  }
  snprintf(
    s,
    0x800u,
    "i2c chain = %d, master = 0x%x, slave high= 0x%x, slave low = 0x%x\n",
    *(_DWORD *)a1,
    *(unsigned __int16 *)(a1 + 4),
    *(unsigned __int8 *)(a1 + 6),
    *(unsigned __int8 *)(a1 + 7));
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v11, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c",
    81,
    "iic_init",
    8,
    36,
    20,
    v11);
  if ( i2c_select(v2, *(unsigned __int16 *)(a1 + 4)) )
  {
    strcpy(s, "failed to i2c_select\n");
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v11, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_3B526C);
    v3 = g_zc;
    v4 = 38;
    goto LABEL_6;
  }
  if ( i2c_ioctl(v2, 1795, (2 * *(unsigned __int8 *)(a1 + 7)) | (16 * *(unsigned __int8 *)(a1 + 6))) )
  {
    strcpy(s, "failed to i2c_ioctl\n");
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v11, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_3B526C);
    v3 = g_zc;
    v4 = 43;
LABEL_6:
    zlog(
      v3,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c",
      81,
      "iic_init",
      8,
      v4,
      100,
      v11);
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
LABEL_8:
  pthread_mutex_unlock(&stru_3B5254);
  return v2;
}
