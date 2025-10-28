int __fastcall sub_D4988(int a1, int a2, int a3, _BYTE *a4)
{
  int v5; // r6
  int v6; // r4
  int v7; // r11
  int v8; // r11
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  char v12[4100]; // [sp+820h] [bp-1004h] BYREF

  v5 = HIBYTE(a1);
  LOBYTE(v6) = 4;
  *(_DWORD *)a3 = 369404501;
  *(_BYTE *)(a3 + 4) = 0;
  *(_BYTE *)(a3 + 5) = 26;
  while ( 1 )
  {
    pthread_mutex_lock(&i2c_mutex_all);
    v7 = g_bitmain_pic_state[2 * v5];
    if ( pthread_mutex_lock(&stru_3B5254) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v12, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c",
        81,
        "iic_write",
        9,
        103,
        100,
        v12);
    }
    else
    {
      i2c_write(v7, a3, 6);
      pthread_mutex_unlock(&stru_3B5254);
    }
    usleep(0x2710u);
    v8 = g_bitmain_pic_state[2 * v5];
    if ( pthread_mutex_lock(&stru_3B5254) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v12, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c",
        81,
        "iic_read",
        8,
        83,
        100,
        v12);
    }
    else
    {
      i2c_read(v8, (int)a4, 6);
      pthread_mutex_unlock(&stru_3B5254);
    }
    pthread_mutex_unlock(&i2c_mutex_all);
    if ( a4[1] == 22 && *a4 == 6 )
      break;
    snprintf(s, 0x800u, "PICCMD %d failed on Chain[%d]!", 22, v5);
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v12, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/pic_1704.c",
      75,
      "pic_process_cmd",
      15,
      116,
      20,
      v12);
    sleep(1u);
    v6 = (unsigned __int8)(v6 - 1);
    if ( !v6 )
      return 0;
  }
  snprintf(s, 0x800u, "PICCMD %d passed on Chain[%d]!", 22, v5);
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/pic_1704.c",
    75,
    "pic_process_cmd",
    15,
    111,
    20,
    v12);
  return 1;
}
