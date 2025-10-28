int __fastcall dev_init_pic_for_one_chain(int a1)
{
  int v1; // r3
  int v2; // r7
  int v3; // r2
  int v4; // r8
  int v5; // r11
  int v6; // r11
  int v8; // r7
  int v9; // r9
  int v10; // r9
  int v11; // [sp+14h] [bp-1820h]
  int v12; // [sp+18h] [bp-181Ch]
  __int16 v13; // [sp+24h] [bp-1810h] BYREF
  int v14; // [sp+28h] [bp-180Ch] BYREF
  __int16 v15; // [sp+2Ch] [bp-1808h]
  char s[2048]; // [sp+30h] [bp-1804h] BYREF
  int v17; // [sp+830h] [bp-1004h] BYREF
  __int16 v18; // [sp+834h] [bp-1000h]
  char v19; // [sp+836h] [bp-FFEh]
  char v20; // [sp+837h] [bp-FFDh]

  v11 = a1;
  if ( !g_chain_info[8 * a1 + 4] )
  {
    printf("Chain offset %d is invalid\n", a1);
    return -1;
  }
  v1 = *(_DWORD *)&g_chain_info[8 * a1];
  v2 = (unsigned __int8)v1;
  v3 = g_bitmain_pic_state[2 * (unsigned __int8)v1];
  if ( !v3 || !g_bitmain_pic_state[2 * (unsigned __int8)v1 + 1] )
  {
    v20 = *(_DWORD *)&g_chain_info[8 * a1];
    v18 = 0;
    v19 = byte_195C84;
    v17 = (unsigned __int8)v1;
    pthread_mutex_lock(&i2c_mutex_all);
    v4 = iic_init((int)&v17);
    pthread_mutex_unlock(&i2c_mutex_all);
    if ( v4 >= 0 )
    {
      g_bitmain_pic_state[2 * v2] = v4;
      g_bitmain_pic_state[2 * v2 + 1] = 1;
      v2 = g_chain_info[8 * v11];
      goto LABEL_6;
    }
LABEL_26:
    V_LOCK();
    logfmt_raw(
      (char *)&v17,
      0x1000u,
      0,
      "chain_offset %d, chain %, open pic error!",
      total_chain,
      *(_DWORD *)&g_chain_info[8 * total_chain]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/platform_device_hal.c",
      157,
      "dev_init_pic_for_one_chain",
      26,
      132,
      100,
      &v17);
    return -1;
  }
  if ( v3 < 0 )
    goto LABEL_26;
LABEL_6:
  v15 = 2816;
  v13 = 255;
  v14 = 117746261;
  LOBYTE(v12) = 4;
  while ( 1 )
  {
    pthread_mutex_lock(&i2c_mutex_all);
    v5 = g_bitmain_pic_state[2 * v2];
    if ( pthread_mutex_lock(&stru_197C58) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw((char *)&v17, 0x1000u, 0, s);
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
        &v17);
    }
    else
    {
      i2c_write(v5, (int)&v14, 6);
      pthread_mutex_unlock(&stru_197C58);
    }
    usleep(0x2710u);
    v6 = g_bitmain_pic_state[2 * v2];
    if ( pthread_mutex_lock(&stru_197C58) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw((char *)&v17, 0x1000u, 0, s);
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
        &v17);
    }
    else
    {
      i2c_read(v6, (int)&v13, 2);
      pthread_mutex_unlock(&stru_197C58);
    }
    pthread_mutex_unlock(&i2c_mutex_all);
    if ( (unsigned __int8)v13 == 7 && HIBYTE(v13) == 1 )
      break;
    snprintf(s, 0x800u, "PICCMD %d failed on Chain[%d]!", 7, v2);
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw((char *)&v17, 0x1000u, 0, s);
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
      &v17);
    sleep(1u);
    v12 = (unsigned __int8)(v12 - 1);
    if ( !v12 )
    {
      printf("chain_offset %d, chain %, reset pic error!", total_chain, *(_DWORD *)&g_chain_info[8 * total_chain]);
      return -1;
    }
  }
  snprintf(s, 0x800u, "PICCMD %d passed on Chain[%d]!", 7, v2);
  V_LOCK();
  logfmt_raw((char *)&v17, 0x1000u, 0, s);
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
    &v17);
  usleep((__useconds_t)&loc_493E0);
  v15 = 0;
  v13 = 0;
  v8 = *(_DWORD *)&g_chain_info[8 * v11];
  LOBYTE(v13) = -1;
  v14 = 100969045;
  HIBYTE(v15) = 10;
  LOBYTE(v11) = 4;
  while ( 1 )
  {
    pthread_mutex_lock(&i2c_mutex_all);
    v9 = g_bitmain_pic_state[2 * (unsigned __int8)v8];
    if ( pthread_mutex_lock(&stru_197C58) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw((char *)&v17, 0x1000u, 0, s);
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
        &v17);
    }
    else
    {
      i2c_write(v9, (int)&v14, 6);
      pthread_mutex_unlock(&stru_197C58);
    }
    usleep(0x2710u);
    v10 = g_bitmain_pic_state[2 * (unsigned __int8)v8];
    if ( pthread_mutex_lock(&stru_197C58) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw((char *)&v17, 0x1000u, 0, s);
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
        &v17);
    }
    else
    {
      i2c_read(v10, (int)&v13, 2);
      pthread_mutex_unlock(&stru_197C58);
    }
    pthread_mutex_unlock(&i2c_mutex_all);
    if ( (unsigned __int8)v13 == 6 && HIBYTE(v13) == 1 )
      break;
    snprintf(s, 0x800u, "PICCMD %d failed on Chain[%d]!", 6, (unsigned __int8)v8);
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw((char *)&v17, 0x1000u, 0, s);
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
      &v17);
    sleep(1u);
    v11 = (unsigned __int8)(v11 - 1);
    if ( !v11 )
    {
      printf("chain_offset %d, chain %, pic jump to app error!", total_chain, *(_DWORD *)&g_chain_info[8 * total_chain]);
      return -1;
    }
  }
  snprintf(s, 0x800u, "PICCMD %d passed on Chain[%d]!", 6, (unsigned __int8)v8);
  V_LOCK();
  logfmt_raw((char *)&v17, 0x1000u, 0, s);
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
    &v17);
  usleep(0x493E0u);
  return 0;
}
