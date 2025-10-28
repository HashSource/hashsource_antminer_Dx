int __fastcall power_on_hal(int a1, unsigned __int16 a2, int a3)
{
  int v4; // r5
  int v5; // r11
  int v6; // r11
  int v7; // r3
  int v8; // r2
  int v9; // r8
  int v10; // r5
  int v11; // r5
  int v12; // r2
  int v13; // r7
  int v14; // r8
  int v15; // r8
  int v17; // r6
  bool v18; // zf
  pthread_mutex_t *mutex; // [sp+14h] [bp-1830h]
  pthread_mutex_t *mutexa; // [sp+14h] [bp-1830h]
  char v21; // [sp+18h] [bp-182Ch]
  int v22; // [sp+18h] [bp-182Ch]
  int v25; // [sp+20h] [bp-1824h]
  int v26; // [sp+28h] [bp-181Ch]
  int v27; // [sp+2Ch] [bp-1818h]
  __int16 v28; // [sp+34h] [bp-1810h] BYREF
  int v29; // [sp+38h] [bp-180Ch] BYREF
  __int16 v30; // [sp+3Ch] [bp-1808h]
  char v31; // [sp+3Eh] [bp-1806h]
  char s[2048]; // [sp+40h] [bp-1804h] BYREF
  char v33[4100]; // [sp+840h] [bp-1004h] BYREF

  *(_DWORD *)(dword_3B52A4 + 52) |= 1 << *(_DWORD *)&g_chain_info[8 * a1];
  usleep((__useconds_t)&loc_493E0);
  v4 = (unsigned __int8)*(_DWORD *)&g_chain_info[8 * a1];
  v21 = 4;
  v29 = 117746261;
  v30 = 2816;
  v28 = 255;
  while ( 1 )
  {
    pthread_mutex_lock(&i2c_mutex_all);
    v5 = g_bitmain_pic_state[2 * v4];
    if ( pthread_mutex_lock(&stru_3B5254) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v33, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c",
        81,
        "iic_write",
        9,
        103,
        100,
        v33);
    }
    else
    {
      i2c_write(v5, (int)&v29, 6);
      pthread_mutex_unlock(&stru_3B5254);
    }
    usleep(0x2710u);
    v6 = g_bitmain_pic_state[2 * v4];
    if ( pthread_mutex_lock(&stru_3B5254) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v33, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c",
        81,
        "iic_read",
        8,
        83,
        100,
        v33);
    }
    else
    {
      i2c_read(v6, (int)&v28, 2);
      pthread_mutex_unlock(&stru_3B5254);
    }
    pthread_mutex_unlock(&i2c_mutex_all);
    if ( (unsigned __int8)v28 == 7 && HIBYTE(v28) == 1 )
      break;
    snprintf(s, 0x800u, "PICCMD %d failed on Chain[%d]!", 7, v4);
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v33, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/pic_1704.c",
      75,
      "pic_process_cmd",
      15,
      103,
      20,
      v33);
    sleep(1u);
    v7 = (unsigned __int8)(v21 - 1);
    v21 = v7;
    if ( !v7 )
    {
      v26 = 0;
      v22 = 1;
      goto LABEL_10;
    }
  }
  snprintf(s, 0x800u, "PICCMD %d passed on Chain[%d]!", 7, v4);
  V_LOCK();
  v26 = 1;
  logfmt_raw(v33, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/pic_1704.c",
    75,
    "pic_process_cmd",
    15,
    98,
    20,
    v33);
  v22 = 2;
LABEL_10:
  usleep((__useconds_t)&loc_493E0);
  v8 = *(_DWORD *)&g_chain_info[8 * a1];
  LOBYTE(mutex) = 4;
  v29 = 100969045;
  v9 = (unsigned __int8)v8;
  v30 = 2560;
  v27 = (unsigned __int8)v8;
  v28 = 255;
  while ( 1 )
  {
    pthread_mutex_lock(&i2c_mutex_all);
    v10 = g_bitmain_pic_state[2 * v9];
    if ( pthread_mutex_lock(&stru_3B5254) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v33, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c",
        81,
        "iic_write",
        9,
        103,
        100,
        v33);
    }
    else
    {
      i2c_write(v10, (int)&v29, 6);
      pthread_mutex_unlock(&stru_3B5254);
    }
    usleep(0x2710u);
    v11 = g_bitmain_pic_state[2 * v9];
    if ( pthread_mutex_lock(&stru_3B5254) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v33, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c",
        81,
        "iic_read",
        8,
        83,
        100,
        v33);
    }
    else
    {
      i2c_read(v11, (int)&v28, 2);
      pthread_mutex_unlock(&stru_3B5254);
    }
    pthread_mutex_unlock(&i2c_mutex_all);
    if ( (unsigned __int8)v28 == 6 && HIBYTE(v28) == 1 )
      break;
    snprintf(s, 0x800u, "PICCMD %d failed on Chain[%d]!", 6, v9);
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v33, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/pic_1704.c",
      75,
      "pic_process_cmd",
      15,
      103,
      20,
      v33);
    sleep(1u);
    mutex = (pthread_mutex_t *)(unsigned __int8)((_BYTE)mutex - 1);
    if ( !mutex )
    {
      v22 = v26;
      goto LABEL_19;
    }
  }
  snprintf(s, 0x800u, "PICCMD %d passed on Chain[%d]!", 6, v27);
  V_LOCK();
  logfmt_raw(v33, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/pic_1704.c",
    75,
    "pic_process_cmd",
    15,
    98,
    20,
    v33);
LABEL_19:
  usleep(0x493E0u);
  if ( !a3 )
    set_chain_isl_voltage(*(_DWORD *)&g_chain_info[8 * a1], a2);
  v12 = *(_DWORD *)&g_chain_info[8 * a1];
  v29 = 352692821;
  v13 = (unsigned __int8)v12;
  v28 = 255;
  v30 = 1;
  v25 = (unsigned __int8)v12;
  LOBYTE(mutexa) = 4;
  v31 = 27;
  while ( 1 )
  {
    pthread_mutex_lock(&i2c_mutex_all);
    v14 = g_bitmain_pic_state[2 * v13];
    if ( pthread_mutex_lock(&stru_3B5254) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v33, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c",
        81,
        "iic_write",
        9,
        103,
        100,
        v33);
    }
    else
    {
      i2c_write(v14, (int)&v29, 7);
      pthread_mutex_unlock(&stru_3B5254);
    }
    usleep(0x2710u);
    v15 = g_bitmain_pic_state[2 * v13];
    if ( pthread_mutex_lock(&stru_3B5254) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v33, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c",
        81,
        "iic_read",
        8,
        83,
        100,
        v33);
    }
    else
    {
      i2c_read(v15, (int)&v28, 2);
      pthread_mutex_unlock(&stru_3B5254);
    }
    pthread_mutex_unlock(&i2c_mutex_all);
    if ( (unsigned __int8)v28 == 21 && HIBYTE(v28) == 1 )
      break;
    snprintf(s, 0x800u, "PICCMD %d failed on Chain[%d]!", 21, v13);
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v33, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/pic_1704.c",
      75,
      "pic_process_cmd",
      15,
      103,
      20,
      v33);
    sleep(1u);
    mutexa = (pthread_mutex_t *)(unsigned __int8)((_BYTE)mutexa - 1);
    if ( !mutexa )
      goto LABEL_29;
  }
  snprintf(s, 0x800u, "PICCMD %d passed on Chain[%d]!", 21, v25);
  V_LOCK();
  ++v22;
  logfmt_raw(v33, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/pic_1704.c",
    75,
    "pic_process_cmd",
    15,
    98,
    20,
    v33);
  if ( v22 != 3 )
  {
LABEL_29:
    V_LOCK();
    logfmt_raw(v33, 0x1000u, 0, "chain %d, pic init failed, err:%d!!!", *(_DWORD *)&g_chain_info[8 * a1], v22);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/platform_device_hal.c",
      74,
      "power_on_hal",
      12,
      369,
      100,
      v33);
    return -1;
  }
  usleep((__useconds_t)&loc_493E0);
  v17 = 2;
  *(_DWORD *)(dword_3B52A4 + 52) &= ~(1 << *(_DWORD *)&g_chain_info[8 * a1]);
  do
  {
    usleep((__useconds_t)&loc_493E0);
    *(_DWORD *)(dword_3B52A4 + 52) |= 1 << *(_DWORD *)&g_chain_info[8 * a1];
    usleep((__useconds_t)&loc_F4240);
    v18 = v17 == 1;
    v17 = 1;
    *(_DWORD *)(dword_3B52A4 + 52) &= ~(1 << *(_DWORD *)&g_chain_info[8 * a1]);
  }
  while ( !v18 );
  usleep(0x493E0u);
  return 0;
}
