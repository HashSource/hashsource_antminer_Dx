int __fastcall pic1704_update_app_program(int a1)
{
  FILE *v2; // r8
  char *v3; // r0
  char *v4; // r6
  char *v5; // r4
  char *v6; // r9
  unsigned int v7; // r0
  char *v8; // r6
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r11
  int v14; // r11
  int v16; // r2
  int v17; // r2
  int v18; // [sp+20h] [bp-184Ch]
  char *v19; // [sp+28h] [bp-1844h]
  char *v20; // [sp+2Ch] [bp-1840h]
  __int16 v21; // [sp+34h] [bp-1838h] BYREF
  char s[8]; // [sp+38h] [bp-1834h] BYREF
  int v23; // [sp+40h] [bp-182Ch]
  int v24; // [sp+44h] [bp-1828h]
  int v25; // [sp+48h] [bp-1824h]
  int v26; // [sp+4Ch] [bp-1820h]
  _DWORD v27[5]; // [sp+50h] [bp-181Ch] BYREF
  char v28; // [sp+64h] [bp-1808h]
  char v29; // [sp+65h] [bp-1807h]
  _DWORD v30[512]; // [sp+68h] [bp-1804h] BYREF
  int v31; // [sp+868h] [bp-1004h] BYREF
  int v32; // [sp+86Ch] [bp-1000h]

  *(_DWORD *)s = 0;
  v23 = 0;
  *(_DWORD *)&s[3] = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v2 = fopen("/etc/config/dsPIC33EP16GS202_app.txt", "r");
  if ( v2 )
  {
    v3 = (char *)calloc(0x3700u, 1u);
    v4 = v3;
    if ( v3 )
    {
      v5 = v3;
      v6 = v3 + 14080;
      fseek(v2, 0, 0);
      do
      {
        v5 += 4;
        fgets(s, 7, v2);
        v7 = strtoul(s, 0, 16);
        *(v5 - 1) = v7;
        *(v5 - 4) = HIBYTE(v7);
        *(v5 - 3) = BYTE2(v7);
        *(v5 - 2) = BYTE1(v7);
      }
      while ( v6 != v5 );
      fclose(v2);
      v32 = 0;
      HIBYTE(v31) = a1;
      LOWORD(v31) = 7;
      BYTE2(v31) = 2;
      v30[0] = 0;
      LOWORD(v30[1]) = 0;
      LOWORD(v27[0]) = 255;
      if ( sub_D5328(v31, 0, v30, (unsigned __int8 *)v27) )
      {
        v32 = 0;
        HIBYTE(v31) = a1;
        BYTE2(v31) = 2;
        LOWORD(v31) = 9;
        v30[0] = 0;
        LOWORD(v30[1]) = 0;
        LOWORD(v27[0]) = 255;
        if ( sub_D5328(v31, 0, v30, (unsigned __int8 *)v27) )
        {
          v20 = v4 + 14096;
          v19 = v4;
          v8 = v4 + 16;
          do
          {
            v9 = *((_DWORD *)v8 - 4);
            v10 = *((_DWORD *)v8 - 3);
            v11 = *((_DWORD *)v8 - 2);
            v12 = *((_DWORD *)v8 - 1);
            __pld(v8);
            v23 = v9;
            v24 = v10;
            v25 = v11;
            v26 = v12;
            v27[1] = v9;
            v27[2] = v10;
            v27[3] = v11;
            v27[0] = 34908757;
            LOBYTE(v18) = 4;
            v21 = 255;
            v27[4] = v12;
            v28 = (unsigned __int16)(HIBYTE(v12)
                                   + BYTE2(v12)
                                   + BYTE1(v12)
                                   + (unsigned __int8)v12
                                   + HIBYTE(v11)
                                   + BYTE2(v11)
                                   + BYTE1(v11)
                                   + (unsigned __int8)v9
                                   + BYTE1(v9)
                                   + 22
                                   + BYTE2(v9)
                                   + HIBYTE(v9)
                                   + (unsigned __int8)v10
                                   + BYTE1(v10)
                                   + BYTE2(v10)
                                   + HIBYTE(v10)
                                   + (unsigned __int8)v11) >> 8;
            v29 = HIBYTE(v12)
                + BYTE2(v12)
                + BYTE1(v12)
                + v12
                + HIBYTE(v11)
                + BYTE2(v11)
                + BYTE1(v11)
                + v9
                + BYTE1(v9)
                + 22
                + BYTE2(v9)
                + HIBYTE(v9)
                + v10
                + BYTE1(v10)
                + BYTE2(v10)
                + HIBYTE(v10)
                + v11;
            while ( 1 )
            {
              pthread_mutex_lock(&i2c_mutex_all);
              v13 = g_bitmain_pic_state[2 * a1];
              if ( pthread_mutex_lock(&stru_3B5254) )
              {
                strcpy((char *)v30, "failed to i2c lock\n");
                pthread_mutex_lock(&stru_3B526C);
                logfmt_raw((char *)&v31, 0x1000u, 0, v30);
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
                i2c_write(v13, (int)v27, 22);
                pthread_mutex_unlock(&stru_3B5254);
              }
              usleep(0x2710u);
              v14 = g_bitmain_pic_state[2 * a1];
              if ( pthread_mutex_lock(&stru_3B5254) )
              {
                strcpy((char *)v30, "failed to i2c lock\n");
                pthread_mutex_lock(&stru_3B526C);
                logfmt_raw((char *)&v31, 0x1000u, 0, v30);
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
                i2c_read(v14, (int)&v21, 2);
                pthread_mutex_unlock(&stru_3B5254);
              }
              pthread_mutex_unlock(&i2c_mutex_all);
              if ( (unsigned __int8)v21 == 2 && HIBYTE(v21) == 1 )
                break;
              snprintf((char *)v30, 0x800u, "PICCMD %d failed on Chain[%d]!", 2, a1);
              pthread_mutex_lock(&stru_3B526C);
              logfmt_raw((char *)&v31, 0x1000u, 0, v30);
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
              v18 = (unsigned __int8)(v18 - 1);
              if ( !v18 )
              {
                snprintf((char *)v30, 0x800u, "%s send data to pic error chain[%d]!", "pic1704_update_app_program", a1);
                pthread_mutex_lock(&stru_3B526C);
                logfmt_raw((char *)&v31, 0x1000u, 0, v30);
                pthread_mutex_unlock(&stru_3B526C);
                zlog(
                  g_zc,
                  "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/pic_1704.c",
                  75,
                  "pic1704_update_app_program",
                  26,
                  335,
                  20,
                  &v31);
                free(v19);
                return 0;
              }
            }
            snprintf((char *)v30, 0x800u, "PICCMD %d passed on Chain[%d]!", (unsigned __int8)v21, a1);
            V_LOCK();
            logfmt_raw((char *)&v31, 0x1000u, 0, v30);
            V_UNLOCK();
            v8 += 16;
            zlog(
              g_zc,
              "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/pic_1704.c",
              75,
              "pic_process_cmd",
              15,
              98,
              20,
              &v31);
          }
          while ( v20 != v8 );
          BYTE2(v31) = 2;
          HIBYTE(v31) = a1;
          v32 = 0;
          LOWORD(v31) = 7;
          v30[0] = 0;
          LOWORD(v30[1]) = 0;
          v4 = v19;
          LOWORD(v27[0]) = 255;
          if ( sub_D5328(v31, 0, v30, (unsigned __int8 *)v27) )
          {
            free(v19);
            return 1;
          }
          snprintf((char *)v30, 0x800u, "%s reset error after program chain[%d]!", "pic1704_update_app_program", a1);
          V_LOCK();
          logfmt_raw((char *)&v31, 0x1000u, 0, v30);
          V_UNLOCK();
          zlog(
            g_zc,
            "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/pic_1704.c",
            75,
            "pic1704_update_app_program",
            26,
            345,
            20,
            &v31);
LABEL_19:
          free(v4);
          return 0;
        }
        snprintf((char *)v30, 0x800u, "%s erase pic error chain[%d]!", "pic1704_update_app_program", a1);
        pthread_mutex_lock(&stru_3B526C);
        logfmt_raw((char *)&v31, 0x1000u, 0, v30);
        pthread_mutex_unlock(&stru_3B526C);
        v16 = 315;
      }
      else
      {
        snprintf((char *)v30, 0x800u, "%s reset pic error chain[%d]!", "pic1704_update_app_program", a1);
        pthread_mutex_lock(&stru_3B526C);
        logfmt_raw((char *)&v31, 0x1000u, 0, v30);
        pthread_mutex_unlock(&stru_3B526C);
        v16 = 306;
      }
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/pic_1704.c",
        75,
        "pic1704_update_app_program",
        26,
        v16,
        20,
        &v31);
      goto LABEL_19;
    }
    snprintf((char *)v30, 0x800u, "%s malloc failed chain[%d]!", "pic1704_update_app_program", a1);
    V_LOCK();
    logfmt_raw((char *)&v31, 0x1000u, 0, v30);
    V_UNLOCK();
    v17 = 281;
  }
  else
  {
    snprintf(
      (char *)v30,
      0x800u,
      "%s open DSPIC33EP16GS202_PIC_PROGRAM failed chain[%d]!",
      "pic1704_update_app_program",
      a1);
    V_LOCK();
    logfmt_raw((char *)&v31, 0x1000u, 0, v30);
    V_UNLOCK();
    v17 = 274;
  }
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/drv_pic/pic_1704.c",
    75,
    "pic1704_update_app_program",
    26,
    v17,
    20,
    &v31);
  return -1;
}
