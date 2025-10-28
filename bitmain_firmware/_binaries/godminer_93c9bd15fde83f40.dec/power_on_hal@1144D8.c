int __fastcall power_on_hal(int a1, unsigned __int16 a2, int a3)
{
  int v4; // r5
  int v5; // r11
  int v6; // r11
  int v7; // r3
  int v8; // r3
  int v9; // r2
  int v10; // r11
  int v11; // r5
  int v12; // r5
  int v13; // r3
  int v14; // r2
  int v15; // r7
  int v16; // r8
  int v17; // r8
  int v18; // r3
  int v20; // r3
  int v21; // r3
  int v22; // r3
  int v23; // r3
  int v24; // r3
  int v25; // r3
  int v26; // r3
  int v27; // r3
  int v28; // r3
  int v29; // r7
  bool v30; // zf
  char v31; // [sp+14h] [bp-1830h]
  int v32; // [sp+14h] [bp-1830h]
  int v33; // [sp+14h] [bp-1830h]
  int v36; // [sp+28h] [bp-181Ch]
  int v37; // [sp+2Ch] [bp-1818h]
  __int16 v38; // [sp+34h] [bp-1810h] BYREF
  int v39; // [sp+38h] [bp-180Ch] BYREF
  __int16 v40; // [sp+3Ch] [bp-1808h]
  char v41; // [sp+3Eh] [bp-1806h]
  _DWORD s[512]; // [sp+40h] [bp-1804h] BYREF
  char v43[4100]; // [sp+840h] [bp-1004h] BYREF

  *(_DWORD *)(dword_1A8A8C + 52) |= 1 << *(_DWORD *)&g_chain_info[8 * a1];
  usleep((__useconds_t)&loc_493E0);
  v4 = *(_DWORD *)&g_chain_info[8 * a1];
  v39 = 117746261;
  v40 = 2816;
  v31 = 4;
  v38 = 255;
  while ( 1 )
  {
    pthread_mutex_lock(&i2c_mutex_all);
    v5 = g_bitmain_pic_state[2 * (unsigned __int8)v4];
    if ( pthread_mutex_lock(&stru_1A8A58) )
    {
      strcpy((char *)s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v43, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_1A8A24);
      LOWORD(v22) = -15496;
      HIWORD(v22) = (unsigned int)"enkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c" >> 16;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_iic.c",
        164,
        v22,
        9,
        103,
        100,
        v43);
    }
    else
    {
      i2c_write(v5, (int)&v39, 6);
      pthread_mutex_unlock(&stru_1A8A58);
    }
    usleep(0x2710u);
    v6 = g_bitmain_pic_state[2 * (unsigned __int8)v4];
    if ( pthread_mutex_lock(&stru_1A8A58) )
    {
      strcpy((char *)s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v43, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_1A8A24);
      LOWORD(v23) = -15484;
      HIWORD(v23) = (unsigned int)"ns/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c" >> 16;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_iic.c",
        164,
        v23,
        8,
        83,
        100,
        v43);
    }
    else
    {
      i2c_read(v6, (int)&v38, 2);
      pthread_mutex_unlock(&stru_1A8A58);
    }
    pthread_mutex_unlock(&i2c_mutex_all);
    if ( (unsigned __int8)v38 == 7 && HIBYTE(v38) == 1 )
      break;
    snprintf((char *)s, 0x800u, "PICCMD %d failed on Chain[%d]!", 7, (unsigned __int8)v4);
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v43, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_1A8A24);
    LOWORD(v7) = -15472;
    HIWORD(v7) = (unsigned int)"/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c" >> 16;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/drv_pic/pic_1704.c",
      158,
      v7,
      15,
      103,
      20,
      v43);
    sleep(1u);
    v8 = (unsigned __int8)(v31 - 1);
    v31 = v8;
    if ( !v8 )
    {
      v37 = 0;
      v36 = 1;
      goto LABEL_10;
    }
  }
  snprintf((char *)s, 0x800u, "PICCMD %d passed on Chain[%d]!");
  V_LOCK();
  v37 = 1;
  logfmt_raw(v43, 0x1000u, 0, s);
  V_UNLOCK();
  LOWORD(v20) = -15472;
  HIWORD(v20) = (unsigned int)"/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c" >> 16;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/drv_pic/pic_1704.c",
    158,
    v20,
    15,
    98,
    20,
    v43);
  v36 = 2;
LABEL_10:
  usleep((__useconds_t)&loc_493E0);
  v9 = *(_DWORD *)&g_chain_info[8 * a1];
  v39 = 100969045;
  v40 = 2560;
  v10 = (unsigned __int8)v9;
  v38 = 255;
  LOBYTE(v32) = 4;
  while ( 1 )
  {
    pthread_mutex_lock(&i2c_mutex_all);
    v11 = g_bitmain_pic_state[2 * v10];
    if ( pthread_mutex_lock(&stru_1A8A58) )
    {
      strcpy((char *)s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v43, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_1A8A24);
      LOWORD(v24) = -15496;
      HIWORD(v24) = (unsigned int)"enkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c" >> 16;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_iic.c",
        164,
        v24,
        9,
        103,
        100,
        v43);
    }
    else
    {
      i2c_write(v11, (int)&v39, 6);
      pthread_mutex_unlock(&stru_1A8A58);
    }
    usleep(0x2710u);
    v12 = g_bitmain_pic_state[2 * v10];
    if ( pthread_mutex_lock(&stru_1A8A58) )
    {
      strcpy((char *)s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v43, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_1A8A24);
      LOWORD(v25) = -15484;
      HIWORD(v25) = (unsigned int)"ns/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c" >> 16;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_iic.c",
        164,
        v25,
        8,
        83,
        100,
        v43);
    }
    else
    {
      i2c_read(v12, (int)&v38, 2);
      pthread_mutex_unlock(&stru_1A8A58);
    }
    pthread_mutex_unlock(&i2c_mutex_all);
    if ( (unsigned __int8)v38 == 6 && HIBYTE(v38) == 1 )
      break;
    snprintf((char *)s, 0x800u, "PICCMD %d failed on Chain[%d]!", 6, v10);
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v43, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_1A8A24);
    LOWORD(v13) = -15472;
    HIWORD(v13) = (unsigned int)"/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c" >> 16;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/drv_pic/pic_1704.c",
      158,
      v13,
      15,
      103,
      20,
      v43);
    sleep(1u);
    v32 = (unsigned __int8)(v32 - 1);
    if ( !v32 )
    {
      v36 = v37;
      goto LABEL_19;
    }
  }
  snprintf((char *)s, 0x800u, "PICCMD %d passed on Chain[%d]!");
  V_LOCK();
  logfmt_raw(v43, 0x1000u, 0, s);
  V_UNLOCK();
  LOWORD(v21) = -15472;
  HIWORD(v21) = (unsigned int)"/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c" >> 16;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/drv_pic/pic_1704.c",
    158,
    v21,
    15,
    98,
    20,
    v43);
LABEL_19:
  usleep(0x493E0u);
  if ( !a3 )
    set_chain_isl_voltage(*(_DWORD *)&g_chain_info[8 * a1], a2);
  v14 = *(_DWORD *)&g_chain_info[8 * a1];
  v39 = 352692821;
  v15 = (unsigned __int8)v14;
  v38 = 255;
  v40 = 1;
  LOBYTE(v33) = 4;
  v41 = 27;
  while ( 1 )
  {
    pthread_mutex_lock(&i2c_mutex_all);
    v16 = g_bitmain_pic_state[2 * v15];
    if ( pthread_mutex_lock(&stru_1A8A58) )
    {
      strcpy((char *)s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v43, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_1A8A24);
      LOWORD(v27) = -15496;
      HIWORD(v27) = (unsigned int)"enkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c" >> 16;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_iic.c",
        164,
        v27,
        9,
        103,
        100,
        v43);
    }
    else
    {
      i2c_write(v16, (int)&v39, 7);
      pthread_mutex_unlock(&stru_1A8A58);
    }
    usleep(0x2710u);
    v17 = g_bitmain_pic_state[2 * v15];
    if ( pthread_mutex_lock(&stru_1A8A58) )
    {
      strcpy((char *)s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v43, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_1A8A24);
      LOWORD(v26) = -15484;
      HIWORD(v26) = (unsigned int)"ns/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c" >> 16;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_iic.c",
        164,
        v26,
        8,
        83,
        100,
        v43);
    }
    else
    {
      i2c_read(v17, (int)&v38, 2);
      pthread_mutex_unlock(&stru_1A8A58);
    }
    pthread_mutex_unlock(&i2c_mutex_all);
    if ( (unsigned __int8)v38 == 21 && HIBYTE(v38) == 1 )
      break;
    snprintf((char *)s, 0x800u, "PICCMD %d failed on Chain[%d]!", 21, v15);
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v43, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_1A8A24);
    LOWORD(v18) = -15472;
    HIWORD(v18) = (unsigned int)"/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c" >> 16;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/drv_pic/pic_1704.c",
      158,
      v18,
      15,
      103,
      20,
      v43);
    sleep(1u);
    v33 = (unsigned __int8)(v33 - 1);
    if ( !v33 )
      goto LABEL_29;
  }
  snprintf((char *)s, 0x800u, "PICCMD %d passed on Chain[%d]!");
  V_LOCK();
  ++v36;
  logfmt_raw(v43, 0x1000u, 0, s);
  V_UNLOCK();
  LOWORD(v28) = -15472;
  HIWORD(v28) = (unsigned int)"/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c" >> 16;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/drv_pic/pic_1704.c",
    158,
    v28,
    15,
    98,
    20,
    v43);
  if ( v36 != 3 )
  {
LABEL_29:
    V_LOCK();
    logfmt_raw(v43, 0x1000u, 0, 1610772, *(_DWORD *)&g_chain_info[8 * a1], v36);
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
      v43);
    return -1;
  }
  usleep((__useconds_t)&loc_493E0);
  v29 = 2;
  *(_DWORD *)(dword_1A8A8C + 52) &= ~(1 << *(_DWORD *)&g_chain_info[8 * a1]);
  do
  {
    usleep((__useconds_t)&loc_493E0);
    *(_DWORD *)(dword_1A8A8C + 52) |= 1 << *(_DWORD *)&g_chain_info[8 * a1];
    usleep((__useconds_t)&loc_F4240);
    v30 = v29 == 1;
    v29 = 1;
    *(_DWORD *)(dword_1A8A8C + 52) &= ~(1 << *(_DWORD *)&g_chain_info[8 * a1]);
  }
  while ( !v30 );
  usleep(0x493E0u);
  return 0;
}
