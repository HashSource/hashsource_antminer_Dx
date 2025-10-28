int __fastcall pic1704_update_app_program(int a1)
{
  FILE *v2; // r8
  char *v3; // r6
  char *v4; // r7
  unsigned int v5; // r0
  char *v6; // t2
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r11
  int v12; // r11
  int v14; // r2
  int v15; // r2
  char *v16; // [sp+10h] [bp-185Ch]
  int v17; // [sp+14h] [bp-1858h]
  unsigned __int8 v18; // [sp+34h] [bp-1838h] BYREF
  char v19; // [sp+35h] [bp-1837h]
  char s[8]; // [sp+38h] [bp-1834h] BYREF
  int v21; // [sp+40h] [bp-182Ch]
  int v22; // [sp+44h] [bp-1828h]
  int v23; // [sp+48h] [bp-1824h]
  int v24; // [sp+4Ch] [bp-1820h]
  _DWORD v25[5]; // [sp+50h] [bp-181Ch] BYREF
  char v26; // [sp+64h] [bp-1808h]
  char v27; // [sp+65h] [bp-1807h]
  _DWORD v28[510]; // [sp+68h] [bp-1804h] BYREF
  int v29; // [sp+868h] [bp-1004h] BYREF
  int v30; // [sp+86Ch] [bp-1000h]

  *(_DWORD *)s = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v21 = 0;
  *(_DWORD *)&s[3] = 0;
  v2 = (FILE *)fopen64("/etc/config/dsPIC33EP16GS202_app.txt", "r");
  if ( v2 )
  {
    v3 = (char *)calloc(0x3700u, 1u);
    if ( v3 )
    {
      v4 = v3;
      fseek(v2, 0, 0);
      do
      {
        v4 += 4;
        fgets(s, 7, v2);
        v5 = strtoul(s, 0, 16);
        *(v4 - 1) = v5;
        *(v4 - 4) = HIBYTE(v5);
        *(v4 - 3) = BYTE2(v5);
        *(v4 - 2) = BYTE1(v5);
      }
      while ( v3 + 14080 != v4 );
      fclose(v2);
      HIBYTE(v29) = a1;
      v30 = 0;
      LOWORD(v29) = 7;
      BYTE2(v29) = 2;
      LOWORD(v25[0]) = 255;
      v28[0] = 0;
      LOWORD(v28[1]) = 0;
      if ( sub_134E40(v29, 0, v28, (unsigned __int8 *)v25) )
      {
        v30 = 0;
        HIBYTE(v29) = a1;
        BYTE2(v29) = 2;
        LOWORD(v29) = 9;
        v28[0] = 0;
        LOWORD(v28[1]) = 0;
        LOWORD(v25[0]) = 255;
        if ( sub_134E40(v29, 0, v28, (unsigned __int8 *)v25) )
        {
          v16 = v3 + 16;
          do
          {
            v6 = v16;
            __pld(v16);
            v7 = *((_DWORD *)v6 - 4);
            v8 = *((_DWORD *)v6 - 3);
            v9 = *((_DWORD *)v6 - 2);
            v10 = *((_DWORD *)v6 - 1);
            v25[0] = 34908757;
            v19 = 0;
            v21 = v7;
            v22 = v8;
            v23 = v9;
            v24 = v10;
            v25[1] = v7;
            v25[2] = v8;
            v25[3] = v9;
            v18 = -1;
            v25[4] = v10;
            LOBYTE(v17) = 4;
            v26 = (unsigned __int16)(HIBYTE(v10)
                                   + BYTE2(v10)
                                   + BYTE1(v10)
                                   + (unsigned __int8)v10
                                   + HIBYTE(v9)
                                   + BYTE2(v9)
                                   + BYTE1(v9)
                                   + (unsigned __int8)v7
                                   + BYTE1(v7)
                                   + 22
                                   + BYTE2(v7)
                                   + HIBYTE(v7)
                                   + (unsigned __int8)v8
                                   + BYTE1(v8)
                                   + BYTE2(v8)
                                   + HIBYTE(v8)
                                   + (unsigned __int8)v9) >> 8;
            v27 = HIBYTE(v10)
                + BYTE2(v10)
                + BYTE1(v10)
                + v10
                + HIBYTE(v9)
                + BYTE2(v9)
                + BYTE1(v9)
                + v7
                + BYTE1(v7)
                + 22
                + BYTE2(v7)
                + HIBYTE(v7)
                + v8
                + BYTE1(v8)
                + BYTE2(v8)
                + HIBYTE(v8)
                + v9;
            while ( 1 )
            {
              pthread_mutex_lock(&i2c_mutex_all);
              v11 = g_bitmain_pic_state[2 * a1];
              if ( pthread_mutex_lock(&stru_197C58) )
              {
                strcpy((char *)v28, "failed to i2c lock\n");
                pthread_mutex_lock(&stru_197BB8);
                logfmt_raw((char *)&v29, 0x1000u, 0, v28);
                pthread_mutex_unlock(&stru_197BB8);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_master/backend/device/hal/platform/7007/7007_iic.c",
                  164,
                  "iic_write",
                  9,
                  103,
                  100,
                  &v29);
              }
              else
              {
                i2c_write(v11, (int)v25, 22);
                pthread_mutex_unlock(&stru_197C58);
              }
              usleep(0x2710u);
              v12 = g_bitmain_pic_state[2 * a1];
              if ( pthread_mutex_lock(&stru_197C58) )
              {
                strcpy((char *)v28, "failed to i2c lock\n");
                pthread_mutex_lock(&stru_197BB8);
                logfmt_raw((char *)&v29, 0x1000u, 0, v28);
                pthread_mutex_unlock(&stru_197BB8);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_master/backend/device/hal/platform/7007/7007_iic.c",
                  164,
                  "iic_read",
                  8,
                  83,
                  100,
                  &v29);
              }
              else
              {
                i2c_read(v12, (int)&v18, 2);
                pthread_mutex_unlock(&stru_197C58);
              }
              pthread_mutex_unlock(&i2c_mutex_all);
              if ( v18 == 2 && v19 == 1 )
                break;
              snprintf((char *)v28, 0x800u, "PICCMD %d failed on Chain[%d]!", 2, a1);
              pthread_mutex_lock(&stru_197BB8);
              logfmt_raw((char *)&v29, 0x1000u, 0, v28);
              pthread_mutex_unlock(&stru_197BB8);
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/device/hal/drv_pic/pic_1704.c",
                158,
                "pic_process_cmd",
                15,
                103,
                20,
                &v29);
              sleep(1u);
              v17 = (unsigned __int8)(v17 - 1);
              if ( !v17 )
              {
                snprintf((char *)v28, 0x800u, "%s send data to pic error chain[%d]!", "pic1704_update_app_program", a1);
                pthread_mutex_lock(&stru_197BB8);
                logfmt_raw((char *)&v29, 0x1000u, 0, v28);
                pthread_mutex_unlock(&stru_197BB8);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_master/backend/device/hal/drv_pic/pic_1704.c",
                  158,
                  "pic1704_update_app_program",
                  26,
                  335,
                  20,
                  &v29);
                free(v3);
                return 0;
              }
            }
            snprintf((char *)v28, 0x800u, "PICCMD %d passed on Chain[%d]!", v18, a1);
            v16 += 16;
            pthread_mutex_lock(&stru_197BB8);
            logfmt_raw((char *)&v29, 0x1000u, 0, v28);
            pthread_mutex_unlock(&stru_197BB8);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/device/hal/drv_pic/pic_1704.c",
              158,
              "pic_process_cmd",
              15,
              98,
              20,
              &v29);
          }
          while ( v3 + 14096 != v16 );
          LOWORD(v29) = 7;
          LOWORD(v25[0]) = 255;
          HIBYTE(v29) = a1;
          BYTE2(v29) = 2;
          v30 = 0;
          v28[0] = 0;
          LOWORD(v28[1]) = 0;
          if ( sub_134E40(v29, 0, v28, (unsigned __int8 *)v25) )
          {
            free(v3);
            return 1;
          }
          snprintf((char *)v28, 0x800u, "%s reset error after program chain[%d]!", "pic1704_update_app_program", a1);
          V_LOCK();
          logfmt_raw((char *)&v29, 0x1000u, 0, v28);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/drv_pic/pic_1704.c",
            158,
            "pic1704_update_app_program",
            26,
            345,
            20,
            &v29);
LABEL_19:
          free(v3);
          return 0;
        }
        snprintf((char *)v28, 0x800u, "%s erase pic error chain[%d]!", "pic1704_update_app_program", a1);
        pthread_mutex_lock(&stru_197BB8);
        logfmt_raw((char *)&v29, 0x1000u, 0, v28);
        pthread_mutex_unlock(&stru_197BB8);
        v14 = 315;
      }
      else
      {
        snprintf((char *)v28, 0x800u, "%s reset pic error chain[%d]!", "pic1704_update_app_program", a1);
        pthread_mutex_lock(&stru_197BB8);
        logfmt_raw((char *)&v29, 0x1000u, 0, v28);
        pthread_mutex_unlock(&stru_197BB8);
        v14 = 306;
      }
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/drv_pic/pic_1704.c",
        158,
        "pic1704_update_app_program",
        26,
        v14,
        20,
        &v29);
      goto LABEL_19;
    }
    snprintf((char *)v28, 0x800u, "%s malloc failed chain[%d]!", "pic1704_update_app_program", a1);
    V_LOCK();
    logfmt_raw((char *)&v29, 0x1000u, 0, v28);
    V_UNLOCK();
    v15 = 281;
  }
  else
  {
    snprintf(
      (char *)v28,
      0x800u,
      "%s open DSPIC33EP16GS202_PIC_PROGRAM failed chain[%d]!",
      "pic1704_update_app_program",
      a1);
    V_LOCK();
    logfmt_raw((char *)&v29, 0x1000u, 0, v28);
    V_UNLOCK();
    v15 = 274;
  }
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/drv_pic/pic_1704.c",
    158,
    "pic1704_update_app_program",
    26,
    v15,
    20,
    &v29);
  return -1;
}
