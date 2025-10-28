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
  int v13; // r3
  int v15; // r2
  int v16; // r3
  int v17; // r2
  int v18; // r3
  int v19; // r3
  char *v20; // [sp+10h] [bp-185Ch]
  int v21; // [sp+14h] [bp-1858h]
  unsigned __int8 v22; // [sp+34h] [bp-1838h] BYREF
  char v23; // [sp+35h] [bp-1837h]
  char s[8]; // [sp+38h] [bp-1834h] BYREF
  int v25; // [sp+40h] [bp-182Ch]
  int v26; // [sp+44h] [bp-1828h]
  int v27; // [sp+48h] [bp-1824h]
  int v28; // [sp+4Ch] [bp-1820h]
  _DWORD v29[5]; // [sp+50h] [bp-181Ch] BYREF
  char v30; // [sp+64h] [bp-1808h]
  char v31; // [sp+65h] [bp-1807h]
  _DWORD v32[510]; // [sp+68h] [bp-1804h] BYREF
  int v33; // [sp+868h] [bp-1004h] BYREF
  int v34; // [sp+86Ch] [bp-1000h]

  *(_DWORD *)s = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v25 = 0;
  *(_DWORD *)&s[3] = 0;
  v2 = (FILE *)fopen64("/etc/config/dsPIC33EP16GS202_app.txt", 1571316);
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
      HIBYTE(v33) = a1;
      v34 = 0;
      LOWORD(v33) = 7;
      BYTE2(v33) = 2;
      LOWORD(v29[0]) = 255;
      v32[0] = 0;
      LOWORD(v32[1]) = 0;
      if ( sub_C36EC(v33, 0, v32, (unsigned __int8 *)v29) )
      {
        v34 = 0;
        HIBYTE(v33) = a1;
        BYTE2(v33) = 2;
        LOWORD(v33) = 9;
        v32[0] = 0;
        LOWORD(v32[1]) = 0;
        LOWORD(v29[0]) = 255;
        if ( sub_C36EC(v33, 0, v32, (unsigned __int8 *)v29) )
        {
          v20 = v3 + 16;
          do
          {
            v6 = v20;
            __pld(v20);
            v7 = *((_DWORD *)v6 - 4);
            v8 = *((_DWORD *)v6 - 3);
            v9 = *((_DWORD *)v6 - 2);
            v10 = *((_DWORD *)v6 - 1);
            v29[0] = 34908757;
            v23 = 0;
            v25 = v7;
            v26 = v8;
            v27 = v9;
            v28 = v10;
            v29[1] = v7;
            v29[2] = v8;
            v29[3] = v9;
            v22 = -1;
            v29[4] = v10;
            LOBYTE(v21) = 4;
            v30 = (unsigned __int16)(HIBYTE(v10)
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
            v31 = HIBYTE(v10)
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
              if ( pthread_mutex_lock(&stru_1A8A58) )
              {
                strcpy((char *)v32, "failed to i2c lock\n");
                pthread_mutex_lock(&stru_1A8A24);
                logfmt_raw((char *)&v33, 0x1000u, 0, v32);
                pthread_mutex_unlock(&stru_1A8A24);
                LOWORD(v18) = -15496;
                HIWORD(v18) = (unsigned int)"enkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c" >> 16;
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_master/backend/device/hal/platform/7007/7007_iic.c",
                  164,
                  v18,
                  9,
                  103,
                  100,
                  &v33);
              }
              else
              {
                i2c_write(v11, (int)v29, 22);
                pthread_mutex_unlock(&stru_1A8A58);
              }
              usleep(0x2710u);
              v12 = g_bitmain_pic_state[2 * a1];
              if ( pthread_mutex_lock(&stru_1A8A58) )
              {
                strcpy((char *)v32, "failed to i2c lock\n");
                pthread_mutex_lock(&stru_1A8A24);
                logfmt_raw((char *)&v33, 0x1000u, 0, v32);
                pthread_mutex_unlock(&stru_1A8A24);
                LOWORD(v19) = -15484;
                HIWORD(v19) = (unsigned int)"ns/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c" >> 16;
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_master/backend/device/hal/platform/7007/7007_iic.c",
                  164,
                  v19,
                  8,
                  83,
                  100,
                  &v33);
              }
              else
              {
                i2c_read(v12, (int)&v22, 2);
                pthread_mutex_unlock(&stru_1A8A58);
              }
              pthread_mutex_unlock(&i2c_mutex_all);
              if ( v22 == 2 && v23 == 1 )
                break;
              snprintf((char *)v32, 0x800u, "PICCMD %d failed on Chain[%d]!", 2, a1);
              pthread_mutex_lock(&stru_1A8A24);
              logfmt_raw((char *)&v33, 0x1000u, 0, v32);
              pthread_mutex_unlock(&stru_1A8A24);
              LOWORD(v13) = -15472;
              HIWORD(v13) = (unsigned int)"/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c" >> 16;
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/device/hal/drv_pic/pic_1704.c",
                158,
                v13,
                15,
                103,
                20,
                &v33);
              sleep(1u);
              v21 = (unsigned __int8)(v21 - 1);
              if ( !v21 )
              {
                snprintf((char *)v32, 0x800u, "%s send data to pic error chain[%d]!", "pic1704_update_app_program", a1);
                pthread_mutex_lock(&stru_1A8A24);
                logfmt_raw((char *)&v33, 0x1000u, 0, v32);
                pthread_mutex_unlock(&stru_1A8A24);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_master/backend/device/hal/drv_pic/pic_1704.c",
                  158,
                  "pic1704_update_app_program",
                  26,
                  335,
                  20,
                  &v33);
                free(v3);
                return 0;
              }
            }
            snprintf((char *)v32, 0x800u, "PICCMD %d passed on Chain[%d]!", v22, a1);
            v20 += 16;
            pthread_mutex_lock(&stru_1A8A24);
            logfmt_raw((char *)&v33, 0x1000u, 0, v32);
            pthread_mutex_unlock(&stru_1A8A24);
            LOWORD(v16) = -15472;
            HIWORD(v16) = (unsigned int)"/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c" >> 16;
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/device/hal/drv_pic/pic_1704.c",
              158,
              v16,
              15,
              98,
              20,
              &v33);
          }
          while ( v3 + 14096 != v20 );
          LOWORD(v33) = 7;
          LOWORD(v29[0]) = 255;
          HIBYTE(v33) = a1;
          BYTE2(v33) = 2;
          v34 = 0;
          v32[0] = 0;
          LOWORD(v32[1]) = 0;
          if ( sub_C36EC(v33, 0, v32, (unsigned __int8 *)v29) )
          {
            free(v3);
            return 1;
          }
          snprintf((char *)v32, 0x800u, "%s reset error after program chain[%d]!", "pic1704_update_app_program", a1);
          V_LOCK();
          logfmt_raw((char *)&v33, 0x1000u, 0, v32);
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
            &v33);
LABEL_19:
          free(v3);
          return 0;
        }
        snprintf((char *)v32, 0x800u, "%s erase pic error chain[%d]!", "pic1704_update_app_program", a1);
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw((char *)&v33, 0x1000u, 0, v32);
        pthread_mutex_unlock(&stru_1A8A24);
        v15 = 315;
      }
      else
      {
        snprintf((char *)v32, 0x800u, "%s reset pic error chain[%d]!", "pic1704_update_app_program", a1);
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw((char *)&v33, 0x1000u, 0, v32);
        pthread_mutex_unlock(&stru_1A8A24);
        v15 = 306;
      }
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/drv_pic/pic_1704.c",
        158,
        "pic1704_update_app_program",
        26,
        v15,
        20,
        &v33);
      goto LABEL_19;
    }
    snprintf((char *)v32, 0x800u, "%s malloc failed chain[%d]!", "pic1704_update_app_program", a1);
    V_LOCK();
    logfmt_raw((char *)&v33, 0x1000u, 0, v32);
    V_UNLOCK();
    v17 = 281;
  }
  else
  {
    snprintf(
      (char *)v32,
      0x800u,
      "%s open DSPIC33EP16GS202_PIC_PROGRAM failed chain[%d]!",
      "pic1704_update_app_program",
      a1);
    V_LOCK();
    logfmt_raw((char *)&v33, 0x1000u, 0, v32);
    V_UNLOCK();
    v17 = 274;
  }
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/drv_pic/pic_1704.c",
    158,
    "pic1704_update_app_program",
    26,
    v17,
    20,
    &v33);
  return -1;
}
