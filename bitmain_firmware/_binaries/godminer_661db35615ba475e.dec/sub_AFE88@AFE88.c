int __fastcall sub_AFE88(int a1, unsigned __int8 *a2, unsigned int a3, unsigned __int8 *a4, unsigned int a5)
{
  int v6; // r6
  int v7; // r5
  _DWORD *v8; // r11
  int v9; // r7
  size_t v10; // r8
  void *v11; // r0
  void *v12; // r4
  int v13; // r7
  _DWORD *v14; // r3
  int v15; // r6
  int v16; // r5
  _DWORD *v17; // r11
  int v18; // r7
  size_t v19; // r10
  void *v20; // r0
  void *v21; // r4
  int v22; // r10
  _DWORD *v23; // r3
  unsigned int v24; // lr
  unsigned __int8 *v25; // r12
  int v26; // r3
  __int16 v27; // r1
  __int16 v28; // r2
  int v29; // r4
  __int16 v30; // r0
  unsigned int v31; // r1
  unsigned __int8 *v32; // r0
  __int16 v33; // r2
  int v34; // r0
  int v35; // r2
  int v36; // r5
  unsigned __int8 *v37; // r4
  int v38; // t1
  int v39; // r3
  int v40; // r4
  int v42; // r4
  _DWORD *v43; // r0
  _DWORD *v44; // r11
  int v45; // r6
  unsigned int v46; // r5
  int v47; // r7
  int v48; // r5
  int v49; // r4
  _DWORD *v50; // r0
  _DWORD *v51; // r11
  unsigned int v52; // r7
  int v53; // r4
  int v54; // r6
  int v55; // r7
  int v56; // r3
  int v57; // r4
  int v58; // r3
  int v59; // r0
  int v60; // r12
  int v61; // [sp+0h] [bp-1854h]
  pthread_mutex_t *v62; // [sp+14h] [bp-1840h]
  size_t n; // [sp+18h] [bp-183Ch]
  size_t na; // [sp+18h] [bp-183Ch]
  unsigned __int8 v66; // [sp+20h] [bp-1834h]
  size_t v67; // [sp+20h] [bp-1834h]
  unsigned __int8 mutex; // [sp+28h] [bp-182Ch]
  unsigned int v72; // [sp+3Ch] [bp-1818h]
  int v73; // [sp+40h] [bp-1814h]
  unsigned __int8 *v74; // [sp+44h] [bp-1810h]
  int v75; // [sp+48h] [bp-180Ch] BYREF
  int v76; // [sp+4Ch] [bp-1808h] BYREF
  char s[2048]; // [sp+50h] [bp-1804h] BYREF
  char v78[4080]; // [sp+850h] [bp-1004h] BYREF

  pthread_mutex_lock(&power_mutex);
  v74 = &a4[((a5 - 37) & 0xFFFFFFE0) + 68];
  v72 = a5 - 2;
  v73 = 0;
  while ( 1 )
  {
    v66 = 0;
    v62 = 0;
    do
    {
      if ( pthread_mutex_lock(&stru_197C58) )
      {
        strcpy(s, "failed to i2c lock\n");
        pthread_mutex_lock(&stru_197BB8);
        logfmt_raw(v78, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_197BB8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_iic.c",
          164,
          "iic_write_reg",
          13,
          146,
          100,
          v78);
      }
      else
      {
        v75 = a1;
        if ( pthread_mutex_lock(&stru_197C70) )
        {
          strcpy(s, "failed to i2c lock\n");
          pthread_mutex_lock(&stru_197BB8);
          logfmt_raw(v78, 0x1000u, 0, s);
          pthread_mutex_unlock(&stru_197BB8);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/platform/7007/7007_i2c.c",
            164,
            "i2c_write_reg",
            13,
            288,
            100,
            v78);
        }
        else
        {
          if ( dword_197C88 )
          {
            v6 = *(_DWORD *)dword_197C88;
            v7 = *(_DWORD *)dword_197C88 + 4;
            v8 = **(_DWORD ***)dword_197C88;
            while ( v8 != (_DWORD *)v7 )
            {
              v9 = v8[4];
              v10 = *(_DWORD *)(v9 + 4);
              v11 = malloc(v10);
              v12 = v11;
              if ( v11 )
                memcpy(v11, *(const void **)v9, v10);
              v13 = (*(int (__fastcall **)(int *, void *))(v6 + 36))(&v75, v12);
              free(v12);
              if ( !v13 )
              {
                v42 = v8[5];
                na = *(_DWORD *)(v42 + 4);
                v43 = malloc(na);
                v44 = v43;
                if ( !v43 )
LABEL_47:
                  __und(0);
                memcpy(v43, *(const void **)v42, na);
                v45 = *v44;
                v46 = v44[1];
                snprintf(s, 0x800u, "i2c read master = %d, slave = %d\n", *v44, v46);
                pthread_mutex_lock(&stru_197BB8);
                logfmt_raw(v78, 0x1000u, 0, s);
                v47 = 601;
                pthread_mutex_unlock(&stru_197BB8);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_master/backend/device/hal/platform/7007/7007_i2c.c",
                  164,
                  "i2c_write_reg",
                  13,
                  295,
                  20,
                  v78);
                v48 = (unsigned __int8)v62->__size[(_DWORD)a2]
                    | 0x1000000
                    | (v45 << 26)
                    | (v46 >> 4 << 20)
                    | (v46 << 15) & 0x70000;
                do
                {
                  if ( *(int *)(dword_197C8C + 48) < 0 )
                  {
                    *(_DWORD *)(dword_197C8C + 48) = v48;
                    free(v44);
                    pthread_mutex_unlock(&stru_197C70);
                    goto LABEL_14;
                  }
                  usleep(0x1388u);
                  --v47;
                }
                while ( v47 );
                strcpy(s, "iic not ready 4 write\n");
                pthread_mutex_lock(&stru_197BB8);
                logfmt_raw(v78, 0x1000u, 0, s);
                pthread_mutex_unlock(&stru_197BB8);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_master/backend/device/hal/platform/7007/7007_i2c.c",
                  164,
                  "i2c_write_reg",
                  13,
                  303,
                  100,
                  v78);
                free(v44);
                pthread_mutex_unlock(&stru_197C70);
                goto LABEL_14;
              }
              v14 = (_DWORD *)*v8;
              v8 = (_DWORD *)v8[1];
              if ( v13 < 0 )
                v8 = v14;
            }
          }
          snprintf(s, 0x800u, "ctx %d not inited\n", v75);
          pthread_mutex_lock(&stru_197BB8);
          logfmt_raw(v78, 0x1000u, 0, s);
          pthread_mutex_unlock(&stru_197BB8);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/platform/7007/7007_i2c.c",
            164,
            "i2c_write_reg",
            13,
            313,
            100,
            v78);
          pthread_mutex_unlock(&stru_197C70);
        }
LABEL_14:
        pthread_mutex_unlock(&stru_197C58);
      }
      v62 = (pthread_mutex_t *)++v66;
    }
    while ( v66 < a3 );
    mutex = 0;
    usleep((__useconds_t)&loc_61A80);
    n = 0;
    do
    {
      if ( pthread_mutex_lock(&stru_197C58) )
      {
        strcpy(s, "failed to i2c lock\n");
        pthread_mutex_lock(&stru_197BB8);
        logfmt_raw(v78, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_197BB8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_iic.c",
          164,
          "iic_read_reg",
          12,
          124,
          100,
          v78);
      }
      else
      {
        v76 = a1;
        if ( pthread_mutex_lock(&stru_197C70) )
        {
          strcpy(s, "failed to i2c lock\n");
          pthread_mutex_lock(&stru_197BB8);
          logfmt_raw(v78, 0x1000u, 0, s);
          pthread_mutex_unlock(&stru_197BB8);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/platform/7007/7007_i2c.c",
            164,
            "i2c_read_reg",
            12,
            229,
            100,
            v78);
        }
        else if ( dword_197C88 )
        {
          v15 = *(_DWORD *)dword_197C88;
          v16 = *(_DWORD *)dword_197C88 + 4;
          v17 = **(_DWORD ***)dword_197C88;
          while ( 1 )
          {
            if ( v17 == (_DWORD *)v16 )
              goto LABEL_27;
            v18 = v17[4];
            v19 = *(_DWORD *)(v18 + 4);
            v20 = malloc(v19);
            v21 = v20;
            if ( v20 )
              memcpy(v20, *(const void **)v18, v19);
            v22 = (*(int (__fastcall **)(int *, void *))(v15 + 36))(&v76, v21);
            free(v21);
            if ( !v22 )
              break;
            v23 = (_DWORD *)*v17;
            v17 = (_DWORD *)v17[1];
            if ( v22 < 0 )
              v17 = v23;
          }
          v49 = v17[5];
          v67 = *(_DWORD *)(v49 + 4);
          v50 = malloc(v67);
          v51 = v50;
          if ( !v50 )
            goto LABEL_47;
          memcpy(v50, *(const void **)v49, v67);
          v52 = v51[1];
          v53 = 601;
          v54 = *v51 << 26;
          snprintf(s, 0x800u, "i2c read master = %d, slave = %d\n", *v51, v52);
          pthread_mutex_lock(&stru_197BB8);
          logfmt_raw(v78, 0x1000u, 0, s);
          pthread_mutex_unlock(&stru_197BB8);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/platform/7007/7007_i2c.c",
            164,
            "i2c_read_reg",
            12,
            236,
            20,
            v78);
          v55 = v54 | 0x3000000 | (v52 >> 4 << 20) | (v52 << 15) & 0x70000;
          while ( 1 )
          {
            v56 = dword_197C8C;
            if ( *(int *)(dword_197C8C + 48) < 0 )
              break;
            usleep(0x1388u);
            if ( !--v53 )
            {
              strcpy(s, "iic not ready 4 read1\n");
              pthread_mutex_lock(&stru_197BB8);
              logfmt_raw(v78, 0x1000u, 0, s);
              pthread_mutex_unlock(&stru_197BB8);
              v59 = g_zc;
              v60 = 243;
              goto LABEL_59;
            }
          }
          v57 = 601;
          *(_DWORD *)(dword_197C8C + 48) = v55;
          while ( 1 )
          {
            v58 = *(_DWORD *)(v56 + 48);
            if ( v58 < 0 )
            {
              a4[n] = v58;
              free(v51);
              pthread_mutex_unlock(&stru_197C70);
              goto LABEL_28;
            }
            usleep(0x1388u);
            if ( !--v57 )
              break;
            v56 = dword_197C8C;
          }
          strcpy(s, "iic failed to read data\n");
          pthread_mutex_lock(&stru_197BB8);
          logfmt_raw(v78, 0x1000u, 0, s);
          pthread_mutex_unlock(&stru_197BB8);
          v59 = g_zc;
          v60 = 254;
LABEL_59:
          zlog(
            v59,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/platform/7007/7007_i2c.c",
            164,
            "i2c_read_reg",
            12,
            v60,
            100,
            v78);
          free(v51);
          pthread_mutex_unlock(&stru_197C70);
        }
        else
        {
LABEL_27:
          snprintf(s, 0x800u, "ctx %d not inited\n", v76);
          pthread_mutex_lock(&stru_197BB8);
          logfmt_raw(v78, 0x1000u, 0, s);
          pthread_mutex_unlock(&stru_197BB8);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/platform/7007/7007_i2c.c",
            164,
            "i2c_read_reg",
            12,
            262,
            100,
            v78);
          pthread_mutex_unlock(&stru_197C70);
        }
LABEL_28:
        pthread_mutex_unlock(&stru_197C58);
      }
      n = ++mutex;
    }
    while ( mutex < a5 );
    usleep((__useconds_t)"ead_unregister_cancel");
    if ( v72 <= 0x22 )
    {
      v24 = 2;
      v31 = a5 - 2;
      v29 = 2;
      LOWORD(v26) = 0;
      v32 = a4;
    }
    else
    {
      v24 = 2;
      v25 = a4 + 36;
      LOWORD(v26) = 0;
      do
      {
        v27 = *(v25 - 33);
        v24 += 32;
        v28 = *(v25 - 34);
        v29 = v24;
        v30 = *(v25 - 32);
        __pld(v25);
        v25 += 32;
        LOWORD(v26) = v26
                    + *(v25 - 35)
                    + *(v25 - 36)
                    + *(v25 - 37)
                    + *(v25 - 38)
                    + *(v25 - 39)
                    + *(v25 - 40)
                    + *(v25 - 41)
                    + *(v25 - 42)
                    + *(v25 - 43)
                    + *(v25 - 44)
                    + *(v25 - 45)
                    + *(v25 - 46)
                    + *(v25 - 47)
                    + *(v25 - 48)
                    + *(v25 - 49)
                    + *(v25 - 50)
                    + *(v25 - 51)
                    + *(v25 - 52)
                    + *(v25 - 53)
                    + *(v25 - 54)
                    + *(v25 - 55)
                    + *(v25 - 56)
                    + *(v25 - 57)
                    + *(v25 - 58)
                    + *(v25 - 59)
                    + *(v25 - 60)
                    + *(v25 - 61)
                    + *(v25 - 62)
                    + *(v25 - 63)
                    + v30
                    + v28
                    + v27;
      }
      while ( v74 != v25 );
      v31 = a5 - 2;
      v32 = a4;
    }
    do
    {
      v33 = v32[v29];
      v29 = ++v24;
      v26 = (unsigned __int16)(v26 + v33);
    }
    while ( v31 > v24 );
    if ( (unsigned __int16)(a4[v72] + (a4[a5 - 1] << 8)) != v26 )
    {
      snprintf(
        s,
        0x800u,
        "power reply the bad crc, crc = 0x%04x, crc_read = 0x%04x\n",
        v26,
        (unsigned __int16)(a4[v72] + (a4[a5 - 1] << 8)));
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v78, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_197BB8);
      v34 = g_zc;
      v35 = 80;
      goto LABEL_37;
    }
    if ( *a2 == *a4 && a2[1] == a4[1] && a2[3] == a4[3] && a5 == a4[2] + 2 )
      break;
    strcpy(s, "power reply the bad data\n");
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v78, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_197BB8);
    v34 = g_zc;
    v35 = 86;
LABEL_37:
    zlog(
      v34,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/power/bitmain_power_APW9.c",
      166,
      "check_read_back_data",
      20,
      v35,
      100,
      v78);
    v36 = 0;
    v37 = a4 - 1;
    do
    {
      v38 = *++v37;
      v39 = v36++;
      snprintf(s, 0x800u, "read_back_data[%d] = 0x%02x", v39, v38);
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v78, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/power/bitmain_power_APW9.c",
        166,
        "check_read_back_data",
        20,
        92,
        100,
        v78);
    }
    while ( &a4[a5 - 1] != v37 );
    v61 = v73++;
    snprintf(s, 0x800u, "Send power cmd(0x%02x) failed, retry %d\n", a2[3], v61);
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v78, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/power/bitmain_power_APW9.c",
      166,
      "exec_power_cmd",
      14,
      167,
      100,
      v78);
    if ( v73 == 3 )
    {
      v40 = -2147482880;
      goto LABEL_41;
    }
  }
  v40 = 0;
LABEL_41:
  pthread_mutex_unlock(&power_mutex);
  return v40;
}
