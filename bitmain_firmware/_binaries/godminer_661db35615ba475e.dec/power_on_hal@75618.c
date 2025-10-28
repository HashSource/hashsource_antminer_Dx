int __fastcall power_on_hal(int a1, unsigned __int16 a2, int a3)
{
  int v4; // r5
  int v5; // r11
  int v6; // r11
  int v7; // r3
  int v8; // r2
  int v9; // r11
  int v10; // r5
  int v11; // r5
  int v12; // r2
  int v13; // r7
  int v14; // r8
  int v15; // r8
  int v17; // r7
  bool v18; // zf
  char v19; // [sp+14h] [bp-1830h]
  int v20; // [sp+14h] [bp-1830h]
  int v21; // [sp+14h] [bp-1830h]
  int v23; // [sp+20h] [bp-1824h]
  int v25; // [sp+28h] [bp-181Ch]
  int v26; // [sp+2Ch] [bp-1818h]
  __int16 v27; // [sp+34h] [bp-1810h] BYREF
  int v28; // [sp+38h] [bp-180Ch] BYREF
  __int16 v29; // [sp+3Ch] [bp-1808h]
  char v30; // [sp+3Eh] [bp-1806h]
  char s[2048]; // [sp+40h] [bp-1804h] BYREF
  char v32[4100]; // [sp+840h] [bp-1004h] BYREF

  *(_DWORD *)(dword_197C8C + 52) |= 1 << *(_DWORD *)&g_chain_info[8 * a1];
  usleep((__useconds_t)&loc_493E0);
  v4 = *(_DWORD *)&g_chain_info[8 * a1];
  v28 = 117746261;
  v29 = 2816;
  v19 = 4;
  v27 = 255;
  while ( 1 )
  {
    pthread_mutex_lock(&i2c_mutex_all);
    v5 = g_bitmain_pic_state[2 * (unsigned __int8)v4];
    if ( pthread_mutex_lock(&stru_197C58) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v32, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_iic.c",
        164,
        "iic_write",
        9,
        103,
        100,
        v32);
    }
    else
    {
      i2c_write(v5, (int)&v28, 6);
      pthread_mutex_unlock(&stru_197C58);
    }
    usleep(0x2710u);
    v6 = g_bitmain_pic_state[2 * (unsigned __int8)v4];
    if ( pthread_mutex_lock(&stru_197C58) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v32, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_iic.c",
        164,
        "iic_read",
        8,
        83,
        100,
        v32);
    }
    else
    {
      i2c_read(v6, (int)&v27, 2);
      pthread_mutex_unlock(&stru_197C58);
    }
    pthread_mutex_unlock(&i2c_mutex_all);
    if ( (unsigned __int8)v27 == 7 && HIBYTE(v27) == 1 )
      break;
    snprintf(s, 0x800u, "PICCMD %d failed on Chain[%d]!", 7, (unsigned __int8)v4);
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v32, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/drv_pic/pic_1704.c",
      158,
      "pic_process_cmd",
      15,
      103,
      20,
      v32);
    sleep(1u);
    v7 = (unsigned __int8)(v19 - 1);
    v19 = v7;
    if ( !v7 )
    {
      v26 = 0;
      v25 = 1;
      goto LABEL_10;
    }
  }
  snprintf(s, 0x800u, "PICCMD %d passed on Chain[%d]!", 7, (unsigned __int8)v4);
  V_LOCK();
  v26 = 1;
  logfmt_raw(v32, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/drv_pic/pic_1704.c",
    158,
    "pic_process_cmd",
    15,
    98,
    20,
    v32);
  v25 = 2;
LABEL_10:
  usleep((__useconds_t)&loc_493E0);
  v8 = *(_DWORD *)&g_chain_info[8 * a1];
  v28 = 100969045;
  v29 = 2560;
  v9 = (unsigned __int8)v8;
  v27 = 255;
  LOBYTE(v20) = 4;
  while ( 1 )
  {
    pthread_mutex_lock(&i2c_mutex_all);
    v10 = g_bitmain_pic_state[2 * v9];
    if ( pthread_mutex_lock(&stru_197C58) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v32, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_iic.c",
        164,
        "iic_write",
        9,
        103,
        100,
        v32);
    }
    else
    {
      i2c_write(v10, (int)&v28, 6);
      pthread_mutex_unlock(&stru_197C58);
    }
    usleep(0x2710u);
    v11 = g_bitmain_pic_state[2 * v9];
    if ( pthread_mutex_lock(&stru_197C58) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v32, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_iic.c",
        164,
        "iic_read",
        8,
        83,
        100,
        v32);
    }
    else
    {
      i2c_read(v11, (int)&v27, 2);
      pthread_mutex_unlock(&stru_197C58);
    }
    pthread_mutex_unlock(&i2c_mutex_all);
    if ( (unsigned __int8)v27 == 6 && HIBYTE(v27) == 1 )
      break;
    snprintf(s, 0x800u, "PICCMD %d failed on Chain[%d]!", 6, v9);
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v32, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/drv_pic/pic_1704.c",
      158,
      "pic_process_cmd",
      15,
      103,
      20,
      v32);
    sleep(1u);
    v20 = (unsigned __int8)(v20 - 1);
    if ( !v20 )
    {
      v25 = v26;
      goto LABEL_19;
    }
  }
  snprintf(s, 0x800u, "PICCMD %d passed on Chain[%d]!", 6, v9);
  V_LOCK();
  logfmt_raw(v32, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/drv_pic/pic_1704.c",
    158,
    "pic_process_cmd",
    15,
    98,
    20,
    v32);
LABEL_19:
  usleep(0x493E0u);
  if ( !a3 )
    set_chain_isl_voltage(*(_DWORD *)&g_chain_info[8 * a1], a2);
  v12 = *(_DWORD *)&g_chain_info[8 * a1];
  v28 = 352692821;
  v13 = (unsigned __int8)v12;
  v27 = 255;
  v29 = 1;
  v23 = (unsigned __int8)v12;
  LOBYTE(v21) = 4;
  v30 = 27;
  while ( 1 )
  {
    pthread_mutex_lock(&i2c_mutex_all);
    v14 = g_bitmain_pic_state[2 * v13];
    if ( pthread_mutex_lock(&stru_197C58) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v32, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_iic.c",
        164,
        "iic_write",
        9,
        103,
        100,
        v32);
    }
    else
    {
      i2c_write(v14, (int)&v28, 7);
      pthread_mutex_unlock(&stru_197C58);
    }
    usleep(0x2710u);
    v15 = g_bitmain_pic_state[2 * v13];
    if ( pthread_mutex_lock(&stru_197C58) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v32, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_iic.c",
        164,
        "iic_read",
        8,
        83,
        100,
        v32);
    }
    else
    {
      i2c_read(v15, (int)&v27, 2);
      pthread_mutex_unlock(&stru_197C58);
    }
    pthread_mutex_unlock(&i2c_mutex_all);
    if ( (unsigned __int8)v27 == 21 && HIBYTE(v27) == 1 )
      break;
    snprintf(s, 0x800u, "PICCMD %d failed on Chain[%d]!", 21, v13);
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v32, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/drv_pic/pic_1704.c",
      158,
      "pic_process_cmd",
      15,
      103,
      20,
      v32);
    sleep(1u);
    v21 = (unsigned __int8)(v21 - 1);
    if ( !v21 )
      goto LABEL_29;
  }
  snprintf(s, 0x800u, "PICCMD %d passed on Chain[%d]!", 21, v23);
  V_LOCK();
  ++v25;
  logfmt_raw(v32, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/drv_pic/pic_1704.c",
    158,
    "pic_process_cmd",
    15,
    98,
    20,
    v32);
  if ( v25 != 3 )
  {
LABEL_29:
    V_LOCK();
    logfmt_raw(v32, 0x1000u, 0, "chain %d, pic init failed, err:%d!!!", *(_DWORD *)&g_chain_info[8 * a1], v25);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/platform_device_hal.c",
      157,
      "power_on_hal",
      12,
      369,
      100,
      v32);
    return -1;
  }
  usleep((__useconds_t)&loc_493E0);
  v17 = 2;
  *(_DWORD *)(dword_197C8C + 52) &= ~(1 << *(_DWORD *)&g_chain_info[8 * a1]);
  do
  {
    usleep((__useconds_t)&loc_493E0);
    *(_DWORD *)(dword_197C8C + 52) |= 1 << *(_DWORD *)&g_chain_info[8 * a1];
    usleep((__useconds_t)&loc_F4240);
    v18 = v17 == 1;
    v17 = 1;
    *(_DWORD *)(dword_197C8C + 52) &= ~(1 << *(_DWORD *)&g_chain_info[8 * a1]);
  }
  while ( !v18 );
  usleep(0x493E0u);
  return 0;
}
