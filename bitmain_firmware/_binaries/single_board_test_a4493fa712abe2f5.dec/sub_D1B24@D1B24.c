int __fastcall sub_D1B24(int a1, unsigned __int8 *a2, unsigned int a3, unsigned __int8 *a4)
{
  int v4; // r10
  int v5; // r6
  int v6; // r5
  __int64 *v7; // r7
  int v8; // r8
  size_t v9; // r11
  void *v10; // r0
  void *v11; // r4
  int v12; // r8
  __int64 v13; // kr00_8
  unsigned __int8 *v14; // r11
  int v15; // r6
  __int64 *v16; // r10
  int v17; // r5
  size_t v18; // r8
  void *v19; // r0
  void *v20; // r4
  int v21; // r8
  __int64 v22; // kr08_8
  int v23; // r2
  int v24; // r0
  int v25; // r3
  int v26; // r0
  int v27; // r2
  int v28; // r4
  unsigned __int8 *v29; // r6
  int v30; // t1
  int v31; // r3
  int v32; // r4
  int v34; // r4
  _DWORD *v35; // r0
  _DWORD *v36; // r11
  const void *v37; // r1
  int v38; // r4
  int v39; // r6
  unsigned int v40; // r5
  int v41; // r5
  int v42; // r4
  _DWORD *v43; // r0
  _DWORD *v44; // r10
  const void *v45; // r1
  int v46; // r4
  unsigned int v47; // r6
  int v48; // r5
  int v49; // r6
  int v50; // r3
  int v51; // r4
  int v52; // r3
  int v53; // r0
  int v54; // r2
  bool v55; // zf
  _BOOL4 v56; // r3
  int v57; // [sp+0h] [bp-183Ch]
  size_t n; // [sp+10h] [bp-182Ch]
  size_t na; // [sp+10h] [bp-182Ch]
  size_t nb; // [sp+10h] [bp-182Ch]
  unsigned __int8 v62; // [sp+18h] [bp-1824h]
  int v66; // [sp+2Ch] [bp-1810h]
  int v67; // [sp+30h] [bp-180Ch] BYREF
  int v68; // [sp+34h] [bp-1808h] BYREF
  char s[2048]; // [sp+38h] [bp-1804h] BYREF
  char v70[4100]; // [sp+838h] [bp-1004h] BYREF

  v66 = 0;
  pthread_mutex_lock(&power_mutex);
  while ( 1 )
  {
    v4 = 0;
    v62 = 0;
    do
    {
      if ( pthread_mutex_lock(&stru_3B5254) )
      {
        strcpy(s, "failed to i2c lock\n");
        pthread_mutex_lock(&stru_3B526C);
        logfmt_raw(v70, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c",
          81,
          "iic_write_reg",
          13,
          146,
          100,
          v70);
      }
      else
      {
        v67 = a1;
        if ( pthread_mutex_lock(&stru_3B5288) )
        {
          strcpy(s, "failed to i2c lock\n");
          pthread_mutex_lock(&stru_3B526C);
          logfmt_raw(v70, 0x1000u, 0, s);
          pthread_mutex_unlock(&stru_3B526C);
          zlog(
            g_zc,
            "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
            81,
            "i2c_write_reg",
            13,
            288,
            100,
            v70);
        }
        else
        {
          if ( dword_3B52A0 )
          {
            v5 = *(_DWORD *)dword_3B52A0;
            v6 = *(_DWORD *)dword_3B52A0 + 4;
            v7 = **(__int64 ***)dword_3B52A0;
            while ( v7 != (__int64 *)v6 )
            {
              v8 = *((_DWORD *)v7 + 4);
              v9 = *(_DWORD *)(v8 + 4);
              v10 = malloc(v9);
              v11 = v10;
              if ( v10 )
                memcpy(v10, *(const void **)v8, v9);
              v12 = (*(int (__fastcall **)(int *, void *))(v5 + 36))(&v67, v11);
              free(v11);
              if ( !v12 )
              {
                v34 = *((_DWORD *)v7 + 5);
                na = *(_DWORD *)(v34 + 4);
                v35 = malloc(na);
                v36 = v35;
                if ( !v35 )
                  __und(0xFFu);
                v37 = *(const void **)v34;
                v38 = 601;
                memcpy(v35, v37, na);
                v39 = *v36;
                v40 = v36[1];
                snprintf(s, 0x800u, "i2c read master = %d, slave = %d\n", *v36, v40);
                pthread_mutex_lock(&stru_3B526C);
                logfmt_raw(v70, 0x1000u, 0, s);
                pthread_mutex_unlock(&stru_3B526C);
                zlog(
                  g_zc,
                  "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
                  81,
                  "i2c_write_reg",
                  13,
                  295,
                  20,
                  v70);
                v41 = a2[v4] | 0x1000000 | (v39 << 26) | (v40 >> 4 << 20) | (v40 << 15) & 0x70000;
                do
                {
                  if ( *(int *)(dword_3B52A4 + 48) < 0 )
                  {
                    *(_DWORD *)(dword_3B52A4 + 48) = v41;
                    free(v36);
                    pthread_mutex_unlock(&stru_3B5288);
                    goto LABEL_14;
                  }
                  usleep(0x1388u);
                  --v38;
                }
                while ( v38 );
                strcpy(s, "iic not ready 4 write\n");
                pthread_mutex_lock(&stru_3B526C);
                logfmt_raw(v70, 0x1000u, 0, s);
                pthread_mutex_unlock(&stru_3B526C);
                zlog(
                  g_zc,
                  "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
                  81,
                  "i2c_write_reg",
                  13,
                  303,
                  100,
                  v70);
                free(v36);
                pthread_mutex_unlock(&stru_3B5288);
                goto LABEL_14;
              }
              v13 = *v7;
              v7 = (__int64 *)*((_DWORD *)v7 + 1);
              if ( v12 < 0 )
                v7 = (__int64 *)v13;
            }
          }
          snprintf(s, 0x800u, "ctx %d not inited\n", v67);
          pthread_mutex_lock(&stru_3B526C);
          logfmt_raw(v70, 0x1000u, 0, s);
          pthread_mutex_unlock(&stru_3B526C);
          zlog(
            g_zc,
            "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
            81,
            "i2c_write_reg",
            13,
            313,
            100,
            v70);
          pthread_mutex_unlock(&stru_3B5288);
        }
LABEL_14:
        pthread_mutex_unlock(&stru_3B5254);
      }
      v4 = ++v62;
    }
    while ( v62 < a3 );
    v14 = a4;
    usleep((__useconds_t)&loc_61A80);
    do
    {
      if ( pthread_mutex_lock(&stru_3B5254) )
      {
        strcpy(s, "failed to i2c lock\n");
        pthread_mutex_lock(&stru_3B526C);
        logfmt_raw(v70, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c",
          81,
          "iic_read_reg",
          12,
          124,
          100,
          v70);
      }
      else
      {
        v68 = a1;
        if ( pthread_mutex_lock(&stru_3B5288) )
        {
          strcpy(s, "failed to i2c lock\n");
          pthread_mutex_lock(&stru_3B526C);
          logfmt_raw(v70, 0x1000u, 0, s);
          pthread_mutex_unlock(&stru_3B526C);
          zlog(
            g_zc,
            "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
            81,
            "i2c_read_reg",
            12,
            229,
            100,
            v70);
        }
        else
        {
          if ( dword_3B52A0 )
          {
            v15 = *(_DWORD *)dword_3B52A0;
            v16 = **(__int64 ***)dword_3B52A0;
            n = *(_DWORD *)dword_3B52A0 + 4;
            while ( (__int64 *)n != v16 )
            {
              v17 = *((_DWORD *)v16 + 4);
              v18 = *(_DWORD *)(v17 + 4);
              v19 = malloc(v18);
              v20 = v19;
              if ( v19 )
                memcpy(v19, *(const void **)v17, v18);
              v21 = (*(int (__fastcall **)(int *, void *))(v15 + 36))(&v68, v20);
              free(v20);
              if ( !v21 )
              {
                v42 = *((_DWORD *)v16 + 5);
                nb = *(_DWORD *)(v42 + 4);
                v43 = malloc(nb);
                v44 = v43;
                if ( !v43 )
                  __und(0xFFu);
                v45 = *(const void **)v42;
                v46 = 601;
                memcpy(v43, v45, nb);
                v47 = v44[1];
                v48 = *v44 << 26;
                snprintf(s, 0x800u, "i2c read master = %d, slave = %d\n", *v44, v47);
                pthread_mutex_lock(&stru_3B526C);
                logfmt_raw(v70, 0x1000u, 0, s);
                pthread_mutex_unlock(&stru_3B526C);
                zlog(
                  g_zc,
                  "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
                  81,
                  "i2c_read_reg",
                  12,
                  236,
                  20,
                  v70);
                v49 = (v47 << 15) & 0x70000 | v48 | 0x3000000 | (v47 >> 4 << 20);
                while ( 1 )
                {
                  v50 = dword_3B52A4;
                  if ( *(int *)(dword_3B52A4 + 48) < 0 )
                    break;
                  usleep(0x1388u);
                  if ( !--v46 )
                  {
                    strcpy(s, "iic not ready 4 read1\n");
                    pthread_mutex_lock(&stru_3B526C);
                    logfmt_raw(v70, 0x1000u, 0, s);
                    pthread_mutex_unlock(&stru_3B526C);
                    v53 = g_zc;
                    v54 = 243;
                    goto LABEL_55;
                  }
                }
                *(_DWORD *)(dword_3B52A4 + 48) = v49;
                v51 = 601;
                while ( 1 )
                {
                  v52 = *(_DWORD *)(v50 + 48);
                  if ( v52 < 0 )
                  {
                    *v14 = v52;
                    free(v44);
                    pthread_mutex_unlock(&stru_3B5288);
                    goto LABEL_28;
                  }
                  usleep(0x1388u);
                  if ( !--v51 )
                    break;
                  v50 = dword_3B52A4;
                }
                strcpy(s, "iic failed to read data\n");
                pthread_mutex_lock(&stru_3B526C);
                logfmt_raw(v70, 0x1000u, 0, s);
                pthread_mutex_unlock(&stru_3B526C);
                v53 = g_zc;
                v54 = 254;
LABEL_55:
                zlog(
                  v53,
                  "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
                  81,
                  "i2c_read_reg",
                  12,
                  v54,
                  100,
                  v70);
                free(v44);
                pthread_mutex_unlock(&stru_3B5288);
                goto LABEL_28;
              }
              v22 = *v16;
              v16 = (__int64 *)*((_DWORD *)v16 + 1);
              if ( v21 < 0 )
                v16 = (__int64 *)v22;
            }
          }
          snprintf(s, 0x800u, "ctx %d not inited\n", v68);
          pthread_mutex_lock(&stru_3B526C);
          logfmt_raw(v70, 0x1000u, 0, s);
          pthread_mutex_unlock(&stru_3B526C);
          zlog(
            g_zc,
            "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
            81,
            "i2c_read_reg",
            12,
            262,
            100,
            v70);
          pthread_mutex_unlock(&stru_3B5288);
        }
LABEL_28:
        pthread_mutex_unlock(&stru_3B5254);
      }
      ++v14;
    }
    while ( v14 != a4 + 8 );
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v23 = a4[2];
    v24 = a4[3];
    v25 = v24 + v23 + a4[4] + a4[5];
    if ( v25 != (unsigned __int16)(a4[6] + (a4[7] << 8)) )
    {
      snprintf(
        s,
        0x800u,
        "power reply the bad crc, crc = 0x%04x, crc_read = 0x%04x\n",
        v25,
        (unsigned __int16)(a4[6] + (a4[7] << 8)));
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v70, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_3B526C);
      v26 = g_zc;
      v27 = 80;
      goto LABEL_32;
    }
    if ( *a2 == *a4 && a2[1] == a4[1] )
    {
      v55 = v23 == 6;
      if ( v23 == 6 )
        v55 = a2[3] == v24;
      v56 = !v55;
      if ( v55 )
        break;
    }
    strcpy(s, "power reply the bad data\n");
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v70, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_3B526C);
    v26 = g_zc;
    v27 = 86;
LABEL_32:
    zlog(
      v26,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/power/bitmain_power_APW9.c",
      83,
      "check_read_back_data",
      20,
      v27,
      100,
      v70);
    v28 = 0;
    v29 = a4 - 1;
    do
    {
      v30 = *++v29;
      v31 = v28++;
      snprintf(s, 0x800u, "read_back_data[%d] = 0x%02x", v31, v30);
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v70, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/power/bitmain_power_APW9.c",
        83,
        "check_read_back_data",
        20,
        92,
        100,
        v70);
    }
    while ( v28 != 8 );
    v57 = v66++;
    snprintf(s, 0x800u, "Send power cmd(0x%02x) failed, retry %d\n", a2[3], v57);
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v70, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/power/bitmain_power_APW9.c",
      83,
      "exec_power_cmd",
      14,
      167,
      100,
      v70);
    if ( v66 == 3 )
    {
      v32 = -2147482880;
      goto LABEL_36;
    }
  }
  v32 = v56;
LABEL_36:
  pthread_mutex_unlock(&power_mutex);
  return v32;
}
