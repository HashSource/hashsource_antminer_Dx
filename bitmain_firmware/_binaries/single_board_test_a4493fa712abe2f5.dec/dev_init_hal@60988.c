int __fastcall dev_init_hal(int a1)
{
  _DWORD *v1; // r5
  int v2; // r4
  int v4; // r3
  int v5; // r2
  int v6; // r3
  int v7; // r7
  int v8; // r11
  int v9; // r11
  int v10; // r8
  int v11; // r4
  int v12; // r4
  int v13; // r2
  int v14; // r4
  int v15; // r5
  int v16; // r5
  int v17; // r7
  unsigned int v18; // [sp+18h] [bp-183Ch]
  int v19; // [sp+20h] [bp-1834h]
  int v20; // [sp+20h] [bp-1834h]
  int v21; // [sp+20h] [bp-1834h]
  pthread_mutex_t *mutex; // [sp+24h] [bp-1830h]
  int v24; // [sp+38h] [bp-181Ch]
  _DWORD *v25; // [sp+3Ch] [bp-1818h]
  int v26; // [sp+40h] [bp-1814h] BYREF
  char v27; // [sp+44h] [bp-1810h]
  int v28; // [sp+48h] [bp-180Ch] BYREF
  __int16 v29; // [sp+4Ch] [bp-1808h]
  char s[2048]; // [sp+50h] [bp-1804h] BYREF
  int v31; // [sp+850h] [bp-1004h] BYREF
  __int16 v32; // [sp+854h] [bp-1000h]
  char v33; // [sp+856h] [bp-FFEh]
  char v34; // [sp+857h] [bp-FFDh]

  if ( platform_inited || !sub_85E3C() )
  {
    v1 = &unk_3B587C;
    v2 = 0;
    v18 = *(_DWORD *)(dword_3B52A4 + 8);
    total_chain = 0;
    do
    {
      if ( ((v18 >> v2) & 1) != 0 )
      {
        v4 = total_chain;
        *(_DWORD *)&g_chain_info[8 * total_chain] = v2;
        g_chain_info[8 * v4 + 4] = 1;
        pthread_mutex_lock(&stru_3B526C);
        logfmt_raw(
          (char *)&v31,
          0x1000u,
          0,
          "chain_offset %d, chain %d",
          total_chain,
          *(_DWORD *)&g_chain_info[8 * total_chain]);
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/device/platform_device_hal.c",
          74,
          "dev_init_hal",
          12,
          62,
          60,
          &v31);
        v5 = *(v1 - 3);
        ++total_chain;
        if ( v5 && (v6 = *(v1 - 2), __pld(v1), v6) )
        {
          if ( v5 < 0 )
          {
LABEL_44:
            pthread_mutex_lock(&stru_3B526C);
            logfmt_raw(
              (char *)&v31,
              0x1000u,
              0,
              "chain_offset %d, chain %d, open pic error!",
              total_chain,
              *(_DWORD *)&g_chain_info[8 * total_chain]);
            pthread_mutex_unlock(&stru_3B526C);
            zlog(
              g_zc,
              "/home/xingfei.wang/work/1764/godminer/backend/device/platform_device_hal.c",
              74,
              "dev_init_hal",
              12,
              66,
              100,
              &v31);
            return -1;
          }
        }
        else
        {
          v31 = v2;
          v34 = v2;
          v32 = 0;
          v33 = byte_12B724;
          pthread_mutex_lock(&i2c_mutex_all);
          v7 = iic_init((int)&v31);
          pthread_mutex_unlock(&i2c_mutex_all);
          if ( v7 < 0 )
            goto LABEL_44;
          __pld(v1);
          *(v1 - 3) = v7;
          *(v1 - 2) = 1;
        }
        LOBYTE(v19) = 4;
        LOWORD(v26) = 255;
        v29 = 2816;
        v28 = 117746261;
        while ( 1 )
        {
          pthread_mutex_lock(&i2c_mutex_all);
          v8 = *(v1 - 3);
          if ( pthread_mutex_lock(&stru_3B5254) )
          {
            strcpy(s, "failed to i2c lock\n");
            pthread_mutex_lock(&stru_3B526C);
            logfmt_raw((char *)&v31, 0x1000u, 0, s);
            pthread_mutex_unlock(&stru_3B526C);
            zlog(
              g_zc,
              "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c",
              81,
              "iic_write",
              9,
              103,
              100,
              &v31);
          }
          else
          {
            i2c_write(v8, (int)&v28, 6);
            pthread_mutex_unlock(&stru_3B5254);
          }
          usleep(0x2710u);
          v9 = *(v1 - 3);
          if ( pthread_mutex_lock(&stru_3B5254) )
          {
            strcpy(s, "failed to i2c lock\n");
            pthread_mutex_lock(&stru_3B526C);
            logfmt_raw((char *)&v31, 0x1000u, 0, s);
            pthread_mutex_unlock(&stru_3B526C);
            zlog(
              g_zc,
              "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c",
              81,
              "iic_read",
              8,
              83,
              100,
              &v31);
          }
          else
          {
            i2c_read(v9, (int)&v26, 2);
            pthread_mutex_unlock(&stru_3B5254);
          }
          pthread_mutex_unlock(&i2c_mutex_all);
          if ( (unsigned __int8)v26 == 7 && BYTE1(v26) == 1 )
            break;
          snprintf(s, 0x800u, "PICCMD %d failed on Chain[%d]!", 7, v2);
          pthread_mutex_lock(&stru_3B526C);
          logfmt_raw((char *)&v31, 0x1000u, 0, s);
          pthread_mutex_unlock(&stru_3B526C);
          zlog(
            g_zc,
            "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/pic_1704.c",
            75,
            "pic_process_cmd",
            15,
            103,
            20,
            &v31);
          sleep(1u);
          v19 = (unsigned __int8)(v19 - 1);
          if ( !v19 )
            goto LABEL_20;
        }
        snprintf(s, 0x800u, "PICCMD %d passed on Chain[%d]!", 7, v2);
        pthread_mutex_lock(&stru_3B526C);
        logfmt_raw((char *)&v31, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/pic_1704.c",
          75,
          "pic_process_cmd",
          15,
          98,
          20,
          &v31);
LABEL_20:
        LOBYTE(v20) = 4;
        usleep((__useconds_t)&loc_493E0);
        v10 = v2;
        v29 = 2560;
        v28 = 100969045;
        LOWORD(v26) = 255;
        while ( 1 )
        {
          pthread_mutex_lock(&i2c_mutex_all);
          v11 = *(v1 - 3);
          if ( pthread_mutex_lock(&stru_3B5254) )
          {
            strcpy(s, "failed to i2c lock\n");
            pthread_mutex_lock(&stru_3B526C);
            logfmt_raw((char *)&v31, 0x1000u, 0, s);
            pthread_mutex_unlock(&stru_3B526C);
            zlog(
              g_zc,
              "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c",
              81,
              "iic_write",
              9,
              103,
              100,
              &v31);
          }
          else
          {
            i2c_write(v11, (int)&v28, 6);
            pthread_mutex_unlock(&stru_3B5254);
          }
          usleep(0x2710u);
          v12 = *(v1 - 3);
          if ( pthread_mutex_lock(&stru_3B5254) )
          {
            strcpy(s, "failed to i2c lock\n");
            pthread_mutex_lock(&stru_3B526C);
            logfmt_raw((char *)&v31, 0x1000u, 0, s);
            pthread_mutex_unlock(&stru_3B526C);
            zlog(
              g_zc,
              "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c",
              81,
              "iic_read",
              8,
              83,
              100,
              &v31);
          }
          else
          {
            i2c_read(v12, (int)&v26, 2);
            pthread_mutex_unlock(&stru_3B5254);
          }
          pthread_mutex_unlock(&i2c_mutex_all);
          if ( (unsigned __int8)v26 == 6 && BYTE1(v26) == 1 )
            break;
          snprintf(s, 0x800u, "PICCMD %d failed on Chain[%d]!", 6, v10);
          pthread_mutex_lock(&stru_3B526C);
          logfmt_raw((char *)&v31, 0x1000u, 0, s);
          pthread_mutex_unlock(&stru_3B526C);
          zlog(
            g_zc,
            "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/pic_1704.c",
            75,
            "pic_process_cmd",
            15,
            103,
            20,
            &v31);
          sleep(1u);
          v20 = (unsigned __int8)(v20 - 1);
          if ( !v20 )
          {
            v2 = v10;
            goto LABEL_29;
          }
        }
        snprintf(s, 0x800u, "PICCMD %d passed on Chain[%d]!", 6, v10);
        pthread_mutex_lock(&stru_3B526C);
        logfmt_raw((char *)&v31, 0x1000u, 0, s);
        v2 = v10;
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/pic_1704.c",
          75,
          "pic_process_cmd",
          15,
          98,
          20,
          &v31);
LABEL_29:
        usleep(0x493E0u);
        if ( a1 != 7 )
        {
          v28 = 386181717;
          v24 = v2;
          v13 = *(_DWORD *)&g_chain_info[8 * total_chain];
          LOBYTE(v21) = 4;
          v29 = 6912;
          v26 = 255;
          v27 = 0;
          v14 = (unsigned __int8)v13;
          mutex = (pthread_mutex_t *)(unsigned __int8)v13;
          v25 = v1;
          while ( 1 )
          {
            pthread_mutex_lock(&i2c_mutex_all);
            v15 = g_bitmain_pic_state[2 * v14];
            if ( pthread_mutex_lock(&stru_3B5254) )
            {
              strcpy(s, "failed to i2c lock\n");
              pthread_mutex_lock(&stru_3B526C);
              logfmt_raw((char *)&v31, 0x1000u, 0, s);
              pthread_mutex_unlock(&stru_3B526C);
              zlog(
                g_zc,
                "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c",
                81,
                "iic_write",
                9,
                103,
                100,
                &v31);
            }
            else
            {
              i2c_write(v15, (int)&v28, 6);
              pthread_mutex_unlock(&stru_3B5254);
            }
            usleep(0x2710u);
            v16 = g_bitmain_pic_state[2 * v14];
            if ( pthread_mutex_lock(&stru_3B5254) )
            {
              strcpy(s, "failed to i2c lock\n");
              pthread_mutex_lock(&stru_3B526C);
              logfmt_raw((char *)&v31, 0x1000u, 0, s);
              pthread_mutex_unlock(&stru_3B526C);
              zlog(
                g_zc,
                "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c",
                81,
                "iic_read",
                8,
                83,
                100,
                &v31);
            }
            else
            {
              i2c_read(v16, (int)&v26, 5);
              pthread_mutex_unlock(&stru_3B5254);
            }
            pthread_mutex_unlock(&i2c_mutex_all);
            if ( BYTE1(v26) == 23 && (unsigned __int8)v26 == 5 )
              break;
            snprintf(s, 0x800u, "PICCMD %d failed on Chain[%d]!", 23, v14);
            pthread_mutex_lock(&stru_3B526C);
            logfmt_raw((char *)&v31, 0x1000u, 0, s);
            pthread_mutex_unlock(&stru_3B526C);
            zlog(
              g_zc,
              "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/pic_1704.c",
              75,
              "pic_process_cmd",
              15,
              116,
              20,
              &v31);
            sleep(1u);
            v21 = (unsigned __int8)(v21 - 1);
            if ( !v21 )
            {
              V_LOCK();
              logfmt_raw(
                (char *)&v31,
                0x1000u,
                0,
                "chain_offset %d, chain %d, get_sw_version error!",
                total_chain,
                *(_DWORD *)&g_chain_info[8 * total_chain]);
              V_UNLOCK();
              zlog(
                g_zc,
                "/home/xingfei.wang/work/1764/godminer/backend/device/platform_device_hal.c",
                74,
                "dev_init_hal",
                12,
                78,
                100,
                &v31);
              return -1;
            }
          }
          v2 = v24;
          v1 = v25;
          snprintf(s, 0x800u, "PICCMD %d passed on Chain[%d]!", 23, mutex);
          V_LOCK();
          logfmt_raw((char *)&v31, 0x1000u, 0, s);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/pic_1704.c",
            75,
            "pic_process_cmd",
            15,
            111,
            20,
            &v31);
          v17 = BYTE2(v26);
          pthread_mutex_lock(&stru_3B526C);
          logfmt_raw(
            (char *)&v31,
            0x1000u,
            0,
            "chain_offset %d, chain %d, pic firmware verion = 0x%02x",
            total_chain,
            *(_DWORD *)&g_chain_info[8 * total_chain],
            v17);
          pthread_mutex_unlock(&stru_3B526C);
          zlog(
            g_zc,
            "/home/xingfei.wang/work/1764/godminer/backend/device/platform_device_hal.c",
            74,
            "dev_init_hal",
            12,
            84,
            100,
            &v31);
        }
      }
      ++v2;
      v1 += 2;
    }
    while ( v2 != 16 );
    if ( platform_inited )
    {
      *(_DWORD *)dword_3B52A4 |= 0x20000000u;
    }
    else
    {
      strcpy(s, "platform not inited\n");
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw((char *)&v31, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_common.c",
        84,
        "enable_bypass_mode",
        18,
        280,
        100,
        &v31);
    }
    printf("%s: set zynq bt8d %d\n", "dev_config_hal", 26);
    pthread_mutex_lock(stru_3B52C4);
    *(_DWORD *)(dword_3B52A4 + 60) = 437918234;
    pthread_mutex_unlock(stru_3B52C4);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw((char *)&v31, 0x1000u, 0, "platform init failed!\n");
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/platform_device_hal.c",
      74,
      "dev_init_hal",
      12,
      52,
      100,
      &v31);
    return -1;
  }
}
