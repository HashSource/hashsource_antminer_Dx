int __fastcall sub_971C0(unsigned __int8 a1, char a2, _BYTE *a3)
{
  unsigned __int8 v6; // r3
  int v7; // r4
  __int16 v8; // r3
  int v9; // r4
  int v10; // r5
  int v11; // r0
  int v12; // r2
  int v14; // r4
  int v15; // r4
  char v16; // r3
  int v17; // [sp+1Ch] [bp-1820h] BYREF
  int v18; // [sp+20h] [bp-181Ch]
  char v19; // [sp+24h] [bp-1818h]
  int v20; // [sp+28h] [bp-1814h] BYREF
  int v21; // [sp+2Ch] [bp-1810h]
  int v22; // [sp+30h] [bp-180Ch]
  int v23; // [sp+34h] [bp-1808h]
  char v24[2040]; // [sp+38h] [bp-1804h] BYREF
  char v25[4100]; // [sp+838h] [bp-1004h] BYREF

  v20 = 255;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  pthread_mutex_lock(&i2c_mutex_all);
  v6 = 2 * a2;
  v7 = g_bitmain_pic_state[2 * a1];
  v17 = 839363157;
  v8 = v6 | 1;
  LOBYTE(v18) = v8;
  v19 = v8 + 92;
  HIBYTE(v18) = (unsigned __int16)(v8 + 92) >> 8;
  *(_WORD *)((char *)&v18 + 1) = 545;
  if ( pthread_mutex_lock(&stru_1A8A58) )
  {
    strcpy(v24, "failed to i2c lock\n");
    V_LOCK();
    logfmt_raw(v25, 0x1000u, 0, v24);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_iic.c",
      164,
      "iic_write",
      9,
      103,
      100,
      v25);
    goto LABEL_3;
  }
  v9 = i2c_write(v7, (int)&v17, 9);
  pthread_mutex_unlock(&stru_1A8A58);
  if ( v9 != 9 )
  {
LABEL_3:
    v10 = 1;
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v25, 0x1000u, 0, "%s write iic err", "read_dc_dc");
    pthread_mutex_unlock(&stru_1A8A24);
    v11 = g_zc;
    v12 = 110;
LABEL_4:
    zlog(
      v11,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/drv_pic/isl68127.c",
      158,
      "read_dc_dc",
      10,
      v12,
      100,
      v25);
    goto LABEL_5;
  }
  usleep(0x30D40u);
  v20 = 0;
  v14 = g_bitmain_pic_state[2 * a1];
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v10 = pthread_mutex_lock(&stru_1A8A58);
  if ( v10 )
  {
    strcpy(v24, "failed to i2c lock\n");
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v25, 0x1000u, 0, v24);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_iic.c",
      164,
      "iic_read",
      8,
      83,
      100,
      v25);
    goto LABEL_11;
  }
  v15 = i2c_read(v14, (int)&v20, 5);
  pthread_mutex_unlock(&stru_1A8A58);
  if ( v15 != 5 )
  {
LABEL_11:
    v10 = 1;
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v25, 0x1000u, 0, "%s read iic err", "read_dc_dc");
    pthread_mutex_unlock(&stru_1A8A24);
    v11 = g_zc;
    v12 = 118;
    goto LABEL_4;
  }
  if ( BYTE1(v20) == 50 && BYTE2(v20) == 1 )
  {
    v10 = 1;
    v16 = v21;
    *a3 = HIBYTE(v20);
    a3[1] = v16;
  }
  else
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(
      v25,
      0x1000u,
      0,
      "--- %s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x, read_back_data[2] = 0x%02x, read_back_data[3] = 0x%02x",
      "read_dc_dc",
      (unsigned __int8)v20,
      BYTE1(v20),
      BYTE2(v20),
      HIBYTE(v20));
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/drv_pic/isl68127.c",
      158,
      "read_dc_dc",
      10,
      125,
      100,
      v25);
  }
LABEL_5:
  pthread_mutex_unlock(&i2c_mutex_all);
  return v10;
}
