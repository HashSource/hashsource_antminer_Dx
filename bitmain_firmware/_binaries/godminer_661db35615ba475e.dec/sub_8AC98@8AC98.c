int __fastcall sub_8AC98(char *a1, _DWORD *a2, _DWORD *a3, int a4)
{
  char v4; // r8
  int v5; // r5
  int v6; // r11
  int v7; // r11
  int v8; // r3
  int iic; // r4
  int v11; // r3
  char v12; // [sp+14h] [bp-1828h]
  __int16 v17; // [sp+28h] [bp-1814h] BYREF
  char v18; // [sp+2Ch] [bp-1810h]
  char v19; // [sp+2Dh] [bp-180Fh]
  int v20; // [sp+30h] [bp-180Ch] BYREF
  char v21; // [sp+34h] [bp-1808h]
  char v22; // [sp+35h] [bp-1807h]
  char v23; // [sp+36h] [bp-1806h]
  char v24; // [sp+37h] [bp-1805h]
  char s[2040]; // [sp+38h] [bp-1804h] BYREF
  char v26[4100]; // [sp+838h] [bp-1004h] BYREF

  v4 = a4;
  *a3 = 0;
  v5 = *(_DWORD *)a1;
  v23 = (unsigned __int16)((unsigned __int8)a4 + 65) >> 8;
  v17 = 255;
  v24 = a4 + 65;
  v19 = 0;
  v22 = 0;
  v18 = a4;
  v21 = a4;
  v12 = 4;
  v20 = 990292565;
  while ( 1 )
  {
    pthread_mutex_lock(&i2c_mutex_all);
    v6 = g_bitmain_pic_state[2 * (unsigned __int8)v5];
    if ( pthread_mutex_lock(&stru_197C58) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v26, 0x1000u, 0, s);
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
        v26);
    }
    else
    {
      i2c_write(v6, (int)&v20, 8);
      pthread_mutex_unlock(&stru_197C58);
    }
    usleep(0x2710u);
    v7 = g_bitmain_pic_state[2 * (unsigned __int8)v5];
    if ( pthread_mutex_lock(&stru_197C58) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v26, 0x1000u, 0, s);
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
        v26);
    }
    else
    {
      i2c_read(v7, (int)&v17, 2);
      pthread_mutex_unlock(&stru_197C58);
    }
    pthread_mutex_unlock(&i2c_mutex_all);
    if ( (unsigned __int8)v17 == 59 && HIBYTE(v17) == 1 )
      break;
    snprintf(s, 0x800u, "PICCMD %d failed on Chain[%d]!", 59, (unsigned __int8)v5);
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v26, 0x1000u, 0, s);
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
      v26);
    sleep(1u);
    v8 = (unsigned __int8)(v12 - 1);
    v12 = v8;
    if ( !v8 )
    {
      iic = 0;
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v26, 0x1000u, 0, "pic temp write iic error! chain %d iic_addr %d", *(_DWORD *)a1, a4);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/chip_setting.c",
        143,
        "ChipSetting_read_sensor_temp_local_on_pic_VBK",
        45,
        624,
        20,
        v26);
      return iic;
    }
  }
  snprintf(s, 0x800u, "PICCMD %d passed on Chain[%d]!", 59, (unsigned __int8)v5);
  V_LOCK();
  logfmt_raw(v26, 0x1000u, 0, s);
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
    v26);
  usleep(0x2710u);
  iic = pic1704_read_iic(*a1, v4, s);
  if ( iic )
  {
    v11 = s[0];
    *a3 = 1;
    *a2 = v11;
  }
  else
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v26, 0x1000u, 0, "fail to read pic temp for chain %d iic_addr %d", *(_DWORD *)a1, a4);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/chip_setting.c",
      143,
      "ChipSetting_read_sensor_temp_local_on_pic_VBK",
      45,
      635,
      20,
      v26);
  }
  return iic;
}
