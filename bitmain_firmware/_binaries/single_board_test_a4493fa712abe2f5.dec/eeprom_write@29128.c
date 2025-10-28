int __fastcall eeprom_write(unsigned int a1, int a2, unsigned __int8 *a3, int a4)
{
  _DWORD *v6; // r8
  int v7; // r5
  int v8; // r6
  int v9; // r5
  __int64 *v10; // r7
  int v11; // r8
  size_t v12; // r9
  void *v13; // r0
  void *v14; // r4
  int v15; // r11
  __int64 v16; // kr00_8
  int v17; // r4
  int v19; // r4
  _DWORD *v20; // r0
  _DWORD *v21; // r8
  int v22; // r9
  unsigned int v23; // r5
  int v24; // r11
  int v25; // t1
  int v26; // r5
  int v28; // r0
  size_t n; // [sp+1Ch] [bp-1820h]
  unsigned __int8 *v31; // [sp+20h] [bp-181Ch]
  int v33; // [sp+34h] [bp-1808h] BYREF
  char s[2048]; // [sp+38h] [bp-1804h] BYREF
  unsigned int v35; // [sp+838h] [bp-1004h] BYREF
  __int16 v36; // [sp+83Ch] [bp-1000h]
  char v37; // [sp+83Eh] [bp-FFEh]
  char v38; // [sp+83Fh] [bp-FFDh]

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, "%s: Bad eeprom param, input chain is %d\n", "eeprom_write", a1);
    V_LOCK();
    logfmt_raw((char *)&v35, 0x1000u, 0, s);
    V_UNLOCK();
    v17 = -2147483391;
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
      80,
      "eeprom_write",
      12,
      87,
      100,
      &v35);
    return v17;
  }
  v6 = &dword_12C11C[2 * a1];
  if ( v6[1] )
    goto LABEL_3;
  v35 = a1;
  v36 = 0;
  v38 = a1;
  v37 = 10;
  v28 = iic_init((int)&v35);
  v17 = v28;
  if ( v28 < 0 )
  {
    snprintf(s, 0x800u, "%s: auto exec eeprom_open, but chain %d open eeprom failed\n", "eeprom_write", a1);
    V_LOCK();
    logfmt_raw((char *)&v35, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
      80,
      "eeprom_write",
      12,
      92,
      100,
      &v35);
    return v17;
  }
  v6[1] = 1;
  dword_12C11C[2 * a1] = v28;
LABEL_3:
  if ( a4 )
  {
    v31 = &a3[a4];
LABEL_5:
    v7 = dword_12C11C[2 * a1];
    if ( pthread_mutex_lock(&stru_3B5254) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw((char *)&v35, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_iic.c",
        81,
        "iic_write_reg",
        13,
        146,
        100,
        &v35);
    }
    else
    {
      v33 = v7;
      if ( pthread_mutex_lock(&stru_3B5288) )
      {
        strcpy(s, "failed to i2c lock\n");
        pthread_mutex_lock(&stru_3B526C);
        logfmt_raw((char *)&v35, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
          81,
          "i2c_write_reg",
          13,
          288,
          100,
          &v35);
        pthread_mutex_unlock(&stru_3B5254);
      }
      else
      {
        if ( dword_3B52A0 )
        {
          v8 = *(_DWORD *)dword_3B52A0;
          v9 = *(_DWORD *)dword_3B52A0 + 4;
          v10 = **(__int64 ***)dword_3B52A0;
          while ( v10 != (__int64 *)v9 )
          {
            v11 = *((_DWORD *)v10 + 4);
            v12 = *(_DWORD *)(v11 + 4);
            v13 = malloc(v12);
            v14 = v13;
            if ( v13 )
              memcpy(v13, *(const void **)v11, v12);
            v15 = (*(int (__fastcall **)(int *, void *))(v8 + 36))(&v33, v14);
            free(v14);
            if ( !v15 )
            {
              v19 = *((_DWORD *)v10 + 5);
              n = *(_DWORD *)(v19 + 4);
              v20 = malloc(n);
              v21 = v20;
              if ( !v20 )
                __und(0xFFu);
              memcpy(v20, *(const void **)v19, n);
              v22 = *v21;
              v23 = v21[1];
              snprintf(s, 0x800u, "i2c read master = %d, slave = %d\n", *v21, v23);
              pthread_mutex_lock(&stru_3B526C);
              logfmt_raw((char *)&v35, 0x1000u, 0, s);
              v24 = 601;
              pthread_mutex_unlock(&stru_3B526C);
              zlog(
                g_zc,
                "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
                81,
                "i2c_write_reg",
                13,
                295,
                20,
                &v35);
              v25 = *a3++;
              v26 = v25 | (a2 << 8) | 0x1000000 | (v22 << 26) | (v23 >> 4 << 20) | (v23 << 15) & 0x70000;
              while ( *(int *)(dword_3B52A4 + 48) >= 0 )
              {
                usleep(0x1388u);
                if ( !--v24 )
                {
                  strcpy(s, "iic not ready 4 write\n");
                  pthread_mutex_lock(&stru_3B526C);
                  logfmt_raw((char *)&v35, 0x1000u, 0, s);
                  pthread_mutex_unlock(&stru_3B526C);
                  zlog(
                    g_zc,
                    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
                    81,
                    "i2c_write_reg",
                    13,
                    303,
                    100,
                    &v35);
                  free(v21);
                  goto LABEL_16;
                }
              }
              *(_DWORD *)(dword_3B52A4 + 48) = v26;
              free(v21);
              pthread_mutex_unlock(&stru_3B5288);
              pthread_mutex_unlock(&stru_3B5254);
              a2 = (unsigned __int8)(a2 + 1);
              if ( a3 != v31 )
                goto LABEL_5;
              goto LABEL_24;
            }
            v16 = *v10;
            v10 = (__int64 *)*((_DWORD *)v10 + 1);
            if ( v15 < 0 )
              v10 = (__int64 *)v16;
          }
        }
        snprintf(s, 0x800u, "ctx %d not inited\n", v33);
        pthread_mutex_lock(&stru_3B526C);
        logfmt_raw((char *)&v35, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
          81,
          "i2c_write_reg",
          13,
          313,
          100,
          &v35);
LABEL_16:
        pthread_mutex_unlock(&stru_3B5288);
        pthread_mutex_unlock(&stru_3B5254);
      }
    }
    v17 = -2147483392;
    snprintf(s, 0x800u, "fail to write eeprom by iic, chain:%d, addr: %d", a1, a2);
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw((char *)&v35, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/eeprom/bitmain_eeprom.c",
      80,
      "eeprom_write",
      12,
      102,
      100,
      &v35);
    return v17;
  }
LABEL_24:
  sleep(1u);
  return 0;
}
