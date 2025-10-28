int __fastcall dev_init_hal(int a1)
{
  int *v1; // r6
  _DWORD *v2; // r5
  int v3; // r8
  int v5; // r3
  int v6; // r2
  int v7; // r3
  char v8; // r2
  int v9; // r7
  int v10; // r11
  int v11; // r11
  int v12; // r11
  int v13; // r11
  int v14; // r2
  int v15; // r5
  int v16; // r6
  int v17; // r6
  int v18; // r7
  unsigned int v19; // [sp+10h] [bp-1844h]
  int v20; // [sp+18h] [bp-183Ch]
  int v21; // [sp+18h] [bp-183Ch]
  int v23; // [sp+30h] [bp-1824h]
  int *v24; // [sp+34h] [bp-1820h]
  int v25; // [sp+38h] [bp-181Ch]
  _DWORD *v26; // [sp+3Ch] [bp-1818h]
  int v27; // [sp+40h] [bp-1814h] BYREF
  char v28; // [sp+44h] [bp-1810h]
  int v29; // [sp+48h] [bp-180Ch] BYREF
  __int16 v30; // [sp+4Ch] [bp-1808h]
  char s[2048]; // [sp+50h] [bp-1804h] BYREF
  int v32; // [sp+850h] [bp-1004h] BYREF
  __int16 v33; // [sp+854h] [bp-1000h]
  char v34; // [sp+856h] [bp-FFEh]
  char v35; // [sp+857h] [bp-FFDh]

  v1 = &total_chain;
  if ( platform_inited || !sub_14FA58() )
  {
    v2 = &unk_19D014;
    v3 = 0;
    v19 = *(_DWORD *)(dword_197C8C + 8);
    total_chain = 0;
    do
    {
      if ( ((v19 >> v3) & 1) != 0 )
      {
        v5 = *v1;
        *(_DWORD *)&g_chain_info[8 * *v1] = v3;
        g_chain_info[8 * v5 + 4] = 1;
        pthread_mutex_lock(&stru_197BB8);
        logfmt_raw((char *)&v32, 0x1000u, 0, "chain_offset %d, chain %d", *v1, *(_DWORD *)&g_chain_info[8 * *v1]);
        pthread_mutex_unlock(&stru_197BB8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/platform_device_hal.c",
          157,
          "dev_init_hal",
          12,
          62,
          60,
          &v32);
        v6 = *(v2 - 3);
        ++*v1;
        if ( v6 && (v7 = *(v2 - 2), __pld(v2), v7) )
        {
          if ( v6 < 0 )
          {
LABEL_39:
            pthread_mutex_lock(&stru_197BB8);
            logfmt_raw(
              (char *)&v32,
              0x1000u,
              0,
              "chain_offset %d, chain %d, open pic error!",
              *v1,
              *(_DWORD *)&g_chain_info[8 * *v1]);
            pthread_mutex_unlock(&stru_197BB8);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/device/platform_device_hal.c",
              157,
              "dev_init_hal",
              12,
              66,
              100,
              &v32);
            return -1;
          }
        }
        else
        {
          v8 = *((_BYTE *)v1 + 596);
          v33 = 0;
          v34 = v8;
          v32 = v3;
          v35 = v3;
          pthread_mutex_lock(&i2c_mutex_all);
          v9 = iic_init((int)&v32);
          pthread_mutex_unlock(&i2c_mutex_all);
          if ( v9 < 0 )
            goto LABEL_39;
          __pld(v2);
          *(v2 - 3) = v9;
          *(v2 - 2) = 1;
        }
        LOBYTE(v20) = 4;
        LOWORD(v27) = 255;
        v29 = 117746261;
        v30 = 2816;
        while ( 1 )
        {
          pthread_mutex_lock(&i2c_mutex_all);
          v10 = *(v2 - 3);
          if ( pthread_mutex_lock(&stru_197C58) )
          {
            strcpy(s, "failed to i2c lock\n");
            pthread_mutex_lock(&stru_197BB8);
            logfmt_raw((char *)&v32, 0x1000u, 0, s);
            pthread_mutex_unlock(&stru_197BB8);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/device/hal/platform/7007/7007_iic.c",
              164,
              "iic_write",
              9,
              103,
              100,
              &v32);
          }
          else
          {
            i2c_write(v10, (int)&v29, 6);
            pthread_mutex_unlock(&stru_197C58);
          }
          usleep(0x2710u);
          v11 = *(v2 - 3);
          if ( pthread_mutex_lock(&stru_197C58) )
          {
            strcpy(s, "failed to i2c lock\n");
            pthread_mutex_lock(&stru_197BB8);
            logfmt_raw((char *)&v32, 0x1000u, 0, s);
            pthread_mutex_unlock(&stru_197BB8);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/device/hal/platform/7007/7007_iic.c",
              164,
              "iic_read",
              8,
              83,
              100,
              &v32);
          }
          else
          {
            i2c_read(v11, (int)&v27, 2);
            pthread_mutex_unlock(&stru_197C58);
          }
          pthread_mutex_unlock(&i2c_mutex_all);
          if ( (unsigned __int8)v27 == 7 && BYTE1(v27) == 1 )
            break;
          snprintf(s, 0x800u, "PICCMD %d failed on Chain[%d]!", 7, v3);
          pthread_mutex_lock(&stru_197BB8);
          logfmt_raw((char *)&v32, 0x1000u, 0, s);
          pthread_mutex_unlock(&stru_197BB8);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/drv_pic/pic_1704.c",
            158,
            "pic_process_cmd",
            15,
            103,
            20,
            &v32);
          sleep(1u);
          v20 = (unsigned __int8)(v20 - 1);
          if ( !v20 )
            goto LABEL_20;
        }
        snprintf(s, 0x800u, "PICCMD %d passed on Chain[%d]!", 7, v3);
        pthread_mutex_lock(&stru_197BB8);
        logfmt_raw((char *)&v32, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_197BB8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/drv_pic/pic_1704.c",
          158,
          "pic_process_cmd",
          15,
          98,
          20,
          &v32);
LABEL_20:
        usleep((__useconds_t)&loc_493E0);
        LOWORD(v27) = 255;
        v29 = 100969045;
        v30 = 2560;
        LOBYTE(v21) = 4;
        while ( 1 )
        {
          pthread_mutex_lock(&i2c_mutex_all);
          v12 = *(v2 - 3);
          if ( pthread_mutex_lock(&stru_197C58) )
          {
            strcpy(s, "failed to i2c lock\n");
            pthread_mutex_lock(&stru_197BB8);
            logfmt_raw((char *)&v32, 0x1000u, 0, s);
            pthread_mutex_unlock(&stru_197BB8);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/device/hal/platform/7007/7007_iic.c",
              164,
              "iic_write",
              9,
              103,
              100,
              &v32);
          }
          else
          {
            i2c_write(v12, (int)&v29, 6);
            pthread_mutex_unlock(&stru_197C58);
          }
          usleep(0x2710u);
          v13 = *(v2 - 3);
          if ( pthread_mutex_lock(&stru_197C58) )
          {
            strcpy(s, "failed to i2c lock\n");
            pthread_mutex_lock(&stru_197BB8);
            logfmt_raw((char *)&v32, 0x1000u, 0, s);
            pthread_mutex_unlock(&stru_197BB8);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/device/hal/platform/7007/7007_iic.c",
              164,
              "iic_read",
              8,
              83,
              100,
              &v32);
          }
          else
          {
            i2c_read(v13, (int)&v27, 2);
            pthread_mutex_unlock(&stru_197C58);
          }
          pthread_mutex_unlock(&i2c_mutex_all);
          if ( (unsigned __int8)v27 == 6 && BYTE1(v27) == 1 )
            break;
          snprintf(s, 0x800u, "PICCMD %d failed on Chain[%d]!", 6, v3);
          pthread_mutex_lock(&stru_197BB8);
          logfmt_raw((char *)&v32, 0x1000u, 0, s);
          pthread_mutex_unlock(&stru_197BB8);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/drv_pic/pic_1704.c",
            158,
            "pic_process_cmd",
            15,
            103,
            20,
            &v32);
          sleep(1u);
          v21 = (unsigned __int8)(v21 - 1);
          if ( !v21 )
            goto LABEL_28;
        }
        snprintf(s, 0x800u, "PICCMD %d passed on Chain[%d]!", 6, v3);
        pthread_mutex_lock(&stru_197BB8);
        logfmt_raw((char *)&v32, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_197BB8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/drv_pic/pic_1704.c",
          158,
          "pic_process_cmd",
          15,
          98,
          20,
          &v32);
LABEL_28:
        usleep(0x493E0u);
        if ( a1 != 7 )
        {
          v14 = *(_DWORD *)&g_chain_info[8 * *v1];
          LOBYTE(v23) = 4;
          v26 = v2;
          v29 = 386181717;
          v30 = 6912;
          v15 = (unsigned __int8)v14;
          v27 = 255;
          v28 = 0;
          v25 = (unsigned __int8)v14;
          v24 = v1;
          while ( 1 )
          {
            pthread_mutex_lock(&i2c_mutex_all);
            v16 = g_bitmain_pic_state[2 * v15];
            if ( pthread_mutex_lock(&stru_197C58) )
            {
              strcpy(s, "failed to i2c lock\n");
              pthread_mutex_lock(&stru_197BB8);
              logfmt_raw((char *)&v32, 0x1000u, 0, s);
              pthread_mutex_unlock(&stru_197BB8);
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/device/hal/platform/7007/7007_iic.c",
                164,
                "iic_write",
                9,
                103,
                100,
                &v32);
            }
            else
            {
              i2c_write(v16, (int)&v29, 6);
              pthread_mutex_unlock(&stru_197C58);
            }
            usleep(0x2710u);
            v17 = g_bitmain_pic_state[2 * v15];
            if ( pthread_mutex_lock(&stru_197C58) )
            {
              strcpy(s, "failed to i2c lock\n");
              pthread_mutex_lock(&stru_197BB8);
              logfmt_raw((char *)&v32, 0x1000u, 0, s);
              pthread_mutex_unlock(&stru_197BB8);
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/device/hal/platform/7007/7007_iic.c",
                164,
                "iic_read",
                8,
                83,
                100,
                &v32);
            }
            else
            {
              i2c_read(v17, (int)&v27, 5);
              pthread_mutex_unlock(&stru_197C58);
            }
            pthread_mutex_unlock(&i2c_mutex_all);
            if ( BYTE1(v27) == 23 && (unsigned __int8)v27 == 5 )
              break;
            snprintf(s, 0x800u, "PICCMD %d failed on Chain[%d]!", 23, v15);
            pthread_mutex_lock(&stru_197BB8);
            logfmt_raw((char *)&v32, 0x1000u, 0, s);
            pthread_mutex_unlock(&stru_197BB8);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/device/hal/drv_pic/pic_1704.c",
              158,
              "pic_process_cmd",
              15,
              116,
              20,
              &v32);
            sleep(1u);
            v23 = (unsigned __int8)(v23 - 1);
            if ( !v23 )
            {
              pthread_mutex_lock(&stru_197BB8);
              logfmt_raw(
                (char *)&v32,
                0x1000u,
                0,
                "chain_offset %d, chain %d, get_sw_version error!",
                *v24,
                *(_DWORD *)&g_chain_info[8 * *v24]);
              pthread_mutex_unlock(&stru_197BB8);
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/device/platform_device_hal.c",
                157,
                "dev_init_hal",
                12,
                78,
                100,
                &v32);
              return -1;
            }
          }
          v1 = v24;
          v2 = v26;
          snprintf(s, 0x800u, "PICCMD %d passed on Chain[%d]!", 23, v25);
          V_LOCK();
          logfmt_raw((char *)&v32, 0x1000u, 0, s);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/drv_pic/pic_1704.c",
            158,
            "pic_process_cmd",
            15,
            111,
            20,
            &v32);
          v18 = BYTE2(v27);
          pthread_mutex_lock(&stru_197BB8);
          logfmt_raw(
            (char *)&v32,
            0x1000u,
            0,
            "chain_offset %d, chain %d, pic firmware verion = 0x%02x",
            *v1,
            *(_DWORD *)&g_chain_info[8 * *v1],
            v18);
          pthread_mutex_unlock(&stru_197BB8);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/platform_device_hal.c",
            157,
            "dev_init_hal",
            12,
            84,
            100,
            &v32);
        }
      }
      ++v3;
      v2 += 2;
    }
    while ( v3 != 16 );
    if ( v1[121] )
    {
      *(_DWORD *)dword_197C8C |= 0x20000000u;
    }
    else
    {
      strcpy(s, "platform not inited\n");
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw((char *)&v32, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_common.c",
        167,
        "enable_bypass_mode",
        18,
        280,
        100,
        &v32);
    }
    printf("%s: set zynq bt8d %d\n", "dev_config_hal", 26);
    pthread_mutex_lock(stru_190C74);
    *(_DWORD *)(dword_197C8C + 60) = 437918234;
    pthread_mutex_unlock(stru_190C74);
    usleep((__useconds_t)"ead_unregister_cancel");
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw((char *)&v32, 0x1000u, 0, "platform init failed!\n");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/platform_device_hal.c",
      157,
      "dev_init_hal",
      12,
      52,
      100,
      &v32);
    return -1;
  }
}
