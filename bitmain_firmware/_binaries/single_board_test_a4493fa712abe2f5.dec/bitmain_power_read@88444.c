int __fastcall bitmain_power_read(__int16 a1, void *a2, int a3)
{
  _BOOL4 v3; // r3
  int *v4; // r10
  int v5; // r6
  int v6; // r5
  __int64 *v7; // r7
  int v8; // r8
  size_t v9; // r9
  void *v10; // r0
  void *v11; // r4
  int v12; // r9
  __int64 v13; // kr00_8
  int v14; // r6
  int v15; // r5
  __int64 *v16; // r7
  int v17; // r8
  size_t v18; // r10
  void *v19; // r0
  void *v20; // r4
  int v21; // r10
  __int64 v22; // kr08_8
  int v23; // r3
  char *v24; // r4
  unsigned int v25; // r5
  __int16 v26; // r1
  __int16 v27; // r2
  __int16 v28; // r6
  bool v29; // cc
  __int16 v30; // r2
  __int16 v31; // r1
  __int16 v32; // r6
  __int16 v33; // r2
  __int16 v34; // r2
  int v35; // r1
  __int16 v36; // r2
  int v37; // r10
  unsigned __int8 *v38; // r6
  int v39; // r4
  int v40; // t1
  int v41; // r3
  int v43; // r4
  _DWORD *v44; // r0
  _DWORD *v45; // r8
  unsigned int v46; // r7
  int v47; // r4
  int v48; // r6
  int v49; // r7
  int v50; // r3
  int v51; // r4
  int v52; // r3
  int v53; // r4
  int v54; // r0
  int v55; // r4
  _DWORD *v56; // r0
  _DWORD *v57; // r7
  int v58; // r8
  unsigned int v59; // r5
  int v60; // r9
  int v61; // r5
  size_t v62; // [sp+18h] [bp-185Ch]
  size_t v63; // [sp+18h] [bp-185Ch]
  size_t n; // [sp+1Ch] [bp-1858h]
  unsigned __int8 v65; // [sp+24h] [bp-1850h]
  int v66; // [sp+28h] [bp-184Ch]
  unsigned int v67; // [sp+30h] [bp-1844h]
  int v68; // [sp+34h] [bp-1840h]
  unsigned int v69; // [sp+38h] [bp-183Ch]
  _BOOL4 v70; // [sp+3Ch] [bp-1838h]
  int v71; // [sp+40h] [bp-1834h]
  int v74; // [sp+54h] [bp-1820h] BYREF
  int v75; // [sp+58h] [bp-181Ch] BYREF
  int v76; // [sp+5Ch] [bp-1818h] BYREF
  char v77; // [sp+60h] [bp-1814h]
  char v78; // [sp+61h] [bp-1813h]
  __int16 v79; // [sp+62h] [bp-1812h]
  int v80; // [sp+64h] [bp-1810h] BYREF
  _DWORD src[2]; // [sp+68h] [bp-180Ch] BYREF
  char s[2048]; // [sp+70h] [bp-1804h] BYREF
  char v83[4100]; // [sp+870h] [bp-1004h] BYREF

  v79 = a3 + 12 + a1;
  v77 = a1;
  v78 = a3;
  v76 = 101100117;
  src[0] = 0;
  src[1] = 0;
  v80 = 0;
  if ( dword_12B72C )
  {
    v71 = 0;
    goto LABEL_3;
  }
  v71 = sub_882E8();
  if ( v71 >= 0 )
  {
LABEL_3:
    v66 = dword_12B728[0];
    v3 = (unsigned int)(a3 - 26) > 3;
    if ( (unsigned int)(a3 - 26) > 0xFFFFFFE0 )
      v3 = 0;
    v70 = v3;
    pthread_mutex_lock(&power_mutex);
    v67 = a3 + 7;
    v69 = a3 + 5;
    v68 = 0;
    while ( 1 )
    {
      v4 = &v76;
      do
      {
        if ( pthread_mutex_lock(&stru_3B5254) )
        {
          strcpy(s, "failed to i2c lock\n");
          pthread_mutex_lock(&stru_3B526C);
          logfmt_raw(v83, 0x1000u, 0, s);
          pthread_mutex_unlock(&stru_3B526C);
          zlog(
            g_zc,
            "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c",
            81,
            "iic_write_reg",
            13,
            146,
            100,
            v83);
        }
        else
        {
          v74 = v66;
          if ( pthread_mutex_lock(&stru_3B5288) )
          {
            strcpy(s, "failed to i2c lock\n");
            pthread_mutex_lock(&stru_3B526C);
            logfmt_raw(v83, 0x1000u, 0, s);
            pthread_mutex_unlock(&stru_3B526C);
            zlog(
              g_zc,
              "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
              81,
              "i2c_write_reg",
              13,
              288,
              100,
              v83);
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
                v12 = (*(int (__fastcall **)(int *, void *))(v5 + 36))(&v74, v11);
                free(v11);
                if ( !v12 )
                {
                  v55 = *((_DWORD *)v7 + 5);
                  v63 = *(_DWORD *)(v55 + 4);
                  v56 = malloc(v63);
                  v57 = v56;
                  if ( !v56 )
                    __und(0xFFu);
                  memcpy(v56, *(const void **)v55, v63);
                  v58 = *v57;
                  v59 = v57[1];
                  snprintf(s, 0x800u, "i2c read master = %d, slave = %d\n", *v57, v59);
                  pthread_mutex_lock(&stru_3B526C);
                  logfmt_raw(v83, 0x1000u, 0, s);
                  v60 = 601;
                  pthread_mutex_unlock(&stru_3B526C);
                  zlog(
                    g_zc,
                    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
                    81,
                    "i2c_write_reg",
                    13,
                    295,
                    20,
                    v83);
                  v61 = *(unsigned __int8 *)v4 | 0x1000000 | (v58 << 26) | (v59 >> 4 << 20) | (v59 << 15) & 0x70000;
                  do
                  {
                    if ( *(int *)(dword_3B52A4 + 48) < 0 )
                    {
                      *(_DWORD *)(dword_3B52A4 + 48) = v61;
                      free(v57);
                      pthread_mutex_unlock(&stru_3B5288);
                      goto LABEL_18;
                    }
                    usleep(0x1388u);
                    --v60;
                  }
                  while ( v60 );
                  strcpy(s, "iic not ready 4 write\n");
                  pthread_mutex_lock(&stru_3B526C);
                  logfmt_raw(v83, 0x1000u, 0, s);
                  pthread_mutex_unlock(&stru_3B526C);
                  zlog(
                    g_zc,
                    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
                    81,
                    "i2c_write_reg",
                    13,
                    303,
                    100,
                    v83);
                  free(v57);
                  pthread_mutex_unlock(&stru_3B5288);
                  goto LABEL_18;
                }
                v13 = *v7;
                v7 = (__int64 *)*((_DWORD *)v7 + 1);
                if ( v12 < 0 )
                  v7 = (__int64 *)v13;
              }
            }
            snprintf(s, 0x800u, "ctx %d not inited\n", v74);
            pthread_mutex_lock(&stru_3B526C);
            logfmt_raw(v83, 0x1000u, 0, s);
            pthread_mutex_unlock(&stru_3B526C);
            zlog(
              g_zc,
              "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
              81,
              "i2c_write_reg",
              13,
              313,
              100,
              v83);
            pthread_mutex_unlock(&stru_3B5288);
          }
LABEL_18:
          pthread_mutex_unlock(&stru_3B5254);
        }
        v4 = (int *)((char *)v4 + 1);
      }
      while ( &v80 != v4 );
      v65 = 0;
      v62 = 0;
      usleep((__useconds_t)&loc_61A80);
      do
      {
        if ( pthread_mutex_lock(&stru_3B5254) )
        {
          strcpy(s, "failed to i2c lock\n");
          pthread_mutex_lock(&stru_3B526C);
          logfmt_raw(v83, 0x1000u, 0, s);
          pthread_mutex_unlock(&stru_3B526C);
          zlog(
            g_zc,
            "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c",
            81,
            "iic_read_reg",
            12,
            124,
            100,
            v83);
        }
        else
        {
          v75 = v66;
          if ( pthread_mutex_lock(&stru_3B5288) )
          {
            strcpy(s, "failed to i2c lock\n");
            pthread_mutex_lock(&stru_3B526C);
            logfmt_raw(v83, 0x1000u, 0, s);
            pthread_mutex_unlock(&stru_3B526C);
            zlog(
              g_zc,
              "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
              81,
              "i2c_read_reg",
              12,
              229,
              100,
              v83);
          }
          else
          {
            if ( dword_3B52A0 )
            {
              v14 = *(_DWORD *)dword_3B52A0;
              v15 = *(_DWORD *)dword_3B52A0 + 4;
              v16 = **(__int64 ***)dword_3B52A0;
              while ( (__int64 *)v15 != v16 )
              {
                v17 = *((_DWORD *)v16 + 4);
                v18 = *(_DWORD *)(v17 + 4);
                v19 = malloc(v18);
                v20 = v19;
                if ( v19 )
                  memcpy(v19, *(const void **)v17, v18);
                v21 = (*(int (__fastcall **)(int *, void *))(v14 + 36))(&v75, v20);
                free(v20);
                if ( !v21 )
                {
                  v43 = *((_DWORD *)v16 + 5);
                  n = *(_DWORD *)(v43 + 4);
                  v44 = malloc(n);
                  v45 = v44;
                  if ( !v44 )
                    __und(0xFFu);
                  memcpy(v44, *(const void **)v43, n);
                  v46 = v45[1];
                  v47 = 601;
                  v48 = *v45 << 26;
                  snprintf(s, 0x800u, "i2c read master = %d, slave = %d\n", *v45, v46);
                  pthread_mutex_lock(&stru_3B526C);
                  logfmt_raw(v83, 0x1000u, 0, s);
                  pthread_mutex_unlock(&stru_3B526C);
                  zlog(
                    g_zc,
                    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
                    81,
                    "i2c_read_reg",
                    12,
                    236,
                    20,
                    v83);
                  v49 = (v46 << 15) & 0x70000 | v48 | 0x3000000 | (v46 >> 4 << 20);
                  while ( 1 )
                  {
                    v50 = dword_3B52A4;
                    if ( *(int *)(dword_3B52A4 + 48) < 0 )
                      break;
                    usleep(0x1388u);
                    if ( !--v47 )
                    {
                      strcpy(s, "iic not ready 4 read1\n");
                      pthread_mutex_lock(&stru_3B526C);
                      logfmt_raw(v83, 0x1000u, 0, s);
                      v53 = 243;
                      pthread_mutex_unlock(&stru_3B526C);
                      v54 = g_zc;
                      goto LABEL_56;
                    }
                  }
                  *(_DWORD *)(dword_3B52A4 + 48) = v49;
                  v51 = 601;
                  while ( 1 )
                  {
                    v52 = *(_DWORD *)(v50 + 48);
                    if ( v52 < 0 )
                    {
                      *((_BYTE *)&src[-1] + v62) = v52;
                      free(v45);
                      pthread_mutex_unlock(&stru_3B5288);
                      goto LABEL_32;
                    }
                    usleep(0x1388u);
                    if ( !--v51 )
                      break;
                    v50 = dword_3B52A4;
                  }
                  strcpy(s, "iic failed to read data\n");
                  pthread_mutex_lock(&stru_3B526C);
                  logfmt_raw(v83, 0x1000u, 0, s);
                  v53 = 254;
                  pthread_mutex_unlock(&stru_3B526C);
                  v54 = g_zc;
LABEL_56:
                  zlog(
                    v54,
                    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
                    81,
                    "i2c_read_reg",
                    12,
                    v53,
                    100,
                    v83);
                  free(v45);
                  pthread_mutex_unlock(&stru_3B5288);
                  goto LABEL_32;
                }
                v22 = *v16;
                v16 = (__int64 *)*((_DWORD *)v16 + 1);
                if ( v21 < 0 )
                  v16 = (__int64 *)v22;
              }
            }
            snprintf(s, 0x800u, "ctx %d not inited\n", v75);
            pthread_mutex_lock(&stru_3B526C);
            logfmt_raw(v83, 0x1000u, 0, s);
            pthread_mutex_unlock(&stru_3B526C);
            zlog(
              g_zc,
              "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
              81,
              "i2c_read_reg",
              12,
              262,
              100,
              v83);
            pthread_mutex_unlock(&stru_3B5288);
          }
LABEL_32:
          pthread_mutex_unlock(&stru_3B5254);
        }
        v62 = ++v65;
      }
      while ( v67 > v65 );
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      LOWORD(v23) = v70;
      if ( v70 )
      {
        v24 = &s[24];
        v25 = 2;
        LOWORD(v23) = 0;
        do
        {
          v26 = (unsigned __int8)*(v24 - 33);
          v27 = (unsigned __int8)*(v24 - 34);
          v28 = (unsigned __int8)*(v24 - 32);
          v29 = a3 - 26 > v25 + 33;
          __pld(v24);
          v25 += 32;
          v30 = v27 + v26;
          v31 = (unsigned __int8)*(v24 - 31);
          v32 = v28 + v30;
          v33 = (unsigned __int8)*(v24 - 30);
          v24 += 32;
          v34 = (unsigned __int8)*(v24 - 35)
              + (unsigned __int8)*(v24 - 36)
              + (unsigned __int8)*(v24 - 37)
              + (unsigned __int8)*(v24 - 38)
              + (unsigned __int8)*(v24 - 39)
              + (unsigned __int8)*(v24 - 40)
              + (unsigned __int8)*(v24 - 41)
              + (unsigned __int8)*(v24 - 42)
              + (unsigned __int8)*(v24 - 43)
              + (unsigned __int8)*(v24 - 44)
              + (unsigned __int8)*(v24 - 45)
              + (unsigned __int8)*(v24 - 46)
              + (unsigned __int8)*(v24 - 47)
              + (unsigned __int8)*(v24 - 48)
              + (unsigned __int8)*(v24 - 49)
              + (unsigned __int8)*(v24 - 50)
              + (unsigned __int8)*(v24 - 51)
              + (unsigned __int8)*(v24 - 52)
              + (unsigned __int8)*(v24 - 53)
              + (unsigned __int8)*(v24 - 54)
              + (unsigned __int8)*(v24 - 55)
              + (unsigned __int8)*(v24 - 56)
              + (unsigned __int8)*(v24 - 57)
              + (unsigned __int8)*(v24 - 58)
              + (unsigned __int8)*(v24 - 59)
              + (unsigned __int8)*(v24 - 60)
              + (unsigned __int8)*(v24 - 61)
              + v33
              + v31
              + v32;
          v35 = v25;
          LOWORD(v23) = v23 + v34;
        }
        while ( v29 );
      }
      else
      {
        v25 = 2;
        v35 = 2;
      }
      do
      {
        ++v25;
        v36 = *((unsigned __int8 *)&src[-1] + v35);
        v35 = v25;
        v23 = (unsigned __int16)(v23 + v36);
      }
      while ( v69 > v25 );
      v37 = HIBYTE(v76);
      if ( (unsigned __int16)(*((unsigned __int8 *)&src[-1] + v69) + (*((unsigned __int8 *)&v79 + v67 + 1) << 8)) == v23 )
      {
        if ( (unsigned __int8)v76 == (unsigned __int8)v80
          && BYTE1(v76) == BYTE1(v80)
          && HIBYTE(v80) == HIBYTE(v76)
          && v67 == BYTE2(v80) + 2 )
        {
          pthread_mutex_unlock(&power_mutex);
          if ( a3 )
          {
            memcpy(a2, (char *)src + 1, (unsigned __int8)(a3 - 1) + 1);
            return v71;
          }
          return v71;
        }
        strcpy(s, "power reply the bad data\n");
        pthread_mutex_lock(&stru_3B526C);
        logfmt_raw(v83, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/device/hal/power/bitmain_power_APW9.c",
          83,
          "check_read_back_data",
          20,
          86,
          100,
          v83);
      }
      else
      {
        snprintf(
          s,
          0x800u,
          "power reply the bad crc, crc = 0x%04x, crc_read = 0x%04x\n",
          v23,
          (unsigned __int16)(*((unsigned __int8 *)&src[-1] + v69) + (*((unsigned __int8 *)&v79 + v67 + 1) << 8)));
        pthread_mutex_lock(&stru_3B526C);
        logfmt_raw(v83, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/device/hal/power/bitmain_power_APW9.c",
          83,
          "check_read_back_data",
          20,
          80,
          100,
          v83);
      }
      v38 = (unsigned __int8 *)&v80;
      v39 = 0;
      do
      {
        v40 = *v38++;
        v41 = v39++;
        snprintf(s, 0x800u, "read_back_data[%d] = 0x%02x", v41, v40);
        pthread_mutex_lock(&stru_3B526C);
        logfmt_raw(v83, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/device/hal/power/bitmain_power_APW9.c",
          83,
          "check_read_back_data",
          20,
          92,
          100,
          v83);
      }
      while ( v39 != v67 );
      snprintf(s, 0x800u, "Send power cmd(0x%02x) failed, retry %d\n", v37, v68++);
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v83, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/power/bitmain_power_APW9.c",
        83,
        "exec_power_cmd",
        14,
        167,
        100,
        v83);
      if ( v68 == 3 )
      {
        v71 = -2147482880;
        pthread_mutex_unlock(&power_mutex);
        strcpy(s, "set DA conversion N failed\n");
        V_LOCK();
        logfmt_raw(v83, 0x1000u, 0, s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/device/hal/power/bitmain_power_APW9.c",
          83,
          "bitmain_power_read",
          18,
          537,
          100,
          v83);
        return v71;
      }
    }
  }
  snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_power_read");
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v83, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/power/bitmain_power_APW9.c",
    83,
    "bitmain_power_read",
    18,
    527,
    100,
    v83);
  return v71;
}
