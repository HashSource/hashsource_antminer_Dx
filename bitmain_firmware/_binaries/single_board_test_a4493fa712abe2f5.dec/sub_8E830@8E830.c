int __fastcall sub_8E830(int a1, int a2, _BYTE *a3, unsigned __int8 *a4)
{
  int v4; // r7
  int v5; // r12
  __int16 v6; // r3
  unsigned int v7; // lr
  char v8; // r0
  __int16 v9; // r3
  unsigned __int8 *v10; // r0
  _BYTE *v11; // r4
  unsigned __int8 *v12; // r1
  char v13; // t1
  int v14; // r1
  unsigned int v15; // r6
  int v16; // r10
  int v17; // r10
  int v18; // r0
  int v19; // r12
  int v20; // r3
  int v21; // r10
  int v23; // r0
  int v24; // r4
  char v25; // [sp+14h] [bp-1820h]
  int v27; // [sp+1Ch] [bp-1818h]
  unsigned __int8 v29; // [sp+2Bh] [bp-1809h]
  char s[2048]; // [sp+30h] [bp-1804h] BYREF
  char v31[4100]; // [sp+830h] [bp-1004h] BYREF

  v29 = HIBYTE(a1);
  v4 = BYTE1(a1);
  a3[1] = -86;
  v5 = BYTE1(a1) + 4;
  v6 = (unsigned __int8)(BYTE1(a1) + 4);
  v27 = (unsigned __int8)a1;
  v7 = BYTE2(a1);
  v8 = v6 + a1;
  a3[3] = v27;
  a3[2] = v6;
  v9 = v6 + v27;
  *a3 = 85;
  if ( a2 )
  {
    if ( BYTE1(a1) )
    {
      v10 = (unsigned __int8 *)(a2 - 1);
      v11 = a3 + 3;
      v12 = (unsigned __int8 *)(a2 + (unsigned __int8)(v4 - 1));
      do
      {
        v13 = *++v10;
        *++v11 = v13;
        v9 += *v10;
      }
      while ( v12 != v10 );
      v14 = v4 + 5;
    }
    else
    {
      v14 = 5;
      v5 = 4;
    }
    a3[v5] = HIBYTE(v9);
    a3[v14] = v9;
  }
  else
  {
    a3[5] = v8;
    a3[4] = HIBYTE(v9);
  }
  v15 = v7;
  v25 = 4;
  while ( 1 )
  {
    pthread_mutex_lock(&i2c_mutex_all);
    v16 = g_bitmain_pic_state[2 * v29];
    if ( pthread_mutex_lock(&stru_3B5254) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v31, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c",
        81,
        "iic_write",
        9,
        103,
        100,
        v31);
    }
    else
    {
      i2c_write(v16, (int)a3, (unsigned __int8)(v4 + 6));
      pthread_mutex_unlock(&stru_3B5254);
    }
    usleep(0x2710u);
    v17 = g_bitmain_pic_state[2 * v29];
    if ( pthread_mutex_lock(&stru_3B5254) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v31, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c",
        81,
        "iic_read",
        8,
        83,
        100,
        v31);
    }
    else
    {
      i2c_read(v17, (int)a4, v15);
      pthread_mutex_unlock(&stru_3B5254);
    }
    pthread_mutex_unlock(&i2c_mutex_all);
    if ( v15 == 2 )
      break;
    if ( v15 > 2 )
    {
      if ( a4[1] == v27 && *a4 == v15 )
      {
        snprintf(s, 0x800u, "PICCMD %d passed on Chain[%d]!", v27, v29);
        V_LOCK();
        logfmt_raw(v31, 0x1000u, 0, s);
        V_UNLOCK();
        v23 = g_zc;
        v21 = 1;
        v24 = 111;
        goto LABEL_30;
      }
      snprintf(s, 0x800u, "PICCMD %d failed on Chain[%d]!", v27, v29);
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v31, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_3B526C);
      v18 = g_zc;
      v19 = 116;
      goto LABEL_18;
    }
    snprintf(s, 0x800u, "ret_len = %d should never happen!!", v15);
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v31, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/pic_1704.c",
      75,
      "pic_process_cmd",
      15,
      121,
      20,
      v31);
LABEL_19:
    v20 = (unsigned __int8)(v25 - 1);
    v25 = v20;
    if ( !v20 )
      return 0;
  }
  if ( *a4 != v27 || (v21 = a4[1], v21 != 1) )
  {
    snprintf(s, 0x800u, "PICCMD %d failed on Chain[%d]!", v27, v29);
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v31, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_3B526C);
    v18 = g_zc;
    v19 = 103;
LABEL_18:
    zlog(
      v18,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/pic_1704.c",
      75,
      "pic_process_cmd",
      15,
      v19,
      20,
      v31);
    sleep(1u);
    goto LABEL_19;
  }
  snprintf(s, 0x800u, "PICCMD %d passed on Chain[%d]!", v27, v29);
  V_LOCK();
  logfmt_raw(v31, 0x1000u, 0, s);
  v24 = 98;
  V_UNLOCK();
  v23 = g_zc;
LABEL_30:
  zlog(
    v23,
    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/pic_1704.c",
    75,
    "pic_process_cmd",
    15,
    v24,
    20,
    v31);
  return v21;
}
