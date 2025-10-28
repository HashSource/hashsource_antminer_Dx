int __fastcall dev_init_hal(int a1)
{
  _DWORD *v1; // r6
  int v2; // r5
  int v4; // r3
  int v5; // r3
  int v6; // r2
  int v7; // r7
  int v8; // r9
  int v9; // r9
  int v10; // r9
  int v11; // r9
  int v12; // r2
  int v13; // r5
  int v14; // r6
  int v15; // r6
  int v16; // r7
  unsigned int v17; // [sp+10h] [bp-1844h]
  int v18; // [sp+18h] [bp-183Ch]
  int v19; // [sp+18h] [bp-183Ch]
  int v21; // [sp+30h] [bp-1824h]
  int v22; // [sp+34h] [bp-1820h]
  int v23; // [sp+38h] [bp-181Ch]
  _DWORD *v24; // [sp+3Ch] [bp-1818h]
  int v25; // [sp+40h] [bp-1814h] BYREF
  char v26; // [sp+44h] [bp-1810h]
  int v27; // [sp+48h] [bp-180Ch] BYREF
  __int16 v28; // [sp+4Ch] [bp-1808h]
  char s[2048]; // [sp+50h] [bp-1804h] BYREF
  int v30; // [sp+850h] [bp-1004h] BYREF
  __int16 v31; // [sp+854h] [bp-1000h]
  char v32; // [sp+856h] [bp-FFEh]
  char v33; // [sp+857h] [bp-FFDh]

  if ( platform_inited || !sub_9F4A4() )
  {
    v1 = &unk_1AB3F8;
    v2 = 0;
    v17 = *(_DWORD *)(dword_1A8A8C + 8);
    total_chain[0] = 0;
    do
    {
      if ( ((v17 >> v2) & 1) != 0 )
      {
        v4 = total_chain[0];
        *(_DWORD *)&g_chain_info[8 * total_chain[0]] = v2;
        g_chain_info[8 * v4 + 4] = 1;
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw(
          (char *)&v30,
          0x1000u,
          0,
          "chain_offset %d, chain %d",
          total_chain[0],
          *(_DWORD *)&g_chain_info[8 * total_chain[0]]);
        pthread_mutex_unlock(&stru_1A8A24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/platform_device_hal.c",
          157,
          "dev_init_hal",
          12,
          62,
          60,
          &v30);
        v5 = *(v1 - 3);
        if ( v5 && (v6 = *(v1 - 2), __pld(v1), v6) )
        {
          if ( v5 < 0 )
          {
LABEL_39:
            pthread_mutex_lock(&stru_1A8A24);
            logfmt_raw(
              (char *)&v30,
              0x1000u,
              0,
              "chain_offset %d, chain %d, open pic error!",
              total_chain[0],
              *(_DWORD *)&g_chain_info[8 * total_chain[0]]);
            pthread_mutex_unlock(&stru_1A8A24);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/device/platform_device_hal.c",
              157,
              "dev_init_hal",
              12,
              65,
              100,
              &v30);
            return -1;
          }
        }
        else
        {
          v31 = 0;
          v32 = byte_1AA700;
          v30 = v2;
          v33 = v2;
          pthread_mutex_lock(&i2c_mutex_all);
          v7 = iic_init((int)&v30);
          pthread_mutex_unlock(&i2c_mutex_all);
          if ( v7 < 0 )
            goto LABEL_39;
          __pld(v1);
          *(v1 - 3) = v7;
          *(v1 - 2) = 1;
        }
        LOBYTE(v18) = 4;
        LOWORD(v25) = 255;
        v27 = 117746261;
        v28 = 2816;
        while ( 1 )
        {
          pthread_mutex_lock(&i2c_mutex_all);
          v8 = *(v1 - 3);
          if ( pthread_mutex_lock(&stru_1A8A58) )
          {
            strcpy(s, "failed to i2c lock\n");
            pthread_mutex_lock(&stru_1A8A24);
            logfmt_raw((char *)&v30, 0x1000u, 0, s);
            pthread_mutex_unlock(&stru_1A8A24);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/device/hal/platform/7007/7007_iic.c",
              164,
              "iic_write",
              9,
              103,
              100,
              &v30);
          }
          else
          {
            i2c_write(v8, (int)&v27, 6);
            pthread_mutex_unlock(&stru_1A8A58);
          }
          usleep(0x2710u);
          v9 = *(v1 - 3);
          if ( pthread_mutex_lock(&stru_1A8A58) )
          {
            strcpy(s, "failed to i2c lock\n");
            pthread_mutex_lock(&stru_1A8A24);
            logfmt_raw((char *)&v30, 0x1000u, 0, s);
            pthread_mutex_unlock(&stru_1A8A24);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/device/hal/platform/7007/7007_iic.c",
              164,
              "iic_read",
              8,
              83,
              100,
              &v30);
          }
          else
          {
            i2c_read(v9, (int)&v25, 2);
            pthread_mutex_unlock(&stru_1A8A58);
          }
          pthread_mutex_unlock(&i2c_mutex_all);
          if ( (unsigned __int8)v25 == 7 && BYTE1(v25) == 1 )
            break;
          snprintf(s, 0x800u, "PICCMD %d failed on Chain[%d]!", 7, v2);
          pthread_mutex_lock(&stru_1A8A24);
          logfmt_raw((char *)&v30, 0x1000u, 0, s);
          pthread_mutex_unlock(&stru_1A8A24);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/drv_pic/pic_1704.c",
            158,
            "pic_process_cmd",
            15,
            103,
            20,
            &v30);
          sleep(1u);
          v18 = (unsigned __int8)(v18 - 1);
          if ( !v18 )
            goto LABEL_20;
        }
        snprintf(s, 0x800u, "PICCMD %d passed on Chain[%d]!", 7, v2);
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw((char *)&v30, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_1A8A24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/drv_pic/pic_1704.c",
          158,
          "pic_process_cmd",
          15,
          98,
          20,
          &v30);
LABEL_20:
        usleep((__useconds_t)&loc_493E0);
        LOWORD(v25) = 255;
        v27 = 100969045;
        v28 = 2560;
        LOBYTE(v19) = 4;
        while ( 1 )
        {
          pthread_mutex_lock(&i2c_mutex_all);
          v10 = *(v1 - 3);
          if ( pthread_mutex_lock(&stru_1A8A58) )
          {
            strcpy(s, "failed to i2c lock\n");
            pthread_mutex_lock(&stru_1A8A24);
            logfmt_raw((char *)&v30, 0x1000u, 0, s);
            pthread_mutex_unlock(&stru_1A8A24);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/device/hal/platform/7007/7007_iic.c",
              164,
              "iic_write",
              9,
              103,
              100,
              &v30);
          }
          else
          {
            i2c_write(v10, (int)&v27, 6);
            pthread_mutex_unlock(&stru_1A8A58);
          }
          usleep(0x2710u);
          v11 = *(v1 - 3);
          if ( pthread_mutex_lock(&stru_1A8A58) )
          {
            strcpy(s, "failed to i2c lock\n");
            pthread_mutex_lock(&stru_1A8A24);
            logfmt_raw((char *)&v30, 0x1000u, 0, s);
            pthread_mutex_unlock(&stru_1A8A24);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/device/hal/platform/7007/7007_iic.c",
              164,
              "iic_read",
              8,
              83,
              100,
              &v30);
          }
          else
          {
            i2c_read(v11, (int)&v25, 2);
            pthread_mutex_unlock(&stru_1A8A58);
          }
          pthread_mutex_unlock(&i2c_mutex_all);
          if ( (unsigned __int8)v25 == 6 && BYTE1(v25) == 1 )
            break;
          snprintf(s, 0x800u, "PICCMD %d failed on Chain[%d]!", 6, v2);
          pthread_mutex_lock(&stru_1A8A24);
          logfmt_raw((char *)&v30, 0x1000u, 0, s);
          pthread_mutex_unlock(&stru_1A8A24);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/drv_pic/pic_1704.c",
            158,
            "pic_process_cmd",
            15,
            103,
            20,
            &v30);
          sleep(1u);
          v19 = (unsigned __int8)(v19 - 1);
          if ( !v19 )
            goto LABEL_28;
        }
        snprintf(s, 0x800u, "PICCMD %d passed on Chain[%d]!", 6, v2);
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw((char *)&v30, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_1A8A24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/drv_pic/pic_1704.c",
          158,
          "pic_process_cmd",
          15,
          98,
          20,
          &v30);
LABEL_28:
        usleep(0x493E0u);
        if ( a1 != 7 )
        {
          v12 = *(_DWORD *)&g_chain_info[8 * total_chain[0]];
          LOBYTE(v21) = 4;
          v23 = v2;
          v27 = 386181717;
          v28 = 6912;
          v13 = (unsigned __int8)v12;
          v25 = 255;
          v26 = 0;
          v22 = (unsigned __int8)v12;
          v24 = v1;
          while ( 1 )
          {
            pthread_mutex_lock(&i2c_mutex_all);
            v14 = g_bitmain_pic_state[2 * v13];
            if ( pthread_mutex_lock(&stru_1A8A58) )
            {
              strcpy(s, "failed to i2c lock\n");
              pthread_mutex_lock(&stru_1A8A24);
              logfmt_raw((char *)&v30, 0x1000u, 0, s);
              pthread_mutex_unlock(&stru_1A8A24);
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/device/hal/platform/7007/7007_iic.c",
                164,
                "iic_write",
                9,
                103,
                100,
                &v30);
            }
            else
            {
              i2c_write(v14, (int)&v27, 6);
              pthread_mutex_unlock(&stru_1A8A58);
            }
            usleep(0x2710u);
            v15 = g_bitmain_pic_state[2 * v13];
            if ( pthread_mutex_lock(&stru_1A8A58) )
            {
              strcpy(s, "failed to i2c lock\n");
              pthread_mutex_lock(&stru_1A8A24);
              logfmt_raw((char *)&v30, 0x1000u, 0, s);
              pthread_mutex_unlock(&stru_1A8A24);
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/device/hal/platform/7007/7007_iic.c",
                164,
                "iic_read",
                8,
                83,
                100,
                &v30);
            }
            else
            {
              i2c_read(v15, (int)&v25, 5);
              pthread_mutex_unlock(&stru_1A8A58);
            }
            pthread_mutex_unlock(&i2c_mutex_all);
            if ( BYTE1(v25) == 23 && (unsigned __int8)v25 == 5 )
              break;
            snprintf(s, 0x800u, "PICCMD %d failed on Chain[%d]!", 23, v13);
            pthread_mutex_lock(&stru_1A8A24);
            logfmt_raw((char *)&v30, 0x1000u, 0, s);
            pthread_mutex_unlock(&stru_1A8A24);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/device/hal/drv_pic/pic_1704.c",
              158,
              "pic_process_cmd",
              15,
              116,
              20,
              &v30);
            sleep(1u);
            v21 = (unsigned __int8)(v21 - 1);
            if ( !v21 )
            {
              pthread_mutex_lock(&stru_1A8A24);
              logfmt_raw(
                (char *)&v30,
                0x1000u,
                0,
                "chain_offset %d, chain %d, get_sw_version error!",
                total_chain[0],
                *(_DWORD *)&g_chain_info[8 * total_chain[0]]);
              pthread_mutex_unlock(&stru_1A8A24);
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/device/platform_device_hal.c",
                157,
                "dev_init_hal",
                12,
                77,
                100,
                &v30);
              return -1;
            }
          }
          v2 = v23;
          v1 = v24;
          snprintf(s, 0x800u, "PICCMD %d passed on Chain[%d]!", 23, v22);
          V_LOCK();
          logfmt_raw((char *)&v30, 0x1000u, 0, s);
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
            &v30);
          v16 = BYTE2(v25);
          pthread_mutex_lock(&stru_1A8A24);
          logfmt_raw(
            (char *)&v30,
            0x1000u,
            0,
            "chain_offset %d, chain %d, pic firmware verion = 0x%02x",
            total_chain[0],
            *(_DWORD *)&g_chain_info[8 * total_chain[0]],
            v16);
          pthread_mutex_unlock(&stru_1A8A24);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/platform_device_hal.c",
            157,
            "dev_init_hal",
            12,
            83,
            60,
            &v30);
        }
        ++total_chain[0];
      }
      ++v2;
      v1 += 2;
    }
    while ( v2 != 16 );
    if ( platform_inited )
    {
      *(_DWORD *)dword_1A8A8C |= 0x20000000u;
    }
    else
    {
      strcpy(s, "platform not inited\n");
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw((char *)&v30, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_common.c",
        167,
        "enable_bypass_mode",
        18,
        280,
        100,
        &v30);
    }
    printf("%s: set zynq bt8d %d\n", "dev_config_hal", 26);
    pthread_mutex_lock(stru_1A8748);
    *(_DWORD *)(dword_1A8A8C + 60) = 437918234;
    pthread_mutex_unlock(stru_1A8748);
    usleep((__useconds_t)&stru_18694.st_info);
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw((char *)&v30, 0x1000u, 0, "platform init failed!\n");
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
      &v30);
    return -1;
  }
}
