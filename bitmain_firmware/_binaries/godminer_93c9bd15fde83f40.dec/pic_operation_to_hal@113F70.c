int __fastcall pic_operation_to_hal(int a1, int a2, unsigned int a3, void *a4)
{
  char v5; // r8
  int flash; // r4
  size_t v8; // r6
  int v9; // r3
  size_t v10; // r11
  char v11; // r4
  _BYTE *v12; // r5
  _BYTE *v13; // r9
  __int16 v14; // r3
  int v15; // r1
  __int16 v16; // r3
  _BYTE *v17; // r2
  char *v18; // r12
  _BYTE *v19; // r4
  __int16 v20; // t1
  int v21; // r0
  int v22; // r1
  int v23; // r6
  int v24; // r11
  int v25; // r11
  int v26; // r3
  int v27; // r3
  int v28; // r3
  int v29; // r3
  int src; // [sp+14h] [bp-1820h]
  unsigned __int8 v32; // [sp+18h] [bp-181Ch]
  char v33; // [sp+18h] [bp-181Ch]
  int v34; // [sp+28h] [bp-180Ch] BYREF
  char v35; // [sp+2Ch] [bp-1808h]
  _DWORD s[512]; // [sp+30h] [bp-1804h] BYREF
  char v37[4100]; // [sp+830h] [bp-1004h] BYREF

  v5 = a3;
  if ( a2 == 51 )
  {
    v8 = HIWORD(a3);
    v9 = *(_DWORD *)&g_chain_info[8 * a1];
    v10 = HIWORD(a3) + 8;
    v34 = 255;
    v11 = BYTE2(a3);
    v32 = v9;
    v35 = 0;
    v12 = malloc(v10);
    v13 = malloc(v8 + 2);
    *v13 = v5;
    v13[1] = v11;
    memcpy(v13 + 2, a4, v8);
    v14 = (unsigned __int8)(v11 + 6);
    v15 = (unsigned __int8)(v11 + 2);
    v12[3] = 51;
    v12[2] = v14;
    *(_WORD *)v12 = -21931;
    v16 = v14 + 51;
    if ( v11 == -2 )
    {
      v22 = 5;
      v21 = 4;
    }
    else
    {
      v17 = v13 - 1;
      v18 = v12 + 3;
      v19 = &v13[(unsigned __int8)(v11 + 1)];
      do
      {
        v20 = (unsigned __int8)*++v17;
        v16 += v20;
        *++v18 = v20;
      }
      while ( v17 != v19 );
      v21 = v15 + 4;
      v22 = v15 + 5;
    }
    v23 = v32;
    src = (unsigned __int8)v10;
    v12[v21] = HIBYTE(v16);
    v12[v22] = v16;
    v33 = 4;
    while ( 1 )
    {
      pthread_mutex_lock(&i2c_mutex_all);
      v24 = g_bitmain_pic_state[2 * v23];
      if ( pthread_mutex_lock(&stru_1A8A58) )
      {
        strcpy((char *)s, "failed to i2c lock\n");
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw(v37, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_1A8A24);
        LOWORD(v28) = -15496;
        HIWORD(v28) = (unsigned int)"enkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c" >> 16;
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_iic.c",
          164,
          v28,
          9,
          103,
          100,
          v37);
      }
      else
      {
        i2c_write(v24, (int)v12, src);
        pthread_mutex_unlock(&stru_1A8A58);
      }
      usleep(0x2710u);
      v25 = g_bitmain_pic_state[2 * v23];
      if ( pthread_mutex_lock(&stru_1A8A58) )
      {
        strcpy((char *)s, "failed to i2c lock\n");
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw(v37, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_1A8A24);
        LOWORD(v29) = -15484;
        HIWORD(v29) = (unsigned int)"ns/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c" >> 16;
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_iic.c",
          164,
          v29,
          8,
          83,
          100,
          v37);
      }
      else
      {
        i2c_read(v25, (int)&v34, 5);
        pthread_mutex_unlock(&stru_1A8A58);
      }
      pthread_mutex_unlock(&i2c_mutex_all);
      if ( BYTE1(v34) == 51 && (unsigned __int8)v34 == 5 )
        break;
      snprintf((char *)s, 0x800u, "PICCMD %d failed on Chain[%d]!", 51, v23);
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v37, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/drv_pic/pic_1704.c",
        158,
        "pic_process_cmd",
        15,
        116,
        20,
        v37);
      sleep(1u);
      v26 = (unsigned __int8)(v33 - 1);
      v33 = v26;
      if ( !v26 )
      {
        flash = 0;
        free(v13);
        free(v12);
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw(v37, 0x1000u, 0, "chain %d, pic1704_write_flash failed!!!", *(_DWORD *)&g_chain_info[8 * a1]);
        pthread_mutex_unlock(&stru_1A8A24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/platform_device_hal.c",
          157,
          "pic_operation_to_hal",
          20,
          427,
          100,
          v37);
        return flash;
      }
    }
    snprintf((char *)s, 0x800u, "PICCMD %d passed on Chain[%d]!");
    V_LOCK();
    logfmt_raw(v37, 0x1000u, 0, s);
    V_UNLOCK();
    flash = 1;
    LOWORD(v27) = -15472;
    HIWORD(v27) = (unsigned int)"/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c" >> 16;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/drv_pic/pic_1704.c",
      158,
      v27,
      15,
      111,
      20,
      v37);
    free(v13);
    free(v12);
    return flash;
  }
  if ( a2 != 52 )
    return -1;
  flash = pic1704_read_flash(g_chain_info[8 * a1], a4, a3, HIWORD(a3));
  if ( flash == 1 )
    return flash;
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v37, 0x1000u, 0, 1610692, *(_DWORD *)&g_chain_info[8 * a1]);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/platform_device_hal.c",
    157,
    "pic_operation_to_hal",
    20,
    435,
    100,
    v37);
  return flash;
}
